#include<stdio.h>
#include<string.h>

#include<iostream>
#include<cmath>
using namespace std;
#define ll long long
int main(){
	
	int n;
	int x;
	
	ll x1, x2; // scan dua angka
	
	char t1; // tanda pertama --> x OR +
	char t2; // tanda kedua --> x OR +
	
	scanf("%d",&n);// scan jumlah data
	scanf("%d",&x);// scan angka awal
	getchar();
	ll n1temp = x;
	ll n2temp = x;

	
	for(int i = 0 ; i < n; i++){
		scanf("%c %lld %c %lld", &t1, &x1, &t2, &x2);
		getchar();
		ll n1, n2, n3, n4; // inisial ulang lagi karena ada kemungkinan terkecil ada di sebelumnya
		// karena terkecil dari iterasi sebelumnya tidak untuk join
		if(t1 == '+'){ // symbol pertama
			n1 = n1temp + x1;
			n2 = n2temp + x1;
		}else{
			n1 = n1temp * x1;
			n2 = n2temp * x1;
		}
		
		if(t2 == '+'){ // symbol kedua
			n3 = n1temp + x2;
			n4 = n2temp + x2;
		}else{
			n3 = n1temp * x2;
			n4 = n2temp * x2;
		}
		
		n1temp = max(n1 , max(n2, max(n3, n4))); // bandingin sama semua 3 data lainnya cari terbesar
		n2temp = min(n1 , min(n2, min(n3, n4))); // cari terkecil dari 3 data lainnya
		
	}
	
	printf("%lld\n", max(n1temp, n2temp));
	
	
	return 0;
}
