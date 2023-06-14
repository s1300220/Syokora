#include <stdio.h>
#include <stdlib.h>
int main(){
  int num[2];
  int sum=0;
  for(int i=0;i<2;i++){
    num[i]=rand()%6+1;
    printf("Die %d : %d\n",i,num[i]);
    sum+=num[i];
  }
  printf("Total value: %d\n" ,sum);
  if(sum>7)printf("you won!");
  else printf("you lost!");
}
