#include<stdio.h>
#include<stdlib.h>

enum sehirler {
    bos, Adana, Adiyaman, Afyon, Agri, Amasya, Ankara, Antalya, Artvin, Aydin, Balikesir, Bilecik
};

int main() {

    enum sehirler il;

    il = Aydin;
    printf("%d", il);


    return 0;
}