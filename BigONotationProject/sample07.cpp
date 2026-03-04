// Алгоритмическая сложность решения в виде нотации большого О?
// Ответ:

#define DEFAULT_SIZE 100

int sum(int array[DEFAULT_SIZE], int size)
{
	int s = 0;

	for (int i = 0; i < size; i++)
	{
		s += array[i];
	}

	return s;
}
