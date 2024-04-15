#include"Class.h"
#include<iostream>
using namespace std;

   Graph::Graph() :Count(0)
    {//счётчик обозначили нулём
        for (int i = 0; i < n; i++)
        {
            vertex[i] = -1; //отсутствие вершин -1
            for (int j = 0; j < n; ++j)
            {
                matrix[i][j] = 0; //все смежности равны 0, т.к. рёбер нет.
            }
        }

    }



  