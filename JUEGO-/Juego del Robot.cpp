#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void drawMap(int posX,int posY,char gameMap[11][11]){
  for(int i=0;i<11;i++){
    for(int j=0;j<11;j++){
      if(posX==j && posY==i)
        {
            cout<<"R";
        }
      else
      {
            cout<<gameMap[i][j];
      }
    }
    cout<<endl;
  }
}
int main(){

    //creación de archivo para nombre del jugador
  ofstream myfile("gameData.txt");
  string Name;
  cout<<"Ingrese su nombre:"<< endl;
  cin>> Name;

  if(myfile.is_open()){
    myfile<< "Jugador:"<< endl;
    myfile<<Name<<endl;
    myfile.close();
  }
  else
    cout<<"No es posible abrir archivo";

    //lectura de nombre del jugador
  string line;
  string NombreJugador;
  int lineCount=0;
  ifstream myfileRead("gameData.txt");

  if(myfileRead.is_open()){
    while(getline(myfileRead,line)){
        if(lineCount ==1){
            NombreJugador = line;
        }
        lineCount++;
    }
    myfileRead.close();
  }
  else {
    cout<<"Archivo no encontrado";
  }
  cout<<"Bienvenido al juego "<<" "<< NombreJugador<< endl;

  int posX=5;
  int posY=5;
  char map[11][11]={{'1','1','1','1','1','1','1','1','1','1','1'},
                    {'1','0','0','0','0','0','0','0','0','0','1'},
                    {'1','0','0','0','0','0','0','0','0','0','1'},
                    {'1','0','0','0','0','0','0','0','0','0','1'},
                    {'1','0','0','0','0','0','0','0','0','0','1'},
                    {'1','0','0','0','0','0','0','0','0','0','1'},
                    {'1','0','0','0','0','0','0','0','0','0','1'},
                    {'1','0','0','0','0','0','0','0','0','0','1'},
                    {'1','0','0','0','0','0','0','0','0','0','1'},
                    {'1','0','0','0','0','0','0','0','0','0','1'},
                    {'1','1','1','1','1','1','1','1','1','1','1'}};

  char teclado;
  bool gameOver= false;
  drawMap(posX,posY,map);
  while(!gameOver)
  {
    cout << "Bienvenido(a)"  << endl;
    cout << "Controles Teclas --> w(arriba), a(izquierda), d(derecha) y s(abajo)" << endl;
    cout << "Controles Teclas --> p(Salida)" << endl;
    cin >> teclado;
    switch (teclado)
    {
        case 'a':
            if(posX !=1)
            {posX-=1;}
            break;
        case 'd':
            if(posX !=9)
            {posX+=1;}
            break;
        case 'w':
            if(posY !=1)
            {posY-=1;}
            break;
        case 's':
            if(posY !=9)
            {posY+=1;}
            break;
        case 'p':
            gameOver=true;
        default:
            break;
    }

  drawMap(posX,posY,map);
  }

 return 0;
}
