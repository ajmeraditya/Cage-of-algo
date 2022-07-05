#include <bits/stdc++.h>
using namespace std;
 
int remaining(int* a,int n){
    int count=0;
    for(int j=0;j<n;j++){
        if(a[j]==0){
            count++;
        }
    }
    return count;
}
int main() {
	int n,m;
	cin >> n >> m;
	int indeg[n];
	int x,y;
	for(int i=0;i<n;i++){
	    indeg[i]=0;
	}
	
	for(int i=0;i<m;i++){
	    cin >> x >> y;
	    if(x>y)indeg[y-1]++;
	    else indeg[x-1]++;
	}
	
	int q,z,ans=0;
	
	for(int i=0;i<n;i++){
	    ans=remaining(indeg,n);
	}
	
	cin >> q;
	
	for(int i=0;i<q;i++){
	    cin >>x;
	    if(x==3){
	        cout << ans <<endl;
	    }
	    else{
	        cin >> y >> z;
	        if(x==1){
	            if(y>z){
	                if(indeg[z-1]==0)ans--;
	                indeg[z-1]++;
	            }
	            else{
	                if(indeg[y-1]==0)ans--;
	                indeg[y-1]++;
	            }
	        }
	        if(x==2){
	            if(y>z){
	                indeg[z-1]--;
	                if(indeg[z-1]==0)ans++;
	            }
	            else{
	                indeg[y-1]--;
	                if(indeg[z-1]==0)ans++;
	            }
	        }
	    }
	}
	
	return 0;
}