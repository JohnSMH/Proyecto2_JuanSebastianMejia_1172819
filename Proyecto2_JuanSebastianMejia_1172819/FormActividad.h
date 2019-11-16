#pragma once
#include "Actividad.h"
#include <string>
#include <iostream>
#include <msclr\marshal_cppstd.h>

namespace Proyecto2JuanSebastianMejia1172819 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormActividad
	/// </summary>
	public ref class FormActividad : public System::Windows::Forms::Form
	{
	public:
		FormActividad(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		FormActividad(int mes, int dia) {
			InitializeComponent();

			maskedTextBoxDia->Text = dia.ToString();
			maskedTextBoxMes->Text = mes.ToString();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormActividad()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxLugar;
	private: System::Windows::Forms::TextBox^ textBoxMateriales;
	private: System::Windows::Forms::TextBox^ textBoxPersonas;
	protected:








	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxMes;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxMinuto;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxPrioridad;



	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxHora;

	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxDia;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;
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
			this->textBoxLugar = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMateriales = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPersonas = (gcnew System::Windows::Forms::TextBox());
			this->maskedTextBoxMes = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBoxMinuto = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBoxPrioridad = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBoxHora = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBoxDia = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBoxLugar
			// 
			this->textBoxLugar->Location = System::Drawing::Point(72, 142);
			this->textBoxLugar->Name = L"textBoxLugar";
			this->textBoxLugar->Size = System::Drawing::Size(100, 20);
			this->textBoxLugar->TabIndex = 5;
			// 
			// textBoxMateriales
			// 
			this->textBoxMateriales->Location = System::Drawing::Point(72, 168);
			this->textBoxMateriales->Name = L"textBoxMateriales";
			this->textBoxMateriales->Size = System::Drawing::Size(100, 20);
			this->textBoxMateriales->TabIndex = 6;
			// 
			// textBoxPersonas
			// 
			this->textBoxPersonas->Location = System::Drawing::Point(72, 194);
			this->textBoxPersonas->Name = L"textBoxPersonas";
			this->textBoxPersonas->Size = System::Drawing::Size(100, 20);
			this->textBoxPersonas->TabIndex = 7;
			// 
			// maskedTextBoxMes
			// 
			this->maskedTextBoxMes->Location = System::Drawing::Point(72, 12);
			this->maskedTextBoxMes->Mask = L"00";
			this->maskedTextBoxMes->Name = L"maskedTextBoxMes";
			this->maskedTextBoxMes->ReadOnly = true;
			this->maskedTextBoxMes->Size = System::Drawing::Size(28, 20);
			this->maskedTextBoxMes->TabIndex = 8;
			this->maskedTextBoxMes->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBoxMinuto
			// 
			this->maskedTextBoxMinuto->Location = System::Drawing::Point(72, 90);
			this->maskedTextBoxMinuto->Mask = L"00";
			this->maskedTextBoxMinuto->Name = L"maskedTextBoxMinuto";
			this->maskedTextBoxMinuto->Size = System::Drawing::Size(28, 20);
			this->maskedTextBoxMinuto->TabIndex = 9;
			this->maskedTextBoxMinuto->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBoxPrioridad
			// 
			this->maskedTextBoxPrioridad->Location = System::Drawing::Point(72, 116);
			this->maskedTextBoxPrioridad->Mask = L"00";
			this->maskedTextBoxPrioridad->Name = L"maskedTextBoxPrioridad";
			this->maskedTextBoxPrioridad->Size = System::Drawing::Size(28, 20);
			this->maskedTextBoxPrioridad->TabIndex = 10;
			this->maskedTextBoxPrioridad->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBoxHora
			// 
			this->maskedTextBoxHora->Location = System::Drawing::Point(72, 64);
			this->maskedTextBoxHora->Mask = L"00";
			this->maskedTextBoxHora->Name = L"maskedTextBoxHora";
			this->maskedTextBoxHora->Size = System::Drawing::Size(28, 20);
			this->maskedTextBoxHora->TabIndex = 11;
			this->maskedTextBoxHora->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBoxDia
			// 
			this->maskedTextBoxDia->Location = System::Drawing::Point(72, 38);
			this->maskedTextBoxDia->Mask = L"00";
			this->maskedTextBoxDia->Name = L"maskedTextBoxDia";
			this->maskedTextBoxDia->ReadOnly = true;
			this->maskedTextBoxDia->Size = System::Drawing::Size(28, 20);
			this->maskedTextBoxDia->TabIndex = 12;
			this->maskedTextBoxDia->ValidatingType = System::Int32::typeid;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Mes";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 197);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Personas";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 171);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Materiales";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 145);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Lugar";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 119);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 13);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Prioridad";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 93);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 13);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Minuto";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 67);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(30, 13);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Hora";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 41);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(23, 13);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Dia";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(97, 226);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Crear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormActividad::Button1_Click);
			// 
			// FormActividad
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->maskedTextBoxDia);
			this->Controls->Add(this->maskedTextBoxHora);
			this->Controls->Add(this->maskedTextBoxPrioridad);
			this->Controls->Add(this->maskedTextBoxMinuto);
			this->Controls->Add(this->maskedTextBoxMes);
			this->Controls->Add(this->textBoxPersonas);
			this->Controls->Add(this->textBoxMateriales);
			this->Controls->Add(this->textBoxLugar);
			this->Name = L"FormActividad";
			this->Text = L"FormActividad";
			this->Load += gcnew System::EventHandler(this, &FormActividad::FormActividad_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: Actividad* Closing() {
			
			int mes = Convert::ToInt32(maskedTextBoxMes->Text);
			int dia = Convert::ToInt32(maskedTextBoxDia->Text);
			int hora = Convert::ToInt32(maskedTextBoxHora->Text);
			int minuto = Convert::ToInt32(maskedTextBoxMinuto->Text);
			int prioridad = Convert::ToInt32(maskedTextBoxPrioridad->Text);

			std::string lugar = msclr::interop::marshal_as<std::string>(textBoxLugar->Text);
			std::string materiales = msclr::interop::marshal_as<std::string>(textBoxMateriales->Text);
			std::string personas = msclr::interop::marshal_as<std::string>(textBoxPersonas->Text);

			Actividad* evento = new Actividad(mes,dia,hora,minuto,prioridad,lugar,materiales,personas);
			
			return evento;
		}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
private: System::Void FormActividad_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
