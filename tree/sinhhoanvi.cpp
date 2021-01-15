#include<conio.h>
#include<iostream>
using namespace std;
#define MAX  20
#define TRUE  1
#define FALSE 0
int X[MAX];
int n;//so phan tu cua mang
int countHV;//bi?n d?m s? hoán v?.
int Stop;//bi?n d?ng tìm ki?m hoán v? ti?p theo.
void Init(void){
 countHV = 0;
 cout<<"Nhap n=";
 cin>>n;
 //nh?p các ph?n t? c?a m?ng.
 for (int i = 1; i <= n; i++)
  cin>>X[i];
}
void Result(void){
 countHV++;
 cout<<"Hoan vi "<<countHV<<": ";
 for (int i = 1; i <= n; i++)
  cout<<X[i];
 cout<<endl;
}
void Next_Permutaion(void){
 int j, k, r, s, temp;
 j = n - 1;
 while (j > 0 && X[j] > X[j + 1])//1. tìm t? trái qua ph?i ch? s? j th?a mãn aj< aj
  j--;
 if (j == 0)
  Stop = TRUE;
 else {
  k = n;
  while (X[j] > X[k]) k--;//2.Tìm ak là s? nh? nh?t còn l?n hon aj trong các s? ? bên ph?i aj; 
  //3. Ð?i ch? aj v?i ak 
  temp = X[j]; 
  X[j] = X[k];
  X[k] = temp;
  r = j + 1; s = n;
  while (r < s){//4. L?t ngu?c do?n t? aj+1 d?n an. 
   temp = X[r]; 
   X[r] = X[s];
   X[s] = temp;
   r++;
   s--;
  }
 }
}
void Permutation(void){
 Stop = FALSE;
 while (!Stop){
  Result();
  Next_Permutaion();
 }
}
int main(){
 Init();
 Permutation();
 getch();
}
