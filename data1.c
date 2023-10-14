#include <stdio.h>
#include <stdlib.h>

int f(int x){
	printf ("%d",x);
	if(x<9)
		f(x+1);
	printf ("%d",x);
}
main(){
		f(1);
		
}
