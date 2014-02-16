/*  continue  */
/*2014 Feb 7 by Chengjun Wang @home*/

# include <stdio.h>

main(){
    int i, n = 0, sum = 0;

    printf("Input 5 numbers:\n");
    printf("Calculate the sum.\n");

    while(n<5) {
        scanf("%d", &i);
        if (i ==0) continue;
        sum += i;
        n ++;
        /*continue jumps to here*/
        }

    printf("The sum of 5 numbers are %d.", sum);
    getch();
    return 0;
}
