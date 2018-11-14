# MKS65C-parseargs
2018-11-14 Handling Arguments like a boss
posted an hour ago by Konstantinovich Samuel   [ updated 18 minutes ago ]
I'd like one argument please

With your table buddy, do the following in the repo "MKS65C-parseargs"


strep is a function in string.h used to help parse strings
strsep( <SOURCE>, <DELIMETER> )
Locates the first occurrence of any character in the DELIMITER string and replaces it with NULL
Returns the beginning of the original string
sets the source string pointer  to point to the index 1 byte after the location of the new NULL
Since the source variable's value is changed, it must be a pointer to a string.
To test it out, try the following code:
char line[100] = "woah-this-is-cool";
char *s1 = line;
printf("[%s]\n", strsep( &s1, "-" ));
printf("[%s]\n", s1);

Write a function that uses strep to parse a line of arguments
Use the following header: char ** parse_args( char * line );
It should take a string with the command line invocation of a program (like "ls -a -l")
Note that there is a " " between each argument
Return an array of pointers to each individual argument in the parameter string, that could be used for execvp()
For example, the following code should work (assuming all variables are declared appropriately:
char ** args = parse_args( line );
execvp(args[0], args);
You can make the following assumptions:
There is only 1 space between each argument in the original string
The original string contains no more than 5 arguments
The original string is correctly formatted
