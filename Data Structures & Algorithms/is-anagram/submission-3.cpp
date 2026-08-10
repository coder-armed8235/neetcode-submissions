class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size(),m=t.size();
        vector<int>alpha(26,0);
        for(int i=0;i<n;i++){
            alpha[s[i]-'a']++;
        }

        for(int j=0;j<m;j++){
            alpha[t[j]-'a']--;
        }


        for(int i=0;i<26;i++){
            if(alpha[i]!=0)
            return false;
        }

        return true;
    }

};
