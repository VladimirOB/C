#include "pch.h"
#include <map>      // STL ��������� map

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

int main(void)
{
    char file_name[40];
    puts("Enter source file name:");
    cin >> file_name;
    FILE* file_r = fopen(file_name, "rb");
    if (file_r != NULL)
    {
        int file_size;
        fseek(file_r, 0, SEEK_END);
        file_size = ftell(file_r);
        char* buffer = (char*)malloc(file_size);
        if (buffer != NULL)
        {
            fseek(file_r, 0, SEEK_SET);
            fread(buffer, sizeof(char), file_size, file_r);

            int counter[26]; // ������ ��������� � ������ �����.
            //��������� ������� ���������
            for (int i = 0; i < 26; i++)
            {
                counter[i] = 0;
            }
            for (int i = 0; i < file_size; i++)
            {
                if (buffer[i] >= 'a' && buffer[i] <= 'z')
                {
                    char letter = (buffer[i]);
                    counter[letter - 'a']++;
                }
            }
            free(buffer);
            for (int i = 0; i < 26; i++)
            {
                if (counter[i] != 0)
                {
                    char letter = i + 'a';
                    cout << letter << "=" << counter[i] << endl;
                }
            }
            
            
        }
        
        fclose(file_r);
    }
}
