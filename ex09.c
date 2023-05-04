#include <stdio.h>
#include <unistd.h>
int len(char* s){
    int j=0;
    while(s[j]!='\0'){
       j++; 
    }
    return j;
}
char *ft_strrev(char *str){
    char temp;
    int i=0;
    int j=len(str);
    
    while(str[i]!='\0'){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    
    return str;
}


main() {
   char a[]="hello";
   printf("%s",ft_strrev(a));
    return 0;
}
