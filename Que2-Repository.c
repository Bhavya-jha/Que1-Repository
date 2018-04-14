#include<stdio.h>
#include<conio.h>
void main()
{
             int q[100],size,head,x,y,seek=0,difference;
             float average;
             printf("Size of Queue\t");
             scanf("%d",&size);
             printf("Enter the Queue\t");
             for(x=1;x<=size;x++)
             {
                          scanf("%d",&q[x]);
             }
	printf("enter the initial position\t");
	scanf("%d",&head);
	q[0]=head;
	printf("\n");
	for(y=0;y<=size;y++)
	{
		difference=abs(q[y+1]-q[y]);
		seek+=difference;
		printf("move from %d to %d with seek %d \n",q[y],q[y+1],difference);
	}
	printf("\n total distance the disk arm moves %d\t", seek);
	average=seek/(float)size;
	printf("\n average seek time is %f\t",average);
	getch();
	
            
			 }
