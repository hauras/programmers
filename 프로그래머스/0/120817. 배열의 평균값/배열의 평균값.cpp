#include <string>
#include <vector>
#include <numeric>

using namespace std;

double solution(vector<int> numbers) {
    double answer = accumulate(numbers.begin(),numbers.end(),0);
    return answer/numbers.size();
}