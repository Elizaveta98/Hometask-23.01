//Hometask Рузанова Елизавета
//Задание 3. Написать функцию, которая получает указатель
//на статический массив и его размер. Функция распределяет положительные, отрицательные и нулевые элементы
//в отдельные динамические массивы.

#include <iostream>
#include "PrintArray.h"
#include "SplitArray.h"

using namespace std;

int main() {

    int size = 10;
    int arr[size];


    RandomFillArray(arr, size, -2, 5);
    PrintArray(arr, size);

    SplitPositiveArray(arr,size);
    SplitZeroArray(arr,size);
    SplitNegativeArray(arr, size);




    return 0;
}
