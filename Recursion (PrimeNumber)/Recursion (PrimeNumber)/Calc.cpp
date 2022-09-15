#include <iostream>
#include <stack> // ���������� ���������� ��� ������ �� ������.
using namespace std;

struct Leksema // ���������, ����������� ����� ����� ���� ��������.
{
	char type; // ��� ���������� ���� "+" � �.�. ��� ����� ������ 0. 
	double value; // �������� ������ ��� �����. � ����� ������ 0.
};

bool Maths(stack <Leksema>& Stack_n, stack<Leksema>& Stack_o, Leksema& item)// �����. �������, ������� ���������� �������.
{ // ��� ���, ���� ��� ������������� ������ ���������� false.
	double a, b, res;
	if (Stack_n.size() == 0 || Stack_n.size() == 1) // �������� �� ����
	{
		cout << "\n�������� ����" << endl;
		return false;
	}
	a = Stack_n.top().value; // ���� ������� ����� �� ����� �����.
	Stack_n.pop(); // ������� ����� �� �����, �.�. �� ��� �������� � �.
	switch (Stack_o.top().type)//����������� ��� ������� �������� �� ����� � ����������
	{
	case'+':
		b = Stack_n.top().value; // �������������� 2-� �������
		Stack_n.pop(); // ������� ��� �� ����� (��� ������ ������� pop()).
		res = a + b;
		item.type = '0'; // ��� ��� ����� � ���������, ��� ����� 0.
		item.value = res; // ��������� ������ ���������.
		Stack_n.push(item); // �������� ������(��������� ��������) � ���� �����.
		Stack_o.pop(); // �������� ���� ����������.
		break;
	case '-':
		b = Stack_n.top().value;
		Stack_n.pop();
		res = b - a; // �������� � � � ��� ����������� ����������� "-"
		item.type = '0';
		item.value = res;
		Stack_n.push(item);
		Stack_o.pop();
		break;
	case '*':
		b = Stack_n.top().value;
		Stack_n.pop();
		res = a * b;
		item.type = '0';
		item.value = res;
		Stack_n.push(item);
		Stack_o.pop();
		break;
	case '/':
		b = Stack_n.top().value;
		if (a == 0)
		{
			cerr << "\n�� 0 ������ ������!" << endl; // cerr ������ ��� ���� ����� � ��������.
			return false; // ��� � ���������� bool.
		}
		else {
			Stack_n.pop();
			res = (b / a);
			item.type = '0';
			item.value = res;
			Stack_n.push(item);
			Stack_o.pop();
			break;
		}
	default:
		cerr << "\n������!" << endl;
		return false;
		break;
	}
	return true;
}

int getRang(char Ch)// ������� ��� �����������. 1 ��� +-. 2 ��� */. 
{
	if (Ch == '+' || Ch == '-') return 1;
	if (Ch == '*' || Ch == '/') return 2;
	else return 0; // ���������� ��� ������
}

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "�����������!\n������� ���������: ";
	char Ch; // ������ ����������, � ������� ����� ������� �������������� ������.
	double value; // ���������� ��� ���� ����.
	bool flag = 1; // ��� ���� ���� ����� ���� ������ ��������� � �������������� �����.
	stack <Leksema> Stack_n; // ���� �����.
	stack <Leksema> Stack_o; // ���� ��������.
	Leksema item; // ������ � ������� ����� �������� ���������.
	while (1)
	{
		Ch = cin.peek(); // ������� ������ �� ������ ������.
		if (Ch == '\n') break; // ����� ������(\n) ����� �� �����.
		if (Ch == ' ') {
			cin.ignore(); // ���������� ����� ��������.
			continue;
		}
		if (Ch >= '0' && Ch <= '9' || Ch == '-' && flag == 1) {
			cin >> value;
			item.type = '0';
			item.value = value;
			Stack_n.push(item); // ���������� ����� � ���� ��������.
			flag = 0; // �������� ���� ����� ������ �������� � �������� �������. 
			continue;
		}
		if (Ch == '+' || Ch == '-' && flag == 0 || Ch == '*' || Ch == '/')
		{
			if (Stack_o.size() == 0)
			{ // ���� ���� � ���������� ����
				item.type = Ch;
				item.value = 0;
				Stack_o.push(item); // ������ �������� � ���� ��������.
				cin.ignore();
				continue;
			}
			if (Stack_o.size() != 0 && getRang(Ch) > getRang(Stack_o.top().type))//���� ���� � ���������� �� ����, �� ��������� ������� �������� ���� ������� � ����� � ����������
			{
				item.type = Ch;
				item.value = 0;
				Stack_o.push(item); // ���������� ������ � ����.
				cin.ignore();
				continue;
			}
			if (Stack_o.size() != 0 && getRang(Ch) <= getRang(Stack_o.top().type))//���� ���� � ���������� �� ����, �� ��������� ������� �������� ���� ���� ����� ������� � ����� � ����������
			{ // ��� ���� ���� �������� �������� ����� �������� 2+2*2+2
				if (Maths(Stack_n, Stack_o, item) == false) {// ��������
					system("pause");
					return 0;
				}
				continue;
			}
		}
		if (Ch == '(') { // ���� ��������� ������. ������
			item.type = Ch;
			item.value = 0;
			Stack_o.push(item); // ���������� � � ���� ��.
			cin.ignore();
			continue;
		}
		if (Ch == ')' && Stack_n.size() != 0) {
			while (Stack_o.top().type != '(') { // ��� ���� ����� ���� �� ����� ������
				if (Maths(Stack_n, Stack_o, item) == false) {
					system("pause");
					return 0;
				}
				else continue; // ���� �� ����, ��� ������.
			}
			Stack_o.pop();
			cin.ignore();
			continue;
		}

		else
		{ // ���� �������� ��� ��� - �� �� ��.
			cout << "\n�������� ����" << endl;
			system("pause");
			return 0;
		}
	}
	while (Stack_o.size() != 0) {//�������� �����. ������� �� ��� ���, ���� � ����� � ���������� �� ����� 0 ���������
		if (Maths(Stack_n, Stack_o, item) == false) {
			system("pause");
			return 0;
		}
		else continue;
	}
	cout << "�����: " << Stack_n.top().value << endl;
	return 0;
}
