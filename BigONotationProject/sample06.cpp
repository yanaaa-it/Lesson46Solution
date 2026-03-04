// Максимальное количество операций (тиков процессора)?
// Ответ:
// Алгоритмическая сложность решения в виде нотации большого О?
// Ответ:

#define DEFAULT_SIZE 100

int find_max_value(int array[DEFAULT_SIZE], int size)
{
	int max = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}
	return max;
}
