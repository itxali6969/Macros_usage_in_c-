#include <iostream>
#define PI 3.14
#define CircleArea(X) ((PI)*(X)*(X))
using namespace std;

main(){
	 
	   float radius;
	   cout<< "Enter the value of radius :";
	   cin>>radius;
	   cout<<"The radius or circle is : ";
	   cout<<CircleArea(radius);
}
