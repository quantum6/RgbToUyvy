
#include "YuvLibFile.h"
#include "YuvLibRgb.h"

#define FRAME_WIDTH  1280
#define FRAME_HEIGHT  720

#define NAME_SIZE 256

int main()
{
    char caRgbFileName[NAME_SIZE] = {0};
    int nRgbSize = FRAME_WIDTH*FRAME_HEIGHT * 3;
    char* pRgb = (char*)malloc(nRgbSize);

    char caUyvyFileName[NAME_SIZE] = {0};
    int nUyvySize = FRAME_WIDTH*FRAME_HEIGHT * 2;
    char* pUyvy = (char*)malloc(nUyvySize);
    
    YUV_CreateFileNameFrame(caRgbFileName, "../RgbCreater/Rgb", FRAME_WIDTH, FRAME_HEIGHT);
    YUV_ReadFromFile(caRgbFileName, pRgb, nRgbSize);
    
    YUV_RgbToUyvy( pRgb, pUyvy, FRAME_WIDTH, FRAME_HEIGHT);

    YUV_CreateFileNameFrame(caUyvyFileName, "Uyvy", FRAME_WIDTH, FRAME_HEIGHT);
    YUV_WriteToFile(caUyvyFileName, pUyvy, nUyvySize);
}

