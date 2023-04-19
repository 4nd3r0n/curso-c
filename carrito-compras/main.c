#include <stdio.h>
#include <stdlib.h>

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
	int cant = 0, total = 0, cantu = 0;
	char finalizar, salir;

	system("clear");

	do
	{
		do
		{
			printf("Menú Principal\n\nInstrumentos Musicales\n 1) Instrumentos de Cuerda\n 2) Instrumentos de Viento\n 3) Instrumentos de Percucición\n 4) Finalizar compra\n *) Salir\nTotal en carrito cant( %d | $%d )\nIngrese una opción: ", cant, total);
			scanf("%d", &op);

			switch ( op )
			{
				case 1:
					system("clear");
					do
					{
						op = 0, dep = 1;

						printf("Departamento de Instrumentos de Cuerda:\n\n 1) Guitarra $%d	cant( %d | $%d )\n 2) Violin $%d	cant( %d | $%d )\n *) Salir\nTotal en carrito cant( %d | $%d )\nIngrese una opción: ", GUITAR, cgt, pgt, VIOLIN, cvl, pvl, cant, total);
						scanf("%d", &op);
						switch ( op )
						{
							case 1:
								printf("\nIngrese la cantidad de Guitarras: ");
								scanf("%d", &cantu);
								system("clear");
								printf("Se añadió %d Guitarra(s)\n\n", cantu);
								total = total + (cantu * GUITAR);
								cant = cant + cantu;
								cgt = cgt + cantu;
								pgt = pgt + (cantu * GUITAR);
								break;

							case 2:
								printf("\nIngrese la cantidad de Violines: ");
								scanf("%d", &cantu);
								system("clear");
								printf("Se añadió %d Violin(es)\n\n", cantu);
								total = total + (cantu * VIOLIN);
								cant = cant + cantu;
								cvl = cvl + cantu;
								pvl = pvl + (cantu * VIOLIN);
								break;

							default:
								system("clear");
								dep = 0;
								break;
						}
					} while ( dep == 1 );
					break;

				case 2:
					system("clear");
					do
					{
						op = 0, dep = 1;
						printf("Departamento de Instrumentos de Viento\n\n 1) Flauta $%d	cant( %d | $%d )\n 2) Kazoo $%d	cant( %d | $%d )\n *) Salir\nTotal en carrito cant( %d | $%d )\nIngrese una opción: ", FLAUTE, cfl, pfl, KAZOO, ckz, pkz, cant, total);
						scanf("%d", &op);
						switch ( op )
						{
							case 1:
								printf("\nIngrese la cantidad de Flautas: ");
								scanf("%d", &cantu);
								system("clear");
								printf("Se añadió %d Flauta(s)\n\n", cantu);
								total = total + (cantu * FLAUTE);
								cant = cant + cantu;
								cfl = cfl + cantu;
								pfl = pfl + (cantu * FLAUTE);
								break;

							case 2:
								printf("\nIngrese la cantidad de Kazooes: ");
								scanf("%d", &cantu);
								system("clear");
								printf("Se añadió %d Kazoo(es)\n\n", cantu);
								total = total + (cantu * KAZOO);
								cant = cant + cantu;
								ckz = ckz + cantu;
								pkz = pkz + (cantu * KAZOO);
								break;

							default:
								system("clear");
								dep = 0;
								break;
						}
					} while ( dep == 1 );
					break;

				case 3:
					system("clear");
					do
					{
						op = 0, dep = 1;
						printf("Departamento de Instrumentos de Percucición\n\n 1) Tambor $%d		cant( %d | $%d )\n 2) Xilófono $%d	cant( %d | $%d )\n 3) Salir\nTotal en carrito cant( %d | $%d )\nIngrese una opción: ", DRUM, ctm, ptm, XILO, cxl, pxl, cant, total);
						scanf("%d", &op);
						switch ( op )
						{
							case 1:
								printf("\nIngrese la cantidad de Tambores: ");
								scanf("%d", &cantu);
								system("clear");
								printf("Se añadió %d Tambor(es)\n\n", cantu);
								total = total + (cantu * DRUM);
								cant = cant + cantu;
								ctm = ctm + cantu;
								ptm = ptm + (cantu * DRUM);
								break;

							case 2:
								printf("\nIngrese la cantidad de Xilófonos: ");
								scanf("%d", &cantu);
								system("clear");
								printf("Se añadió %d Xilófono\n\n", cantu);
								total = total + (cantu * XILO);
								cant = cant + cantu;
								cxl = cxl + cantu;
								pxl = pxl + (cantu * XILO);
								break;

							default:
								system("clear");
								dep = 0;
								break;
						}
					} while ( dep == 1 );
					break;

				case 4:
					system("clear");
					op = 0;
					printf("\nArticulo	Cantidad	Total		SubTotal\nGuitarra(s)	%d		$%d		$%d\nViolin(es)	%d		$%d		$%d\nFlauta(s)	%d		$%d		$%d\nKazoo(es)	%d		$%d		$%d\nTambor(es)	%d		$%d		$%d\nXilófono(s)	%d		$%d		$%d\n\nCantidad Total de articulos: %d		Precio Total: $%d\n\n¿Desea finalizar su compra?\n(S/N): ", cgt, GUITAR, pgt, cvl, VIOLIN, pvl, cfl, FLAUTE, pfl, ckz, KAZOO, pkz, ctm, DRUM, ptm, cxl, XILO, pxl, cant, total);
					scanf("%s", &finalizar);

					if (finalizar == 's' || finalizar == 'S')
					{
						system("clear");
						printf("\nVenta finalizada.\nCantidad de articulos: %d\nTotal a pagar: $%d\nFeliz compra, vuelva pronto ;)\n", cant, total);
						loop = 0;
					} else {
						system("clear");
						printf("Continuar comprando\n\n");
					}
					break;

				default:
					system("clear");
					printf("\n¿Deseas salir de la venta?\n(S/N): ");
					scanf("%s", &salir);
					if (salir == 's' || salir == 'S')
					{
						system("clear");
						printf("\nVenta finalizada.\n");
						loop = 0;
					} else {
						system("clear");
						printf("Continuar comprando\n\n");
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
		system("clear");
	} while (salir != 'n' && salir != 'N');

	return 0;
}
