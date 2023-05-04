#include <stdio.h>
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int main() {
   int i=122;
   while(i>96){
       if(i % 2 == 0){
          ft_putchar(i);
       }else{
           ft_putchar(i-32);
       }
       i--;
       
   }
   
    return 0;
}
