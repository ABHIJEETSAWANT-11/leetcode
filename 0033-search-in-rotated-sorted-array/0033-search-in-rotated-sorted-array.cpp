class Solution {
public:
    int search(vector<int>& nums, int target) {
     
     int n=nums.size();
     int left =0 , right =n-1;  
     int number=0;
    while(left<=right){
     number =left + (right - left) /2;
    if(nums[number] == target)return number;

    if(nums[left]<=nums[number]){
            if(nums[left]<=target && target<nums[number])
            right=number-1;
            else
            left=number+1;
        }
   
  else{
            if(nums[right]>=target && target>nums[number])
             left=number +1;
            else
            right=number -1;
        }
    }
   return -1;
    }
};