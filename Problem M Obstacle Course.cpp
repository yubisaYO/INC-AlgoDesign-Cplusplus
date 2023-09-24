#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;


int main(){
	
	int n; // jumlah inputan
	int x; 
	
	scanf("%d",&n); // scan jumlah inputan
	int happy = 1;
	int curhappy = 0;
	int happiest = 2; 
	
	
	int prev = 0;
	for(int i = 1 ; i <= n; i++){
		scanf("%d",&x);
		//printf("x -- > %d\n",x);

		if(i % 2 == 1 && abs(x - prev) != 2 && i != 1 && abs(x - prev) != 0){
			curhappy = 1;
			//printf("Total Kebahagiaan  : %d\n",happiest);
		}
		
		if(i % 2 == 1){ // nyimpan angka selain 0
			prev = x; 
		}
		
		curhappy++;
		happiest = max(happiest, curhappy); // 
		//printf("Kebahagian sekarang : %d\n",curhappy);
		
	}
	
	printf("%d\n",happiest);
	
	
	
	return 0;
}
