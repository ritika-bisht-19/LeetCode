class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int x=0,mini=INT_MAX;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    x=nums1[i];
                    mini=min(mini,x);
                    break;
                }
            }
        }
        if(x!=0){
            return mini;
        }
        int Min1=*min_element(nums1.begin(),nums1.end());
        int Min2=*min_element(nums2.begin(),nums2.end());
        return min(Min1*10+Min2, Min2*10+Min1);
    }
};