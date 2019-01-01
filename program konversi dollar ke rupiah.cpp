#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	int rupiah, dollar;
	cout << "konversi dollar ke rupiah" <<endl;
	float nilai_tukar_dollar = 15193;
	
	cout << "masukkan nilai dollar : ";
	cin >> dollar;
	
	rupiah = dollar * nilai_tukar_dollar;
	cout << "nilai rupiahnya adalah : " << rupiah;
	
	return 0;
	
}
