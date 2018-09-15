#pragma once
#include "Structs.h"
#include "MyFuncs.h"
#include<stdio.h>
#include<Windows.h>
namespace DellHausarbeit {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for EinAusgabe
    /// </summary>
    public ref class EinAusgabe : public System::Windows::Forms::Form
    {
    public:
        EinAusgabe(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //
            errorProvider1->BlinkStyle = System::Windows::Forms::ErrorBlinkStyle::NeverBlink;
            ABT abt[7];
            getAbteilungen(abt);
            for (int i = 1; i < 7; i++)
                Abteilung->Items->Add(ToString(abt[i].abtName));
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~EinAusgabe()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^  label1;
    private: System::Windows::Forms::Label^  label2;
    private: System::Windows::Forms::Label^  label3;

    private: System::Windows::Forms::Label^  label5;
    private: System::Windows::Forms::Label^  label6;
    private: System::Windows::Forms::Label^  label7;
    private: System::Windows::Forms::TextBox^  Name;
    private: System::Windows::Forms::TextBox^  Vorname;
    private: System::Windows::Forms::TextBox^  Eintritsjahr;

    private: System::Windows::Forms::TextBox^  Strasse;
    private: System::Windows::Forms::TextBox^  Hausnummer;







    private: System::Windows::Forms::Label^  label8;
    private: System::Windows::Forms::Label^  label9;
    private: System::Windows::Forms::Label^  label10;
    private: System::Windows::Forms::Label^  label11;
    private: System::Windows::Forms::TextBox^  Plz;
    private: System::Windows::Forms::TextBox^  Ort;
    private: System::Windows::Forms::TextBox^  Mobil;
    private: System::Windows::Forms::TextBox^  Festnetz;




    private: System::Windows::Forms::Label^  label12;
    private: System::Windows::Forms::Label^  label13;
    private: System::Windows::Forms::Button^  button1;
    private: System::Windows::Forms::Button^  button2;
    private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
    private: System::Windows::Forms::ErrorProvider^  errorProvider1;
    private: System::Windows::Forms::ComboBox^  Abteilung;
    public: int ID;
    public: void SetId() {
        this->label13->Text = ID.ToString();
    }
    private: System::ComponentModel::IContainer^  components;
    public:
    protected:

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>


#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->components = (gcnew System::ComponentModel::Container());
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EinAusgabe::typeid));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->Name = (gcnew System::Windows::Forms::TextBox());
            this->Vorname = (gcnew System::Windows::Forms::TextBox());
            this->Eintritsjahr = (gcnew System::Windows::Forms::TextBox());
            this->Strasse = (gcnew System::Windows::Forms::TextBox());
            this->Hausnummer = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->Plz = (gcnew System::Windows::Forms::TextBox());
            this->Ort = (gcnew System::Windows::Forms::TextBox());
            this->Mobil = (gcnew System::Windows::Forms::TextBox());
            this->Festnetz = (gcnew System::Windows::Forms::TextBox());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
            this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
            this->Abteilung = (gcnew System::Windows::Forms::ComboBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(15, 48);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(35, 13);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Name";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(15, 74);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(49, 13);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Vorname";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(15, 100);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(55, 13);
            this->label3->TabIndex = 2;
            this->label3->Text = L"Eintritsjahr";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(15, 126);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(51, 13);
            this->label5->TabIndex = 4;
            this->label5->Text = L"Abteilung";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(15, 152);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(42, 13);
            this->label6->TabIndex = 5;
            this->label6->Text = L"Strasse";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(15, 178);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(69, 13);
            this->label7->TabIndex = 6;
            this->label7->Text = L"Hausnummer";
            // 
            // Name
            // 
            this->Name->Location = System::Drawing::Point(105, 41);
            this->Name->Name = L"Name";
            this->Name->Size = System::Drawing::Size(173, 20);
            this->Name->TabIndex = 7;
            this->Name->TextChanged += gcnew System::EventHandler(this, &EinAusgabe::Name_TextChanged);
            // 
            // Vorname
            // 
            this->Vorname->AcceptsTab = true;
            this->Vorname->Location = System::Drawing::Point(105, 67);
            this->Vorname->Name = L"Vorname";
            this->Vorname->Size = System::Drawing::Size(173, 20);
            this->Vorname->TabIndex = 8;
            this->Vorname->TextChanged += gcnew System::EventHandler(this, &EinAusgabe::Vorname_TextChanged);
            // 
            // Eintritsjahr
            // 
            this->Eintritsjahr->Location = System::Drawing::Point(105, 93);
            this->Eintritsjahr->Name = L"Eintritsjahr";
            this->Eintritsjahr->Size = System::Drawing::Size(173, 20);
            this->Eintritsjahr->TabIndex = 9;
            this->Eintritsjahr->TextChanged += gcnew System::EventHandler(this, &EinAusgabe::Eintritsjahr_TextChanged);
            // 
            // Strasse
            // 
            this->Strasse->Location = System::Drawing::Point(105, 145);
            this->Strasse->Name = L"Strasse";
            this->Strasse->Size = System::Drawing::Size(173, 20);
            this->Strasse->TabIndex = 12;
            this->Strasse->TextChanged += gcnew System::EventHandler(this, &EinAusgabe::Strasse_TextChanged);
            // 
            // Hausnummer
            // 
            this->Hausnummer->Location = System::Drawing::Point(105, 171);
            this->Hausnummer->Name = L"Hausnummer";
            this->Hausnummer->Size = System::Drawing::Size(173, 20);
            this->Hausnummer->TabIndex = 13;
            this->Hausnummer->TextChanged += gcnew System::EventHandler(this, &EinAusgabe::Hausnummer_TextChanged);
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(15, 204);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(60, 13);
            this->label8->TabIndex = 14;
            this->label8->Text = L"Postleitzahl";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(15, 230);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(21, 13);
            this->label9->TabIndex = 15;
            this->label9->Text = L"Ort";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(15, 256);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(69, 13);
            this->label10->TabIndex = 16;
            this->label10->Text = L"Mobilnummer";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Location = System::Drawing::Point(15, 282);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(84, 13);
            this->label11->TabIndex = 17;
            this->label11->Text = L"Festnetznummer";
            // 
            // Plz
            // 
            this->Plz->Location = System::Drawing::Point(105, 197);
            this->Plz->Name = L"Plz";
            this->Plz->Size = System::Drawing::Size(173, 20);
            this->Plz->TabIndex = 18;
            this->Plz->TextChanged += gcnew System::EventHandler(this, &EinAusgabe::Plz_TextChanged);
            // 
            // Ort
            // 
            this->Ort->Location = System::Drawing::Point(105, 223);
            this->Ort->Name = L"Ort";
            this->Ort->Size = System::Drawing::Size(173, 20);
            this->Ort->TabIndex = 19;
            this->Ort->TextChanged += gcnew System::EventHandler(this, &EinAusgabe::Ort_TextChanged);
            // 
            // Mobil
            // 
            this->Mobil->Location = System::Drawing::Point(105, 249);
            this->Mobil->Name = L"Mobil";
            this->Mobil->Size = System::Drawing::Size(173, 20);
            this->Mobil->TabIndex = 20;
            this->Mobil->TextChanged += gcnew System::EventHandler(this, &EinAusgabe::Mobil_TextChanged);
            // 
            // Festnetz
            // 
            this->Festnetz->Location = System::Drawing::Point(105, 275);
            this->Festnetz->Name = L"Festnetz";
            this->Festnetz->Size = System::Drawing::Size(173, 20);
            this->Festnetz->TabIndex = 21;
            this->Festnetz->TextChanged += gcnew System::EventHandler(this, &EinAusgabe::Festnetz_TextChanged);
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Location = System::Drawing::Point(12, 9);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(73, 13);
            this->label12->TabIndex = 22;
            this->label12->Text = L"Mitarbeiter ID:";
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Location = System::Drawing::Point(91, 9);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(0, 13);
            this->label13->TabIndex = 23;
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(62, 307);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(173, 23);
            this->button1->TabIndex = 24;
            this->button1->Text = L"Speichern";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &EinAusgabe::button1_Click);
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(62, 336);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(173, 23);
            this->button2->TabIndex = 25;
            this->button2->Text = L"nicht Speichern";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &EinAusgabe::button2_Click);
            // 
            // printPreviewDialog1
            // 
            this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
            this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
            this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
            this->printPreviewDialog1->Enabled = true;
            this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
            this->printPreviewDialog1->Name = L"printPreviewDialog1";
            this->printPreviewDialog1->Visible = false;
            // 
            // errorProvider1
            // 
            this->errorProvider1->ContainerControl = this;
            // 
            // Abteilung
            // 
            this->Abteilung->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->Abteilung->FormattingEnabled = true;
            this->Abteilung->Location = System::Drawing::Point(105, 119);
            this->Abteilung->Name = L"Abteilung";
            this->Abteilung->Size = System::Drawing::Size(173, 21);
            this->Abteilung->TabIndex = 26;
            // 
            // EinAusgabe
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(300, 377);
            this->Controls->Add(this->Abteilung);
            this->Controls->Add(this->Festnetz);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label13);
            this->Controls->Add(this->label12);
            this->Controls->Add(this->Mobil);
            this->Controls->Add(this->Ort);
            this->Controls->Add(this->Plz);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->Hausnummer);
            this->Controls->Add(this->Strasse);
            this->Controls->Add(this->Eintritsjahr);
            this->Controls->Add(this->Vorname);
            this->Controls->Add(this->Name);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Text = L"EinAusgabe";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
        //Anwenden
        if (AllDataIsValidNotNUll()) {
            if (AllDataIsValidTextLength()) {
                speichern = true;
                this->Close();
            }
        }
    }
    private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
        //Verwerfen
        speichern = false;
        this->Close();
    }
    private: void IsValid(TextBox^ data, bool *isValid, int max) {
        if (data->Text == "") {
            errorProvider1->SetError(data, "Bitte etwas eingeben");
            *isValid = false;
        }
        else {
            SetErrorProvider(data, max);
        }
    }
    private: void IsValid(ComboBox^ data, bool *isValid) {
        if (data->Text == "") {
            errorProvider1->SetError(data, "Bitte etwas eingeben");
            *isValid = false;
        }
        else {
            errorProvider1->SetError(data, "");
        }
    }
    private: bool AllDataIsValidTextLength() {
        if (Name->Text->Length > 30)
            return false;
        if (Vorname->Text->Length > 30)
            return false;
        if (Eintritsjahr->Text->Length > 20)
            return false;
        if (Strasse->Text->Length > 30)
            return false;
        if (Hausnummer->Text->Length > 8)
            return false;
        if (Plz->Text->Length > 5)
            return false;
        if (Ort->Text->Length > 20)
            return false;
        if (Mobil->Text->Length > 20)
            return false;
        if (Festnetz->Text->Length > 20)
            return false;
        return true;
    }


    private: bool AllDataIsValidNotNUll() {
        bool returnValue = true;
        IsValid(Name, &returnValue, 30);
        IsValid(Vorname, &returnValue, 30);
        IsValid(Eintritsjahr, &returnValue, 20);
        IsValid(Strasse, &returnValue, 30);
        IsValid(Hausnummer, &returnValue, 8);
        IsValid(Plz, &returnValue, 8);
        IsValid(Ort, &returnValue, 20);
        IsValid(Mobil, &returnValue, 20);
        IsValid(Festnetz, &returnValue, 20);
        IsValid(Abteilung, &returnValue);
        return returnValue;
    }
    public: bool speichern;
    private: String ^ ToString(char *value) {
        String^ test = "";
        int i = 0;
        while (value[i] != '\0' && value[i] != '\n') {
            test += Convert::ToChar(value[i]);
            i++;
        }
        return test;
    }
    private: Void ToChar(String^ string, char *chararray) {
        for (int i = 0; i < string->Length; i++)
            chararray[i] = string->ToCharArray()[i];
    }
    public: System::Void SetData(MITARB mitarbeiter) {
        Name->Text = ToString(mitarbeiter.name);
        Vorname->Text = ToString(mitarbeiter.vorname);
        Eintritsjahr->Text = ToString(mitarbeiter.eintritsjahr);

        Abteilung->SelectedIndex = mitarbeiter.abteilung - 1;
        Strasse->Text = ToString(mitarbeiter.strasse);
        Hausnummer->Text = ToString(mitarbeiter.hausnr);
        Plz->Text = ToString(mitarbeiter.plz);
        Ort->Text = ToString(mitarbeiter.ort);
        Mobil->Text = ToString(mitarbeiter.mobil);
        Festnetz->Text = ToString(mitarbeiter.festnetz);
    }

    public: MITARB GetData() {
        MITARB mitarb;
        strcpy(mitarb.name, "\0");
        strcpy(mitarb.vorname, "\0");
        strcpy(mitarb.eintritsjahr, "\0");
        strcpy(mitarb.email, "\0");
        mitarb.abteilung = 0;
        strcpy(mitarb.strasse, "\0");
        strcpy(mitarb.hausnr, "\0");
        strcpy(mitarb.plz, "\0");
        strcpy(mitarb.mobil, "\0");
        strcpy(mitarb.festnetz, "\0");

        mitarb.id = ID;
        //Name
        ToChar(Name->Text, mitarb.name);
        ToChar(Vorname->Text, mitarb.vorname);
        ToChar(Eintritsjahr->Text, mitarb.eintritsjahr);
        mitarb.abteilung = Convert::ToInt16(Abteilung->SelectedIndex + 1);
        ToChar(Strasse->Text, mitarb.strasse);
        ToChar(Hausnummer->Text, mitarb.hausnr);
        ToChar(Plz->Text, mitarb.plz);
        ToChar(Ort->Text, mitarb.ort);
        ToChar(Mobil->Text, mitarb.mobil);
        ToChar(Festnetz->Text, mitarb.festnetz);
        ToChar((Vorname->Text + "." + Name->Text + "@daddeldu.com"), mitarb.email);

        return mitarb;
    }
    public: void SetErrorProvider(System::Windows::Forms::TextBox^ textbox, int max) {
        if (textbox->Text->Length > max)
            errorProvider1->SetError(textbox, "Maximale länge ist: " + max);
        else
            errorProvider1->SetError(textbox, "");
    }
    private: System::Void Abteilung_TextChanged(System::Object^  sender, System::EventArgs^  e) {

    }
    private: System::Void Name_TextChanged(System::Object^  sender, System::EventArgs^  e) {
        SetErrorProvider(Name, 30);
    }

    private: System::Void Vorname_TextChanged(System::Object^  sender, System::EventArgs^  e) {
        SetErrorProvider(Vorname, 30);
    }
    private: System::Void Eintritsjahr_TextChanged(System::Object^  sender, System::EventArgs^  e) {
        SetErrorProvider(Eintritsjahr, 20);
    }
    private: System::Void Strasse_TextChanged(System::Object^  sender, System::EventArgs^  e) {
        SetErrorProvider(Strasse, 30);
    }
    private: System::Void Hausnummer_TextChanged(System::Object^  sender, System::EventArgs^  e) {
        SetErrorProvider(Hausnummer, 8);
    }
    private: System::Void Plz_TextChanged(System::Object^  sender, System::EventArgs^  e) {
        SetErrorProvider(Plz, 5);
    }
    private: System::Void Ort_TextChanged(System::Object^  sender, System::EventArgs^  e) {
        SetErrorProvider(Ort, 20);
    }
    private: System::Void Mobil_TextChanged(System::Object^  sender, System::EventArgs^  e) {
        SetErrorProvider(Mobil, 20);
    }
    private: System::Void Festnetz_TextChanged(System::Object^  sender, System::EventArgs^  e) {
        SetErrorProvider(Festnetz, 20);
    }
    };
}
