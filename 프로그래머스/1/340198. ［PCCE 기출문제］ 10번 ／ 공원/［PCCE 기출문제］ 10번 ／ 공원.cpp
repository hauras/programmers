#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> mats, vector<vector<string>> park) {
    
    int row = park.size();
    int col = park[0].size();
    sort(mats.rbegin(), mats.rend()); // 큰 순서로 정렬
    
    for(int size : mats)
    {
        for(int i = 0; i<row; i++)
        {
            for(int j = 0; j<col; j++)
            {
                // 공원 범위 벗어나는지 체크
                if(i + size > row || j + size > col)
                {
                    continue;
                }
                
                bool place = true;
                
                // 빈자리인지 체크
                for(int k = i; k < i + size; k++)
                {
                    for(int r = j; r< j + size; r++)
                    {
                        if(park[k][r] != "-1")
                        {
                            place = false;
                            break;
                        }
                    }
                    if(!place) break;
                }
                
                if(place) return size;
            }
        }
    }
    return -1;
    
    
}