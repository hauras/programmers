#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    
    // a = 받은 빈병 : 1
    // b : 받은 빈병의 개수 
    // n : 시작 빈 병의 수 
    int result = 0; // 결과를 누적할 변수

    while (n >= a) {
        int temp = n / a;          // 교환 가능한 병의 수
        result += temp * b;        // 받은 병의 수를 누적
        n = (n % a) + (temp * b);  // 남은 병 + 받은 병으로 갱신
    }

    return result; 
}