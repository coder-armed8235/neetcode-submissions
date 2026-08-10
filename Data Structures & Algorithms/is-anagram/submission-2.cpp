class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.size()>t.size() || s.size()<t.size())
       return false;

       int n=s.size(),m=t.size();
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(s[i]==t[j]){
                t[j]='#';
                break;
            }
        }
       }

       for(int i=0;i<m;i++){
        if(t[i]!='#')
          return false;
       }

       return true;
    }
};
