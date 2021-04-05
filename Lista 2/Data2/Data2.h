#ifndef DATA2_H
#define DATA2_H

class Data2 {
    public:
        Data2();
        void printData();
        int getDia();
        int getMes();
        int getAno();
        void setDia(int);
        void setMes(int);
        void setAno(int);
    private:
        int dia;
        int mes;
        int ano;
};

#endif