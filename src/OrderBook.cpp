#include "../header/OrderBook.hpp"




// Construct OrderBook for a specific stock
OrderBook::OrderBook(double price) :
	spotPrice(price)
{}

// Update with new buy order
void OrderBook::newBuyOrder(Order *order) {
	pastBuyOrders.push_back(order);
	buyOrder[order->getLimitPrice()] += order->getQuantity();
}	
// Update with new sell order
void OrderBook::newSellOrder(Order *order) {
	pastSellOrders.push_back(order);
	sellOrder[order->getLimitPrice()] += order->getQuantity();
}