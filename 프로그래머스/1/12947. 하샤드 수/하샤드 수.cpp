#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    
    int temp = x;
    int res = 0; 
    while(x>0)
    {
        res += x%10;
        x/=10;
    }
    if(temp%res==0)
    {
        return true;
    }
    else
        return false;
}