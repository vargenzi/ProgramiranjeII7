#include <stdio.h>
#include <stdlib.h>
int jedanki(char* s1, char* s2){
if(strcmp(s1, s2)==0){
    return 1;
}else{
return 0;
}

}
void unos(char* s1, char* s2){
int i, j;
printf("Uneti prvi string:");
gets(s1);
fflush(stdin);
printf("\nUneti drugi string:");
gets(s2);
}


int main()
{
 char* s1= malloc(20*sizeof(char));
 char* s2= malloc(20*sizeof(char));
 unos(s1,s2);
 if(jedanki(s1,s2)==1){
    printf("\nStringovi su jednaki.");
 }else{
 printf("\nNisu jednaki.");
 }
    return 0;
}
