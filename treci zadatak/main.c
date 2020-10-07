#include <stdio.h>
#include <stdlib.h>
void unos(char* a, char* rec){
printf("Unestie karakter:");
scanf("%c", a);
fflush(stdin);
printf("\nUnesite rec za proveru:");
gets(rec);
}
int provera(char a, char* rec){
int n=0, i;
for(i=0; i<20; i++){
    if(a==rec[i]){
        n++;
    }
}
return n;
}
int main()
{
char a;
char rec[20];
unos(&a, rec);
printf("\nPojavljuje se %d puta.", provera(a, rec));
    return 0;
}
