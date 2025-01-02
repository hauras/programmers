#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int maxw = 0;
    int maxh = 0;
    for(int i=0; i<sizes.size(); i++)
    {
        
        int w = max(sizes[i][0], sizes[i][1]);
        int h = min(sizes[i][0], sizes[i][1]);
        
        maxw = max(maxw,w);
        maxh = max(maxh,h);
    }
    
    return maxw*maxh;
}