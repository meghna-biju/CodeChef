/*
IOI 2024 is being held in Egypt, starting from the 1-st of September and ending on the 8-th of September.
Given a date X in September, output YES if IOI is ongoing then, otherwise NO.
*/
#include <stdio.h>

int main(void) 
{
	int x;
	scanf("%d",&x);
	if(x>=1 && x<=8)
	printf("yes");
	else
	printf("no");

}

