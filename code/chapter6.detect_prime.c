/*detect prime*/
/*2014 Feb 6 by Chengjun Wang @home*/

# include <stdio.h>

main(){
    int i, j;

    printf("Detect whether a number is a primes\n");
    printf("Input the number here:");
    scanf("%d", &j);

    for (i = 2; i < j; i++)
        if (j % i == 0)
            break;

    if (i < j)
        printf("%d is devisible by %d.\n", j, i);
    else
        printf("%d is a prime.\n", i);

    getch();
    return 0;
}
