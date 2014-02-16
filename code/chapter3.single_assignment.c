/*single assignment*/

# include <stdio.h>

main()
    {
    int i = 77.99, p, q;
    float j = 52;
    printf("i now is %d, and j now is %.1f.\n", i, j);
    q =  i ++ + i ++ ;
    p =  i;
    printf("p is now %d,and q is now %d.\n", p, q);
    printf("p is changed to %d.\n", ++ p);   /*self-increasing*/

    getch();
    return 0;
    }
