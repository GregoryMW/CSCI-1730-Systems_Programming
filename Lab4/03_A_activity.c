#include <stdio.h>


int f1( char var )
{
  char fn[]="[f1]";
  int return_val=1;

  printf( "%s: input is: %c and returns %2d\n", fn, var, return_val );

  return return_val;
}

int f2( char var )
{
  char fn[]="[f2]";
  int return_val=2;

  printf( "%s: input is: %c and returns %2d\n", fn, var, return_val );

  return return_val;
}

int f3( char var )
{
  char fn[]="[f3]";
  int return_val=3;

  printf( "%s: input is: %c and returns %2d\n", fn, var, return_val );

  return return_val;
}


int main()
{
  //
  //      
  //  --------------------------------------------------------     
  //  QUESTION 1: Declare an ARRAY of 3 chars initialized
  //	to contain 3 chars - 'a', 'b' and 'c'
  //	name the array "carray" ("c" is for char).
  //  --------------------------------------------------------     

  // Q1: REPLACE the print statement below with array declaration
  printf("Q1: TODO: Add declaration of -- an array of 3 chars --- : \n");


  //  -------------------------------------------------------     
  //  QUESTION 2: Declare ARRAY of function pointers
  //       below - where each function :
  //		takes one 'char' input argument and
  //		returns an 'int'
  //	
  //	as reference the below function declaration:
  // 	   void (*ptr_func)(int);
  // 	       where:
  //  		*ptr_func is a ptr to a function 
  //      	that returns 'void' with one 'int' argument
  //	
  //    You -- need to think on how the array is initialized
  //  --------------------------------------------------------     

  // Q2: add declaration below:
  printf("Q2: TODO: Add declaration of -- an array of function ptrs--- : \n");



  //  --------------------------------------------------------     
  //   QUESTION 3:
  //  --------------------------------------------------------     
  	// call each of the functions by iterating through
 	// the array declared in Q2, with input from
	// from carray (iterating through the array declared
        //	in Q1). i.e: 
        //	   first  iteration f1 with input carray item 0
        //	   second iteration f2 with input carray item 1
        //	   third  iteration f3 with input carray item 2
        //	insert the call inside the while loop below.
  int c = 0;
  while( c < 3 )
  {
	// Q3 : add call below:
  	printf("Q3(%1d): TODO: call each function here-- : \n", c );

	c++;
  }

    return 0;
}
