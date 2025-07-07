#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    
    int minrow = 100, mincol = 100;
    int maxrow = -1, maxcol = -1;
    
    for (int i=0; i<wallpaper.size(); i++)
    {
        for(int j=0; j<wallpaper[i].size(); j++)
        {
            if(wallpaper[i][j] == '#')
            {
                minrow = min(minrow, i);
                mincol = min(mincol, j);
                maxrow = max(maxrow, i);
                maxcol = max(maxcol, j);
            }
        }
    }
    
    vector<int> answer = {minrow, mincol, maxrow+1, maxcol+1};
    return answer;
}