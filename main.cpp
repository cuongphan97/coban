#include <iostream>
#include <stdio.h>

int tinh_tong(int a, int b) {

    return a + b;
}
int tinh_hieu(int a,int b) {
    int c;
    c=a-b;
    return c;
}
int tich(int a, int b){
    return a*b;
}
int chia(int a, int b){
    return a/b;
}

int hamso() {
    int a,b,c,d,e=10;
    return tich(e,(tinh_tong(a,b))/tinh_hieu(c,d));
}
int hamso(int a, int b, int c, int d, int e){
    return tich(e,chia((tinh_tong(a,b)),tinh_hieu(c,d)));
}

//todo: viet ham in ra tu 1->10 dung do...while

//todo: viet ham in ra tu 1->10 dung while

//todo: viet ham in ra tu 1->10 dung for

//todo: viet ham tinh tong so tu 1->10, vi du: 1+2+....+10.


int main() {
    int __a = 1, b = 10, c, e=10,f=1;
    c = tinh_tong(__a, b);
    printf("hieu la %d \n", tinh_hieu(e,f));
    printf("ket qua: %d \n", c);
    printf("ket qua tich: %d \n",tich(9,10) );
    printf("ket qua chia %d \n", chia(30,6));
    return 0;

}