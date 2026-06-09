class Solution {
public:
    vector<int> findAnagrams(string s,string p) {
        vector<int> ans;
        sort(p.begin(),p.end());
        for(int i=0;i<=s.size()-p.size();i++) {
            string temp=s.substr(i,p.size());
            sort(temp.begin(),temp.end());
            if(temp==p){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
