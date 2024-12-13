#include <stdio.h>

int main(){
	int n;	printf("Moi nhap vao so nguyen duong N: ");	scanf("%d", &n);
	printf("Day la cac uoc so cua ban: ");
	for(int i=1;i<=n;++i){
		if(n % i == 0)	printf("%d ", i);
	}
}
