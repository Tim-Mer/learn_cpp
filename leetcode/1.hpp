class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> tmp;
        for (int i=0; i < nums.size(); i++) {
            for (int j=0; j < nums.size(); j++) {
                if ( (i!=j) && ((nums[i] + nums[j]) == target) ) {
                    tmp.push_back(i);
                    tmp.push_back(j);
                    return tmp;
                }
            }
        }
        return tmp;
    }
};