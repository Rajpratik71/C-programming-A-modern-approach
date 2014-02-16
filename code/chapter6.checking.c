/*checking.c in chapter 6*/

# include <stdio.h>

main(){
    int cmd;   /*cmd stands for command*/
    float balance =0.0, credit, debit;

    printf("//***ACME checkbook-balancing programme***\n//");
    printf("COMMANDS: 0 = Clear; 1 = Credit, 2 = Debit, ");
    printf("3 = Balance, 4 = Exit.\n\n");

    for(;;){
        printf("Enter commands: ");
        scanf("%d", &cmd);
        switch(cmd){
            case 0:
                balance = 0.0;
                break;
            case 1:
                printf("Enter amount of credit:");
                scanf("%f", &credit);
                balance += credit;
                break;
            case 2:
                printf("Enter amount of debit:");
                scanf("%f", &debit);
                balance -= debit;
                break;
            case 3:
                printf("print current balance:%f\n", balance);
                break;
            case 4:
                return 0;    /* use return here*/
            case 5:
                printf("COMMANDS: 0 = Clear; 1 = Credit, 2 = Debit, ");
                printf("3 = Balance, 4 = Exit.\n\n");
                break;
        }
    }

    getch();
    return 0;
}
