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

**Code:** [Binary_Search_Recursive.c](Binary_Search/Binary_Search.c) , [Binary_Search_Iterative.c](Binary_Search/Binary_Search_Iterative.c)

**Common Problems:**    

**Find the first position of an element in a sorted array:**
* Check if the Target matches the element at the Mid position.
* If a match is found, we need to check two additional conditions to confirm it's the first occurrence. First, if Mid is at index 0, or second, if the element before Mid is different. If either condition is met, then Mid is the first occurrence, and we simply return its index.
* Else Search the left side of the array. Cause first occurrence would be at the left.

**Code:** [First_Occurrence.c](Binary_Search/First_Occurrence.c)

**Find the last position of an element in a sorted array:**
* Modify the algorithm of searching First position of an element.

**Code:** [Last_Occurrence.c](Binary_Search/Last_Occurrence.c)

**Count the Frequrncy of an element (How many time it appears):**    
* Find the First Occurrence
* Find the Last Occurrence
* Frequency = (Last Occur - First Occur)+1

**Code:** [Frequency.c](Binary_Search/Frequency.c)

**Find the smallest element that is bigger than the target (Immediate Senior)**
* Find the last occurrence of the target.
* If the last occurrence is at the last index of the array then there is no immediate senior.
* If the last occurrence and it's next element are different then the next element is the immediate senior.

**Code:** [Immediate_Senior.c](Binary_Search/Immediate_Senior.c)

**Find the biggest element that is smaller than the target (Immediate Junior)**
* Find the first occurrence of the target.
* If the first occurrence is at the 0th index of the array then there is no immediate junior.
* If the first occurrence and it's previous element are different, then the previous element is the immediate junior.

**Code:** [Immediate_Junior.c](Binary_Search/Immediate_Junior.c)

## Sorting:

### Bubble Sort:
In this sorting method, the heavier elements gradually sink to the bottom of the list, one by one, with each pass through the data, as lighter elements rise to the top, much like bubbles in water.

**Explanation:**    
To Bubble sort, we have to run two loops, one is nested inside another. The inner loop iterates over all the elements of the array and moves the biggest element to the last position of the unsorted array. When the inner loops completes, only one element is moved to it's appropiate place. So the inner loop must be repeated with the help of the outer loop. The outer loop must be repeated (n-1) times. Cause we don't have to swap the very last element. Because it's next element is already sorted.

The inner loop runs (n-1-i) times during the i-th iteration of the outer loop because the last i elements are already sorted and do not need to be checked again. Inside the inner loop, we compare adjacent elements, and if a swap is performed, we set a flag (swapped) to true.

After the inner loop completes, we check if any swap was done or not by check the swap flag. If no swap was done that means the elements are already sorted, and we don't have to proceed any further and we break the out of the outer loop.

**Code:**
[Bubble Sort.c](Sorting/Bubble_Sort.c)

**Time Complexity:**   
O(n^2)   
Ω(n)   
Θ(n^2)

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
[Selection Sort.c](Sorting/Selection_Sort.c)

**Time Complexity:**   
O(n^2)   
Ω(n^2)   
Θ (n^2)   

This Algorithm is very inefficient with a time. It does not even check if the array is sorted. It will blindly run even if the array is already sorted.

### Insertion Sort:   
Insertion Sort builds a sorted array one element at a time by taking each element and placing it in its correct position relative to the already sorted part. It works by shifting larger elements to the right and inserting the current element in its proper place.   

**Visualization:**   
[Video 1](https://www.youtube.com/watch?v=E8svn2Wgri8)    
[Video 2](https://youtu.be/8mJ-OhcfpYg?si=Hiyv4poTvnf8Zrft)    
[Video 3](https://youtu.be/IniSptbttgg?si=P_x6qKLnzRDDFqN6)    

**Steps:**   
1. Start with the second element (index `1`) since a single element is already sorted.
2. Store the current element in a temporary variable (`tmp`).
3. Compare `tmp` with the previous elements.
4. Shift any larger elements one position to the right.
5. Insert `tmp` into its correct position.
6. Repeat steps 2-5 for all elements in the array.
7. Continue until the entire array is sorted.

**Pseudocode:**   
```
INSERTION_SORT(A, n):
    for i = 1 to n-1:
        tmp = A[i]
        j = i - 1
        while j >= 0 and A[j] > tmp:
            A[j + 1] = A[j]  // Shift element to the right
            j = j - 1
        A[j + 1] = tmp  // Insert element at the correct position
```

**Code:**
[Insertion Sort.c](Sorting/Insertion_Sort.c)

**Time Complexity:**   
O(n^2)   
Ω(n)   
Θ (n^2) 
