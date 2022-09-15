//#include <iostream>
//#include <string>
//#include <cstdlib>
//#include <iterator>
//#include <unordered_set>
//#include <fstream>
//#include <regex>
//
//int main()
//{
//    std::ifstream ifs{ "rep.txt" }; // файл
//    if (ifs.is_open())
//    {
//        std::unordered_set<std::string> sst; // множество для хранения найденных слов
//        std::regex rgx{ "[А-Яа-яЁё\\d[:alpha:]]+" }; // маска для поиска слов
//        std::string str{ std::istreambuf_iterator<char>{ifs.rdbuf()}, {} }, sres; // чтение всего файла в string
//        ifs.close();
//        std::ssub_match suf;
//        for (std::sregex_iterator ib{ str.begin(), str.end(), rgx }, ie; ib != ie; ++ib) // цикл поиска слов по маске
//        {
//            sres += ib->prefix(); // копируем префикс найденного слова в выходную строку
//            if (sst.insert(ib->str()).second) // если слово отсутствует в множестве то копируем слово в выходную строку
//            {
//                sres += ib->str();
//            }
//            suf = ib->suffix(); // запоминаем суффикс слова
//        }
//        sres += suf; // копируем суффикс в выходную строку
//        std::cout << sres << std::endl; // вывод результата
//    }
//    else
//    {
//        std::cerr << "Unable to open file\n";
//    }
//}