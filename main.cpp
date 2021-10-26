#include <iostream>
bool IsLeapYear(int a)
{
	return a%4==0 && (a%100!=0 ||a%400==0);
}
int SecondsInMinute(int a)
{
	return 60*a;
}
void LaterInYear(x1,y1,x2,y2,&x,&y)
{
	if(y1>y2 || (y1==y2 && x1>x2))
	{
		x=x1;
		y=y2;
	}
	else
	{
		x=x2;
		y=y2;
	}
}
int main(int argc, char** argv) {
	return 0;
}
