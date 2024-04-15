#include"Class.h"
#include<iostream>
using namespace std;


void Graph::addVertex(int v)
{
    if (Count < n)
    {
        vertex[Count] = v;
        ++Count;
    }
    else if (Count < (n - 1))
    {
        vertex[n - 1] = v;
    }
    else
    {
        cout << "Места нет" << endl;
    }

}