// https://leetcode.com/problems/move-zeroes/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int no_of_zeros=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                no_of_zeros++;
            }else if(no_of_zeros>0){
                int temp=nums[i];
                nums[i]=0;
                nums[i-no_of_zeros]=temp;
            }
        }
    }
};