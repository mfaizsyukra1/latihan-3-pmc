//Muhammad Faiz Syukra
//18320027

#include <stdio.h>
 struct mhs
{
      int nim;
      char nama[100];
      float kehadiran;
};
struct mhs kls[5] = {{1838801, "ani", 90}, {1838802, "budi", 88.5}, {1838803,"cahya",70}, {1838804,"dono",95},{1838805,"eka",73.33}};

 int main(){

    int i;
    printf("Mahasiswa dengan kehadiran kurang dari 80% : \n");
    printf("-----------------------------------\n");
    printf("|    NIM     |       NAMA         |\n");
    printf("-----------------------------------\n");
    for(i=0;i<5;i++)
    {
        if(kls[i].kehadiran < 80){
            printf("| %-8d   | %-17s|\n",
                   kls[i].nim,  kls[i].nama);
        }
    }



 }
