class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int arrSize = nums.size();
        vector<int> result(arrSize);

        for (int i = 0; i < arrSize; i++) {
            if (nums[i] == 0) {
                result[i] = 0;
            }
            else {
                int newIndex = ((i + nums[i]) % arrSize + arrSize) % arrSize;
                result[i] = nums[newIndex];
            }
        }

        return result;
    }
};