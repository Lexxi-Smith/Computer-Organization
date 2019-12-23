
#include <stdio.h>
#include <matrix_multiply.h>

void matrix_multiplication(float array1[4][3], float array2[3][4], float result[4][4], int rows, int shared, int columns)
{



   int r_index,c_index,s_index,sum = 0;

   for (r_index = 0;r_index < rows; r_index++) 
   {
	for (c_index = 0; c_index < columns; c_index++) 
	{
		for (s_index = 0; s_index < shared; s_index++) 
		{
		sum = sum + (array1[r_index][s_index]) * (array2[s_index][c_index]);
		}

		result[r_index][c_index] = sum;
		sum = 0;
	}
   }	
}

			

