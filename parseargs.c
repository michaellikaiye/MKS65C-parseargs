#include<stdio.h> 
#include<stdlib.h> 
#include<unistd.h> 
int main() 
{ 
        //A null terminated array of character  
        //pointers 
        char *args[]={"./ab",NULL}; 
        execlp(args[0],
	       "./ab",args[1]); 
      
        /*All statements are ignored after execvp() call as this whole  
        process(execDemo.c) is replaced by another process (EXEC.c) 
        */
        printf("Ending-----\n"); 
      
    return 0; 
} 