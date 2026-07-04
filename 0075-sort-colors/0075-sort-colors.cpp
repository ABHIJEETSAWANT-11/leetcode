class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> red, white, blue;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) red.push_back(0);
            else if(nums[i] == 1) white.push_back(1);
            else blue.push_back(2);
        }

        nums.clear();

        nums.insert(nums.end(), red.begin(), red.end());
        nums.insert(nums.end(), white.begin(), white.end());
        nums.insert(nums.end(), blue.begin(), blue.end());
    }
};