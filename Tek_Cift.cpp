#include <iostream>
using namespace std;

int main ()
{
	
int adet;
cout<< "Lutfen girmek istediginiz eleman sayisini yaziniz = " <<endl ;
cin >>adet;

int sayilar[adet];

for (int i=0 ; i<adet ; i++){
	cout<< i+1 << ".sayiyi giriniz" <<  endl ;
	cin>> sayilar[i];
    }


for(int i=0 ; i<adet ; i++)
	if (sayilar[i]%2==0){
		cout<< "cift sayidir" << endl  ;
		
	}
	
	else {
		
		cout << "tek sayidir" << endl;
	}
		
	
return 0;
}


	
	
	
