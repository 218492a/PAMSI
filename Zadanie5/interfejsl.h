#ifndef interfejsl_hh
#define interfejsl_hh
class interfejsl {
public:
virtual void dodajelement(int, int)=0;
virtual int usunelement(int)=0;
virtual int wyjmijelement(int)=0;
virtual void wyswietlrozmiar()=0;
virtual int wyswietlelement(int)=0;
virtual void wyswietl()=0;
virtual void wypelnij(int)=0;
virtual void przeszukajizmierz(int)=0;
};
#endif
