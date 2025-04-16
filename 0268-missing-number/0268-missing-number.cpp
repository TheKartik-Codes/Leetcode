class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int n = nums.size();
    int expectedSum = n * (n + 1) / 2; // Sum of first n natural numbers
    int actualSum = 0;

    for (int num : nums) {
        actualSum += num; // Calculate the sum of elements in the array
    }

    return expectedSum - actualSum; // The missing number  
    }
};