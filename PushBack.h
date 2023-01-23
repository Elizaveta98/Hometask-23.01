#pragma once

#include <iostream>

using namespace std;

void PushBack(int *&arr, int&size, int value){
    int *newArray = new int [size+1];
    for (int i = 0; i < size; i++) {
        newArray[i] = arr[i];
    }
    newArray[size]=value;
    size++;
    arr = newArray;
}