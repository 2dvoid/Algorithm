#include <stdio.h>

int findLast(int *arr, int n, int target);

int main () {
    int arr[]={5,5,5,10,10,40,60,70,70,70,70,80};
    int n = sizeof (arr) / sizeof (arr[0]);
    int target =5;
    int result = findLast(arr, n, target);
    if (result==-1) printf("Data is not present\n");
    else printf("Last occurrence found at index %d\n", result);
}

int findLast(int *arr, int n, int target){
    int low = 0, high =  n-1;
    while (low <= high) {
        int  mid = low + (high-low)/2;
        if (arr[mid]==target) {
            // Check if the current number is the last occurrence or not
            if (mid==n-1 || arr[mid+1]!=target) return mid;
            // If not, then start searching right
            else low = mid+1;
        }
        else if (target > arr[mid]) low = mid+1;
        else high = mid-1;
    }
    return -1;
}
