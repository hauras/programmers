#include<iostream>

using namespace std;

int solution(int num1, int num2) {
    int answer = num1 / num2;
    return answer;
}

int main()
{
    int num1, num2;
    cin>>num1>>num2;
    int result = solution(num1,num2);
    cout<<result<<endl;
    return 0;
}