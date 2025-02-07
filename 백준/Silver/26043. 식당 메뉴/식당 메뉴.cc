#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int N;
queue<pair<int,int>> que;

vector<int> A, B, C;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;

	for (int i = 0; i < N; i++) {
		int q; cin >> q;
		if (q == 1) {
			int a, b; cin >> a >> b;
			que.push(make_pair(a, b));
		}
		else {
			int b; cin >> b;
			if (b == que.front().second) A.emplace_back(que.front().first);
			else B.emplace_back(que.front().first);
			que.pop();
		}
	}

	while (!que.empty()) {
		C.emplace_back(que.front().first);
		que.pop();
	}

	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	sort(C.begin(), C.end());

	if (A.empty()) cout << "None\n";
	else {
		for (auto& x : A) cout << x << ' ';
		cout << '\n';
	}

	if (B.empty()) cout << "None\n";
	else {
		for (auto& x : B) cout << x << ' ';
		cout << '\n';
	}

	if (C.empty()) cout << "None\n";
	else {
		for (auto& x : C) cout << x << ' ';
		cout << '\n';
	}
}