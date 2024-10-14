#include<stdio.h>
#include<math.h>
void main()
{
  int n,a;
  scanf("%d",&a);
  n=cbrt(a);
  if(n*n*n==a){
  printf("perfect cube");
  }
  else{printf("not a perfect cube");}
}
