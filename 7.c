#include <stdio.h>

int func2(char* str) {                            //Turns char of numbers into numbers, till it gets to something that is not a number
	int num = 0;
	while (*str && *str >= '0' && *str <= '9') {
		num = num * 10 + (*str - '0');
		str++;
	}
	return num;
}
int func1(int num) {                            //Return the amount of digits in a number
	int len = 0;
	if (0 == num) return 1;
	while (num) {
		len++;
		num /= 10;
	}
	return len;
}
char* addNums(char* str, int num) {           //Gets a string and a number, and takes out a number from the string (till any outher character) adds the number that was given and then return the result
	int strnum = func2(str);
	int add = strnum + num;
	int lenadd = func1(strnum + num);
	char* newNum = (char*)malloc(sizeof(char) * (lenadd + 1));
	newNum[lenadd--] = '\0';
	for (; lenadd >= 0; lenadd--) {
		newNum[lenadd] = (char)(add % 10 + '0');
		add /= 10;
	}
	return newNum;
}
void main()                                   //Error in orignal written as Void not void
{
	char* str = addNums("125ddab4d5*+", 1000);  
	puts(str);                                  //prints "1125"
	str = addNums("123", 4);                    //Error in orignal anounce str as char
	puts(str);                                  //prints "127"
}
