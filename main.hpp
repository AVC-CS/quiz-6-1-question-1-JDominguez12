#include <iostream>
using namespace std;

void getTwoValues(int, int);
int getNextPrime(int);
int getPrevPrime(int);


/*int begin, end;
getTwoValues(begin, end);
int prime1 = getNextPrime(begin);
int prime2 = getPrevPrime(end);*/


void getTwoValues(int begin, int end){
    cout << "Enter your range from begin to end \n" << endl;
    cin >> begin >> end;
}
int getNextPrime(int begin){
    int j, i;
    for (j = 2; j < i; j++){
			if (i % j == 0){
				break;
			}
		}
		if (j > (i/2)){
			cout << i << " is prime." << endl;
		}
i = begin;
return begin;
}
int getPrevPrime(int end){
    int i, j;
for (j = 2; j < i; j++){
			if (i % j == 0){
				break;
			}
		}
		if (j > (i/2)){
			cout << i << " is prime." << endl;
		}
 end = i;
 return end;
}
