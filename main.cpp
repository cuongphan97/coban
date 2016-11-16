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
void lap_doWhile(int n, int i)
{
    printf("nhap vao gia tri n: ");
    scanf("%d",&n);
    do
        printf("%d\n",i);
    while(i++,i<=n);
}
//todo: viet ham in ra tu 1->10 dung while
void lap_while(int n, int i)
{
    printf("nhap vao gia tri n: ");
    scanf("%d",&n);
    while(i++,i<=n)
        printf("%d\n",i);
}
//todo: viet ham in ra tu 1->10 dung for
void lap_for(int n, int i)
{
    printf("nhap vao gia tri n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d\n",i);
}
//todo: viet ham tinh tong so tu 1->10, vi du: 1+2+....+10.
void tong_1denN(int n,int i,int s)
{
    printf("nhap vao gia tri n: ");
    scanf("%d",&n);
    while(i++,i<=n)
        s=s+i;
    printf("%d",s);
}
//main cho tat ca
int main()
{
    int n,i,j=0,k=1,s=0;
    lap_for(n,i);
    lap_while(n,j);
    lap_doWhile(n,k);
    tong_1denN(n,j,s);
}


int main() {
    int __a = 1, b = 10, c, e=10,f=1;
    c = tinh_tong(__a, b);
    printf("hieu la %d \n", tinh_hieu(e,f));
    printf("ket qua: %d \n", c);
    printf("ket qua tich: %d \n",tich(9,10) );
    printf("ket qua chia %d \n", chia(30,6));
    return 0;

}