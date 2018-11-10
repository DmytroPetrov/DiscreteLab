#include <stdio.h>

int main(){
    int size_array_1, size_array_2;

    printf("The size of the first array = ");
    scanf("%d", &size_array_1);
    printf("The size of the 2nd array = ");
    scanf("%d", &size_array_2);

    int arr_1[size_array_1], arr_2[size_array_2], rel[size_array_1][size_array_2];
    int i,y;

    for (i = 0 ; i < size_array_1; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &arr_1[i]);
    }

        for (i = 0 ; i < size_array_2; i++)
    {
        printf("b[%d] = ", i);
        scanf("%d", &arr_2[i]);
    }

    for (i = 0 ; i < size_array_1; i++)
    {
        for (y = 0 ; y < size_array_2; y++)
        {
            if (arr_1[i] < arr_2[y])
            {
                rel[i][y] = 1;
            }else
            {
                rel[i][y] = 0;
            }
        }
    }

    printf("     ");

    for (i = 0 ; i < size_array_2; i++)
    {
        printf("|%d| ", arr_2[i]);
    }

    for (i = 0 ; i < size_array_1; i++)
    {
        printf("\n %d   ", arr_1[i]);

        for (y = 0 ; y < size_array_2; y++)
        {
            printf(" %d  ",rel[i][y]);
        }
    }

    //transetive

    int n, k, tran_false = 0, tran_true = 0, antirefl =0;
    for(i = 0 ; i < size_array_1; i++)
    {
        for(y = 0 ; y < size_array_2; y++)
        {

//antireflexive
            if ( i == y && rel[i][y] == 0 && size_array_1 == size_array_2) antirefl++;
//END

            if ( rel[i][y] == 1)// is the relation true
            {
                for (n = 0 ; n < size_array_1; n++)
                {
                    if (arr_2[y] == arr_1[n]) // has it common values to check relation
                    {
                        for(k = 0; k < size_array_2; k++)
                        {
                            if (rel[n][k] == 1) //if it has
                            {
                                if (rel[i][k] == 1) // check whether the relation of it true
                                {
                                    tran_true++; //
                                }else
                                {
                                    tran_false++;
                                }

                            }
                        }
                    }
                }
            }
        }
    }
    //END







    if (tran_false == 0 && tran_true > 0)
    {
        printf("\n The relation matrix is transetive");
    }else
    {
        printf("\n The relation matrix is NOT transetive");
    }
    if (antirefl == size_array_1 && antirefl == size_array_2)
    {
        printf("\n The matrix is antireflexive");
    }
}
