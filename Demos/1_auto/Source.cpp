
#include <stdio.h>
#include <conio.h>
#include <iostream>

enum Items{ Strawberry=1, Bread, Milk };

// in c++11 "constexpr" below 
// will be done at compile time  
_Const_ char* operator+(Items i1, Items i2) 
{
	int x = (int)i1 + (int)i2;
	switch (x)
	{
	case 3: return "Cake"; 
	case 4: return "Milkshake"; 
	case 5: return "Donut";
	default:return "bad food";
	}
}



int main()
{
	printf(" Strawberry + Bread =  [%s]\n",Strawberry+Bread);
	printf(" Strawberry + Milk =  [%s]\n", Strawberry + Milk);
	printf(" Bread + Milk =  [%s]\n", Bread + Milk);
	

	getche();
}