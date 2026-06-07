class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string finalAns = "";
        if(strs.size() == 1){
            return strs[0];
        }

        finalAns = strs[0];
        for(int i = 1; i < strs.size(); i++){
            string ans = "";

            int len = min(finalAns.length(), strs[i].length());

            for(int j = 0; j < len; j++){
                if(finalAns[j] == strs[i][j]){
                    ans.push_back(finalAns[j]);
                }

                else break;
            }
            
            finalAns = ans;
        }

        return finalAns;
    }
};
