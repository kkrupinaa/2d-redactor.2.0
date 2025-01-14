#pragma once
#include <iostream>
#include "point.h"
#include "polygon.h"
#include "segment.h"
#include "line.h"
using namespace std;

class triangle : public polygon
{
public:
	//����������� ������������
	triangle();
	//���������� ������������                //���������� �����������, �� ������ ���� ����������� � ������������ ������
	//~triangle();

	//����������� ��������������
	bool is_equilateral() const;
	//����������� ��������������
	bool is_isosceles() const;
	//����������� �������������
	bool is_right() const;
	//����������, ���������� �� �����������
	bool exists() const;
	//������ ��������� ����������
	double radius_inside() const;
	//������ ��������� ����������
	double radius_outside() const;
	//����� �� ����� ������ ������������ (������)
	bool is_inside(const point& p) const;
	//���������� ��������� �����
	friend ifstream& operator>>(ifstream& in, triangle& abc);//�������, ��� ��� ���� � ������������ ������
	//������� ������� ����� ������������ � �������� �������
	line middle_line()const;

private:
	void set_vertex(const point& a, const point& b, const point& c);
};