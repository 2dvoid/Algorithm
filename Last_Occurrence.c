#include <stdio.h>

int lastOccurrence (int *arr, int low, int high, int target);

int main () {
    int arr[]={1,3,3,3,4,50,60,60,60};
    int n = sizeof (arr) / sizeof (arr[0]);
    int target = 60;
    int result = lastOccurrence(arr, 0, n-1, target);
    
    if (result==-1) printf("Target Not Found\n");
    else printf("Target Found at Position: %d\n", result);
    
}
    
int lastOccurrence(int *arr, int low, int high, int target) {
    if (low > high) return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] == target) {
        if (mid == high || arr[mid+1] != target) return mid;
        // Search Right
        else return lastOccurrence(arr, mid+1, high, target);
    }
    // If target is bigger then Search Right
    else if (target > arr[mid]) return lastOccurrence(arr, mid+1, high, target);
    // If target is smaller then Search Right
    else return lastOccurrence(arr, low, mid-1, target);
}
