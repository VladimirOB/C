//#include "pch.h"
//
///*1. ������������ ������ ������, ��������� ��������� ������� �� ������ ������������ �� ���������� �����.
//������: My granny have a 3 appls, but she need 300.*/
//
//int main()
//{
//        char str[400];
//        cout << "Enter a string:" << endl;
//        cin.getline(str, 399);
//        bool is_word_found = false;
//        int count = 0,cnt=0;
//        int mark = 0;
//        int space = 0;
//        for (int i = 0; str[i] !=0 ; i++)
//        {
//            switch (is_word_found)
//            {
//                //�������� �� �����.
//            case true:
//                
//                if (str[i] == ' ')
//                {
//                    i--;
//                    is_word_found = false;
//                }
//                else //������ ������� ������.
//               {  
//                   
//                   if (str[i] == ',' && str[++i] ==',') // ++ ����� i ������ �� ������������.  //  ����� �� ���� ���� ������� ������
//                       mark++;
//                   if (str[i] == '.' && str[++i] == '.') //  ����� �� ���� ���� ����� ������.
//                       mark++;
//                   if (str[i] == ':' && str[++i] == ':') //  ����� �� ���� ���� ����� ������.
//                       mark++;
//                   if (str[i] == '!' && str[++i] == '!') 
//                       mark++;
//                   if (str[i] == '?' && str[++i] == '?') 
//                       mark++;
//               }
//               break;
//                
//                // �������� �� ������������ ( �� �������� )
//            case false:
//                if (str[i] != ' ')
//                     //(str[i] != (str[i] >= '�' && str[i] <= '�')))
//                     // wstring ru = L"�������������������������������������Ũ��������������������������";
//                {
//                    if ((str[i] >= 'A') && (str[i] <= 'z') || (str[i] >= '0') && (str[i] <= '9'))
//                    cnt++;
//                    count++;
//                    i--;
//                    is_word_found = true; // ���� !is_word_found
//                }
//                break;
//            }
//            while (str[i] == ' ' && str[++i] == ' ' && str[i] != '\0')
//                space++;
//        }
//        
//        if (count == cnt && str[strlen(str) - 1] == '.' && str[strlen(str) - 2] != '.'  && mark == 0 && space ==0
//            ||
//            count == cnt && str[strlen(str) - 1] == '!' && str[strlen(str) - 2] != '!' && mark == 0 && space == 0
//            ||
//            count == cnt && str[strlen(str) - 1] == '?' && str[strlen(str) - 2] != '?' && mark == 0 && space == 0
//            )
//            {
//                cout << "String in english" << endl;
//            }
//             
//        else
//            cout << "String not in english" << endl;
//}