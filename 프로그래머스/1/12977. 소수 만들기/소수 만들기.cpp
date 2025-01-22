#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int solution(vector<int> nums) {
    int count = 0; // 소수가 되는 경우의 수
    int n = nums.size();
    
    auto isPrime = [](int num) {
        if (num < 2) return false;
        for (int i = 2; i <= sqrt(num); ++i) {
            if (num % i == 0) return false;
        }
        return true;
    };
    
    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (isPrime(sum)) {
                    ++count;
                }
            }
        }
    }
    
    return count; // 결과 반환
}