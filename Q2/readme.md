# Problem
We are given a sorted array, in which maybe a number can appear more than once and you are told that a number can appear at most twice, and if any number appears thrice then remove the third of the number and in the output you have to give the total number of elements now present in the array after removal of the third occurred element/ elements. Also the relative order of the list should be 
maintained.

## Approach

### Brute-Force Approach
* Now its very intuitive as soon as we see the problem, we can make a list and store the all the elements and count of occurrences of the element and if any element appears for the third time we ignore all the occurrences here after. Also we count the total elements now left with us
* This gives us a time complexity of O(n), along with a space complexity of O(n) as we store the elements and also loop through the elements. 

### Optimised Approach
* Now this approach is not very intuitive and one can come up with it only when one has solved questions like this before and tried and used these kinds of techniques(At Least its what I think).
* Now since the list is sorted, its obvious that the duplicates will appear together. So here will will use Two-Pointer Technique to have a more optimised solution

## Explanation
* Now, what I did is, since we have a sorted array *nums*, I started from the 2nd index. Where I initialised a constant k which equals to 2, and then we used a for loop to iterate over every element and checked whether that element is different from the (k-2)th element of the array. This allows us to make sure that every number has at most two occurrences. Then we return k.
* Time Complexity : O(n), since we loop through each element
* Space Complexity : O(1)

## Where I got stuck
Honestly, it took me a lot of time when it came to come up with the optimised approach. I had to look for the solution thats when the *Two-Pointer Technique* even struck my mind. As I earlier said "one can come up with it only when one has solved questions like this before and tried and used these kinds of techniques", so I wasn't able to solve it. I had to watch few youtube tutorials and then thats when I finally got to the implementation part.

## Code
```sh
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        k=2 
        for i in range(k, len(nums)):
            if nums[i]!=nums[k-2]:
                nums[k]=nums[i]
                k+=1
        return k
```


## Key-Concepts Covered
* Two-Pointer Technique
