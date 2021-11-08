#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int m , n,x   ;
	printf("please entre the num of rows :  ");
	scanf("%d", &m);
		printf("please entre the num of colmns :  ");
	scanf("%d", &n);
	int array [m][n] ;
		for ( int i=0 ;i<m ; i++ )
	{
		for (  int j=0 ; j< n; j++)
		{ 
		array [i][j]=rand()%10 ;
		}
		printf("\n");
	}	
	
		
		
				
	
	for ( int i=0 ;i<m ; i++ )
	{
		for (  int j=0 ; j< n; j++)
		{
			printf("%d \t", array[i][j]);
		}
		printf("\n");
	}	
	 printf("Enter the number 'x' that you want to search for :");
    scanf("%d",&x);
    int flag=0,row,col;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if( array [m][n]==x);
        {
            flag=1;
            row=i;
            col=j;
        }
        }
    }
    if(flag==1)
        printf("found the number %d in the array",x);
      else
        printf("Didn't found the number %d in the array",x);
}
	 
	
	
	 
	
	
	
	
	
	
	
	
	
	
	