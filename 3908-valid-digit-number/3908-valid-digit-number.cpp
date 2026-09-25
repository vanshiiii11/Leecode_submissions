class Solution {
public:
    bool validDigit(int n, int x) {
        vector<int>array;
        while(n>0){
            array.push_back(n%10);
            n/=10;
        }
        int cnt=0;
        int m=array.size();
        for(int i=0;i<m;i++){
            if(array[i]==x)cnt++;
        }
        if(cnt>0 && array[m-1]!=x)return true;
        else return false;
    }
};