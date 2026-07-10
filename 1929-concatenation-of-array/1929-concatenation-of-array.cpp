class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> copyofnums=nums;
         vector<int> finalarray;

        for(int i=0;i<copyofnums.size();i++){
               finalarray.push_back(copyofnums[i]);
               
        }
         for(int i=0;i<copyofnums.size();i++){
               finalarray.push_back(copyofnums[i]);
               
        }
        return finalarray;
    }
};


