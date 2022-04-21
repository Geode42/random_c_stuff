#include <stdio.h>

int main() {
	unsigned amount;
	printf("Amount of fibonacci numbers to generate: ");
	scanf("%u", &amount);

	if (amount == 0) {
		return 0;
	}
	if (amount >= 1) {
		printf("%i\n", 0);
	}
	if (amount >= 2) {
		printf("%i\n", 1);
	}

	unsigned long long num1 = 0, num2 = 1, temp_num;

	for (short i = 2; i <= amount; i++) {
		temp_num = num2;
		num2 = num1 + num2;
		num1 = temp_num;
		printf("%llu\n", num2);
	}

	return 0;
}
