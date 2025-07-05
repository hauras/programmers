#include <string>
#include <vector>
#include <cctype>   
#include <algorithm>
using namespace std;

string solution(string new_id) {
    string answer = "";
    
    // 1단계: 소문자로 치환
    for (char &c : new_id) {
        c = tolower(c);
    }

    // 2단계: 허용된 문자만 필터링
    for (char c : new_id) {
        if (islower(c) || isdigit(c) || c == '-' || c == '_' || c == '.') {
            answer += c;
        }
    }
    
    // 3단계: 연속된 마침표 
    string temp = "";
    if (!answer.empty()) { // answer가 비어있지 않을 때만 실행
        temp += answer[0];
        for (int i = 1; i < answer.length(); ++i) {
            if (answer[i] == '.' && answer[i-1] == '.') {
                continue;
            }
            temp += answer[i];
        }
    }
    answer = temp;
    
    // 4단계: 처음/끝 마침표 제거
    if (answer.front() == '.') {
        answer.erase(0, 1);
    }
    if (answer.back() == '.') {
        answer.pop_back();
    }
    
    // 5단계: 빈 문자열이면 'a' 대입
    if(answer.empty()) {
        answer = "a";
    }
    
    // 6단계: 16자 이상이면 15자로 줄이고, 끝이 마침표면 제거
    if(answer.length() >= 16) {
        answer = answer.substr(0, 15);
        if(answer.back() == '.') {
            answer.pop_back();
        }
    }
    
    // 7단계: 2자 이하면 3자가 될 때까지 마지막 문자 반복
    while (answer.length() <= 2) {
        answer += answer.back();
    }
    
    return answer;
}