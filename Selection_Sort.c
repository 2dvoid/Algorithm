#include <stdio.h>

void printArray (int *arr, int n);
void selectionSort(int *arr, int n);

int main () {
    int arr[] = {7,8,2,5,4,9,6,3,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf ("Array: ");
    printArray(arr, n);
    printf ("\n");

    selectionSort(arr, n);

    printf ("Sorted Array: ");
    printArray(arr, n);
    printf ("\n");
}

void printArray (int *arr, int n) {
    for (int i=0; i<n; i++) printf ("%d ", arr[i]);
}

void selectionSort(int *arr, int n) {
    int i,j,min,tmp;
    for (i=0; i<(n-1); i++) {
        min = i;
        for (j=i+1; j<n; j++) {
            if (arr[j]<arr[min]) {
                min = j;
            }
        }
        //swap
        tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }
}
