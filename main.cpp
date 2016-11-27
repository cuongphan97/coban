#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

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
void lap_doWhile(int n)
{
    int i=0;
    do
        printf("%d\n",i);
    while(i++,i<=n);
}
//todo: viet ham in ra tu 1->10 dung while
void lap_while(int n)
{
    int i=0;
    while(i++,i<=n)
        printf("%d\n",i);
}
//todo: viet ham in ra tu 1->n dung for
void lap_for(int n)
{
    int i;
    for( i=1;i<=n;i++)
        printf("%d\n",i);
}
//todo: viet ham tinh tong so tu 1->10, vi du: 1+2+....+10.
int tong_1denN(int f)
{
   int i=0,s=0;
    while(i++,i<=f)
        s=s+i;
    return s;
}

//todo: viet ham giai phuong trinh bac hai

//todo: viet ham hoan doi gia tri 2 so a va b

//todo: viet chuong trinh tinh binh phuong cua mot so

//todo: viet ham nhap vao n xuat ra so hang an cua cap so cong Sn=1+2+5+7+....

//todo: viet ham nhap vao n xuat ra so hang an cua cap so nhan: an = 2*2^(n-1)e

//todo: tim so Fibonacci thu n; so fibonacci F = 0, 1, 1, 2, 3, 5, 8, 13,....


using namespace std;
int main() {
    string fff;
    string hello = "dfsdfdsf";

    const char *d =  "egrg0";
    printf(d);

    int n;
    cout <<"Nhap vao so n";
    cin  >> n;
//    printf("nhap vao gia tri n: ");
    scanf("%d",&n);

    printf("ket:%d",tong_1denN(n));
}