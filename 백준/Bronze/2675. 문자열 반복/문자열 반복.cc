#include <iostream>
#include <string>
using namespace std;

int main() {
    int T; // 테스트 케이스의 수
    cin >> T;

    while (T--) {
        int R; // 반복 횟수
        string S; // 입력 문자열
        cin >> R >> S;

        string result = ""; // 결과 문자열
        for (char c : S) {  // 문자열 S의 각 문자 처리
            result += string(R, c); // 문자를 R번 반복하여 결과에 추가
        }

        cout << result << endl; // 결과 출력
    }

    return 0;
}