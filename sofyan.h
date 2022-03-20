/*************************************************************************/
/*                           /               \                           */
/*                          ((__-^^'---'^^-__))                          */
/*                           `-_---'   '---_-'                           */
/*                            <__|o'   'o|__>                            */
/*                               \       /                               */
/*                           .-'. ):   :( .'-.                           */
/* ,-.                     .'  :   :o_o:   :  '.   .   , ,---, , ,---, , */
/*(   `     ,-            /   /     "-"     \   \  |\ /|    /  |    /  | */
/* `-.  ,-. | . .,-: ;-. :   ;               :   : | V |   /   |   /   | */
/*.   ) | | |-| || | | | :  `-._           _.-`  : |   |  /    |  /    | */
/* `-'  `-' | `-|`-` ' '  :     ""--. .--""     :  '   ' '---' ' '---' ' */
/*         -' `-'          '.  _    ; ;       .'                         */
/*                          {"".''._.-._.''.""}                          */
/*                           \       :       /                           */
/*                            \     / \     /                            */
/*                             '-..'   '..-'                             */
/*************************************************************************/

#include<stdio.h>

int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);   
}

int E(float x)
{
    if(0<=x && x<1)
        return 0;
    else if(x>=1)
        return E(x-1)+1;
    else
        return E(x+1)-1;
}

void SaisirTabInt(int t[],int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("t[%d]=",i);
        scanf("%d",&t[i]);
    }
}

void SaisirTabFloat(float t[],int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("t[%d]=",i);
        scanf("%f",&t[i]);
    }
}

void AfficheTabInt(int t[],int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("%d\t",t[i]);
    }
    printf("\n");
}

void AfficheTabFloat(float t[],int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("%f\t",t[i]);
    }
    printf("\n");
}

void EchangerInt(float t[],int i,int j)
{
    float k;

    k=t[i];
    t[i]=t[j];
    t[j]=k;
}

void EchangerFloat(float t[],int i,int j)
{
    float k;

    k=t[i];
    t[i]=t[j];
    t[j]=k;
}

void SuppressionHanae(int t[], int n, int j)
{
    int i;

    for(i=j;i<n;i++)
    {
        t[i]=t[i+1];
    }
    AfficheTabInt(t,n-1);
}

void InsertionInt(int t[], int n)
{
    int i,x,j;

    printf("Donnez l'element a inserer:");
    scanf("%d",&x);
    printf("Donnez l'indice de l'element a inserer:");
    scanf("%d",&j);

    for(i=n+1;i>j;i--)
    {
        t[i]=t[i-1];
    }
    t[j]=x;
    AfficheTabInt(t,n+1);
}

int MaxTab(int t[], int n)
{
    if(n==1)
        return t[0];
    else if(t[n-1]>MaxTab(t,n-1))
        return t[n-1];
    else
        return MaxTab(t,n-1);
}

int MaxIntIte(int t[], int n)
{
    int max,i;

    max=t[0];
    for(i=0;i<n;i++)
    {
        if(t[i]>=max)
            max=t[i];
    }
    return max;
}

int SommeTabInt(int t[], int n)
{
    if(n==1)
        return t[0];
    else
        return t[n-1]+SommeTabInt(t,n-1);
}