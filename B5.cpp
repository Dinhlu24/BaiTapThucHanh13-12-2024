#include <stdio.h>

int main(){
	int n,count=0;	printf("Moi nhap vao so nguyen duong N: ");	scanf("%d", &n);
	for(int i = 2;i*i <= n;i++){
		if(n % i == 0)	count++;	break;
	}
	if(n < 2 || count > 0)	printf("%d khong phai la mot so nguyen to",n);
	else	printf("%d la mot so nguyen to",n);
}
