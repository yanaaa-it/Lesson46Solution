// Алгоритмическая сложность решения в виде нотации большого О?
// Ответ
// в лучшем случае (best case):
// в среднем случае (average case):
// в худшем случае (worst case):

#define DEFAULT_SIZE 100

int find_element(int array[DEFAULT_SIZE], int size, int value) {
	for (int i = 0; i < size; i++)
	{
		if (array[i] == value) {
			return i;
		}
	}
	return -1;
}

