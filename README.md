V1.1

Pakeista Studento struct į class.
Pastaba: naudojami tik vector rezultatai.

Spartos lyginimas su V1.0 versija:

|          Veiksmas          |     V1.0   |    V1.1    |
|----------------------------|------------|------------|
| 100000 failo nuskaitymas   | 0.30041632 | 0.28770120 |
| 100000 failo dalijimas     | 0.00369126 | 0.00305780 |
| 1000000 failo nuskaitymas  | 3.10655110 | 2.84936010 |
| 1000000 failo dalijimas    | 0.03361647 | 0.03214870 |

V1.2

Viskas tas pats kaip ir V1.1, tik V1.2 čia realizuota "rule of three", t.y. destructor, copy constructor ir copy assignment operator.

V1.5

Vietoje turimos Studentas klasės sukūriau dvi: bazinę klasę Žmogus ir iš još išvestą klasę Studentas. Bazinė klasė yra abstrakti.
