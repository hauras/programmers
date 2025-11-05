#include <string>
#include <vector>

using namespace std;

int answer;
vector<int> dfs_num;
int dfs_target;

void dfs(int idx, int sum) {
    if(idx == dfs_num.size())
    {
        if(sum ==dfs_target)
        {
            answer++;
        }
        return;
    }
    
    dfs(idx + 1, sum + dfs_num[idx]);
    dfs(idx + 1, sum - dfs_num[idx]);
}

int solution(vector<int> numbers, int target) {
    answer = 0;
    dfs_num = numbers;
    dfs_target = target;
    
    dfs(0,0);
    
    return answer;
}