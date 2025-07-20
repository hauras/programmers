#include <string>
#include <vector>
#include <bitset>
using namespace std;

int solution(int n) {
    
    // 
    int n_count = bitset<32>(n).count();
    
    int next_num = n+1;
    while(true)
    {
        int next_num_count = bitset<32>(next_num).count();
        
        if(n_count == next_num_count)
        {
            return next_num;
        }
        next_num++;
    }
}