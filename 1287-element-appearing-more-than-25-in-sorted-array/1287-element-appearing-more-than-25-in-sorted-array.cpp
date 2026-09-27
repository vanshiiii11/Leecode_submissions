class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        map<int,int>freq;
        int times=n/4;
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        for(auto it: freq){
            if(it.second>times)return it.first;
        }
        return -1;
    }
};