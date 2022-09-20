// ConsoleApplication2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
struct Student {
	const float wt[4] = { 0.1, 0.2, 0.3, 0.4 };
	int stu[4];
	float sumNumber() {
		float sum = 0;
		for (int i = 0; i < 4; i++) {
			sum += stu[i] * wt[i];
		}
		return sum;
	}
};
Student* newStuden() {
	return new Student;
}

int main()
{
	Student* A;
	Student* B;
	A = newStuden();
	B = newStuden();
	A->stu[0] = 70;
	B->stu[0] = 70;
	A->stu[1] = 70;
	B->stu[1] = 70;
	A->stu[2] = 70;
	B->stu[2] = 70;
	A->stu[3] = 70;
	B->stu[3] = 70;
	printf("A  is %f\n", A->sumNumber());
	printf("B  is %f\n", B->sumNumber());

	if (A->sumNumber() == B->sumNumber()) {
		printf("same");
	}
	else if (A->sumNumber() > B->sumNumber()) {
		printf("A win");
	}
	else if (A->sumNumber() < B->sumNumber()) {
		printf("B win");
	}
	delete A;
	delete B;
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
