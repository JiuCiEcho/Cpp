# define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

/*//�Ƚ������������ֵ
int main(){
	int a,b,c;
	cout << "�������һ������" <<endl;
	cin >> a;
	cout << "������ڶ�������" << endl;
	cin >> b;
	cout << "���������������" << endl;
	cin >> c;
	int temp = a > b ? a : b;
	int d = temp > c ? temp : c;
	cout << "���ֵ��" << d << endl;
	return 0;
}*/

/*//������󷽳�ax2+bx+c=0�ĸ�
int main() {
	int a, b, c;
	cout << "������a��ֵ��" << endl;
	cin >> a;
	cout << "������b��ֵ��" << endl;
	cin >> b;
	cout << "������c��ֵ��" << endl;
	cin >> c;
	int drt = pow(b, 2) - 4 * a * c;
	if (a == 0 and b == 0)
	{
		cout << "�����޽�" << endl;
		return 0;
	}
	if (a == 0) {
		cout << "�˷��̵ĸ�Ϊ" << (-1) * c / b << endl;
	}
	if (drt > 0) {
		cout << "��һԪ���η�����������" << endl;
		int x1 = (-b + sqrt(drt)) / (2 * a);
		int x2 = (-b - sqrt(drt)) / (2 * a);
		cout << "�˷��̵�һ����Ϊ" << x1 << "��һ����Ϊ" << x2 << endl;
	}
	else if (drt == 0) {
		cout << "��һԪ���η�����һ����" << endl;
		int x1 = (-b) / (2 * a);
		cout << "�˷��̵�һ����Ϊ" << x1 << endl;
	}
	else {
		cout << "��һԪ���η���û�и�" << endl;
	}
	return 0;
}*/

/*//��ӡ�ɼ��ȼ�

int main() {
	cout << "��������ĳɼ���" << endl;
	int grade = 0;
	cin >> grade;
	if (grade <= 100 and grade >= 80) {
		cout << "��ĳɼ��ȼ�Ϊ��A" << endl;
	}
	else if (grade < 80 and grade >= 60) {
		cout << "��ĳɼ��ȼ�Ϊ��B" << endl;
	}
	else {
		cout << "��ĳɼ��ȼ�Ϊ��D" << endl;
	}
	return 0;
}*/

//�ж��Ƿ񹹳�������

int main() {
	double a, b, c;
	cout << "������a��ֵ��" << endl;
	cin >> a;
	cout << "������b��ֵ��" << endl;
	cin >> b;
	cout << "������c��ֵ��" << endl;
	cin >> c;
	if (a + b > c and a + c > b and b + c > a and a - b < c and a - c < b and b - c < a) {
		cout << "����ֵ���Թ���������" << endl;
	}
	else {
		cout << "����ֵ�����Թ���������" << endl;
	}
	return 0;
}



