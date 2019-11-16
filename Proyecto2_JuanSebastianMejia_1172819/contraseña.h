#pragma once

namespace Proyecto2JuanSebastianMejia1172819 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for contraseña
	/// </summary>
	public ref class contraseña : public System::Windows::Forms::Form
	{
	public:
		contraseña(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~contraseña()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttoncontra;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttoncontra = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ingrese Contraseña";
			// 
			// buttoncontra
			// 
			this->buttoncontra->Location = System::Drawing::Point(12, 51);
			this->buttoncontra->Name = L"buttoncontra";
			this->buttoncontra->Size = System::Drawing::Size(75, 23);
			this->buttoncontra->TabIndex = 2;
			this->buttoncontra->Text = L"Ingresar";
			this->buttoncontra->UseVisualStyleBackColor = true;
			this->buttoncontra->Click += gcnew System::EventHandler(this, &contraseña::Buttoncontra_Click);
			// 
			// contraseña
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(170, 185);
			this->Controls->Add(this->buttoncontra);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"contraseña";
			this->Text = L"contraseña";
			this->Load += gcnew System::EventHandler(this, &contraseña::Contraseña_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: System::String^ Closing() {
		return textBox1->Text;
	}
	private: System::Void Buttoncontra_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void Contraseña_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
