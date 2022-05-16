 // pnt_add.c -- pointer addition
 #include <stdio.h>
 #define SIZE 4
 int main(void)
 {
    short dates [SIZE];
    short * pti;
    short index;
    double bills[SIZE];
    double * ptf;
 
    pti = dates; // assign address of array to pointer
    ptf = bills;
    printf("%20s %15s\n", "short", "double");
    for (index = 0; index < SIZE; index ++)
        printf("pointers + %d: %12p %12p\n",
                index, pti + index, ptf + index);
 
    return 0;
 }