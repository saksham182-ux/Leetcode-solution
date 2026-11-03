class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            vector <int> row;
            int first = 1;

            for(int k=0;k<=i;k++){
                row.push_back(first);
                first = first * (i-k)/(k+1);
            }
           ans.push_back(row); 
        }
        return ans;
    }
};