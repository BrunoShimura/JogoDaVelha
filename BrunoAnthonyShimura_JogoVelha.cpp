// Bruno Anthony Shimura RA:577928
// Edinei Viana Ribeiro RA:581496
// Gabriel Martinez RA:581771

# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <windows.h>
# include <conio.h>

# define l 3
# define co 3

void gotoxy(int x, int y){
	COORD c;
	c.X = x - 1;
	c.Y = y - 1;
	SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}

main()
{
  int i,j,w,y,ent=0,lin,jog,velh,col,k,val1,val2,val3,val4;

  char v[l][co];
  char nome1[20],nome2[20];//char para pergar os nomes

  system( "color 0C" );

  srand(time(NULL));
//------------------------------------------------------------------------------

  gotoxy(5,5);
  printf("\n\t --------------------------------------------\n\t| XX      XX                        OOOOOO   |\n\t|  XX    XX                        OOO  OOO  |\n\t|   XX  XX                         OO    OO  |\n\t|    XXXX      --------------      OO    OO  |\n\t|     XX      |JOGO-DA-VELHA |     OO    OO  |\n\t|    XXXX      --------------      OO    OO  |\n\t|   XX  XX                         OO    OO  |\n\t|  XX    XX                        OOO  OOO  | \n\t| XX      XX                        OOOOOO   |\n\t --------------------------------------------");
  printf("\n\t\tDigite 1 para entrar no jogo!=>");

  for(i=0, lin=3, col=1;i<78;i++)
			{
				gotoxy(col,3);
				printf("%c", 205);
				gotoxy(col,25);
				printf("%c",205);
				gotoxy(1, lin);
				printf("%c",186);
				gotoxy(79,lin);
				printf("%c",186);
				col++;
				if(lin<25)
				lin++;
			}

			gotoxy(1,3);
			printf("%c", 201);
			gotoxy(1,25);
			printf("%c",200);
			gotoxy(79, 3);
			printf("%c",187);
			gotoxy(79,25);
			printf("%c",188);

  gotoxy(48,17);
  scanf("%d",&ent);

  if(ent==1){
    system("cls");

    system( "color 0E" );

    gotoxy(35,2);
    printf("JOGO DA VELHA");

    for(i=0, lin=3, col=1;i<78;i++)
			{
				gotoxy(col,3);
				printf("%c", 205);
				gotoxy(col,25);
				printf("%c",205);
				gotoxy(1, lin);
				printf("%c",186);
				gotoxy(79,lin);
				printf("%c",186);
				col++;
				if(lin<25)
				lin++;
			}

			gotoxy(1,3);
			printf("%c", 201);
			gotoxy(1,25);
			printf("%c",200);
			gotoxy(79, 3);
			printf("%c",187);
			gotoxy(79,25);
			printf("%c",188);

    gotoxy(5,5);
    printf("Digite o nome do jogador 1: ");
    scanf("%s",nome1);
    gotoxy(5,7);
    printf("Digite o nome do jogador 2: ");
    scanf("%s",nome2);

//Prenchendo a matriz
  do{
    w=rand() % 2;//quem joga primeiro

  for(i=0;i<l;i++){
    for(j=0;j<co;j++){
      v[i][j]=' ';
    }
  }

//------------------------------------------------------------------------------

  for(k=0;;k++,w++){
    system("cls");
    printf("\n");//Mostrando  matriz


    	gotoxy(35,2);
        printf("JOGO DA VELHA");
    	gotoxy(35,4);
        printf("0     1     2");
        gotoxy(32,5.5);
        printf("0");
    	gotoxy(32,9);
        printf("1");
        gotoxy(32,13);
        printf("2");

        for(i=0, lin=3, col=1;i<78;i++)
			{
				gotoxy(col,3);
				printf("%c", 205);
				gotoxy(col,25);
				printf("%c",205);
				gotoxy(1, lin);
				printf("%c",186);
				gotoxy(79,lin);
				printf("%c",186);
				col++;
				if(lin<25)
				lin++;
			}

			gotoxy(1,3);
			printf("%c", 201);
			gotoxy(1,25);
			printf("%c",200);
			gotoxy(79, 3);
			printf("%c",187);
			gotoxy(79,25);
			printf("%c",188);


     for(i=0, lin=5, col=34;i<16;i++)
			{
				gotoxy(col,7);
				printf("%c",205);
				gotoxy(col,11);
				printf("%c",205);
				gotoxy(38, lin);
				printf("%c",186);
				gotoxy(44,lin);
				printf("%c",186);
				col++;
				if(lin<13)
				lin++;
			}

			gotoxy(38,7);
			printf("%c", 206);
			gotoxy(38,11);
			printf("%c",206);
			gotoxy(44, 7);
			printf("%c",206);
			gotoxy(44,11);
			printf("%c",206);

    for(i=0,lin=6;i<l;i++,lin+=3){
      for(j=0, col=36;j<co;j++,col+=5){
      	  gotoxy(col,lin);
          printf("%c", v[i][j]);
        }
      }

//------------------------------------------------------------------------------
    if(w%2==0){
      for(y=0;;y++){//Pegando posição do 1�

     	  	gotoxy(8,10);
			printf("%c%c      %c%c",  219, 219, 219, 219);
			gotoxy(8,11);
			printf(" %c%c    %c%c ",  219, 219, 219, 219);
			gotoxy(8,12);
			printf("  %c%c  %c%c  ",  219, 219, 219, 219);
			gotoxy(8,13);
			printf("   %c%c%c%c    ",  219, 219, 219, 219);
			gotoxy(8,14);
			printf("    %c%c     ",  219, 219, 219, 219);
			gotoxy(8,15);
			printf("   %c%c%c%c    ",  219, 219, 219, 219);
			gotoxy(8,16);
			printf("  %c%c  %c%c  ",  219, 219, 219, 219);
			gotoxy(8,17);
			printf(" %c%c    %c%c ",  219, 219, 219, 219);
			gotoxy(8,18);
			printf("%c%c      %c%c",  219, 219, 219, 219);


      	gotoxy(33,15);
        printf("Jogador >>%s<< X\n",nome1);
        gotoxy(33,17);
        printf("linha=>");
        scanf("%d",&lin);
        gotoxy(33,18);
        printf("coluna=>");
        scanf("%d",&col);

        if(v[lin][col]==' '){
          v[lin][col]='X';
          break;
        }
          else{

            system("cls");

        gotoxy(35,2);
        printf("JOGO DA VELHA");



        gotoxy(35,4);
        printf("0     1     2");
        gotoxy(32,5.5);
        printf("0");
    	gotoxy(32,9);
        printf("1");
        gotoxy(32,13);
        printf("2");


        for(i=0, lin=3, col=1;i<78;i++)
			{
				gotoxy(col,3);
				printf("%c", 205);
				gotoxy(col,25);
				printf("%c",205);
				gotoxy(1, lin);
				printf("%c",186);
				gotoxy(79,lin);
				printf("%c",186);
				col++;
				if(lin<25)
				lin++;
			}

			gotoxy(1,3);
			printf("%c", 201);
			gotoxy(1,25);
			printf("%c",200);
			gotoxy(79, 3);
			printf("%c",187);
			gotoxy(79,25);
			printf("%c",188);


     for(i=0, lin=5, col=34;i<16;i++)
			{
				gotoxy(col,7);
				printf("%c",205);
				gotoxy(col,11);
				printf("%c",205);
				gotoxy(38, lin);
				printf("%c",186);
				gotoxy(45,lin);
				printf("%c",186);
				col++;
				if(lin<13)
				lin++;
			}

			gotoxy(38,7);
			printf("%c", 206);
			gotoxy(38,11);
			printf("%c",206);
			gotoxy(45, 7);
			printf("%c",206);
			gotoxy(45,11);
			printf("%c",206);

    for(i=0,lin=5;i<l;i++,lin+=4){
      for(j=0, col=35;j<co;j++,col+=6){
      	  gotoxy(col,lin);
          printf("%c", v[i][j]);
        }
      }

            gotoxy(33,19);//posi�ao ocupada
            printf("Posicao ocupada!!! Digite novamente:");
            fflush(stdin);
        }
        }
        //validação linha,diagonal,diagonal secundario e coluna do jogador 1 e se deu velha
        val1=0;
        val2=0;
        val3=0;
        val4=0;
        velh=0;

        for(j=2,i=0;i<l;i++,j--){//diagonal secundaria
          if(v[i][j]=='X')
          val1++;
        }
        for(j=0,i=0;i<3;i++,j++){//diagonal primaria
          if(v[i][j]=='X')
          val2++;
        }
        for(j=0,i=0;i<3,j<3;i++,j++){//linhas e colunas
          if(v[i][0]=='X'&&v[i][1]=='X'&&v[i][2]=='X')
          val3++;

          if(v[0][j]=='X'&&v[1][j]=='X'&&v[2][j]=='X')
          val4++;
        }
        if(val1==3||val2==3||val3>0||val4>0){

        	gotoxy(33,19);
          printf("Jogador >>%s<< venceu!!!",nome1);



        	for(i=0;i<7;i++){


   	  		gotoxy(8,10);
			printf("%c%c      %c%c",  219, 219, 219, 219);
			gotoxy(8,11);
			printf(" %c%c    %c%c ",  219, 219, 219, 219);
			gotoxy(8,12);
			printf("  %c%c  %c%c  ",  219, 219, 219, 219);
			gotoxy(8,13);
			printf("   %c%c%c%c    ",  219, 219, 219, 219);
			gotoxy(8,14);
			printf("    %c%c     ",  219, 219, 219, 219);
			gotoxy(8,15);
			printf("   %c%c%c%c    ",  219, 219, 219, 219);
			gotoxy(8,16);
			printf("  %c%c  %c%c  ",  219, 219, 219, 219);
			gotoxy(8,17);
			printf(" %c%c    %c%c ",  219, 219, 219, 219);
			gotoxy(8,18);
			printf("%c%c      %c%c",  219, 219, 219, 219);


			_sleep(250);

  		 	gotoxy(8,10);
   			printf("                         ");
			gotoxy(8,11);
			printf("                        ");
			gotoxy(8,12);
			printf("                        ");
			gotoxy(8,13);
			printf("                        ");
			gotoxy(8,14);
 			printf("                         ");
			gotoxy(8,15);
 			printf("                         ");
			gotoxy(8,16);
 			printf("                         ");
			gotoxy(8,17);
			printf("                         ");
			gotoxy(8,18);
			printf("              ");

			_sleep(250);
		}

          break;
        }
        for(i=0;i<l;i++){//velha
          for(j=0;j<co;j++){
              if(v[i][j]!=' ')
              velh++;
          }
        }
        if(velh>8){
        	gotoxy(33,19);
          printf("Jogo da velha");//quando todas as posi�oes ja estiverem preenchidas e nenhum combina��o

		    for(i=0;i<7;i++){


   	  		gotoxy(8,10);
			printf("%c%c      %c%c",  219, 219, 219, 219);
			gotoxy(8,11);
			printf(" %c%c    %c%c ",  219, 219, 219, 219);
			gotoxy(8,12);
			printf("  %c%c  %c%c  ",  219, 219, 219, 219);
			gotoxy(8,13);
			printf("   %c%c%c%c    ",  219, 219, 219, 219);
			gotoxy(8,14);
			printf("    %c%c     ",  219, 219, 219, 219);
			gotoxy(8,15);
			printf("   %c%c%c%c    ",  219, 219, 219, 219);
			gotoxy(8,16);
			printf("  %c%c  %c%c  ",  219, 219, 219, 219);
			gotoxy(8,17);
			printf(" %c%c    %c%c ",  219, 219, 219, 219);
			gotoxy(8,18);
			printf("%c%c      %c%c",  219, 219, 219, 219);


			_sleep(250);

  		 	gotoxy(8,10);
   			printf("                         ");
			gotoxy(8,11);
			printf("                        ");
			gotoxy(8,12);
			printf("                        ");
			gotoxy(8,13);
			printf("                        ");
			gotoxy(8,14);
 			printf("                         ");
			gotoxy(8,15);
 			printf("                         ");
			gotoxy(8,16);
 			printf("                         ");
			gotoxy(8,17);
			printf("                         ");
			gotoxy(8,18);
			printf("              ");

			_sleep(250);


 			gotoxy(60,10);
			printf("   %c%c%c%c%c  ",  219, 219, 219, 219,  219);
			gotoxy(60,11);
			printf(" %c%c%c   %c%c%c  ",  219, 219, 219, 219,  219,  219);
			gotoxy(60,12);
			printf("%c%c       %c%c",  219, 219, 219, 219);
			gotoxy(60,13);
			printf("%c%c       %c%c",  219, 219, 219, 219);
			gotoxy(60,14);
			printf("%c%c       %c%c",  219, 219, 219, 219);
			gotoxy(60,15);
			printf("%c%c       %c%c",  219, 219, 219, 219);
			gotoxy(60,16);
			printf("%c%c       %c%c",  219, 219, 219, 219);
			gotoxy(60,17);
			printf(" %c%c%c   %c%c%c  ",  219, 219, 219, 219,  219,  219);
			gotoxy(60,18);
			printf("   %c%c%c%c%c  ",  219, 219, 219, 219,  219);


			  _sleep(250);

  		 	gotoxy(60,10);
   			printf("                  ");
			gotoxy(60,11);
			printf("                  ");
			gotoxy(60,12);
			printf("                  ");
			gotoxy(60,13);
			printf("                  ");
			gotoxy(60,14);
 			printf("                  ");
			gotoxy(60,15);
 			printf("                  ");
			gotoxy(60,16);
 			printf("                  ");
			gotoxy(60,17);
			printf("                  ");
			gotoxy(60,18);
			printf("               ");

			_sleep(250);


		}




		  break;
        }
      }
//------------------------------------------------------------------------------
    else{
      for(y=0;;y++){//Pegando posição do 2º


	gotoxy(60,10);
	printf("   %c%c%c%c%c  ",  219, 219, 219, 219,  219);
	gotoxy(60,11);
	printf(" %c%c%c   %c%c%c  ",  219, 219, 219, 219,  219,  219);
	gotoxy(60,12);
	printf("%c%c       %c%c",  219, 219, 219, 219);
	gotoxy(60,13);
	printf("%c%c       %c%c",  219, 219, 219, 219);
	gotoxy(60,14);
	printf("%c%c       %c%c",  219, 219, 219, 219);
	gotoxy(60,15);
	printf("%c%c       %c%c",  219, 219, 219, 219);
	gotoxy(60,16);
	printf("%c%c       %c%c",  219, 219, 219, 219);
	gotoxy(60,17);
	printf(" %c%c%c   %c%c%c  ",  219, 219, 219, 219,  219,  219);
	gotoxy(60,18);
	printf("   %c%c%c%c%c  ",  219, 219, 219, 219,  219);

      	gotoxy(33,15);
        printf("Jogador >>%s<< O",nome2);
        gotoxy(33,17);
        printf("linha=>");
        scanf("%d",&lin);
        gotoxy(33,18);
        printf("coluna=>");
        scanf("%d",&col);

        if(v[lin][col]==' '){
          v[lin][col]='O';
          break;
        }
          else{
          	system("cls");

          	gotoxy(35,2);
        	printf("JOGO DA VELHA");

        for(i=0, lin=3, col=1;i<78;i++)
			{
				gotoxy(col,3);
				printf("%c", 205);
				gotoxy(col,25);
				printf("%c",205);
				gotoxy(1, lin);
				printf("%c",186);
				gotoxy(79,lin);
				printf("%c",186);
				col++;
				if(lin<25)
				lin++;
			}

			gotoxy(1,3);
			printf("%c", 201);
			gotoxy(1,25);
			printf("%c",200);
			gotoxy(79, 3);
			printf("%c",187);
			gotoxy(79,25);
			printf("%c",188);


     for(i=0, lin=5, col=34;i<16;i++)
			{
				gotoxy(col,7);
				printf("%c",205);
				gotoxy(col,11);
				printf("%c",205);
				gotoxy(38, lin);
				printf("%c",186);
				gotoxy(45,lin);
				printf("%c",186);
				col++;
				if(lin<13)
				lin++;
			}

			gotoxy(38,7);
			printf("%c", 206);
			gotoxy(38,11);
			printf("%c",206);
			gotoxy(45, 7);
			printf("%c",206);
			gotoxy(45,11);
			printf("%c",206);

    for(i=0,lin=5;i<l;i++,lin+=4){
      for(j=0, col=35;j<co;j++,col+=6){
      	  gotoxy(col,lin);
          printf("%c", v[i][j]);
        }
      }
          	gotoxy(33,19);//se a posi�ao ja estiver ocupada



        gotoxy(35,4);
        printf("0     1     2");
        gotoxy(32,5.5);
        printf("0");
    	gotoxy(32,9);
        printf("1");
        gotoxy(32,12);
        printf("2");

      		  for(i=0, lin=3, col=1;i<78;i++)
				{
					gotoxy(col,3);
					printf("%c", 205);
					gotoxy(col,25);
					printf("%c",205);
					gotoxy(1, lin);
					printf("%c",186);
					gotoxy(79,lin);
					printf("%c",186);
					col++;
					if(lin<25)
					lin++;
				}

				gotoxy(1,3);
				printf("%c", 201);
				gotoxy(1,25);
				printf("%c",200);
				gotoxy(79, 3);
				printf("%c",187);
				gotoxy(79,25);
				printf("%c",188);


     	for(i=0, lin=5, col=34;i<16;i++)
				{
					gotoxy(col,7);
					printf("%c",205);
					gotoxy(col,11);
					printf("%c",205);
					gotoxy(38, lin);
					printf("%c",186);
					gotoxy(45,lin);
					printf("%c",186);
					col++;
					if(lin<13)
					lin++;
				}

				gotoxy(38,7);
				printf("%c", 206);
				gotoxy(38,11);
				printf("%c",206);
				gotoxy(45, 7);
				printf("%c",206);
				gotoxy(45,11);
				printf("%c",206);

    for(i=0,lin=5;i<l;i++,lin+=4){
      for(j=0, col=35;j<co;j++,col+=6){
      	  gotoxy(col,lin);
          printf("%c", v[i][j]);
        }
      }
          	gotoxy(33,19);
            printf("Posicao ocupada!!! Digite novamente:");
            fflush(stdin);
        }
        }
        //---------------------------------------------------------------------------------------
        //validação linha,diagonal,diagonal secundario e coluna do jogador 2 e se deu velha
        val1=0;
        val2=0;
        val3=0;
        val4=0;
        velh=0;

        for(j=2,i=0;i<l;i++,j--){//diagonal secundaria
          if(v[i][j]=='O')
          val1++;
        }
        for(j=0,i=0;i<3;i++,j++){//diagonal primaria
          if(v[i][j]=='O')
          val2++;
        }
        for(j=0,i=0;i<3,j<3;i++,j++){//linhas e colunas
          if(v[i][0]=='O'&&v[i][1]=='O'&&v[i][2]=='O')
          val3++;

          if(v[0][j]=='O'&&v[1][j]=='O'&&v[2][j]=='O')
          val4++;
        }
        if(val1==3||val2==3||val3>0||val4>0){
          gotoxy(33,19);//jogador venceu
          printf("Jogador >>%s<< venceu!!!",nome2);

          for(i=0;i<7;i++){
 			gotoxy(60,10);
			printf("   %c%c%c%c%c  ",  219, 219, 219, 219,  219);
			gotoxy(60,11);
			printf(" %c%c%c   %c%c%c  ",  219, 219, 219, 219,  219,  219);
			gotoxy(60,12);
			printf("%c%c       %c%c",  219, 219, 219, 219);
			gotoxy(60,13);
			printf("%c%c       %c%c",  219, 219, 219, 219);
			gotoxy(60,14);
			printf("%c%c       %c%c",  219, 219, 219, 219);
			gotoxy(60,15);
			printf("%c%c       %c%c",  219, 219, 219, 219);
			gotoxy(60,16);
			printf("%c%c       %c%c",  219, 219, 219, 219);
			gotoxy(60,17);
			printf(" %c%c%c   %c%c%c  ",  219, 219, 219, 219,  219,  219);
			gotoxy(60,18);
			printf("   %c%c%c%c%c  ",  219, 219, 219, 219,  219);


			  _sleep(250);

  		 	gotoxy(60,10);
   			printf("                  ");
			gotoxy(60,11);
			printf("                  ");
			gotoxy(60,12);
			printf("                  ");
			gotoxy(60,13);
			printf("                  ");
			gotoxy(60,14);
 			printf("                  ");
			gotoxy(60,15);
 			printf("                  ");
			gotoxy(60,16);
 			printf("                  ");
			gotoxy(60,17);
			printf("                  ");
			gotoxy(60,18);
			printf("               ");

			_sleep(250);
}


          break;

        }
        for(i=0;i<l;i++){
          for(j=0;j<co;j++){
              if(v[i][j]!=' ')
              velh++;
          }
        }
        if(velh>8){
          gotoxy(33,19);
          printf("Jogo da velha!!!");//quando todas as posi�oes ja estiverem preenchidas e nenhum combina��o

		            for(i=0;i<7;i++){
 			gotoxy(60,10);
			printf("   %c%c%c%c%c  ",  219, 219, 219, 219,  219);
			gotoxy(60,11);
			printf(" %c%c%c   %c%c%c  ",  219, 219, 219, 219,  219,  219);
			gotoxy(60,12);
			printf("%c%c       %c%c",  219, 219, 219, 219);
			gotoxy(60,13);
			printf("%c%c       %c%c",  219, 219, 219, 219);
			gotoxy(60,14);
			printf("%c%c       %c%c",  219, 219, 219, 219);
			gotoxy(60,15);
			printf("%c%c       %c%c",  219, 219, 219, 219);
			gotoxy(60,16);
			printf("%c%c       %c%c",  219, 219, 219, 219);
			gotoxy(60,17);
			printf(" %c%c%c   %c%c%c  ",  219, 219, 219, 219,  219,  219);
			gotoxy(60,18);
			printf("   %c%c%c%c%c  ",  219, 219, 219, 219,  219);


			  _sleep(250);

  		 	gotoxy(60,10);
   			printf("                  ");
			gotoxy(60,11);
			printf("                  ");
			gotoxy(60,12);
			printf("                  ");
			gotoxy(60,13);
			printf("                  ");
			gotoxy(60,14);
 			printf("                  ");
			gotoxy(60,15);
 			printf("                  ");
			gotoxy(60,16);
 			printf("                  ");
			gotoxy(60,17);
			printf("                  ");
			gotoxy(60,18);
			printf("               ");

			_sleep(250);


   	  		gotoxy(8,10);
			printf("%c%c      %c%c",  219, 219, 219, 219);
			gotoxy(8,11);
			printf(" %c%c    %c%c ",  219, 219, 219, 219);
			gotoxy(8,12);
			printf("  %c%c  %c%c  ",  219, 219, 219, 219);
			gotoxy(8,13);
			printf("   %c%c%c%c    ",  219, 219, 219, 219);
			gotoxy(8,14);
			printf("    %c%c     ",  219, 219, 219, 219);
			gotoxy(8,15);
			printf("   %c%c%c%c    ",  219, 219, 219, 219);
			gotoxy(8,16);
			printf("  %c%c  %c%c  ",  219, 219, 219, 219);
			gotoxy(8,17);
			printf(" %c%c    %c%c ",  219, 219, 219, 219);
			gotoxy(8,18);
			printf("%c%c      %c%c",  219, 219, 219, 219);


			_sleep(250);

  		 	gotoxy(8,10);
   			printf("                         ");
			gotoxy(8,11);
			printf("                        ");
			gotoxy(8,12);
			printf("                        ");
			gotoxy(8,13);
			printf("                        ");
			gotoxy(8,14);
 			printf("                         ");
			gotoxy(8,15);
 			printf("                         ");
			gotoxy(8,16);
 			printf("                         ");
			gotoxy(8,17);
			printf("                         ");
			gotoxy(8,18);
			printf("              ");

			_sleep(250);


}

		  break;
        }
      }
    }gotoxy(33,20);
	 printf("Se quiser jogar novamente digite 1 =>");
     scanf("%d",& jog);
   }while (jog==1);
  }
  else
  	gotoxy(1,26);
    system("pause");
}
