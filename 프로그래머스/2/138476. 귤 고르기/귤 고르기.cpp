#include <string>
#include <vector>
#include <map>
#include <algorithm> 
using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;

    map<int, int> count;
    vector<int> ans;

    for (int i : tangerine) {
        count[i]++;
    }

    for (auto& c : count) {
        ans.push_back(c.second);
    }

    sort(ans.rbegin(), ans.rend());

    int sum = 0;
    for (int a : ans) {
        sum += a;
        answer++;
        if (sum >= k) break;
    }

    return answer;
}
