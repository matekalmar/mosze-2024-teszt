#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //NELEMENTS helyett N_ELEMENTS
    std::cout << "1-100 ertekek duplazasa"; //'' helyett "" és a sor végén hiányzó ;
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = (i + 1) * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) //helytelen for ciklus
    {
        std::cout << "Ertek:" << b[i] << "\n"; //hiányoznak az értékek és a ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; // atlag erteke legyen 0
    for (int i = 0; i < N_ELEMENTS; i++) //vessző helyett pontosvessző
    {
       atlag += b[i]; //pontosvessző hiányzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    //az allokált memóriát fel kell szabadítani
    delete[] b;
    return 0;
}
