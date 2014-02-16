/*do statement*/
/*2014 Feb 5 by Chengjun Wang @home*/

# include <stdio.h>

main(){
    int i = 10;

    do{
    printf("Counting down: %d\n",i--);
    }while (i > 0);

    getch();
    return 0;
}
