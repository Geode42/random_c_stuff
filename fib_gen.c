#include <stdio.h>

int main() {
	unsigned amount;
	printf("Amount of fibonacci numbers to generate: ");
	scanf("%u", &amount);

	unsigned long long num1 = 0, num2 = 1, temp_num;

	if (amount >= 1) {
		printf("%llu ", num1);
	}
	if (amount >= 2) {
		printf("%llu ", num2);
	}

	for (unsigned short i = 2; i <= amount; i++) {
		temp_num = num2;
		num2 = num1 + num2;
		num1 = temp_num;
		printf("%llu ", num2);
	}

	printf("\n");
	return 0;
}
