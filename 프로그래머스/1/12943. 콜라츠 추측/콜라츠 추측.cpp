#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    
    long long n = num;
    int count =0;
    while(n>1 && count < 500){
    if(n%2==0) 
        n /=2;   
    else if(n%2==1)
        n = (n*3) + 1; 
    count++;

  }
    if(n == 1)
        return count;
    else 
        return -1;
}