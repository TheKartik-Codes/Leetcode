class Solution {
public:
    void reverseString(vector<char>& s) {
     
    int low=0;
    int high=s.size()-1;
        
    while ( low < high )
    {
        char a=s[low];
        s[low]=s[high];
        s[high]=a;
        low++;
        high--;
    }
    }
};