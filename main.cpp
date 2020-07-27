#include <stdio.h>

int main() {
  
  int th=3, fi=5, fit=15;
  int t =0;
  int sum=0;

  printf("%d\n", sum);
/*
  for(th=3; th<1000; th += 3){
    sum += th;
  }

  for(fi=5; fi<1000; th += 5){
    sum += fi;
  }

  for(fit=15; fit<1000; fit += 15){
    sum -= fit;
  }
*/

  for(t=1; t<1000; t++){
    if(t % 3 ==0 || t % 5 == 0)
    sum += t;
  }
/*
  while(1){
    sum += th;
    sum += fi;
    sum -= fit;
    
    th += 3;
    fi += 5;
    fit += 15;
    
    if(th > 1000)
    if(fi > 1000)
    if(fit > 1000)
  }

*/

  printf("%d\n", sum);

}