class Solution {
public:
    int trap(vector<int>& height) {

        int n = height.size();

        vector<int> leftMax(n);
        vector<int> rightMax(n);

        // Build leftMax
        leftMax[0] = height[0];
        for (int i = 1; i < n; i++) {
            leftMax[i] = max(leftMax[i - 1], height[i]);
        }

        // Build rightMax
        rightMax[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rightMax[i] = max(rightMax[i + 1], height[i]);
        }

        // Calculate trapped water
        int water = 0;
        for (int i = 0; i < n; i++) {
            water += min(leftMax[i], rightMax[i]) - height[i];
        }

        return water;
    }
};


//Brute force, complexity O(n^2) it does not run for 2 test cases on submission
// class Solution {
// public:
//     int trap(vector<int>& height) {
// int water =0;
// for(int i =0; i<height.size(); i++){
//     int rightmax =0;
// int leftmax =0;
// for(int j =i; j<height.size(); j++){
//     rightmax = max(rightmax, height[j]);
// }
// for(int j =0; j<=i; j++){
//     leftmax = max(leftmax, height[j]);
// }

// water += min(leftmax, rightmax)-height[i];
// }
// return water;
//     }
// };

