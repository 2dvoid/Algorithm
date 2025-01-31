# Algorithm

Before devoloping an algorithm, ask yourself two questions:   
1. What exactly do we do on each steps?  
2. Where do we start and finish?

## Searching:
## Binary Search:
* If lower bound exceeds higher bound that means data is not found and we don't have to proceed any further. so return -1.
* If data is present at the Mid, then return the index of the Mid
* If data is smaller than the Mid then search left side
* If data is bigger than the Mid then search right side

**Code:** [Binary_Search.c](Binary_Search/Binary_Search.c)

**Common Problems:**    

**Find the first position of an element in a sorted array:**
* Check if the Target matches the element at the Mid position.
* If matches then we have to check two more conditions. If the Mid is at index 0 Or the previous element of the Mid is different than the Mid element then the first occurrence is in this Mid index. Simply return the Mid index.
* Else Search the left side of the array

**Code:** [First_Occurrence.c](Binary_Search/First_Occurrence.c)

**Find the last position of an element in a sorted array:**
* Modify the algorithm of searching First position of an element.

**Code:** [Last_Occurrence.c](Binary_Search/Last_Occurrrence.c)

## Sorting:

### Bubble Sort:
In this sorting method, the heavier elements gradually sink to the bottom of the list, one by one, with each pass through the data, as lighter elements rise to the top, much like bubbles in water.

**Explanation:**    
To Bubble sort, we have to run two loops, one is nested inside another. The inner loop iterates over all the elements of the array and moves the biggest element to the last position of the unsorted array. When the inner loops completes, only one element is moved to it's appropiate place. So the inner loop must be repeated with the help of the outer loop. The outer loop must be repeated (n-1) times. Cause we don't have to swap the very last element. Because it's next element is already sorted.

The inner loop runs (n-1-i) times during the i-th iteration of the outer loop because the last i elements are already sorted and do not need to be checked again. Inside the inner loop, we compare adjacent elements, and if a swap is performed, we set a flag (swapped) to true.

After the inner loop completes, we check if any swap was done or not by check the swap flag. If no swap was done that means the elements are already sorted, and we don't have to proceed any further and we break the out of the outer loop.

**Code:**
[Bubble Sort.c](Bubble_Sort.c)

**Time Complexity:**   
O(n^2)   
Ω(n)   

### Selection Sort:
Selection Sort selects the smallest element from the unsorted array and swaps it with the first element of the unsorted portion of the array.

*Remember: In an array, the first index of the first element is 0 and the last element is (Number of elements - 1).*

**Algorithm:**

* Start from i=0
* Find the smallest element in the unsorted array (elements in the right).
* Store the index number of the smallest element in a variable.
* Swap the smallest element with the ith element.
* Now i=1.
* Repeat the above untill i<(n-1).

**Pseudocode:**
for i from 0 to n-1:
* Find the smallest number between array[i] and array [n-1]   
* Swap the smallest number array[i]


**Code:**      
[Selection Sort.c](Selection_Sort.c)

**Time Complexity:**   
O(n^2)   
Ω(n^2)   
Θ (n^2)   

This Algorithm is very inefficient with a time. It does not even check if the array is sorted. It will blindly run even if the array is already sorted.
