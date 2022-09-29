#include <stdio.h>
#include <stdlib.h>

int pares_pos(int );

int main()
{
    int n, suma=0, valores=0, cont_pos=0, cont=0;
    printf("Dame el numero de enteros que quieres que no pasen de 100\n");
    scanf("%d", &n);

    int arr[n];
    if(n>=1 && n<=100)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("\n");
        for(int j=0;j<n;j++)
        {
            if(pares_pos(j) == 1)
            {
                suma=suma+j;
                cont_pos++;

            }
            else if(pares_pos(arr[j])==1 )
            {
                if(valores<=100)
                {
                    valores=valores+arr[j];
                }
                cont++;
            }
        }
        printf("la suma de las posiciones es: %d y el numero de posiciones pares es: %d\n", suma, cont_pos);
        printf("la suma de los valores pares que no sobrepasaron a 100 es: %d y el numero de valores pares es: %d\n", valores ,cont);
    }
}
int pares_pos(int pos)
{
    if(pos%2==0)
    {
        return 1;
    }
    return 0;
}

