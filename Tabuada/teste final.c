#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{int N,R;
 N=1;
  do {
       R=N*5;
    printf("\n 5 X %d = %d \n", N,R);
    N=N+1;
     }
    while (N<=10);
  system("PAUSE");	
  return 0;
}
