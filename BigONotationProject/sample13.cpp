// Алгоритмическая сложность решения в виде нотации большого О?
// Ответ:

int function()
{
	const int SIZE = 10;
	int sum = 0;
	
	int matrix[SIZE][SIZE];
	
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			sum += matrix[i][j];
		}
	}
	
	return sum;
}

