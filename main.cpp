#include<iostream>
#include"Class.h"
#include<fstream>
using namespace std;



int main()
{
    setlocale(LC_ALL, "ru");
    Graph F;

    F.addVertex(1);
    F.addVertex(2);
    F.addVertex(3);
    F.addVertex(4);
    F.addVertex(5);
    F.addVertex(6);

    //соединения точки 2 с другими точкам
    F.addEdges(1, 2); // 2 соединено с 1
    F.addEdges(2, 3); // 2 соединено с 3
    F.addEdges(2, 4); // 2 соединено с 4
    F.addEdges(2, 6); // 2 соединено с 6


    F.addEdges(3, 4); // 3 соединено с 4
    F.addEdges(3, 5); // 3 соединено с 5

    F.addEdges(4, 5); // 4 соединено с 5
    F.addEdges(4, 6); // 4 соединено с 6

    F.addEdges(5, 6); // 5 cоединено с 6

    F.Floid();

    cout << "Минимальная дистанция от 1 до 6: " << F.dist[1][6] << endl;
    cout << "Расстояние вычислено, сейчас я создам файл Otvet.txt в той же папке," << endl;
    cout << "где и программа и запишу туда эту минимальную дистанцию " << endl;
    cout << "файл создастся после компиляции програмы" << endl;

    cout << endl;
    cout << endl;

    ofstream Otvet("Otvet.txt");

    if (Otvet.is_open())
    {
        Otvet << "Short distance 1-6: " << F.dist[1][6] << endl;
        Otvet << "Короткая дистанция между точками 1-6: " << F.dist[1][6] << endl;
        Otvet << endl;
        Otvet << endl;
        Otvet << "C уважением Даниил Куликов" << endl;
        Otvet << "89236349458" << endl;
    }
    else
    {
        cout << "File not open" << endl;
        cout << "Файл не открыт" << endl;
    }


    return 0;
}
