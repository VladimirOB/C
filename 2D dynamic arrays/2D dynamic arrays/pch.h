#ifndef PCH_H
#define PCH_H

// использование математических констант, современный стиль
#include <corecrt_math_defines.h>

#include <iostream>
#include <iomanip> // дл€ манипул€торов вывода setw(), setprecision()
#include <Windows.h> // дл€ поддержки русского €зыка "тут"

using namespace std;

//объ€вление символической константы - кодовой страницы
#define rus 1251

//объ€вление константы - команды включени€ цвета в консоли
// серые буквы на черном фоне
#define GRAY_ON_BLACK "color 07"

//дл€ единообрази€ кодируем также команду очистки консоли
#define CLEAR "cls"



#endif //PCH_H
