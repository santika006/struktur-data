#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	int matrik1[2][2];
    int matrik2[2][2];
    int jumlah[2][2];
    int a,b;
cout<<"matriks A"<<endl;
     
    for(a=0;a<2;a++){
        for(b=0;b<2;b++){
             
            cout<<"masukan matriks A "<<a<<""<<b<<"";
            cout<<"|<:>|";
            cin>> matrik1[a][b];
        }}
    for(a=0;a<2;a++){
        for(b=0;b<2;b++){
            cout<<"   "<<matrik1[a][b]<<"   ";}cout<<endl;}cout<<endl;
     
    cout<<endl;
    cout<<"MATRIKS B"<<endl;
     
    for(a=0;a<2;a++){
        for(b=0;b<2;b++){
             
            cout<<"masukan matriks B "<<a<<""<<b<<"";
            cout<<"|<:>|";
            cin>> matrik2[a][b];
        }}
    for(a=0;a<2;a++){
        for(b=0;b<2;b++){
            cout<<"   "<<matrik2[a][b]<<"   ";}cout<<endl;}cout<<endl;
    cout<<endl;
    cout<<"jumlah matriks A + matriks B"<<endl;
    for(a=0;a<2;a++){
        for(b=0;b<2;b++){
            jumlah[a][b]=matrik1[a][b]+matrik2[a][b];
        }}
     
     
    for(a=0;a<2;a++){
        for(b=0;b<2;b++){
            cout<<"   "<<jumlah[a][b]<<"   ";}cout<<endl;}cout<<endl;
     }

