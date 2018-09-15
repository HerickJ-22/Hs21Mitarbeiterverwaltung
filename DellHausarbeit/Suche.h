#pragma once
#include<list>
#include<vector>
#include "MyFuncs.h"
#include "Anzeige.h"

namespace DellHausarbeit {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for Suche
    /// </summary>
    public ref class Suche : public System::Windows::Forms::Form
    {
    public:
        Suche(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //
            ABT abt[7];
            getAbteilungen(abt);
            Abteilung->Items->Add("");
            for (int i = 1; i < 7; i++) {
                Abteilung->Items->Add(ToString(abt[i].abtName));
            }
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~Suche()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::TextBox^  Mitarbeiternummer;
    protected:

    private: System::Windows::Forms::Label^  label1;
    private: System::Windows::Forms::Label^  label2;
    private: System::Windows::Forms::TextBox^  Nachname;

    private: System::Windows::Forms::Label^  label3;
    private: System::Windows::Forms::TextBox^  Vorname;

    private: System::Windows::Forms::Label^  label4;

    private: System::Windows::Forms::Button^  Suchen;
    private: System::Windows::Forms::Button^  Anzeigen;



    private: System::Windows::Forms::Label^  label5;
    private: System::Windows::Forms::ComboBox^  Abteilung;

    protected:

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
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Suche::typeid));
            this->Mitarbeiternummer = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->Nachname = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->Vorname = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->Suchen = (gcnew System::Windows::Forms::Button());
            this->Anzeigen = (gcnew System::Windows::Forms::Button());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->Abteilung = (gcnew System::Windows::Forms::ComboBox());
            this->SuspendLayout();
            // 
            // Mitarbeiternummer
            // 
            this->Mitarbeiternummer->Location = System::Drawing::Point(138, 25);
            this->Mitarbeiternummer->Name = L"Mitarbeiternummer";
            this->Mitarbeiternummer->Size = System::Drawing::Size(100, 20);
            this->Mitarbeiternummer->TabIndex = 0;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(39, 28);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(93, 13);
            this->label1->TabIndex = 1;
            this->label1->Text = L"Mitarbeiternummer";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(39, 54);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(59, 13);
            this->label2->TabIndex = 3;
            this->label2->Text = L"Nachname";
            // 
            // Nachname
            // 
            this->Nachname->Location = System::Drawing::Point(138, 51);
            this->Nachname->Name = L"Nachname";
            this->Nachname->Size = System::Drawing::Size(100, 20);
            this->Nachname->TabIndex = 2;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(39, 80);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(49, 13);
            this->label3->TabIndex = 5;
            this->label3->Text = L"Vorname";
            // 
            // Vorname
            // 
            this->Vorname->Location = System::Drawing::Point(138, 77);
            this->Vorname->Name = L"Vorname";
            this->Vorname->Size = System::Drawing::Size(100, 20);
            this->Vorname->TabIndex = 4;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(39, 106);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(51, 13);
            this->label4->TabIndex = 7;
            this->label4->Text = L"Abteilung";
            // 
            // Suchen
            // 
            this->Suchen->Location = System::Drawing::Point(98, 148);
            this->Suchen->Name = L"Suchen";
            this->Suchen->Size = System::Drawing::Size(75, 23);
            this->Suchen->TabIndex = 8;
            this->Suchen->Text = L"Suche";
            this->Suchen->UseVisualStyleBackColor = true;
            this->Suchen->Click += gcnew System::EventHandler(this, &Suche::button1_Click);
            // 
            // Anzeigen
            // 
            this->Anzeigen->Location = System::Drawing::Point(98, 209);
            this->Anzeigen->Name = L"Anzeigen";
            this->Anzeigen->Size = System::Drawing::Size(75, 23);
            this->Anzeigen->TabIndex = 9;
            this->Anzeigen->Text = L"Anzeigen";
            this->Anzeigen->UseVisualStyleBackColor = true;
            this->Anzeigen->Click += gcnew System::EventHandler(this, &Suche::button2_Click);
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(75, 183);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(124, 13);
            this->label5->TabIndex = 10;
            this->label5->Text = L"0 Datensaetze gefunden";
            this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // Abteilung
            // 
            this->Abteilung->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->Abteilung->FormattingEnabled = true;
            this->Abteilung->Location = System::Drawing::Point(138, 106);
            this->Abteilung->Name = L"Abteilung";
            this->Abteilung->Size = System::Drawing::Size(100, 21);
            this->Abteilung->TabIndex = 11;
            this->Abteilung->SelectedIndexChanged += gcnew System::EventHandler(this, &Suche::comboBox1_SelectedIndexChanged);
            // 
            // Suche
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(284, 262);
            this->Controls->Add(this->Abteilung);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->Anzeigen);
            this->Controls->Add(this->Suchen);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->Vorname);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->Nachname);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->Mitarbeiternummer);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"Suche";
            this->Text = L"Suche";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: std::list<int>* liste;
    private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
        //Suche
        MITARB mitarbeiter[101];
        getMitarbeiter(mitarbeiter);
        liste = new std::list<int>();
        liste->clear();
        if (Mitarbeiternummer->Text != "")
        {
            if (mitarbeiter[Convert::ToInt16(Mitarbeiternummer->Text)].id != 0)
            {
                liste->push_back(mitarbeiter[Convert::ToInt16(Mitarbeiternummer->Text)].id);
                label5->Text = "1 Datensätze gefunden.";
                return;
            }
        }
        if (Nachname->Text != "") {
            for (int i = 0; i < 101; i++)
            {
                int j = 0;
                String^ test = "";
                while (mitarbeiter[i].name[j] != '\0' && mitarbeiter[i].name[j] != '\n') {
                    test += Convert::ToChar(mitarbeiter[i].name[j]);
                    j++;
                }
                if (test->ToLower()->Contains(Nachname->Text->ToLower())) {
                    liste->push_back(mitarbeiter[i].id);
                }
            }
            label5->Text = liste->size().ToString() + " Datensätze gefunden.";
            return;
        }
        if (Vorname->Text != "") {
            for (int i = 0; i < 101; i++)
            {
                int j = 0;
                String^ test = "";
                while (mitarbeiter[i].vorname[j] != '\0' && mitarbeiter[i].vorname[j] != '\n') {
                    test += Convert::ToChar(mitarbeiter[i].vorname[j]);
                    j++;
                }
                if (test->ToLower()->Contains(Vorname->Text->ToLower())) {
                    liste->push_back(mitarbeiter[i].id);
                }
            }
            label5->Text = liste->size().ToString() + " Datensätze gefunden.";
            return;
        }
        if (Abteilung->Text != "") {
            for (int i = 0; i < 101; i++)
            {
                if (mitarbeiter[i].abteilung == Convert::ToInt16(Abteilung->SelectedIndex))
                    liste->push_back(mitarbeiter[i].id);
            }
            label5->Text = liste->size().ToString() + " Datensätze gefunden.";
            return;
        }
    }
    private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
        if (liste == NULL)
            return;
        if (liste->size() <= 0)
            return;
        std::vector<int> aVector(liste->begin(), liste->end());
        
        Anzeige^ form = gcnew Anzeige(&aVector[0], aVector.size());
        form->ShowDialog();
    }
    private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

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
    };
}
