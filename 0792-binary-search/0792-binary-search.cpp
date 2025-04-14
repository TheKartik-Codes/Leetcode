class Solution {
public:
    int search(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Calculate the middle index

        if (nums[mid] == target) {
            return mid; // Target found
        } else if (nums[mid] < target) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }

    return -1;    
    }
};