#include <iostream>
#include <vector>
using namespace std;

//setting global variables
int items;
int cur_count;
float cur_price;
string name;
string cur_food;
float total;

int main(){
	
	//welcoming user
	cout << "\033[1;31mbold red text\033[0m\n";
	cout << "Welcome to your grocery list" << endl;

	//getting name
	cout << "What is your name? ";
	cin >> name;

	//getting amount of items for user
	cout << "How many items would you like on your list? ";
	cin >> items;

	//creating grocery arrays
	total = 0;
	vector<string> *list;
	list = new vector<string>[items];
	vector<int> *count;
	count = new vector<int>[items];
	vector<float> *prices;
	prices = new vector<float>[items]; 
	vector<float> *totals;
	totals = new vector<float>;

	//allowing user to add items to their list
	for (int i = 1; i <= items; i++){
		cur_count = 0;
		cur_food = "";
		cur_price = 0;
		cout << "What would you like to add? ";
		cin >> cur_food;
		cout << "How many of these would you like? ";
		cin  >> cur_count;
		cout << "What is the price in dollars? $";
		cin >> cur_price;

		//setting values to arrays
		list->push_back(cur_food);
		count->push_back(cur_count);
		prices->push_back(cur_price);
	}

	//printing grocery list
	cout << endl << name << "'s Grocery List" << endl;
	for (int x = 0; x != items; x++){
		totals->push_back(count->at(x)*prices->at(x));
		cout << list->at(x) << " x" << count->at(x) << " total price $" << totals->at(x) << endl;
		total += totals->at(x);
	}
	
	//displaying total and thanking user
	cout << "Your groceries will cost $" << total << " dollars" << endl;
	cout << endl << "Happy Shopping!" << endl;;

	return 0;

}