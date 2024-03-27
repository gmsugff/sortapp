#include<iostream>
using namespace std;
#include"sortapp.h"


void fillArr(int *arr, int usingnumber)
{
	for (int i = 0; i < usingnumber; i++) {
		cin >> arr[i];
	}
}



int main() {
	
	int usingnumber;
	cin >> usingnumber;
	int* arr = new int{ usingnumber };
fillArr(arr,usingnumber);
sortapp :: info(arr, usingnumber);


}