# Problem 1
Given an integer array *nums*, return *true* if any value appears at least twice in the array, and return *false* if every element is distinct.

## Approach
* Brute-Force Approach : Looping through every element and storing it and checking if they are appearing twice or more, and if they do then printing "True" or else "False". Now this approach gives us a Time Complexity of O(n²). Which is really inefficient.
* Optimised Approach : The most optimal approach here would be to use a HashSet(I simply remember it as the dictionary, which it is but I generally refer it as Dictionary). A HashSet allows us to store every value that we have visited on the array, as we iterate over it one by one. So similar to the previous one this will also print "True", if any number appears twice or more or else "False". Now this approach gives us a Time Complexity of O(n), which is desirable than the previous one we got.


## Explanation
* Now, as we see any problem the first thing that comes to my mind. What may be the perfect data structure to use in this scenario, now why use HashSet so the key here is that it supports average O(1) time complexity for insertion and lookup, making it perfect for detecting duplicates efficiently.
* Time Complexity : O(n), we only loop through the array once and each operation of checking and inserting into the set is done in a constant average time.
* Space Complexity : We are using extra space to store all the elements in the array in the *set*, and worst case it contain all the elements of the array.

## Where I got stuck
After coming up with the brute force, I wasn't able to think of a better solution for quite sometime, that was because I hadn't thought of using the *HashSet*. After coming to think of using the *HashSet*, I used it in the solution, this provided a simple and optimal solution that avoided nested loops.

## Key-Concepts Covered 
* HashSet (or Hashing): A fundamental data structure to store unique elements and achieve fast lookups.
* Time Complexity Analysis: Why O(n) is optimal for this problem, and why brute force O(n²) is not ideal for larger arrays.