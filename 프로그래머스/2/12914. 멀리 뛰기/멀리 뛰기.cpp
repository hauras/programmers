#include <string>
#include <vector>

using namespace std;


long long solution(int n) {

    if(n==1) return 1;
    if(n == 2)return 2;
    long long answer;
    long long num1 = 1; // n-2
    long long num2 = 2; // n-1
    
    for(int i=3; i<=n; i++)
    {
        answer = (num1 + num2) % 1234567;
        num1 = num2;
        num2 = answer;
    }
    
    return answer;
}