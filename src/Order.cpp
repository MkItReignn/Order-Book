#include <string>
#include <iostream>
#include <stdio.h>

#include "../header/Order.hpp"
using namespace std;




/*
enum orderType {
	SELL = 0,
	BUY = 1
};
*/

// Construct Order object
Order::Order(string tickerSymbol, string orderType, 
		double limitPrice, int quantity, time_t orderTime) :
		_tickerSymbol(tickerSymbol), 
		_orderType(orderType), 
		_limitPrice(limitPrice), 
		_quantity(quantity),
		_orderTime(orderTime)
{}

// Get limit price
double Order::getLimitPrice() { return _limitPrice; }
// Get quantity
int Order::getQuantity() { return _quantity; }
// Get the time of the order
time_t Order::getTime() { return _orderTime; }			

// Print all the information regarding the specific order
void Order::printOrder() {
	// Not quite sure if this will work
	// printf("%s", asctime(gmtime(&_orderTime)));

	cout << " "  << _orderType << " @" << _limitPrice << " " <<
		_quantity << endl;
}