#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int res = 0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
            res +=i;
    }
    return res;
}