#include<stdio.h>
#include<conio.h>

main(){

int p, r, n;
  clrscr();
  printf("enter p :-");
  scanf("%d",&p);
  printf("enter r value :-");
  scanf("%d",&r);
  printf("enter n value:-");
  scanf("%d",&n);
  int ans = p*r*n/100;
  printf("ans :- %d",ans);
  getch();


}