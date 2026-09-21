class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int sum=0;
        //int sizee=k-1;
        for(int i=0;i<k;i++){
              nums[0] = nums[0] - nums[0] * 2;
            sort(nums.begin(), nums.end());
           // nums[i]=nums[i]-nums[i]*2;
            
        }
         for(int i=0;i<nums.size();i++){
           
            sum=sum +nums[i];
           
        }

        return sum;

    }
};