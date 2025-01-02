#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
   
    int count =0;
    for(int i=0; i <= t.size() - p.size(); i++)
    {
        string s = t.substr(i, p.size());
        
        long long num1 = stoll(s); // 부분 문자열 숫자로 변환
        long long num2 = stoll(p); // p의 값 숫자로 변환
    
        if(num1<=num2) // 두개 비교해서 카운트 증가
        {
            count++;
        }
    }
    return count;
 
}