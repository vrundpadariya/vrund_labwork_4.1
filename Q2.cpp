#include<iostream>
using namespace std;

class p{
	public:
		float c,f,k;
		
		
		setdata(){
			cout << "Enter the Celicus  ";
			cin >> c;	
		}
};

class q : public p {
		public:
	
		toFehrenheit(){
				
			f = (c * 1.8) + 32;

				cout << "Celicus to Fehrenheit is " << f << endl;
		}
		
};

class r : public q{
		public:
			toKelvin(){
			k = (f - 32) * 5/9+ 273.15; 
				cout << "Fehrenheit to kelvin is " << k << endl;
				cout << "Celicus = " << c << endl;
				cout << "Fehrenheit = " << f << endl;
				cout << "kelvin = " << k << endl;
			}
};

int main(){
	r r1;
	
	r1.setdata();
	r1.toFehrenheit();
	r1.toKelvin();
}
