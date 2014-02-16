/*sum a series of numbers*/

# include <stdio.h>

main(){
    int i, sum = 0;

    printf("Input a series of numbers\n");

    scanf("%d", &i);
    while(i != 0){
        sum += i;
        scanf("%d", &i);
    }

    printf("The sum of a series of numbers is %d.\n", sum);
    getch();
    return 0;

}
