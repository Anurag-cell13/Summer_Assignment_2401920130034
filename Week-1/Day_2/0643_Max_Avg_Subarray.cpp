class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l = 0; 
        int r = k - 1;
        double maxSum = 0;
        for(int i = l; i <= r; i++){
            maxSum += nums[i];
        }

        double sum = maxSum;

        while(r < nums.size() - 1){
            sum -= nums[l];
            l++;
            r++;
            sum += nums[r];
            maxSum = max(maxSum, sum);
        }

        return maxSum / k;
    }
};
