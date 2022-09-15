//#include "pch.h"
//#include <map>      // STL контейнер map
//int main(void)
//{   
//    map <char, int> chars; // создал контейнер
//    map <char, int>::iterator begin, end, at;
//    char file_name[40];
//    puts("Enter source file name:");
//    cin >> file_name;
//    FILE* file_r = fopen(file_name, "rb");
//    if (file_r != NULL)
//    {
//        int file_size;
//        fseek(file_r, 0, SEEK_END);
//        file_size = ftell(file_r);
//        char* buffer = (char*)malloc(file_size);
//        if (buffer != NULL)
//        {
//            fseek(file_r, 0, SEEK_SET);
//            fread(buffer, sizeof(char), file_size, file_r);
//
//            for (unsigned int i = 0; i < file_size; i++)
//            {
//                chars[buffer[i]]++; // считаем каждый символ
//            }
//
//            begin = chars.begin(); // закинули в begin начало контейнера
//            end = chars.end();  // закинули в end конец контейнера
//
//            for (at = begin; at != end; at++) // идём по контейнеру.
//            {
//                cout << at->first << '=' << at->second << endl;// выводим результат
//            }
//        }
//        free(buffer);
//        fclose(file_r);
//    }
//}
//
////Как создать map
////map < <L>, <R> > <имя>;
////<L> — этот тип данных будет относиться к значению ключа.
////<R> — этот тип данных соответственно относится к значению.
////map <string, int> mp; // пример
////В нашем случае :
////Ключ — строка.
////Значение — число.
////При создании map все его элементы будут иметь значение нуля.
//
////Итераторы для map
////Использование итераторов одна из главных тем, если вам понадобится оперировать с этим контейнером.
////Создание итератора, как обычно происходит так :
////map <тип данных> ::iterator <имя>;
////<тип данных> — <string, int> например.
////С помощью его можно использовать две операции(it — итератор) :
////    Чтобы обратится к ключу нужно сделать так : it->first.
////    Чтобы обратится к значению ячейки нужно сделать так : it->second.
////
////    Нельзя обращением к ключу(...->first) изменять его значение, а вот изменять таким образом значение ячейки(...->second) легко.
//
////int main() 
////{
////    setlocale(0, "");
////    map <int, int> mp;
////
////    cout << "Введите количество элементов: "; 
////    int n; 
////    cin >> n;
////
////    for (int i = 0; i < n; i++) 
////    {
////        cout << i << ") "; 
////        int a; 
////        cin >> a;
////        mp[a] = i;  // добавляем новые элементы
////    }
////
////    map <int, int> ::iterator it = mp.begin();
////    cout << "А вот все отсортированно: " << endl;
////    for (int i = 0; it != mp.end(); it++, i++) {  // выводим их
////        cout << i << ") Ключ " << it->first << ", значение " << it->second << endl;
////    }
////
////    system("pause");
////    return 0;
////}


/*int letters[26]
	for	(int i = 0; i < 26; i++)
	{
		letters[i] = 0;
	}
	char temp[100];
	for	(int i = 0; i < file_size; i++)
	{

	}
*/

// когда встречается байт, в массиве по его коду ++.