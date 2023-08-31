#include <stdio.h>

int main() 
{
    int n,k;
    scanf("%d", &n);
  	for(int i=1;i<=n;i++){
        k = n;
		for(int j=1;j<2*n;j++){
			if(i>j)
				printf("%d ",k--);
			else if(i+j>=2*n)	
				printf("%d ",k++);
			else printf("%d ",k);
		} 
		printf("\n");  
    }
	for(int i=n;i<2*n;i++){
        k = n;
		for(int j=1;j<2*n;j++){
			if(i+j<2*n)	
				printf("%d ",k--);
			else if(j>=i)	
				printf("%d ",k++);
			else printf("%d ",k);
		} 
		printf("\n");  
    }
    return 0;
}
