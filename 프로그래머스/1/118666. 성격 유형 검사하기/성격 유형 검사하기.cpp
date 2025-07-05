#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    
    map<char, int> scores;
    

    for(int i=0; i<choices.size(); i++)
    {
        char first = survey[i][0];
        char second = survey[i][1];
        int choice = choices[i];
        
        if(choice == 1)
            scores[first] += 3; 
        else if (choice == 2)
            scores[first] +=2;
        else if (choice == 3)
            scores[first] +=1;
        else if(choice == 5)
            scores[second] +=1;
        else if(choice == 6)
            scores[second] +=2;
        else if(choice == 7)
            scores[second] +=3;
         
    }
    
    answer += (scores['T'] > scores['R']) ? 'T' : 'R';
    answer += (scores['F'] > scores['C']) ? 'F' : 'C';
    answer += (scores['M'] > scores['J']) ? 'M' : 'J';
    answer += (scores['N'] > scores['A']) ? 'N' : 'A';
    return answer;
}