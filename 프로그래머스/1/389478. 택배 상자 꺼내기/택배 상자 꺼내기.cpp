#include <string>
#include <vector>

using namespace std;

int solution(int n, int w, int num) {
    int answer = 0;
    
    int num_floor = (num -1) / w;
    int num_section = (num-1) % w;
    int num_col;
    
    if( num_floor %2 == 0)
    {
        num_col = num_section;
    }
    else
    {
        num_col = w - 1 - num_section;
    }
    
    for(int i = 1; i<=n; i++)
    {
        int floor = (i-1) / w;
        int section = (i-1) % w;
        int col;
        if(floor %2 == 0)
        {
            col = section;
        }
        else
        {
            col = w - 1 - section;
        }
        
        if(col == num_col && floor > num_floor)
        {
            answer++;
        }
    }
    
    return answer+1;
}