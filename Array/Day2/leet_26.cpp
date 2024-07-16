
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        int prev=INT_MIN;
        for(int x:nums){
            if(x!=prev){
                nums[k++]=x;
            }
            prev=x;
        }
        return k;
    }
};