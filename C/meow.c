#include <stdio.h>

void meow(int n);

int main(){
  meow(1000);
}

void meow(int n){
  for(int i=0;i<n;i++){
    printf("meow\n");
  }
}
