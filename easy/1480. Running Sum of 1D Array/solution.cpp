class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sums = 0;

        for(int i = 0; i < nums.size(); ++i){
            sums += nums[i];
            nums[i] = sums;
        }
        
        return nums;
    }
};