#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> topping) {
    
    map<int, int> tops;
    map<int, int> sister_tops;
    
    int count = 0;
    int sister_count = 0;
    int answer = 0;
    for(int i = 0; i<topping.size(); i++)
    {
        int t = topping[i];
        if(tops[t] == 0)
        {
            count++;
        }
        tops[t]++;
    }
    
    for(int i = 0; i<topping.size(); i++)
    {
        int t = topping[i];

        if(sister_tops[t] == 0)
        {
            sister_count++;
        }
        sister_tops[t]++;
        
        tops[t]--;
        
        if(tops[t] == 0) 
        {
            count--;       
        }
        
        if(count == sister_count) 
        {
        answer++;   
        }
    }
    
    return answer;
}