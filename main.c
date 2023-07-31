#include <stdio.h>
#include <stdlib.h>

int main()
{
    //array sum

    int r,c,ar_1[3][3],ar_2[3][3],ar_3[3][3];

    //input
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("Enter values[%d][%d]:\n",r,c);
            scanf("%d",&ar_1[r][c]);
        }
    }
     for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("Enter values[%d][%d]:\n",r,c);
            scanf("%d",&ar_2[r][c]);
        }
    }
    //display

    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d ",ar_1[r][c]);

        }
        printf("\n");

    }
     printf("\n");
     for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d ",ar_2[r][c]);
        }
        printf("\n");
    }
     printf("\n");
    //sum

    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
           (ar_3[r][c]=ar_1[r][c]+ar_2[r][c]);

        }
    }

    //display sum

    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d ",ar_3[r][c]);
        }
        printf("\n");
    }




    //
    int row,colls,arry_1[3][4];

    //input (nested for loop)
    for(row=0;row<3;row++)
    {
        for(colls=0;colls<4;colls++)
        {
            printf("Enter values[%d][%d]:\n",row,colls
                   );
            scanf("%d",&arry_1[row][colls]);
        }

    }
    //display(nested for loop)
    for(row=0;row<3;row++)
    {
        for(colls=0;colls<4;colls++)
        {
            printf("%d  ",arry_1[row][colls]);
        }
        printf("\n");
    }

    return 0;
}
