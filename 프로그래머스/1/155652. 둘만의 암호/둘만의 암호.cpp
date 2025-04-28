#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    for(int i=0; i<s.size(); i++)
    {
        int moved = 0;
        char c = s[i];
        while (moved < index) 
        {
            c++;
            if (c > 'z') c = 'a'; 

            if (skip.find(c) == string::npos) 
            {
                moved++; 
            }
        }
        answer += c;
    }
    
    return answer;
}

        
