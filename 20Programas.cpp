#include <iostream>

using namespace std;

main(){
	int a, b, i=0, j=0, num, mlt, x, residuo, deci, resultado, k=0, saldoi=1000, saldo, reintegro, agregar,reslc, catetoa, catetob, div=0, numero, unidad, decenas, centenas, precio, resl_i, resl_f, edad, *p_edad;
	int opc, seleccion, binario[100], digitoex[20];
	float km, M, L, K, Ml, P;
	string palabra=" "; 
	
	cout <<"\t\t\t\t----------- Menu de Opciones----------\n" <<endl;
	
	cout<<"(1) Suma, Resta, Multiplicacion y Division de dos numeros" << endl;
    cout<<"(2) Determina si un numero es Par o Impar" << endl;
    cout<<"(3) Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa" << endl;
    cout<<"(4) Determinar si una palabra es palindromo" << endl;
    cout<<"(5) Conversion de numeros arábigos a romanos " << endl;
    cout<<"(6) Conversion de numeros enteros a letras" << endl;
    cout<<"(7) Conversion de numeros enteros con decimal a letras" << endl;
    cout<<"(8) Tablas de multiplicar" << endl;
    cout<<"(9) Todas las tablas de multiplicar del 1 al 10" << endl;
    cout<<"(10) Crear de forma grafica la multiplicacion manual" << endl;
    cout<<"(11) Conversion de numeros decimales a binario" << endl;
    cout<<"(12) Conversion de numeros decimales a hexadecimales" << endl;
    cout<<"(13) Crear Figuras Geometricas Basicas" << endl;
    cout<<"(14) Mover un punto en toda la pantalla" << endl;
    cout<<"(15) Simular un Cajero Automatico (Automata)" << endl;
    cout<<"(16) Calcular la hipotenusa" << endl;
    cout<<"(17) Determine si un Numero es Perfecto" << endl;
    cout<<"(18) Conversion de Numeros Enteros a Romanos" << endl;
    cout<<"(19) Determina si un Numero es Positivo o Negativo" << endl;
    cout<<"(20) Determina si es Mayor o Menor de Edad" << endl;
    cout<<"\nIndica el numero de opcion que desees ejecutar: ";
    cin>>opc;
    system("cls");
    
    switch (opc){
    	
    	case 1:
   			cout<<"\n(1) Suma" << endl;
    		cout<<"(2) Resta" << endl;
    		cout<<"(3) Producto" << endl;
    		cout<<"(4) Division" << endl;
    		cout<<"\nIndica el numero de opcion que desees ejecutar:  ";
    		cin>>seleccion;
    		
   			switch (seleccion) {
        		case 1: 
        			cout<<"\nIngrese el primer numero: ";
    				cin>>a;
    				cout <<"Ingrese el segundo numero: ";
    				cin>>b;
					cout << "\nLa suma es: " << a + b << endl; 
					break;
        		case 2: 
        		    cout<<"\nIngrese el primer numero: ";
    				cin>>a;
    				cout <<"Ingrese el segundo numero: ";
    				cin>>b;
					cout << "\nLa resta es: " << a - b << endl; 
					break;
        		case 3:
				    cout<<"\nIngrese el primer numero: ";
    				cin>>a;
    				cout <<"Ingrese el segundo numero: ";
    				cin>>b; 
					cout << "\nLa multiplicacion es: " << a * b << endl; 
					break;
        		case 4: 
        		    cout<<"\nIngrese el primer numero: ";
    				cin>>a;
    				cout <<"Ingrese el segundo numero: ";
    				cin>>b;
					cout << "\nLa division es: " << a / b << endl; 
					break;
        		default: 
					cout << "\nOpcion no valida" << endl; 
   			}
   		break;
			
		case 2:
			cout<<"\nIngrese el Numero: ";
			cin>>a;
	
			if ((a%2)==0){
				cout<<"\nEl numero es Par"<<endl;
			}else{
				cout<<"\nEl numero es Impar"<<endl;
			}
		break;
			
		case 3:
   			cout<<"\n(1) Kilometros a Millas" << endl;
   			cout<<"(2) Millas a Kilometros" <<endl;
    		cout<<"(3) Metros a pulgadas" << endl;
    		cout<<"(4) Pulgadas a Metros" << endl;
    		cout<<"(5) Libras a Kilos" << endl;
    		cout<<"(6) Kilos a Libras" << endl;
    		cout<<"\nIndica el numero de opcion que desees ejecutar:  ";
    		cin>>seleccion;
    		
   			switch (seleccion) {
        		case 1: 
        			cout<<"\nIngrese los kilometros a convertir: ";
    				cin>>km;
					cout << "\nEl total de millas son: " << km * 0.623 << endl; break;
				case 2: 
					cout<<"\nIngrese las Millas a convertir: ";
    				cin>>Ml;
					cout << "\nEl total de kilometros son: " << Ml * 1.609 << endl; break;
        		case 3: 
					cout<<"\nIngrese los Metros a convertir: ";
    				cin>>M;
					cout << "\nEl total de pulgadas son: " << M * 39.37 << endl; break;
				case 4:
					cout<<"\nIngrese las Pulgadas a convertir: ";
    				cin>>P;
					cout << "\nEl total de Metros son: " << P / 39.37 << endl; break;
        		case 5: 
        			cout<<"\nIngrese las Libras a convertir: ";
    				cin>>L;
					cout << "\nEl total de kilos son: " << L / 2.205 << endl; break;
        		case 6: 
					cout<<"\nIngrese las kilos a convertir: ";
    				cin>>K;
					cout << "\nEl total de libras son: " << K * 2.205 << endl; break;
        		default: 
					cout << "\nOpcion no valida" << endl; 
   			}
			break;
			
		case 4:
	        cout<<"\nIngrese la palabra: "<<endl;
            cin >> palabra;
            
            if(palabra[i]==palabra[j]){
            	cout<<"Si es Palidroma "<<endl;
            }
            else{
            	cout<<"No es Palidroma "<<endl;
            }
			break;
			
		case 5:
			cout << "\nIngrese un numero: ";
			cin >> a;
			
			num=a;
			
			while(num!=0)
			{

			if (num<= 3999 && num>= 1000){
				cout << "M" << endl;
			num = num -1000;
			}
			else if(num <1000 && num>=900){
				cout << "CM" << endl;
			num = num - 900;
			}
			else if(num < 900 && num>500){
				cout << "D" << endl;
			num = num - 500;
			}
			else if (num == 500){
				cout << "D" << endl;
			num = num -500;
			}
			else if (num<500 && num>= 400){
				cout << "CD" << endl;
			num = num - 400;
			}
			else if (num<400 && num >99){
				cout << "C" << endl;
			num = num -100;
			}
			else if (num< 100 && num>89){
				cout << "XC" << endl;
			num = num - 90;
			}
			else if (num< 90 && num>59){
            	cout << "L" << endl;
			num = num - 50;
			}
			else if(num<60 && num >50){
				cout << "L" << endl;
			num = num - 50;
			}
			else if (num ==50){
				cout << "L" << endl;
			num = num -50;
			}
			else if(num<50 && num>39){
				cout << "XL" << endl;
			num = num - 40;
			}
			else if(num< 40 && num> 10){
				cout << "X" << endl;
			num -= num - 10;
			}
			else if(num == 10){
				cout << "X" << endl;
			num = num -10;
			}
			else if(num==9){
				cout << "IX" << endl;
			num = num - 9;
			}
			else if(num<=8 && num>=6){
				cout << "V" << endl;
			num = num - 5;
			}
			else if (num == 5){
				cout << "V" << endl;
			num = num - 5;
			}
			else if (num == 4){
				cout << "IV" << endl;
			num = num - 4;
			}
			else if (num<= 3 && num>=1){
				cout << "I" << endl;
			num = num - 1;
			}
			}
			break;
			
		case 6:
			cout<<"\nIngrese un numero: ";
    		cin>>a;
			
			if((a<1)||(a>999));
			else
    		{
        	
			if(a>=900) {cout<<"NOVECIENTOS " ;a=a-900;}
       		else if(a>=800) {cout<<"OCHOCIENTOS " ;a=a-800;}
       		else if(a>=700) {cout<<"SETECIENTOS " ;a=a-700;}
       		else if(a>=600) {cout<<"SEISCIENTOS " ;a=a-600;}
       		else if(a>=500) {cout<<"QUINIENTOS " ;a=a-500;}
       		else if(a>=400) {cout<<"CUATROCIENTOS " ;a=a-400;}
       		else if(a>=300) {cout<<"TRESCIENTOS " ;a=a-300;}
       		else if(a>=200) {cout<<"DOSCIENTOS " ;a=a-200;}
       		else if(a>100) {cout<<"CIENTO " ;a=a-100;}
       		else if(a==100) {cout<<"CIEN" ;a=a-100;}
        	
			if(a>90) {cout<<"NOVENTA Y " ;a=a-90;}
            if(a==90) {cout<<"NOVENTA" ;a=a-90;}  
            if(a>80) {cout<<"OCHENTA Y " ;a=a-80;}
            if(a==80) {cout<<"OCHENTA" ;a=a-80; }
            if(a>70) {cout<<"SETENTA Y " ;a=a-70;}
            if(a==70) {cout<<"SETENTA" ;a=a-70;}
            if(a>60) {cout<<"SESENTA Y " ;a=a-60;}
            if(a==60) {cout<<"SESENTA" ;a=a-60;}
            if(a>50) {cout<<"CINCUENTA Y " ;a=a-50;}
            if(a==50) {cout<<"CINCUENTA" ;a=a-50;}
            if(a>40) {cout<<"CUARENTA Y " ;a=a-40;}
            if(a==40) {cout<<"CUARENTA" ;a=a-40;}
            if(a>30) {cout<<"TREINTA Y " ;a=a-30;}
            if(a==30) {cout<<"TREINTA" ;a=a-30;}
            if(a>20) {cout<<"VEINTI" ;a=a-20;}
            if(a==20) {cout<<"VEINTE" ;a=a-20;}
        	
			if(a>=16) {cout<<"DIECI" ;a=a-10; }
       		else if(a==15) {cout<<"QUINCE" ;a=a-15;}
       		else if(a==14) {cout<<"CATORCE" ;a=a-14;}
       		else if(a==13) {cout<<"TRECE" ;a=a-13;} 
       		else if(a==12) {cout<<"DOCE" ;a=a-12;}
       		else if(a==11) {cout<<"ONCE" ;a=a-11;}
       		else if(a==10) {cout<<"DIEZ" ;a=a-10;}      
        
			if(a==9) {cout<<"NUEVE" ;a=a-9;}
        	if(a==8) {cout<<"OCHO" ;a=a-8;}
        	if(a==7) {cout<<"SIETE" ;a=a-7;}
            if(a==6) {cout<<"SEIS";a=a-6;}
       		else if(a==5) {cout<<"CINCO" ;a=a-5;}
       		else if(a==4) {cout<<"CUATRO" ;a=a-4;}
       		else if(a==3) {cout<<"TRES" ;a=a-3;}
       		else if(a==2) {cout<<"DOS" ;a=a-2;}
       		else if(a==1) {cout<<"UNO" ;a=a-1;}
       }
    		cout<<endl;
			cin.ignore();
			break;
			
		case 7:
			cout <<"\nNo disponible" << endl;
		break;
			
		case 8:
			do{
            	cout << "\nIngrese un numero: ";
            	cin >> a;
            	
            }while ((a<1) || (a>10));

            for (int i = 1; i <= 10; i++)
            {
            	cout<<a<<" * "<< i <<" = "<<a*i<<endl;
            }
			break;
			
		case 9:
			for (int a = 1; a <= 10; a++)
            {
            	cout<<"_"<<endl;
            for (int i = 1; i<=10; i++){
            mlt = a * i;
            	cout<< a<<" * "<<i<<" = "<<mlt<<endl;

            }
            }
			break;
			
		case 10:
			cout <<"\nNo disponible" << endl;
			break;
			
		case 11:
			
			printf("\nIngrese el numero: ");
     		fflush(stdin);
      		scanf("%d",&x);
      		for(i=100;i>0;i--)
      		{
           	binario[i]=x%2;
           	x=x/2;
     		}
      		for(i=1;i<=100;i++)
      		{
           	if(binario[i]==1)
           	{
                for(j=i;j<=100;j++)
                {
                     printf("%d",binario[j]);
                }
                break;
            }
     		}
			break;
		
		case 12:
			cout << "\nIngrese el numero decimal a convertir: " << endl;
              cin >> deci;

            do
            {
                residuo = deci % 16;
                resultado = deci / 16;
                digitoex[k] = residuo;
                deci = resultado;
                k++;
            } while (resultado > 15);

            digitoex[k] = resultado;

            cout << "El equivalente en hexadecimal es: ";

            for (int j = i; j >= 0; j--)
                        {
                if (digitoex[j] == 10)
                {
                    cout << "A";
                }
                else if (digitoex[j] == 11)
                {
                    cout << "B";
                }
                else if (digitoex[j] == 12)
                {
                    cout << "C";
                }
                else if (digitoex[j] == 13)
                {
                    cout << "D";
                }
                else if (digitoex[j] == 14)
                {
                    cout << "E";
                }
                else if (digitoex[j] == 15)
                {
                    cout << "F";
                }
                else
                {
                    cout << digitoex[j];
                }
            }
            cout << endl;
        break;
        
        case 13:
			cout <<"\nNo disponible" << endl;
		break;
		
		case 14:
			cout <<"\nNo disponible" << endl;
		break;
		
		case 15:
			cout <<"\t\t\t----------- Bienvenido a su Cajero Automatico -----------"<< endl;
			cout<<"\n(1) Ingreso en Cuenta" << endl;
    		cout<<"(2) Reintegro" << endl;
    		cout<<"(3) Ver Saldo de Cuenta" << endl;
    		cout<<"(4) Salir" << endl;
    		cout<<"\nIndica el numero de opcion que desees ejecutar:  ";
    		cin>>seleccion;
    		
    		if(seleccion==1){
    			cout<<"\nIngrese la Cantidad a Depositar: ";
    			cin>>agregar;
    			saldo = saldoi + agregar;
    			cout<<"\nCantidad Disponible en Cuenta: "<<saldo;
			}
    		else if(seleccion==2){
    			cout<<"\nCuanta cantidad desea retirar: ";
    			cin>>reintegro;
    			if(reintegro>1000){
    				cout<<"\nLa cantidad digitada es mayor a 1000, Digite de nuevo la cantidad a retirar: ";
    				cin>>reintegro;
				}
				saldo = saldoi - reintegro;
				cout<<"\nCantidad disponible en Cuenta: "<<saldo;
			}
			else if(seleccion==3){
				cout<<"\nLa cantidad disponible en cuenta es de: "<<saldoi;
			}
			else if(seleccion==0){
				cout<<"Gracias por Utilizar Nuestro Cajero Automatico";
			}
			else{
				cout<<"\nOpcion no valida";
			}
			cin.get();
		break;
		
		case 16:
			cout<<"\nIngrese el cateto a: ";
            cin>>catetoa;
            cout<<"Ingresar el cateto b: ";
            cin>>catetob;
            reslc = (catetoa * catetoa)+(catetob * catetob);
            cout<<"\nLa hipotenusa es: "<<reslc <<endl;
		break;
		
		case 17:
			cout<<"\nIngrese un Numero: ";
			cin>>num;
	
			for (int i=1; i<num; i++){
			if (num%i==0)
				div +=i;
			}
			if (num==div){
				cout<< "Es perfecto";
			}
			else{
				cout<<"No es perfecto";
			}
		
		break;
		
		case 18:
			cout<<"\nIngrese un numero: ";
			cin >> numero;

			unidad = numero%10; numero /=10;
			decenas = numero%10; numero /=10;
			centenas = numero%10; numero /=10;

	
			switch(centenas){
				case 1: cout<<"C";break;
				case 2: cout<<"CC";break;
				case 3: cout<<"CCC";break;
				case 4: cout<<"CD";break;
				case 5: cout<<"D";break;
				case 6: cout<<"DC";break;
				case 7: cout<<"DCC";break;
				case 8: cout<<"DCCC";break;
				case 9: cout<<"CM";break;
			}
		
			switch(decenas){
				case 1: cout<<"X";break;
				case 2: cout<<"XX";break;
				case 3: cout<<"XXX";break;
				case 4: cout<<"XL";break;
				case 5: cout<<"L";break;
				case 6: cout<<"LX";break;
				case 7: cout<<"LXX";break;
				case 8: cout<<"LXXX";break;
				case 9: cout<<"XC";break;
			}
			
			switch(unidad){
				case 1: cout<<"I";break;
				case 2: cout<<"II";break;
				case 3: cout<<"III";break;
				case 4: cout<<"IV";break;
				case 5: cout<<"V";break;
				case 6: cout<<"VI";break;
				case 7: cout<<"VII";break;
				case 8: cout<<"VIII";break;
				case 9: cout<<"IX";break;
			}
		break;
		
		case 19:
			cout<<"\nIngrese el Numero: ";
			cin>> num;
	
			if (num>0){
			cout<<"Positivo"<<endl;
			}
			else{	
				if (num==0){ 
					cout<<"Neutro"<<endl;
				}
			else{ 
				cout<<"Negativo"<<endl;
			}
		
			}
		break;
		
		case 20:
			cout<<"Ingrese Edad: ";
			cin>>edad;
			p_edad = &edad;
			if (*p_edad>=18){
				cout<<"Es Mayor de Edad"<<endl;
			}else{
				cout<<"Es Menor de Edad"<<endl;
			}
		break;
		
	default:
		cout<<"\nOpcion no valida" <<endl;
	}
	
	cout<<"\n";
    cout<<"--------------------------------------------"<<endl;
    cout<<"Desea regresar al Menu Principal?"<<endl;
            cout<<"Si / 1"<<endl;
            cout<<"No / 2 \n"<<endl;
            cin>> b;
            if (b==1)
            {
            system("cls");
            return    main();
            }else{
                exit (-1);
            }

	cout<<"\n\n\t----------- Gracias por utilizar este programa -----------\n" << endl;
	return 0;
}
