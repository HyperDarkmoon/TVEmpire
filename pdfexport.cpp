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

    // Determine the number of non-empty columns
    int nonEmptyColumns = 0;
    for (int col = 0; col < tableWidget->columnCount(); ++col) {
        bool isEmpty = true;
        for (int row = 0; row < tableWidget->rowCount(); ++row) {
            QTableWidgetItem* item = tableWidget->item(row, col);
            if (item && !item->text().isEmpty()) {
                isEmpty = false;
                break;
            }
        }
        if (!isEmpty) {
            nonEmptyColumns++;
        }
    }

    // Create a QTextTable with the same number of rows and non-empty columns as the QTableWidget
    QTextTable* textTable = cursor.insertTable(tableWidget->rowCount() + 1, nonEmptyColumns);

    // Set the header data in the first row of the QTextTable
    int exportCol = 0;
    for (int col = 0; col < tableWidget->columnCount(); ++col) {
        bool isEmpty = true;
        for (int row = 0; row < tableWidget->rowCount(); ++row) {
            QTableWidgetItem* item = tableWidget->item(row, col);
            if (item && !item->text().isEmpty()) {
                isEmpty = false;
                break;
            }
        }

        // Check if the column is not empty and the header is not "Delete" or "Edit"
        if (!isEmpty && tableWidget->horizontalHeaderItem(col) &&
            (tableWidget->horizontalHeaderItem(col)->text() != "Delete" &&
             tableWidget->horizontalHeaderItem(col)->text() != "Edit")) {
            textTable->cellAt(0, exportCol).firstCursorPosition().insertText(tableWidget->horizontalHeaderItem(col)->text());
            exportCol++;
        }
    }

    // Set the alignment and column width for the QTextTableFormat
    QTextTableFormat tableFormat = textTable->format();
    tableFormat.setAlignment(Qt::AlignHCenter);
    tableFormat.setColumnWidthConstraints(QVector<QTextLength>(nonEmptyColumns, QTextLength(QTextLength::PercentageLength, 100.0 / nonEmptyColumns)));

    textTable->setFormat(tableFormat);

    // Populate the rest of the QTextTable with data from the QTableWidget
    for (int row = 0; row < tableWidget->rowCount(); ++row) {
        exportCol = 0;  // Reset the column count for each row
        for (int col = 0; col < tableWidget->columnCount(); ++col) {
            QTableWidgetItem* item = tableWidget->item(row, col);

            // Check if the column is not empty and the header is not "Delete" or "Edit"
            if (tableWidget->horizontalHeaderItem(col) &&
                (tableWidget->horizontalHeaderItem(col)->text() != "Delete" &&
                 tableWidget->horizontalHeaderItem(col)->text() != "Edit") &&
                item && !item->text().isEmpty()) {
                textTable->cellAt(row + 1, exportCol).firstCursorPosition().insertText(item->text());
                exportCol++;
            }
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
