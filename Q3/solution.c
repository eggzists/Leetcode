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