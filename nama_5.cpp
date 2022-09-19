[20.13, 19/9/2022] linaa x pplg 2: #include <iostream>
using namespace std;


float luas_permukaan(float p, float l, float t){
    float L;
    L = 2 * ( (p*l) + (p*t) + (l*t) );
    return L;
}

float volume(float p, float l, float t){
    float V;
    V = p * l * t;
    return V;
}

float keliling(float p, float l, float t){
    float k;
    k = 4 * (p + l + t);
    return k;
}


int main() {
    float p, l, t;
    float luasnya, volumenya, kelilingnya;

    cout << "Program menghitung luas, volume, dan keliling balok \n";
    cout << " 7: ";
    cin >> p;

    cout << "50: ";
    cin >> l;

    cout << "8: ";
    cin >> t;

    luasnya = luas_permukaan(p, l, t);
    volumenya = volume(p, l, t);
    kelilingnya = keliling(p, l, t);

    cout << "jadi luasnya yaitu: " << luasnya << " Volumenya: " << volumenya << " dan kelilingnya: " << kelilingnya;

    return 0;
}
[20.14, 19/9/2022] linaa x pplg 2: #include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main(){
    int nilai =78;
    if (nilai > 78){
        cout << "lulus";
   } else if (nilai == 80){
        cout << "lulus kkm";
   } else {
        cout << "tidak lulus ";
}
return 0;
}
