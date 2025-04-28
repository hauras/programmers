#include <string>
#include <vector>
#include<algorithm>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;

    for (int i = 0; i < data.size(); i++) {
        if (ext == "code" && data[i][0] < val_ext) {
            answer.push_back(data[i]);
        }
        else if (ext == "date" && data[i][1] < val_ext) {
            answer.push_back(data[i]);
        }
        else if (ext == "maximum" && data[i][2] < val_ext) {
            answer.push_back(data[i]);
        }
        else if (ext == "remain" && data[i][3] < val_ext) {
            answer.push_back(data[i]);
        }
    }

    // answer를 정렬해야 함 (sort_by 기준)
    if (sort_by == "code") {
        sort(answer.begin(), answer.end(), [](vector<int>& a, vector<int>& b) {
            return a[0] < b[0];
        });
    }
    else if (sort_by == "date") {
        sort(answer.begin(), answer.end(), [](vector<int>& a, vector<int>& b) {
            return a[1] < b[1];
        });
    }
    else if (sort_by == "maximum") {
        sort(answer.begin(), answer.end(), [](vector<int>& a, vector<int>& b) {
            return a[2] < b[2];
        });
    }
    else if (sort_by == "remain") {
        sort(answer.begin(), answer.end(), [](vector<int>& a, vector<int>& b) {
            return a[3] < b[3];
        });
    }

    return answer;
}
