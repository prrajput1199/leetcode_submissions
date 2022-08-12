class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        int left_sum=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
        }
        int right_sum=sum;
        for(int i=0;i<n;i++){
            right_sum=right_sum-nums[i];
            if(left_sum==right_sum){
                return i;
            }
            left_sum=left_sum+nums[i];
        }

        return -1;
    }
};