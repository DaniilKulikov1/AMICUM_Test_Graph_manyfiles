#pragma once
#define n 7
#define big 18
class Graph
{
private:
    int Count; //c������ ������
    int matrix[n][n];//������� ���������� 
    int vertex[n];// ������� ������

public:
    int dist[n][n]; //������� ����������

    Graph();
    void Dist();
    void Print();
    void addVertex(int v);
    void addEdges(int v1, int v2);
    void Floid();
 
};