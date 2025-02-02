#include <stdio.h>

int findFirst(int *arr, int n, int target);

int main () {
    int arr[]={5,5,5,10,10,40,60,70,70,70,70,80};
    int n = sizeof (arr) / sizeof (arr[0]);
    int target =70;
    int result = findFirst(arr, n, target);
    if (result==-1) printf("Data is not present\n");
    else printf("First occurrence found at index %d\n", result);
}


int findFirst(int *arr, int n, int target){
    int low=0, high= n-1;
    while (low<=high) {
        int mid = low + (high-low)/2;
        if (arr[mid]==target) {
            // Check if the current number is the first occurrence or not
            if (mid==0 || arr[mid-1]!=target) return mid;
            // If not, then start searching to the left
            else high = mid-1;
        }
        else if (target > arr[mid]) low = mid+1;
        else high = mid-1;
    }
    return -1;
}
