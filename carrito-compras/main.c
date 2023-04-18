#include <stdio.h>

#define GUITAR 700
#define VIOLIN 1300
#define FLAUTE 50
#define KAZOO 70
#define DRUM 700
#define XILO 250

int main()
{
	int loop = 1, dep = 1, op = 0;
	int gt = 0, vl = 0, fl = 0, kz = 0, tm = 0, xl = 0;
	int total = 0;

	do
	{
		printf("Menú Principal\nInstrumentos Musicales\n 1) Cuerda\n 2) Viento\n 3) Percucición\n 4) Salir\nEscoja un departamento: ");
		scanf("%i", &op);

		switch ( op )
		{
			case 1:
				do
				{
					op = 0, dep = 1;

					printf("\nDepartamento de Instrumentos de Cuerda:\n 1) Guitarra $700\n 2) Violin $1,300\n 3) Salir\nElige una opción: ");
					scanf("%i", &op);
					switch ( op )
					{
						case 1:
							printf("\nSe añadió 1 Guitarra\n");
							total = total + GUITAR;
							break;

						case 2:
							printf("\nSe añadió 1 Violin\n");
							total = total + VIOLIN;
							break;

						default:
							printf("\n");
							dep = 0;
							break;
					}
				} while ( dep == 1 );
				break;

			case 2:
				while ( dep > 0 && dep < 3 )
				{
					printf("Departamento de Instrumentos de Viento\n 1) Flauta $50\n 2) Kazoo $70\n 3) Salir\nElige una opción: ");
					scanf("%i", &dep);
					switch ( dep )
					{
						case 1:
							printf("Flauta\n");
							break;

						case 2:
							printf("Kazoo\n");
							break;
					}
				}
				break;

			case 3:
				while ( dep > 0 && dep < 3 )
				{
					printf("Departamento de Instrumentos de Percucición\n 1) Tambor $700\n 2) Xilófono $250\n 3) Salir\nElige una opción: ");
					scanf("%i", &dep);
					switch ( dep )
					{
						case 1:
							printf("Tambor\n");
							break;

						case 2:
							printf("Xilófono\n");
							break;
					}
				}
				break;

			default:
				loop = 0;
				break;

		}
	} while ( loop == 1 );

	return 0;
}
