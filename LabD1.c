#include <stdio.h>

int main(){
    int x, y, z, con, im ;
    printf("x y z\n");
    scanf("%d %d %d", &x, &y, &z);


    if ((y==1)&& (z==1))
    {
        con=1;
        printf("Conjunction of Y and Z is REAL\n");
    }

    else
    {
        con=0;
        printf("Conjunction of Y and Z is FALSE\n");
    }

    if ((x==1) && (con==0))
    {
        printf("Implication of X and the CONjunction is FAlSE\n");
        printf("The formula is TRUE\n");
    }

    else {
            printf("Implication of X and the CONjunction is TRUE\n");
            printf("The formula is TRUE\n");
         }

}
