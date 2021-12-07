#include <iostream>

int main() {
    
    int broj, suma = 0;
    do {
        
        std::cout << "Unesite troznamenkasti broj: ";
        std::cin >> broj;
        
    } while (broj < 100 || broj > 999);
    
    suma += broj % 10; // jedinice
    suma += (broj / 10) % 10; // desetice
    suma += (broj / 100) % 100; // stotice
    
    std::cout << suma << std::endl;
    
    system("read -p 'Press enter to continue...' var");
    
    return 0;
    
}