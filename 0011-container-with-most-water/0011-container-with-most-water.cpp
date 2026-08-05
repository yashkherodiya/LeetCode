class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size()-1;
        int max_area = INT_MIN;
        int length;
        int width;
        int area;
        while(start<end) {
            width = end-start;
            length = min(height[start], height[end]);
            area = width*length;
            if(area>max_area) {
                max_area = area;
            }
            if(height[start]<height[end]){
                start++;
            }
            else {
                end--;
            }
        }
        return max_area;
    }
};