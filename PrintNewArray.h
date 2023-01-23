#pragma once
#include <iostream>
using namespace std;

void RandomFillArray(int* arr, int size, int start, int end) {
    for (int i = 0; i < size; ++i) {
        arr[i] = start + rand() % (end - start + 1);

    }
}

void PrintArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    } cout << endl;
}

int CalcValue(int *arr, int size, int key) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            count++;
        }
        return count;
    }
}

void PrintArray2(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == 0) {
            continue;
        }
        cout << arr[i] << " ";
    } cout << endl;
}
