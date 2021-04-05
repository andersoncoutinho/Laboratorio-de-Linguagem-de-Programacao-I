#ifndef DATA3_H
#define DATA3_H

using namespace std;

class Data3 {
    
    public:
        Data3();
        Data3(int, int, int);
        void avancarDia();
        int getDaysMonth(int);
       std::string getDia();
       std::string getMes();
       std::string getAno();
        void setDia(int);
        void setMes(int);
        void setAno(int);

    private:
        int dia;
        int mes;
        int ano;
};

#endif