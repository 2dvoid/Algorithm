// C program to implement iterative Binary Search
#include <stdio.h>

// An iterative binary search function.
int binarySearch(int *arr, int n, int target) {
    int low = 0, high = n-1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if x is present at mid
        if (arr[mid] == target)
            return mid;

        // If x greater, ignore left half
        if (target > arr[mid])
            low = mid + 1;

        // If x is smaller, ignore right half
        else
            high = mid - 1;
    }

    // If we reach here, then element was not present
    return -1;
}

// Driver code
int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 40;
    int result = binarySearch(arr, n, target);
   if(result == -1) printf("Element is not present in array");
   else printf("Element is present at index %d",result);

}