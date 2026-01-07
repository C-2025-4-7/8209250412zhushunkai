#include"student.h"
int main()
{
	Student stud, stud1;
	stud.set_value(1001, "ZhangSan", 'm');
	stud1.set_value(007, "tcg", 'm');
	cout << "stu信息" << endl;
	stud.display();
	cout << endl << "stud1信息：" << endl;
	stud1.display();
	return 0;
}