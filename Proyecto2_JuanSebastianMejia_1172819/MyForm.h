#pragma once
#include "usuario.h"
#include "contraseña.h"
#include "NodoL.h"
#include "Lista.h"
#include "Actividad.h"
#include "Alarma.h"
#include "Recordatorios.h"
#include <msclr\marshal_cppstd.h>
#include "FormActividad.h"
#include "FormRecordatorio.h"
#include "FormAlarma.h"
#include "FormSonar.h"



namespace Proyecto2JuanSebastianMejia1172819 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxAño;
	protected:
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxMes;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::Button^ buttonMes;
	private: System::Windows::Forms::Button^ buttonUsuario;
	private: System::Windows::Forms::Button^ buttonActividad;

	private: System::Windows::Forms::Button^ buttonRecordatorio;
	private: System::Windows::Forms::Button^ buttonAlarma;












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
			this->maskedTextBoxAño = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBoxMes = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->buttonMes = (gcnew System::Windows::Forms::Button());
			this->buttonUsuario = (gcnew System::Windows::Forms::Button());
			this->buttonActividad = (gcnew System::Windows::Forms::Button());
			this->buttonRecordatorio = (gcnew System::Windows::Forms::Button());
			this->buttonAlarma = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// maskedTextBoxAño
			// 
			this->maskedTextBoxAño->Location = System::Drawing::Point(42, 12);
			this->maskedTextBoxAño->Mask = L"0000";
			this->maskedTextBoxAño->Name = L"maskedTextBoxAño";
			this->maskedTextBoxAño->Size = System::Drawing::Size(31, 20);
			this->maskedTextBoxAño->TabIndex = 0;
			this->maskedTextBoxAño->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBoxMes
			// 
			this->maskedTextBoxMes->Location = System::Drawing::Point(42, 38);
			this->maskedTextBoxMes->Mask = L"00";
			this->maskedTextBoxMes->Name = L"maskedTextBoxMes";
			this->maskedTextBoxMes->Size = System::Drawing::Size(31, 20);
			this->maskedTextBoxMes->TabIndex = 1;
			this->maskedTextBoxMes->ValidatingType = System::Int32::typeid;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Año";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Mes";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 99);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(393, 150);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::DataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"D";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 50;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"L";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 50;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"M";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 50;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"M";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 50;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"J";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 50;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"V";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 50;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"S";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 50;
			// 
			// buttonMes
			// 
			this->buttonMes->Location = System::Drawing::Point(12, 70);
			this->buttonMes->Name = L"buttonMes";
			this->buttonMes->Size = System::Drawing::Size(75, 23);
			this->buttonMes->TabIndex = 5;
			this->buttonMes->Text = L"Ver Mes";
			this->buttonMes->UseVisualStyleBackColor = true;
			this->buttonMes->Click += gcnew System::EventHandler(this, &MyForm::ButtonMes_Click);
			// 
			// buttonUsuario
			// 
			this->buttonUsuario->Location = System::Drawing::Point(93, 70);
			this->buttonUsuario->Name = L"buttonUsuario";
			this->buttonUsuario->Size = System::Drawing::Size(97, 23);
			this->buttonUsuario->TabIndex = 6;
			this->buttonUsuario->Text = L"Subir Usuario";
			this->buttonUsuario->UseVisualStyleBackColor = true;
			this->buttonUsuario->Click += gcnew System::EventHandler(this, &MyForm::ButtonUsuario_Click);
			// 
			// buttonActividad
			// 
			this->buttonActividad->Location = System::Drawing::Point(288, 9);
			this->buttonActividad->Name = L"buttonActividad";
			this->buttonActividad->Size = System::Drawing::Size(120, 23);
			this->buttonActividad->TabIndex = 7;
			this->buttonActividad->Text = L"Insertar Actividad";
			this->buttonActividad->UseVisualStyleBackColor = true;
			this->buttonActividad->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// buttonRecordatorio
			// 
			this->buttonRecordatorio->Location = System::Drawing::Point(288, 38);
			this->buttonRecordatorio->Name = L"buttonRecordatorio";
			this->buttonRecordatorio->Size = System::Drawing::Size(120, 23);
			this->buttonRecordatorio->TabIndex = 8;
			this->buttonRecordatorio->Text = L"Insertar Recordatorio";
			this->buttonRecordatorio->UseVisualStyleBackColor = true;
			this->buttonRecordatorio->Click += gcnew System::EventHandler(this, &MyForm::ButtonRecordatorio_Click);
			// 
			// buttonAlarma
			// 
			this->buttonAlarma->Location = System::Drawing::Point(288, 67);
			this->buttonAlarma->Name = L"buttonAlarma";
			this->buttonAlarma->Size = System::Drawing::Size(120, 23);
			this->buttonAlarma->TabIndex = 9;
			this->buttonAlarma->Text = L"Insertar Alarma";
			this->buttonAlarma->UseVisualStyleBackColor = true;
			this->buttonAlarma->Click += gcnew System::EventHandler(this, &MyForm::ButtonAlarma_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(420, 283);
			this->Controls->Add(this->buttonAlarma);
			this->Controls->Add(this->buttonRecordatorio);
			this->Controls->Add(this->buttonActividad);
			this->Controls->Add(this->buttonUsuario);
			this->Controls->Add(this->buttonMes);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->maskedTextBoxMes);
			this->Controls->Add(this->maskedTextBoxAño);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		Lista* LEV = new Lista();
		String^usuarioactual;
	private: System::Void DataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		DataGridViewCell^dia = dataGridView1->SelectedCells[0];
		String^ valor = dia->Value->ToString();
		MessageBox::Show("Los eventos para este dia son: ");
		
		//Eventos del dia
	}
