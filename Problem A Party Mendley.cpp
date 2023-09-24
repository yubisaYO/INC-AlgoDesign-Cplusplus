#include<stdio.h>



int main(){
	
	int x;
	int th;
	scanf("%d",&x);
	scanf("%d",&th);
	int arr[x+1];
	
	for(int i = 0; i < x; i++){
		scanf("%d",&arr[i]);
	}
	int count = 0;
	int max = 0;
	int same = 1;
	int temp = -1;
	for(int i = 0; i < x; i++){
		for(int j = i+1 ; j < x; j++){
			for(int z = j+1; z < x; z++){
				if(i != j && i != z && j != z){
					int min1 = arr[i] - arr[j];
					int min2 = arr[i] - arr[z];
					int min3 = arr[j] - arr[z];
					
					if(min1 < 0){
						min1 = -(min1);
					}
					if(min2 < 0){
						min2 = -(min2);
					}
					if(min3 < 0){
						min3 = -(min3);
					}
					//printf("min1 %d | min2 %d |min3 %d\n",min1, min2, min3);

					if((min1 <= th && min1 >= 0) && (min2 <=th && min2 >=0) && (min3 <= th && min3 >=0)){
						if((arr[i] + arr[j] + arr[z]) > max){
							max = arr[i] + arr[j] + arr[z];
						}
						//printf("test");
						count++;
					}
				
				}
			}
		}
	}
	
	if(count == 0){
		printf("-1\n");
	}else{
		printf("%d %d\n",count , max);
	}
	
	
	
	
	return 0;
}
