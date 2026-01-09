#include<iostream>
using namespace std;

class Solution {
public:
    bool isvowel (char c)
    {
        c = tolower(c);
        return c =='a' ||c =='e' ||c =='i' ||c =='o' ||c =='u' ;
    }
    string reverseVowels(string s) {
        int left =0;
        int right = s.size()-1;
        while(left <= right)
        {
            if(isvowel(s[left]) && isvowel (s[right]))
            {
                char temp = s[left];
                s[left] = s[right];
                s[right] = temp;
                left++;
                right--;
            }
            else if(isvowel(s[left])  )
            {
                right--;
            }else if (isvowel (s[right]))
            {
                left++;
            }else{
                left++;
                right--;
            }
        }
        return s;
    }
};
// time : o(n)
// space o(1)