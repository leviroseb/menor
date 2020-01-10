#include<iostream>
using namespace std;

void crear_arreglo(int v[],int n){
    for(int i=0;i<n;i++){
        cout<<"Ingrese un elemento: ";
        cin>>v[i];
    }
}

void mostrar_arreglo(int v[],int n){
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
}

int menor(int v[],int n){
    int m=v[0];
    for(int i=1;i<n;i++){
        if(m>=v[i]){
            m=v[i];
        }
    }
    return m;
}

int main()
{
    int v[10],n;
    cout<<"Numero de elementos del vector: ";
    cin>>n;
    crear_arreglo(v,n);
    mostrar_arreglo(v,n);
    cout<<"El menor elemento del arreglo es: "<<menor(v,n);
}
