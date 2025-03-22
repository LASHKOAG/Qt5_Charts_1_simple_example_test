#include "mainwindow.h"
#include <QApplication>

#include <QtCharts>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Create a line
    QLineSeries *series = new QLineSeries();
    series->append(0, 6);
    series->append(2, 4);
    series->append(3, 8);

    //Create chart
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->createDefaultAxes();


    QChartView *chartview = new QChartView(chart);
    chartview->setRenderHint(QPainter::Antialiasing);
    chartview->setMinimumSize(800, 600);
    chartview->show();


//    MainWindow w;
//    w.show();

    return a.exec();
}
