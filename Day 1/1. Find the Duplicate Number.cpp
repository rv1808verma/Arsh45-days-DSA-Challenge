// https://leetcode.com/problems/find-the-duplicate-number/description/

    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        int ans=0;
        for(int i=0; i<n; i++) mp[nums[i]]++;
        for(auto it=mp.begin(); it!=mp.end(); it++){
            if(it->second>=2){
                ans=it->first;
            }
        }
        return ans;
    }
