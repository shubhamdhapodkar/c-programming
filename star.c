#include<stdio.h>
#include<conio.h>
void main(){
    int rows;
    printf("how many rows print\n");
    scanf("%d",&rows);
    for (int i = 0; i < rows; i++)//4
    {
        for (int j = 0; j <=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // printf("\n the reverse order\n");
    // printf("\n how many rows print\n");
    // scanf("%d",&rows);
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < rows-i; j++)
    //     {
    //       printf("*");
    //     }
    //      printf("\n");
    // }
    

    
}