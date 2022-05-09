 #include <stdio.h>
 int main(void)
 {
    int val1,val2,val3,val4,val5,val6,val7,val8,val9;
    
    printf("Please enter nine integers:\n");
    scanf("%d %d %d %d %*d %d %d %d %d", &val1, &val2, &val3,&val4, 
        &val5, &val6,&val7, &val8, &val9);
    
    printf("%9d %9d %9d\n", val1, val2, val3);
    printf("%9d %9d %9d\n", val4, val5, val6);
    printf("%9d %9d %9d\n", val7, val8, val9);
 
    return 0;
 }