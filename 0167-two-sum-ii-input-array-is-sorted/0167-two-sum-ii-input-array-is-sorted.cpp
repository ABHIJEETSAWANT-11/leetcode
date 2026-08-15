class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int n =numbers.size()-1;
       int left =0; 
       int right = n;
       int sum=0;
       while(left<right){
            sum=numbers[left]+numbers[right];
            if(sum==target){
                return {left+1,right+1};
            }
            if(sum>target){
                right--;
            }
            if(sum<target){
                left++;
            }
       }
      return {};
    }
};