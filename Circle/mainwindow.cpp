#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->radius_radioButton->setChecked(1);
    ui->radius_radioButton_2->setChecked(1);
    ui->Circumference_radioButton->setChecked(1);
    ui->Circumference_radioButton_2->setChecked(1);
    ui->label_bilibili->setText("<a href='https://space.bilibili.com/1619813949?spm_id_from=333.1007.0.0'>B站：荧光606的个人空间_哔哩哔哩_bilibili</a>");

    this->showMaximized();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtoncalculation_clicked()
{
    double d_1 = ui->diameter->text().toDouble();
    double p_1 = ui->Pi->text().toDouble();
    double c;

    //2πr
    if(ui->radius_radioButton->isChecked()){
        c = 2 * p_1 * d_1;
    }
    //πd
    else{
        c = p_1 * d_1;
    }


    //设置十进制
    QString str_c = QString::number(c, 'g', 10);
    ui->textBrowser->setText(str_c);

}


void MainWindow::on_pushButtoncalculation_2_clicked()
{
    double d_2 = ui->diameter_2->text().toDouble();
    double p_2 = ui->Pi_2->text().toDouble();
    double c;

    //π * r²
    if(ui->radius_radioButton_2->isChecked()){
        c = p_2 * d_2 * d_2;
    }

    //π * (d/2)²
    else{
        c = p_2 * (d_2/2) * (d_2/2);
    }


    //设置十进制
    QString str_c = QString::number(c, 'g', 10);
    ui->textBrowser->setText(str_c);
}


void MainWindow::on_pushButtoncalculation_3_clicked()
{
    double c_2 = ui->diameter_perimeter_area->text().toDouble();
    double p_3 = ui->Pi_3->text().toDouble();
    //double n;
    double d;

    //c/π
    if(ui->Circumference_radioButton->isChecked()){
        d = c_2/p_3;
    }

    //输入面积求直径
    if(ui->area_radioButton->isChecked())
    {
        d = sqrt(c_2/p_3) * 2;
    }

    //r * 2
    if(ui->radius_radioButton_3->isChecked()){
        d = c_2 * 2;
    }


    //设置十进制
    QString str_c = QString::number(d, 'g', 10);
    ui->textBrowser->setText(str_c);
}


void MainWindow::on_pushButtoncalculation_4_clicked()
{
    double c_3 = ui->diameter_perimeter_area_2->text().toDouble();
    double p_4 = ui->Pi_4->text().toDouble();
    //double n_2 = sqrt(c_3);
    double r;

    //c/π/2
    if(ui->Circumference_radioButton_2->isChecked()){
        r = c_3/p_4/2;
    }

    //输入面积求半径
    if(ui->area_radioButton_2->isChecked())
    {
        r = sqrt(c_3/p_4);
    }

    //d/2
    if(ui->diameter_radioButton_3->isChecked()){
        r = c_3/2;
    }


    //设置十进制
    QString str_c = QString::number(r, 'g', 10);
    ui->textBrowser->setText(str_c);
}



