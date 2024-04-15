#include"Class.h"
#include<iostream>
using namespace std;

void Graph::Floid()
{
    for (int A = 0; A < n; ++A)
    {
        for (int B = 0; B < n; ++B)
        {
            for (int C = 0; C < n; ++C)
            {
                if ((dist[A][B] + dist[B][C]) < dist[A][C])
                {
                    dist[A][C] = dist[A][B] + dist[B][C];
                }
            }
        }
    }


}