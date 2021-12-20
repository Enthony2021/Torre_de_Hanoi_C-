#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <cmath>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");

    int const tam=50, jtam=20;
    int opmenu, opinstrucao, fixomenu=1, nivel, aux, erro=0, tl;
    int n=1, j, pmes, pmee, cnste, cpmee, tc, pt=0, pt1=0, pt2=0, pn=0, jsobra=0, jmin=0, njogadas=0;
    int ts, te, sts=0, ste=0, nste, contjogo=1;
    char finaljogo='n', mev = 'n', j1[jtam], j2[jtam], jt[jtam];
    int th[tam][tam];

    while (fixomenu == 1)
    {

        opmenu=0;

        while (opmenu!=1 && opmenu!=2 && opmenu!=3 && opmenu!=4)
        {

            cout << " " << endl;
            cout << " " << endl;
            cout << "       TORRE DE HANOI" << endl;
            cout << " " << endl;
            cout << " " << endl;
            cout << " " << endl;
            cout << "            MENU " << endl;
            cout << " " << endl;
            cout << " " << endl;
            cout << "    > Jogar (01 Jogador) (1) " << endl;
            cout << " " << endl;
            cout << "   > Jogar (02 Jogadores) (2)" << endl;
            cout << " " << endl;
            cout << "      > Instruções (3)" << endl;
            cout << " " << endl;
            cout << "         > Sair (4)" << endl;
            cout << " " << endl;
            cout << " " << endl;
            cout << " Digite o número correspondente a" << endl << " opção de sua escolha: ";
            cin >> opmenu;
            cout << " " << endl;
            cout << " " << endl;
            contjogo=1;
            system ("cls");

        }


        switch (opmenu)
        {

        case 1:

            cout << " " << endl;
            cout << "        TORRE DE HANOI" << endl;
            cout << " " << endl;
            cout << " " << endl;
            cout << " " << endl;
            cout << " Digite o seu nome: " << endl;
            cin.ignore ();
            cout << " ";
            cin.getline (j1, 20);
            system ("cls");

            while (contjogo==1)
            {

                cout << " " << endl;
                cout << " " << j1 << endl;
                cout << " " << endl;
                cout << "         Nível de Jogo: " << endl;
                cout << " " << endl;
                cout << "          > Fácil (1)" << endl;
                cout << "          > Médio (2)" << endl;
                cout << "         > Difícil (3)" << endl;
                cout << " " << endl;
                cout << " " << endl;
                cout << " " << endl;
                cout << " Selecione o nivel de Dificuldade. " << endl;
                cout << " " << endl;
                cout << " Digite o número correspondente ao  " << endl << " nível que deseja jogar: ";
                cin >> nivel;
                system ("cls");

                while (nivel!=1 && nivel!=2 && nivel!=3)
                {

                    cout << " " << endl;
                    cout << " " << j1 << endl;
                    cout << " " << endl;
                    cout << "         Nível de Jogo: " << endl;
                    cout << " " << endl;
                    cout << "         > Fácil (1)" << endl;
                    cout << "         > Médio (2)" << endl;
                    cout << "        > Difícil (3)" << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " Nível escolhido não existe!" << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " Selecione o nivel de Dificuldade. " << endl;
                    cout << " " << endl;
                    cout << " Digite o número correspondente ao " << endl << " nível que deseja jogar: ";
                    cin >> nivel;
                    system ("cls");

                }

                pt=0;
                pn=0;
                jsobra=0;
                jmin=0;
                njogadas=0;


                if (nivel==1)
                {
                    // Fácil.

                    tl = 3;
                    cpmee = 2;
                    cnste = 6;
                    tc=3;
                    jmin = 7;
                    pn=10;
                }

                else if (nivel==2)
                {
                    // Médio.
                    tl = 5;
                    cpmee = 4;
                    cnste = 15;
                    tc=3;
                    jmin = 31;
                    pn=45;
                }

                else
                {
                    // Difícil.
                    tl = 7;
                    cpmee = 6;
                    cnste = 28;
                    tc=3;
                    jmin = 127;
                    pn=180;
                }

                for (int i=0; i<tl; i++)
                {
                    for (int j=0; j<tc; j++)
                    {
                        if (j==0)
                        {
                            th[i][j] = n;
                            n++;
                        }
                        else
                        {
                            th[i][j] = 0;
                        }
                    }
                }
                n=1;


                while (finaljogo=='n')
                {

                    mev = 'n';

                    //Impressão da torre: e seleção da jogada.
                    cout << " " << endl;
                    cout << " " << j1 << endl;
                    cout << " " << endl;
                    cout << "        TORRE DE HANOI" << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " " << endl;

                    for (int i=0; i<tl; i++)
                    {

                        cout << "          ";
                        for (int j=0; j<tc; j++)
                        {
                            if (th[i][j]!=0)
                            {
                                cout << th[i][j] << "    ";
                            }
                            else
                            {
                                cout << "     ";
                            }
                        }
                        cout << endl;
                    }

                    cout << "         ***  ***  ***" << endl;
                    cout << "         |1|  |2|  |3|" << endl;
                    cout << "         ***  ***  ***" << endl;

                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " Digite a torre de saída: ";
                    cin >> ts;
                    cout << " " << endl;

                    cout << " Digite a torre de entrada: ";
                    cin >> te;
                    cout << " " << endl;


                    for (int i=0; i<tl; i++)
                    {
                        sts = sts + th[i][ts-1];
                        ste = ste + th[i][te-1];
                    }
                    system ("cls");


                    while (mev=='n')
                    {

                        while ( (((ts!=1 && ts!=2 && ts!=3) || (te!=1 && te!=2 && te!=3)) || te==ts ) || (sts==0) )
                        {

                            sts = 0;
                            ste = 0;

                            cout << " " << endl;
                            cout << " " << j1 << endl;
                            cout << " " << endl;
                            cout << "        TORRE DE HANOI" << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;

                            for (int i=0; i<tl; i++)
                            {

                                cout << "          ";
                                for (int j=0; j<tc; j++)
                                {
                                    if (th[i][j]!=0)
                                    {
                                        cout << th [i][j] << "    ";
                                    }
                                    else
                                    {
                                        cout << "     ";
                                    }
                                }
                                cout << endl;
                            }

                            cout << "         ***  ***  ***" << endl;
                            cout << "         |1|  |2|  |3|" << endl;
                            cout << "         ***  ***  ***" << endl;
                            cout << " " << endl;
                            cout << " " << endl;

                            if (((ts!=1 && ts!=2 && ts!=3) || (te!=1 && te!=2 && te!=3)) || te==ts )
                            {
                                cout << " Erro. Alguma Torre escolhida não existe ou são iguais!" << endl;
                            }
                            else
                            {
                                cout << " Erro, jogada inválida! Torre de saída vazia!" << endl;
                            }
                            cout << " " << endl;
                            cout << " Digite a torre de saída: ";
                            cin >> ts;
                            cout << " " << endl;

                            cout << " Digite a torre de entrada: ";
                            cin >> te;
                            cout << " " << endl;

                            for (int i=0; i<tl; i++)
                            {
                                sts = sts + th[i][ts-1];
                                ste = ste + th[i][te-1];
                            }

                            system ("cls");
                        }


                        if (ste==0)
                        {

                            aux = 10;

                            for (int i=0; i<tl; i++)
                            {
                                if ( (aux>th[i][ts-1]) && (th[i][ts-1]!=0 ))
                                {
                                    aux = th[i][ts-1];
                                    pmes = i;
                                }
                            }


                            pmee = cpmee;

                            aux              =   th[pmee][te-1];
                            th[pmee][te-1]   =   th[pmes][ts-1];
                            th[pmes][ts-1]   =   aux;

                            mev = 's';

                        }


                        if (ste!=0)
                        {

                            aux = 10;

                            for (int i=0; i<tl; i++)
                            {
                                if ( (aux>th[i][ts-1]) && (th[i][ts-1]!=0 ))
                                {
                                    aux = th[i][ts-1];
                                    pmes = i;
                                }
                            }

                            aux = 10;
                            for (int i=0; i<tl; i++)
                            {
                                if ( (aux>th[i][te-1]) && (th[i][te-1]!=0 ))
                                {
                                    aux = th[i][te-1];
                                    pmee = i-1;
                                }
                            }

                            if (th[pmee+1][te-1] < th[pmes][ts-1])
                            {

                                cout << " " << endl;
                                cout << " " << j1 << endl;
                                cout << " " << endl;
                                cout << "        TORRE DE HANOI" << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;

                                for (int i=0; i<tl; i++)
                                {

                                    cout << "          ";
                                    for (int j=0; j<tc; j++)
                                    {
                                        if (th[i][j]!=0)
                                        {
                                            cout << th[i][j] << "    ";
                                        }
                                        else
                                        {
                                            cout << "     ";
                                        }
                                    }
                                    cout << endl;
                                }

                                cout << "         ***  ***  ***" << endl;
                                cout << "         |1|  |2|  |3|" << endl;
                                cout << "         ***  ***  ***" << endl;

                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " Erro! Jogada inválida, um número maior  " << endl;
                                cout << " não pode ficar acima de um menor!" << endl;
                                cout << " " << endl;
                                ste = 0;
                                cout << " Digite a torre de saída: ";
                                cin >> ts;
                                cout << " " << endl;

                                cout << "   Digite a torre de entrada: ";
                                cin >> te;
                                cout << " " << endl;

                                for (int i=0; i < tl; i++)
                                {
                                    sts = sts + th[i][ts-1];
                                    ste = ste + th[i][te-1];
                                }
                                system ("cls");

                            }

                            else
                            {

                                aux               =   th[pmee][te-1];
                                th[pmee][te-1]   =   th[pmes][ts-1];
                                th[pmes][ts-1]   =   aux;

                                mev = 's';
                            }
                        }
                    }

                    njogadas++;
                    sts = 0;
                    ste = 0;
                    nste = 0;

                    for (int i=0; i<tl; i++)
                    {
                        nste = nste + th[i][te-1];
                    }

                    if (nste!=cnste || te==1)
                    {

                    }

                    else
                    {
                        finaljogo = 's';
                        jsobra = njogadas - jmin;
                        pt= pn - jsobra;

                        if (pt<=0)
                        {
                            pt=1;
                        }

                    }
                }

                cout << " " << endl;
                cout << " " << j1 << endl;
                cout << " " << endl;
                cout << "        TORRE DE HANOI" << endl;
                cout << " " << endl;
                cout << " " << endl;
                cout << " " << endl;

                for (int i=0; i<tl; i++)
                {

                    cout << "          ";
                    for (int j=0; j<tc; j++)
                    {
                        if (th[i][j]!=0)
                        {
                            cout << th[i][j] << "    ";
                        }
                        else
                        {
                            cout << "     ";
                        }
                    }
                    cout << endl;
                }

                cout << "         ***  ***  ***" << endl;
                cout << "         |1|  |2|  |3|" << endl;
                cout << "         ***  ***  ***" << endl;
                cout << " " << endl;
                cout << " " << endl;
                cout << " Parabéns, "<< j1 << ", você concluiu!" << endl;
                cout << " Sua pontuação neste jogo: " << pt << " Pontos!" <<  endl;
                cout << " " << endl;
                cout << " Continuar jogando? " << endl;
                cout << " Sim: 1 | Não: 0" << endl;
                cout << " ";
                cin >> contjogo;
                system("cls");

                while (contjogo!=1 && contjogo!=0)
                {
                    cout << " " << endl;
                    cout << " " << j1 << endl;
                    cout << " " << endl;
                    cout << "        TORRE DE HANOI" << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " " << endl;

                    for (int i=0; i<tl; i++)
                    {

                        cout << "          ";
                        for (int j=0; j<tc; j++)
                        {
                            if (th[i][j]!=0)
                            {
                                cout << th[i][j] << "    ";
                            }
                            else
                            {
                                cout << "     ";
                            }
                        }
                        cout << endl;
                    }

                    cout << "         ***  ***  ***" << endl;
                    cout << "         |1|  |2|  |3|" << endl;
                    cout << "         ***  ***  ***" << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " Parabéns, "<< j1 << ", você concluiu!" << endl;
                    cout << " Sua pontuação neste jogo: " << pt << " Pontos!" <<  endl;
                    cout << " " << endl;
                    cout << " Continuar jogando? " << endl;
                    cout << " Sim: 1 | Não: 0" << endl;
                    cout << " ";
                    cin >> contjogo;
                    system("cls");

                }

                finaljogo = 'n';
                sts = 0;
                ste = 0;
                ts = 0;
                te = 0;

            }
            break;

        case 2:

            cout << " " << endl;
            cout << "        TORRE DE HANOI" << endl;
            cout << " " << endl;
            cout << " " << endl;
            cout << " Jogador 1" << endl;
            cout << " Digite o seu nome: " << endl;
            cout << " ";
            cin.ignore ();
            cin.getline (j1, 20);
            cout << " " << endl;
            cout << " " << endl;
            cout << " Jogador 2" << endl;
            cout << " Digite o seu nome: " << endl;
            cout << " ";
            cin.getline (j2, 20);
            system ("cls");

            while (contjogo==1)
            {

                cout << " " << endl;
                cout << "         Nível de Jogo: " << endl;
                cout << " " << endl;
                cout << "          > Fácil (1)" << endl;
                cout << "          > Médio (2)" << endl;
                cout << "         > Difícil (3)" << endl;
                cout << " " << endl;
                cout << " " << endl;
                cout << " " << endl;
                cout << " Selecione o nivel de Dificuldade. " << endl;
                cout << " " << endl;
                cout << " Digite o número correspondente ao " << endl << " nível que deseja jogar: ";
                cin >> nivel;
                system ("cls");

                while (nivel!=1 && nivel!=2 && nivel!=3)
                {

                    cout << " " << endl;
                    cout << "         Nível de Jogo: " << endl;
                    cout << " " << endl;
                    cout << "          > Fácil (1)" << endl;
                    cout << "          > Médio (2)" << endl;
                    cout << "         > Difícil (3)" << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " Nível escolhido não existe!" << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " Selecione o nivel de Dificuldade. " << endl;
                    cout << " " << endl;
                    cout << " Digite o número correspondente ao " << endl << " nível que deseja jogar: ";
                    cin >> nivel;
                    system ("cls");

                }

                pt=0;
                pn=0;
                jsobra=0;
                jmin=0;
                njogadas=0;


                if (nivel==1)
                {

                    tl = 3;
                    cpmee = 2;
                    cnste = 6;
                    tc=3;
                    jmin = 7;
                    pn=10;
                }

                else if (nivel==2)
                {

                    tl = 5;
                    cpmee = 4;
                    cnste = 15;
                    tc=3;
                    jmin = 31;
                    pn=45;
                }

                else
                {

                    tl = 7;
                    cpmee = 6;
                    cnste = 28;
                    tc=3;
                    jmin = 127;
                    pn=180;
                }

                for (int i=0; i<tl; i++)
                {
                    for (int j=0; j<tc; j++)
                    {
                        if (j==0)
                        {
                            th[i][j] = n;
                            n++;
                        }
                        else
                        {
                            th[i][j] = 0;
                        }
                    }
                }
                n=1;

                while (finaljogo=='n')
                {

                    mev = 'n';

                    cout << " " << endl;
                    cout << " " << j1 << endl;
                    cout << " " << endl;
                    cout << "        TORRE DE HANOI" << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " " << endl;

                    for (int i=0; i<tl; i++)
                    {

                        cout << "          ";
                        for (int j=0; j<tc; j++)
                        {
                            if (th[i][j]!=0)
                            {
                                cout << th[i][j] << "    ";
                            }
                            else
                            {
                                cout << "     ";
                            }
                        }

                        cout << endl;
                    }
                    cout << "         ***  ***  ***" << endl;
                    cout << "         |1|  |2|  |3|" << endl;
                    cout << "         ***  ***  ***" << endl;

                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " Digite a torre de saída: ";
                    cin >> ts;
                    cout << " " << endl;

                    cout << " Digite a torre de entrada: ";
                    cin >> te;
                    cout << " " << endl;

                    for (int i=0; i<tl; i++)
                    {
                        sts = sts + th[i][ts-1];
                        ste = ste + th[i][te-1];
                    }
                    system ("cls");

                    while (mev=='n')
                    {

                        while ( (((ts!=1 && ts!=2 && ts!=3) || (te!=1 && te!=2 && te!=3)) || te==ts ) || (sts==0) )
                        {

                            sts = 0;
                            ste = 0;

                            cout << " " << endl;
                            cout << " " << j1 << endl;
                            cout << " " << endl;
                            cout << "        TORRE DE HANOI" << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;

                            for (int i=0; i<tl; i++)
                            {

                                cout << "          ";
                                for (int j=0; j<tc; j++)
                                {
                                    if (th[i][j]!=0)
                                    {
                                        cout << th [i][j] << "    ";
                                    }
                                    else
                                    {
                                        cout << "     ";
                                    }
                                }

                                cout << endl;
                            }
                            cout << "         ***  ***  ***" << endl;
                            cout << "         |1|  |2|  |3|" << endl;
                            cout << "         ***  ***  ***" << endl;

                            cout << " " << endl;
                            cout << " " << endl;

                            if (((ts!=1 && ts!=2 && ts!=3) || (te!=1 && te!=2 && te!=3)) || te==ts )
                            {
                                cout << " Erro. Alguma Torre escolhida não existe ou são iguais!" << endl;
                            }
                            else
                            {
                                cout << " Erro, jogada inválida! Torre de saída vazia!" << endl;
                            }
                            cout << " " << endl;
                            cout << "   Digite a torre de saída: ";
                            cin >> ts;
                            cout << " " << endl;

                            cout << " Digite a torre de entrada: ";
                            cin >> te;
                            cout << " " << endl;

                            for (int i=0; i<tl; i++)
                            {
                                sts = sts + th[i][ts-1];
                                ste = ste + th[i][te-1];
                            }
                            system ("cls");
                        }

                        if (ste==0)
                        {

                            aux = 10;

                            for (int i=0; i<tl; i++)
                            {
                                if ( (aux>th[i][ts-1]) && (th[i][ts-1]!=0 ))
                                {
                                    aux = th[i][ts-1];
                                    pmes = i;
                                }
                            }

                            pmee = cpmee;

                            aux              =   th[pmee][te-1];
                            th[pmee][te-1]   =   th[pmes][ts-1];
                            th[pmes][ts-1]   =   aux;

                            mev = 's';
                        }

                        if (ste!=0)
                        {

                            aux = 10;

                            for (int i=0; i<tl; i++)
                            {
                                if ( (aux>th[i][ts-1]) && (th[i][ts-1]!=0 ))
                                {
                                    aux = th[i][ts-1];
                                    pmes = i;
                                }
                            }

                            aux = 10;
                            for (int i=0; i<tl; i++)
                            {
                                if ( (aux>th[i][te-1]) && (th[i][te-1]!=0 ))
                                {
                                    aux = th[i][te-1];
                                    pmee = i-1;
                                }
                            }

                            if (th[pmee+1][te-1] < th[pmes][ts-1])
                            {

                                cout << " " << endl;
                                cout << " " << j1 << endl;
                                cout << " " << endl;
                                cout << "        TORRE DE HANOI" << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;

                                for (int i=0; i<tl; i++)
                                {

                                    cout << "          ";
                                    for (int j=0; j<tc; j++)
                                    {
                                        if (th[i][j]!=0)
                                        {
                                            cout << th[i][j] << "    ";
                                        }
                                        else
                                        {
                                            cout << "     ";
                                        }
                                    }

                                    cout << endl;
                                }
                                cout << "         ***  ***  ***" << endl;
                                cout << "         |1|  |2|  |3|" << endl;
                                cout << "         ***  ***  ***" << endl;

                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " Erro! Jogada inválida, um número maior " << endl << " não pode ficar acima de um menor!" << endl;
                                cout << " " << endl;
                                ste = 0;
                                cout << " Digite a torre de saída: ";
                                cin >> ts;
                                cout << " " << endl;

                                cout << " Digite a torre de entrada: ";
                                cin >> te;
                                cout << " " << endl;

                                for (int i=0; i < tl; i++)
                                {
                                    sts = sts + th[i][ts-1];
                                    ste = ste + th[i][te-1];
                                }
                                system ("cls");
                            }

                            else
                            {
                                aux              =   th[pmee][te-1];
                                th[pmee][te-1]   =   th[pmes][ts-1];
                                th[pmes][ts-1]   =   aux;

                                mev = 's';
                            }
                        }
                    }

                    njogadas++;
                    ste = 0;
                    sts = 0;
                    nste = 0;

                    for (int i=0; i<tl; i++)
                    {
                        nste = nste + th[i][te-1];
                    }

                    if (nste!=cnste || te==1)
                    {

                    }

                    else
                    {
                        finaljogo = 's';
                        jsobra = njogadas - jmin;
                        pt= pn - jsobra;

                        if (pt<=0)
                        {
                            pt=1;
                        }

                    }
                }

                cout << " " << endl;
                cout << " " << j1 << endl;
                cout << " " << endl;
                cout << "        TORRE DE HANOI" << endl;
                cout << " " << endl;
                cout << " " << endl;
                cout << " " << endl;

                for (int i=0; i<tl; i++)
                {

                    cout << "          ";
                    for (int j=0; j<tc; j++)
                    {
                        if (th[i][j]!=0)
                        {
                            cout << th[i][j] << "    ";
                        }
                        else
                        {
                            cout << "     ";
                        }
                    }
                    cout << endl;
                }

                cout << "         ***  ***  ***" << endl;
                cout << "         |1|  |2|  |3|" << endl;
                cout << "         ***  ***  ***" << endl;
                cout << " " << endl;
                cout << " " << endl;
                cout << " Parabéns, "<< j1 << ", você concluiu!" << endl;
                cout << " Sua pontuação neste jogo: " << pt << " Pontos!" <<  endl;
                pt1 = pt;
                nste = 0;
                sts = 0;
                ste = 0;
                ts = 0;
                te = 0;
                cout << " " << endl;

                for (int i=0; i<18; i++)
                {

                    for (int j=0; j<10000; j++)
                    {
                        for (int k=0; k<10000; k++)
                        {

                        }
                    }
                }
                system("cls");

                cout << " " << endl;
                cout << " Carregando... " << endl;
                cout << " " << endl;
                cout << " ";

                for (int i=0; i<32; i++)
                {

                    if (i%2==0)
                    {

                        cout << "| ";
                    }

                    for (int j=0; j<8000; j++)
                    {
                        for (int k=0; k<8000; k++)
                        {

                        }
                    }
                }

                system("cls");

                finaljogo = 'n';
                sts = 0;
                ste = 0;
                ts = 0;
                te = 0;
                pt = 0;
                jsobra=0;
                njogadas=0;

                for (int i=0; i<tl; i++)
                {
                    for (int j=0; j<tc; j++)
                    {
                        if (j==0)
                        {
                            th[i][j] = n;
                            n++;
                        }
                        else
                        {
                            th[i][j] = 0;
                        }
                    }
                }
                n=1;

                while (finaljogo=='n')
                {

                    mev = 'n';

                    cout << " " << endl;
                    cout << " " << j2 << endl;
                    cout << " " << endl;
                    cout << "        TORRE DE HANOI" << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " " << endl;

                    for (int i=0; i<tl; i++)
                    {
                        cout << "          ";
                        for (int j=0; j<tc; j++)
                        {
                            if (th[i][j]!=0)
                            {
                                cout << th[i][j] << "    ";
                            }
                            else
                            {
                                cout << "     ";
                            }
                        }
                        cout << endl;
                    }

                    cout << "         ***  ***  ***" << endl;
                    cout << "         |1|  |2|  |3|" << endl;
                    cout << "         ***  ***  ***" << endl;

                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " Digite a torre de saída: ";
                    cin >> ts;
                    cout << " " << endl;

                    cout << " Digite a torre de entrada: ";
                    cin >> te;
                    cout << " " << endl;

                    for (int i=0; i<tl; i++)
                    {
                        sts = sts + th[i][ts-1];
                        ste = ste + th[i][te-1];
                    }
                    system ("cls");

                    while (mev=='n')
                    {

                        while ( (((ts!=1 && ts!=2 && ts!=3) || (te!=1 && te!=2 && te!=3)) || te==ts ) || (sts==0) )
                        {

                            sts = 0;
                            ste = 0;

                            cout << " " << endl;
                            cout << " " << j2 << endl;
                            cout << " " << endl;
                            cout << "        TORRE DE HANOI" << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;

                            for (int i=0; i<tl; i++)
                            {
                                cout << "          ";
                                for (int j=0; j<tc; j++)
                                {
                                    if (th[i][j]!=0)
                                    {
                                        cout << th [i][j] << "    ";
                                    }
                                    else
                                    {
                                        cout << "     ";
                                    }
                                }
                                cout << endl;
                            }

                            cout << "         ***  ***  ***" << endl;
                            cout << "         |1|  |2|  |3|" << endl;
                            cout << "         ***  ***  ***" << endl;

                            cout << " " << endl;
                            cout << " " << endl;
                            if (((ts!=1 && ts!=2 && ts!=3) || (te!=1 && te!=2 && te!=3)) || te==ts )
                            {
                                cout << " Erro. Alguma Torre escolhida não existe ou são iguais!" << endl;
                            }
                            else
                            {
                                cout << " Erro, jogada inválida! Torre de saída vazia!" << endl;
                            }
                            cout << " " << endl;
                            cout << " Digite a torre de saída: ";
                            cin >> ts;
                            cout << " " << endl;

                            cout << " Digite a torre de entrada: ";
                            cin >> te;
                            cout << " " << endl;

                            for (int i=0; i<tl; i++)
                            {
                                sts = sts + th[i][ts-1];
                                ste = ste + th[i][te-1];
                            }
                            system ("cls");
                        }

                        if (ste==0)
                        {

                            aux = 10;

                            for (int i=0; i<tl; i++)
                            {
                                if ( (aux>th[i][ts-1]) && (th[i][ts-1]!=0 ))
                                {
                                    aux = th[i][ts-1];
                                    pmes = i;
                                }
                            }


                            pmee = cpmee;

                            aux              =   th[pmee][te-1];
                            th[pmee][te-1]   =   th[pmes][ts-1];
                            th[pmes][ts-1]   =   aux;

                            mev = 's';
                        }

                        if (ste!=0)
                        {

                            aux = 10;

                            for (int i=0; i<tl; i++)
                            {
                                if ( (aux>th[i][ts-1]) && (th[i][ts-1]!=0 ))
                                {
                                    aux = th[i][ts-1];
                                    pmes = i;
                                }
                            }

                            aux = 10;
                            for (int i=0; i<tl; i++)
                            {
                                if ( (aux>th[i][te-1]) && (th[i][te-1]!=0 ))
                                {
                                    aux = th[i][te-1];
                                    pmee = i-1;
                                }
                            }

                            if (th[pmee+1][te-1] < th[pmes][ts-1])
                            {
                                cout << " " << endl;
                                cout << " " << j2 << endl;
                                cout << " " << endl;
                                cout << "        TORRE DE HANOI" << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " " << endl;

                                for (int i=0; i<tl; i++)
                                {

                                    cout << "          ";
                                    for (int j=0; j<tc; j++)
                                    {
                                        if (th[i][j]!=0)
                                        {
                                            cout << th[i][j] << "    ";
                                        }
                                        else
                                        {
                                            cout << "     ";
                                        }
                                    }
                                    cout << endl;
                                }

                                cout << "         ***  ***  ***" << endl;
                                cout << "         |1|  |2|  |3|" << endl;
                                cout << "         ***  ***  ***" << endl;

                                cout << " " << endl;
                                cout << " " << endl;
                                cout << " Erro! Jogada inválida, um número maior " << endl << " não pode ficar acima de um menor!" << endl;
                                cout << " " << endl;
                                ste = 0;
                                cout << " Digite a torre de saída: ";
                                cin >> ts;
                                cout << " " << endl;

                                cout << " Digite a torre de entrada: ";
                                cin >> te;
                                cout << " " << endl;

                                for (int i=0; i < tl; i++)
                                {
                                    sts = sts + th[i][ts-1];
                                    ste = ste + th[i][te-1];
                                }
                                system ("cls");
                            }

                            else
                            {

                                aux               =   th[pmee][te-1];
                                th[pmee][te-1]   =   th[pmes][ts-1];
                                th[pmes][ts-1]   =   aux;

                                mev = 's';
                            }
                        }
                    }

                    njogadas++;
                    sts = 0;
                    ste = 0;
                    nste = 0;

                    for (int i=0; i<tl; i++)
                    {
                        nste = nste + th[i][te-1];
                    }

                    if (nste!=cnste || te==1)
                    {

                    }

                    else
                    {
                        finaljogo = 's';
                        jsobra = njogadas - jmin;
                        pt= pn - jsobra;

                        if (pt<=0)
                        {
                            pt=1;
                        }

                    }
                }

                cout << " " << endl;
                cout << " " << j2 << endl;
                cout << " " << endl;
                cout << "        TORRE DE HANOI" << endl;
                cout << " " << endl;
                cout << " " << endl;
                cout << " " << endl;

                for (int i=0; i<tl; i++)
                {

                    cout << "          ";
                    for (int j=0; j<tc; j++)
                    {
                        if (th[i][j]!=0)
                        {
                            cout << th[i][j] << "    ";
                        }
                        else
                        {
                            cout << "     ";
                        }
                    }
                    cout << endl;
                }

                cout << "         ***  ***  ***" << endl;
                cout << "         |1|  |2|  |3|" << endl;
                cout << "         ***  ***  ***" << endl;
                cout << " " << endl;
                cout << " " << endl;
                cout << " Parabéns, "<< j2 << ", você concluiu!" << endl;
                cout << " Sua pontuação neste jogo: " << pt << " Pontos!" <<  endl;
                pt2 = pt;
                nste = 0;
                sts = 0;
                ste = 0;
                ts = 0;
                te = 0;

                cout << " " << endl;
                cout << " " << endl;

                cout << " " << endl;
                cout << " Carregando... " << endl;
                cout << " " << endl;
                cout << " ";

                for (int i=0; i<25; i++)
                {

                    for (int j=0; j<10000; j++)
                    {
                        for (int k=0; k<10000; k++)
                        {

                        }
                    }
                }

                system("cls");

                cout << " " << endl;
                cout << "        TORRE DE HANOI" << endl;
                cout << " " << endl;
                cout << " " << endl;
                cout << " " << endl;
                cout << " > " << j1 << ": " << pt1 << " pontos. " << endl;
                cout << " " << endl;
                cout << " > " << j2 << ": " << pt2 << " pontos. " << endl;
                cout << " " << endl;
                cout << "________________________________________" << endl;
                cout << "________________________________________" << endl;
                cout << " " << endl;
                if (pt1>pt2)
                {
                    cout << " VENCEDOR(A): " << j1 << endl;
                }

                else if (pt1<pt2)
                {
                    cout << " VENCEDOR(A): " << j2 << endl;
                }
                else
                {
                    cout << "            EMPATE! " << endl;
                }

                cout << "________________________________________" << endl;
                cout << "________________________________________" << endl;

                cout << "  "<< endl;
                cout << "  "<< endl;
                cout << " Continuar jogando? " << endl;
                cout << " Sim: 1 | Não: 0" << endl;
                cout << " ";
                cin >> contjogo;
                system("cls");

                while (contjogo!=1 && contjogo!=0)
                {

                    cout << " " << endl;
                    cout << "       TORRE DE HANOI" << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " > " << j1 << ": " << pt1 << " pontos. " << endl;
                    cout << " " << endl;
                    cout << " > " << j2 << ": " << pt2 << " pontos. " << endl;
                    cout << " " << endl;
                    cout << "________________________________________" << endl;
                    cout << "________________________________________" << endl;
                    cout << " " << endl;
                    if (pt1>pt2)
                    {
                        cout << " VENCEDOR(A): " << j1 << endl;
                    }

                    else if (pt1<pt2)
                    {
                        cout << " VENCEDOR(A): " << j2 << endl;
                    }
                    else
                    {
                        cout << "            EMPATE! " << endl;
                    }

                    cout << "________________________________________" << endl;
                    cout << "________________________________________" << endl;

                    cout << "  "<< endl;
                    cout << " " << endl;
                    cout << " Continuar jogando? " << endl;
                    cout << " Sim: 1 | Não: 0" << endl;
                    cout << " ";
                    cin >> contjogo;
                    system("cls");

                }

                finaljogo = 'n';
                sts = 0;
                ste = 0;
                ts = 0;
                te = 0;

            }



            break;


        case 3:
            opinstrucao = 0;

            while (opinstrucao!=1)
            {


                cout << " " << endl;
                cout << " " << endl;
                cout << "            TORRE DE HANOI" << endl;
                cout << " " << endl;
                cout << " " << endl;
                cout << "               Instruções: " << endl;
                cout << " " << endl;
                cout << "    No jogo, Torre de Hanoi, você terá três " << endl;
                cout << " torres, na primeira torre estarão 03, 05 ou " << endl;
                cout << " 07 números em ordem crescente de cima para " << endl << " baixo.  " << endl;
                cout << " " << endl;
                cout << " Exemplo: " << endl;

                for (int i=0; i<3; i++)
                {
                    for (int j=0; j<3; j++)
                    {
                        if (j==0)
                        {
                            th[i][j] = n;
                            n++;
                        }
                        else
                        {
                            th[i][j] = 0;
                        }
                    }
                }
                n=1;

                for (int i=0; i<3; i++)
                {

                    cout << "          ";
                    for (int j=0; j<3; j++)
                    {
                        if (th[i][j]!=0)
                        {
                            cout << th[i][j] << "    ";
                        }
                        else
                        {
                            cout << "     ";
                        }
                    }

                    cout << endl;
                }

                cout << "         ***  ***  ***" << endl;
                cout << "         |1|  |2|  |3|" << endl;
                cout << "         ***  ***  ***" << endl;
                cout << " " << endl;

                for (int i=0; i<25; i++)
                {

                    for (int j=0; j<10000; j++)
                    {
                        for (int k=0; k<10000; k++)
                        {

                        }
                    }
                }
                system("cls");

                cout << " " << endl;
                cout << " " << endl;
                cout << "             TORRE DE HANOI" << endl;
                cout << " " << endl;
                cout << " " << endl;
                cout << "               Instruções: " << endl;
                cout << " " << endl;
                cout << " 1° - Você poderá mover um número por vez "<< endl << " para outra torre. " << endl;
                cout << " " << endl;
                cout << " " << endl;

                for (int i=0; i<3; i++)
                {
                    for (int j=0; j<3; j++)
                    {
                        if (j==0)
                        {
                            th[i][j] = n;
                            n++;
                        }
                        else
                        {
                            th[i][j] = 0;
                        }
                    }
                }
                n=1;

                for (int i=0; i<3; i++)
                {

                    cout << "          ";
                    for (int j=0; j<3; j++)
                    {
                        if (th[i][j]!=0)
                        {
                            cout << th[i][j] << "    ";
                        }
                        else
                        {
                            cout << "     ";
                        }
                    }

                    cout << endl;
                }

                cout << "         ***  ***  ***" << endl;
                cout << "         |1|  |2|  |3|" << endl;
                cout << "         ***  ***  ***" << endl;
                cout << " " << endl;

                for (int i=0; i<12; i++)
                {

                    for (int j=0; j<10000; j++)
                    {
                        for (int k=0; k<10000; k++)
                        {

                        }
                    }

                }
                system("cls");

                cout << " " << endl;
                cout << " " << endl;
                cout << "             TORRE DE HANOI" << endl;
                cout << " " << endl;
                cout << " " << endl;
                cout << "               Instruções: " << endl;
                cout << " " << endl;
                cout << " 1° - Você poderá mover um número por vez "<< endl << " para outra torre. " << endl;
                cout << " " << endl;
                cout << " " << endl;
                n=2;

                for (int i=0; i<3; i++)
                {
                    for (int j=0; j<3; j++)
                    {

                        if (j==0 && i>0)
                        {
                            th[i][j] = n;
                            n++;
                        }
                        else if (i==2 && j==1)
                        {
                            th[i][j] = 1;
                        }

                        else
                        {
                            th[i][j] = 0;
                        }
                    }
                }
                n=1;

                for (int i=0; i<3; i++)
                {
                    cout << "          ";
                    for (int j=0; j<3; j++)
                    {
                        if (th[i][j]!=0)
                        {
                            cout << th[i][j] << "    ";
                        }
                        else
                        {
                            cout << "     ";
                        }
                    }
                    cout << endl;
                }

                cout << "         ***  ***  ***" << endl;
                cout << "         |1|  |2|  |3|" << endl;
                cout << "         ***  ***  ***" << endl;
                cout << " " << endl;

                for (int i=0; i<10; i++)
                {

                    for (int j=0; j<10000; j++)
                    {
                        for (int k=0; k<10000; k++)
                        {
                        }
                    }
                }

                system("cls");

                cout << " " << endl;
                cout << " " << endl;
                cout << "             TORRE DE HANOI" << endl;
                cout << " " << endl;
                cout << " " << endl;
                cout << "               Instruções: " << endl;
                cout << " " << endl;
                cout << " 1° - Você poderá mover um número por vez "<< endl << " para outra torre. " << endl;
                cout << " " << endl;
                cout << " " << endl;
                n=3;

                for (int i=0; i<3; i++)
                {
                    for (int j=0; j<3; j++)
                    {

                        if (j==0 && i>1)
                        {
                            th[i][j] = n;

                        }
                        else if (i==n-1 && j==1)
                        {
                            th[i][j] = 1;
                        }
                        else if (i==n-1 && j==2)
                        {
                            th[i][j] = 2;
                        }
                        else
                        {
                            th[i][j] = 0;
                        }
                    }
                }
                n=1;

                for (int i=0; i<3; i++)
                {
                    cout << "          ";
                    for (int j=0; j<3; j++)
                    {
                        if (th[i][j]!=0)
                        {
                            cout << th[i][j] << "    ";
                        }
                        else
                        {
                            cout << "     ";
                        }
                    }

                    cout << endl;
                }

                cout << "         ***  ***  ***" << endl;
                cout << "         |1|  |2|  |3|" << endl;
                cout << "         ***  ***  ***" << endl;
                cout << " " << endl;

                for (int i=0; i<12; i++)
                {

                    for (int j=0; j<10000; j++)
                    {
                        for (int k=0; k<10000; k++)
                        {

                        }
                    }
                }
                system("cls");

                cout << " " << endl;
                cout << " " << endl;
                cout << "             TORRE DE HANOI" << endl;
                cout << " " << endl;
                cout << " " << endl;
                cout << "               Instruções: " << endl;
                cout << " " << endl;
                cout << " 2° - Um número não pode ficar acima de outro " << endl << " que é menor que ele." << endl;
                cout << " " << endl;
                cout << " Exemplos: " << endl;
                cout << " " << endl;
                cout << "   Válido: 1  ou 3  |  Inválido: 5 ou 7  " << endl;
                cout << "           2     7  |            4    3  " << endl;
                cout << "          ***   *** |           ***  *** " << endl;
                cout << "          ***   *** |           ***  *** " << endl;
                cout << " " << endl;

                for (int i=0; i<16; i++)
                {

                    for (int j=0; j<10000; j++)
                    {
                        for (int k=0; k<10000; k++)
                        {

                        }
                    }
                }
                system("cls");

                cout << " " << endl;
                cout << " " << endl;
                cout << "             TORRE DE HANOI" << endl;
                cout << " " << endl;
                cout << " " << endl;
                cout << "               Instruções: " << endl;
                cout << " " << endl;
                cout << " 3° - O jogo acaba quando todos os números, " << endl;
                cout << " forem transferidos para outra coluna diferente da" << endl << " primeira, em  ordem crescente de cima pra baixo." << endl;
                cout << " Exemplo: " << endl;
                cout << " " << endl;
                n=2;

                for (int i=0; i<3; i++)
                {
                    for (int j=0; j<3; j++)
                    {

                        if (j==2 && i>0)
                        {
                            th[i][j] = n;
                            n++;
                        }
                        else if (i==2 && j==1)
                        {
                            th[i][j] = 1;
                        }

                        else
                        {
                            th[i][j] = 0;
                        }
                    }
                }
                n=1;

                for (int i=0; i<3; i++)
                {
                    cout << "          ";
                    for (int j=0; j<3; j++)
                    {
                        if (th[i][j]!=0)
                        {
                            cout << th[i][j] << "    ";
                        }
                        else
                        {
                            cout << "     ";
                        }
                    }
                    cout << endl;
                }

                cout << "         ***  ***  ***" << endl;
                cout << "         |1|  |2|  |3|" << endl;
                cout << "         ***  ***  ***" << endl;
                cout << " " << endl;

                for (int i=0; i<16; i++)
                {

                    for (int j=0; j<10000; j++)
                    {
                        for (int k=0; k<10000; k++)
                        {

                        }
                    }

                }
                system("cls");

                cout << " " << endl;
                cout << " " << endl;
                cout << "             TORRE DE HANOI" << endl;
                cout << " " << endl;
                cout << " " << endl;
                cout << "               Instruções: " << endl;
                cout << " " << endl;
                cout << " 3° - O jogo acaba quando todos os números, " << endl;
                cout << " forem transferidos para outra coluna diferente da" << endl << " primeira, em  ordem crescente de cima pra baixo." << endl;
                cout << " Exemplo: " << endl;
                cout << " " << endl;

                for (int i=0; i<3; i++)
                {
                    for (int j=0; j<3; j++)
                    {
                        if (j==2)
                        {
                            th[i][j] = n;
                            n++;
                        }
                        else
                        {
                            th[i][j] = 0;
                        }
                    }
                }
                n=1;

                for (int i=0; i<3; i++)
                {
                    cout << "          ";
                    for (int j=0; j<3; j++)
                    {
                        if (th[i][j]!=0)
                        {
                            cout << th[i][j] << "    ";
                        }
                        else
                        {
                            cout << "     ";
                        }
                    }
                    cout << endl;
                }

                cout << "         ***  ***  ***" << endl;
                cout << "         |1|  |2|  |3|" << endl;
                cout << "         ***  ***  ***" << endl;
                cout << " " << endl;

                for (int i=0; i<12; i++)
                {

                    for (int j=0; j<10000; j++)
                    {
                        for (int k=0; k<10000; k++)
                        {

                        }
                    }
                }
                system("cls");

                cout << " " << endl;
                cout << " " << endl;
                cout << "    TORRE DE HANOI" << endl;
                cout << " " << endl;
                cout << " " << endl;
                cout << "       Instruções: " << endl;
                cout << " " << endl;
                cout << " " << endl;
                cout << " Para voltar ao MENU, tecle 1: ";
                cin >> opinstrucao;
                system ("cls");

                while (opinstrucao!=1)
                {
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << "    TORRE DE HANOI" << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << "       Instruções: " << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    cout << " Para voltar ao MENU, tecle 1: ";
                    cin >> opinstrucao;
                    system ("cls");
                }
            }

            break;

        case 4:
            cout << " " << endl;
            cout << " " << endl;
            cout << " Deseja realmente sair?" << endl;
            cout << " Sair: 0  |  Continuar: 1" << endl;
            cin >> fixomenu;
            system ("cls");

            while (fixomenu !=0 && fixomenu!=1)
            {
                cout << " " << endl;
                cout << " " << endl;
                cout << " Deseja realmente sair?" << endl;
                cout << " Sair: 0  |  Continuar: 1" << endl;
                cin >> fixomenu;
                system ("cls");
            }

            break;

        }
    }

    cout << " " << endl;
    cout << " Fim de Jogo!" << endl;

    return 0;
}
