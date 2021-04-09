#include <stdio.h>

void main()
{
     int i,j,k,arr1[10][10],rsum[10],csum[10],n, rowMax=0, colMax=0;
     printf("Input the size of the square matrix : ");
     scanf("%d", &n);
	 printf("Input elements in the first matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }
	 printf("The matrix is :\n");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n ;j++)
	     printf("% 4d",arr1[i][j]);
        printf("\n");
	 }

     /* Sum of rows */
     for(i=0;i<n;i++)
     {
	  rsum[i]=0;
	  for(j=0;j<n;j++)
        {
            rsum[i]=rsum[i]+arr1[i][j];
            if(rsum[i] > rowMax) {
                rowMax = rsum[i];
            }
        }
     }

      /* Sum of Column */
      for(i=0;i<n;i++)
      {
        csum[i]=0;
        for(j=0;j<n;j++)
        {
            csum[i]=csum[i]+arr1[j][i];
            if(csum[i] > colMax){
                colMax = csum[i];
            }
        }
      }

      printf("The sum or rows and columns of the matrix is :\n");
      for(i=0;i<n;i++)
      {
	   for(j=0;j<n;j++)
       {
           printf("% 4d",arr1[i][j]);
       }
	   printf("% 8d",rsum[i]);
	   printf("\n");
       }
       printf("\n");
        for(j=0;j<n;j++)
        {
	        printf("% 4d",csum[j]);
        }
        printf("\n");
        printf("Row-wise maximum sum: ");
        printf("%d",rowMax);
        printf("\n");
        printf("Column-wise maximum sum: ");
        printf("%d",colMax);
        printf("\n");
        printf("Minimum between rowMax and colMax: ");
        if(rowMax < colMax){
            printf("%d", rowMax);
        } else {
            printf("%d", colMax);
        }
  }
