#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char** argv) 
{
	int A[100],Aux,i,j,NA,op,KD,contA=0,dato,band,posicion;
	char opci,tecla;
			
	do{
		system("cls");
		cout<<"* MENU DE OPCIONES *\n";
		cout<<"* 1) Ingreso de datos               *\n";
		cout<<"* 2) Mostrar Lista                  *\n";
		cout<<"* 3) Eliminar un elemento           *\n";
		cout<<"*\n ...ELIJA UNA OPCION....: ";
		cin>>op;
		switch(op)
		{
			case 1:
					cout<<"\n----- ARREGLO A -----\n";
					do{
						cout<<"Cuantos datos ingresara?: ";
						cin>>KD;
					  }while(KD<0 || KD>100);
					  
					NA = contA+KD;
					
					for(i=contA;i<NA;i++)
					 {
						cout<<"A["<<i<<"]: ";
						cin>>A[i];
						contA++;
					 }
					 
				
				break;
			case 2:
					system("cls");
					cout<<"\nMOSTRANDO EL ARREGLO: \n";
					cout<<"\n----- ARREGLO A "<<NA<<" DATOS-----\n\n";
					for(i=0;i<NA;i++)
					   {
					    cout<<"\nA["<<i<<"]: "<<A[i];
				       }
								   
				break;
			case 3:
			system("cls");
					cout<<"\nELIMINAR UN ELEMENTO\n";
					cout<<"Elemento a eliminar?: ";
					cin>>dato;
					///////buscando elemento /////
					band=0;
					if(NA==0){
						cout<<"Lista Vacia";
				    break;
					}
				  	
					if(NA>0)  {
						for(i=0;i<NA;i++){
						 if(A[i]==dato)
					 	 {
					 	   posicion=i;	
					 	   band=1;
					 	   break;
					     }
					  }
					  
					if(band==1)
					 {
					   if(posicion==(NA-1))
					    {
					    	contA=contA-1;
					    	A[NA-1] = 0;
						}
					   else
					    {
					    	for(i=posicion;i<(NA-1);i++)
					    	 {
							   A[i] = A[i+1];
					         }
					    	contA=contA-1;
					    	 A[NA-1]=0;
		 
						}
					   
				     }
				     
					else{
						cout<<"\nEl dato No existe en el Arreglo...\n";	
					}
										
					cout<<"\nMOSTRANDO EL ARREGLO: \n";
					cout<<"\n----- ARREGLO A "<<NA<<" DATOS-----\n\n";
					for(i=0;i<NA;i++)
					   {
					    cout<<"\nA["<<i<<"]: "<<A[i];
				       }
					}  
									
				break;	
			default: cout<<"...Error esa opcion no existe\n";		
		}
		
		cout<<"\n...DESEA CONTINUAR S/N?: ";
		cin>>opci;
	 }while(opci=='S' || opci=='s');
	 cout<<"Gracias...hasta pronto"; 

	return 0;
}