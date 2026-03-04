// Алгоритмическая сложность решения в виде нотации большого О?
// Ответ:

int function() {
	const int N = 10, M = 10;
	int sum = 0;

	int firstArray[N];
	int secondArray[M];

	for (int i = 0; i < N; i++) {
		sum += firstArray[i];
	}

	for (int i = 0; i < M; i++) {
		sum += secondArray[i];
	}
	
	return sum;
}