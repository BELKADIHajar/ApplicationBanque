

#include <iostream>
#include "MAD.h"
#include "date.h"
#include"Client.h"
#include "Compte.h"
#include "CompteEpargne.h"
#include "ComptePayant.h"
#include"CompteCourant.h"
#include"AppBanque.h"
int main()
{
    
    MAD solde1(3000);
    MAD solde2(3000);
    MAD m1(100);
    MAD m2(200);
    MAD decouvert1(800);
    //solde1.afficher();
    date dt1(17, 05, 2022);
    date dt2(17, 05, 2022);
    date dt(02, 05, 2021);
    //dt1.print();
    Client client1("nom1", "prenom1");
    Client client2("nom2", "prenom2");
    Client* client3 =new Client("nom3", "prenom3");
    
    //client1.print();
    Compte* compte1 = new Compte(client1, dt1, solde2);
    Compte* compte2 = new Compte(client2, dt2, solde1);
    CompteEpargne  compteE1(client2, dt2, solde1,10);
    ComptePayant* compteP1 = new ComptePayant(client2, dt, solde2);//3000
    //compte1->Consulter();
    compteE1.Consulter();
    compteP1->Consulter();
    compteP1->retirer(m2);
    compteP1->Consulter();
    compteP1->deposer(m1);
    compteP1->Consulter();
    compteE1.retirer(m2);
    compteE1.Consulter();
    /*
    compteE1.calculInteret();
    compteE1.Consulter();
    cout << "C1" << endl;
    compte1->Consulter();
    cout << "C2" << endl;
    compteE1.Consulter();
    compteE1.transferer(m1, *compte1);
    cout << "C1" << endl;
    compte1->Consulter();
    cout << "C2" << endl;
    compteE1.Consulter();
    cout << "ReTirer" << endl;
    compteE1.retirer(5);
    compteE1.Consulter();
    cout << "Deposer" << endl;
    compteE1.deposer(10);
    compteE1.Consulter();*/
    //800----3000
    /*MAD test(3000);
    CompteCourant* CompteC2 = new CompteCourant(client1, dt1, solde1, decouvert1);
    CompteC2->Consulter();
    CompteC2->retirer(test);
    CompteC2->Consulter();
    compte1->Consulter();
    compte1->retirer(m1);
    compte1->Consulter();*/
}
