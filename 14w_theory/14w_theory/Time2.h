#ifndef Time2_h
#define Time2_h

class Time {

public:
    Time(int = 0, int = 0, int = 0);
    void setTime(int, int, int);
    void printUniversal();
    void printStandard();

private:
    int hour;
    int minute;
    int second;
};

#endif
