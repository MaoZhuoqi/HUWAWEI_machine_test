
#include <iostream>
#include <list>
#include <bitset>
#include <iomanip>

using namespace std;

//�ݹ���������ƺ���
void BinaryRecursion(int n)
{
	int a;
	a = n % 2; // ȡ��
	n = n >> 1;  //����һλ �൱�ڳ���2
	if (0 != n)
	{
		BinaryRecursion(n);
	}
	cout << a;
}

//ʹ������ת��������
void BinaryVector(int n)
{
	int temp;
	temp = n;
	list <int> L;
	while (0 != temp)
	{
		L.push_front(temp % 2);
		temp = temp >> 1;
	}

	for (list <int>::iterator iter = L.begin(); iter != L.end(); iter++)
	{
		cout << *iter;
	}
	cout << endl;
}

//һ�㷽����32λ������1��������
void Binarycout(int n)
{
	for (int i = 31; i >= 0; i--)
	{
		cout << ((n >> i) & 1);
	}

	cout << endl;
}

//ʹ��bitsetת��������
void BinaryBitset(int n)
{
	cout << bitset<sizeof(int) * 8>(n) << endl;
}

int main()
{
	int a = 1045, b = 2;
	int c;
	c =1000000000;


	cout << setw(20) << "BinaryBitset(" << c << "):";
	BinaryBitset(c);

	return (0);
}