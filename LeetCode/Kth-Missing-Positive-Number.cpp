class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_map<int,int>mpp;
        for(int num:arr)
        {
            mpp[num]=1;
        }
        vector<int>res;
        int s=1;
        int total=0;
        while(total<=k)
        {
            if(!mpp[s]){res.push_back(s);total++;}
            s++;
        }
        return res[k-1];
    }
};