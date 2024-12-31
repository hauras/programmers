#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int n) {
    
    vector<int> num;
    
    while(n>0)
    {
        num.push_back(n%3);
        n/=3;
    }
    int result =0;
    int size = num.size();
    for(int i=0; i<size; i++)
    {
        result += num[size - 1 - i] * pow(3, i);
    }
    return result;
    
}