#include <stdint.h>

/* ---------- Variables ---------- */
uint8_t numero1 = 10;
uint8_t numero2 = 20;
char operacion = '*';   // puede ser '+', '-', '*', '/' o '%'
uint8_t resultado;

/* ---------- Cabeceras de funciones ---------- */
uint8_t sumar(uint8_t a, uint8_t b);
uint8_t restar(uint8_t a, uint8_t b);
uint8_t multiplicar(uint8_t a, uint8_t b);
uint8_t dividir(uint8_t a, uint8_t b);
uint8_t modulo(uint8_t a, uint8_t b);

/* ---------- main ---------- */
int main(void)
{
    while (1)
    {
        if (operacion == '+')
        {
            resultado = sumar(numero1, numero2);
        }
        else if (operacion == '-')
        {
            resultado = restar(numero1, numero2);
        }
        else if (operacion == '*')
        {
            resultado = multiplicar(numero1, numero2);
        }
        else if (operacion == '/')
        {
            if (numero2 != 0)
            {
                resultado = dividir(numero1, numero2);
            }
        }
        else if (operacion == '%')
        {
            if (numero2 != 0)
            {
                resultado = modulo(numero1, numero2);
            }
        }
    }
}

/* ---------- Funciones ---------- */
uint8_t sumar(uint8_t a, uint8_t b)
{
    return a + b;
}

uint8_t restar(uint8_t a, uint8_t b)
{
    return a - b;
}

uint8_t multiplicar(uint8_t a, uint8_t b)
{
    return a * b;
}

uint8_t dividir(uint8_t a, uint8_t b)
{
    return a / b;
}

uint8_t modulo(uint8_t a, uint8_t b)
{
    return a % b;
}