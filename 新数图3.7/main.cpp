#include<iostream>
using namespace std;
int a[5][6] = {
	{ 1601,55,66,77,88,99 },
	{ 1602,56,68,98,79,67 },
	{ 1603,87,87,67,76,45 },
	{ 1604,97,92,89,90,82 },
	{ 1605,87,43,61,55,63 } };
int studentAvg(int grade[], int size);
int courseAvg(int size);

int main()
{
	int student = 5;
	int size = 5;
	for (int i = 0; i < student; i++) 
	{
		studentAvg(a[i], size);
		cout << "ѧ��Ϊ��" << a[i][0] << "  " << "��ѧ��ƽ����Ϊ��" << studentAvg(a[i], size) << endl;
	}
	cout << "������ѧ�ƴ��ţ�\n";
	cin >> size;
    courseAvg(size);
	cout << "ѧ�Ƶ�ƽ����Ϊ��" << courseAvg(size) << endl;
}

int studentAvg(int grade[],int size)
{
	int num = 0;
	for (int i = 1; i < size+1; i++)
		num += grade[i];
	return num/5;
}
int courseAvg(int size)
{
	int *ptr = &a[0][0];
	int num = 0;
	for (int i = 0; i < 5; i++)
	{
		ptr = a[i];
		num += *(ptr + size);
	}
	return num/5;
}