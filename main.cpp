// Hometask Рузанова Елизавета Task 1
// Задание 1. Написать следующие функции для работы с динамическим массивом:
//■ Функция добавления элемента в конец массива.
//■ Функция вставки элемента по указанному индексу.
//■ Функция удаления элемента по указанному индексу.

#include <iostream>
#include "PushBack.h"
#include "PrintArray.h"
#include "PastArray.h"
#include "DeletInArray.h"
using namespace std;


int main() {

    int size = 7;
    int *arr = new int[size];

    RandomFillArray(arr, size, 5,10);
    PrintArray(arr, size);

    PushBack(arr, size, 2);
    PrintArray(arr, size);

    PasteInArray(arr, size, 2,6);
    PrintArray(arr, size);

    DeleteInArray(arr, size, 4);
    PrintArray(arr, size);


    return 0;
}
