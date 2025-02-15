# Problem
We are given a array *height* of length *n*, there are *n* vertical lines such that the endpoint of any given *i* line are (i,0) and (i, height[i]).
So we have to find out of these lines which of these two lines will have the most amount of water stored in between them(like a container). You have to return the maximum water stored 

## Approach

### Brute-Force Approach
* Now its very intuitive as soon as we see the problem, iterate over the pair of lines *(i, j)*, and then compute the water stored by : ```Area = min(height[i], height[j] X (j-i))```
* After this keep track of the maximum area found
* Time Complexity : ```O(n²)```

### Optimised Approach
* So here we will use Two-Pointer Technique to have a more optimised solution, we don't need to loop through each possible pair. The idea is to maximize the area by keeping the largest possible container and gradually shrinking it while trying to find a taller height, in order to make sure there doesn't exist any other container bigger than this. 

## Explanation
* Now, what I did is, I used the *Two Pointer Technique*. We initialized two pointers one on the left ```l=0``` and the one at the right ``` r = heightSize - 1```
* Now again compute the area of the container using the formula, ```Area = min(height[l],height[r] X (r-l)```
* Update the maximum area found so far.
* Keep moving the pointer to try and find a larger possible container area, until the two pointers meet.
* Time Complexity : ```O(n)```, since we loop through each element


## Where I got stuck
Honestly, it took me a lot of time when it came to come up with the optimised approach. First I tried to do it with arrays, but that changed indices. Next approach was to maybe try to move to the larger height but the key realisation lies in this that as we move along, the width decreases, so we move to the pointer with the smaller height. Optimised solution also took a little bit of time for me to come up with.

## Code
```sh
int maxArea(int* height, int heightSize) {
    int width;
    int h;
    int max=0;
    int area;
    int l=0;
    int r= heightSize-1;
    while (l < r){
        if (height[l]>height[r]){
                h=height[r];
            }
        else{
            h=height[l];
        }
        width = r - l;
        area = width * h;
    if (area > max){
                max = area;
            }
    if (height[l]>height[r]){
        r--;
    }
    else{
        l++;
    }
    }  

    return max;
}
```


## Key-Concepts Covered
* Two-Pointer Technique
* Greedy Approach
