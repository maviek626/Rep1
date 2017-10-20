#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main() {
	float BBdlug = 49.8206, BBszer = 19.0573;
	float Kdlug = 49.8792, Kszer = 19.2229;
	float Odlug= 50.0322, Oszer=19.2112;
	float Cdlug = 49.8990, Cszer = 18.9922;
	float bbk, ko, bbc, co, dysBBKO, dysBBCO, bbkdlug, bbkszer, kodlug, koszer, bbcdlug, bbcszer, codlug, coszer;
//	BB dystans
//	49.820644, 19.057340
//	kêty
//	49.879226, 19.222963
//	oœwiecim
//	50.032226, 19.211220
//  czechowice
//  49.899074, 18.992239
	bbkdlug = Kdlug - BBdlug;
	bbkszer = Kszer - BBszer;
	bbkdlug = pow(bbkdlug, 2);
	bbkszer = pow(bbkszer, 2);
	bbk = bbkdlug + bbkszer;
	bbk = sqrt(bbk);
		kodlug = Odlug - Kdlug;
		koszer = Oszer - Kszer;
		kodlug = pow(kodlug, 2);
		koszer = pow(koszer, 2);
		ko = kodlug+koszer;
		ko = sqrt(ko);
	dysBBKO = bbk + ko;
	cout << "Dystans Bielsko-kety-oswiecim wynosi " << dysBBKO << endl;

	bbcdlug = Cdlug - BBdlug;
	bbcszer = Cszer - BBszer;
	bbcdlug = pow(bbcdlug, 2);
	bbcszer = pow(bbcszer, 2);
	bbc = bbcdlug + bbcszer;
	bbc = sqrt(bbc);
		codlug = Odlug - Cdlug;
		coszer = Oszer - Cszer;
		codlug = pow(codlug, 2);
		coszer = pow(coszer, 2);
		co = codlug + coszer;
		co = sqrt(co);
	dysBBCO = bbc + co;
	cout << "Dystans Bielsko-Czechowice-oswiecim wynosi " << dysBBCO << endl;

	if (dysBBKO < dysBBCO)
	{
		cout << "Trasa Bielsko-Kety-Oswiecim na przelaj jest krotsza niz Bielsko-Czechowice-Oswiecim " << endl;
	}
	else
	{
		cout << "Trasa Bielsko-Czechowice-Oswiecim na przelaj jest krotsza niz Bielsko-Kety-Oswiecim" << endl;
	}

	system("pause");
	return 0;
}

// http://www.matmana6.pl/tablice_matematyczne/liceum/geometria_analityczna/107-wektory_definicja_i_dzialania_na_wektorach