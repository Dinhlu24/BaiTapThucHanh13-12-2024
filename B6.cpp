#include <stdio.h>

int main(){
	int n,primeNums=2;	
	printf("Moi nhap vao so nguyen N: ");	scanf("%d", &n);
	printf("Day la %d so nguyen to cua ban: ",n);
	
	while(n){
		int count = 0;
		
		for(int i=2;i*i<=primeNums;i++){
			if(primeNums % i == 0){
				count++;
				break;
			}
		}
		
		if(count == 0){
			printf("%d ", primeNums); 
			n--;
		}
		
		primeNums++;
	}
}
