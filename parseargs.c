#include<stdio.h> 
#include<stdlib.h> 
#include<unistd.h>
#include<string.h>

void parse_args( char * line ) {
  char *s1 = line;
  while(s1){
    printf("[%s]\n", strsep(&s1, " "));
    //printf("[%s]\n", s1);
  }
}

int main(){
  char line[100]="hi testing kil";
  //scanf("%s", line);
  parse_args(line);
 




  
  /* //A null terminated array of character   */
  /* //pointers  */
  /* char *args[]={"./ab",NULL};  */
  /* execlp(args[0], */
  /* 	 "./ab",args[1]);  */
      
  /* /\*All statements are ignored after execvp() call as this whole   */
  /*   process(execDemo.c) is replaced by another process (EXEC.c)  */
  /* *\/ */
  /* printf("Ending-----\n");  */
      
  return 0; 
} 
