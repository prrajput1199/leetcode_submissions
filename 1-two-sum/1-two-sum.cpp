class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     vector<pair<int,int>>v;
        int n=nums.size();
        int s=0;
        int e=n-1;
        
        for(int i=0;i<n;i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        while(s<=e){
            int sum=v[s].first+v[e].first;
            if(sum==target){
                return {v[s].second,v[e].second};
            }
            if(sum>target){
                e--;
            }
            else{
                s++;
            }
        }
        return {-1,-1};
        }  
};