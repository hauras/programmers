#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int x, int y, int n) {
    
    queue<int> q;
    q.push(x);
    vector<int> dist(y + 1, -1); // y까지의 거리를 -1로 초기화
    dist[x] = 0;
    
    while(!q.empty())
    {
        int curr = q.front();
        q.pop();
        
        if(curr == y) return dist[curr];
        
        int next_state[3] = {curr + n, curr * 2, curr * 3};
        
        for (int next : next_state)
        {
            if(next <= y && dist[next] == -1)
            {
                dist[next] = dist[curr] + 1;
                
                q.push(next);
            }
        }
    }
    return -1; 
}