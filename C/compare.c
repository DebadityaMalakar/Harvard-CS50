#include <stdio.h>

int main(){
  int x;
  int y;
  printf("Enter first number? ");
  scanf("%d",&x);
  printf("Enter second number? ");
  scanf("%d",&y);
  if(x>y){
    printf("%d is greater than %d",x,y);
  }else if(x<y){
    printf("%d is greater than %d",y,x);
  }else{
    printf("Both are equal");
  }
  return 0;
}
