/*Calculate the squres_for statement*/
/*2014 Feb 6 by Chengjun Wang @home*/

# include <stdio.h>

main(){
    int i, j;

    printf("Print the squares for a list of numbers.\n");
    printf("Input a maximum number first!\n");
    scanf("%d", &j);

    for (i = 1; i <= j; i ++){
        printf("The square of number %d is %d.\n", i, i*i);
    }
    getch();
    return 0;
}
