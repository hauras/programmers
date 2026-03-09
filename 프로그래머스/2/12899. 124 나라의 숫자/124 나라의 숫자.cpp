#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    string tmp[3] = { "4", "1", "2"};
    while(n > 0)
    {
        int res = n % 3;
        n = n / 3;
        
        if( res == 0 )
        {
            n--;
        }
        answer = tmp[res] + answer;
        
    }
    return answer;
}