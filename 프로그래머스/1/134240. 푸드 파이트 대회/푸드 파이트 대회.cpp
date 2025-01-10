#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    int size = food.size();
    string answer ="";
    for(int i=0; i<size; i++)
    {
        answer += string(food[i] /2, '0' + i);
    }
    answer += '0';
    
    for(int i=size -1; i>=0; i--)
    {
        answer += string(food[i] / 2, '0' + i);
        
    }
    return answer;
}