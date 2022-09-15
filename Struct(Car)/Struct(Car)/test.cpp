//#include "pch.h"
//struct cars
//{
//    char brand[40];
//    char model[40];
//    char address[40];
//    char owner[40];
//    int id;
//    int maxSpeed;
//    int price;
//};
////
////
////int main()
////{
//    /*char str_size[2] = "";
//     fgets(str_size, 2, r);
//    size = atoi(str_size)*/
////	const int cnt = 3;
////    struct cars* car = new cars[cnt];
////	FILE* r = fopen("V:\\Study\\Home Work\\Program\\Struct(Car)\\test.txt", "r");
////	if (r != NULL)
////	{
////		long file_size = 0;
////		// переместиться в конец открытого файла
////	    fseek(r, 0, SEEK_END);
////		// получить номер байта, где находится файловый указатель (размер файла)
////	    file_size = ftell(r);
////	    char* buffer = new char[file_size];
////		if (buffer != NULL)
////			{
////			    // переместиться в начало открытого файла
////			    fseek(r, 0, SEEK_SET);
////			
////			    // чтение всего файла в память
////			    fread(buffer, (sizeof(char)), file_size, r);
////			    for (long i = 0; i < file_size; i++)
////			    {
////					if (buffer[i] == '\n')
////					
////					
////						cout << car[i].brand;
////					
////			    }
////			    delete[] buffer;
////			}
////			else
////			    cout << "The source file is too big!!!" << endl;
////		fclose(r);
////	}
////	
////}
////struct cars
////{
////    char brand[40];
////    char model[40];
////    char address[40];
////    char owner[40];
////    int id;
////    int maxSpeed;
////    int price;
////};
////
////int main()
////{
////    const int cnt = 3;
////    struct cars* car = new cars[cnt];
////    string s; // сюда будем класть считанные строки
////    ifstream file("V:\\Study\\Home Work\\Program\\Struct(Car)\\test.txt"); // файл из которого читаем (для линукс путь будет выглядеть по другому)
////
////    while(getline(file, s)){ // пока не достигнут конец файла класть очередную строку в переменную (s)
////        cout << s << endl; // выводим на экран
////        s += "+"; // что нибудь делаем со строкой например я добавляю плюсик в конце каждой строки
////        cout << s << endl; // и снова вывожу на экран но уже модифицированную строку (без записи ее в файл)
////        for (int i = 0; i < 10; i++)
////        {
////            
////        }
////    }
////
////    file.close(); // обязательно закрываем файл что бы не повредить его
////
////    return 0;
////}
//
////int main()
////{
////    const int cnt = 3;
////    struct cars* car = new cars[cnt];
////    char* s1 = new char[255];             //В массив будет переноситься строка из файла
////   
////
////    ifstream in("V:\\Study\\Home Work\\Program\\Struct(Car)\\test.txt");     //Открываем файл для считывания информации
////
////    in >> s1;                               //считываем строку
////    strcmp(car[0].brand, s1);
////    in.close();                                // Закрываем файл
////    delete[]s1;
////    cout << car[0].brand << endl;  //Выводим значение s1 на экран
////
////}
//
////int main()
////{
////    const int cnt = 3;
////        struct cars* car = new cars[cnt];
////    	FILE* r = fopen("V:\\Study\\Home Work\\Program\\Struct(Car)\\test.txt", "r");
////
////        if (r != NULL)
////        {
////            for (int i = 0; i < 1; i++)
////            {
////                fscanf(r, "%s", car[i].brand);
////                fscanf(r, "%s", car[i].model);
////                fscanf(r, "%s", car[i].address);
////                fscanf(r, "%s", car[i].owner);
////                fscanf(r, "%d", &car[i].id);
////                fscanf(r, "%d", &car[i].maxSpeed);
////                fscanf(r, "%d", &car[i].price);
////
////            }
////            
////        }
////        fclose(r);
////        for (int i = 0; i < 1; i++)
////        {
////            cout << "Brand: " << car[i].brand << endl;
////            cout << "Model: " << car[i].model << endl;
////            cout << "Adrress: " << car[i].address << endl;
////            cout << "Owner: " << car[i].owner << endl;
////            cout << "ID: " << car[i].id << endl;
////            cout << "MaxSpeed: " << car[i].maxSpeed << endl;
////            cout << "Price: " << car[i].price << endl;
////            cout << endl;
////        }
////       
////        
////}
//
//// int main()
////{
////	 char str[100];
////	 cin >> str;
////		
////		for (int i = 0; i < 10; i++)
////		{
////			for (int k = i+1; k < 10; k++)
////			{
////				if (car[k].id == car[i].id)
////					cout << "This ID is already in use. " << endl;
////				continue;
////			}
////		}
////}