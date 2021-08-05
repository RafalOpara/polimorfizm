#include <iostream>
using namespace std;

class Ksztalt
{
public:
	virtual void oblicz_pole() = 0;
	//czysta funckja 


};

class Kolo :public Ksztalt
{
	float r;
public:
	Kolo(float x)
	{
		r = x;
	}
	virtual void oblicz_pole()
	{
		cout << "pole kola:" << 3.14 * r * r << endl;
	}

};
////////////////

class kwadrat :public Ksztalt
{
	float a;
public:
	kwadrat(float x)
	{
		a = x;
	}
	virtual void oblicz_pole()
	{
		cout << "oblicz pole kwadratu: " << a * a << endl;
	}
};

void obliczenia(Ksztalt* x)
{
	x->oblicz_pole();
}

int main()
{
	Kolo k(1);
	kwadrat kw(2);

	Ksztalt* wsk;
	wsk = &k;
	wsk->oblicz_pole();

	wsk = &kw;
	wsk->oblicz_pole();

	obliczenia(wsk);
}