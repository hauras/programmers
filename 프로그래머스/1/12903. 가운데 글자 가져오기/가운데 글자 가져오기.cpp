#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int len = s.size();
    if(len%2 == 0 )
    {
        return string(1,s[len/2-1]) + string(1, s[len/2]);
    }
    else
        return string(1,s[len/2]);
}