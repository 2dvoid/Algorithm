#include <stdio.h>

int findLast(int *arr, int n, int target);
int findFirst(int *arr, int n, int target);

int main () {
    int arr[]={5,5,5,10,10,40,60,70,70,70,70,80};
    int n = sizeof (arr) / sizeof (arr[0]);
    int target =10;
    int first = findFirst(arr, n, target);
    if (first==-1) printf("Data is not present\n");
    else {
        int last = findLast(arr, n, target);
        int frequency = last - first + 1;
        printf("Number of Occurrence is %d\n", frequency);
    }
}

int findFirst(int *arr, int n, int target){
    int low=0, high=n-1;
    while (low<=high) {
        int mid = low + (high-low)/2;
        if (arr[mid]==target) {
            if (mid==0 || arr[mid-1]!=target) return mid;
            else high = mid-1;
        }
        else if (target > arr[mid]) low = mid+1;
        else high = mid-1;
    }
    return -1;
}

int findLast(int *arr, int n, int target){
    int low = 0, high =  n-1;
    while (low <= high) {
        int  mid = low + (high-low)/2;
        if (arr[mid]==target) {
            if (mid==n-1 || arr[mid+1]!=target) return mid;
            else low = mid+1;
        }
        else if (target > arr[mid]) low = mid+1;
        else high = mid-1;
    }
    return -1;
}
