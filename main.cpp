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

    //���������� ����� 2 � ������� ������
    F.addEdges(1, 2); // 2 ��������� � 1
    F.addEdges(2, 3); // 2 ��������� � 3
    F.addEdges(2, 4); // 2 ��������� � 4
    F.addEdges(2, 6); // 2 ��������� � 6


    F.addEdges(3, 4); // 3 ��������� � 4
    F.addEdges(3, 5); // 3 ��������� � 5

    F.addEdges(4, 5); // 4 ��������� � 5
    F.addEdges(4, 6); // 4 ��������� � 6

    F.addEdges(5, 6); // 5 c�������� � 6

    F.Floid();

    cout << "����������� ��������� �� 1 �� 6: " << F.dist[1][6] << endl;
    cout << "���������� ���������, ������ � ������ ���� Otvet.txt � ��� �� �����," << endl;
    cout << "��� � ��������� � ������ ���� ��� ����������� ��������� " << endl;
    cout << "���� ��������� ����� ���������� ��������" << endl;

    cout << endl;
    cout << endl;

    ofstream Otvet("Otvet.txt");

    if (Otvet.is_open())
    {
        Otvet << "Short distance 1-6: " << F.dist[1][6] << endl;
        Otvet << "�������� ��������� ����� ������� 1-6: " << F.dist[1][6] << endl;
        Otvet << endl;
        Otvet << endl;
        Otvet << "C ��������� ������ �������" << endl;
        Otvet << "89236349458" << endl;
    }
    else
    {
        cout << "File not open" << endl;
        cout << "���� �� ������" << endl;
    }


    return 0;
}
