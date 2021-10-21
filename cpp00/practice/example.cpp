//#include <iostream>
//using namespace std;

//int main()
//{
//    cout << "Welcome to the C++ world.\n"; // synstax to print something on the screen:
//    // cout << "something to be printed";
//    return (0);
//}

//cin : standard input: is object of type istream
//cout: standard output: the rest are object of type ostream
//cerr: standard error
//clog: general infomation

#include <iostream> //This ia header, iostream chua cout, cin

int main()
{
    std::cout << "Enter two numbers: " << std::endl;
    //std::cout std la standard library, cout presents trong standard library.
    // :: nghia la scope operator. std::cout nghia la using cout within the standard library.
    // Va cout trong standard library lam nhiem vu in ra man hinh.

    // <<: output operator
    // "string literal"
    // endl: la manipulator: endl la end line. No se break line o day.
    // std::endl: using endl within the scope of standard library.
    //// Moi khi type change thi phai dung output operator lan nua. o day khong con la string nua ma la manipulator nen phai dung << lan nua.
    //int n1;
    //int n2;

    //n1 = 0;
    //n2 = 0;

    //std::cin >> n1 >> n2; // take input from user, it will store in n1 and n2. >> la input operator
    //std::cout << "The sum of " << n1 << " and " << n2 << " is " << n1 + n2 << std::endl;
}
