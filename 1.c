/* Online C Compiler and Editor */
#include <stdio.h>
int main()
{
    int sum =0 ,i=0,j=0;
    
    printf("Enter the Marks of ten Students \n") ;
    for(i=0 ; i<2 ; i++)
    {
        scanf("%d",&j) ;
        sum = sum + j;
    }

     printf("Total Marks Scored : ") ;
     printf("%d" , sum ) ;

    return 0;
}
