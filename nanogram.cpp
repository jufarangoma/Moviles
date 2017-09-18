#include "iostream"
#define COL 12
#define FILA 10
using namespace std;


void originaNanogramLlenar(char nanogram[FILA][FILA]){

	nanogram[0][6]='X';
	nanogram[0][7]='X';
	nanogram[1][6]='X';
	nanogram[1][7]='X';
	nanogram[2][2]='X';
	nanogram[2][3]='X';
	nanogram[2][4]='X';
	nanogram[2][5]='X';
	nanogram[2][6]='X';
	nanogram[2][9]='X';
	nanogram[3][1]='X';
	nanogram[3][2]='X';
	nanogram[3][4]='X';
	nanogram[3][5]='X';
	nanogram[3][6]='X';
	nanogram[3][7]='X';
	nanogram[3][8]='X';
	nanogram[3][9]='X';
	nanogram[4][1]='X';
	nanogram[4][4]='X';
	nanogram[4][5]='X';
	nanogram[5][3]='X';
	nanogram[5][4]='X';
	nanogram[6][3]='X';
	nanogram[6][4]='X';
	nanogram[6][5]='X';
	nanogram[6][6]='X';
	nanogram[7][2]='X';
	nanogram[7][3]='X';
	nanogram[7][6]='X';
	nanogram[8][1]='X';
	nanogram[8][2]='X';
	nanogram[8][5]='X';
	nanogram[8][6]='X';
	nanogram[9][0]='X';
	nanogram[9][1]='X';
	nanogram[9][4]='X';
	nanogram[9][5]='X';

}

void llenarTablero(char matrix[FILA][COL]){

	matrix[0][1]='2';
	matrix[1][1]='2';
	matrix[2][0]='5';
	matrix[2][1]='1';
	matrix[3][0]='2';
	matrix[3][1]='6';
	matrix[4][0]='1';
	matrix[4][1]='2';
	matrix[5][1]='2';
	matrix[6][1]='4';
	matrix[7][0]='2';
	matrix[7][1]='1';
	matrix[8][0]='2';
	matrix[8][1]='2';
	matrix[9][0]='2';
	matrix[9][1]='2';

}

void vaciarMatriz(char nanogram[FILA][COL])
{
	for(int i=0;i<FILA;i++)
	{
		for(int j=0;j<COL;j++)
		{
			nanogram[i][j]='\0';
		}
	}
	for(int i=0;i<FILA;i++)
	{
		for(int j=0;j<COL;j++)
		{
			if(nanogram[i][j]== '\0')
			{
				nanogram[i][j]='-';
			}
		}
	}
}

void mostrarTablero(char nanogram[FILA][COL]){
	cout<<"|-|-|-|-|-|-|-|3|-|-|-|-|\n";
	cout<<"|-|-|-|2|2|1|5|1|4|2|-|-|\n";
	cout<<"|-|-|1|2|2|3|1|2|3|1|1|2|\n";
	for(int i=0;i<FILA;i++)
	{
		for(int j=0;j<COL;j++)
		{

			cout<<"|"<<nanogram[i][j];
		}
		cout<<"|"<<endl;
	}
}

void llenarX(int X, int Y, char nanogram[FILA][COL])
{
	Y=Y+2;
	nanogram[X][Y]='X';
}
int main() {
	int count=0;
	int X,Y;
	char originalNanogram[FILA][FILA];
	char nanogram[FILA][COL];
	originaNanogramLlenar(originalNanogram);
	vaciarMatriz(nanogram);
	llenarTablero(nanogram);
	while(count<38)
	{
		mostrarTablero(nanogram);
		cout<<"Digite la posición en X: ";
		cin>>X;
		cout<<"Digite la posición en Y: ";
		cin>>Y;
		if(originalNanogram[X][Y]=='X'){
			cout<<"Posición Correcta\n";
			llenarX(X,Y,nanogram);
			count++;
		}else{
			cout<<"Posición Incorrecta\n";
		}
	}
	mostrarTablero(nanogram);
	cout<<"Felicitaciones Juego Terminado! ";


}
