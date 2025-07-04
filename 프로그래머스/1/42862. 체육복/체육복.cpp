#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    
    unordered_set<int> lost_set(lost.begin(), lost.end());
    unordered_set<int> reserve_set(reserve.begin(), reserve.end());

  
    vector<int> real_lost;
    for (int l : lost_set) {
        if (reserve_set.count(l) == 0) { 
            real_lost.push_back(l);
        }
    }

    unordered_set<int> real_reserve;
    for (int r : reserve_set) {
        if (lost_set.count(r) == 0) { 
            real_reserve.insert(r);
        }
    }
    
    sort(real_lost.begin(), real_lost.end());
    
    int borrowed_count = 0; 
    
    for (int l : real_lost) {
        if (real_reserve.count(l - 1)) {
            real_reserve.erase(l - 1); 
            borrowed_count++;
        }
        else if (real_reserve.count(l + 1)) {
            real_reserve.erase(l + 1); 
            borrowed_count++;
        }
    }
    
    // 6. 최종 결과 반환
    // 전체 학생 수 - (진짜 잃어버린 학생 수 - 빌리는 데 성공한 학생 수)
    return n - (real_lost.size() - borrowed_count);
}