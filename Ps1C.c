#include <stdio.h>
 
int main() {
	float n,l,v1,v2,k;
    scanf("%f %f %f %f %f",&n,&l,&v1,&v2,&k);
    float t;
    if(((int)n%(int)k)==0){
        t=n/k;
    }
    else t=(n-((int)n%(int)k))/k+1;
    float x,y;
    x=l*(v1+v2)/(2*t*v1+v2-v1);
    y=2*x*v1/(v1+v2);
    float time ;
    time=x/v2 + (t-1)*y/v1;
    printf("%f",time);
	return 0;
}