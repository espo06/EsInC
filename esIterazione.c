#include <stdio.h>

//Dato N un numero intero positivo, generare e visualizzare in ordine crescente i primi N numeri
//interi positivi
void main()
{
    int n, i = 0;
    do
    {
        printf("inserisci un numero positivo\n");
    scanf("%d", &n);
    }while (n<=0);
    printf("\n\n\n");

    for ( i = 0; i <= n; i++)
    {
        printf("%d\n", i);
    }
    
}
