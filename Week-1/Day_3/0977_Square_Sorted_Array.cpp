class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> square;

        int i = 0; 
        int j = n-1;

        while(j >= i){
            int sqr1 = nums[j] * nums[j];
            int sqr2 = nums[i] * nums[i];

            if(sqr1 >= sqr2){
                square.push_back(sqr1);
                j--;
            }

            else{
                square.push_back(sqr2);
                i++;
            }
        }

        reverse(square.begin(), square.end());
        return square;
    }
};
