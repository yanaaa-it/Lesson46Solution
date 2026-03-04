// Максимальное количество операций (тиков процессора)?
// Ответ:2
// Алгоритмическая сложность решения в виде нотации большого О?
// Ответ:о от 1
#include<iostream>
using namespace std;
#define GRAMS_PER_KILOGRAM 1000
#define GRAMS_PER_TON 100000

double convertTokilograms(long weight)
{
	return weight / GRAMS_PER_KILOGRAM;
}

double convertTotons(long weight)
{
	return weight / GRAMS_PER_TON;
}

