#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    priority_queue<int, vector<int>, greater<int>> pq(scoville.begin(), scoville.end());

    int mix_count = 0;

    while (pq.size() > 1 && pq.top() < K) {
        int first = pq.top(); pq.pop();
        int second = pq.top(); pq.pop();

        int new_scoville = first + (second * 2);
        pq.push(new_scoville);
        mix_count++;
    }

    return (pq.top() >= K) ? mix_count : -1;
}

int main() {
    vector<int> scoville = {1, 2, 3, 9, 10, 12};
    int K = 7;
    cout << solution(scoville, K) << endl; // 결과: 2
    return 0;
}

