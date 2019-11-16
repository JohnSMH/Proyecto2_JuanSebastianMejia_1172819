#pragma once
#include "Recordatorios.h"
#include <msclr\marshal_cppstd.h>

namespace Proyecto2JuanSebastianMejia1172819 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormRecordatorio
	/// </summary>
	public ref class FormRecordatorio : public System::Windows::Forms::Form
	{
	public:
		FormRecordatorio(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		FormRecordatorio(int mes, int dia) {
			InitializeComponent();
			maskedTextBoxMes->Text = mes.ToString();
			maskedTextBoxDia->Text = dia.ToString();
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormRecordatorio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxMes;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxDia;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxHora;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxMinuto;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxPrioridad;
	private: System::Windows::Forms::TextBox^ textBoxTexto;






	private: System::Windows::Forms::Button^ buttonCrear;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxMes = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBoxDia = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBoxHora = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBoxMinuto = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBoxPrioridad = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBoxTexto = (gcnew System::Windows::Forms::TextBox());
			this->buttonCrear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Mes";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Dia";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Hora";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Minuto";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 117);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Prioridad";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 144);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Texto";
			// 
			// maskedTextBoxMes
			// 
			this->maskedTextBoxMes->Location = System::Drawing::Point(78, 6);
			this->maskedTextBoxMes->Mask = L"00";
			this->maskedTextBoxMes->Name = L"maskedTextBoxMes";
			this->maskedTextBoxMes->Size = System::Drawing::Size(51, 20);
			this->maskedTextBoxMes->TabIndex = 7;
			this->maskedTextBoxMes->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBoxDia
			// 
			this->maskedTextBoxDia->Location = System::Drawing::Point(78, 33);
			this->maskedTextBoxDia->Mask = L"00";
			this->maskedTextBoxDia->Name = L"maskedTextBoxDia";
			this->maskedTextBoxDia->Size = System::Drawing::Size(51, 20);
			this->maskedTextBoxDia->TabIndex = 8;
			this->maskedTextBoxDia->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBoxHora
			// 
			this->maskedTextBoxHora->Location = System::Drawing::Point(78, 62);
			this->maskedTextBoxHora->Mask = L"00";
			this->maskedTextBoxHora->Name = L"maskedTextBoxHora";
			this->maskedTextBoxHora->Size = System::Drawing::Size(51, 20);
			this->maskedTextBoxHora->TabIndex = 9;
			this->maskedTextBoxHora->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBoxMinuto
			// 
			this->maskedTextBoxMinuto->Location = System::Drawing::Point(78, 89);
			this->maskedTextBoxMinuto->Mask = L"00";
			this->maskedTextBoxMinuto->Name = L"maskedTextBoxMinuto";
			this->maskedTextBoxMinuto->Size = System::Drawing::Size(51, 20);
			this->maskedTextBoxMinuto->TabIndex = 10;
			this->maskedTextBoxMinuto->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBoxPrioridad
			// 
			this->maskedTextBoxPrioridad->Location = System::Drawing::Point(78, 114);
			this->maskedTextBoxPrioridad->Mask = L"00";
			this->maskedTextBoxPrioridad->Name = L"maskedTextBoxPrioridad";
			this->maskedTextBoxPrioridad->Size = System::Drawing::Size(51, 20);
			this->maskedTextBoxPrioridad->TabIndex = 11;
			this->maskedTextBoxPrioridad->ValidatingType = System::Int32::typeid;
			// 
			// textBoxTexto
			// 
			this->textBoxTexto->Location = System::Drawing::Point(78, 141);
			this->textBoxTexto->Name = L"textBoxTexto";
			this->textBoxTexto->Size = System::Drawing::Size(100, 20);
			this->textBoxTexto->TabIndex = 12;
			// 
			// buttonCrear
			// 
			this->buttonCrear->Location = System::Drawing::Point(103, 188);
			this->buttonCrear->Name = L"buttonCrear";
			this->buttonCrear->Size = System::Drawing::Size(75, 23);
			this->buttonCrear->TabIndex = 13;
			this->buttonCrear->Text = L"Crear";
			this->buttonCrear->UseVisualStyleBackColor = true;
			this->buttonCrear->Click += gcnew System::EventHandler(this, &FormRecordatorio::ButtonCrear_Click);
			// 
			// FormRecordatorio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->buttonCrear);
			this->Controls->Add(this->textBoxTexto);
			this->Controls->Add(this->maskedTextBoxPrioridad);
			this->Controls->Add(this->maskedTextBoxMinuto);
			this->Controls->Add(this->maskedTextBoxHora);
			this->Controls->Add(this->maskedTextBoxDia);
			this->Controls->Add(this->maskedTextBoxMes);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"FormRecordatorio";
			this->Text = L"FormRecordatorio";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: Recordatorios* Closing() {

			int mes = Convert::ToInt32(maskedTextBoxMes->Text);
			int dia = Convert::ToInt32(maskedTextBoxDia->Text);
			int hora = Convert::ToInt32(maskedTextBoxHora->Text);
			int minuto = Convert::ToInt32(maskedTextBoxMinuto->Text);
			int prioridad = Convert::ToInt32(maskedTextBoxPrioridad->Text);

			std::string texto = msclr::interop::marshal_as<std::string>(textBoxTexto->Text);
			
			Recordatorios* evento = new Recordatorios(mes, dia, hora, minuto, prioridad, texto);

			return evento;
		}

	private: System::Void ButtonCrear_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
};
}
