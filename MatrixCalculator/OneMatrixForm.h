#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class OneMatrixForm : public System::Windows::Forms::Form
	{
	public:
		OneMatrixForm()
		{
			InitializeComponent();
		}

	protected:
		~OneMatrixForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// OneMatrixForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(467, 463);
			this->Name = L"OneMatrixForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"One Matrix Form";
			this->Load += gcnew System::EventHandler(this, &OneMatrixForm::OneMatrixForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	private:
		System::Void OneMatrixForm_Load(System::Object^ sender, System::EventArgs^ e)
		{
			// Дополнительная инициализация формы OneMatrixForm
		}
	};
}