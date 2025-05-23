﻿// Среднее арифметическое неэкстремальных элементов
// [The arithmetic mean of non - extreme elements]
//
// Дан вектор натуральных чисел. Необходимо разработать 
// функцию, которая вычисляет среднее рифметическое элементов
// вектора без учета минимального и максимального элементов.

#include "logic.h"

// 0  1  2  3 4
// 45 7 90 34 1

int get_max(int* array, int size) {
	int value = array[0];

	for (int i = 0; i < size; i++)
	{
		if (array[i] > value) {
			value = array[i];
		}
	}

	return value;
}

int get_min(int* array, int size) {
	int value = array[0];

	for (int i = 0; i < size; i++)
	{
		if (array[i] < value) {
			value = array[i];
		}
	}

	return value;
}


double calculate_arithmetical_mean_of_nonextreme_elements(int* array, int size) {
	int max = get_max(array, size);
	int min = get_min(array, size);

	double sum = 0;
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[i] != max && array[i] != min) {
			sum += array[i];
			count++;
		}
	}

	return count > 0 ? sum / count : 0.0;
}