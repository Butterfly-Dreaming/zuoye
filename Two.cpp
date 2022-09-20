// Two.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{

	int cqA = 70, sjA = 70, bsA = 70, jkA = 70;
	float scoreA = cqA * 0.1 + sjA * 0.2 + bsA * 0.3 + jkA * 0.4;

	int cqB = 90, sjB = 80, bsB = 70, jkB = 60;
	float scoreB = cqB * 0.1 + sjB * 0.2 + bsB * 0.3 + jkB * 0.4;
	printf("scoreA = %f \n", scoreA);
	printf("scoreB = %f \n", scoreB);

	if (scoreA > scoreB)
		printf("student A wins");
	else if (scoreA < scoreB)
		printf("student B wins");
	else
		printf("same");


	return 0 ;
}

