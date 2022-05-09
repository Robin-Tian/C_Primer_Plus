 /* flags.c -- illustrates some formatting flags */
 #include <stdio.h>
 int main(void)
 {
    printf("%x %X %#x\n", 31, 31, 31);
    printf("**%d**% d**% d**\n", 42, 42, -42);
    printf("**%5d**%5.4d**%08d**%08.5d**\n", 6, 6, 6, 6);
 
    return 0;
 }