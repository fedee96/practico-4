// practico4.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "utils.h"
#include <iostream>
#include "List.h"

using namespace std;

int main() {
	int resp = 0;
	do {
		cout << "Menu" << endl << "1. Referencias." << endl << "2. Aritmetica de punteros." << endl
			<< "3. Swap." << endl << "4. Lista." << endl << "0. Salir." << endl;
		cin >> resp;

		switch (resp) {
		case 1:
			cout << "Referencias\n";

			/*
			//case 1
			int var = 40;
			int &ref = var;
			//Implementacion correcta
			*/


			/*
			//case 2
			int  &ref = 1;
			// No se le puede asignar un literal a un ref.
			*/


			/*
			//case 3
			int var = 1;
			int *ptr;
			int &ref = var;
			*ptr = ref;
			//Se le está asignando el valor al que apunta la referencia al puntero.
			*/


			break;
		case 2:
		{
			system("cls");
			int indice[] = { 1,2,3,4,5,6,7,8,9,10 };
			int *ptr = indice;
			ptr++;
			cout << (*ptr * 5) << endl << (*(ptr++));
			if ((*ptr * 5) == (*(ptr++))) {

				printf("\nTrue \n");

			}
			else {

				printf("\nFalse \n");

			}

		}
		break;
		case 3: {
			system("cls");

			int opc = 0;

			cout << "Swap" << endl << "1. Pointer swap" << endl << "2. Parameter swap" << endl;

			cin >> opc;

			utils* utils = NULL;

			switch (opc) {

			case 1: {

				int a,
					b;
				int* pa = &a;
				int* pb = &b;

				cout << "Input first value." << endl;
				cin >> a;
				cout << "Input second value." << endl;
				cin >> b;

				cout << "Value var a: " << *pa << endl << "Value var b: " << *pb << endl;

				utils->swap_v1(pa, pb);

				cout << "Value var a: " << *pa << endl << "Value var b: " << *pb << endl;
			}
					break;
			case 2: {
				int a;
				int b;
				int& refa = a;
				int& refb = b;

				cout << "Input first value." << endl;
				cin >> a;
				cout << "Input second value." << endl;
				cin >> b;

				cout << "Value var a: " << refa << endl << "Value var b: " << refb << endl;
				utils->swap_v2(refa, refb);

				cout << "Value var a: " << refa << endl << "Value var b: " << refb << endl;

			}
					break;
			default:
				break;
			}
		}
				break;
		case 4: {
			List* listing = new List();

			int opt;

			do {
				system("cls");
				cout << "List Menu" << endl << "1. Add element." << endl << "2. Show list." << endl << "0. Back" << endl;
				cin >> opt;

				switch (opt) {
				case 1: {
					cout << "Input element." << endl;
					int integer;
					cin >> integer;
					listing->add(integer);
				}
						break;
				case 2: {
					cout << "The list elements are: " << endl;
					listing->showList();
					cout << endl;
				}
						break;
				case 0:



					break;
				default: {
					cout << "Invalid option." << endl;
				}
						 break;
				}
				system("pause");
			} while (opt != 0);

		}
				break;
		case 0:
			break;
		default:
			cout << "Invalid option.";
			break;
		}

	} while (resp != 0);
	return 0;
}