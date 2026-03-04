// Алгоритмическая сложность решения в виде нотации большого О?
// Ответ:

int function() {
	const int SIZE = 10;
	int sum = 0;

	int firstArray[SIZE];
	int secondArray[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		sum += firstArray[i];
	}

	for (int i = 0; i < SIZE; i++)
	{
		sum += secondArray[i];
	}

	return sum;
}