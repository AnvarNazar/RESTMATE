//
// Created by anvar on 24-04-2021.
//

#ifndef RESTMATE_MAINWINDOW_H
#define RESTMATE_MAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

private:
    Ui::MainWindow *ui;
};


#endif //RESTMATE_MAINWINDOW_H
