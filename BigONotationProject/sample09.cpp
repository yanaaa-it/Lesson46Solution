// Алгоритмическая сложность решения в виде нотации большого О?
// Ответ:

int* findMaxMin(int array[], int size) {

	int max = array[0];
	int min = array[0];

	for (int i = 1; i < size; i++) {
		if (array[i] > max) {
			max = array[i];
		}
	}

	for (int i = 1; i < size; i++) {
		if (array[i] < min) {
			min = array[i];
		}
	}

	int mas[] = { max, min };

	return mas;
}
