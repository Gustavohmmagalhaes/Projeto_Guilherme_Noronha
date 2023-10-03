#include <iostream>
using namespace std;

class D {
private:
    int D1;
    double D2;

public:

    int getD1() {
        return D1;
    }

    void setD1(int d1) {
        D1 = d1;
    }

    double getD2() {
        return D2;
    }

    void setD2(double d2) {
        D2 = d2;
    }

    void MD1() {
        cout << "Método MD1() chamado" << endl;
    }

    void MD2() {
        cout << "Método MD2() chamado" << endl;
    }

<<<<<<< HEAD
    void MD3() {
        cout << "Método MD2() chamado" << endl;
    }
};
=======
    void MD4() {
        cout << "Método MD4() chamado" << endl;
    }

};
>>>>>>> origin/main
