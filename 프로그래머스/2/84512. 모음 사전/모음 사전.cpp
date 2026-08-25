#include <string>
#include <vector>

using namespace std;

string letters = "AEIOU";
string target;
int count = 0;
int answer = -1;

void dfs(string current){
    if(!current.empty())
    {
        count++;
        if(current == target)
        {
            answer = count;
            return;
        }
            
    }
    if (current.length() == 5) return;
    
    for(char c : letters)
    {
        dfs(current + c);
    }
}
int solution(string word) {
    target = word;
    dfs("");
    return answer;
}