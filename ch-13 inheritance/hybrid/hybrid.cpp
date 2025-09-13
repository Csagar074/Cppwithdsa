#include <iostream>
using namespace std;

// Base class P
class P {
protected:
    int n;
public:
    P(int n = 0) : n(n) {}
    void setData1() {
        cout << "Enter the first number: ";
        cin >> n;
    }
    int getData1() {
        return n;
    }
};

// Base class Q
class Q {
protected:
    int n2;
public:
    Q(int n2 = 0) : n2(n2) {}
    void setData2() {
        cout << "Enter the second number: ";
        cin >> n2;
    }
    int getData2() {
        return n2;
    }
};

// Derived class R (from P)
class R : public P {
protected:
    int n3;
public:
    R(int n1 = 0, int n3 = 0) : P(n1), n3(n3) {}
    void setData3() {
        cout << "Enter the third number: ";
        cin >> n3;
    }
    int getData3() {
        return n3;
    }
};

// Derived class S (from Q)
class S : public Q {
protected:
    int n4;
public:
    S(int n2 = 0, int n4 = 0) : Q(n2), n4(n4) {}
    void setData4() {
        cout << "Enter the fourth number: ";
        cin >> n4;
    }
    int getData4() {
        return n4;
    }
};

// Hybrid derived class ans (inherits R and S)
class ans : public R, public S {
public:
    ans(int n1 = 0, int n2 = 0, int n3 = 0, int n4 = 0)
        : R(n1, n3), S(n2, n4) {}

    void Sum() {
        int sum = getData1() + getData2() + getData3() + getData4();
        cout <<endl<< "Four Number :: "
             << getData1() << ", "
             << getData2() << ", "
             << getData3() << ", "
             << getData4() << endl;
        cout << "Sum of four numbers = " << sum << endl;
    }
};


