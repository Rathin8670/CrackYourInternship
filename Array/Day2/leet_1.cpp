// https://leetcode.com/problems/two-sum/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++){
            int ele=nums[i];
            int req=target-nums[i];
            if(mp.find(req)!=mp.end()){
                return {i,mp[req]};
            } 
            mp[ele]=i; 
        }
        return {-1,-1};
    }
};