class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(), capacity.end(), greater<int>());
        int sumapp=0;
        int sumcap=0;
        int cnt=0;
        for(int i=0;i<apple.size();i++)sumapp+=apple[i];
        for(int i=0;i<capacity.size();i++){
            if(sumcap<sumapp){
                sumcap+=capacity[i];
                cnt++;
            }
            else 
                break;
        }
        return cnt;
    }
};