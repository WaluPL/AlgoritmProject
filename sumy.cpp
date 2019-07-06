#include <iostream>
#include <cstdlib>
#include <ctime>
int n=4;//wiersz rozmiar
int m=3;//kolumna rozmiar
using namespace std;

int main(){
	int	tablica[n][m], i, j, k=0,naj=0,indeks=-1;//pamieta indeks
	int* suma = new int[k];

    srand (time(0));

    for(i = 0; i <n;i++)
        for(j = 0; j <m; j++)
	    tablica[i][j]=rand()% (5+1);//tu wypelniam tablice
            for (int i = 0; i < n; i++)
                {
                for (int j = 0; j < m; j++)
                cout << tablica[i][j] << " ";
                cout << "\n";
                }//tu o wyswietlam tablice
                for(i = 0; i < n;i++)
                {
                suma[i] = 0;
                for(j = 0; j < m; j++)
                suma[i]= suma[i]+tablica[i][j];
                cout <<" "<<k++<<" wiersz suma= "<<suma[i]<<"\n";//tu mam obliczone sumy w poszczególnych wierszach
               }
                for(int i=0; i<n; i++){
                cout <<  suma[i] << " " ;//tu wyswietlam wszytskie sumy w 1 wierszu tablica eins-wymiar
                }
               for(int i=0; i<n; i++){
               if(suma[i]>naj && suma[i]%2!=0){
               naj = suma[i];
               indeks = i;
            }
        }
    if(indeks == -1){
    cout <<endl << "indeks wiersza wynosi " << indeks;
    }
    else
    cout <<endl << "Najwieksza suma " << naj << " o indeksie " << indeks << " wiersza";


    return 0;
}
