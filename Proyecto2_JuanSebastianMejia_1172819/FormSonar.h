#pragma once


namespace Proyecto2JuanSebastianMejia1172819 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;
	using namespace System::Threading;

	/// <summary>
	/// Summary for FormSonar
	/// </summary>
	public ref class FormSonar : public System::Windows::Forms::Form
	{
	public:
		FormSonar(void)
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
		~FormSonar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonOK;
	private: System::Windows::Forms::Button^ buttonDormir;
	protected:



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxPost;
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
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->buttonDormir = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxPost = (gcnew System::Windows::Forms::MaskedTextBox());
			this->SuspendLayout();
			// 
			// buttonOK
			// 
			this->buttonOK->Location = System::Drawing::Point(67, 16);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(75, 23);
			this->buttonOK->TabIndex = 0;
			this->buttonOK->Text = L"OK";
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &FormSonar::ButtonOK_Click);
			// 
			// buttonDormir
			// 
			this->buttonDormir->Location = System::Drawing::Point(67, 112);
			this->buttonDormir->Name = L"buttonDormir";
			this->buttonDormir->Size = System::Drawing::Size(75, 23);
			this->buttonDormir->TabIndex = 1;
			this->buttonDormir->Text = L"Postponer";
			this->buttonDormir->UseVisualStyleBackColor = true;
			this->buttonDormir->Click += gcnew System::EventHandler(this, &FormSonar::ButtonDormir_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Cantidad en segundos";
			// 
			// maskedTextBoxPost
			// 
			this->maskedTextBoxPost->Location = System::Drawing::Point(67, 86);
			this->maskedTextBoxPost->Mask = L"0000000000";
			this->maskedTextBoxPost->Name = L"maskedTextBoxPost";
			this->maskedTextBoxPost->Size = System::Drawing::Size(76, 20);
			this->maskedTextBoxPost->TabIndex = 4;
			this->maskedTextBoxPost->ValidatingType = System::Int32::typeid;
			// 
			// FormSonar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(211, 147);
			this->Controls->Add(this->maskedTextBoxPost);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonDormir);
			this->Controls->Add(this->buttonOK);
			this->Name = L"FormSonar";
			this->Text = L"FormSonar";
			this->Load += gcnew System::EventHandler(this, &FormSonar::FormSonar_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void playSimpleSound() {
		SoundPlayer^ hola = gcnew SoundPlayer("ruido.wav");
		hola->Play();
	}
	private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ButtonOK_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
private: System::Void ButtonDormir_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Hide();
	Thread::Sleep(Convert::ToInt32(maskedTextBoxPost->Text)*1000);
	Show();

}

		 

private: System::Void FormSonar_Load(System::Object^ sender, System::EventArgs^ e) {
	playSimpleSound();
}
};
}
