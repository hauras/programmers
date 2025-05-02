#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    istringstream iss(s);
    vector<int> nums;
    int num;

    while (iss >> num) {
        nums.push_back(num); 
    }
    sort(nums.begin(), nums.end());
    
    
    return to_string(nums.front()) + " " + to_string(nums.back());
}