#include <stdio.h>
#define f(x,y) x+y
#define g(x) x++
void main()
{
	int x = 7, y = 9, z = 0xa;
	switch (x << 2)                           //=28
	{
	case 29: printf("yes \n ");
	case 28: printf("no\n ");                 //Prints
	case 27: printf("i realy dont know\n ");  //Prints as there is no break
	default: printf("thats the answer \n ");  //Prints as there is no break

	break;
	}
	printf("first %d\n", x = x>>1);           //prints "first 3" as before not put into X it remain 7 so 7/2=3.5 drop what is after the . you get 3
	for (; x > 1; x--)                        //x start with 3 go down till its 1 (2 rounds)
		for (; y > 0; y--);                     //y start with 9 go down to 0  dose not happen after the first round as y remain 0 after each of x rounds
	printf("second %d %d\n ", x, y);          //Prints "second 1 0"
	y = 4;
	if (z & --x)                              //--x means x is now 0 then we do AND with z dont matter what z is it will become 0 as X is 0 (z is 10 in hex so 1010 in binery) so else happens
	{
		y *= 2;                                 //Skip to else
	}
	else
	{
		y /= 2;                                 //y/2 = 4/2 = 2
	}
	printf("third %d %d\n", y, x);            //prints "third 2 0"
	x = 3; y = 4;
	x = f(x, g(y)) * 4;                       //As of define this is really x+y++*4 as y++ only happen after the line is executed then this is 3+4*4 as of math rules 4*4 happens first so 3*16 = 19 
	printf("final %d\n ", x);                 //prints "final 19" and y is now 5 but dose not matter as end of code
}
