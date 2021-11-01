#ifndef myTime_H
#define myTime_H

class myTime {

public:
	myTime();
	void setTime(int, int, int);
	void printUniversal();
	void printStandard();

private:
	int hour;
	int minute;
	int second;

};

#endif