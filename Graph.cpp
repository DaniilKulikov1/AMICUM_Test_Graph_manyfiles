#include"Class.h"
#include<iostream>
using namespace std;

   Graph::Graph() :Count(0)
    {//������� ���������� ����
        for (int i = 0; i < n; i++)
        {
            vertex[i] = -1; //���������� ������ -1
            for (int j = 0; j < n; ++j)
            {
                matrix[i][j] = 0; //��� ��������� ����� 0, �.�. ���� ���.
            }
        }

    }



  