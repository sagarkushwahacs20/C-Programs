#include <stdio.h>
int  main()
{
  int A[100][100],i,j,n;
  float determinant=0;
   printf("Input the size of the square matrix : ");
     scanf("%d", &n); 
	 printf("Input elements in the first matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&A[i][j]);
            }
        }  
	 printf("The matrix is :\n");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n ;j++)
	     printf("% 4d",A[i][j]);
	    printf("\n");
	 }
   printf("\nSetting zero in lower triangular matrix\n");
   for(i=0;i<n;i++){
      printf("\n");
      for(j=0;j<n;j++)
           if(i<=j)
             printf("% 4d",A[i][j]);
           else
             printf("% 4d",0);
  }
       printf("\n\n");
}