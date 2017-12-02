#include <stdio.h>

int main(){
	
	int *p; // p isminde pointer
	int *b; // b isminde pointer
	int a = 10; // integer tipinde 10 değerinde a değişkeni

	p = &a; // p yi anın adresine atıyoruz

	b = &p; // b yi ise p nin tutulduğu adrese atıyoruz

	printf("%d \n", a); // a değişkenini ekrana yazdırdı
	printf("%d \n", *p); // p pointer ini ekrana yazdırdı
	printf("%d \n", *b); // b pointer ini (p pointer inin adresini) ekrana yazdırdı

}
