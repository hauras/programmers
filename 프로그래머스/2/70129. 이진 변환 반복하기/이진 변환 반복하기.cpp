#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    
    int count =0;
    int zerocount =0;
    while(s !="1")
    {
        int s_length = s.length();
        s.erase(remove(s.begin(), s.end(), '0'),s.end());
        zerocount += s_length - s.length(); // 0의 개수 카운트
        
        int newlength = s.length(); // 0 제거후 길이
        s = "";
        while(newlength >0)
        {
            s = char(newlength %2 +'0') +s;
            newlength /= 2;
        }
        count++;

    }
    return {count,zerocount};
}