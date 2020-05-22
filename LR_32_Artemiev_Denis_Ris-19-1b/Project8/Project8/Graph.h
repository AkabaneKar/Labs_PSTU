#pragma once
#include <glut.h>
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <Windows.h>
#include <cmath>
using namespace std;

const int maxSize = 20;//������������ ����� ������
extern int WinW;
extern int WinH;
struct vertCoordinate//��������� ��������� ������
{
	int x, y;
};

class GrapH
{
private:
	vector<int> vertList; //������ ������
	int adjMatrix[maxSize][maxSize];//������� ���������
public:
	GrapH();  //����������� (��������� ������� ��������� ������)
	~GrapH();   //���������� 
	bool IsEmpty();	 //�������� �� �������
	bool IsFull();//�������� �� �������

	int getVertText(int i) { return vertList[i]; }//�������� �������� �������
	vector<int> getVertList() { return  vertList; } //�������� ������ ������
	int getAdjMatrixElem(int i, int j) { return adjMatrix[i][j]; } //�������� ������� ������� ���������
	void setEdgeZero(int i, int j) { adjMatrix[i][j] = 0; adjMatrix[j][i] = 0; } //�������� ������� ������� (��� ������������)
	int GetAmountVerts() { return vertList.size(); } //�������� ���������� ������ �����
	int GetVertPos(const int& vertex); //�������� ������� ������� � ������� ������
	int GetAmountEdges(); //�������� ���������� ����� �����
	void InsertVertex(const int& vertex);//�������� ������� (� ����� ������� ������)
	void Insertway(const int& vertex1, const int& vertex2, int weigth); //�������� ���� ����� weight ����� vertex1 � vertex2
	void Print(); //����� ������� ��������� � �������
	void delLastVert(); //������� ��������� ������� � ������� ������
	void delway(const int& vertex1, const int& vertex2); //������� ���� ����� vertex1 � vertex2
	void drawGr();//���������� ����� OpenGL
};
extern GrapH graph;	 //��������� ������ ������ Graph

int** Make_TSPMatrix(); //��������� �������, ������� 0 �� -1
int* Find_Min(int* line, int n); //����� ������������ �������� � ������ �������
void Print_Matrix(int** matrix);//����� ������� �������
int** Reduct_Matrix(int** oldmatrix); //�������� �������
int** Rebuild_Matrix(int** oldmatrix);
void Print_Result(); //����� ���������� ������� ������ ������������
//
// ��������� ������ (OpenGL)
//
void drawButton1();//New Graph
void drawButton2();//Salesman
void drawButton3();//Print Matrix
void drawButton4();//Continue the way
void drawButton5();//Del Way
//
// ��������� ��������� ����� (OpenGL)
//
void drawCircle(int x, int y, int R);//Circle
void drawBorderedCircle(int x, int y, int R);//Circle with cursor
void drawText(int nom, int x1, int y1);//weight
void drawLine(int text, int x0, int y0, int x1, int y1);//draw way
void drawVertex(int n);//draw Vert

void makeGraph();//�������� �����
void setCoords(int i, int n); //��������� ��������� ��� ������ �����

bool Salesman_Check(int** matrix); //��������: ����� �� ������ ������ ������������
int Circle_Check(int x, int y); //��������: ������ � ���� ������� ��� ���
void Button_Check(int x, int y); //��������: ������ � ���� ������ ��� ���

void mouseMove(int x, int y);//������������ �������� ������� ����
void mouseClick(int button, int state, int x, int y);//������� ����������� ������� ����
void reshape(int w, int h);//�������� �� ���������������
void display();//�������� �� ����������� 
