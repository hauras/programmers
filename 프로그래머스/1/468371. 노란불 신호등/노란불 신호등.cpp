#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> signals) {
    int answer = 0;
    
    int t = 1;
    
    while(t < 10000000)
    {
        bool yellow = true;
        for(auto a : signals)
        {
            int g = a[0], y = a[1], r = a[2];
            int sum = g + y + r;
            int y_cycle = t % sum;
            if(y_cycle == 0) y_cycle = sum;
            
            if(!(y_cycle > g && y_cycle <= y + g))
            {
                yellow = false;
                break;
            }
        }
        if(yellow) return t;
        t++;
    }
    return -1;
}