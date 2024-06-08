#include<iostream>
//fecha: 2024 -06 -08
//autor: jandry zambrano palacios
//enunciado: (adivinar  el numero) diseñe el progama que permite generar un numero al azar
//aeleatorio, que el usuario
using  namespace std;
int main()
{
//insertando una semilla para que los numeros guardados al azar
//sean diferentes en cada ocación 
srand (time (NULL));
while(cout <= OPORTUNUIDADES && ! ganaste)//operación en circuito
{
cout int OPORTUNIDADES = 5;
cout<<endl<<"adivina el numero correcto entre 1 y 50";
int num =1 + rad()& (50); //genera numeros aeleatorios del 1 y 50


cout<<endl<<"ingrese tu número:";
cin>>numUsuario;
if (numUsuario < num)
cout<<endl<<"numero incorrecto. debes ingresar el numero MAYOR!!";
//<cout<<endl<<" "
else if (numUsuario > num)
else 
ganaste =true;

cout++;
}//fin del bucle
if (ganaste)
cout<<endl<<"NÚMERO CORRECTO. GANASTE UN PASAJE PARA LAS OLIMPIADAS";

else
cout<<endl<<"se acabaron las oportunidades. PERDISTE";
return 0;
} 