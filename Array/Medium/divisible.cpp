class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k)
    {
        int n = nums.size();
        unordered_map<int,int>mp;
        int rem = 0,currsum = 0,count = 0;
        mp[0] = 1;
        for(int i = 0;i<n;i++)
        {
            currsum = currsum + nums[i];
            rem = currsum % k;
            
            if(rem<0)
            {
                rem = rem + k;
            }
            
            if(mp.find(rem) != mp.end())
            {
                count = count + mp[rem];
            }
            
            mp[rem] = mp[rem] + 1;
        }
        
        return count;
    }
};