//realizar un programa que pida un arreglo de  numero enteros en tiempo 
real y que imprima doss recorridos con el apuntador
//subelo a git en un repositorio llamado primer examen
# include <iostream>
using namespace std;
int main()
{
	int valores;
    int *var;
    int j=0;
     cout<<"¿cuantos valores desea en el arreglo: ";
    cin>>valores;
	var=new int [valores];
    for (int i=0; i<valores; i++){
        cout<<"Valor:"<<" ";
        cin>>var[i];
    cout<<"Valor recorrido: "<<var[i]<<endl;
    delete[] var;	
	}
   	return 0;
}
    

