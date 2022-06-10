#pragma once

namespace ualib {
	class ExternalExport User
	{
	protected:
		string uniqueId;
		string name;
		string surname;
		int* bornDate[3];
		int document;


	public:
		User(string, string, string, int[], int);
		User(string[], int[]);

	public:
		string GetName();
		string GetSurname();
		int GetDocument();
		string GetId();
		string* ToStringArray();
		void SetName(string);
		void SetSurname(string);

	protected:
		void CalculateAge();
	};
}
