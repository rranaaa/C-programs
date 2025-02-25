#include <stdio.h>

int main() {
    int num;
    int i;
    int prime = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        prime = 0; 
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                prime = 0; 
                break;
            }
        }
    }

    if (prime==1) {
        printf("The number is prime");
    } else {
        printf("The number is not prime");
    }

    return 0;
}
