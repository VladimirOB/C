#include "pch.h"
int main()
{
    /*Улучшить задачи с разбиением и слиянием файлов так, чтобы пользователь мог указывать количество частей.
    При этом размер последней части может быть меньше, чем у других равных частей*/

    char source_filename[80];
    cout << "Enter source file name: ";
    cin >> source_filename;
    int part = 0;
    cout << "Enter numbers of parts: ";
    cin >> part;
    int cnt = 1; // счетчик частей.
    FILE* image = fopen(source_filename, "rb");
    if (image != NULL)
    {
        long file_size = 0;
        fseek(image, 0, SEEK_END);
        file_size = ftell(image);
        int file_size_part = 0; // размер одинаковых частей.
        int file_size_part_end = 0; // размер последней части.

        file_size_part = file_size / part;
        if (file_size % part != 0)
        {
            file_size_part += 1;
            file_size_part_end = file_size - (file_size_part * (part - 1));
        }
        else
            file_size_part_end = file_size_part; // если все одинаковые.
        int size = 0;//текущий размер буффера
        cout << "file_size= " << file_size << endl;
        cout << "file_size_part= " << file_size_part << endl;
        cout << "file_size_part_end= " << file_size_part_end << endl;
        char* buffer = new char[file_size];
        if (buffer != NULL)
        {
            fseek(image, 0, SEEK_SET);
            fread(buffer, sizeof(char), file_size, image);

            while (cnt < part)
            {
                FILE* image_new = NULL;
                char dest_filename1[80];
                cout << "Enter the name of the part of the file: ";
                cin >> dest_filename1;
                image_new = fopen(dest_filename1, "wb");
                if (image_new != NULL)
                {
                    fseek(image, size, SEEK_SET);
                    fread(buffer, sizeof(char), file_size, image);
                    fwrite(buffer, sizeof(char), file_size_part, image_new);
                    fclose(image_new);
                    size = file_size_part + size;
                }
                else
                    cout << "Could not open destination file!!!" << endl;
                cnt++;
            }
            FILE* image_new = NULL;
            char dest_filename1[80];
            cout << "Enter the name of the part of the file: ";
            cin >> dest_filename1;
            image_new = fopen(dest_filename1, "wb");
            if (image_new != NULL)
            {

                fseek(image, size, SEEK_SET);
                fread(buffer, sizeof(char), file_size, image);
                // запись в файл из буфера
                fwrite(buffer, sizeof(char), file_size_part_end, image_new);

                fclose(image_new);
            }
            else
                cout << "Could not open destination file!!!" << endl;

        }
        else
            cout << "The source file is too big!!!" << endl;
        delete[] buffer;
        fclose(image);
    }
    else
        cout << "Error!!!" << endl;
}