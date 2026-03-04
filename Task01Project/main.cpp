#include"util.h"

int main() {
	int length;
	int array[DEFAULT_SIZE];

	do {
		cout << "input length:";
		cin >> length;
	} while (length <= 0);

	user_init(array, length);
	
	reverse(array, length);


	return 0;
}