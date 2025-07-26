#include <iostream>
#include<string>
#include<vector>
using namespace std;

int solution(string s)
{
    int answer = -1;

    vector<char> st;
    
    for(char c : s)
    {
        if (!st.empty() && st.back() == c)
        {
            st.pop_back();
        }
        else
        {
            st.push_back(c);
        }
        
    }
    
    if(st.empty())
        return 1;
    else
        return 0;
    return answer;
}