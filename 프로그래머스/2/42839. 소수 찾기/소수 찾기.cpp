#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

bool isprime(int n)
{
    if(n<2) return false;
    
    for(int i = 2; i * i <=n; i++)
    {
        if(n % i == 0) return false;
    }
    
    return true;
}
int solution(string numbers) {
    int answer = 0;
    set<int> unique_numbers;
    sort(numbers.begin(), numbers.end());
    
    do{
        string temp = "";
        for(int i = 0; i<numbers.size(); i++)
        {
            temp += numbers[i];
            unique_numbers.insert(stoi(temp));
        }
    }while(next_permutation(numbers.begin(), numbers.end()));
    
    for(int n : unique_numbers)
    {
        if(isprime(n))
        {
            answer++;
        }
    }
    return answer;
}