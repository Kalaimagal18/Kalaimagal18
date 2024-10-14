#include<stdio.h>
void main()
{
  int a;
  scanf("%d",&a);
  char g,ms;
  scanf("%c%c",&g,&ms);
  if(g&&a>=30){
  printf("enter martial status(m/u):",ms);
  printf("enter gender(m/f):",g);
  printf("enter age:",a);
  printf("driver is insured");
  }
  else if(g&&a>=25){
  printf("enter martial status(m/u):",ms);
  printf("enter gender(m/f):",g);
  printf("enter age:",a);
  printf("driver is insured");
  }
  else{
  printf("enter martial status(m/u):",ms);
  printf("enter gender(m/f):",g);
  printf("enter age:",a);
  printf("driver is not insured");
  }
}
