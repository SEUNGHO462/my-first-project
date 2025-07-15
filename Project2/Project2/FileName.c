#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*int main(void)
{
	int a,b;

	for (a = 2; a <= 9; a++) {
		for (b = 1; b <= 9; b++) {
			printf("%d * %d = %d 입니다.\n", a, b, a * b);
		}
	}
	return 0;
}*/


/*int main(void)
{
	int n, m;
	int i, j;

	printf(" ");
	scanf_s("%d %d", &n, &m);

	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < m + 1; j++) {
			printf("%d %d\n", i, j);
		}
	}

	return 0;
}*/


/*int main(void)
{
	int num1;

	printf("정수 1개를(1~100) 입력하시오 : ");
	scanf_s("%d", &num1);

	for (int i = 1; i < num1 + 1; i--) {
		if (i <= 0) {
			continue;
		}
		printf("%d\n", i);
	}
	return 0;
}*/


/*int main(void)
{
	int a, b;

	printf("두 수를 입력하시오 : ");
	scanf_s("%d %d", &a, &b);

	for (int i = a; i <= b;  i++) {
		printf("%d", i);
	}
	return 0;
}*/


/*int main(void)
{
	int n;

	printf("길이를 입력하시오 : ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}*/


/*int main(void)
{
	int n;

	printf("높이를 입력하시오 : ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf(" ");
		}
		printf("**");
		printf("\n");
	}
	
	return 0;
}*/


/*int main(void)
{
	int n;

	printf("높이를 입력하시오 : ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <=n-i; j++) {
			printf(" ");
		}
		printf("****");
		printf("\n");
	}
	return 0;
}*/


/*int main(void) {
	int a;
	printf("16진수 하나를 입력하시오(A~F): ");
	scanf_s("%X", &a);

	for (int i = 1; i < 16; i++) {
		printf("%X * %X = %X\n", a, i, a * i);
	}
	return 0;
}*/


/*int main() {
	int h = 5, r = 5;
	for (int k = 0; k < r; k++) {
		for (int i = 0; i < h * 2 - 1; i++) {
			for (int j = 0; j < h * 2 - 1; j++) {
				if (i < h) {
					if (i == j)
						printf("*");
					else
						printf(" ");
				}
				else {
					if ((h * 2 - 1) - i == j + 1) {
						printf("*");
					}
					else {
						printf(" ");
					}
				}
			}
			printf("\n");
		}
	}
}*/


int n = 4, m = 3;
for (int i = 0; i < m; i++) {
	for (int j = 0; j < n; j++) {
		printf("%d", j);
		if (i == 0 || i == m - 1) {
			if (j == 0 || j == n - 1) {
				printf("+");
			}
			else {
				printf("-");
			}
		}
		
		else
			if (j == 0 || j == n - 1)
			{
				printf("|");
			}
			else {
				printf(" ");
			}
	}
	printf("\n");
}