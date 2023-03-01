#include <iostream>
#include <cmath>
using std::cout, std::cin;

struct Rect
{

private:

	int x{0};
	int y{0};

	int w;
	int h;

public:

	Rect(int width, int height) : w(width), h(height) {}

	void move(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	void change(int width, int height)
	{
		this->w = width;
		this->h = height;
	}

	void print() const
	{
		for (int i = 0; i < y; i++)
		{
			cout << '\n';
		}

		for (int i = 0; i < h; i++)
		{
			for (int k = 0; k < x; k++)
			{
				cout << ' ';
			}
			for (int j = 0; j < w; j++)
			{
				cout << '#';
			}
			cout << '\n';
		}
	}

};


void ex_1()
{
	
	std::unique_ptr<Rect> rect{ std::make_unique<Rect>(20, 10) };
	rect->print();
	rect->change(5, 5);
	rect->print();
	rect->move(5, 5);
	rect->print();

}

struct Dot
{
	double x;
	double y;
	Dot(double x, double y) : x(x), y(y) {}
};

double get_distance(const Dot &a, const Dot &b)
{
	double x1{ a.x };
	double y1{ a.y };
	double x2{ b.x };
	double y2{ b.y };

	return sqrt((x2-x1) + (y2-y1));
}

void ex_2()
{
	std::unique_ptr<Dot> first_dot{ std::make_unique<Dot>(1,2) };
	std::unique_ptr<Dot> second_dot{ std::make_unique<Dot>(3,4) };

	cout << get_distance(*first_dot, *second_dot) << '\n';
}

struct Fraction
{
	int n{0};
	int d{0};

	Fraction() = default;
	explicit Fraction(int numerator) : n(numerator), d(numerator) {}
	Fraction(int numerator, int denominator) : n(numerator), d(denominator) {}

	void print() const
	{
		cout << n << '\n' << "-\n" << d << "\n\n";
	}

	void print_simple() const
	{
		int i = 0;
		int n1 = n;
		int d1 = d;

		while (d1 < n1)
		{
			n1 -= d1;
			i++;
		}

		if (i)
		{
			cout << "  " << n1 << '\n';
			cout << i << " -"  << '\n';
			cout << "  " << d1 << '\n';
		}
		else
		{
			print();
		}
	}
};

int gcd(int n, int d) {
    while (d != 0) {
        int temp = d;
        d = n % d;
        n = temp;
    }
    return n;
}

std::unique_ptr<Fraction> reduce(const Fraction &a)
{
	std::unique_ptr<Fraction> c{ std::make_unique<Fraction>() };
	int fs_gcd = gcd(a.n, a.d);
	c->n = a.n / fs_gcd;
	c->d = a.d / fs_gcd;
	
	return c;
}

std::unique_ptr<Fraction> sum(const Fraction &a, const Fraction &b)
{
	int n1{ a.n };
	int d1{ a.d };
	int n2{ b.n };
	int d2{ b.d };

	std::unique_ptr<Fraction> c{ std::make_unique<Fraction>() };
	c->n = n1 * d2 + n2 * d1;
	c->d = d1 * d2;

	return reduce(*c);
}

std::unique_ptr<Fraction> sub(const Fraction &a, const Fraction &b)
{
	int n1{ a.n };
	int d1{ a.d };
	int n2{ b.n };
	int d2{ b.d };

	std::unique_ptr<Fraction> c{ std::make_unique<Fraction>() };
	c->n = n1 * d2 - n2 * d1;
	c->d = d1 * d2;

	return reduce(*c);
}

std::unique_ptr<Fraction> mult(const Fraction &a, const Fraction &b)
{
	int n1{ a.n };
	int d1{ a.d };
	int n2{ b.n };
	int d2{ b.d };

	std::unique_ptr<Fraction> c{ std::make_unique<Fraction>() };
	c->n = n1 * n2;
	c->d = d1 * d2;

	return reduce(*c);
}

std::unique_ptr<Fraction> div(const Fraction &a, const Fraction &b)
{
	int n1{ a.n };
	int d1{ a.d };
	int n2{ b.n };
	int d2{ b.d };

	std::unique_ptr<Fraction> c{ std::make_unique<Fraction>() };
	c->n = n1 * d2;
	c->d = d1 * n2;

	return reduce(*c);
}

void ex_3()
{
	std::unique_ptr<Fraction> a{ std::make_unique<Fraction>(3,2) };
	std::unique_ptr<Fraction> b{ std::make_unique<Fraction>(2) };

	a->print();
	b->print();

	std::unique_ptr<Fraction> c{ sum(*a, *b) };
	
	c->print();
	c->print_simple();
}

