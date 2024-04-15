#include"Class.h"
#include<iostream>
using namespace std;


void Graph::Print()
{
    cout << "Count: " << Count << endl;
    cout << "vertex: ";
    for (int i = 0; i < Count; ++i)
    {
        cout << vertex[i] << " ";
    }

    cout << endl;
    cout << "matrix: ";

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << matrix[i][j] << " ";
        }

    }

    cout << endl;
    cout << "dist :";
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << dist[i][j] << " ";
        }

    }
}