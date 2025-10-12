#include <string>
#include <vector>
#include <queue>
#include <utility> // pair
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    
    queue<pair<int, int>> q;
    priority_queue<int> pq;
    
    for(int i =0; i<priorities.size(); i++)
    {
        q.push({priorities[i], i});
        pq.push(priorities[i]);
    }
    
    while(!q.empty())
    {
        int current_priority = q.front().first;
        int current_index = q.front().second;
        q.pop();
    
        if (current_priority == pq.top()) {
            answer++;
            pq.pop(); // 실행했으므로, 우선순위 큐에서도 제거
            
            // 내가 찾던 프로세스인가?
            if (current_index == location) {
                return answer;
            }
        } else {
            // 같지 않다면, 아직 실행될 차례가 아님. 큐의 맨 뒤로 보낸다.
            q.push({current_priority, current_index});
        }
    }
    return answer;
}