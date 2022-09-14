<<<<<<< HEAD
#include <stdio.h>

#include <time.h>

#include <stdlib.h>



/**

 * main - entry point

 *

 * Return: always return a 0

 */

int main(void)

{

	int n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n < 0)

	{

		printf("%d is negative\n", n);

	} else if (n == 0)

	{

		printf("%d is zero\n", n);

	} else

	{

		printf("%d is positive\n", n);



	}

	return (0);

}
=======
#include <stdio.h> 
#include <time.h> 
#include <stdlib.h> 
  
/** 
  *main - entry point 
  * 
  *Return: always return a 0 
*/ 
 int main(void)
{
	int n; 
  
         srand(time(0)); 
         n = rand() - RAND_MAX / 2;
         if (n < 0) 
         { 
                 printf("%d is negative\n", n); 
         } else if (n == 0) 
         { 
                 printf("%d is zero\n", n); 
         } else 
         { 
                 printf("%d is positive\n", n); 
  
         } 
         return (0); 
 }
>>>>>>> 498737273ef6e405912bebecd610a4aee7cc0196
