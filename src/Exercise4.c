/*
4.	Write a program to display a hollow triangle by asterisks (*) on the screen.
The input will be the height of the triangle and the thickness of the borders.
Ex:
 ____________________________________
| Input: 7 2                         |
| Output:                            |
|             *                      |
|           * * *                    |
|         * *   * *                  |
|       * *       * *                |
|     * *           * *              | row : borders +1  --> height - borders:  soluongsao - borders*2
|   * * * * * * * * * * *            |
| * * * * * * * * * * * * *          |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int height = atoi(argv[1]);
	int border = atoi(argv[2]);
	//Your codes here
	for (int row =1; row <=height; row++) {
	
		
		for (int column =1; column<= 2*height -1; column++) {
			if (1 <= column && column <= (height - row)  || (height + row) <= column && column <= (2*height - 1)) {
				printf ("  ");
			}  else if (row >= border+1 && row <= height - border) {
		
				if (column > (height - (row-1) +border) && column < (height +(row-1) -border)){
					printf("  ");
				} 
			
		}  else  { 
				printf("* ");
			}
		}
		printf("\n");
	}
	return 0;
}