#include<bits/stdc++.h>

using namespace std;

int graph[100][100];
queue<int> q;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> graph[i][j];
		}
	}
	int visited[100];
	memset(visited, 0, sizeof(visited));
	q.push(0);
	visited[0] = 1;

	while(!q.empty()){
		int v = q.front();
		q.pop();
		cout << v << " ";
		for (int i = 0; i < n; ++i)
		{
			if(graph[v][i] && !visited[i]){
				visited[i] = 1;
				q.push(i);
			}
		}		
	}
	cout << endl;
}