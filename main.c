#include <stdio.h>
#include<stdlib.h>
char *getstring(char *prompt){
    printf("%s",prompt);
    char *buffer=NULL;
    int length=0;
    int ch;
    int capactiy=8;
    while((ch=getchar())!='\n'){
        if(buffer==NULL){
            buffer=malloc(8);
        }
    if(length>=capactiy){
        capactiy*=2;
        char *temp=NULL;
        temp=realloc(buffer, capactiy);
        buffer=temp;
    }
        buffer[length]=ch;
        length++;
    }
    buffer[length]='\0';
    return buffer;
}
int main(void){
    char *name=getstring("name:");
    printf("%s",name);
    return 0;
}
