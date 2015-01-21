#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dynamicArray.h"


/* param: s the string
   param: num a pointer to double
   returns: true (1) if s is a number else 0 or false.
   postcondition: if it is a number, num will hold
   the value of the number
*/
int isNumber(char *s, double *num)
{
	char *end;
	double returnNum;

	if(strcmp(s, "0") == 0)
	{
		*num = 0;
		return 1;
	}
	else 
	{
		returnNum = strtod(s, &end);
		/* If there's anythin in end, it's bad */
		if((returnNum != 0.0) && (strcmp(end, "") == 0))
		{
			*num = returnNum;
			return 1;
		}
	}
	return 0;  //if got here, it was not a number
}

/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and 
	their sum is pushed back onto the stack.
*/
void add (struct DynArr *stack)
{
	double x, y, z;

	// Sets x to the top of the stack then pops it so the process can repeat
	x = topDynArr(stack);
	popDynArr(stack);
	
	y = topDynArr(stack);
	popDynArr(stack);
	
	// Adds the two numbers then pushes it to the stack
	z = x + y;
	pushDynArr(stack, z);
}

/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and 
	their difference is pushed back onto the stack.
*/
void subtract(struct DynArr *stack)
{
	TYPE x, y, z;

	// Sets x to the top of the stack then pops it so the process can repeat
	x = topDynArr(stack);
	popDynArr(stack);
	
	y = topDynArr(stack);
	popDynArr(stack);
	
	// Subtracts the two numbers then pushes it to the stack
	z = x - y;
	pushDynArr(stack, z);
}

/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and 
	their quotient is pushed back onto the stack.
*/
void divide(struct DynArr *stack)
{
	TYPE x, y, z;

	// Sets x to the top of the stack then pops it so the process can repeat
	x = topDynArr(stack);
	popDynArr(stack);
	
	y = topDynArr(stack);
	popDynArr(stack);
	
	// Adds the two numbers then pushes it to the stack
	z = (double) x / (double) y;
	pushDynArr(stack, z);
}

/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and 
	their product is pushed back onto the stack.
*/
void multiply(struct DynArr *stack)
{
	TYPE x, y, z;

	// Sets x to the top of the stack then pops it so the process can repeat
	x = topDynArr(stack);
	popDynArr(stack);
	
	y = topDynArr(stack);
	popDynArr(stack);
	
	// Adds the two numbers then pushes it to the stack
	z = x * y;
	pushDynArr(stack, z);
}

/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and 
	their result is pushed back onto the stack.
*/
void power(struct DynArr *stack)
{
	TYPE x, y, z;

	// Sets x to the top of the stack then pops it so the process can repeat
	x = topDynArr(stack);
	popDynArr(stack);
	
	y = topDynArr(stack);
	popDynArr(stack);
	
	// Adds the two numbers then pushes it to the stack
	z = pow(x, y);
	pushDynArr(stack, z);
}

/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and 
	their result is pushed back onto the stack.
*/
void square(struct DynArr *stack)
{
	TYPE x, z;

	// Sets x to the top of the stack then pops it so the process can repeat
	x = topDynArr(stack);
	popDynArr(stack);
	
	// Adds the two numbers then pushes it to the stack
	z = x * x;
	pushDynArr(stack, z);
}

/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and 
	their result is pushed back onto the stack.
*/
void cube(struct DynArr *stack)
{
	TYPE x, z;

	// Sets x to the top of the stack then pops it so the process can repeat
	x = topDynArr(stack);
	popDynArr(stack);
	
	// Adds the two numbers then pushes it to the stack
	z = x * x * x;
	pushDynArr(stack, z);
}

/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and 
	their result is pushed back onto the stack.
*/
void absolute(struct DynArr *stack)
{
	TYPE x, z;

	// Sets x to the top of the stack then pops it so the process can repeat
	x = topDynArr(stack);
	popDynArr(stack);
	
	// Adds the two numbers then pushes it to the stack
	z = fabs(x);
	pushDynArr(stack, z);
}

/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and 
	their result is pushed back onto the stack.
*/
void square_root(struct DynArr *stack)
{
	TYPE x, z;

	// Sets x to the top of the stack then pops it so the process can repeat
	x = topDynArr(stack);
	popDynArr(stack);
	
	// Adds the two numbers then pushes it to the stack
	z = sqrt(x);
	pushDynArr(stack, z);
}

/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and 
	their result is pushed back onto the stack.
