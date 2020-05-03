        vector<vector<int> > ::Solution solve(int numRows) {
            vector<vector<int> > ans;
            if (numRows <= 0) { 
                return ans;
            }
            vector<int> tmp; 
            tmp.push_back(1); 
            ans.push_back(tmp);
            for (int i = 0; i < numRows - 1; i++) {
                vector<int> newRow;
                newRow.push_back(1);
                for (int j = 0; j < ans[i].size() - 1; j++) {
                    newRow.push_back(ans[i][j] + ans[i][j + 1]);
                }
                newRow.push_back(1);
                ans.push_back(newRow);
            }
            return ans;
        }