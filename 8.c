#include <stdlib.h>

char* duplicate(char* letters, int* digits)                         //Dubles letters by the number that is in the corsponding cell in digits
{
	int size = 1, i, j;
	char* str_res = (char*)malloc(1 * sizeof(char));                  //Creates a one cell char
	int lenLet = strlen(letters);
	for (i = 0; i < lenLet; i++)
	{
		if (letters[i] >= 'a' && letters[i] <= 'z' || letters[i] >= 'A' && letters[i] <= 'Z' || letters[i] == ' ')
		{
			for (j = 0; j < digits[i]; j++)
			{
				str_res[size - 1] = letters[i];
				size++;
				str_res = (char*)realloc(str_res, size *
					sizeof(char));
			}
		}
		else
		{
			return NULL;
		}
	}
	str_res[size - 1] = '\0';
	return str_res;
}

int main()                                                                //Added for running
{
	char letters[] = "cTest";
	int digits[] = { 2,1,4,2,3 };
	duplicate(letters, digits);
}
