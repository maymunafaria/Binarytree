#include<stdio.h>
#include<math.h>

int t1=0,t2=0,t3=0;
void Preorder(int i, int tree[],int preorder[],int size)
{


    if(i>=0 && i<size && tree[i]!=0)
        {

        preorder[t1]=tree[i];
        t1++;
        Preorder(i*2+1,tree,preorder,size);
        Preorder(i*2+2,tree,preorder,size);
        }
}




void Postorder(int i, int tree[],int postorder[],int size)
{


    if(i>=0 && i<size && tree[i]!=0)
        {

        Postorder(i*2+1,tree,postorder,size);
        Postorder(i*2+2,tree,postorder,size);
        postorder[t2]=tree[i];
        t2++;

        }
}



void Inorder(int i, int tree[],int inorder[],int size)
{


    if(i>=0 && i<size && tree[i]!=0)
        {

        Inorder(i*2+1,tree,inorder,size);
        inorder[t3]=tree[i];
        t3++;
        Inorder(i*2+2,tree,inorder,size);


        }
}
int main()
{
    int tree[100],preorder[100],inorder[100],postorder[100];
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


        Preorder(0,tree,preorder,s);
        printf("\npreorder");
            for(i=0;i<e;i++)
                {
                printf("%d ",preorder[i]);
                }

        Postorder(0,tree,postorder,s);
        printf("\npostorder");
            for(i=0;i<e;i++)
                {
                printf("%d ",postorder[i]);
                }

        Inorder(0,tree,inorder,s);
        printf("\ninorder");
        for(i=0;i<e;i++)
                {
                printf("%d ",inorder[i]);
                }
        return 0;
}
