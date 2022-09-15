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
//    std::ifstream ifs{ "rep.txt" }; // ����
//    if (ifs.is_open())
//    {
//        std::unordered_set<std::string> sst; // ��������� ��� �������� ��������� ����
//        std::regex rgx{ "[�-��-���\\d[:alpha:]]+" }; // ����� ��� ������ ����
//        std::string str{ std::istreambuf_iterator<char>{ifs.rdbuf()}, {} }, sres; // ������ ����� ����� � string
//        ifs.close();
//        std::ssub_match suf;
//        for (std::sregex_iterator ib{ str.begin(), str.end(), rgx }, ie; ib != ie; ++ib) // ���� ������ ���� �� �����
//        {
//            sres += ib->prefix(); // �������� ������� ���������� ����� � �������� ������
//            if (sst.insert(ib->str()).second) // ���� ����� ����������� � ��������� �� �������� ����� � �������� ������
//            {
//                sres += ib->str();
//            }
//            suf = ib->suffix(); // ���������� ������� �����
//        }
//        sres += suf; // �������� ������� � �������� ������
//        std::cout << sres << std::endl; // ����� ����������
//    }
//    else
//    {
//        std::cerr << "Unable to open file\n";
//    }
//}