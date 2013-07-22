#include <stdio.h>
main()
{
    int option = 0, value = 0;
    printf("\n\t\t\t  OPERATION ON STACK:\n");
    while(1)    {
        printf("\t 1:PUSH\n\t 2:POP\n\t 3:MIDDLE OF STACK \n\t 4:DISPLAY\n\t 5:EXIT\n\t");
        printf("\n\tENTER OPERATION ON STACK:");
        scanf("%d", &option);
        switch(option)  {
            case 1: 
                printf("ENTER VALUE TO BE PUSHED TO STACK:");
                scanf("%d", &value);
                StackPush(value);
                break;

            case 2: StackPop();
                    break;

            case 3: DisplayMiddleOfStack();
                    break;

            case 4: DisplayStack();
                    break;

            case 5: ExitStack();
                    break;

        }
    }

}
