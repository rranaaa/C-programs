#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);

    int a = num1;
    int b = num2;

    while (b != 0) {
        int temp = b;  
        b = a % b;    
        a = temp;     
    }

    
    printf("The GCD is %d.\n", a);

    return 0; 
}
