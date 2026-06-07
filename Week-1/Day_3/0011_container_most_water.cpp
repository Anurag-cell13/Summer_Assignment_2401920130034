class Solution {
public:
    int maxArea(vector<int>& height) {
        int i= 0;
        int j= height.size()-1;
        int area = 0;
        while(i < j){
            if(height[i] <= height[j]){
                int b = min(height[i], height[j]);
                area = max(area, abs(i -j) * b);
                i++;
            }
            else{
                int b = min(height[i], height[j]);
                area = max(area, abs(i -j) * b);
                j--;
            }
        }
        return area;
    }
};
