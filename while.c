#include <stdio.h>
#include <stdlib.h>

int main ()
{


int S,i ;
printf("afficher un nombrer:");
scanf("%d",&S);
while  (S<0 || S>10){
    printf("afficher un nombrer:\n");
    scanf("%d",&S);
}
i=0;
while(i<=10){
    printf("%d * %d = %d\n",S,i,S*i);
    i++;
}

}



