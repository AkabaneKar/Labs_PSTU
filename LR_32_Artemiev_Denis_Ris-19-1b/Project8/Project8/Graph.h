#pragma once
#include <glut.h>
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <Windows.h>
#include <cmath>
using namespace std;

const int maxSize = 20;//максимальное число вершин
extern int WinW;
extern int WinH;
struct vertCoordinate//структура координат вершин
{
	int x, y;
};

class GrapH
{
private:
	vector<int> vertList; //вектор вершин
	int adjMatrix[maxSize][maxSize];//матрица смежности
public:
	GrapH();  //конструктор (заполняет матрицу спежности нулями)
	~GrapH();   //деструктор 
	bool IsEmpty();	 //проверка на пустоту
	bool IsFull();//проверка на полноту

	int getVertText(int i) { return vertList[i]; }//получить значение вершины
	vector<int> getVertList() { return  vertList; } //получить вектор вершин
	int getAdjMatrixElem(int i, int j) { return adjMatrix[i][j]; } //получить элемент матрицы смежности
	void setEdgeZero(int i, int j) { adjMatrix[i][j] = 0; adjMatrix[j][i] = 0; } //занулить элемент матрицы (для Коммивояжера)
	int GetAmountVerts() { return vertList.size(); } //получить количество вершин графа
	int GetVertPos(const int& vertex); //получить позицию вершины в векторе вершин
	int GetAmountEdges(); //получить количество путей графа
	void InsertVertex(const int& vertex);//добавить вершину (в конец вектора вершин)
	void Insertway(const int& vertex1, const int& vertex2, int weigth); //добавить путь весом weight между vertex1 и vertex2
	void Print(); //вывод матрицы смежности в консоль
	void delLastVert(); //удалить последнюю вершину в векторе вершин
	void delway(const int& vertex1, const int& vertex2); //удалить путь между vertex1 и vertex2
	void drawGr();//рисоавание графа OpenGL
};
extern GrapH graph;	 //создается объект класса Graph

int** Make_TSPMatrix(); //создается матрица, заменяя 0 на -1
int* Find_Min(int* line, int n); //поиск минимального элемента в строке матрицы
void Print_Matrix(int** matrix);//вывод текущей матрицы
int** Reduct_Matrix(int** oldmatrix); //редукция матрицы
int** Rebuild_Matrix(int** oldmatrix);
void Print_Result(); //вывод результата решения задачи Коммивояжера
//
// Рисование кнопок (OpenGL)
//
void drawButton1();//New Graph
void drawButton2();//Salesman
void drawButton3();//Print Matrix
void drawButton4();//Continue the way
void drawButton5();//Del Way
//
// Рисование элементов графа (OpenGL)
//
void drawCircle(int x, int y, int R);//Circle
void drawBorderedCircle(int x, int y, int R);//Circle with cursor
void drawText(int nom, int x1, int y1);//weight
void drawLine(int text, int x0, int y0, int x1, int y1);//draw way
void drawVertex(int n);//draw Vert

void makeGraph();//создание графа
void setCoords(int i, int n); //установка координат для вершин графа

bool Salesman_Check(int** matrix); //проверка: можно ли решить задачу Коммивояжера
int Circle_Check(int x, int y); //проверка: курсор в зоне вершины или нет
void Button_Check(int x, int y); //проверка: курсор в зоне кнопки или нет

void mouseMove(int x, int y);//отслеживание движения курсора мыши
void mouseClick(int button, int state, int x, int y);//функция регистрации нажатий мыши
void reshape(int w, int h);//отвечает за масштабирование
void display();//отвечает за изображение 
