#include <stdio.h>
#include <stdlib.h>

void ejer1();
void ejer2();
void ejer3();
int esPrimo(int numero) 
{
    if (numero <= 1) 
    {
        return 0;  
    }
    
    for (int i = 2; i * i <= numero; i++) 
    {
        if (numero % i == 0) 
        {
            return 0;  
        }
    }
    
    return 1;  
}
void calculadora();
int main()
{
    int op;
    printf("Elije la funcion\n1.Ejercicio 1\n2.Ejercicio 2\n3.Ejercicio 3\n4.Calculadora\nOpcion:");
    scanf("%d",&op);
    system("cls");
    switch (op)
    {
    case 1:
        ejer1();
        break;
    case 2:
        ejer2();
        break;
    case 3:
        ejer3();
        break;
    case 4:
        calculadora();
        break;
    
    default:
            printf("Ese ni hay");
        break;
    }
    return 0; 
}

void ejer1()
{
    int n, m;
    printf("Digite un numero: ");
    scanf("%d", &n);
    printf("Digite un numero: ");
    scanf("%d", &m);

    if (n > m) 
    {
        printf("El primer numero debe ser menor o igual al segundo.");
        return;
    }

    int sum = 0;
    for (int i = n; i <= m; i++)
    {
        if (i % 2 == 0 && m % 2 == 0)  
        { 
            sum += i; 
        }
        else if (i % 2 != 0 && m % 2 != 0)  
        { 
            i=i+1;
            m=m-1;
            sum += i; 
        }
        else if (i % 2 == 0 && m % 2 != 0)  
        { 
            m=m-1;
            sum += i; 
        }
        else if (i % 2 != 0 && m % 2 == 0)  
        { 
            i=i+1;
            sum += i; 
        }
        
    }

    printf("La suma de los numeros pares entre %d y %d es: %d", n, m, sum);
}
void ejer2()
{
    int n;
    printf("Ingrese un numero:");
    scanf("%d",&n);
    int x[n];

    for (int i = 0; i < n; i++)
    {
        printf("Posicion %d:",i+1);
        scanf("%d",&x[i]);
    }

    int num=n-1;
    for (int i = 0; i < n; i++)
    {
        printf("\nPosicion %d: %d",i+1,x[num]); 
        num--;
    }
    
    

}
void ejer3()
{
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    
    if (esPrimo(num)) 
    {
        printf("%d es un numero primo.\n", num);
    } else {
        printf("%d no es un numero primo.\n", num);
    }

}
void calculadora()
{
    int num1, num2, resultado;
    char operador;

    printf("Ingrese un numero: ");
    scanf("%d", &num1);

    printf("Ingrese un numero: ");
    scanf("%d", &num2);

    printf("Ingrese el operador (+, -, *, /): ");
    scanf(" %c", &operador);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } 
            break;
        default:
            printf("Operador invalido\n");
            
    }

    printf("Resultado: %d\n", resultado);
}


