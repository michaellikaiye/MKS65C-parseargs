#include<stdio.h> 
#include<stdlib.h> 
#include<unistd.h>
#include<string.h>


char ** parse_args( char * line ) {
  char ** arr = malloc(10 * sizeof(char *));
  char *s1 = line;

  int i = 0;
  while(s1){
    arr[i] = strsep(&s1, " ");
    //printf("%s\n", arr[i]);
    i++;
  }

  return arr;
}


int main(){
  char line[100]="ls -a -l";
  //scanf("%s", line);
  char ** args = parse_args(line);
  
  execvp(args[0], args);
      
  return 0; 
} 
