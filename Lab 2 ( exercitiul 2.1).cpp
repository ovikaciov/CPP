#include <iostream>
using namespace std;

class Punct
{
private:
	int x;
	int y;
public:
	Punct(int cx = 0, int cy = 0) {
		x = cx; 
		y = cy;
	}
	Punct& operator ++ () {
		Punct p(x, y);
		++x; 
		++y; 
		return p;
	
	}// ++ Punct;

	Punct& operator ++ (int a) {
	
		Punct p(x, y); 
		++x; 
		++y; 
		return p;
	
	}// Punct ++
	Punct& operator -- (int a) {
	
		Punct p(x, y); 
		--x; 
		--y; 
		return p;
	
	}// Punct --
	Punct& operator -- () {
		Punct p(x, y);
		--x;
		--y;
		return p;

	}// -- Punct;
	void afis() {
		cout << "[ " << x << " , " << y << " ]" << endl;
	}
};

void main()
{
	Punct p(2, -4);
	Punct p1;
	cout << "Prima afisare : ";
	p.afis();
	p1 = ++p;
	cout << "A 2-a afisare : ";
	p.afis();
	cout << "A 3-a afisare : ";
	p1.afis();
	p1 = p++;
	cout << "A 4-a afisare : ";
	p1.afis();
	cout << "A 5-a afisare : ";
	p.afis();
}

