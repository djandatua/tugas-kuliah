#include <iostream>
using namespace std;

int main()
{
int nilai;
cout << " Masukan Nilai Angka : "; cin >> nilai;
cout << endl;
if ( nilai >= 81 && nilai <= 100)
{
cout << nilai << " Nilai hurufnya adalah A " << endl;
}
if ( nilai >= 71 && nilai <= 81)
{
cout << nilai << " Nilai hurufnya adalah B " << endl;
}
if ( nilai >= 61 && nilai <= 71)
{
cout << nilai << " Nilai hurufnya adalah C " << endl;
}
if ( nilai >= 51 && nilai <= 61)
{
cout << nilai << " Nilai hurufnya adalah D " << endl;
}
if ( nilai <= 51)
{
cout << nilai << " Nilai hurufnya adalah E " << endl;
}
return 0;
}
