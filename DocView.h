#ifndef DOC_VIEW_H
#define DOC_VIEW_H

#include <QMainWindow>
#include "PrimitiveController.h"


QT_BEGIN_NAMESPACE
namespace Ui { class DocView; }
QT_END_NAMESPACE

class DocView : public QMainWindow
{
    Q_OBJECT

public:
    DocView(QWidget *parent = nullptr);
    ~DocView();

signals:
    void textBrowserChanged(QString);


private slots:
    void on_pBgetFile_clicked();

    void on_tBCircle_clicked();

    void on_tBTriangle_clicked();

    void on_tBSquare_clicked();

    void on_pBGenerateFile_clicked();

    void on_pBSaveFile_clicked();


    void adText2textBrowser(QString);

    void on_textEdit_textChanged();

private:
    Ui::DocView *ui;

    PrimitiveController * doc;

    QString str;
    // lkz

};
#endif // DOC_VIEW_H
