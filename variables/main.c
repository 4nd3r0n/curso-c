#include <stdio.h>

int main(void)
{
	int entero, entero_contenido = 1;
	float flotante, flotante_contenido = 1.5;
	char cadena, cadena_10[10], cadena_contenido[10] = "Hola mundo";

	printf("Números enteros: %i y %i\n", entero, entero_contenido);
	printf("Números flotantes: %f y %f\n", flotante, flotante_contenido);
	printf("Cadenas: %s, %s\n", cadena_10, cadena_contenido);

	entero = 5;
	flotante = 0.5;
	cadena = 'a';
	//cadena_10 = "Hola";

	printf("\nNúmeros enteros: %i y %i\n", entero, entero_contenido);
	printf("Números flotantes: %f y %f\n", flotante, flotante_contenido);
	printf("Cadenas: %c, %s\n", cadena, cadena_contenido);

	printf("\nIngresa un número entero: ");
	scanf("%d", &entero);
	printf("Ingresa un número flotante: ");
	scanf("%f", &flotante);
	printf("Ingresa una cadena de caracteres: ");
	scanf("%s", &cadena);
	
	printf("\nNúmeros enteros: %i y %i\n", entero, entero_contenido);
	printf("Números flotantes: %f y %f\n", flotante, flotante_contenido);
	printf("Cadenas: %c, %s\n", cadena, cadena_contenido);
	return 0;
}
