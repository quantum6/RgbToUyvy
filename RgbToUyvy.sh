
EXE_FILE=RgbToUyvy
if [ -f ${EXE_FILE} ]; then
    rm ${EXE_FILE}
fi

gcc \
    ../YuvLib/YuvLibFile.c ../YuvLib/YuvLibRgb.c \
    RgbToUyvyApp.c \
    -o ${EXE_FILE} \
    -I ../YuvLib

./${EXE_FILE}

