#include <Windows.h>
#include "MyForm.h"
#include "Structs.h"
#include "MyFuncs.h"

using namespace System;
using namespace System::Windows::Forms;
namespace DellHausarbeit {
    //void SetNewMitarb(MITARB mitarb);
    void LoadAbteilungen();

    void Main() {
        LoadAbteilungen();
        LoadTemp();
        MITARB neue[101];
        Application::EnableVisualStyles();
        Application::SetCompatibleTextRenderingDefault(false);
        MyForm^ form = gcnew MyForm();
        form->Saved = false;
        bool whileschleife = true;
        while (whileschleife) {
            form->Saved = false;
            form->ShowDialog();//show hauptfenster
            if (!form->Saved) {
                switch (MessageBox::Show("Sie haben die Anwendung geschlossen ohne zu speichern.\nWollen Sie speichern?", "Mitarbeiterverwaltung", MessageBoxButtons::YesNoCancel))
                {
                case DialogResult::Yes:
                    Save();//yes -> speichern und beenden
                    whileschleife = false;
                    break;
                case DialogResult::No://no beenden
                    whileschleife = false;
                    break;
                case DialogResult::Cancel://cancel fenster neu öffnen
                    break;
                default:
                    whileschleife = false;//default: z.b. messagebox wird geschlossen. beenden ohne zu speichern
                    break;
                }
            }
            else {//form wurde gespeichert keine messagebox nötig
                whileschleife = false;
            }
        }


        remove("MitarbeiterTemp.txt");
        remove("AbteilungenTemp.txt");
    }

    void LoadAbteilungen() {
        ABT abt[7];//sollte keinen Abteilungen existieren(sollte niemals vorkommen) werden die Abteilungen neu gesetze
        FILE *file;
        char DateiAbt[20] = "Abteilungen.txt";
        file = fopen(DateiAbt, "r");
        if (file == NULL)
        {
            AbteilungenSetzen(abt);
            file = fopen(DateiAbt, "w");
            fwrite(abt, sizeof(abt[0]), 7, file);
        }
    }
}