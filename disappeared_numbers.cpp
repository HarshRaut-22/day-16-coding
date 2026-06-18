class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        int i=0;
        while(i<nums.size()){
            int correctindex = nums[i] - 1;
            if(nums[i] != nums[correctindex]){
                swap(nums[i], nums[correctindex]);
            }
            else{
                i++;
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != i+1){
                result.push_back(i+1);
            }
        }
        return result;
    }
};
