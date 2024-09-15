/*
You are a traveler and you are at a junction of 2 paths - one leads to eternal happiness, the other to certain doom.
There are a total of N+M people, N of which always tell the truth, while the remaining M may tell the truth or lie. All of them are aware of which path leads to where.You don't know who is a truth-teller and who is not. You will ask some randomly chosen X people the following question :
Which of the 2 paths leads to eternal happiness?
Is it possible for you to be sure which path leads to eternal happiness?
If it is possible, find the minimal X where you can be sure of the path regardless of which X people you end up asking. Otherwise, print -1.
*/
#include <stdio.h>
int main ()
{
		int t;
		scanf("%d",&t);
		for(int i=0;i<t;i++)
		{
		    int n,m;
		    scanf("%d %d",&n,&m);
		    if(n>m)
		    {
		        printf("%d\n",2*m+1);
		        
		    }
		    else
		    printf("%d\n",-1);
		    
		}
}


