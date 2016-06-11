#ifndef RAT_H
#define RAT_H
using namespace std;

class Rat {
private:
	int n;
	int d;

public:
	Rat();
	Rat(int);
	Rat(int,int);
	Rat operator+(Rat);
	friend std::ostream& operator<<(std::ostream& os, Rat r);
	friend std::istream& operator>>(std::istream& is, Rat r);
    void setN(int);
    void setD(int);
    int getN();
    int getD();
};

#endif