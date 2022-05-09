 // sweetie1.c -- a counting loop
 #include <stdio.h>
 int main(void)
 {
    const int NUMBER = 3;
    int count = 1; // initialization
    
    while (count <= NUMBER) // test
    {
        printf("Be my Valentine!\n"); // action
        count++; // update count
    }
 }