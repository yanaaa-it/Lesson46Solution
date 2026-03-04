// Максимальное количество операций (тиков процессора)?
// Ответ:8
// Алгоритмическая сложность решения в виде нотации большого О?
// Ответ:о от 1

#define FIRST_PERIOD 200
#define SECOND_PERIOD 300

int count_dragon_heads(int age)
{
	int count = 1;
	if (age > 0) {
		if (age <= FIRST_PERIOD) {
			count += age * 3;
		}
		else if (age <= SECOND_PERIOD) {
			count += 200 + age * 2;
		}
		else {
			count += 800 + age;
		}
	}
	else {
		count = 0;
	}

	return count;
}

