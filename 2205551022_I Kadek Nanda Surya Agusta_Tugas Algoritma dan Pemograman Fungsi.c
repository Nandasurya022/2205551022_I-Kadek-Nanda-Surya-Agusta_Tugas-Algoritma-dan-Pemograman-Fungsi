#include <stdio.h>

void segitiga(void);
void luas_segitiga(void);
void keliling_segitiga(void);

int main(void){
	luas_segitiga();
	keliling_segitiga();
	return 0;
}

void luas_segitiga(){
	printf("Apabila alas 7cm, tinggi 9cm\n");
	printf("Dengan rumus Luas segitiga = alas*tinggi\n");
	printf("Maka, Luas Segitiga adalah 63cm\n\n");
}

void keliling_segitiga(){
	printf("Apabila sisi 1 6cm, sisi 2 8cm, sisi 3 5cm\n");
	printf("Dengan rumus Keliling Segitiga = sisi 1 + sisi 2 + sisi 3\n");
	printf("Maka, Keliling Segitiga adalah 19cm\n\n");
}

void lingkaran(void);
void luas_lingkaran(void);
void keliling_lingkaran(void);

int main(void){
	luas_lingkaran();
	keliling_lingkaran();
	return 0;
}

void luas_lingkaran(){
	printf("Apabila Phi 3.14, jari_jari lingkaran 7cm\n");
	printf("Dengan rumus Luas Lingkaran = Phi*jari_jari*jari_jari\n");
	printf("Maka, Luas Lingkaran adalah 153.86\n\n");
}

void keliling_lingkaran(){
	printf("Apabila Phi 3.14, jari_jari 7cm\n");
	printf("Dengan rumus Volume Kerucut = 2*Phi*jari_jari\n");
	printf("Maka, Keliling Lingkaran adalah 43.96\n\n");
}

void kerucut(void);
void luas_permukaan_kerucut(void);
void volume_kerucut(void);

int main(void){
	luas_permukaan_kerucut();
	volume_kerucut();
	return 0;
}

void luas_permukaan_kerucut(){
	printf("Apabila Phi 3.14, jari_jari kerucut 7cm, selimut kerucut 6cm\n");
	printf("Dengan rumus Luas Permukaan Kerucut = Phi*jari_jari*jari_jari+(Phi*jari_jari*selimut)\n");
	printf("Maka, Luas Permukaan Kerucut adalah 285,74cm2\n\n");
}

void volume_kerucut(){
	printf("Apabila Phi 3.14, jari_jari 7cm, tinggi 9cm\n");
	printf("Dengan rumus Volume Kerucut = 1*Phi*jari_jari*jari_jari*tinggi/3\n");
	printf("Maka, Volume Kerucut adalah 461.58\n\n");
}
