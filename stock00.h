
#ifndef __STOCK00__H__
#define __STOCK00__H__

#include <string>

class Stock
{
	private:
		std::string company;
		long shares;
		double share_val;//股票价格
		double total_val;
		void set_totl(total_val = shares * share_val);
	public:
		void acquire(const std::string&co, long n, double pr);
		void buy(long num, double price);
		void sell(long num, double price);
		void update(double price)
		void show();

};

#endif
