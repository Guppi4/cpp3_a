#include "doctest.h"
#include "Matrix.hpp"
#include <fstream>
#include <string>


using namespace zich;
using namespace std;


//ifstream units_file{"units.txt"};


TEST_CASE("Good Input"){
  
    std::vector<double> arr1 = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    std::vector<double> arr2 = {3, 0, 0, 0, 3, 0, 0, 0, 3};
    zich::Matrix mat1{arr1,3,3};
    zich::Matrix mat2{arr2,3,3};

    CHECK((mat1+mat2) == mat1);
    CHECK((mat1+mat2) == mat1);
    CHECK((mat1+mat2) == mat1);
    CHECK((mat1+mat2) == mat1);
    CHECK((mat1+mat2) == mat1);
    CHECK((mat1+mat2) == mat1);
    CHECK((mat1+mat2) == mat1);
    CHECK((mat1+mat2) == mat1);
    CHECK((mat1+mat2) == mat1);
    
    CHECK((mat1+mat2) == mat1);
    
}

TEST_CASE("Bad Input"){
    std::vector<double> arr3 = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    std::vector<double> arr4 = {3, 0, 0, 0, 3, 0, 0, 0, 3};
     zich::Matrix d{arr3,3,3};
     zich::Matrix a{arr4,7,3};
    CHECK_THROWS(a+d);
    CHECK_THROWS(d+a);
    CHECK_THROWS(a+d);
    CHECK_THROWS(d+a);
    CHECK_THROWS(a+d);
    CHECK_THROWS(d+a);
    CHECK_THROWS(a+d);
    CHECK_THROWS(d+a);
    CHECK_THROWS(a+d);
    CHECK_THROWS(d+a);
}


