#ifndef EMISSION_H
#define EMISSION_H

#include <QWidget>
#include <QString>
#include <QDate>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

#include "emissionedit.h"
#include "pdfexport.h"
#include "geminidialog.h"
namespace Ui {
class Emission;
}

class Emission : public QWidget
{
    Q_OBJECT

public:
    explicit Emission(QWidget *parent = nullptr);
    ~Emission();
    void refreshTable();
    void onEditButtonClicked(int row);
    void onDeleteButtonClicked(unsigned int id);
    void onAddEmissionDialogClosed();
    void onEdit();
    void filterTable(const QString &text);
    void displayChart();
    void resetInputs();
    void onSummarizeButtonClicked(int row);
    QByteArray vidData;
private slots:
    void on_pushButton_clicked();

    void on_add_btn_2_clicked();

    void on_pdfButton_clicked();


    void on_pdfButton_2_clicked();

    void on_playVideoButton_clicked(unsigned int id);

    void on_add_clicked();

    void on_uploadVid_clicked();

private:

    Ui::Emission *ui;
    EmissionEdit *edit;
    GeminiDialog *Gemini;

};
class CrudEmission {
private:
    unsigned int id;
    QString nom;
    QString genre;
    QDate horaire;
    unsigned int sceneId;
    QString script;

public:
    unsigned int getId() const ;
    QString getNom() const;
    QString getGenre() const;
    QDate getHoraire() const;
    unsigned int getSceneId() const;
    QString getScript() const;

    void setId(unsigned int newId) ;
    void setNom(const QString& newNom);
    void setGenre(const QString& newGenre);
    void setHoraire(const QDate& newHoraire);
    void setSceneId(unsigned int newSceneId);
    void setScript(const QString& script);

    bool create(CrudEmission e);
    CrudEmission read(unsigned int id);
    bool update(unsigned int id, CrudEmission e);
    bool remove(unsigned int id);
    QList<CrudEmission> getAll();
    QVariant getFieldByIndex(int index) const;
    QByteArray videoData;


};


#endif // EMISSION_H
