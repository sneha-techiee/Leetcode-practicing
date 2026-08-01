class Solution {
public:
    int maxArea(vector<int>& height) {
        //  sort(height.begin(), height.end()){
int left =0;
int right = height.size()-1;
int maxarea = 0;
while(left<right){
    int height_to_consider=min(height[left], height[right]);
    int area = (right-left)*height_to_consider;
maxarea = max(maxarea, area);
if(height[left]<=height[right]){
    left++;
}
else if(height[left]>height[right]){
    right--;
}

}
return maxarea;

    }
};