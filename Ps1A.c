#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,q,m;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
	    cin >> a[i];
	}
	cin >> q;
	sort(a , a + n);
	for(int i=0;i<q;i++){
	    cin >> m;
	    cout << (upper_bound(a,a+n ,m) - a) << endl;
	} 
	return 0;
}