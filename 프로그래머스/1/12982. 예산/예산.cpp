#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    
    sort(d.begin(), d.end());
    
    int sum =0;
    int count =0;
    for(int i=0; i<d.size(); i++)
    {
        if(sum + d[i] <= budget)
        {
            sum +=d[i];
            count++;
        }    
        else
            break;
    }
    return count;
}