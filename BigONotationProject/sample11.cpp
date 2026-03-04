// Алгоритмическая сложность решения в виде нотации большого О?
// Ответ
// в лучшем случае (best case):
// в среднем случае (average case):
// в худшем случае (worst case):

#define DEFAULT_SIZE 100

int find_max_element_index(int array[DEFAULT_SIZE], int size)
{
	int index = 0;

	for (int i = 1; i < size; i++)
	{
		if (array[i] > array[index])
		{
			index = i;
		}
	}

	return index;
}

