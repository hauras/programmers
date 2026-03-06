#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
   
    queue<int> q;
    int current_weight = 0;
    int time = 0;
    int idx = 0;
    for(int i = 0; i < bridge_length; i++) 
    {
        q.push(0);
    }
    
    while(idx<truck_weights.size())
    {
        time++;
        
        current_weight -= q.front();
        q.pop();
        
        if(current_weight + truck_weights[idx] <= weight)
        {
            current_weight += truck_weights[idx];
            q.push(truck_weights[idx]);
            idx++;
        }
        else
        {
            q.push(0);
        }
    }
    return time + bridge_length;
}