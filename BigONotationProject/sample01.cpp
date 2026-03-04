// Максимальное количество операций (тиков процессора)?
// Ответ:
// Алгоритмическая сложность решения в виде нотации большого О?
// Ответ:
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
int main() {
	int weight = 9;

	double kilo = convertTokilograms(weight);
	double ton = convertTotons(weight);

	cout << kilo << " " << ton << endl;

	return 0;
}

