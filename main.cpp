#include <iostream>
bool IsLeapYear(int a)
{
	return a%4==0 && (a%100!=0 ||a%400==0);
}
int SecondsInMinute(int a)
{
	return 60*a;
}
void LaterInYear(int x1,int y1,int x2,int y2,int &x,int &y)
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
int DaysInYear(int a)
{
	if(IsLeapYear(a)) return 366;
	 else return 365;
}
int DaysInYearRange(int a, int b)
{
	int sum=0;
	for(int i=0;i<b-a;i++) sum+=DaysInYear(i);
	return sum;
}
int main(int argc, char** argv) {
	return 0;
}
