#include <stdio.h>

void bubbleSort(int *arr, int n);
void printArray(int *arr, n);

int main() {

    int arr[]={2,2,8,2,4,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Unsorted Array: ");
    printArray(arr,n);
    printf("\n");

    bubbleSort(arr, n);

    printf("Sorted Array  : ");
    printArray(arr,n);
    printf("\n");

}

void bubbleSort(int *arr, int n) {
    
    int i,j,tmp,swapped;
    
    for (i=0; i<(n-1); i++) {
        
        swapped = 0;
        for (j=0; j<(n-1-i); j++) {
            if (arr[j] > arr[j+1]) {
                //swap
                tmp = arr[j];
                arr [j] = arr[j+1];
                arr[j+1] = tmp;
                swapped = 1;
            }
        }
        
        // Swapped=0 means already sorted
        if (!swapped) break;
        
    }
}


// Function to print array
void printArray(int *arr, n) {
    for (int i=0; i<n; i++) printf ("%d ", arr[i]);
}
