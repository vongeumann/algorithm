#include <iostream>

int map[51][51];
bool visited[51][51];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int width, height, mine;

void dfs(int x, int y) {
	for(int i=0; i!=4; i++) {
		int nx, ny;
		nx = x + dx[i];
		ny = y + dy[i];

		if(nx >=0 && ny >= 0 && nx < width && ny < height) {
			if(map[nx][ny] && !visited[nx][ny]) {
				visited[nx][ny] = true;
				dfs(nx, ny);
			}
		}
	}
}

int main() {
	int testcases=0;

	std::cin >> testcases;

	while(testcases--) {
		memset(map, 0, sizeof(map));
		memset(visited, false, sizeof(visited));
		int ans = 0;

		std::cin >> width >> height >> mine;
		for(int i=0; i!=mine; i++) {
			int x, y;
			std::cin >> x >> y;
			map[x][y] = 1;
		}

		for(int x=0; x!=width; x++) {
			for(int y=0; y!=height; y++) {
				if(map[x][y] && !visited[x][y]) {
					dfs(x, y);
					ans++;
				}
			}
		}
		std::cout << ans << std::endl;
	}

	return 0;
}