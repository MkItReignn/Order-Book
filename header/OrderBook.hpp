#include <unordered_map>
#include <vector>
#include <string> 
#include "Order.hpp"

#ifndef ORDERBOOK_HPP
#define ORDERBOOK_HPP

/*
The purpose of this order book is to purely to store data
The order book will be updated with incoming orders
*/
using namespace std;

class OrderBook {
private:
	string tickerSymbol;
	double spotPrice;

	unordered_map<double, int> sellOrder;
	unordered_map<double, int> buyOrder;

	vector<Order *> pastSellOrders;
	vector<Order *> pastBuyOrders;

public:
	OrderBook(double price);

	void newBuyOrder(Order *order);
	void newSellOrder(Order *order);

	void printOrderBook(int n);
	void printSpotPrice();
	void printBid();
	void printAsk();
};


#endif // !ORDERBOOK_HPP



