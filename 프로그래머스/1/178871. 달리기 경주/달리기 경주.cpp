#include <string>
#include <vector>
#include <algorithm> 
#include <map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    
    
    map<string, int> rank;
    
    for(int i=0; i<players.size(); i++)
    {
        rank[players[i]] = i;
    }
    
    for(int i=0; i<callings.size(); i++)
    {
        int num = rank[callings[i]]; // 현재 순위
        string front_name =players[num-1];
        
        swap(players[num], players[num-1]);
        
        rank[callings[i]] = num -1;
        rank[front_name] = num;
    }
    return players;
}