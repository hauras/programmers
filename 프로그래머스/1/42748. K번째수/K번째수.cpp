#include <string>
#include <vector>
#include<algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    
    vector<int> result;
    for(int a=0; a<commands.size(); a++)
    {
        int i = commands[a][0];
        int j = commands[a][1];
        int k = commands[a][2];
        
        vector<int> sorted;

        for (int b = i - 1; b < j; b++) { 
            sorted.push_back(array[b]);
        }
        sort(sorted.begin(), sorted.end()); 
        result.push_back(sorted[k - 1]);
       
    }
    return result;
}