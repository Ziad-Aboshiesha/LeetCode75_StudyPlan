#include<iostream>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int size1 = word1.size();
        int size2 = word2.size();


        // time : m + n 
        // space : m + n 
        int total = size1 + size2;
        string ans ;
        ans.reserve(total);
        for( int i = 0 ; i < total ; i++)
        {
            if(i < size1)
            {
                ans+= word1[i];
            }
            if(i < size2)
            {
                ans+= word2[i];
            }
        }
        return ans;
    }
};