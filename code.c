#include <stdio.h>

int main(void) {
	
	int t;
	scanf("%d",&t);
	
	int x,y;
	
	while(t--){
	    scanf("%d%d", &x,&y);
	    if(x>y){
	        printf("%d \n", x-y);
	    }
	    else if(y>x || y==x){
	        printf("0 \n");
	    }
	}
	return 0;
}

