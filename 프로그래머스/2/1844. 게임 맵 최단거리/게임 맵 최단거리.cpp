#include<vector>
#include<queue>

using namespace std;

int solution(vector<vector<int> > maps)
{
   
    int n = maps.size();      
    int m = maps[0].size();
    
    int dy[] = {-1, 1, 0, 0};
    int dx[] = {0, 0, -1, 1};
    
    vector<vector<int>> dist(n, vector<int>(m, -1));
    
    queue<pair<int, int>> q;
    q.push({0,0});
    dist[0][0] =1;
    
    while (!q.empty()) 
    {
        pair<int, int> current = q.front();
        q.pop();
    
        int y = current.first;
        int x = current.second;

        if (y == n - 1 && x == m - 1) 
        {
            return dist[y][x];
        }

        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i]; 
            int nx = x + dx[i]; 

            if (ny >= 0 && ny < n && nx >= 0 && nx < m) {
                if (maps[ny][nx] == 1 && dist[ny][nx] == -1) {
                
                    dist[ny][nx] = dist[y][x] + 1;
                    q.push({ny, nx});
                }
            }
        }
    }
    return -1;
}