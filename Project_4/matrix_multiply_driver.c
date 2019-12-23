#include <stdio.h>
#include "matrix_multiply.h"



int main()
{
    float left[4][3] = 
    {
	    {1,2,3},
	    {4,5,6},
	    {6,5,4},
	    {3,2,1}
    };
    
    float right[3][4] = 
    {
	    {7,8,9,10},
	    {11,12,13,14},
	    {15,16,17,18}
    };
    
    float result[4][4] = 
    {
	    {0,0,0,0},
	    {0,0,0,0},
	    {0,0,0,0},
	    {0,0,0,0}
    };
    
    int x,y;
    
    printf("The result of the matix multiplication is: \n");
    
    float *ptr1,*ptr2,*ptr3;

    ptr1 = (float *)left;
    ptr2 = (float *)right;
    ptr3 = (float *)result;
    matrix_multiplication(ptr1,ptr2,ptr3,4,3,4);

    
    
    
    for (x = 0; x < 4; x++)
    {
  	for (y = 0; y < 4; y++ )
	{
		printf("%4i ", (int)result [x][y]);
	}
	printf("\n");
	
    } 

        
    
    return 0;
    
}