*/
void expo(struct DynArr *stack)
{
	TYPE x, z;

	// Sets x to the top of the stack then pops it so the process can repeat
	x = topDynArr(stack);
	popDynArr(stack);
	
	// Adds the two numbers then pushes it to the stack
	z = exp(x);
	pushDynArr(stack, z);
}

/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and 
	their result is pushed back onto the stack.
*/
void ln(struct DynArr *stack)
{
	TYPE x, z;

	// Sets x to the top of the stack then pops it so the process can repeat
	x = topDynArr(stack);
	popDynArr(stack);
	
	// Adds the two numbers then pushes it to the stack
	z = log(x);
	pushDynArr(stack, z);
}

/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and 
	their result is pushed back onto the stack.
*/
void log(struct DynArr *stack)
{
	TYPE x, z;

	// Sets x to the top of the stack then pops it so the process can repeat
	x = topDynArr(stack);
	popDynArr(stack);
	
	// Adds the two numbers then pushes it to the stack
	z = log10(x);
	pushDynArr(stack, z);
}

double calculate(int numInputTokens, char **inputString)
{
	int i;
	int count = 0;
	double *x = 0.0;
	double result = 0.0;
	char *s;
	struct DynArr *stack;

	//set up the stack
	stack = createDynArr(20);

	// Check for too many/too few numbers
	 for (i = 0; i < numInputTokens; i++)
	 {
		// If its a valid number
		if (isNumber(inputString[i], x) || !strcmp(s, "pi") || !strcmp(s, "e"))
			count++;
		else
		{
			// Checking if the operator is a binary operator
			if (!strcmp(s, "+") || !strcmp(s,"-") || !strcmp(s,"/") || !strcmp(s,"*") || !strcmp(s,"^"))
			{
				// Make sure the right amount of numbers are given for the operator
				if (count != 2)
				{
					printf("Invalid entered arguments. Please rerun program.");
					exit(0);
				}
			}
			// Checking if operator is unary
			else if (!strcmp(s, "^2") || !strcmp(s, "^3") || !strcmp(s, "abs") || !strcmp(s, "sqrt") || !strcmp(s, "exp") || !strcmp(s, "ln") || !strcmp(s, "log"))
			{
				if (count != 1)
				{
					printf("Invalid entered arguments. Please rerun program.");
					exit(0);
				}
			}
		}
	 }
	
	// start at 1 to skip the name of the calculator calc
	for(i=1;i < numInputTokens;i++) 
	{
		s = inputString[i];

		// Hint: General algorithm:
		// (1) Check if the string s is in the list of operators.
		//   (1a) If it is, perform corresponding operations.
		//   (1b) Otherwise, check if s is a number.
		//     (1b - I) If s is not a number, produce an error.
		//     (1b - II) If s is a number, push it onto the stack

		if(strcmp(s, "+") == 0)
			add(stack);
		else if(strcmp(s,"-") == 0)
			subtract(stack);
		else if(strcmp(s, "/") == 0)
			divide(stack);
		else if(strcmp(s, "x") == 0)
			multiply(stack);
		else if(strcmp(s, "^") == 0)
			power(stack);
		else if(strcmp(s, "^2") == 0)
			square(stack);
		else if(strcmp(s, "^3") == 0)
			cube(stack);
		else if(strcmp(s, "abs") == 0)
			absolute(stack);
		else if(strcmp(s, "sqrt") == 0)
			square_root(stack);
		else if(strcmp(s, "exp") == 0)
			exp(stack);
		else if(strcmp(s, "ln") == 0)
			ln(stack);
		else if(strcmp(s, "log") == 0)
			log(stack);
		else 
		{
			if (isNumber(s, x))
				pushDynArr(stack, x);
			else if (strcmp(s, "pi")
			{
				x = 3.14159265;
				pushDynArr(stack, x);
			}
			else if (strcmp(s, "e"))
			{
				x = 2.7182818;
				pushDynArr(stack, x);
			}
			else
			{
				printf("Invalid entered arguments. Please rerun program.");
				exit(0);
			}
		}
	}	//end for 

	/* (1) Check if everything looks OK and produce an error if needed.
	 * (2) Store the final value in result and print it out.
	 */
	assert(stack->size == 1);
	result = stack->data[0];
	printf("Final result: %d", result);
	
	return result;
}

int main(int argc , char** argv)
{
	// assume each argument is contained in the argv array
	// argc-1 determines the number of operands + operators
	if (argc == 1)
		return 0;

	calculate(argc,argv);
	return 0;
}
