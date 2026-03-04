// Максимальное количество операций (тиков процессора)?
// Ответ:
// Алгоритмическая сложность решения в виде нотации большого О?
// Ответ:

int factorial(int number) {
	if (number < 0) {
		return -1;
	}

	int factorial = 1;

	for (int i = 2; i < number; i++)
	{
		factorial *= i;
	}

	return factorial;
}
