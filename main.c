#include <stdio.h>

int main ()
{
    int requisito1, requisito2, requisito3, requisito4, requisito5;

    scanf ("%d %d %d %d %d", &requisito1, &requisito2, &requisito3, &requisito4, &requisito5);

    printf ("Trabalho aborda Interface Grafica? (0 - Nao 1 - Sim)\n");
    printf ("Trabalho aborda Inteligencia Artificial? (0 - Nao 1 - Sim)\n");
    printf ("Trabalho aborda Encapsulamento? (0 - Nao 1 - Sim)\n");
    printf ("Trabalho aborda Indentacao? (0 - Nao 1 - Sim)\n");
    printf ("Trabalho aborda Structs? (0 - Nao 1 - Sim)\n");

    if ((requisito1 == 1 && requisito2 == 0) && requisito3 == 1 && requisito4 == 1 && requisito5 == 1)
        printf ("Seu trabalho sera avaliado.");

    else if ((requisito1 == 0 && requisito2 == 1) && requisito3 == 1 && requisito4 == 1 && requisito5 == 1)
        printf ("Seu trabalho sera avaliado.");

    else
        printf ("Seu trabalho nao sera avaliado, nota 0.");


    return (0);
}
