#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    
    int h = park.size();
    int w = park[0].size();
    
    //좌표 저장 (solution 함수 전체에서 사용할 변수)
    int row = 0;
    int col = 0;
    // 'S'의 위치를 찾는다
    for(int i=0; i<h; i++) {
        for(int j =0; j<w; j++) {
            if(park[i][j] == 'S') {
                row = i; 
                col = j;
                goto find_s_end; 
            }
        }   
    }
find_s_end:; 

    for(const string& route : routes) {
        stringstream ss(route);
        char dir;
        int dist;
        ss >> dir >> dist;
        
        int next_row = row;
        int next_col = col;
        bool is_safe = true; 
        
        for(int k = 0; k < dist; k++) {
            if(dir == 'E') next_col++;
            if(dir == 'W') next_col--;
            if(dir == 'S') next_row++;
            if(dir == 'N') next_row--;

            if (next_row < 0 || next_row >= h || next_col < 0 || next_col >= w) {
                is_safe = false;
                break; 
            }
            
            if (park[next_row][next_col] == 'X') {
                is_safe = false;
                break; 
            }
        }

        if (is_safe) {
            row = next_row;
            col = next_col;
        }
    }

    vector<int> answer = {row, col};
    return answer;
}