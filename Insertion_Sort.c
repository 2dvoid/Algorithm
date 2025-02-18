#include <stdio.h>

void insertionSort(int *arr, int n);
void printArray(int *arr, int n);

int main () {
    int arr[]={0,0,4,4,5,8,66,9,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Unsorted Array: ");
    printArray(arr, n);
    printf("\n");
    printf("Calling Insertion Sort!!\n");
    insertionSort(arr, n);
    printf("Sorted Array: ");
    printArray(arr, n);
    printf("\n");
}

void printArray(int *arr, int n){
    for (int i=0; i<n; i++) printf("%d ", arr[i]);
}

void insertionSort(int *arr, int n){
    int i,j,tmp;
    // Pass
    for (i=1; i<n; i++) {
        tmp = arr[i];
        j=i-1;
        // Compare tmp with the sorted portion
        while (j>=0 && arr[j]>tmp) {
            // Shift element to right
            arr[j+1] = arr[j];
            j--;
        }
        // Set the tmp in the empty slot
        arr[j+1] = tmp;
    }

}
