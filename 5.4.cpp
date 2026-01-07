#include <iostream>
using namespace std;

class Student {
private:
    int id;     // 学号
    double score; // 成绩
public:
    void setData(int i, double s) {
        id = i;
        score = s;
    }

    int getId() {
        return id;
    }

    double getScore() {
        return score;
    }
};

//找出最高成绩学生
void max(Student* stuArr, int n) {
    // 假设第一个学生成绩最高
    int maxIndex = 0;
    double maxScore = stuArr[0].getScore();

    for (int i = 1; i < n; i++) {
        if (stuArr[i].getScore() > maxScore) {
            maxScore = stuArr[i].getScore();
            maxIndex = i;
        }
    }

    // 输出最高成绩学生信息
    cout << "最高成绩学生：" << endl;
    cout << "学号：" << stuArr[maxIndex].getId() << endl;
    cout << "成绩：" << maxScore << endl;
}

int main() {
    Student students[5];

    for (int i = 0; i < 5; i++) {
        int id;
        double score;
        cout << "请输入第" << i + 1 << "个学生的学号和成绩：";
        cin >> id >> score;
        students[i].setData(id, score);
    }
    max(students, 5);

    return 0;
}