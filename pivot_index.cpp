class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum = sum + nums[i];
        }
        for(int i=0; i<nums.size(); i++){
            int l_sum=0, r_sum=0;
            for(int j=0; j<i; j++){
                l_sum = l_sum + nums[j];
            }
            r_sum = sum - l_sum - nums[i];
            if(l_sum == r_sum){
                return i;
            }
        }
        return -1;
    }
};
