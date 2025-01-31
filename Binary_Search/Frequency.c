#include <stdio.h>

int firstOccurrence (int *arr, int low, int high, int target);
int lastOccurrence (int *arr, int low, int high, int target);

int main () {
    int arr[]={10,20,30,40,50,60,70,70,70,70,70,70,80,90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 70;
    int first = firstOccurrence(arr, 0, n-1, target);
    if (first==-1) printf("Data Not Found!\n");
    else {
        int last = lastOccurrence(arr, 0, n-1, target);
        int frequency = last - first + 1;
        printf("Data Appears %d times.\n", frequency);
    }
    

}

int firstOccurrence (int *arr, int low, int high, int target) {
    if (low > high) return -1;
    int mid = low + (high-low)/2;
    if (arr[mid]==target) {
        if (mid == 0 || arr[mid-1]!=target) return mid;
        else return firstOccurrence(arr, low, mid-1, target);
    }
    else if (target < arr[mid]) return firstOccurrence(arr, low, mid-1, target);
    else return firstOccurrence(arr, mid+1, high, target);
}

int lastOccurrence(int *arr, int low, int high, int target) {
    if (low > high) return -1;
    int mid = low + (high-low)/2;
    if (arr[mid]==target) {
        if (mid==high || arr[mid+1]!= target) return mid;
        else return lastOccurrence(arr, mid+1, high, target);
    }
    else if (target < arr[mid]) return lastOccurrence(arr, low, mid-1, target);
    else return lastOccurrence(arr, mid+1, high, target);
}
