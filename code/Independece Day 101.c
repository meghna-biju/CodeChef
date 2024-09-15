/*
On the occasion of Independence Day, Chef wants to design a new flag for the country of Chefland.
He has some equal-sized strips in three different colors and needs to arrange them in a line so that no two adjacent strips share the same color.
Given that Chef has A orange strips, B white strips, and C green strips, determine if it is possible to design such a flag using all the strips.
*/
#include <stdio.h>
int main() 
{
	
		int t;
		scanf("%d",&t);
		for(int i=0;i<t;i++)
		{
		    int x,y,z;
		    scanf("%d %d %d",&x,&y,&z);
		    if(x+y+1<z || y+z+1<x || x+z+1<y)
		    printf("NO\n");
		    else
		    printf("YES\n");
		    
		}
}

