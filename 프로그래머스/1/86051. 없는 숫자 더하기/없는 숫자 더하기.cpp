#include <string>
#include <vector>
#include <algorithm> 
using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;

    
    for(int j = 0; j <= 9; j++) {

        if(find(numbers.begin(), numbers.end(), j) == numbers.end()) {
            answer += j; 
        }
    }

    return answer;
}