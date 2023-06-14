#include <stdio.h>
#include <stdlib.h>
int main(){
  char str[9];
  printf("What is your name?\n");
  scanf(%s,str);
  printf("Hello, %s\n",str);
  int num[2];
  int sum=0;
  for(int i=0;i<2;i++){
    num[i]=rand()%6+1;
    printf("Die %d : %d\n",i,num[i]);
    sum+=num[i];
  }
  printf("Total value: %d\n" ,sum);
}
