#include <string>
#include <cctype>
using namespace std;

string solution(string s) {
    string answer = "";
    int count = 0; 

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            answer += ' ';
            count = 0; 
        } else {
            
            answer += (count % 2 == 0) ? toupper(s[i]) : tolower(s[i]);
            count++; 
        }
    }

    return answer;
}