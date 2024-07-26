class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2) return nums.size(); // Early return if the array has 2 or fewer elements
        
        int i = 1;  // Pointer to place the next valid element
        int count = 1; // To count occurrences of the current element
        
        // Start from the second element and iterate through the array
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] == nums[j - 1]) {
                count++;
            } else {
                count = 1; // Reset count for a new element
            }
            
            // If count is less than or equal to 2, we can place the element at nums[i]
            if (count <= 2) {
                nums[i] = nums[j];
                i++;
            }
        }
        
        return i; // Length of the modified array
    }
};
