// Task 01 [The Reversing Vector Elements]
// Реверсирование элементов вектора 
// 
// Дан вектор целочисленных значений. Необходимо разработать 
// эффективный алгоритм и реализовать функцию, которая реверсирует
// элементы вектора.
#include"logic.h"
void reverse(int array[DEFAULT_SIZE], int length) {
	int n=length/2;
	for (int i = 0; i < n; i++)
	{
		int t = array[i];
		array[i] = array[length - 1 - i];
		array[length - 1 - i] = array[t];
		
	}

}