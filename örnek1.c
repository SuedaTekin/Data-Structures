#include <stdio.h>
#include <stdlib.h>
#define BOYUT 5

int dizi[Boyut], top;

void push(int veri)
(
   if( top + 1 == BOYUT)
   (
        printf("Stack dolu");
        
   )
   else
    ( 
	    top = top + 1;
        dizi[ top ] = veri;
    )
)

int main()
(
    top = -1;
    return 0;

)
