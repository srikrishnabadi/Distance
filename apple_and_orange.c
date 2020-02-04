/*Sam house has an apple tree and an orange tree that yield an abundance of fruit. In the diagram below, the red region
denotes his house, where s is the start point, and t is the endpoint. The apple tree is to the left of his house, and the
orange tree is to its right. You can assume the trees are located on a single point, where the apple tree is at point a,
and the orange tree is at point b.*/
#include<stdio.h>
#include<stdlib.h>

void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int* apples, int oranges_count, int* oranges)
{
    int i,num,c1=0,c2=0;
    for(i=0;i<apples_count;i++)
    {
        num=a+*(apples+i);
        if(num>=s && num<=t)
            c1++;
    }
    printf("The number of apples that can be fell in sam's house is %d.\n",c1);
    for(i=0;i<oranges_count;i++)
    {
        num=b+*(oranges+i);
        if(num>=s && num<=t)
            c2++;
    }
    printf("The number of oranges that can be fell in sam's house is %d.",c2);
}

int main()
{
    int s,t,a,b,ac,*ap,oc,*or;
    printf("Enter the starting point of sam's house : ");
    scanf("%d",&s);
    printf("Enter the ending point of sam's house : ");
    scanf("%d",&t);
    printf("Enter the position of apple tree : ");
    scanf("%d",&a);
    printf("Enter the position of orange tree : ");
    scanf("%d",&b);
    printf("Enter the number of apples fell down : ");
    scanf("%d",&ac);
    ap=(int*)malloc(ac*sizeof(int));
    printf("Enter the number of oranges fell down : ");
    scanf("%d",&oc);
    or=(int*)malloc(oc*sizeof(int));
    printf("Enter the positions of apples : ");
    for(int i=0;i<ac;i++)
        scanf("%d",&ap[i]);
    printf("Enter the positions of oranges : ");
    for(int i=0;i<oc;i++)
        scanf("%d",&or[i]);
    countApplesAndOranges(s,t,a,b,ac,ap,oc,or);

    return 0;
}


