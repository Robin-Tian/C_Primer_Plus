<<<<<<< HEAD
 /* paint.c -- uses conditional operator */
 #include <stdio.h>
 #define COVERAGE 350 // square feet per paint can
 int main(void)
 {
    int sq_feet;
    int cans;
 
    printf("Enter number of square feet to be painted:\n");
    while (scanf("%d", &sq_feet) == 1)
    {
        cans = sq_feet / COVERAGE;
        cans += ((sq_feet % COVERAGE == 0)) ? 0 : 1;
        printf("You need %d %s of paint.\n", cans,
                cans == 1 ? "can" : "cans");
        printf("Enter next value (q to quit):\n");
    }
=======
 // divisors.c -- nested ifs display divisors of a number
 #include <stdio.h>
 #include <stdbool.h>
 int main(void)
 {
    unsigned long num; // number to be checked
    unsigned long div; // potential divisors
    bool isPrime; // prime flag
 
    printf("Please enter an integer for analysis; ");
    printf("Enter q to quit.\n");
    while (scanf("%lu", &num) == 1)
    {
        for (div = 2, isPrime = true; (div * div) <= num; div++)
        {
            if (num % div == 0)
            {
                if ((div * div) != num)
                printf("%lu is divisible by %lu and %lu.\n",
                        num, div, num / div);
            else
                printf("%lu is divisible by %lu.\n",num, div);
            isPrime= false; // number is not prime
            }
        }
        if (isPrime)
            printf("%lu is prime.\n", num);
        printf("Please enter another integer for analysis; ");
        printf("Enter q to quit.\n");
    }
    printf("Bye.\n");
>>>>>>> 170c0241f449335cbdc9864a446d460a3f06ce36
 
    return 0;
 }