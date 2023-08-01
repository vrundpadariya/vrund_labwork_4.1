#include<iostream>
using namespace std;

class x{
	public:
		int a,b,c;
	    int ca,cb,cc;
        int sum;
};

class y : public x{
	public:
		setdata(){
			cout << "Enter the first no:-";
			cin >> a;
			
			cout << "Enter the second no:-";
			cin >> b;
			
			cout << "Enter the third no:-";
			cin >> c;	
		}  
        
        getdata(){
        	ca=a*a*a;
        	cb=b*b*b;
        	cc=c*c*c;
        	
        	cout << "Cube of all three number is " << ca << " " << cb << " " << cc  << endl;
        	
        	sum = ca+cb+cc;
        	
            cout << "Sum of all cube is " << sum ;      
		}


};


int main(){
	y y1;
	
	
	y1.setdata();
	y1.getdata();
	return 0;
}
