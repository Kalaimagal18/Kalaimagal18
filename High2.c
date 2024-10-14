#include<stdio.h>
#include<math.h>
void main()
{
  int n,a;
  scanf("%d",&a);
  n=pow(a,3);
  if(n*n*n==a){
  printf("perfect cube");
  }
  else{printf("not a perfect cube");}
}
