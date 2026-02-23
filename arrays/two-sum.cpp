// Problem: Two Sum
// Difficulty: Easy
// Approach: Brute Force (Nested Loop)
// We check every possible pair of numbers in the array.
// For each element nums[i], we compare it with the remaining
// elements nums[j] where j > i.
// If the sum equals the target, we return their indices.
// j starts from i+1 to avoid using the same element twice and to prevent checking the same pair again (no duplicate comparisons).
// Time Complexity: O(n^2) because we use two nested loops to examine all pairs.
// Space Complexity: O(1)


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
        return {};
    }
};