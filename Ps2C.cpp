#include <iostream>
using namespace std;
 
void subtree_count(int*a,int*b,char*c,int x){
    for(int i=x;i>=0;i--){
        b[a[i]-1]=b[a[i]-1]+b[i];
    }
}
 
int main() {
	int t,n,count;
	int*a;
	char*c;
	int*b;
	cin >>t;
	for(int i=0;i<t;i++){
	   cin>> n;
	   count=0;
	   a=(int*)malloc(n*sizeof(int));
	   b=(int*)malloc(n*sizeof(int));
	   c=(char*)malloc(n*sizeof(char));
	   for(int j=0;j<n;j++){
	       if(j==0){
	           a[0]=1;
	           continue;
	       }
	       cin>> a[j];
	   }
	   for(int j=0;j<n;j++){
	       cin>> c[j];
	       if(c[j]=='W'){
	           b[j]=1;
	       }
	       else b[j]=-1;
	   }
	   subtree_count(a,b,c,n-1);
	   for(int j=0;j<n;j++){
	       if(b[j]==0){
	           count++;
	       }
	   }
	   cout<<count<<endl;
	   free(a);
	   free(b);
	   free(c);
	}
	return 0;
}