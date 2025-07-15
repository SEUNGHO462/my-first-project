#include <stdio.h>
#include <time.h>

int main() {

	int n = 9;
	int c = 6;
	int arr[9] = { 160, 165, 164, 165, 150, 165, 168, 145, 170 };

	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = arr[tmp];
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d", arr[i]);
		if ((i + 1) % c == 0)printf("\n");
	}
	printf("\n");
	return 0;
}