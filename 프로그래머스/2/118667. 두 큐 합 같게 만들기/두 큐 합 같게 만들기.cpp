#include <string>
#include <vector>
#include <deque>
using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {
    
    long long sum1 = 0;
    long long sum2 = 0;
    
    for(int num : queue1)
    {
        sum1 += num;
    }
    
    for(int num : queue2)
    {
        sum2 += num;
    }
    
    deque<int> q1(queue1.begin(), queue1.end());
    deque<int> q2(queue2.begin(), queue2.end());
    
    if ((sum1 + sum2) % 2 != 0) return -1;
    long long target = (sum1 + sum2) / 2;

    int answer = 0;
    int limit = queue1.size() * 3;
    while(sum1 != target)
    {
        if (answer > limit) return -1;
        if (sum1 > sum2) 
        {
            int v = q1.front();
            q2.push_back(v);
            q1.pop_front();
            sum1 -= v;
            sum2 += v;
        } 
        else 
        {
            int v = q2.front();
            q1.push_back(v);
            q2.pop_front();
            sum2 -= v;
            sum1 += v;
        }
    
        answer++;
    }
    return answer;
}