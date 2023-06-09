﻿// OOPLab8T.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <cstring>
#include <iostream>
#include "example.h"
using namespace std;
int main()
{
    int r;       
    std::cout << "Lab 8 \n";
     std::cout << " Run example press 1 \n";
     std::cin >> r; if (r == 1) example();
    
//     Завдання 1
    template <typename T>
void findMax(T arr[], int size, T& maxVal, int& count) {
    maxVal = arr[0];
    count = 1;

    for (int i = 1; i < size; i++) {
        if (strcmp(arr[i], maxVal) > 0) {
            maxVal = arr[i];
            count = 1;
        }
        else if (strcmp(arr[i], maxVal) == 0) {
            count++;
        }
    }
}

int main() {
    const int size = 5;
    const char* arr[size] = { "apple", "banana", "orange", "grape", "banana" };
    const char* maxVal;
    int count;

    findMax(arr, size, maxVal, count);

    cout << "Max value: " << maxVal << endl;
    cout << "Count: " << count << endl;

    return 0;
}
//     завдання 2
    
template <typename T>
void shellSort(T arr[], int size) {
    int gap = size / 2;

    while (gap > 0) {
        for (int i = gap; i < size; i++) {
            T temp = arr[i];
            int j = i;

            while (j >= gap && strcmp(arr[j - gap], temp) > 0) {
                arr[j] = arr[j - gap];
                j -= gap;
            }

            arr[j] = temp;
        }

        gap /= 2;
    }
}

int main() {
    const int size = 5;
    const char* arr[size] = { "banana", "grape", "apple", "orange", "kiwi" };

    cout << "Before sorting:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    shellSort(arr, size);

    cout << "After sorting:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
    
}

