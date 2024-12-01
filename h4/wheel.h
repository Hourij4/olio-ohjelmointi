#ifndef WHEEL_H
#define WHEEL_H
#include <string>

using namespace std;

class Wheel{
private:
    int size;
    string type;

public:
    Wheel(int s, string t);

    int getSize();
    void setSize(int s);

    string getType();
    void setType(string t);
};

#endif  // WHEEL_H
