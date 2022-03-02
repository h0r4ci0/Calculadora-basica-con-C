#include <iostream>
using namespace std;

int main (){
  int a, b, resultado;
  int operacion;
  cout<<"Introduce el primer número"<<endl<<endl;
  cin>>a;
  
  cout<<endl<<"Introduce el segundo número"<<endl<<endl;
  cin>>b;

  cout<<endl<<"¿Qué operación quieres realizar?"<<endl;
  cout<<"1. Sumar"<<endl<<"2. Restar"<<endl<<"3. Multiplicar"<<endl<<"4. Dividir"<<endl<<endl;
  
  cin>>operacion;

  //Suma
  if (operacion == 1){
  resultado = a + b;

  cout<<endl<<"El resultado de tu suma es: "<< resultado <<endl<<endl;
}
  //Resta
  if(operacion == 2){
  resultado == a-b;
    
  cout<<endl<<"El resultado de tu resta es: "<< resultado <<endl<<endl;
}
  //Multiplicación
  if (operacion == 3){
  resultado = a*b;
    
  cout<<endl<<"El resultado de tu multiplicación es: "<< resultado<<endl<<endl;
}
  //División
  if (operacion == 4) {
  resultado = a/b;
    
  cout<<endl<<"El resultado de tu división es: "<< resultado << endl;

}

}
