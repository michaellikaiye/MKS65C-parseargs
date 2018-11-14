#include<stdio.h> 
#include<stdlib.h> 
#include<unistd.h>
#include<string.h>

void parse_argsBETA( char * line ) {
  char *s1 = line;
  while(s1){
    printf("[%s]\n", strsep(&s1, " "));
    //printf("[%s]\n", s1);
  }
}
char ** parse_args( char * line ) {
  char *s1 = line;
  char stuff[5][100];
  int i =0;
  while(s1){
    stuff[i] = strsep(&s1, " ");
    printf("%s", stuff[i]);
    i++;
    //printf("[%s]\n", strsep(&s1, " "));
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
