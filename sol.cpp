class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        int i,n=nums.size(),j,count=1,max_count=0;
        for(i=0;i<n-1;i++)
        {
            if(nums[i]+1==nums[i+1])
            {
                count++;
            }
            if(nums[i]==nums[i+1])
            {
                continue;
            }
            if(nums[i]+1!=nums[i+1])
            {
                if(count>=max_count)
                {
                    max_count=count; 
                } 
                count=1;// write this outside
            }
        }
        if(count>=max_count)
        {
            max_count=count;
        } 
        return max_count;
    }
};
