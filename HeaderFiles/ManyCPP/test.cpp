//#include "pch.h"
//#include <map>      // STL ��������� map
//int main(void)
//{   
//    map <char, int> chars; // ������ ���������
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
//                chars[buffer[i]]++; // ������� ������ ������
//            }
//
//            begin = chars.begin(); // �������� � begin ������ ����������
//            end = chars.end();  // �������� � end ����� ����������
//
//            for (at = begin; at != end; at++) // ��� �� ����������.
//            {
//                cout << at->first << '=' << at->second << endl;// ������� ���������
//            }
//        }
//        free(buffer);
//        fclose(file_r);
//    }
//}
//
////��� ������� map
////map < <L>, <R> > <���>;
////<L> � ���� ��� ������ ����� ���������� � �������� �����.
////<R> � ���� ��� ������ �������������� ��������� � ��������.
////map <string, int> mp; // ������
////� ����� ������ :
////���� � ������.
////�������� � �����.
////��� �������� map ��� ��� �������� ����� ����� �������� ����.
//
////��������� ��� map
////������������� ���������� ���� �� ������� ���, ���� ��� ����������� ����������� � ���� �����������.
////�������� ���������, ��� ������ ���������� ��� :
////map <��� ������> ::iterator <���>;
////<��� ������> � <string, int> ��������.
////� ������� ��� ����� ������������ ��� ��������(it � ��������) :
////    ����� ��������� � ����� ����� ������� ��� : it->first.
////    ����� ��������� � �������� ������ ����� ������� ��� : it->second.
////
////    ������ ���������� � �����(...->first) �������� ��� ��������, � ��� �������� ����� ������� �������� ������(...->second) �����.
//
////int main() 
////{
////    setlocale(0, "");
////    map <int, int> mp;
////
////    cout << "������� ���������� ���������: "; 
////    int n; 
////    cin >> n;
////
////    for (int i = 0; i < n; i++) 
////    {
////        cout << i << ") "; 
////        int a; 
////        cin >> a;
////        mp[a] = i;  // ��������� ����� ��������
////    }
////
////    map <int, int> ::iterator it = mp.begin();
////    cout << "� ��� ��� ��������������: " << endl;
////    for (int i = 0; it != mp.end(); it++, i++) {  // ������� ��
////        cout << i << ") ���� " << it->first << ", �������� " << it->second << endl;
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

// ����� ����������� ����, � ������� �� ��� ���� ++.