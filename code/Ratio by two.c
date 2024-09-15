/*
You have 2 positive integers X and Y.
In one operation, you can change the value of one of the integers by 1 or -1.
Find the minimum number of operations needed to ensure that either X≥(2⋅Y) or Y≥(2⋅X), i.e. either X is at least twice as large as 
Y, or Y is at least twice as large as X.
*/

#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if (x>y)
	    {
	        int i=0;
	        while (x<2*y)
	        {
	            y--;
	            i++;
	        }
	        printf("%d\n",i);
	    }
	    else
	    {
	        int i=0;
	        while (y<2*x)
	        {
	            x--;
	            i++;
	        }
	        printf("%d\n",i);
	    }
	}
}
