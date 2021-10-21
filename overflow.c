
#include <string.h>
#include <stdio.h>


/* Objective:  Exploit the buffer in order
to run function2() instead of returning to main.  

If done correctly this will result in 
printing “execution flow changed”
followed by a segmentation fault  */

void function2(){
    printf("execution flow changed \n");
}

void function1(char *str){
    char buffer[5];
    strcpy(buffer, str);
}

void main(int argc, char *argv[]){
    function1(argv[1]);
    printf("Ran normally\n");
}
