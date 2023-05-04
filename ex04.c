#include <stdio.h>
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int main() {
   int i=97;
   while(i<123){
       if(i%2==0){
          ft_putchar(i-32);
       }else{
           ft_putchar(i);
       }
       i++;
       
   }
   
    return 0;
}
