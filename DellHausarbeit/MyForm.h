#pragma once
#include "EinAusgabe.h"
#include "Suche.h"
#include "Structs.h"
#include "MyFuncs.h"
#include "Anzeige.h"
#include "EinAusgabeAbteilung.h"

namespace DellHausarbeit {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for MyForm
    /// </summary>
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm()
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //
            Saved = true;
        }
    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Button^  button1;
    protected:

    private: System::Windows::Forms::Button^  button3;

    private: System::Windows::Forms::Button^  button5;

    private: System::Windows::Forms::Button^  button7;
    private: System::Windows::Forms::Button^  ShowAbteilungen;
    private: System::Windows::Forms::GroupBox^  groupBox1;
    private: System::Windows::Forms::GroupBox^  groupBox2;
    private: System::Windows::Forms::GroupBox^  groupBox3;

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
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->ShowAbteilungen = (gcnew System::Windows::Forms::Button());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
            this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
            this->groupBox1->SuspendLayout();
            this->groupBox2->SuspendLayout();
            this->groupBox3->SuspendLayout();
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(26, 27);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(142, 23);
            this->button1->TabIndex = 0;
            this->button1->Text = L"Datensatz eingeben";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // button3
            // 
            this->button3->Location = System::Drawing::Point(26, 85);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(142, 23);
            this->button3->TabIndex = 2;
            this->button3->Text = L"Suchen";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // button5
            // 
            this->button5->Location = System::Drawing::Point(26, 20);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(142, 23);
            this->button5->TabIndex = 4;
            this->button5->Text = L"Speichern";
            this->button5->UseVisualStyleBackColor = true;
            this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
            // 
            // button7
            // 
            this->button7->Location = System::Drawing::Point(26, 56);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(142, 23);
            this->button7->TabIndex = 6;
            this->button7->Text = L"Alle anzeigen";
            this->button7->UseVisualStyleBackColor = true;
            this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
            // 
            // ShowAbteilungen
            // 
            this->ShowAbteilungen->Location = System::Drawing::Point(26, 19);
            this->ShowAbteilungen->Name = L"ShowAbteilungen";
            this->ShowAbteilungen->Size = System::Drawing::Size(142, 23);
            this->ShowAbteilungen->TabIndex = 7;
            this->ShowAbteilungen->Text = L"Alle anzeigen";
            this->ShowAbteilungen->UseVisualStyleBackColor = true;
            this->ShowAbteilungen->Click += gcnew System::EventHandler(this, &MyForm::ShowAbteilungen_Click);
            // 
            // groupBox1
            // 
            this->groupBox1->Controls->Add(this->button1);
            this->groupBox1->Controls->Add(this->button3);
            this->groupBox1->Controls->Add(this->button7);
            this->groupBox1->Location = System::Drawing::Point(12, 9);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(195, 120);
            this->groupBox1->TabIndex = 8;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"Mitarbeiter";
            // 
            // groupBox2
            // 
            this->groupBox2->Controls->Add(this->button5);
            this->groupBox2->Location = System::Drawing::Point(12, 202);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Size = System::Drawing::Size(195, 58);
            this->groupBox2->TabIndex = 9;
            this->groupBox2->TabStop = false;
            this->groupBox2->Text = L"Speichern";
            // 
            // groupBox3
            // 
            this->groupBox3->Controls->Add(this->ShowAbteilungen);
            this->groupBox3->Location = System::Drawing::Point(12, 135);
            this->groupBox3->Name = L"groupBox3";
            this->groupBox3->Size = System::Drawing::Size(195, 61);
            this->groupBox3->TabIndex = 10;
            this->groupBox3->TabStop = false;
            this->groupBox3->Text = L"Abteilungen";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoSize = true;
            this->ClientSize = System::Drawing::Size(223, 279);
            this->Controls->Add(this->groupBox3);
            this->Controls->Add(this->groupBox1);
            this->Controls->Add(this->groupBox2);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"MyForm";
            this->Text = L"Mitarbeiterverwaltung";
            this->groupBox1->ResumeLayout(false);
            this->groupBox2->ResumeLayout(false);
            this->groupBox3->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
        //NeuerDatensatz
        Saved = false;
        EinAusgabe form;
        MITARB all[101];
        getMitarbeiter(all);
        int i = 1;
        while (all[i].id != 0)
            i++;
        form.ID = i;
        form.SetId();
        form.ShowDialog();
        if (!form.speichern) {
            return;
        }
        MITARB neuer = form.GetData();

        neuer.id = i;
        all[i] = neuer;
        saveMitarbeiter(all);
    }
    private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
        Suche form;
        form.ShowDialog();
        Saved = false;
    }
    private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
        MITARB ma[101];
        getMitarbeiter(ma);
        std::list<int>* liste = new std::list<int>();
        for (int i = 1; i < 101; i++) {
            if (ma[i].id != 0)
                liste->push_back(i);
        }
        std::vector<int> aVector(liste->begin(), liste->end());
        Anzeige^ form = gcnew Anzeige(&aVector[0], aVector.size());
        form->ShowDialog();
        Saved = false;
    }
    private: System::Void ShowAbteilungen_Click(System::Object^  sender, System::EventArgs^  e) {
        EinAusgabeAbteilung^ form = gcnew EinAusgabeAbteilung();
        form->ShowDialog();
        Saved = false;
    }
    private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
        Save();
        Saved = true;
    }
    public: bool Saved;
};
}
