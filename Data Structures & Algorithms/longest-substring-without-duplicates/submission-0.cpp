class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int first=0,second=0,ans=0;
        vector<bool>alpha(256,0);
        while(second<n){

            while(alpha[s[second]] && first<=second)
            {
                alpha[s[first]]=0;
                first++;
            }

            alpha[s[second]]=1;
            ans=max(ans,(second-first+1));
            second++;
        }

        return ans;
    }
};
