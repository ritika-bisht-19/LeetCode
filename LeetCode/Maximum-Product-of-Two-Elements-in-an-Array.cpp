class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int Max=0;
        for(int i=0;i<nums.size();i++){
            int x=0;
            for(int j=i+1;j<nums.size();j++){
                x=(nums[i]-1)*(nums[j]-1);
                Max=max(Max,x);
            }
        }
        return Max;
    }
};