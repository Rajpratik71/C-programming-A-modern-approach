/*do statement*/
/*2014 Feb 5 by Chengjun Wang @home*/

# include <stdio.h>

main(){
    int digit_num = 0, i;

    printf("input a number here:");
    scanf("%d", &i);   /*here is no "\n".*/

    do{
    i = i/10;
    digit_num ++;
    }while (i > 0);

    printf("The number has %d digit numbers.\n", digit_num);
    getch();
    return 0;
}
