#include <stdio.h>
#include <unistd.h>

int main() {
    int i=57;
  while(i>47){
  write(1,&i,1);
  i--;
  }
    return 0;
}
