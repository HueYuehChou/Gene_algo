#include<math.h>

constexpr int CIE_width=4;
constexpr int CIE_height=401;

constexpr int Tc_width=4;
constexpr int Tc_height=56;


float *CIE_excel_fileopen(float temp[CIE_height][CIE_width]){


      FILE *file; // �}CIE1931 excel

    if((file=fopen("CIE1931.csv","r"))==NULL){


        printf("error");

        exit(0);
}
        fseek(file,12L,SEEK_SET);

    for(int z=0;z<CIE_height;z++){

        for(int w=0;w<CIE_width;w++){

        fscanf(file,"%f",&temp[z][w]);

        fseek(file,1L,SEEK_CUR);


}
        }

        return(*temp);

        }


float *Tc_excel_fileopen(float temp[Tc_height][Tc_width]){

      FILE *file;// �}Tc_data excel

      if((file=fopen("Tc_data.csv","r"))==NULL){


      printf("error");

      exit(0);
}
      fseek(file,15L,SEEK_SET);

    for(int z=0;z<Tc_height;z++){

        for(int w=0;w<Tc_width;w++){

        fscanf(file,"%f",&temp[z][w]);

        fseek(file,2L,SEEK_CUR);


}
        }

        return(*temp);


}

