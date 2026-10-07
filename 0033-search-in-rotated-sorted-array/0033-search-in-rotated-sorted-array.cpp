class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // Target found
            if (nums[mid] == target)
                return mid;

            // Right half is sorted
            if (nums[mid] <= nums[right]) {

                // Target lies in the sorted right half
                if (nums[mid] < target && target <= nums[right])
                    left = mid + 1;

                // Target is in the left half
                else
                    right = mid - 1;
            }

            // Left half is sorted
            else {

                // Target lies in the sorted left half
                if (nums[left] <= target && target < nums[mid])
                    right = mid - 1;

                // Target is in the right half
                else
                    left = mid + 1;
            }
        }

        return -1;
    }
};