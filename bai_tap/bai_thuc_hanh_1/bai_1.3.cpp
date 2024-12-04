#include <bits/stdc++.h>
using namespace std;
using ll = long long;
class Date{
private:
	int year, date, month;
public:
	Date (int year = 0, int date = 0, int month = 0) : year(year), date(date), month(month){}
	void input();
	bool check(){
		if (date <= 0 || date >31 ){
			return false;
		}
		else{
			int max_date = 0;
			switch (month){
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					max_date = 31;
				break;
				case 2:
					if ((year % 4 == 0 && year != 100) || (year % 400 == 0)){
						max_date = 29;
					}
					else max_date = 28;
				case 4:
				case 6:
				case 9:
				case 11:
					max_date = 30;
			}
			if (date <= max_date){
				return true;
			}
			else{
				return false;
			}
		}
	}
	void output(){
		cout << date << "/" << month << "/" << year; 
	}
	friend Date NextDay(Date d);
};
void Date::input(){
	cin >> date >> month >> year;
}
Date NextDay (Date d){
	d.month = 0;
}
main(){
	
}


