/*checking.c in chapter 6*/

# include <stdio.h>

main(){
    int i=1;
    float maximum,n;

    printf("Input 5 numbers and ");
    printf("select the larget one.\n");

    printf("Input the first number to initiate: ");
    scanf("%f", &maximum);

    while(i < 5){
        printf("Input another number here ");
        scanf("%f", &n);
        if (maximum < n)
            maximum  = n;
        i ++;
    }

    printf("The larget number is %f\n", maximum);
    getch();
    return 0;
}
