#include <stdio.h>

int solution(int n);

int main(void) {
    
    int n;

    scanf_s("%d", &n);

    printf("%d", solution(n));

    return 0;
}

int solution(int n) {
    if (n < 3) {
        return -1;
    }

    else if (n >= 3 && n < 5) {
        
    }

    else {
        return -1;
    }
}