#include<cstdlib>
#include<iostream>
#define maxf 3
#define maxc 5

using namespace std;
int main(int argc, char *argv[])
{
	float a[maxf][maxc];
	int f, c;
	//leer el array
	for (f = 0; f < maxf; f++) {
		for (c = 0; c < maxc; c++) {
			cout << "digite los numeros de ["<<f<<"]["<<c<<"]: ";
			cin >> a[f][c];
		}
		cout << "\n";
	}
	//escribir el array
	for (f = 0; f < maxf; f++) {
		for (c = 0; c < maxc; c++) {
			cout <<"\t"<< a[f][c]<<"\t";
		}
		cout << "\n";
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}