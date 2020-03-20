#include<bits/stdc++.h>

using namespace std;
int n;
int graph[100][100];
int visited[100];

void DFS(int v){
	visited[v] = 1;

	for (int i = 0; i < n; ++i)
	{
		if(graph[v][i] == 1 && visited[i] == 0){
			DFS(i);
		}
	}
	cout << v << endl;
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
		if(visited[i] == 0){
			DFS(i);
		}
	}

}