#include<stdio.h>
#include<conio.h>
main()
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
             printf("Enter the initial position\t");
             scanf("%d",&head);
             q[0]=head;
             printf("\n");
             for(y=0;y<=size-1;y++)
             {
                          difference=abs(q[y+1]-q[y]);
                          seek+=difference;
                          printf("Move from %d to %d with Seek %d\n",q[y],q[y+1],difference);
             }
             printf("\nTotal distance the disk arm moves %d\t",seek);
             average=seek/(float)size;
             printf("\nAverage Seek Time is %f\t",average);
}


