//Read and print elements of a one-dimensional array.
#include <stdio.h>

int main() {
    int size;

    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];  

    printf("Enter elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements of the array are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
