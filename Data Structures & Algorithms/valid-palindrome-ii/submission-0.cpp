class Solution {
public:

bool palindrome(string &s, int start,int end){
  while(start<end){
      if(s[start]!=s[end])
      return false;

    start++,end--;
  }

  return true;
}
    bool validPalindrome(string s) {
        int start=0,end=s.size()-1;

        while(start<end){
            if(s[start]!=s[end]){
                return palindrome(s,start,end-1) ||           palindrome(s,start+1,end);
            }

            start++,end--;
        }

        return true;
    }
};