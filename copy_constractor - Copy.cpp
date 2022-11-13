#include"copy_constractor.h"

Time::Time(){
	this->hour=00;
	this->minute=00;
	this->second=00;
}
/////////////////////////////////////////////////////////////
Time::Time(int hour,int minute,int second){
	this->hour=hour;
	this->minute=minute;
	this->second=second;
}
////////////////////////////////////////////////////////////
void Time::display(){
	cout<<"\n"<<hour<<":"<<minute<<":"<<second;
}
