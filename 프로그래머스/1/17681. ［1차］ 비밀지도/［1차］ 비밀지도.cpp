#include <string>
#include <vector>
#include <bitset>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;

    for (int i = 0; i < n; i++) {
        int combined = arr1[i] | arr2[i];
        bitset<16> bin(combined);                    
        string row = bin.to_string().substr(16 - n);  

        for (char& c : row) {
            c = (c == '1') ? '#' : ' ';
        }

        answer.push_back(row);
    }

    return answer;
}
