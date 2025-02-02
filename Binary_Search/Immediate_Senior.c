#include <stdio.h>

int imdtSenior(int *arr, int n, int target);

int main () {
    int arr[]={5,5,5,10,10,40,60,70,70,70,70,80,80,90,91};
    int n = sizeof (arr) / sizeof (arr[0]);
    int target =80;
    int result = imdtSenior(arr, n, target);
    if (result==-1) printf("Immediate Senior Not Found\n");
    else printf("Immediate Senior is %d\n", result);
    
}

int imdtSenior(int *arr, int n, int target){
    int low = 0, high =  n-1;
    while (low <= high) {
        int  mid = low + (high-low)/2;
        if (arr[mid]==target) {
            if (mid==n-1) return -1;
            else if (arr[mid+1]!=target) return arr[mid+1];
            else low = mid+1;
        }
        else if (target > arr[mid]) low = mid+1;
        else high = mid-1;
    }
    return -1;
}
