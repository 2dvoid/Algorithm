#include <stdio.h>

int binarySearch(int *arr, int low, int high, int key);

int main () {
int arr[]={1,2,3,4,5,6,7,8,9,10};
int n = sizeof(arr)/sizeof(arr[0]);
int key = 8;
int pos = binarySearch(arr, 0, n-1, key);
if (pos==-1) printf ("Data not found.\n");
else printf("Data found at position: %d\n", pos);
}


int binarySearch(int *arr, int low, int high, int key) {
    if (low > high) return -1;
    int mid = low + (high-low) / 2;
    if (arr[mid]==key) return mid;
    else if (key < arr[mid]) return binarySearch (arr, low, mid-1, key);
    else return binarySearch (arr, mid+1, high, key); 
}

