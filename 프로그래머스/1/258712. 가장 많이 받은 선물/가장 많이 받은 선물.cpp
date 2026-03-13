#include <string>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

int solution(vector<string> friends, vector<string> gifts) {
    int answer = 0; // 가장 선물 많이 받은 사람의 횟수
    
    map<string, int> count; // 선물 지수
    map<string, map<string, int>> log;
    
    for(string name : gifts)
    {
        stringstream ss(name);
        string from, to;
        ss >> from >> to;
        
        log[from][to]++;
        count[from]++;
        count[to]--;
    }
 
    map<string, int> next_month;
    
    for(string a : friends)
    {       
        for(string b : friends)
        {
            if(a == b) continue;
            
            int a_to_b = log[a][b];
            int b_to_a = log[b][a];
            
            if(a_to_b > b_to_a)
            {
                next_month[a]++;
            }
            else if(a_to_b == b_to_a)
            {
                if(count[a] > count[b])
                {
                    next_month[a]++;
                }
            }
        }
    }
    
    for(string name : friends)
    {
        answer = max(answer, next_month[name]);
    }
    return answer;
}