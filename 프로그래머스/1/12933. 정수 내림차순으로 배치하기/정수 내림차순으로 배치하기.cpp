#include <iostream>
#include <algorithm>
#include <vector> 
#include <cmath>
using namespace std;

long long solution(long long n) {
     string s = to_string(n);

    // 2. 내림차순 정렬
    sort(s.begin(), s.end(), greater<char>());

    // 3. 문자열을 다시 정수로 변환
    return stoll(s);
}
