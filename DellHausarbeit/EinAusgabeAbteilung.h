#pragma once
#include "Structs.h"
#include "MyFuncs.h"

namespace DellHausarbeit {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for EinAusgabeAbteilung
    /// </summary>
    public ref class EinAusgabeAbteilung : public System::Windows::Forms::Form
    {
    public:
        EinAusgabeAbteilung(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //
            current = 1;
            errorProvider1->BlinkStyle = System::Windows::Forms::ErrorBlinkStyle::NeverBlink;
            ABT abt[7];
            getAbteilungen(abt);
            setValues(abt[current]);
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~EinAusgabeAbteilung()
        {
            if (components)
            {
                delete components;
            }
        }
    private: int current;
    private: System::Windows::Forms::Label^  label1;
    private: System::Windows::Forms::Label^  label2;
    private: System::Windows::Forms::Label^  label3;
    private: System::Windows::Forms::Label^  label4;
    private: System::Windows::Forms::Label^  label5;
    private: System::Windows::Forms::Label^  label6;
    private: System::Windows::Forms::Label^  label7;

    private: System::Windows::Forms::Label^  Sitz;
    private: System::Windows::Forms::Label^  Stadt;
    private: System::Windows::Forms::Label^  Postleitzahl;
    private: System::Windows::Forms::Label^  Hausnummer;
    private: System::Windows::Forms::Label^  Strasse;



    private: System::Windows::Forms::Button^  button1;

    private: System::Windows::Forms::ErrorProvider^  errorProvider1;


    private: System::Windows::Forms::ComboBox^  comboBox1;
    private: System::Windows::Forms::ComboBox^  comboBox2;
    private: System::ComponentModel::IContainer^  components;

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
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EinAusgabeAbteilung::typeid));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->Sitz = (gcnew System::Windows::Forms::Label());
            this->Stadt = (gcnew System::Windows::Forms::Label());
            this->Postleitzahl = (gcnew System::Windows::Forms::Label());
            this->Hausnummer = (gcnew System::Windows::Forms::Label());
            this->Strasse = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(25, 26);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(82, 13);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Abteilungsname";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(25, 51);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(42, 13);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Strasse";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(25, 76);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(69, 13);
            this->label3->TabIndex = 2;
            this->label3->Text = L"Hausnummer";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(25, 101);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(60, 13);
            this->label4->TabIndex = 3;
            this->label4->Text = L"Postleitzahl";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(25, 126);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(32, 13);
            this->label5->TabIndex = 4;
            this->label5->Text = L"Stadt";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(25, 151);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(24, 13);
            this->label6->TabIndex = 5;
            this->label6->Text = L"Sitz";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(25, 176);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(78, 13);
            this->label7->TabIndex = 6;
            this->label7->Text = L"Abteilungsleiter";
            // 
            // Sitz
            // 
            this->Sitz->AutoSize = true;
            this->Sitz->Location = System::Drawing::Point(131, 146);
            this->Sitz->Name = L"Sitz";
            this->Sitz->Size = System::Drawing::Size(35, 13);
            this->Sitz->TabIndex = 12;
            this->Sitz->Text = L"label9";
            // 
            // Stadt
            // 
            this->Stadt->AutoSize = true;
            this->Stadt->Location = System::Drawing::Point(131, 122);
            this->Stadt->Name = L"Stadt";
            this->Stadt->Size = System::Drawing::Size(41, 13);
            this->Stadt->TabIndex = 11;
            this->Stadt->Text = L"label10";
            // 
            // Postleitzahl
            // 
            this->Postleitzahl->AutoSize = true;
            this->Postleitzahl->Location = System::Drawing::Point(131, 98);
            this->Postleitzahl->Name = L"Postleitzahl";
            this->Postleitzahl->Size = System::Drawing::Size(41, 13);
            this->Postleitzahl->TabIndex = 10;
            this->Postleitzahl->Text = L"label11";
            // 
            // Hausnummer
            // 
            this->Hausnummer->AutoSize = true;
            this->Hausnummer->Location = System::Drawing::Point(131, 74);
            this->Hausnummer->Name = L"Hausnummer";
            this->Hausnummer->Size = System::Drawing::Size(41, 13);
            this->Hausnummer->TabIndex = 9;
            this->Hausnummer->Text = L"label12";
            // 
            // Strasse
            // 
            this->Strasse->AutoSize = true;
            this->Strasse->Location = System::Drawing::Point(131, 50);
            this->Strasse->Name = L"Strasse";
            this->Strasse->Size = System::Drawing::Size(41, 13);
            this->Strasse->TabIndex = 8;
            this->Strasse->Text = L"label13";
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(71, 222);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(101, 45);
            this->button1->TabIndex = 16;
            this->button1->Text = L"Speichern";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &EinAusgabeAbteilung::button1_Click);
            // 
            // errorProvider1
            // 
            this->errorProvider1->ContainerControl = this;
            // 
            // comboBox1
            // 
            this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Location = System::Drawing::Point(134, 170);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(91, 21);
            this->comboBox1->TabIndex = 18;
            this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &EinAusgabeAbteilung::comboBox1_SelectedIndexChanged);
            // 
            // comboBox2
            // 
            this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->comboBox2->FormattingEnabled = true;
            this->comboBox2->Location = System::Drawing::Point(134, 23);
            this->comboBox2->Name = L"comboBox2";
            this->comboBox2->Size = System::Drawing::Size(121, 21);
            this->comboBox2->TabIndex = 19;
            this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &EinAusgabeAbteilung::comboBox2_SelectedIndexChanged);
            // 
            // EinAusgabeAbteilung
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(269, 286);
            this->Controls->Add(this->comboBox2);
            this->Controls->Add(this->comboBox1);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->Sitz);
            this->Controls->Add(this->Stadt);
            this->Controls->Add(this->Postleitzahl);
            this->Controls->Add(this->Hausnummer);
            this->Controls->Add(this->Strasse);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"EinAusgabeAbteilung";
            this->Text = L"Abteilungen";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
        if (comboBox1->SelectedIndex < 0 || comboBox1->SelectedIndex > 6)
            return;
        MITARB ma[101];
        getMitarbeiter(ma);

        ABT abt[7];
        getAbteilungen(abt);
        int selectedIndex = comboBox1->SelectedIndex;
        int validMas = 0;
        int id = 0;

        for (int i = 0; i < 101; i++) {
            if (ma[i].id != 0) {
                if (selectedIndex == validMas) {
                    id = ma[i].id;
                    break;
                }
                validMas++;
            }
        }

        abt[comboBox2->SelectedIndex + 1].abtleiter = id;
        saveAbteilungen(abt);
        //setValues(abt[current]);
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
    private: Void setValues(ABT abteilung) {
        MITARB ma[101];
        getMitarbeiter(ma);
        comboBox1->Items->Clear();
        for (int i = 1; i < 101; i++) {
            if (ma[i].id != 0)
                comboBox1->Items->Add(ToString(ma[i].vorname) + " " + ToString(ma[i].name));
        }

        ABT abt[7];
        getAbteilungen(abt);
        comboBox2->Items->Clear();
        for (int i = 1; i < 7; i++)
            comboBox2->Items->Add(ToString(abt[i].abtName));
        comboBox2->Text = ToString(abteilung.abtName);
        selectedAbteilung = 0;


        comboBox1->Text = Convert::ToString(ToString(ma[abteilung.abtleiter].vorname) + " " + ToString(ma[abteilung.abtleiter].name));
        Strasse->Text = ToString(abteilung.strasse);
        Hausnummer->Text = ToString(abteilung.hausnr);
        Postleitzahl->Text = ToString(abteilung.plz);
        Stadt->Text = ToString(abteilung.stadt);
        Sitz->Text = ToString(abteilung.sitz);
    }
    private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
    }
    private: int selectedAbteilung;
    private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
        if (comboBox2->SelectedIndex + 1 == selectedAbteilung)
            return;
        selectedAbteilung = comboBox2->SelectedIndex + 1;
        ABT abt[7];
        getAbteilungen(abt);
        setValues(abt[comboBox2->SelectedIndex + 1]);
    }
    };
}
