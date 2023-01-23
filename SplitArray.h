#pragma once

#include <iostream>
using namespace std;



void SplitPositiveArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == 0) {
            continue;
        }
        if (arr[i] < 0) {
            continue;
        }
        cout << arr[i] << " ";
    } cout << endl;
}

void SplitZeroArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) {
            continue;
        }
        if (arr[i] < 0) {
            continue;
        }
        cout << arr[i] << " ";
    } cout << endl;
}

void SplitNegativeArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == 0) {
            continue;
        }
        if (arr[i] > 0) {
            continue;
        }
        cout << arr[i] << " ";
    } cout << endl;
}



