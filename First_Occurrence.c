#include <stdio.h>

int firstOccurrence (int *arr, int low, int high, int target);

int main () {
    int arr[]={1,1,1,1,1,3,3,3,4,50,60,60};
    int n = sizeof (arr) / sizeof (arr[0]);
    int target = 1;
    int result = firstOccurrence(arr, 0, n-1, target);
    
    if (result==-1) printf("Target Not Found\n");
    else printf("Target Found at Position: %d\n", result);
    
}

int firstOccurrence (int *arr, int low, int high, int target) {
    if (low > high) return -1;
    int mid = low + (high-low) / 2;
    if (arr[mid] == target) {
        // If mid is at index 0 OR the element at it's previous index 
        // is not equal to the element at the mid then this is the answer
        if (mid == 0 || arr[mid-1] != target) return mid;
        // Else search to the left
        else return firstOccurrence (arr, low, mid-1, target);
    }
    // If target bigger than mid then search right
    else if (target > arr[mid]) return firstOccurrence(arr, mid+1, high, target);
    // If target smaller than mid then search left
    else return firstOccurrence(arr, low, mid-1, target);
}
