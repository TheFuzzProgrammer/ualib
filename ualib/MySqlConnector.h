#pragma once
#include <mysql.h>

namespace ualib {
	class ExternalExport MySqlConnector
	{
	protected:
		MYSQL* connection;

	public:
		MySqlConnector(string*[]);
		bool CheckConnection();
		bool InsertToMySQL(string* _querySource[]);
		bool UpdateToMySQL(string* _querySource[]);
		bool DeleteFromMySQL(string* _querySource[]);
	};
}

