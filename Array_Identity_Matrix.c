#include<stdio.h>
int main()
{  
   int A[100][100];
   int r1,c1;
   int i, j, n =1; 
  
   printf("Input number of Rows :");
   scanf("%d", &r1);
   printf("Input number of Columns :");
   scanf("%d",&c1);   
   printf("Input elements :\n");
       for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&A[i][j]);
            }
        }    
 	 printf("The matrix is :\n");
	 for(i=0;i<r1;i++)
	 {
	   for(j=0;j<c1 ;j++)
	     printf("% 4d",A[i][j]);
	    printf("\n");
	 }
    for(i=0; i<r1; i++)
    {
     for(j=0; j<c1; j++)
     {
	 if(A[i][j] != 1 && A[j][i] !=0)
	 {
	   n = 0;
	   break;
	 }
	}
   }
   if(n == 1 )
	printf(" The matrix is an identity matrix.\n");
   else
	printf(" The matrix is not an identity matrix.\n");
}