#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int tinh_tong(int a, int b) {

    return a + b;
}

int tinh_hieu(int a, int b) {
    int c;
    c = a - b;
    return c;
}

int tich(int a, int b) {
    return a * b;
}

int chia(int a, int b) {
    return a / b;
}

int hamso() {
    int a, b, c, d, e = 10;
    return tich(e, (tinh_tong(a, b)) / tinh_hieu(c, d));
}

int hamso(int a, int b, int c, int d, int e) {
    return tich(e, chia((tinh_tong(a, b)), tinh_hieu(c, d)));
}

//todo: viet ham in ra tu 1->10 dung do...while
void lap_doWhile(int n) {
    int i = 0;
    do
        printf("%d\n", i);
    while (i++, i <= n);
}

//todo: viet ham in ra tu 1->10 dung while
void lap_while(int n) {
    int i = 0;
    while (i++, i <= n)
        printf("%d\n", i);
}

//todo: viet ham in ra tu 1->n dung for
void lap_for(int n) {
    int i;
    for (i = 1; i <= n; i++)
        printf("%d\n", i);
}

//todo: viet ham tinh tong so tu 1->10, vi du: 1+2+....+10.
int tong_1denN(int f) {
    int i = 0, s = 0;
    while (i++, i <= f)
        s = s + i;
    return s;
}

//todo: viet ham giai phuong trinh bac hai
void pt_bac2(float a,float b,float c) {
    float d, x1, x2;
    if (a == 0) {
        x1 = -c / b;
        cout << "pt bac 1 co nghiem la x=" << x1;
    } else {
        d = b * b - 4 * a * c;
        if (d == 0) {
            x1 = -b / 2 * a;
            cout << "pt bac 2 co nghiem kep la x=" << x1;
        } else if (d > 0) {
            x1 = (-b - sqrt(d)) / 2 * a;
            x2 = (-b + sqrt(d)) / 2 * a;
            printf("x1=%.2f\nx2=%.2f", x1,x2);
        } else
            cout << "pt bac 2 da cho vo nghiem";
    }
}


//todo: viet ham hoan doi gia tri 2 so a va b
void hoan_doi(int a, int b)
{
    int tam;
    tam=a;
    a=b;
    b=tam;
    printf("a=%d, b=%d",a,b);
}
//todo: viet chuong trinh tinh binh phuong cua mot so
int binh_phuong(int a)
{
    return a*a;
}
//todo: viet ham nhap vao n xuat ra so hang an cua cap so cong Sn=1+3+5+7+....
int cap_so_cong(int n)
{
    int d=2,a1=1;
    return a1+(n-1)*d;

}
//todo: viet ham nhap vao n xuat ra so hang an cua cap so nhan: an = 2*2^(n-1)e
float cap_so_nhan(int n)
{
    float e=2.72;
    return 2*pow(2,(n-1)*e);
}
//todo: tim so Fibonacci thu n; so fibonacci F = 0, 1, 1, 2, 3, 5, 8, 13,....
int fibonacci(int n)
{
}


int main() {
//    string fff;
//    string hello = "dfsdfdsf";
//
//    const char *d =  "egrg0";
//    printf(d);
//
//    int n;
//    cout<<"Nhap vao so n";
//    cin  >> n;
//    printf("nhap vao gia tri n: ");
//    scanf("%d",&n);
//
//    printf("ket:%d",tong_1denN(n));
//    float a, b, c;
//    cout << "Nhap a,b,c: " << endl;
//    cin >> a >> b >> c;
//    pt_bac2(a,b,c);
//    int a,b;
//    printf("nhap a,b: ");
//    scanf("%d%d",&a,&b);
//    hoan_doi(a,b);
//    binh_phuong(3);
//    printf("%d",binh_phuong(3));
//    cap_so_cong(5);
//    printf("%d",cap_so_cong(5));
    printf("%f",cap_so_nhan(4));
}