/*
Alice and Bob both bought a full cake each.
Alice's cake has A slices, and Bob's cake has B slices.
Alice will be unhappy if she has strictly less slices than Bob does. Similarly, Bob will be unhappy if he has strictly less slices than Alice does.
Charlie doesn't want either of his friends to be unhappy, so he proposes a solution: while either Alice or Bob are unhappy, he will attempt to restore happiness by eating half the remaining slices (rounded up) of whoever has more of them.
For example,
If A=8 and B=5, Charlie will eat half of Alice's slices, which is 8/2=4 slices.
If A=2 and B=5, Charlie will eat half of Bob's slices, which is 5/2 slices - rounded up, this is 3 slices.
How many slices of cake will Charlie eat in total?
*/
#include <stdio.h>
#include <math.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    int c=0;
	    while(a!=b)
	    {
	        int temp=0;
	        if(a>b)
	        {
	            double t=(double)a/2;
	            temp=(int)ceil(t);
	            c+=temp;
	            a/=2;
	        }
	        else
	        {
	            double t=(double)b/2;
	            temp=(int)ceil(t);
	            c+=temp;
	            b/=2;
	        }
	    }
	    printf("%d\n",c);
	}
}

