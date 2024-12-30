#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
      
    int sum = 0;

    for (int i = left; i <= right; i++) { // left ~ right까지 반복
    int count = 0; // 약수 개수 

    // 약수 개수 구하기
    for (int j = 1; j <= i; j++) { 
        if (i % j == 0) {
            count++; // j가 약수이면 추가
            // 중복 약수 방지
        }
    }

    // 짝수/홀수 여부에 따라 처리
    if (count % 2 == 0)
        sum += i; // 짝수면 더하기
    else
        sum -= i; // 홀수면 빼기
}

return sum;
}