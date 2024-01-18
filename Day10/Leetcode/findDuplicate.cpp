class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        int i = 0;
        int n = nums.size();
        while(i < n) {
            int correct = i+1;
            if(nums[i] == correct) {
                i++;
            } else {
                int position = nums[i] - 1;
                if(nums[i] == nums[position]) {
                    //repeating hai ye
                    i++;
                } else {
                    swap(nums[i], nums[position]);
                }
            }
        }

        vector<int> ans;
        for(int i = 0; i < n; i++) {
            if(nums[i] != i+1) {
                ans.push_back(nums[i]);
            }
        }

        return ans;
        
    }
};