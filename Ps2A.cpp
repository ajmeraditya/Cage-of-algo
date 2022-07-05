#include <bits/stdc++.h>
using namespace std;
 
void fillDepth(int parent[], int i, int depth[])
{
    if (depth[i])
        return;
 
    if (parent[i] == -1) {
        depth[i] = 1;
        return;
    }
    if (depth[parent[i]] == 0)
        fillDepth(parent, parent[i], depth);
    depth[i] = depth[parent[i]] + 1;
}
 
 
int findHeight(int parent[], int n)
{
    int depth[n];
    for (int i = 0; i < n; i++)
        depth[i] = 0;
    for (int i = 0; i < n; i++)
        fillDepth(parent, i, depth);
    int ht = depth[0];
    for (int i = 1; i < n; i++)
        if (ht < depth[i])
            ht = depth[i];
    return ht;
}
 
 
int main() {
	int n,k;
	cin >> n;
	int a[n+1];
	int sol;
	a[0]=-1;
	for(int i=1; i<n+1 ;i++){
	    cin >> a[i];
	    if(a[i]==-1)a[i]=0;
	}
    int ma = findHeight(a, n+1);
	cout << (ma-1);
	
	
 	return 0;
   }