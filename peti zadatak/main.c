#include <stdio.h>
#include <stdlib.h>

int main()
{
int* niz = malloc(5*sizeof(int));
printf("Uneti elemente :");
int i;
for(i=0; i<5; i++){
    scanf("%d", &niz[i]);
}
int* pok = niz;
printf("\n Deljivi su:");
for(i=0; i<5; i++){
    if(*(pok+i)%3==0)
        printf("\n %d", *(pok+i));
}
    return 0;
}
