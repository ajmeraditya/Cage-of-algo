#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    int n,m;
    int*a,sum;
    for(int i=0;i<t;i++){
        cin >>n >>m ;
        a=(int*)malloc(n*sizeof(int));
        sum=0;
        for(int j=0;j<n;j++){
            cin >> a[j];
            sum=sum+a[j];
        }
        if(m==n && n>2){
            cout<<(sum*2)<<endl;
            for(int k=1;k<n;k++){
                cout<<k<<" " << k+1<<endl;
            }
            cout<<n<<" " <<"1"<<endl;
            free(a);
        }
        else{
            free(a);
            cout<<"-1"<<endl;
        }
    }
    
    
	return 0;
}