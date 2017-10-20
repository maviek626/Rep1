#include <iostream>
#include <cstdio>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    int a, wynik;
    cout <<"podaj liczbe"<<endl;
    cin>>a;
    cout<<"pierwiastek z tej liczby wynosi: "<<endl;
    a=sqrt(a);
    cout<<a<<endl;
    //system ("pause");
    return 0;
}
/*
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float BBdlug = 49.8206, BBszer = 19.0573;
	float Kdlug = 49.8792, Kszer = 19.2229;
	float Odlug= 50.0322, Oszer=19.2112;
	float bbk, ko;
//	BB dystans
//	49.820644, 19.057340

//	kêty
//	49.879226, 19.222963

//	oœwiecim
//	50.032226, 19.211220
	bbk = (Kdlug - BBdlug) * 2 + (Kszer - BBszer) * 2;
		cout << "liczba " <<bbk << endl;

	//system("pause");
	return 0;
}
*/
