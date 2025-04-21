#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    
    int m = arr1.size();
    int n = arr2[0].size();
    int k = arr1[0]. size();
    
    for(int i=0; i<m; i++)
    {
        vector<int> row;
        for(int j=0; j<n; j++)
        {
            int sum = 0;
            for(int l = 0; l<k;++l)
            {
                sum +=arr1[i][l] * arr2[l][j];
            }
            row.push_back(sum);
        }
        answer.push_back(row);
    }
    return answer;
}