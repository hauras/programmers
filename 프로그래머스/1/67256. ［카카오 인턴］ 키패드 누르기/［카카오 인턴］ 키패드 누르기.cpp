#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    map<int, pair<int, int>> pos = {
    {1, {0, 0}}, {2, {0, 1}}, {3, {0, 2}},
    {4, {1, 0}}, {5, {1, 1}}, {6, {1, 2}},
    {7, {2, 0}}, {8, {2, 1}}, {9, {2, 2}},
    {0, {3, 1}},
    {-1, {3, 0}}, // *을 -1로
    {-2, {3, 2}}  // #을 -2로
};
    int left = -1;
    int right = -2;
    for(int i=0; i<numbers.size(); i++)
    {
        if(numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7) 
        {
            answer += 'L';
            left = numbers[i];
        } 
        else if(numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9) 
        {
            answer += 'R';
            right = numbers[i];

        }
        else
        {
            int leftpos = abs(pos[numbers[i]].first - pos[left].first)
                        + abs(pos[numbers[i]].second - pos[left].second);
            int rightpos = abs(pos[numbers[i]].first - pos[right].first)
                        + abs(pos[numbers[i]].second - pos[right].second);
            
            if(leftpos>rightpos)
            {
                answer +='R';
                right = numbers[i];
            }
            else if(leftpos<rightpos)
            {
                answer +='L';
                left = numbers[i];
            }
            
            else
            {
                if(hand == "right")
                {
                    answer +='R';
                    right = numbers[i];

                }
                else if(hand == "left")
                {
                    answer +='L';
                    left = numbers[i];

                }
            }
                
        }
    }
    return answer;
}