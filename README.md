# Markdown vježba
---
## Program
---
```cpp
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
```
### Pokretanje programa
- Preuzmite [DevCPP](https://sourceforge.net/projects/orwelldevcpp/)
- Kreirajte novu datoteku i kopirajte kod unutra
- Prevedite
- Pokrenite

### TODO
Todo lista za nadopunu programa:
[X] Ispisati poruku za unos broja
[X] Omogućiti unos broja
[X] Provjeriti je li broj troznamenkast
[X] Ispisati sumu znamenki broja
[ ] Pojesti maneštru

<a href="https://github.com/DontForgetToRC/markdown-zadatak#">Povratak na vrh</a>