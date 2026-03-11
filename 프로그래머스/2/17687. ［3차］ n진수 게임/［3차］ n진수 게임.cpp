#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 1단계: 진법 변환 함수
string convert(int num, int n) {
    if (num == 0) return "0";
    
    string res = "";
    string base = "0123456789ABCDEF"; // 16진수까지 대응하는 문자열
    
    while (num > 0) {
        res += base[num % n]; // 나머지에 해당하는 문자를 추가
        num /= n;
    }
    
    reverse(res.begin(), res.end()); // 역순으로 담겼으니 뒤집기
    return res;
}

// 2 & 3단계: 전체 대본 생성 및 튜브의 숫자 추출
string solution(int n, int t, int m, int p) {
    string answer = "";
    string gamestr = "";
    int num = 0;
    
    while (gamestr.length() < t * m) {
        gamestr += convert(num, n);
        num += 1;
    }
    
    for (int i = p - 1; answer.length() < t; i += m) {
        answer += gamestr[i];
    }
    
    return answer;
}