#include <stdio.h>
 
int main() {
    int n,m ,k;
    scanf("%d %d %d",&n,&m,&k);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int currbox=k,x,boxcount=1;
    for(x=n-1;x>=0;){
        if(currbox>=a[x]){
            currbox=currbox-a[x];
            x--;
        }
        else{
            if(boxcount==(m))break;
            else{
                currbox=k;
                boxcount++;
            }
        }
    }
    printf("%d",(n-x-1));
	return 0;
}
