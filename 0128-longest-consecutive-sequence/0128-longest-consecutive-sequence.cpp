class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    if ( nums.size()==0 ) return 0;

    int n=nums.size();
    sort(nums.begin(),nums.end());

    int smaller = INT_MIN;
    int count=0;
    int longest=1;

    for ( int i=0 ; i<n ; i++ )
    {
        if ( nums[i]-1 == smaller )
        {
            count=count+1;
            smaller=nums[i];
        }
        else if ( smaller !=nums[i] )
        {
            count=1;
            smaller=nums[i];
        }
        longest=max(longest,count);
    }
    return longest;
    }
};