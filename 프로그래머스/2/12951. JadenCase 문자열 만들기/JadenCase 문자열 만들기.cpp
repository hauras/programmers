#include <string>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    bool newWord = true;  

    for (char c : s) {
        if (newWord) {
            answer += toupper(c);  
        } else {
            answer += tolower(c);  
        }
        newWord = (c == ' ');  
    }

    return answer;
}
