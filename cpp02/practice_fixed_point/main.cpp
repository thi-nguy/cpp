// #include <iostream>

// const int   scale = 8;
// #define IntToFixedPoint(x) ((x) << scale)
// #define FixedPointToInt(x) ((x) >> scale)
// #define FloatToFixedPoint(x) ((x) * (1 << scale))
// #define FixedPointToFloat(x) ((x) / (1 << scale))

// int main(void)
// {
//     int i = 10;
//     int j = IntToFixedPoint(i);
//     std::cout << "Int number is: " << i << std::endl;
//     std::cout << "Fixed point is: " << j << std::endl;

//     float f = 2.3;
//     int k = FloatToFixedPoint(f);

//     std::cout << "Float number is: " << f << std::endl;
//     std::cout << "Fixed point is: " << k << std::endl;
//     return (0);
// }

#include <iostream>
using namespace std;

struct test{
   test operator ++(){
       cout<< "case 1"<<endl;
       return *this;
   }
   test operator ++(int){
       cout<<"case 2"<<endl;
       return *this;
   }
   
};

int main() {
	// your code goes here
        test t;
        ++t ;// case 1
        t++;// case 2
	return 0;
}