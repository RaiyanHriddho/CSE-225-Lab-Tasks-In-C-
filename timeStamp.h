//NAME: RAIYAN MASOOD HRIDDHO
//  ID: 1931117042
//Task-02 from Lab-05_Sorted_List_Array


//timeStamp.h

#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED
#include <ostream>
using namespace std;

class timeStamp
{
private:
    int s;
    int m;
    int h;
public:
    timeStamp();
    timeStamp(int,int,int);
    bool operator ==(timeStamp);
    bool operator !=(timeStamp);
    bool operator > (timeStamp);
    bool operator < (timeStamp);
    friend ostream& operator << (ostream&, timeStamp&);
};
#endif // TIMESTAMP_H_INCLUDED
