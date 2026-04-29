class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
   int i =1;
int count =1;
    for(int j =1; j<nums.size(); j++){
if(nums[j-1]==nums[j]){
    count++;
    if(count<=2){
    nums[i]=nums[j]; 
    i++;
    }
   
    
}

 if(nums[j-1]!=nums[j]){
    count=1;
    nums[i]=nums[j];
    i++;
}
}

    
    return i;
    for(int k =0; k<i; k++){
        return nums[k];
    }

    }
};

/*You said:

duplicates are together because sorted

✅ PERFECT

That’s the MOST important observation.

Then:

if duplicates found → count++

✅ correct

Then:

keep storing until count > 2

✅ YES

Then:

when count > 2 skip

✅ EXACTLY

Then:

move j until new unique element comes

✅ YES YES YES
*/