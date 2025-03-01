/*
friend functios are given access to the protceted and private members of the class
*/

#includes <iostream>

class myClass{
    private:
    int x;

    void add(int n){
        x+=n;
    }

    public:
    myClass(int x): x(x) {};

    void print(){
        std::cout<<"x: " << x << "\n";
    }
};

int main(){
    myClass myobject(7);
    myobject.print();

}