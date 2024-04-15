#pragma once
#define n 7
#define big 18
class Graph
{
private:
    int Count; //cчётчик вершин
    int matrix[n][n];//матрица смежностей 
    int vertex[n];// матрица вершин

public:
    int dist[n][n]; //матрица расстояний

    Graph();
    void Dist();
    void Print();
    void addVertex(int v);
    void addEdges(int v1, int v2);
    void Floid();
 
};