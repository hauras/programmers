#include<cmath>
using namespace std;

long long solution(int price, int money, int count)
{
    long long sum = (long long)price * count * (count + 1) / 2;
    long long result = sum - money;
    return result > 0 ? result : 0;
}