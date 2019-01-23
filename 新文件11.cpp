#include <iostream>
#include <vector>
#include <deque>
using namespace std;



int main() {
	int n, m, q;
	cin >> n >> m >> q;
	vector <int> u;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		for (int q = a; q <= b; q++) {
			for (int j = 0; j > u.size(); j++) {
				if (u[j] == q) {
					u[j] = 0;
				} else {
					u.push_back(q);
				}
			}
		}
	}
	for (int i = 0; i < q; i++) {
		int input;
		cin >> input;
		cout << u[input-1];
	}
}
