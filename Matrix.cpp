
#include <iostream>
#include <fstream>
#include "Matrix.hpp"
using namespace std;

namespace zich
{

    // void Matrix::read_units(ifstream & file){}
   Matrix::Matrix(std::vector<double> arr,int row,int col){
            this->columns=col;
            this->rows=row;
             for (size_t i=0; i<arr.size(); i++){
                  this->arr.push_back(arr[i]);
             }
                
        }
    
    
    Matrix Matrix::operator--()
    {

        return *this;
    }
    Matrix Matrix::operator--(int)
    {
        Matrix copy = *this;

        return copy;
    }

    Matrix Matrix::operator++()
    {

        return *this;
    }
    Matrix Matrix::operator++(int)
    {
        Matrix copy = *this;
        return copy;
    }

    Matrix operator*(Matrix &n, double num)
    {
        std::vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
        zich::Matrix a{identity, 3, 3};
        return a;
    }
    Matrix operator*(double num, Matrix &n)
    {
        std::vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
        zich::Matrix a{identity, 3, 3};
        return a;
    }

    Matrix &Matrix::operator*=(int num)
    {

        return *this;
    }

    Matrix &Matrix::operator+=(const Matrix &other)
    {
        return *this;
    }
    Matrix Matrix::operator+(const Matrix &other)
    {
        if(this->rows!=other.rows || this->columns!=other.columns){
           throw runtime_error("not"); 
        }
        return *this;
    }
    Matrix Matrix::operator+()
    {
        return *this;
    }
    Matrix &Matrix::operator-=(const Matrix &other)
    {
        return *this;
    }
    Matrix Matrix::operator-(const Matrix &other)
    {
        return *this;
    }
    Matrix Matrix::operator-()
    {
        return *this;
    }

    // const NumberWithUnits operator-(const NumberWithUnits& a,const NumberWithUnits b);
    // const NumberWithUnits operator+(const NumberWithUnits& a,const NumberWithUnits b);

    bool operator==(const Matrix &a, const Matrix &b)
    {
        return true;
    }
    bool operator!=(const Matrix &a, const Matrix &b)
    {
        return true;
    }
    bool operator>(const Matrix &a, const Matrix &b)
    {
        return true;
    }
    bool operator>=(const Matrix &a, const Matrix &b)
    {
        return true;
    }
    bool operator<(const Matrix &a, const Matrix &b)
    {
        return true;
    }
    bool operator<=(const Matrix &a, const Matrix &b)
    {
        return true;
    }

    ostream &operator<<(ostream &os, const Matrix &m)
    {
        return os << "[" << m.arr[0] << "]" << endl;
    }

    istream &operator>>(istream &is, Matrix &m)
    {

        return is >> m.getarr()[0];
    }

}