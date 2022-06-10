#include "pch.h"
#include "User.h"
#include "MySqlConnector.h"

namespace ualib {
#pragma region USER DEFS
	User::User(string _name, string _surname, string _uniqueId, int _bornDate[], int _document) {
		this->name = _name, this->surname = surname, this->uniqueId = _uniqueId;
		this->bornDate[0] = &_bornDate[0], this->bornDate[1] = &_bornDate[1], this->bornDate[2] = &_bornDate[2];
		this->document = _document;
	}

	User::User(string _wordInfo[], int _numericInfo[]) {

	}

	int User::GetDocument() {
		return this->document;
	}

	string User::GetId() {
		return this->uniqueId;
	}

	string User::GetName() {
		return this->name;
	}

	string User::GetSurname() {
		return this->surname;
	}

	void User::SetName(string _name) {
		this->name = _name;
		return;
	}

	void User::SetSurname(string _surname) {
		this->surname = _surname;
		return;
	}

	string* User::ToStringArray() {
		string* _array_ = new string[5];
		return _array_;
	}
#pragma endregion
#pragma region CONNECTOR DEFS
	MySqlConnector::MySqlConnector(string *_connection[]) {
		// [*host, *user, *password, *db, *port, *port, u_socket, ]
		this->connection = mysql_init(0);
		this->connection = mysql_real_connect(connection, _connection[0]->c_str(), _connection[1]->c_str(),
			_connection[2]->c_str(), _connection[3]->c_str(),
			std::atoi((_connection[4]->c_str())), NULL, 0);
	}

	bool MySqlConnector::CheckConnection() {
		if (connection) {
			return true;
		}
		else {
			return false;
		}
	}

	bool MySqlConnector::InsertToMySQL(string* _querySource[]) {
		
	}

#pragma endregion
}