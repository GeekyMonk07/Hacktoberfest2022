#include<stdio.h>
void main()
{
    int a[100],b[100],c[100],k=0,l,m,n;
   printf("Enter the no of elements in set A");
   scanf("%d",&m);
    printf("Enter the elements in set A");
    for(int i=0;i<m;i++)
    scanf("%d",&a[i]);
   printf("Enter the no of elements in set B");
   scanf("%d",&n);
    printf("Enter the elements in set B");
    for(int i=0;i<n;i++)
    scanf("%d",&b[i]);
    printf("Enter 1 for A-B and 2 for B-A");
    scanf("%d",&l);
    switch(l)
    {
        case 1:
        {
     for(int i=0;i<m;i++) {
            int flag=0;
        for(int j=0;j<n;j++ ){
            if(a[i]!=b[j])
            flag++;
            else 
            flag=0;}
         if(flag==n)
         c[k++]=a[i]; }
     for(int i=0;i<k;i++)
        printf("%d ",c[i]);
        break;}
case 2:
{
    int k=0,d[100];
     for(int i=0;i<n;i++) {
            int flag=0;
        for(int j=0;j<m;j++ ) {
            if(b[i]!=a[j])
            flag++;
            else 
            flag=0; }
         if(flag==m)
         d[k++]=b[i];}
     for(int i=0;i<k;i++)
        printf("%d ",d[i]);
        break;
}}}
