#include "mylib.h"

class Studentas {
public:
    // Member variables
    string vardas_; //Studento vardas
    string pavarde_; //Studento pavarde
    int n_; //Namu darbu kiekis
    vector<int> paz_; //Namu darbu pazymiai
    int egz_; //Egzamino pazymys
    double vidurkis_; //Pazymiu vidurkis
    double mediana_; //Pazymiu mediana
    int sum_; //Pazymiu suma


    Studentas() : egz_(0) { }  // default konstruktorius
    Studentas(std::istream& is);
    inline string getVardas() const { return vardas_; } // get'eriai, inline
    void setVardas(string vardas) { vardas_ = vardas; }    
    inline string getPavarde() const { return pavarde_; } // get'eriai, inline
    void setPavarde(string pavarde) { pavarde_ = pavarde; }

    double getPaz(int i) const { return paz_.at(i); }
    void setPaz(int nd, int index) { paz_[index] = nd; }
    void addPaz(int nd) {
        paz_.reserve(paz_.size() + 1);
        paz_.push_back(nd);
    }
    void clearPaz() { paz_.clear(); }
    inline int getPazSize() { return paz_.size(); }
    void sortPaz() { sort(paz_.begin(), paz_.end()); }

    inline int getEgz() const { return egz_; }
    void setEgz(int egz) { egz_ = egz; }

    inline double getVidurkis() const { return vidurkis_; }
    void setVidurkis(double vidurkis) { vidurkis_ = vidurkis; }

    inline double getMediana() const { return mediana_; }
    void setMediana(double mediana) { mediana_ = mediana; }
};