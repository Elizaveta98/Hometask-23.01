#pragma once
#include <iostream>
using namespace std;


void DeleteInArray(int *&arr, int &size, int index)
{
    size--;
    for (int i = index; i < size; i++)
        arr[i] = arr[i + 1];

}


