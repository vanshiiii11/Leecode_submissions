class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int n=paths.size();
        set<string>start;
        set<string>dest;
        for(int i=0;i<n;i++){
            start.insert(paths[i][0]);
            dest.insert(paths[i][1]);
        }
        for(auto city: dest){
            if(start.find(city)==start.end())return city;
        }
        return "";
    }
};