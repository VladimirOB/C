//#include "pch.h"
//
////3. ����������� ������� ��������� ����� a � ������� �� ����� ��� ������� ����� � ���������[2; a]
//
//    //for (int i = 3; i * i <= n; i += 2)
//int prime(int n, int pos,int i)
//{
//    if (n == 2)
//        return true;
//    if (n < 2 || n % 2 == 0)
//        return false;
//    while (i * i <= n) {
//        if (n % i == 0)
//            return false;
//        return prime(n, pos + 1, i += 2);
//    }
//    return true;
//}
//
//int main()
//{
//    int cnt, n,i=3;
//    cin >> cnt;
//    for (n=2; n <= cnt; n++)
//        if (prime(n,0,i))
//      cout << n << " ";
//    
//    return 0;
//}