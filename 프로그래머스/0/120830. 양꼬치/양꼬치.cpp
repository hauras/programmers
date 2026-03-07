#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    
    int num = n/10;
    if(num)
    {
        answer = n *12000 + k*2000 - num * 2000;
    }
    else
    {
        answer = n *12000 + k * 2000;
    }
    return answer;
}