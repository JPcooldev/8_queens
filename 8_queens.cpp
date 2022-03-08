
#include <iostream>

//rozmer sachovnice
const int N = 8;

//sachovnice 
//staci 1D pole, (index pole predstavuje sloupce a hodnota v poli predstavuje radek, na nemz je umistena dama)
// [0|1|2|3] sloupce (index), [2|1|0|3] radky (hodnota)
int chessboard[N]

//konstruktor jenz priradi sachovnici pocatecni hodnotu
void init()
{
    //hodnota -1 znaci, ze v danem sloupci dama neni umistena
    for (int i = 0; i < N; i++)
        chessboard[i] = -1;
}

//funkce, kterou polozime damu do sloupce 
void location(int sloupec)
{
    
}

int main()
{
    init();
    location(0);
}