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
};

int main(){

}