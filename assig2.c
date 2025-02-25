#include <stdio.h>

void reverse(int *arr, int size) {
    int *start = arr;         
    int *end = arr + size - 1; 
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    int size;

    printf("Enter the number of elements:");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    reverse(arr, size);

    printf("Reversed array");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0; 
}
