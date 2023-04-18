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
	int cgt = 0, cvl = 0, cfl = 0, ckz = 0, ctm = 0, cxl = 0;
	int pgt = 0, pvl = 0, pfl = 0, pkz = 0, ptm = 0, pxl = 0;
	int cant = 0, total = 0;
	char finalizar, salir;

	do
	{
		do
		{
			printf("Menú Principal\n\nInstrumentos Musicales\n 1) Instrumentos de Cuerda\n 2) Instrumentos de Viento\n 3) Instrumentos de Percucición\n 4) Finalizar compra\n *) Salir\nTotal en carrito cant( %d | $%d )\nIngrese una opción: ", cant, total);
			scanf("%d", &op);

			switch ( op )
			{
				case 1:
					do
					{
						op = 0, dep = 1;

						printf("\nDepartamento de Instrumentos de Cuerda:\n 1) Guitarra $700	cant( %d | $%d )\n 2) Violin $1,300	cant( %d | $%d )\n *) Salir\nTotal en carrito cant( %d | $%d )\nIngrese una opción: ", cgt, pgt, cvl, pvl, cant, total);
						scanf("%d", &op);
						switch ( op )
						{
							case 1:
								printf("\nSe añadió 1 Guitarra\n");
								total = total + GUITAR;
								cant = cant + 1;
								cgt = cgt + 1;
								pgt = pgt + GUITAR;
								break;

							case 2:
								printf("\nSe añadió 1 Violin\n");
								total = total + VIOLIN;
								cant = cant + 1;
								cvl = cvl + 1;
								pvl = pvl + VIOLIN;
								break;

							default:
								printf("\n");
								dep = 0;
								break;
						}
					} while ( dep == 1 );
					break;

				case 2:
					do
					{
						op = 0, dep = 1;
						printf("\nDepartamento de Instrumentos de Viento\n 1) Flauta $50	cant( %d | $%d )\n 2) Kazoo $70	cant( %d | $%d )\n *) Salir\nTotal en carrito cant( %d | $%d )\nIngrese una opción: ", cfl, pfl, ckz, pkz, cant, total);
						scanf("%d", &op);
						switch ( op )
						{
							case 1:
								printf("\nSe añadió 1 Flauta\n");
								total = total + FLAUTE;
								cant = cant + 1;
								cfl = cfl + 1;
								pfl = pfl + FLAUTE;
								break;

							case 2:
								printf("Se añadió 1 Kazoo\n");
								total = total + KAZOO;
								cant = cant + 1;
								ckz = ckz + 1;
								pkz = pkz + KAZOO;
								break;

							default:
								printf("\n");
								dep = 0;
								break;
						}
					} while ( dep == 1 );
					break;

				case 3:
					do
					{
						op = 0, dep = 1;
						printf("\nDepartamento de Instrumentos de Percucición\n 1) Tambor $700		cant( %d | $%d )\n 2) Xilófono $250	cant( %d | $%d )\n 3) Salir\nTotal en carrito cant( %d | $%d )\nIngrese una opción: ", ctm, ptm, cxl, pxl, cant, total);
						scanf("%d", &op);
						switch ( op )
						{
							case 1:
								printf("Se añadió 1 Tambor\n");
								total = total + DRUM;
								cant = cant + 1;
								ctm = ctm + 1;
								ptm = ptm + DRUM;
								break;

							case 2:
								printf("Se añadió 1 Xilófono\n");
								total = total + XILO;
								cant = cant + 1;
								cxl = cxl + 1;
								pxl = pxl + XILO;
								break;

							default:
								printf("\n");
								dep = 0;
								break;
						}
					} while ( dep == 1 );
					break;

				case 4:
					op = 0;
					printf("\n\n¿Desea finalizar su compra?\nTotal en carrito cant( %d | $%d )\n(S/N): ", cant, total);
					scanf("%s", &finalizar);

					if (finalizar == 's' || finalizar == 'S')
					{
						printf("\n\nVenta finalizada.\nCantidad de articulos: %d\nTotal a pagar: $%d\nFeliz compra, vuelva pronto ;)\n", cant, total);
						loop = 0;
					} else {
						printf("\n\nContinuar comprando\n\n");
					}
					break;

				default:
					printf("\n\n¿Deseas salir de la venta?\n(S/N): ");
					scanf("%s", &salir);
					if (salir == 's' || salir == 'S')
					{
						printf("\n\nVenta finalizada.\n");
						loop = 0;
					} else {
						printf("\n\nContinuar comprando\n\n");
					}
					break;
			}
		} while ( loop == 1 );

		loop = 1, dep = 1, op = 0;
		gt = 0, vl = 0, fl = 0, kz = 0, tm = 0, xl = 0;
		cgt = 0, cvl = 0, cfl = 0, ckz = 0, ctm = 0, cxl = 0;
		pgt = 0, pvl = 0, pfl = 0, pkz = 0, ptm = 0, pxl = 0;
		cant = 0, total = 0;

		printf("\n\n¿Deseas realizar otra compra?\n(S/N): ");
		scanf("%s", &salir);
		printf("\n");
	} while (salir != 'n' && salir != 'N');

	return 0;
}
