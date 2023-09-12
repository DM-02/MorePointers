//
//  main.cpp
//  Pointer lesson 2
//
//  Created by Дмитрий Сергеевич on 12.09.2023.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    setlocale (LC_ALL, "RU");
    int n, m;
    
    // нейтральный адрес
    int* pointer;
    
    // pointer = 0; // рабочий, но неудобный способ
    //pointer = NULL; // Более удобный способ, но по факту - костыль
    pointer = nullptr; // самый эффективный и правильный способ создания нейтрального указателя
    
    
    if (pointer != nullptr)
    std::cout << pointer << std::endl;
    else
        std::cout << "Указатель не инициализирован\n";
    
    // Модификации доступа указателей
    n = 17;
    // Указатель на коснстанту. Может быть объявлен не инициализированым и перенаправляться на другие области памяти, но с его помощью НЕВОЗМОЖНО поменять значение памяти на которую он направлен
    сonst int* pn1;
    pn1 = &n;
    // *pn1 = 5; // ОШИБКА!
    std::cout << *pn1 << std::endl;
    
    // Константный указатель или Указатель - константа
    // Не может быть объявлен без инициализации и не может быть перенаправлен на другие области память, но с его пощью можно менять память на которую он направлен
    int* const pn2 = &n;
    // pn2 = &m; // Ошибка!
    *pn2 = 15;
    std::cout << *pn2 << std::endl;
    
     //Константный указатель на константу. Не может быть объявлен без инициализации и не может быть перенаправлен на другую область памяти с его помощью так же невозможно менять память на которую он направле.
    const int* const pn3 = &n;
    //pn3 = &m // Ошибка!
    //*pn3 = 42; // Ошибка!
    std::cout << *pn3 << std::endl;
    
    
    

    
    
    
    
    
    
    return 0;
}
