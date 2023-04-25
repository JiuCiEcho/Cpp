# define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

/*//比较三个数的最大值
int main(){
	int a,b,c;
	cout << "请输入第一个数：" <<endl;
	cin >> a;
	cout << "请输入第二个数：" << endl;
	cin >> b;
	cout << "请输入第三个数：" << endl;
	cin >> c;
	int temp = a > b ? a : b;
	int d = temp > c ? temp : c;
	cout << "最大值是" << d << endl;
	return 0;
}*/

/*//编程序，求方程ax2+bx+c=0的根
int main() {
	int a, b, c;
	cout << "请输入a的值：" << endl;
	cin >> a;
	cout << "请输入b的值：" << endl;
	cin >> b;
	cout << "请输入c的值：" << endl;
	cin >> c;
	int drt = pow(b, 2) - 4 * a * c;
	if (a == 0 and b == 0)
	{
		cout << "方程无解" << endl;
		return 0;
	}
	if (a == 0) {
		cout << "此方程的根为" << (-1) * c / b << endl;
	}
	if (drt > 0) {
		cout << "此一元二次方程有两个根" << endl;
		int x1 = (-b + sqrt(drt)) / (2 * a);
		int x2 = (-b - sqrt(drt)) / (2 * a);
		cout << "此方程的一个根为" << x1 << "另一个根为" << x2 << endl;
	}
	else if (drt == 0) {
		cout << "此一元二次方程有一个根" << endl;
		int x1 = (-b) / (2 * a);
		cout << "此方程的一个根为" << x1 << endl;
	}
	else {
		cout << "此一元二次方程没有根" << endl;
	}
	return 0;
}*/

/*//打印成绩等级

int main() {
	cout << "请输入你的成绩：" << endl;
	int grade = 0;
	cin >> grade;
	if (grade <= 100 and grade >= 80) {
		cout << "你的成绩等级为：A" << endl;
	}
	else if (grade < 80 and grade >= 60) {
		cout << "你的成绩等级为：B" << endl;
	}
	else {
		cout << "你的成绩等级为：D" << endl;
	}
	return 0;
}*/

//判断是否构成三角形

int main() {
	double a, b, c;
	cout << "请输入a的值：" << endl;
	cin >> a;
	cout << "请输入b的值：" << endl;
	cin >> b;
	cout << "请输入c的值：" << endl;
	cin >> c;
	if (a + b > c and a + c > b and b + c > a and a - b < c and a - c < b and b - c < a) {
		cout << "三个值可以构成三角形" << endl;
	}
	else {
		cout << "三个值不可以构成三角形" << endl;
	}
	return 0;
}



