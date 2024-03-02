#include <stdlib.h>
#include <stdio.h>
int gcd(int m, int n) {//最大公约数 
    if (n==0) {
        return m;
    } else {
        return gcd(n, m%n);
    }
}
int lcm(int m, int n) {//最小公倍数 
    return (m*n) / gcd(m,n);
}
int main()
{
	int j;
	int G,L;
	int min=10000;
	scanf("%d%d",&G,&L);
	for(int i=G;i<=L;i=i+G){
		if(G*L%i!=0){
			continue;
		}
		j=G*L/i;
		if(gcd(i,j)==G&&lcm(i,j)==L){
			if(i+j<min){
				min=i+j;
			}
		}
	}
	printf("%d",min);
    return 0; 
}
  
        
 
