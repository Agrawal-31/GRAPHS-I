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
	int src = 0;
	q.push(src);
	visited[src] = 1;

	while(!q.empty()){
		int v = q.front();
		q.pop();
		//cout << v + 1 << " ";
		for (int i = 0; i < n; ++i)
		{
			if(graph[v][i] && !visited[i]){
				visited[i] = visited[v] + 1;
				q.push(i);
			}
		}		
	}

	for (int i = 0; i < n; ++i)
	{
		cout << "Distance of " << i << " from " <<  src << " source vertex " << visited[i] - 1 << endl;
	}
}