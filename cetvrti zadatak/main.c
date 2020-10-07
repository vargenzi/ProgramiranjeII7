#include <stdio.h>
#include <stdlib.h>

int main()
{
int* niz= malloc(10*sizeof(int));
printf("Uneti elemente:");
int i;
for(i=0; i<10; i++){
    scanf("%d", &niz[i]);
}
int* pok= niz;
int max;
 max = niz[0];
for(i=0; i<10; i++){
    if(*(pok+i)>max){
        max = *(pok+i);
    }
}
printf("\n Najvecci element je %d", max);
    return 0;
}
//Profesore, tekst ovog zadatka mi nije bas bio najjasniji, verujem da ovako kako sam uradio nije trebalo.
