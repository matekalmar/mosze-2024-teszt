#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //NELEMENTS helyett N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' //'' helyett "" és a sor végén hiányzó ;
    for (int i = 0;) //helytelen for ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //helytelen for ciklus
    {
        std::cout << "Ertek:" //hiányoznak az értékek és a ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // atlag erteke legyen 0
    for (int i = 0; i < N_ELEMENTS, i++) //vessző helyett pontosvessző
    {
        atlag += b[i] //pontosvessző hiányzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    //az allokált memóriát fel kell szabadítani
    return 0;
}
