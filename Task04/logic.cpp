// Сумма элементов [The Sum of elements]
//
// Необходимо разработать функцию, которая вычисляет 
// сумму элементов массива, расположенных между первыми
// максимальным по модулю и минимальным по модулю элементами.

#include "logic.h"

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

int sum_between_first_min_max(int* array, int size) {
	int max = get_max(array, size);
	int min = get_min(array, size);



	return 0;
}