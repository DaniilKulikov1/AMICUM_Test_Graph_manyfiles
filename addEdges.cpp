#include"Class.h"
#include<iostream>
using namespace std;

void Graph::addEdges(int v1, int v2)
{
    matrix[v1][v2] = 1;
    matrix[v2][v1] = 1;
    Dist();
}