private: System::Void ButtonMes_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Clear();
	int año = Convert::ToInt32(maskedTextBoxAño->Text);
	int m = Convert::ToInt32(maskedTextBoxMes->Text);
	int mes = m;
	int a = año;
	if (m<=2)
	{
		año--;
		m = m + 10;
	}
	else
	{
		m=m - 2;
	}

	int q = 1;
	int inicioh;
	int j = año / 100;
	int k = año % 100;


	//Congruencia de Zeller
	inicioh = ((700 + ((26 * m - 2) / 10) + 1 + k + (k / 4) + ((j / 4) + 5 * j)) % 7);
	int dias;
	switch (mes)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		dias = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		dias = 30;
		break;
	case 2:
		if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
			dias = 29;
		else
			dias = 28;
	default:
		break;
	}

	
	int total = dias + inicioh;


	
	cli::array<String^>^ vismes = gcnew cli::array<String^>(7);
	

	int contador = 1;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (inicioh != 0)
			{
				vismes[j] = "";
				inicioh--;
			}
			else if (dias != 0) {
				vismes[j] = contador + "";
				contador++;
				dias--;
			}
			else
				vismes[j] = "";
		}
		dataGridView1->Rows->Add(vismes);
		
	}

	}

	
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ButtonUsuario_Click(System::Object^ sender, System::EventArgs^ e) {
	usuario^ prueba = gcnew usuario();
	prueba->ShowDialog();
	String^ usuario = prueba->Closing();

	String^ ruta;
	ruta = usuario + ".txt";

	ArrayList^ usco = gcnew ArrayList();
	StreamReader^ r = gcnew StreamReader("users.txt");


	while (r->Peek() >= 0)
	{
		usco->Add(r->ReadLine());
	}
	r->Close();
	bool noexis = true;
	for each (String ^ var in usco)
	{
		
		cli::array<String^>^ uc = var->Split(',');
		if (uc[0] == usuario)
		{
			bool salida = false;
			while (!salida)
			{
				contraseña^ contra = gcnew contraseña();
				contra->ShowDialog();
				String^ ver = contra->Closing();
				if (ver != uc[1])
				{
					MessageBox::Show("Contraseña incorrecta");
					salida = false;
				}
				else
				{
					usuarioactual = usuario;
					ArrayList^ vere = gcnew ArrayList();
					StreamReader^stre = gcnew StreamReader(usuario+".txt");
					while (stre->Peek() >= 0)
					{
						vere->Add(stre->ReadLine());
					}
					stre->Close();

					
					for each (String^var1 in vere)
					{
						cli::array<String^>^ seccion = var1->Split(',');
						if ((Convert::ToInt32(seccion[0])/1000)==1)
						{
							//abrir Actividad
							int mes=Convert::ToInt32(seccion[1]);
							int dia = Convert::ToInt32(seccion[2]);
							int hora = Convert::ToInt32(seccion[3]);
							int minuto = Convert::ToInt32(seccion[4]);
							int prioridad = Convert::ToInt32(seccion[5]);
							
							std::string lugar = msclr::interop::marshal_as<std::string>(seccion[6]->ToString());
							std::string materiales = msclr::interop::marshal_as<std::string>(seccion[7]->ToString());
							std::string personas = msclr::interop::marshal_as<std::string>(seccion[8]->ToString());

							Actividad* enviado=new Actividad(mes,dia,hora,minuto,prioridad,lugar,materiales,personas);
							LEV->Agregar(enviado);

							DateTime^ahora = gcnew DateTime();
							ahora = ahora->Now;
							if (mes==ahora->Month)
							{
								if (dia== ahora->Day)
								{
									if (hora== ahora->Hour)
									{
										MessageBox::Show("Hora de actividad alcanzada: "+mes+"/"+dia+": "+hora+":00");
									}
								}
							}
						}
						else if ((Convert::ToInt32(seccion[0]) / 1000) == 2) {
							//abrir Recordatorios
							int mes = Convert::ToInt32(seccion[1]);
							int dia = Convert::ToInt32(seccion[2]);
							int hora = Convert::ToInt32(seccion[3]);
							int minuto = Convert::ToInt32(seccion[4]);
							int prioridad = Convert::ToInt32(seccion[5]);
							std::string texto = msclr::interop::marshal_as<std::string>(seccion[6]->ToString());
							String^ text = gcnew String(texto.c_str());
							Recordatorios* enviado = new Recordatorios(mes,dia,hora,minuto,prioridad,texto);
							LEV->Agregar(enviado);

							DateTime^ ahora = gcnew DateTime();
							ahora = ahora->Now;
							if (mes == ahora->Month)
							{
								if (dia == ahora->Day)
								{
									if (hora == ahora->Hour)
									{
										MessageBox::Show("Recordatorio: "+text);
										

										FormSonar^ fom = gcnew FormSonar();
										fom->ShowDialog();
									}
								}
							}
						}
						else if ((Convert::ToInt32(seccion[0]) / 1000) == 3) {
							//abrir alarmas
							int mes = Convert::ToInt32(seccion[1]);
							int dia = Convert::ToInt32(seccion[2]);
							int hora = Convert::ToInt32(seccion[3]);
							int minuto = Convert::ToInt32(seccion[4]);
							int prioridad = Convert::ToInt32(seccion[5]);
							
							Alarma* enviado=new Alarma(mes,dia,hora,minuto,prioridad);
							LEV->Agregar(enviado);

							DateTime^ ahora = gcnew DateTime();
							ahora = ahora->Now;
							if (mes == ahora->Month)
							{
								if (dia == ahora->Day)
								{
									if (hora == ahora->Hour)
									{
										//abrir form de suena alarma;
										MessageBox::Show("Alarma");

										FormSonar^ fom = gcnew FormSonar();
										fom->ShowDialog();
									}
								}
							}
						}
					}

					
					salida = true;
				}
				noexis=false;
			}
		}
		


	}

	if (noexis)
	{
		MessageBox::Show("Ingrese la contraseña para el nuevo usuario aqui");
		contraseña^ contra = gcnew contraseña();
		contra->ShowDialog();
		String^ ver = contra->Closing();

		StreamWriter^str = gcnew StreamWriter("users.txt",true);
		str->WriteLine(usuario+","+ver);
		str->Close();
		File::Create(ruta)->Close();
		MessageBox::Show("Archivo se ha creado en: "+ruta);
	}

}
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ mes = maskedTextBoxMes->Text;
	String^ day;
	
		DataGridViewCell^ dia = dataGridView1->SelectedCells[0];
		day = dia->Value->ToString();
	

	FormActividad^ac = gcnew FormActividad(Convert::ToInt32(mes),Convert::ToInt32(day));
	ac->ShowDialog();
	Actividad* even = ac->Closing();

	LEV->Agregar(even);

	StreamWriter^ str = gcnew StreamWriter(usuarioactual+".txt", true);

	String^ id = gcnew String(even->id.ToString());
	String^ hora = gcnew String(even->hora.ToString());
	String^ minutos = gcnew String(even->minuto.ToString());
	String^ Prioridad = gcnew String(even->prioridad.ToString());
	String^ Lugar = gcnew String(even->lugar.c_str());
	String^ Materiales = gcnew String(even->materiales.c_str());
	String^ Personas = gcnew String(even->involucradas.c_str());

	String^ linea = gcnew String(id+","+mes+","+day+","+hora+","+minutos+","+Prioridad+","+Lugar+","+Materiales+","+Personas);
	str->WriteLine(linea);
	str->Close();

}
private: System::Void ButtonRecordatorio_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ mes = maskedTextBoxMes->Text;
	String^ day;

	DataGridViewCell^ dia = dataGridView1->SelectedCells[0];
	day = dia->Value->ToString();


	FormRecordatorio^ rec = gcnew FormRecordatorio(Convert::ToInt32(mes), Convert::ToInt32(day));
	rec->ShowDialog();
	Recordatorios* even = rec->Closing();

	LEV->Agregar(even);

	StreamWriter^ str = gcnew StreamWriter(usuarioactual + ".txt", true);

	String^ id = gcnew String(even->id.ToString());
	String^ hora = gcnew String(even->hora.ToString());
	String^ minutos = gcnew String(even->minuto.ToString());
	String^ Prioridad = gcnew String(even->prioridad.ToString());
	String^ Texto = gcnew String(even->Texto.c_str());
	

	String^ linea = gcnew String(id + "," + mes + "," + day + "," + hora + "," + minutos + "," + Prioridad + "," + Texto);
	str->WriteLine(linea);
	str->Close();

}
private: System::Void ButtonAlarma_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ mes = maskedTextBoxMes->Text;
	String^ day;

	DataGridViewCell^ dia = dataGridView1->SelectedCells[0];
	day = dia->Value->ToString();

	FormAlarma^ tst = gcnew FormAlarma(Convert::ToInt32(mes), Convert::ToInt32(day));
	tst->ShowDialog();
	Alarma* even = tst->Closing();

	LEV->Agregar(even);

	StreamWriter^ str = gcnew StreamWriter(usuarioactual + ".txt", true);

	String^ id = gcnew String(even->id.ToString());
	String^ hora = gcnew String(even->hora.ToString());
	String^ minutos = gcnew String(even->minuto.ToString());
	String^ Prioridad = gcnew String(even->prioridad.ToString());

	

	String^ linea = gcnew String(id + "," + mes + "," + day + "," + hora + "," + minutos + "," + Prioridad);
	str->WriteLine(linea);
	str->Close();

}
};
}

