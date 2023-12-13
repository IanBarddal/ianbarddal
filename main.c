#include <stdio.h>
#include <string.h>
#include <locale.h>

float calculaPreco (int quantidade, char tipoDeBebida[31]);

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int quantidade = 0;
    char tipoDeBebida [31];
    float precofinal;

    printf ("Digite a bebida que deseja: ");
    fgets (tipoDeBebida, 31, stdin);

    size_t len = strlen(tipoDeBebida);
    if (len > 0 && tipoDeBebida[len - 1] == '\n')
        {
            tipoDeBebida[len - 1] = '\0';
        }

    printf ("Digite a quantidade: ");
    scanf ("%d", &quantidade);

    precofinal = calculaPreco (quantidade, tipoDeBebida);

    printf ("R$ %.2f", precofinal);

    return (0);
}

float calculaPreco (int quantidade, char tipoDeBebida[31])
{
    float preco = 0;

    if (strcmp (tipoDeBebida,"cerveja") == 0)
        {
            preco = quantidade*6.59;
            return (preco);
        }

    else if (strcmp (tipoDeBebida,"vinho") == 0)
        {
            preco = quantidade*28;
            return (preco);
        }

    else if (strcmp (tipoDeBebida, "whiskey") == 0)
        {
            preco = quantidade*38;
            return (preco);
        }

    else if (strcmp (tipoDeBebida, "cachaca") == 0)
        {
            preco = quantidade*12;
            return (preco);
        }

    return (preco);
}
