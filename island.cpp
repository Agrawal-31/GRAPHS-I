#include<bits/stdc++.h>

using namespace std;
int n;
int graph[100][100];
int visited[100][100];
int dir[8][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}, {1, 1}, {-1, -1}, {-1, 1}, {1, -1}};

void DFS(int x, int y){
	visited[x][y] = 1;

	for (int i = 0; i < 8; ++i)
	{
		int a = x + dir[i][0];
		int b = y + dir[i][1];
		if(a >= 0 && a < n && b >= 0 && b < n){
			if(graph[a][b] == 1 && visited[a][b] == 0){
				DFS(a, b);
			}
		}
	}
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> graph[i][j];
		}
	}

	memset(visited, 0, sizeof(visited));

	int count = 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(graph[i][j] == 1 && visited[i][j] == 0){
				DFS(i, j);
				count++;
			}
		}
	}

	cout << "No. of components: " << count << endl;
}