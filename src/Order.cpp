#include <string>
#include "../header/Order.hpp"
using namespace std;




/*
enum orderType {
	SELL = 0,
	BUY = 1
};
*/


Order::Order(string tickerSymbol, string orderType, 
		double limitPrice, int quantity) :
		_tickerSymbol(tickerSymbol), 
		_orderType(orderType), 
		_limitPrice(limitPrice), 
		_quantity(quantity)
{}

