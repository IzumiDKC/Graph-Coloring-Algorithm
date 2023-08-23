#include<stdio.h>
#include<conio.h>
typedef int Matrix[30][30];
int DoThi(int &n,Matrix &a,char *fname)
{
    FILE *f;
    f=fopen("MATRAN.inp","r");
    if(!f) {printf("\nLoi mo file"); getch(); return 0;}
    fscanf(f,"%d",&n);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
        fscanf(f,"%d",&a[i][j]);
    return 1;
}
int *Bac(int n,Matrix a)
{
    int *d= new int [n+1];
    for(int i=1;i<=n;i++)
    {
        d[i]=0;
        for(int j=1;j<=n;j++)
        d[i]=d[i]+a[i][j];
    }
    return d;
}
void swap(int &a,int &b)
{
    int t=a;a=b;b=t;
}
void Arr(int n,int *d,int *&id)
{
    int i,j;
    id=new int[n+1];
    for(i=1;i<=n;i++) id[i]=i;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
        if(d[i]<d[j])
        {
            swap(d[i],d[j]);
            swap(id[i],id[j]);
        }
}
void tomau(int n,Matrix &a)
{
    int *m=new int [n+1];
    int *id,*d,i,j,k=0;
    d=Bac(n,a);
    Arr(n,d,id);
    for(i=1;i<=n;i++) m[i]=0;
    for(i=1;i<=n;i++)
    if(m[id[i]]==0)
    {
        k++;
        m[id[i]]=k;
        for(j=i+1;j<=n;j++)
        if(m[id[j]]==0)
        {
            int t;
            for(t=1;t<=n;t++)
            if(m[t]==k && a[id[j]][t]>0) break;
            if(t>n) m[id[j]]=k;
        }
    }
    printf("So mau can su dung la: %d\n",k);
    for(j=1;j<=k;j++)
    {
        printf("\nMau %d:", j);
        for(i=1;i<=n;i++)
        if(m[i]==j) printf("%4d",i);
    }
}
int main()
{
    int n; Matrix a;
    DoThi(n,a,"MATRAN.inp");
    tomau(n,a);
}
