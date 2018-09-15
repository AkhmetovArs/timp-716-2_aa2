#include <stdio.h>
int main()
{
 int n=0,a=0,raz=0,i=1;
 scanf ("%d",&n);
 for( i=1;i<=n; i++)
 {
  scanf ("%d", &a);
  a=a*(-1);
  raz=raz+a;
 }
 printf ("%d\n", raz);
 return 0;
}

