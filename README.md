# Selection-Sort

Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the list and moving it to the sorted portion of the list. The algorithm repeatedly selects the smallest (or largest) element from the unsorted portion of the list and swaps it with the first element of the unsorted portion. This process is repeated for the remaining unsorted portion of the list until the entire list is sorted. One variation of selection sort is called “Bidirectional selection sort” which goes through the list of elements by alternating between the smallest and largest element, this way the algorithm can be faster in some cases.

![image](https://user-images.githubusercontent.com/125336949/234410585-3393a447-8ee5-477d-8ff0-beefacf5237f.png)
 
# Algorithm 

The algorithm maintains two subarrays in a given array.

- The subarray which already sorted. 
- The remaining subarray was unsorted.
- In every iteration of the selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the beginning of the sorted subarray. 

- After every iteration sorted subarray size increase by one and the unsorted subarray size decrease by one.

- After the N (size of the array) iteration, we will get a sorted array.

# Complexity Analysis of Selection Sort:

Time Complexity: The time complexity of Selection Sort is O(N2) as there are two nested loops:

- One loop to select an element of Array one by one = O(N)
- Another loop to compare that element with every other Array element = O(N)
- Therefore overall complexity = O(N) * O(N) = O(N*N) = O(N2)

# Binary Search
Binary Search is defined as a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(log N). 

# How to Implement Binary Search?

The basic steps to perform Binary Search are:

- Set the low index to the first element of the array and the high index to the last element.
- Set the middle index to the average of the low and high indices.
- If the element at the middle index is the target element, return the middle index.
- Otherwise, based on the value of the key to be found and the value of the middle element, decide the next search space.
- If the target is less than the element at the middle index, set the high index to middle index – 1.
- If the target is greater than the element at the middle index, set the low index to middle index + 1.
- Perform step 2 repeatedly until the target element is found or the search space is exhausted.
