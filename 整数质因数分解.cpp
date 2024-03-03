#include <stdlib.h>
#include <stdio.h>
int isPrimeNumber(int n){
    int i; 
    for(i=2;i*i<=n;i++){
    	if(n%i==0){
    		return 0;
		}
	}
	return 1;
}
int main()
{
	int n;
	int i=2;
	scanf("%d",&n);
	while(i<=n){
		if(i==n){
			printf("%d",n);
			break;
		}
		else if(n%i==0&&isPrimeNumber(i)==1){
			printf("%d*",i);
			n=n/i;
			i=2;
		}
		else{
			i++;
		}
	}
	
    return 0; 
}
