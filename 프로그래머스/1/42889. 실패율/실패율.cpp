#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, double> a, pair<int, double> b) {
    return (a.second != b.second ? a.second > b.second : a.first < b.first);
}

vector<int> solution(int N, vector<int> stages) {
    
    vector<int> count(N + 2, 0);
    for (int stage : stages) {
        count[stage]++;
    }
    
    vector<pair<int, double>> failureRates;
    int totalPlayers = stages.size(); //전체 유저 수

    for (int stage = 1; stage <= N; ++stage) {
        int stuck = count[stage]; // 해당 스테이지에서 멈춘 사람 수
        double rate = (totalPlayers == 0) ? 0.0 : (double)stuck / totalPlayers;
        failureRates.push_back({stage, rate});
        totalPlayers -= stuck; // 다음 스테이지로 넘어간 사람 수 
    }

    sort(failureRates.begin(), failureRates.end(), compare);

    vector<int> answer;
    for (auto& p : failureRates) {
        answer.push_back(p.first); 
    }

    return answer;
}