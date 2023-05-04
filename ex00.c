#include <stdio.h>
#include <unistd.h>

void prog(int argc,char **argv){
    int i=1;
    if(!argv[1]){
        write(1,'a',1);
        write(1,'\n',1);
    }
    while(argv[1][i]){
        if(argv[i]=='a')
        i++;
    }
    if(i!=1){
        write(1,'a',1);
        write(1,'\n',1);
    }else if(i==1){
        write(1,'\n',1);
    }
    
}
int main() {
    // Write C code here
    printf("Hello world");

    return 0;
}
