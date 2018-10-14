#include <stdio.h>


int main(){

    int size_m_1, size_m_2, y;
    //insert size of matrix
    printf("Mat 1 size = ");
    scanf("%d",&size_m_1);

    printf("Mat 2 size = ");
    scanf("%d",&size_m_2);

    int m_1[size_m_1], m_2[size_m_2], m_cross[size_m_1+size_m_2], m_sub[size_m_1+size_m_2];
    //insert elements of 1st matrix
    for ( y = 0; y < size_m_1; y++)
    {
        scanf("%d", &m_1[y]);

    }


//calculating matrix cross
int l=0;
    for ( y = 0; y < size_m_2; y++)
    {
        scanf("%d", &m_2[y]);
        int n;

        for(n = 0; n < size_m_1 ; n++)
            {

                if (m_2[y] == m_1[n])
                {
                    m_cross[l] = m_2[y];
                    l++;
                }

        }
    }

//calculating 1st matrix power
    int power, i;
    power=0;
    for ( i = 0; i < size_m_1; i++)
    {

        if (m_1[i] == 0)
        {
            power++;
        }else
        for (y = i+1; y < size_m_1; y++)
        {
            if( (m_1[i] == m_1[y]))
            {
                power++;
            }
        }
    }

//calculating 1st and 2nd matrix subtraction
    int l_sub=0;
    for (y = 0; y < size_m_1; y++ )
    {
        int n;
        for (n = 0; n < size_m_2; n++)
        {
            if (m_1[y] == m_2[n] )
            {
                m_1[y] = 0;


            }

        }
    }

    printf("Matrix cross                     \n");
    for (y = 0; y < l; y++){

        printf("%d\n", m_cross[y]/*, m_sub[y]*/);

    }

     printf("Matrix subtraction \n");
    for (y = 0; y < size_m_1; y++){

        printf("                            %d \n", m_1[y]);

    }

//calculating power of 2nd matrix
    printf("Power of 1st matrix = %d \n", (size_m_1-power));
    int power_2= 0 ;
    for (i = 0; i < size_m_2; i++)
    {
        if (m_2[i] == 0)
        {
            power_2++;
        }else
        for (y = i+1; y < size_m_2; y++)
        {
            if( (m_2[i] == m_2[y]))
            {
                power_2++;
            }
        }
    }
    printf("Power of 2nd matrix = %d", (size_m_2 - power_2));

    return (0);

}
