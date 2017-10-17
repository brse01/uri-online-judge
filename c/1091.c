#include <stdio.h>
#include <stdlib.h>

void processInformation(int x, int y, int n, int m);

int main(){	
	int k,m,n,x,y;
	int i;	

	do{
	scanf("%d",&k);

	if(k == 0) break;	

	scanf("%d%d",&n,&m);

	for(i=0; i < k; i++){
		scanf("%d%d",&x,&y);
		processInformation(x,y,n,m);
	}
	}while(1);		
	return 0;
}



void processInformation(int x, int y, int n, int m){
	if(x > n && y > m){
		printf("NE\n");
	}
	if(x < n && y > m){
		printf("NO\n");
	}
	if(x<n && y<m){
		printf("SO\n");
	}
	if(x>n && y<m){
		printf("SE\n");
	}
	if(x==n || x==m || y==n || y==m){
		printf("divisa\n");
	}
}