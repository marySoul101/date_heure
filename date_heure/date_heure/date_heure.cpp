// date_heure.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
//#include"Heure.h"
#include"DateH.h"
using namespace d_t;

int main()
{
    bool res;
    Heure* h1=new Heure(12,56,36);
    h1->affiche();
    Heure* h2 = new Heure(18, 56, 36);
    h2->affiche();
    res=h2 < h1;
    if (res == true) cout << "true";
    else cout << "false" << endl;
    DateH* d1 = new DateH(300, 2, 18);
    d1->affiche();
    DateH* d2 = new DateH(2021, 2, 29, 16, 25, 36);
    d2->affiche();
    res = d1 <d2;
    if (res == true) cout << "true";
    else cout << "false" << endl;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
