class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    
        int n=nums.size();
        
        int count=0;
        int m=0;
        
        for ( int i=0 ; i<n ; i++ )
        {
            if ( nums[i]==1 )
            {
                count++;
            }
            else
            {
                count=0;
            }
            m=maximum(count,m);
        }
        
        return m;
    }
    
    int maximum(int i , int j)
    {
        if ( i > j )
            return i;
        else
            return j;
    }
};