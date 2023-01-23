#pragma once
#include <iostream>
using namespace std;


void PasteInArray(int *&arr, int &size, int index, int element)
{
    int *new_arr = new int[size + 1];

    for (int i = 0; i < index; i++)
        new_arr[i] = arr[i];
    new_arr[index] = element;

    for (int i = index + 1; i < size + 1; i++)
        new_arr[i] = arr[i - 1];

    size++;
    arr = new_arr;
}