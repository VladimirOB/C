//#include <iostream>
//#include <stdio.h>
//#include<fstream>
//using namespace std;
//
//const int n = 8;// ������ ����
//int count_test = 0;// ���������� ������
//int mincountstep = n + 1; //���������� �����
//int frtest[n]; //����������� �����
//int fr[n]; //���������� �����������
//
//bool check(int nf)
//// �������� ����� �����
//{
//    if (fr[nf] < 0)  return false; //�� ������ ������, ����� �� ��������� ���� ��� ��� ������
//    for (int i = 0; i < n && fr[i] >= 0; i++) {
//        if (i == nf) continue;
//        if (fr[nf] == fr[i]) return false;  // (�����������) 
//        if ((nf + fr[nf]) == (i + fr[i])) return false; // ���������� ���������
//        if ((nf - fr[nf]) == (i - fr[i])) return false; // ���������� ���������
//    }
//    return true; //���� ���� ��������
//}
//
//void calc_min_strok()
//// ���������� ���������� ����� � ���������� ������������
//{
//    int countstep = 0; // ���������� �����
//    for (int i = 0; i < n; i++) {
//        if (frtest[i] != fr[i]) countstep++;
//    }
//    if (mincountstep > countstep) mincountstep = countstep;
//
//}
//
//bool line_up(int i)
////���������� ������� ��������� ������ (���� �����������)
//{
//    if (i > n - 1) return false;
//    for (int j = 0; j < n; j++) {
//        fr[i] = j;
//        if (check(i) == true) {
//            if (i == n - 1) { //���� ����� �� ��������� ������� � �� ������
//                calc_min_strok();
//            }
//            else {
//                line_up(i + 1);
//            }
//        }
//        fr[i] = -1;
//    }
//    return false;
//}
//
//int main()
//{
//    cin >> count_test;
//    //��������� ���������� �������
//    for (int test = 0; test < count_test; test++) {
//        mincountstep = n + 1;
//        for (int i = 0; i < n; i++) fr[i] = -1;
//        //���� ������ �����
//        for (int i = 0; i < n; i++) {
//            cin >> frtest[i];
//            frtest[i]--;
//        }
//        line_up(0);
//        cout << mincountstep;
//    }
//
//    return 0;
//}