#include <iostream>

using namespace std;
int main(){
    int i=1;
    int saldo=1000;
    do{
    cout<<"\n==||menu||==\n" ;
    cout<<"\n 1.consultar saldo \n";
    cout<<"\n 2.depositar dinero \n";
    cout<<"\n 3.retirar dinero \n";
    cout<<"\n 4.salir \n";
        cout<<"ingrese una opcion: ";
        cin>>i;
        switch(i){
            case 1:
                cout<<"consultar saldo\n";
                cout<<"su saldo es: "<<saldo<<"\n";
                break;
            case 2:
                cout<<"depositar dinero \n";
                cout<<"ingrese la cantidad a depositar:";
                int cantidad;
                cin>>cantidad;
                saldo += cantidad;
                cout<<"su nuevo saldo es:"<<saldo<<"\n";
                break;
            case 3:
                cout<<"retirar dinero \n";
                cout<<"ingrese la cantidad a retirar:";
                int retiro;
                cin>>retiro;
                if (retiro <= 0 || retiro > saldo){
                    cout<<"el saldo es insuficiente"<<endl;
                }else{
                    saldo -= retiro;
                    cout<<"su nuevo saldo es:"<<saldo<<"\n";
                }
                break;
            case 4:
                cout<<"salir \n";
                break;
            default:
                cout<<"opcion invalida\n";
        }
    }while(i!=4);

    return 0;
}