#include<stdio.h>
#include<math.h>

int main()
{
    int tree[100];
    int i=0,c=1,s,e,l,x;
    for(i=0;i<100;i++)
    {
        tree[i]=0;
    }
    printf("tree level");
    scanf("%d" , &l);
    printf("elements ");
    scanf("%d", &e);
    s=pow(2,l+1)-1;
    printf("enter root ");
    scanf("%d",&tree[0]);

        for(i=0;;i++){
            if(c==e)
                {
                    break;
                }
            else
                {
                    printf("Left child ");
                    scanf("%d",&x);
                    tree[(2*i)+1] = x;
                    if(tree[2*i+1]!=0)
                        c++;

                    printf("Right child ");
                    scanf("%d",&x);
                    tree[(2*i)+2] = x;
                    if(tree[2*i+2]!=0)
                        c++;
                }
        }

        for(i=0;i<s;i++)
            {
            if(tree[i]==0)
                printf("_ ");
            else
                printf("%d ",tree[i]);
            }
        return 0;
}
