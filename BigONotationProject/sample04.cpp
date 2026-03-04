// Максимальное количество операций (тиков процессора)?
// Ответ:
// Алгоритмическая сложность решения в виде нотации большого О?
// Ответ:

#include <string>
using namespace std;

string SolveQuadraticEquation(int a, int b, int c)
{
	string result = "Error: coefficient 'a' must be nonzero!";
	
	if (a != 0) {
		double d = b * b - 4 * a * c;
	
		if (d > 0) {
			double x1 = (-b + sqrt(d)) / (2 * a);
			double x2 = (-b - sqrt(d)) / (2 * a);
			result = "There are two roots of equation: x1 ="
				+ to_string(x1) + "; x2 = " + to_string(x2) + ".";
		}
		else if (d == 0) {
			double x = -b / (2 * a);
			result = "There is one root of equation: x = "
				+ to_string(x) + ".";
		}
		else {
			result = "There aren't real roots of equation.";
		}
	}

	return result;
}


