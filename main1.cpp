//Hometask Рузанова Елизавета
//Задание 2. Написать функцию, которая получает указатель на динамический массив и его размер.
// Функция должна удалить из массива все простые числа и вернуть
//указатель на новый динамический массив.
#include <iostream>
#include "PrintNewArray.h"
using namespace std;


int main() {

    int size = 10;
    int arr[size];

    RandomFillArray(arr,size, 4,7);
    PrintArray(arr, size);

   int element = CalcValue(arr, size, 6);
   int size_result = size-element;
   int *arr_result = new int[size_result];
    for (int i = 0, j = 0; i < size ; ++i) {
        if (arr[i]!=6) {
            arr_result[j] = arr[i];
            j++;
        }
    }

    PrintArray2(arr_result, size_result);

    return 0;
}
