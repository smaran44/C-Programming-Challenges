// Question: How can I modify this program to count and display only the arguments passed by the user 

//Passing Parameters to main

#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Number of arguments: %d\n", argc);
    
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
/*
If you run the program with the following command:
./program arg1 arg2 arg3

Output:
Number of arguments: 4
Argument 0: ./program
Argument 1: arg1
Argument 2: arg2
Argument 3: arg3*/