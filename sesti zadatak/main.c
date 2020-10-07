#include <stdio.h>
#include <stdlib.h>
void unos(int* mat1, int* mat2){
printf("Unositi prvu matricu:");
int i, j, k=0;
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
     scanf("%d", (mat1+k));
    k+=4;
    }
}
k=0;
printf("\nUnositi drugu matricu:");
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
     scanf("%d", (mat2+k));
     k+=4;
    }
}
}
void ispis(int* mat1, int* mat2){
printf("\nPrva matrica:\n");
int i,j, k=0;
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        printf(" %d", *(mat1+k));
        k+=4;
    }
    printf("\n");
}
k=0;
printf("\nDruga matrica:\n");
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        printf(" %d", *(mat2+k));
        k+=4;
    }
printf("\n");
}
}
void sabiranje(int* mat1, int* mat2){
int i, j, k=0;
printf("\nSabrane matrice izgledaju ovako:\n");
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        printf(" %d", *(mat1+k)+ *(mat2+k));
        k+=4;
    }
    printf("\n");
}
}
int main()
{
int mat1[3][3];
int mat2[3][3];
unos(mat1, mat2);
ispis(mat1, mat2);
sabiranje(mat1, mat2);
    return 0;
}
