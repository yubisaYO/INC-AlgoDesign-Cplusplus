#include<stdio.h>
#define ll long long


int main(){
	
	int n; 
	scanf("%d",&n);
	
	ll time[n];
	ll stk[n + 1];
	ll order[n + 1];
	ll minT = 0;
	for(ll i = 0 ; i < n - 1 ; i++){
		scanf("%ld",&time[i]); // time needed to cook 
	}
	
	for(ll i = 0 ; i < n ; i++){
		scanf("%ld",&stk[i]); // stock that exists
	}
	
	for(ll i = 0 ; i < n; i++){
		scanf("%ld",&order[i]); // order that must fullfilled
	}
	
	// scan from the last order
	
	for(ll i = n - 1; i >= 0; i--){
		if(stk[i] >= order[i]){
		// stok can fullfiled the order , so we just take from the stok
			stk[i] -= order[i];
			continue; // move up to next order
		}
		
		if(i == 0){ // means it is the last stok and the stok must be not fullfill the order
			printf("-1\n");
			return 0;
		}
		// cannot fullfilled with the order (many order - stok)
		ll notff = order[i] - stk[i];
	
		// store the stok that cannot be fullfiled 
		
		// take the stok from another stok and make it to fullfiled the notff stok 
		
		// times it with time that needed to become notff stok
		minT += (notff * time[i - 1]);
	
		// 4 secconds
		// 1 seconds
		
		// minus the stok that taken
		stk[i - 1] -= notff;
		
		
	}
	
	printf("%ld\n",minT);
	
	
	
	
	
	
	return 0;
}
