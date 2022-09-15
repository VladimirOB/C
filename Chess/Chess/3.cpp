//#include "pch.h"
//
//// ������� ������� ������
//int queen[8]; // �������� ��������� �� 0 �� 7 ������������
//
//// ���������� ������� ������������ ��� (�����������, ���������)
//// ���������, ���� �� ����� �� (p, q) ������� (h, v)
//// ���������� true, ���� ����
//bool strikes(int p, int q, int h, int v)
//{
//    return (q == v) || (p - h == q - v) // ���������, ��������� 
//        || (p - h == v - q) || (p == h); // ���������, �����������
//}
//
//// ���������, ���� �� ����� ���� ����������� h ������� (h, v)
//// ���������� true, ���� �� ���� ("������� �������")
//bool good(int h, int v)
//{
//    for (int p = 0; p < h; ++p)
//        if (strikes(p, queen[p], h, v)) return false;
//
//    // �� ���� �� ����
//    return true;
//}
//
//// ����������� ������� ������ � queen � ���� ��������� �����
//void printBoard()
//{
//    cout << "\n----------------\n";
//    for (int h = 7; h > -1; --h) // ����������� ���� ����� �����
//    {
//        for (int v = 0; v < 8; ++v) // ��������� ���� ����� �������
//            cout << '|' << (v == queen[h] ? 'Q' : (h + v) % 2 == 0 ? '#' : ' ');
//
//        cout << '\n'; // ������� ������
//    }
//
//    cout << "----------------\n";
//}
//
//
//// �������� �������: ������� 16� �������
//// ������� ����� ������������� ���� �����������
//// ����������-������� � ����� ����� ��������� �� ���������
//void solve()
//{
//    int found = 0; // ������� ��� �����
//    for (int a = 0; a < 8; ++a)
//    {
//        queen[0] = a;
//        for (int b = 0; b < 8; ++b)
//            if (good(1, b))
//            {
//                queen[1] = b;
//                for (int c = 0; c < 8; ++c)
//                    if (good(2, c))
//                    {
//                        queen[2] = c;
//                        for (int d = 0; d < 8; ++d)
//                            if (good(3, d))
//                            {
//                                queen[3] = d;
//                                for (int e = 0; e < 8; ++e)
//                                    if (good(4, e))
//                                    {
//                                        queen[4] = e;
//                                        for (int f = 0; f < 8; ++f)
//                                            if (good(5, f))
//                                            {
//                                                queen[5] = f;
//                                                for (int g = 0; g < 8; ++g)
//                                                    if (good(6, g))
//                                                    {
//                                                        queen[6] = g;
//                                                        for (int h = 0; h < 8; ++h)
//                                                            if (good(7, h))
//                                                            {
//                                                                queen[7] = h;
//                                                                // ���� �������, �����������
//                                                                cout << '\n' << ++found;
//                                                                printBoard();
//                                                            }
//                                                    }
//                                            }
//                                    }
//                            }
//                    }
//            }
//    }
//}
//
//
//int main()
//{
//    solve();
//    cout << endl;
//    return 0;
//}