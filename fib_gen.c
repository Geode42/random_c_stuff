#include <stdio.h>

// Fib numbers are printed and saved to a .txt file

int main() {
	unsigned amount;
	printf("Amount of fibonacci numbers to generate: ");
	scanf("%u", &amount);

	unsigned long long num1 = 0, num2 = 1, temp_num;
	FILE *f_pointer = fopen("fibonacci numbers.txt", "w");

	if (amount >= 1) {
		printf("%llu\n", num1);
		fprintf(f_pointer, "%llu\n", num1);
	}
	if (amount >= 2) {
		printf("%llu\n", num2);
		fprintf(f_pointer, "%llu\n", num2);
	}

	for (unsigned short i = 3; i <= amount; i++) {
		temp_num = num2;
		num2 = num1 + num2;
		num1 = temp_num;
		printf("%llu\n", num2);
		fprintf(f_pointer, "%llu\n", num2);
	}

	fclose(f_pointer);
	return 0;
}
