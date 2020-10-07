#include <stdio.h>
#include <stdlib.h>
void UnosDimenzija (int* n){
printf("Unesite dimenziju vase kvadartne matrice:");
do{
    scanf("%d", n);
    }while(n<=0);
}
int main()
{
int n, i=0;
UnosDimenzija(&n);
double** matrica = malloc(n*sizeof(double));
for(i=0; i<n; i++){
    matrica[i] = malloc(n*sizeof(double));
}
printf("\n Unesite elemente matrice:");
for(i=0; i<n; i++){
    for(int j=0; j<n; j++){
        scanf("%lf", &matrica[i][j]);
    }
}
for(i=0; i<n; i++){
    for(int j=0; j<n; j++){
        printf("%f ", matrica[i][j]);
    }
    printf("\n");
}
printf("\n");
printf("Izgled transponovane matrice: \n");
for(i=0; i<n; i++){
    for(int j=0; j<n; j++){
        printf("%f ", matrica[j][i]);
    }
    printf("\n");
}
    return 0;
}
