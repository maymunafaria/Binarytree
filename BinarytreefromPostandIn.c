#include<stdio.h>

int tree[100],inorder[100], postorder[100],i,s;
int x=-1;
int postindex ;

int max(int a , int b)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

void subtree(int start, int end, int index)
{
    int r;
    if(start>end || postindex>=s)
        return;

    r= postorder[postindex];
    postindex--;
    tree[index]=r;
    x=max(x,index);
    if(start==end)
        return;

    int i;
    for(i=start; i<=end; i++)
        {
        if(inorder[i]==r)
        break;
    }
    subtree(i+1, end, 2*index+1);
    subtree(start, i-1, 2*index);
}
int main()
{
    for(i=0;i<100;i++)
    {
        tree[i]=-1;
    }
    printf("array size");
    scanf("%d" , &s);
    printf("inorder input");
    for(i=0;i<s;i++)
    {
        scanf("%d", &inorder[i]);
    }
    printf("postorder input");
    for(i=0;i<s;i++)
    {
        scanf("%d", &postorder[i]);
    }
    postindex=s-1;
    subtree(0, s-1, 1);

    for(i=1;i<=x;i++)
    {
        printf("%d " , tree[i]);
    }
}
