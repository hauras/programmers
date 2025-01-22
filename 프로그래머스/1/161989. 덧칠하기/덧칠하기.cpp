#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    
    //n : 총 공간의 크기
    //m : 한반에 칠하는 공간의 크기 
    //section 벡터 : 무조건 칠해야 하는 공간들
    
    int count = 0;
    int current= 0;
    for(int i=0; i<section.size(); i++)
    {
        if(current < section[i])
        {
            count++;
            current = section[i] + m -1;
        }
    }
    return count;
}