#include<iostream>

using namespace std;

int solution(int num1, int num2) {
    int result = num1 - num2;
    return result;
}

int main()
{
    int num1,num2;
    cin>>num1>>num2;
    int res = solution(num1,num2);
    cout<< res <<endl;
    
    return 0;
}