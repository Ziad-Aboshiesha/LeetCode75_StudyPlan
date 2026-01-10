#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string temp = "";
        vector<string>arr;
        for(int i =0 ; i< n; i++)
        {
            if(s[i] ==  ' ')
            {
                if(temp != "")
                {
                    arr.push_back(temp);
                    temp= "";
                }
            }
            else
            {
                temp+= s[i];
            }
        }
        if(temp!= "")
        {
           arr.push_back(temp); 
        }
        // vector of words 
        // [the , sky , is , blue]
        string ans = "";
        int m = arr.size();
        for(int i = m-1 ; i >=0 ; i--)
        {
            ans += arr[i];
            if(i!= 0)
            {
                ans+= " ";
            }
        }
        return ans;
    }
};
// time n
// space n