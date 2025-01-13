#include <string>
#include <iostream>
#include <algorithm> 
using namespace std;

bool solution(string s)
{
    
    int p_count = 0;
    int y_count = 0;
    
    for (char c : s) {
        char lower_c = tolower(c); // 소문자로 변환
        if (lower_c == 'p') {
            p_count++;
        } else if (lower_c == 'y') {
            y_count++;
        }
    }

    return p_count == y_count;
}

    
