#include <stdio.h>

int menu()
{
    int op=-1;
    printf("\xC9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xBB\n");
    printf("\xba\t MENU\t\t\xba\n");
    printf("\xba 1 - Opção\t\t\xba\n");
    printf("\xba 2 - Opção\t\t\xba\n");
    printf("\xba 3 - Opção\t\t\xba\n");
    printf("\xba 0 - Cancelar\t\t\xba\n");
    printf("\xC8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xBC");
    scanf("%d", &op);

    return (op);
}
int main(int argc, char** argv)
{
	int op=-1;
    do
    {
        op = menu();
        switch(op)
        {
            case 1:
                printf("Você escolheu 1\n");
                break;
            case 2:
                printf("Você escolheu 2\n");
                break;
            case 3:
                printf("Você escolheu 3\n");
                break;
            case 0:
                break;
            default:
                printf("\aERRO: Tente outra vez\n");
        }
    }
    while (op != 0);
	return 0;
}