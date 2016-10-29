#include <iostream>
using namespace std;

int array[] = {61,99,60,71,19,45,91,29,85,92,37,63,36,13};
int size = 14;

void shellSort(){
	int temp,k;
	for(int i=size/2;i>0; i/=2){
		
		for(int j=i;j<size;++j){
		
			temp = array[j];
			
				for(k=j;k>=i && temp < array[k-i];k-=i){
	
						array[k] = array[k-i];
	
					}
			array[k] = temp;	
		}
	}
	
}

int main(){

	shellSort();
	
	for(int m=0;m<size;m++){
		cout << array[m] << " ";
	}
	cout << endl;
	
	return 0;
}
