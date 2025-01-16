#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int a = 0, b = 0; 

    for (int i = 0; i < goal.size(); i++) {
        if (a < cards1.size() && cards1[a] == goal[i]) {
            a++; 
        }
        else if (b < cards2.size() && cards2[b] == goal[i]) {
            b++;
        }
        else {
            return "No";
        }
    }

    return "Yes"; 
}