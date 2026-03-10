#include <string>
#include <set>
using namespace std;

int solution(string dirs) {
    int answer = 0;
    set<string> s;
    
    int x = 0;
    int y = 0;
    
    for(char c : dirs)
    {
        int nx = x;
        int ny = y;
        
        if(c == 'U') ny++;       
        else if (c == 'D') ny--;
        else if (c == 'R') nx++;
        else if (c == 'L') nx--;
        
        if(nx >5 || nx < -5 || ny > 5 || ny < -5) continue;
        
        string path1 = to_string(x) + to_string(y) + to_string(nx) + to_string(ny);
        string path2 = to_string(nx) + to_string(ny) + to_string(x) + to_string(y);
        
        s.insert(path1);
        s.insert(path2);
        
        x = nx;
        y = ny;

    }
    return s.size() / 2;
}