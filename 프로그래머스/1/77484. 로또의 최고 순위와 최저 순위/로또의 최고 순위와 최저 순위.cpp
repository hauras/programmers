#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    int count = 0; 
    int zero= 0; 

    for (int i = 0; i < lottos.size(); i++) {
        if (lottos[i] == 0) {
            zero++;
        } else {
            if (find(win_nums.begin(), win_nums.end(), lottos[i]) != win_nums.end()) {
                count++;
            }
        }
    }
    vector<int> rank = {6, 6, 5, 4, 3, 2, 1}; 
    int max_rank = rank[count + zero];
    int min_rank = rank[count];

    return {max_rank, min_rank};
}