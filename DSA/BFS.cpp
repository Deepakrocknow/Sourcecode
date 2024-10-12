#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void bfs(int graph[][10], int start, int n) {
    vector<bool> visited(n, false);
    queue<int> q;
    
    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        cout << node << " ";
        q.pop();

        for (int i = 0; i < n; i++) {
            if (graph[node][i] == 1 && !visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
}

int main() {
    int n = 5; 
    int graph[10][10] = {
        {0, 1, 1, 0, 0},
        {1, 0, 0, 1, 1},
        {1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0},
        {0, 1, 0, 0, 0}
    };

    cout << "BFS starting from vertex 0: ";
    bfs(graph, 0, n);

    return 0;
}
