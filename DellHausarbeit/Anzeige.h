#pragma once
#include "MyFuncs.h"
#include "EinAusgabe.h"
#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <stdlib.h>
namespace DellHausarbeit {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for Anzeige
    /// </summary>
    public ref class Anzeige : public System::Windows::Forms::Form
    {
    private: int *alleAnzeigen;
    private: int anzahl;
    private: System::Windows::Forms::Button^  Loeschen;
    private: int current = 0;
    public:
        Anzeige(int *alle, int anzahlDatas)
        {
            anzahl = anzahlDatas;
            alleAnzeigen = alle;
            InitializeComponent();
            MITARB ma[101];
            getMitarbeiter(ma);
            setValues(ma[alle[0]]);
            current = 0;
            //
            //TODO: Add the constructor code here
            //
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~Anzeige()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^  label11;
    protected:
    private: System::Windows::Forms::Label^  label10;
    private: System::Windows::Forms::Label^  label9;
    private: System::Windows::Forms::Label^  label8;
    private: System::Windows::Forms::Label^  label7;
    private: System::Windows::Forms::Label^  label6;
    private: System::Windows::Forms::Label^  label5;
    private: System::Windows::Forms::Label^  label3;
    private: System::Windows::Forms::Label^  label2;
    private: System::Windows::Forms::Label^  label1;
    private: System::Windows::Forms::Label^  Festnetznummer;

    private: System::Windows::Forms::Label^  Mobilnummer;

    private: System::Windows::Forms::Label^  Ort;

    private: System::Windows::Forms::Label^  Plz;

    private: System::Windows::Forms::Label^  Hausnummer;

    private: System::Windows::Forms::Label^  Strasse;

    private: System::Windows::Forms::Label^  Abteilung;

    private: System::Windows::Forms::Label^  Eintritsjahr;

    private: System::Windows::Forms::Label^  Vorname;

    private: System::Windows::Forms::Label^  Name;
    private: System::Windows::Forms::Label^  Email;


    private: System::Windows::Forms::Label^  label22;
    private: System::Windows::Forms::Button^  Back;
    private: System::Windows::Forms::Button^  Change;
    private: System::Windows::Forms::Button^  Next;




    private: System::Windows::Forms::Label^  label23;
    private: System::Windows::Forms::Label^  ID;


    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Anzeige::typeid));
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->Festnetznummer = (gcnew System::Windows::Forms::Label());
            this->Mobilnummer = (gcnew System::Windows::Forms::Label());
            this->Ort = (gcnew System::Windows::Forms::Label());
            this->Plz = (gcnew System::Windows::Forms::Label());
            this->Hausnummer = (gcnew System::Windows::Forms::Label());
            this->Strasse = (gcnew System::Windows::Forms::Label());
            this->Abteilung = (gcnew System::Windows::Forms::Label());
            this->Eintritsjahr = (gcnew System::Windows::Forms::Label());
            this->Vorname = (gcnew System::Windows::Forms::Label());
            this->Name = (gcnew System::Windows::Forms::Label());
            this->Email = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->Back = (gcnew System::Windows::Forms::Button());
            this->Change = (gcnew System::Windows::Forms::Button());
            this->Next = (gcnew System::Windows::Forms::Button());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->ID = (gcnew System::Windows::Forms::Label());
            this->Loeschen = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Location = System::Drawing::Point(60, 307);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(87, 13);
            this->label11->TabIndex = 27;
            this->label11->Text = L"Festnetznummer:";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(60, 281);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(72, 13);
            this->label10->TabIndex = 26;
            this->label10->Text = L"Mobilnummer:";
            this->label10->Click += gcnew System::EventHandler(this, &Anzeige::label10_Click);
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(60, 255);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(24, 13);
            this->label9->TabIndex = 25;
            this->label9->Text = L"Ort:";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(60, 229);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(63, 13);
            this->label8->TabIndex = 24;
            this->label8->Text = L"Postleitzahl:";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(60, 203);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(72, 13);
            this->label7->TabIndex = 23;
            this->label7->Text = L"Hausnummer:";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(60, 177);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(45, 13);
            this->label6->TabIndex = 22;
            this->label6->Text = L"Strasse:";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(60, 151);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(54, 13);
            this->label5->TabIndex = 21;
            this->label5->Text = L"Abteilung:";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(60, 103);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(58, 13);
            this->label3->TabIndex = 20;
            this->label3->Text = L"Eintritsjahr:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(60, 77);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(52, 13);
            this->label2->TabIndex = 19;
            this->label2->Text = L"Vorname:";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(60, 51);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(38, 13);
            this->label1->TabIndex = 18;
            this->label1->Text = L"Name:";
            // 
            // Festnetznummer
            // 
            this->Festnetznummer->AutoSize = true;
            this->Festnetznummer->Location = System::Drawing::Point(163, 307);
            this->Festnetznummer->Name = L"Festnetznummer";
            this->Festnetznummer->Size = System::Drawing::Size(84, 13);
            this->Festnetznummer->TabIndex = 37;
            this->Festnetznummer->Text = L"Festnetznummer";
            // 
            // Mobilnummer
            // 
            this->Mobilnummer->AutoSize = true;
            this->Mobilnummer->Location = System::Drawing::Point(163, 281);
            this->Mobilnummer->Name = L"Mobilnummer";
            this->Mobilnummer->Size = System::Drawing::Size(69, 13);
            this->Mobilnummer->TabIndex = 36;
            this->Mobilnummer->Text = L"Mobilnummer";
            // 
            // Ort
            // 
            this->Ort->AutoSize = true;
            this->Ort->Location = System::Drawing::Point(163, 255);
            this->Ort->Name = L"Ort";
            this->Ort->Size = System::Drawing::Size(21, 13);
            this->Ort->TabIndex = 35;
            this->Ort->Text = L"Ort";
            // 
            // Plz
            // 
            this->Plz->AutoSize = true;
            this->Plz->Location = System::Drawing::Point(163, 229);
            this->Plz->Name = L"Plz";
            this->Plz->Size = System::Drawing::Size(60, 13);
            this->Plz->TabIndex = 34;
            this->Plz->Text = L"Postleitzahl";
            // 
            // Hausnummer
            // 
            this->Hausnummer->AutoSize = true;
            this->Hausnummer->Location = System::Drawing::Point(163, 203);
            this->Hausnummer->Name = L"Hausnummer";
            this->Hausnummer->Size = System::Drawing::Size(69, 13);
            this->Hausnummer->TabIndex = 33;
            this->Hausnummer->Text = L"Hausnummer";
            // 
            // Strasse
            // 
            this->Strasse->AutoSize = true;
            this->Strasse->Location = System::Drawing::Point(163, 177);
            this->Strasse->Name = L"Strasse";
            this->Strasse->Size = System::Drawing::Size(42, 13);
            this->Strasse->TabIndex = 32;
            this->Strasse->Text = L"Strasse";
            // 
            // Abteilung
            // 
            this->Abteilung->AutoSize = true;
            this->Abteilung->Location = System::Drawing::Point(163, 151);
            this->Abteilung->Name = L"Abteilung";
            this->Abteilung->Size = System::Drawing::Size(51, 13);
            this->Abteilung->TabIndex = 31;
            this->Abteilung->Text = L"Abteilung";
            // 
            // Eintritsjahr
            // 
            this->Eintritsjahr->AutoSize = true;
            this->Eintritsjahr->Location = System::Drawing::Point(163, 103);
            this->Eintritsjahr->Name = L"Eintritsjahr";
            this->Eintritsjahr->Size = System::Drawing::Size(55, 13);
            this->Eintritsjahr->TabIndex = 30;
            this->Eintritsjahr->Text = L"Eintritsjahr";
            // 
            // Vorname
            // 
            this->Vorname->AutoSize = true;
            this->Vorname->Location = System::Drawing::Point(163, 77);
            this->Vorname->Name = L"Vorname";
            this->Vorname->Size = System::Drawing::Size(49, 13);
            this->Vorname->TabIndex = 29;
            this->Vorname->Text = L"Vorname";
            // 
            // Name
            // 
            this->Name->AutoSize = true;
            this->Name->Location = System::Drawing::Point(163, 51);
            this->Name->Name = L"Name";
            this->Name->Size = System::Drawing::Size(35, 13);
            this->Name->TabIndex = 28;
            this->Name->Text = L"Name";
            // 
            // Email
            // 
            this->Email->AutoSize = true;
            this->Email->Location = System::Drawing::Point(163, 129);
            this->Email->Name = L"Email";
            this->Email->Size = System::Drawing::Size(51, 13);
            this->Email->TabIndex = 39;
            this->Email->Text = L"Abteilung";
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Location = System::Drawing::Point(60, 129);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(35, 13);
            this->label22->TabIndex = 38;
            this->label22->Text = L"Email:";
            // 
            // Back
            // 
            this->Back->Location = System::Drawing::Point(23, 340);
            this->Back->Name = L"Back";
            this->Back->Size = System::Drawing::Size(75, 23);
            this->Back->TabIndex = 40;
            this->Back->Text = L"Zurück";
            this->Back->UseVisualStyleBackColor = true;
            this->Back->Click += gcnew System::EventHandler(this, &Anzeige::Back_Click);
            // 
            // Change
            // 
            this->Change->Location = System::Drawing::Point(185, 340);
            this->Change->Name = L"Change";
            this->Change->Size = System::Drawing::Size(75, 23);
            this->Change->TabIndex = 41;
            this->Change->Text = L"Ändern";
            this->Change->UseVisualStyleBackColor = true;
            this->Change->Click += gcnew System::EventHandler(this, &Anzeige::Change_Click);
            // 
            // Next
            // 
            this->Next->Location = System::Drawing::Point(266, 340);
            this->Next->Name = L"Next";
            this->Next->Size = System::Drawing::Size(75, 23);
            this->Next->TabIndex = 42;
            this->Next->Text = L"Vor";
            this->Next->UseVisualStyleBackColor = true;
            this->Next->Click += gcnew System::EventHandler(this, &Anzeige::Next_Click);
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Location = System::Drawing::Point(63, 13);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(73, 13);
            this->label23->TabIndex = 43;
            this->label23->Text = L"Mitarbeiter ID:";
            // 
            // ID
            // 
            this->ID->AutoSize = true;
            this->ID->Location = System::Drawing::Point(132, 13);
            this->ID->Name = L"ID";
            this->ID->Size = System::Drawing::Size(18, 13);
            this->ID->TabIndex = 44;
            this->ID->Text = L"ID";
            // 
            // Loeschen
            // 
            this->Loeschen->Location = System::Drawing::Point(104, 340);
            this->Loeschen->Name = L"Loeschen";
            this->Loeschen->Size = System::Drawing::Size(75, 23);
            this->Loeschen->TabIndex = 45;
            this->Loeschen->Text = L"Löschen";
            this->Loeschen->UseVisualStyleBackColor = true;
            this->Loeschen->Click += gcnew System::EventHandler(this, &Anzeige::Loeschen_Click);
            // 
            // Anzeige
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(370, 394);
            this->Controls->Add(this->Loeschen);
            this->Controls->Add(this->ID);
            this->Controls->Add(this->label23);
            this->Controls->Add(this->Next);
            this->Controls->Add(this->Change);
            this->Controls->Add(this->Back);
            this->Controls->Add(this->Email);
            this->Controls->Add(this->label22);
            this->Controls->Add(this->Festnetznummer);
            this->Controls->Add(this->Mobilnummer);
            this->Controls->Add(this->Ort);
            this->Controls->Add(this->Plz);
            this->Controls->Add(this->Hausnummer);
            this->Controls->Add(this->Strasse);
            this->Controls->Add(this->Abteilung);
            this->Controls->Add(this->Eintritsjahr);
            this->Controls->Add(this->Vorname);
            this->Controls->Add(this->Name);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Text = L"Mitarbeiter anzeigen";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
    }
    private: System::Void Next_Click(System::Object^  sender, System::EventArgs^  e) {
        if (++current > anzahl - 1)
            current = 0;
        MITARB ma[101];
        getMitarbeiter(ma);
        setValues(ma[alleAnzeigen[current]]);
    }
    private: System::Void Change_Click(System::Object^  sender, System::EventArgs^  e) {
        EinAusgabe form;
        form.ID = alleAnzeigen[current];
        form.SetId();
        MITARB ma[101];
        getMitarbeiter(ma);
        form.SetData(ma[alleAnzeigen[current]]);
        form.ShowDialog();
        if (!form.speichern) {
            return;
        }
        MITARB all[101];
        MITARB neuer = form.GetData();
        getMitarbeiter(all);
        all[neuer.id] = neuer;
        saveMitarbeiter(all);
        setValues(neuer);
    }
    private: System::Void Back_Click(System::Object^  sender, System::EventArgs^  e) {
        
        if (--current < 0)
            current = anzahl - 1;
        MITARB ma[101];
        getMitarbeiter(ma);
        setValues(ma[alleAnzeigen[current]]);
    }
    private: String ^ ToString(char *value) {
        String^ test = "";
        int i = 0;
        while (value[i] != '\0' && value[i] != '\n') {
            test += Convert::ToChar(value[i]);
            i++;
        }
        return test;
    }
    private: Void setValues(MITARB mitarbeiter) {
        ID->Text = Convert::ToString(mitarbeiter.id); 

        ABT abt[7];
        getAbteilungen(abt);
        Name->Text = ToString(mitarbeiter.name);
        Vorname->Text = ToString(mitarbeiter.vorname);
        Eintritsjahr->Text = ToString(mitarbeiter.eintritsjahr);
        Email->Text = ToString(mitarbeiter.email);

        Abteilung->Text = ToString(abt[mitarbeiter.abteilung].abtName);

        Strasse->Text = ToString(mitarbeiter.strasse);
        Hausnummer->Text = ToString(mitarbeiter.hausnr);
        Plz->Text = ToString(mitarbeiter.plz);
        Ort->Text = ToString(mitarbeiter.ort);
        Mobilnummer->Text = ToString(mitarbeiter.mobil);
        Festnetznummer->Text = ToString(mitarbeiter.festnetz);
    }
    private: System::Void Loeschen_Click(System::Object^  sender, System::EventArgs^  e) {
        MITARB ma[101];
        getMitarbeiter(ma);

        ABT abt[7];
        getAbteilungen(abt);
        int maId = ma[alleAnzeigen[current]].id;
        bool istAbtleiter = false;
        for (int j = 1; j < 7; j++) {
            if (abt[j].abtleiter == maId) {
                istAbtleiter = true;
                break;
            }
        }
        if (istAbtleiter) {
            MessageBox::Show("Dieser Mitarbeiter ist ein Abteilungsleiter.\nBitte vor dem Löschen zuerst den Abteilungsleiter verändern", "Mitarbeiterverwaltung", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }



        int i = alleAnzeigen[current];
        ma[i].id = 0;
        ma[i].name[0] = '\0';
        ma[i].vorname[0] = '\0';
        ma[i].eintritsjahr[0] = '\0';
        ma[i].email[0] = '\0';
        ma[i].abteilung = 0;
        ma[i].strasse[0] = '\0';
        ma[i].hausnr[0] = '\0';
        ma[i].plz[0] = '\0';
        ma[i].ort[0] = '\0';
        ma[i].mobil[0] = '\0';
        ma[i].festnetz[0] = '\0';
        saveMitarbeiter(ma);

        std::list<int>* liste = new std::list<int>();
        for (int i = 0; i < anzahl; i++) {
            if(i != current)
                liste->push_back(alleAnzeigen[i]);
        }
        anzahl--;
        int *arr = new int[liste->size()];
        copy(liste->begin(), liste->end(), arr);

        alleAnzeigen = arr;

        if (++current > anzahl - 1)
            current = 0;
        getMitarbeiter(ma);
        setValues(ma[alleAnzeigen[current]]);
    }
};
}
