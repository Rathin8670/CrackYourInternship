
// https://leetcode.com/problems/find-the-duplicate-number/description/
class Solution {
public:
    void swap(vector<int>& nums,int a,int b){
        int temp=nums[a];
        nums[a]=nums[b];
        nums[b]=temp;
    }
    int findDuplicate(vector<int>& nums) {
        int i=0;
        int n=nums.size();

        while(i<n){
            int correctInd=nums[i]-1;
            
            if(nums[i]!=i+1){
                if(nums[correctInd]==correctInd+1){
                    return nums[correctInd];
                }else{
                    swap(nums,i,correctInd);
                }
                
            }else{
                i++;
            }
        }
        return -1;
    }
};