#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer =0;
    int i=0;
    while(i<s.length())
    {
        char x = s[i];
        int count =0;
        int cnt = 0;
        
        while(i < s.length())
        {
            if(s[i] == x) count++;
            else cnt++;
            i++;
            
            if (count == cnt) break;
        }
            answer++;

    }
    return answer;
}