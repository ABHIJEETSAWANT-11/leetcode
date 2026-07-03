class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     int n=nums.size();

     vector<int> prefix(n),suffix(n),result(n);
     prefix[0]=nums[0];       
     for(int j=1;j<n;j++)
     {
        prefix[j]=prefix[j-1]*nums[j];
     }
        
    suffix[n-1]=nums[n-1];
    for(int j=n-2;j>=0;j--){
        suffix[j]=suffix[j+1]*nums[j];
    }
   
    for(int j=0;j<n ; j++){
        if(j==0)
            result[j]=suffix[j+1];
        
        else if(j==n-1)
            result[j]=prefix[j-1];
        
        else
              result[j]=prefix[j-1]*suffix[j+1];
    }
        

    return result;
    }
};