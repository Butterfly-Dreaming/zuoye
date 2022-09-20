#include <stdio.h>
void One() {
	int cq = 70;
	int sj = 70, bs = 70, jk = 70;
	float score = cq * 0.1;
	score = cq * 0.1 + sj * 0.2 + bs * 0.3 + jk * 0.4;

	printf("score = %f \n", score);

	printf("student A wins");


	return;
}
void Two() {


	
	
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


		return ;
	

}
float chengJia(int sc[], float wt[], int n)
{
	float score = 0;
	for (int i = 0; i < n; i++)
		score += sc[i] * wt[i];
	return score;
}
void three(){
	float wt[4] = { 0.1, 0.2, 0.3, 0.4 };
	int stuA[4] = { 70, 70, 70, 70 };
	int stuB[4] = { 90, 80, 70, 60 };
	float scoreA = chengJia(stuA, wt, 4);
	float scoreB = chengJia(stuB, wt, 4);
	printf("scoreA = %f \n", scoreA);
	printf("scoreB = %f \n", scoreB);

	if (scoreA > scoreB)
		printf("student A wins");
	else if (scoreA < scoreB)
		printf("student B wins");
	else
		printf("same");

	getchar();

	return;
}
struct Student {
	const float wt[4] = { 0.1, 0.2, 0.3, 0.4 };
	int stu[4];
	float sumNumber() {
		float sum=0;
		for (int i = 0; i < 4; i++) {
			sum += stu[i] * wt[i];
		}
		return sum;
	}
};
void FOUR() {
	Student A, B;
	A.stu[0] = 70;
	B.stu[0] = 70;
	A.stu[1] = 70;
	B.stu[1] = 70;
	A.stu[2] = 70;
	B.stu[2] = 70;
	A.stu[3] = 70;
	B.stu[3] = 70;
	printf("A  is %f\n", A.sumNumber());
	printf("B  is %f\n", B.sumNumber());

	if (A.sumNumber() == B.sumNumber()) {
		printf("same");
	}
	else if (A.sumNumber() > B.sumNumber()) {
		printf("A win");
	}
	else if (A.sumNumber() < B.sumNumber()) {
		printf("B win");
	}
}
Student* newStuden() {
	return new Student;
}
void FIve() {
	Student  *A;
	Student  *B;
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

}
int main()
{
	One();
	printf("______________________________second\n");
	Two();
	printf("threee______________________________\n");
	three();
	printf("______________________________four\n");
	FOUR();
	printf("__________________________________five \n");
	FIve();

}
