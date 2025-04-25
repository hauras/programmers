#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int count = 0;
    vector<int> bucket;
    
    for (int i = 0; i < moves.size(); i++) {
        int col = moves[i] - 1;  // 1-based → 0-based

        for (int j = 0; j < board.size(); j++) {
            if (board[j][col] != 0) {
                int doll = board[j][col];   
                board[j][col] = 0;

                if (!bucket.empty() && bucket.back() == doll) {
                    bucket.pop_back();
                    count += 2;
                } else {
                    bucket.push_back(doll);
                }

                break;
            }
        }
    }
    
    return count;
}
