#include <stdio.h>

char *strcat(char *, char *);
/*	
	multi line 
	comment 				
*/
// single line comment

int logicalValue;
// global scope variable declaration
int a, b, c, d6, x, y45, g0var, d6Var;
double dubVal;

void assignments() {
	a = 1;
	b = 2;
	c = c- 3;
}

void Operators() {
int w, x, y, z, q ;
	x = -1;
	if (x < y && y <= z || z < q && q != x) {
	   x = y;
	   y = z;
	} else {
	   w = x + y * z / q - 4;
	   }
	logicalValue = w > 20;
}

void WhileStuff() {
int x;
   x = 0;
   for( x; x < 20;x++ ){
	   x = d6;
	  return;
	  }
}

void RollTheDice() {
  int why, tho;
	d6Var = 6;
	y45 = d6Var;
}

void main() {
	RollTheDice();
	printf("stuff and things\n");
	g0var = 2;
}

struct pet {
  int hunger;
  int happy;
};

void play(struct pet p) {
   int choice;
   printf("What should we play?");
   printf( "Fetch (1) \n Roll over (2)" );
//   fmt.Scan(&choice)
   choice = 2;
   if (choice == 1) {
      printf("Fetch, eh");
      p.happy = p.happy+10;
   } else if (choice == 2) {
      printf("Roll over?  Really?");
      p.hunger = 1;
   } else {
      printf("invalid choice");
   }
}


// class variable declaration
void MakeAPet() {
	// local scope variable declaration
struct pet p;
   play(p);
   printf("%d\n", p.happy);
}

char * stringOps() {
	char *S1, *S2;
	S1 = "One";
	S2 = strcat(S1, "Two"); // uh oh
	return S2;
}

int *listOps()  {
	int L[3];
	L[0] = 1; L[1] = 2; L[2] = 3;
	return L; // uh oh
}
