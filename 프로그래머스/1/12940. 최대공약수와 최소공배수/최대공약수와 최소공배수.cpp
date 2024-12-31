#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    
    int a = n, b = m;
    
    while(b != 0) // 0이 될때 까지 반복 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
  
    int res = (n * m) / a; // 최소 공배수는 두 자연수의 곱을 최소 공약수로 나눈 값
    
    // 결과 반환
    vector<int> answer;
    answer.push_back(a);   // 최대공약수
    answer.push_back(res); // 최소공배수
    return answer;
}