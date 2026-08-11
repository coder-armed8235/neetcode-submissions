class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int first=0,second=0,n=word1.size(),m=word2.size();
        string ans;
        while(first<n && second<m){
            ans+=word1[first];
            ans+=word2[second];

            first++,second++;
        }

        while(first<n){
            ans+=word1[first];
            first++;
        }

        while(second<m){
            ans+=word2[second];
            second++;
        }

        return ans;
    }
};