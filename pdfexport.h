// pdfexport.h

#ifndef PDFEXPORT_H
#define PDFEXPORT_H

#include <QTableWidget>

class pdfExport
{
public:
    pdfExport();

    void exportTableToPDF(const QTableWidget* tableWidget);
};

#endif // PDFEXPORT_H
