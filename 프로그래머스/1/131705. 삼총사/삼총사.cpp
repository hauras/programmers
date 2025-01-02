#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    
    int n = number.size();
    int count =0;
     for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                int sum = number[i] + number[j] + number[k]; // 3개 원소의 합
                if(sum==0)
                    count++;
            }
        }
    }
    return count;
}