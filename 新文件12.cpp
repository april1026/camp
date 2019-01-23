#include <iostream>
#include <vector>
#include <deque>
using namespace std;
int map[800][800] = {}, n, m, ex, ey, sum = 0;
int wx, wy;

int main() {
	int k, q;
	cin >> n >> m >> k >> q;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}
	int x[k], y[k];
	for (int i = 0; i < k; i++) {
		cin >> x[i] >> y[i];
	}
	for (int p = 0; p < q; p++) {
		int sx, sy;
		cin >> sx >> sy >> ex >> ey;
		sx--;
		sy--;
		ex--;
		ey--;
		
		int xx, yy, xxx, yyy;
		for (int i = 0; i < k; i++) {
			xx = sx-ex;
			yy = sy-ex;
			if (xx < 0)
				xx *= (-1);
			if (yy < 0)
				yy *= (-1);
		}
		
		cout <<xx +yy << '\n';
	}
}
