#include<iostream>
#include<cmath>

using namespace std;

//VARIABLES PARA ASIGNARLES VALORES
float a,b,c,resultado;
//PARA ELEGIR EL TIPO DE OPERACION | PARA ESCOGER SI O NO | PARA HACER CONVERSION
int operacion, otra, conversion;
//PARA CONTINUAR Y MOSTRAR EL MENU DE OPCIONES
bool continuar = true;
//PARA FUNCIONES TRIGONOMETRICAS
float grado, pi=M_PI, funcion, deg;
//PARA LA RAIZ
float raiz,x1,x2;

// --------- FUNCION PORCENTAJE ---------
float porcentaje(float a, float b)
{
	cout<<"\nEjemplo: El porcentaje: 50"<<endl;
	cout<<"         del numero: 20"<<endl;
	
	cout<<"\nEl porcentaje: ";cin>>a;
	cout<<"del numero: ";cin>>b;
	resultado = (a * b)/100;
	cout<<"\nSe multiplica "<<a<<" por "<<b<<" y el resultado se divide entre 100"<<endl;
	cout<<"\n              [*] Resultado: El "<<a<<"% de "<<b<<" es igual a ";
	return resultado;
}

// ----------------------------------------------------- FUNCION PRINCIPAL -----------------------------------------------------
int main(){
	cout<<"		 		 _____________________ 								"<<endl;
	cout<<"				|  _________________  |								"<<endl;
	cout<<"				| |              0. | |								"<<endl;
	cout<<"				| |_________________| |								"<<endl;
	cout<<"				|  ___ ___ ___   ___  |								"<<endl;
	cout<<"				| | 7 | 8 | 9 | | + | |								"<<endl;
	cout<<"				| |___|___|___| |___| |								"<<endl;
	cout<<"				| | 4 | 5 | 6 | | - | |								"<<endl;
	cout<<"				| |___|___|___| |___| |								"<<endl;
	cout<<"				| | 1 | 2 | 3 | | x | |								"<<endl;
	cout<<"				| |___|___|___| |___| |								"<<endl;
	cout<<"				| | . | 0 | = | | / | |								"<<endl;
	cout<<"				| |___|___|___| |___| |								"<<endl;
	cout<<"				|_____________________|								"<<endl;
	cout<<"		__________________________________________________________	"<<endl;
	cout<<"\n		|>	1)Sumar                2)Restar			<|			"<<endl;
	cout<<"		|>	3)Multiplicar          4)Dividir		<|			"<<endl;
	cout<<"		|>	5)Raiz                 6)Porcentaje		<|			"<<endl;
	cout<<"		|>	7)Potencia             8)Seno			<|			"<<endl;
	cout<<"		|>	9)Coseno               10)Tangente		<|			"<<endl;
	cout<<"		|>	11)Formula general     12)Raiz enesima  	<|		"<<endl;
	cout<<"	 	__________________________________________________________	"<<endl;

	cout<<"\nNumero de operacion a realizar: ";cin>>operacion;

	switch(operacion)
	{
		case 1:cout<<"\n     |>  Suma de dos digitos  <|     "<<endl;					//	<--------------------------------------- SUMAR
		cout<<"\nValor 1: ";cin>>a;
		cout<<"Valor 2: ";cin>>b;
		resultado = a+b;	
		cout<<"\n              [*] Resultado: "<<a<<" mas "<<b<<" es igual a "<<resultado<<endl;
		break;
		case 2:cout<<"\n     |>  Resta de dos digitos  <|     "<<endl;					//	<--------------------------------------- RESTAR
		cout<<"\nValor 1: ";cin>>a;
		cout<<"Valor 2: ";cin>>b;	
		resultado = a-b;
		cout<<"\n              [*] Resultado: "<<a<<" menos "<<b<<" es igual a "<<resultado<<endl;
		break;
		case 3:cout<<"\n     |>  Multiplicar dos digitos  <|     "<<endl;					//	<--------------------------------------- MULTIPLICAR
		cout<<"\nValor 1: ";cin>>a;
		cout<<"Valor 2: ";cin>>b;	
		resultado = a * b;
		cout<<"\n              [*] Resultado: "<<a<<" por "<<b<<" es igual a "<<resultado<<endl;
		break;
		case 4:cout<<"\n     |>  Dividir  <|     "<<endl;					//	<--------------------------------------- DIVIDIR
		cout<<"\nValor 1: ";cin>>a;
		cout<<"Valor 2: ";cin>>b;	
		resultado = a / b;
		cout<<"\n              [*] Resultado: "<<a<<" entre "<<b<<" es igual a "<<resultado<<endl;
		break;
		
		case 5:cout<<"\n     |>  Raiz  <|     "<<endl;					//	<--------------------------------------- RAIZ
		cout<<"\nValor de la raiz: ";cin>>a;
		resultado = sqrt(a);
		cout<<"Quiere decir que "<<resultado<<" multiplicado por si mismo es igual a "<<a<<endl;
		cout<<"\n              [*] La raiz cuadrada de "<<a<<" es igual a "<<resultado<<endl;	
		break;	
		
		case 6:cout<<"\n     |>  Sacar porcentaje  <|     "<<endl;					//	<--------------------------------------- PORCENTAJE
		cout<<porcentaje(a,b)<<endl;
		break;		

		case 7:cout<<"\n    |>  Potencia  <|    "<<endl;					//	<--------------------------------------- POTENCIA
		cout<<"\nNumero base: ";cin>>a;
		cout<<"Exponente: ";cin>>b;
		cout<<"\nEsto quiere decir que "<<a<<" se multiplica a si mismo "<<b<<" veces"<<endl;
		resultado = pow(a,b);
		cout<<"\n              [*] El numero "<<a<<" elevado a "<<b<<" es igual a "<<resultado<<endl;
		break;
		
		case 8:cout<<"\n    |>  Elegiste seno  <|    "<<endl;					//	<--------------------------------------- SENO
		cout<<"\nCalcular el seno de ";cin>>grado;
		cout<<"\n  1)En grados (deg)             2)En radianes (rad)"<<endl;cin>>conversion;
		if(conversion==1)
		{
			deg = (grado * pi)/180;
			funcion = sin(deg);
			cout<<"              [*] El seno de "<<grado<<" en grados, es igual a "<<funcion<<endl;
		}
		else if(conversion==2)
		{
			funcion = sin(grado);
			cout<<"\n              [*] El seno de "<<grado<<" en radianes, es igual a "<<funcion<<endl;
		}
		break;		
		case 9:cout<<"    |>  Elegiste coseno  <|    "<<endl;					//	<--------------------------------------- COSENO
		cout<<"\nCalcular el coseno de ";cin>>grado;
		cout<<"\n  1)En grados (deg)             2)En radianes (rad)"<<endl;cin>>conversion;
	
		if(conversion==1)
		{
			deg = (grado * pi)/180;
			funcion = cos(deg);
			cout<<"              [*] El coseno de "<<grado<<" en grados, es igual a "<<funcion<<endl;
		}
		else if(conversion==2)
		{
			funcion = cos(grado);
			cout<<"\n              [*] El coseno de "<<grado<<" en radianes, es igual a "<<funcion<<endl;
		}					
		break;
		
		case 10:cout<<"    |>  Elegiste tangente  <|    "<<endl;					//	<--------------------------------------- TANGENTE
		cout<<"\nCalcular tangente de ";cin>>grado;
		cout<<"\n  1)En grados (deg)             2)En radianes (rad)"<<endl;cin>>conversion;
		if(conversion==1)
		{
			deg = (grado * pi)/180;
			funcion = tan(deg);
			cout<<"\n              [*] La tangente de "<<grado<<" en grados, es igual a "<<funcion<<endl;
		}		
		else if(conversion==2)
		{
			funcion = tan(grado);
			cout<<"\n              [*] La tangente de "<<grado<<" en radianes, es igual a "<<funcion<<endl;
		}
		break;
		
		case 11:cout<<"    |>  FORMULA GENERAL  <|    "<<endl;					//	<--------------------------------------- FORMULA GENERAL
		//FORMULA GENERAL

		//Solicitud de datos
		cout<<"\nDefine el valor de cada variable (a,b,c)"<<endl;
		cout<<"\nValor de a: ";cin>>a;
		cout<<"Valor de b: ";cin>>b;
		cout<<"Valor de c: ";cin>>c;
		cout<<"\n1.- Las variables son "<<a<<", "<<b<<", "<<c<<endl;
		//Discriminacion
		raiz = sqrt(pow(b,2)-4*a*c);
		cout<<"2.- Se hace la operacion dentro de la raiz. Primero "<<b<<" se eleva al cuadrado: "<<pow(b,2);cout<<endl;
		cout<<"3.- Al resultado se le resta 4 y este se multiplica "<<a<<" y por "<<c<<endl;
		cout<<"4.- De esta forma obtenemos "<<pow(b,2)-4*a*c;cout<<endl;
		cout<<"5.- Ahora, a eso le sacamos raiz y es igual a "<<raiz<<endl;
		//Operaciones
		cout<<"6.- Ya teniendo la raiz terminamos la operacion"<<endl;
		cout<<"7.- Para obtener "<<b<<" negativo se multiplica por -1"<<endl;
		cout<<"\n		El primer resultado consiste en sumar "<<b*-1<<" mas el resultado de la raiz "<<raiz<<" y es igual a "<<b*-1+raiz<<endl;
		x1 = (b*-1+raiz)/(2*a);
		cout<<"		EL resultado se divide entre multiplicar 2 por "<<a<<" y nos da "<<x1<<endl;
		cout<<"\n		El segundo resultado consiste en restar "<<b*-1<<" menos el resultado de la raiz "<<raiz<<" y es igual a "<<b*-1-raiz<<endl;
		x2 = (b*-1-raiz)/(2*a);
		cout<<"		EL resultado se divide entre multiplicar 2 por "<<a<<" y nos da "<<x2<<endl;
		//Impresion de resultados
		cout<<"\n          X1 = "<<x1<<endl;
		cout<<"          X2 = "<<x2<<endl;
		break;

		case 12:cout<<"    |> RAIZ ENESIMA  <|    "<<endl;					//	<--------------------------------------- RAIZ ENESIMA
		cout<<"\nValor del indice: ";cin>>a;
		cout<<"Valor del radicando: ";cin>>b;
		resultado = pow(b,1/a);
		cout<<"\nResultado: "<<b<<"^(1/"<<a<<") = "<<resultado<<endl;
		break;

		default:cout<<"[ERROR] Operacion no encontrada, intenta de nuevo.";
	}
	
	//              Solicita permiso para continuar o finalizar		
			while(continuar)
			{
				cout<<"\n                 ------>  Otra operacion  1) Si   2) No"                <<endl;cin>>otra;
				if(otra==1)
				{
					cout<<main()<<endl;
					break;
				}
				else
				{
					continuar = false;
					cout<<"Hasta pronto"<<endl;
					break;
				}
			}		
	return 0;
}
