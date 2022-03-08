
#include <iostream>

//rozmer sachovnice
const int N = 8;

//index reseni (kolikate reseni)
int PocetReseni = 0;

//sachovnice 
//staci 1D pole, (index pole predstavuje sloupce a hodnota v poli predstavuje radek, na nemz je umistena dama)
// [0|1|2|3] sloupce (index), [2|1|0|3] radky (hodnota)
int chessboard[N];

//konstruktor jenz priradi sachovnici pocatecni hodnotu
void init()
{
    //hodnota -1 znaci, ze v danem sloupci dama neni umistena
    for (int i = 0; i < N; i++)
        chessboard[i] = -1;
}

void print()
{
    for (int i = 0; i < N; i++)
        std::cout << chessboard[i] << "  ";
    std::cout << " -> " << PocetReseni << "\n";
}


//funkce, kterou polozime damu do sloupce 
void location(int sloupec)
{
    //prochazeni radku
    for (int radek = 0; radek < N; radek++)
    {
        //stav obsazeni pole
        bool ok = true;
        
        //kontrola konfliktu poli s predchozimi sloupci
        // && ok znamena, ze pokud je ve sporu s jednou damou vlevo, nemusim kontrolovat ty ostatni
        for(int i = 1; i <= sloupec && ok; i++)
        {
            //do queen nacteme radek s pozici damy v danem sloupci (vzdy v levych sloupcich)
            //i jde od 1 at nekontroluji sloupec ve kterem jsem
            int queen = chessboard[sloupec - i];

            //kontrola zda s damou na soucasnem radku nejsem v konfliktu s damami v radcich levych
            //tedy stejny radek a diagonalni pole
            //Vydavam se po polich, ktere dama vlevo ohrozuje, a hledam ji. Pokud ji naleznu, bool = false, tj. konflikt nalezen
            if (queen == radek || queen == radek + i || queen == radek - i)
                ok = false;
        }
        if(ok) //pole neni ohrozovano predchozimi damami, tak pokladam damu na dany radek a jdu do dalsiho sloupce
        {
            //ulozeni pozice damy
            chessboard[sloupec] = radek;
            
            //sloupec je posledni
            if(sloupec == N - 1)
            {
                PocetReseni++;
                print();
            }    
            //posunuti na dalsi sloupec
            else if(sloupec < N - 1)
                location(sloupec + 1);

        }
    }
    
}

int main()
{
    init();
    location(0);

    return 0;
}
