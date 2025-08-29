#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define HEADER_SIZE 44

int main(int argc, char *argv[])
{
    //check number of arguments
    if (argc != 4)
    {
        printf("Usage: %s input.wav output.wav factor\n", argv[0]);
        return 1;
    }

    //variables
    char *infile = argv[1];
    char *outfile = argv[2];
    float factor = atof(argv[3]);

    //open file
    FILE *in = fopen(infile, "rb");
    FILE *out = fopen(outfile, "wb");

    //inicializing the modification
    uint8_t header[HEADER_SIZE];
    fread(header, HEADER_SIZE, 1, in);
    fwrite(header, HEADER_SIZE, 1, out);

    int16_t sample;
    //doing the modification
    while (fread(&sample, sizeof(int16_t), 1, in))
    {
        sample *= factor;
        fwrite(&sample, sizeof(int16_t), 1, out);
    }

    fclose(in);
    fclose(out);
}
