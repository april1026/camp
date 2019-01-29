#include <iostream>
#include <deque>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	
	int line[m][2];
	for (int i = 0; i < m; i++) {
		cin >> line[i][0] >> line[i][1];
		line[i][0]--;
		line[i][1]--;
	}
	
	deque <int> bfs;
	bfs.push_back(0);
	bool color;
	int node[n] = {1};
	for (int i = 1; i < n; i++) {
		node[i] = -1;
	}
	
	find:
	while(bfs.size()) {
		color = !node[bfs.front()];
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cout << node[j] << " ";
			}
			cout << '\n';
			if (line[i][0] == bfs.front() && node[line[i][1]] == -1) {
				node[line[i][1]] = color;
				bfs.push_back(line[i][1]);
			} else if (line[i][1] == bfs.front() && node[line[i][0]] == -1) {
				node[line[i][0]] = color;
				bfs.push_back(line[i][0]);
			} else if (line[i][0] == bfs.front() && node[line[i][1]] == node[bfs.front()]) {
				cout << 0 << endl;
				return 0;
			} else if (line[i][1] == bfs.front() && node[line[i][0]] == node[bfs.front()]) {
				cout << 0 << endl;
				return 0;
			}
		}
		bfs.pop_front();
		cout << "bfs ";
		for (int i = 0; i < bfs.size(); i++) {
			cout << bfs[i] << " ";
		}
		cout << "color " << color;
		cout << '\n';
	}
	for (int i = 0; i < n; i++) {
		if (node[i] == -1) {
			bfs.push_back(node[i]);
			goto find;
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		cout << node[i] << " ";
		if (node[i] == 0) {
			ans++;
		}
	}
	cout << '\n';
	if (ans > (n - ans)) {
		cout << (n - ans) << endl;
	} else {
		cout << ans << endl;
	}
	
	return 0;
}
