#include <iostream>
using namespace std;

int main(){
	system ("color 0A");
	int a,b,c;
	b=0;
	
	cin>>c;
	
	for (a=1 ; a<=c ; a++)
		if(c % a == 0)
			b++;
		if (b == 2)
		cout << c << " adalah Bilangan Prima " <<endl;
	else
		cout << c << " bukan Bilangan Prima " <<endl;
	
	return 0;
}

