#include <string>
#include <time.h>

#ifndef ORDER_HPP
#define ORDER_HPP

class Order;

/*
Holds all the information for an order
*/

class Order {
private:
	string _tickerSymbol;
	string _orderType;
	double _limitPrice;
	int _quantity;
	time_t _orderTime;
public:
	// Constructor which will be used for user inputs
	Order(string tickerSymbol, string orderType, 
		double limitPrice, int quantity, time_t orderTime);

	double getLimitPrice();
	int getQuantity();
	time_t getTime();

	void printOrder();
};


#endif