# Algorithm

## Sorting:
### Selection Sort:
Selection Sort selects the smallest element from the unsorted array and swaps it with the first element of the unsorted portion of the array.

*Remember: In an array, the first index of the first element is 0 and the last element is (Number of elements - 1).*

**Algorithm:**

for i from 0 to n-1:
* Find the smallest number between array[i] and array [n-1]   
* Swap the smallest number array[i]

**Psudocode:**

* Start from i=0
* Find the smallest element in the unsorted array (elements in the right).
* Store the index number of the smallest element in a variable.
* Swap the smallest element with the ith element.
* Now i=1.
* Repeat the above untill i<(n-1).

**C Code:**      
[Selection Sort](Selection_Sort.c)

**Time Complexity:**   
O(n^2)   
Ω(n^2)   
Θ (n^2)   

This Algorithm is very inefficient with a time. It does not even check if the array is sorted. It will blindly run even if the array is already sorted.
