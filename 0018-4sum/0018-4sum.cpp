class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int sz = nums.size()-1;
        
        for(int i = 0; i<sz; i++) {
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            for(int j=i+1; j<sz; j++) {
                if(j>i+1 && nums[j]==nums[j-1]){
                    continue;
                }
                int left = j+1;
                int right = sz;
                while(left<right){
                    long long sum = (long long)nums[i]+nums[j]+nums[left]+nums[right];
                    if(sum==target){
                        ans.push_back({
                            nums[i],
                            nums[j],
                            nums[left],
                            nums[right]
                        });
                        left++;
                        right--;
                        while(left<right && nums[left]==nums[left-1]){
                            left++;
                        }
                        while(left<right && nums[right]==nums[right+1]){
                            right--;
                        }
                    }

                    else if(sum>target){
                        right--;
                    }

                    else if(sum<target){
                        left++;
                    }
                }
            }
        }
        return ans;
    }
};