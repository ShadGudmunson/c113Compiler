#include <stdio.h>

int anothertest() {

}
void testingFunctionCall();

int main() {
   // printf() displays the string inside quotation
   int x = 9;
   int y = 0;
   enum E e;
   int arr[2];
   unsigned int a = 60;	/* 60 = 0011 1100 */  
   unsigned int b = 13;	/* 13 = 0000 1101 */
   int c = 0;           
   printf("Hello,\t World!\n");
   if(x > 12){
      
   }else if(x < 12){
      
   }else{

   }
   testingFunctionCall();
   //Lets stry some bitwise math 
   

   c = a & b;       /* 12 = 0000 1100 */ 
   printf("Line 1 - Value of c is %d\n", c );

   c = a | b;       /* 61 = 0011 1101 */
   printf("Line 2 - Value of c is %d\n", c );

   c = a ^ b;       /* 49 = 0011 0001 */
   printf("Line 3 - Value of c is %d\n", c );

   c = ~a;          /*-61 = 1100 0011 */
   printf("Line 4 - Value of c is %d\n", c );

   c = a << 2;     /* 240 = 1111 0000 */
   printf("Line 5 - Value of c is %d\n", c );

   c = a >> 2;     /* 15 = 0000 1111 */
   printf("Line 6 - Value of c is %d\n", c );

   x = 50;
	while (x)
		x = x - 1;

   x = 1;
	x = x * 10;
	x = x / 2;
	x = x % 3;

   arr[0] = 1;
	arr[1] = 2;

   v.x = 1;
	v.y = 2;

   x = 1;
	x = x | 4;

   if (f() > 1000)
		return 1;
	if (f() >= 1000)
		return 1;
	if (1000 < f())
		return 1;
	if (1000 <= f())
		return 1;
	if (1000 == f())
		return 1;
	if (100 != f())
		return 1;
   
   x = zero();
	y = ++x;
	if (x != 1)
		return 1;
	if (y != 1)
		return 1;
	
	x = one();	
	y = --x;
	if (x != 0)
		return 1;
	if (y != 0)
		return 1;
	
	x = zero();
	y = x++;
	if (x != 1)
		return 1;
	if (y != 0)
		return 1;
	
	x = one();
	y = x--;
	if (x != 0)
		return 1;
	if (y != 1)
		return 1;

   if ('a' != 97)
		return 1;
      
   return 0;
}

void testingFunctionCall(){
   printf("Why tho?\n");
}
