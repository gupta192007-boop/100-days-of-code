//Find the sum of array elements.
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
     int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    printf("\nSum of elements of array: %d",sum);

    return 0;
}