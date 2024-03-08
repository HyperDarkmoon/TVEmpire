// pdfexport.cpp

#include "pdfexport.h"
#include <QPrinter>
#include <QPdfWriter>
#include <QTextDocument>
#include <QTextCursor>
#include <QTextTable>
#include <QTextTableCell>
#include <QTextTableFormat>
#include <QFileDialog>
#include <QMessageBox>
#include <QFile>

pdfExport::pdfExport()
{

}

void pdfExport::exportTableToPDF(const QTableWidget* tableWidget)
{
    // Create a QTextDocument to hold the content
    QTextDocument document;

    // Create a QTextCursor to manipulate the document
    QTextCursor cursor(&document);

    // Create a QTextTable with the same number of rows and columns as the QTableWidget
    QTextTable* textTable = cursor.insertTable(tableWidget->rowCount() + 1, tableWidget->columnCount());

    // Set the header data in the first row of the QTextTable
    for (int col = 0; col < tableWidget->columnCount(); ++col) {
        QTableWidgetItem* item = tableWidget->horizontalHeaderItem(col);
        if (item)
            textTable->cellAt(0, col).firstCursorPosition().insertText(item->text());
    }

    // Populate the rest of the QTextTable with data from the QTableWidget
    for (int row = 0; row < tableWidget->rowCount(); ++row) {
        for (int col = 0; col < tableWidget->columnCount(); ++col) {
            QTableWidgetItem* item = tableWidget->item(row, col);
            if (item)
                textTable->cellAt(row + 1, col).firstCursorPosition().insertText(item->text());
        }
    }

    // Save the PDF file
    QString filePath = QFileDialog::getSaveFileName(nullptr, "Save PDF", "", "PDF Files (*.pdf)");

    if (!filePath.isEmpty()) {
        // Ensure the file has a .pdf extension
        if (!filePath.endsWith(".pdf", Qt::CaseInsensitive))
            filePath += ".pdf";

        // Create a QPrinter and set it up for PDF output
        QPrinter printer(QPrinter::PrinterResolution);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setOutputFileName(filePath);

        // Print the QTextDocument to the PDF
        document.print(&printer);

        QMessageBox::information(nullptr, "Export Successful", "Table successfully exported to PDF.");
    }
}
