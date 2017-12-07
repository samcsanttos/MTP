#include <stdio.h>
#include <math.h> // FLOOR
struct Pixel {
    unsigned char B;
    unsigned char G;
    unsigned char R;};
int main(){
    int WPX, HPX, BPP, PAL, i, j, AUX, NCP, offset;
    struct Pixel pixel, pixel2;
    FILE * imagem, * imagem2;
    unsigned char byte; //1 byte;
    unsigned short word;//2 bytes;
    unsigned int dword; // 4 bytes;
    imagem = fopen("neopet.bmp", "rb");

    if (imagem==NULL)
        {
        fprintf(stderr,"Arquivo nao encontrado!\n");
        return 1;
        }
    fread(&byte, sizeof(byte), 1, imagem);
    printf("%c", byte);

    fread(&byte, sizeof(byte), 1, imagem);
    printf("%c\n", byte);

    fread(&dword, sizeof(dword), 1, imagem);
    printf("Tamanho do arquivo (bytes): %u\n", dword);

    fseek(imagem, 2*sizeof(word), SEEK_CUR);//pulando 4 bytes;
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Offset (bytes): %u\n", dword);
    offset=dword;
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Tamanho do cabeçalho (bytes): %u\n", dword);

    fread(&dword, sizeof(dword), 1, imagem);
    WPX=dword;
    printf("Largura da imagem (pixels): %u\n", dword);

    fread(&dword, sizeof(dword), 1, imagem);
    HPX=dword;
    printf("Altura da imagem (pixels): %u\n", dword);

    fread(&word, sizeof(word), 1, imagem);
    printf("Qntd de plano de cores: %u\n", word);

    fread(&word, sizeof(word), 1, imagem);
    BPP=word;
    printf("Bits por pixel: %u\n", BPP);

    fread(&dword, sizeof(dword), 1, imagem);
    printf("Metodo de compressao: %u\n", dword);

    fread(&dword, sizeof(dword), 1, imagem);
    printf("Tamanho da imagem (bytes): %u\n", dword); //aparece o tamanho do arquivo menos o cabeçalho;

    fread(&dword, sizeof(dword), 1, imagem);
    printf("Resolucao horizontal: %u\n", dword);

fread(&dword, sizeof(dword), 1, imagem);
printf("Resolucao vertical: %u\n", dword);

fread(&dword, sizeof(dword), 1, imagem);
NCP=(dword==0) ? (1<<BPP): dword;
printf("Numeros de cores na paleta: %u\n", NCP);

fread(&dword, sizeof(dword), 1, imagem);
printf("Numeros de cores importantes: %u\n", (dword==0) ? NCP :  dword);

PAL = floor((BPP*WPX + 31.)/32.)*4; // Tamanho da linha da array de pixels (bytes)
printf("Tamanho da linha da array de pixels (bytes): %u\n",PAL);

imagem2=fopen("neopet1.bmp", "wb");
rewind (imagem);
for (i=0; i<offset;i++)
    {
     fread(&byte, sizeof(byte), 1, imagem);
     fwrite(&byte, sizeof(byte), 1, imagem2);
    }
//leitura de pixel a pixel
AUX = PAL - WPX*3; // (diferença em bytes entre a largura e a linha da array)
pixel2.R=255;
pixel2.G=128;
pixel2.B=128;
for (j=0;j<HPX;j++){ //(a cada linha da imagem)
   for (i=0; i<WPX;i++) //a  cada coluna da mesma linha
        {
            fread(&pixel, sizeof(pixel), 1, imagem); // canais B, G, R, nesta ordem
            if(pixel.R==243 && pixel.G==43 && pixel.B==1)
            fwrite(&pixel2, sizeof(pixel),1, imagem2);
            else
        fwrite(&pixel, sizeof(pixel), 1, imagem2);

        }
       if (AUX>0){
            fseek (imagem, AUX, SEEK_CUR); //sem informacoes util;
            for (i=0; i<AUX;i++)
            fwrite(&byte, sizeof(byte), 1, imagem2);
       }
}
fclose(imagem);
fclose(imagem2);
return 0;
}