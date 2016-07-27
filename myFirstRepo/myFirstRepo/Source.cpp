/*
* Class: CMSC140
* Instructor: Prof. Tseng
* Description: This project creates a menu for a coffee shop
* and tallies up the cost of the order as the user selects their
* drinks.
* Due: 07/29/2016
* I pledge that I have completed the programming assignment independently.
I have not copied the code from a student or any source.
I have not given my code to any student.
Print your Name here: Erik Heaney
*/
#include <iostream>
#include <iomanip>
using namespace std;

const double	COFFEE_PRICE = 1.29,
JUICE_PRICE = 1.50,
SODA_PRICE = 1.00,
TEA_PRICE = 1.39,
SPECIAL_PRICE = 2.99;

int main()
{
	int coffee = 0, juice = 0, soda = 0, tea = 0, special = 0, quantityTotal = 0;
	double priceTotal = 0;
	char order;
	//	bool validOrder;

	do {
		cout << "Welcome to my coffee shop! Our Offer:" << endl;
		cout << " C - Coffee ($1.29)" << endl;
		cout << " J - Juice ($1.50)" << endl;
		cout << " S - Soda ($1.00)" << endl;
		cout << " T - Tea ($1.39)" << endl;
		cout << " M - Manager's Special ($2.99)" << endl;
		cout << " X - Done with Placing Order" << endl;
		cout << "What drink would you like? Select C. J. S. T. M (or X to finish with order)" << endl;
		cin >> order;

		switch (order)
		{
		case 'c':
		case 'C':
			cout << "Thank you. You have ordered Coffee as your drink.\n\n";
			coffee++;
			quantityTotal++;
			priceTotal += COFFEE_PRICE;
			break;
		case 'j':
		case 'J':
			cout << "Thank you. You have ordered Juice as your drink.\n\n";
			juice++;
			quantityTotal++;
			priceTotal += JUICE_PRICE;
			break;
		case 's':
		case 'S':
			cout << "Thank you. You have ordered Soda as your drink.\n\n";
			soda++;
			quantityTotal++;
			priceTotal += SODA_PRICE;
			break;
		case 't':
		case 'T':
			cout << "Thank you. You have ordered Tea as your drink.\n\n";
			tea++;
			quantityTotal++;
			priceTotal += TEA_PRICE;
			break;
		case 'm':
		case 'M':
			cout << "Thank you. You have ordered Manager's Special as your drink.\n\n";
			special++;
			quantityTotal++;
			priceTotal += SPECIAL_PRICE;
			break;
		default:
			if (order != 'x' && order != 'X') {
				cout << "Invalid selection. Please place your order again.\n\n";
			}
		}
	} while (order != 'x' && order != 'X');

	cout << "You have ordered " << quantityTotal << " drinks. Here is your order: " << endl;
	cout << "Beverage" << setw(20) << "Quantity" << endl;
	if (coffee) { cout << "Coffee" << setw(15) << coffee << endl; }
	if (juice) { cout << "Juice" << setw(16) << juice << endl; }
	if (soda) { cout << "Soda" << setw(17) << soda << endl; }
	if (tea) { cout << "Tea" << setw(18) << tea << endl; }
	if (special) { cout << "Special" << setw(14) << special << endl; }
	cout << "Total: $" << fixed << setprecision(2) << showpoint << priceTotal << endl;
	cout << "Done. Have a great day!" << endl;

}