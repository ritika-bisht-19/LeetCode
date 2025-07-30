class Solution {
public:
    bool check(int mid,int days,vector<int>weights){
        int cnt=1;
        int prev=weights[0];
        for(int i=1;i<weights.size();i++)
        {
            if(prev+weights[i]<=mid)
            {
                prev+=weights[i];
            }
            else
            {
                prev=weights[i];
                cnt++;
            }
        }
        if(cnt<=days)return true;
        return false;
    }
    int shipWithinDays(vector<int>& w, int d) {
        int mini=*max_element(w.begin(),w.end());
        int maxi=accumulate(w.begin(),w.end(),0);
        int low=mini;
        int high=maxi;
        int ans=0;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(check(mid,d,w))
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};