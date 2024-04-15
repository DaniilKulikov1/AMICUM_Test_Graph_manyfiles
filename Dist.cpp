#include"Class.h"
#include<iostream>
using namespace std;

void Graph::Dist()
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i == j)
            {
                dist[i][j] = 0;
            }
            else if (matrix[i][j] == 1)
            {
                dist[i][j] = 1;
            }
            else
            {
                dist[i][j] = big;
            }
        }

    }

}
