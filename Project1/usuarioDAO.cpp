#include "usuarioDAO.h"

using namespace std;

usuarioDAO::usuarioDAO()
{
}

void usuarioDAO::criarUsuarioDAO(string user, string tipo, string senha, string nome)
{
	string log;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO usuario (login, senha, nome, tipo) VALUES (?,?,?,?)");
		preparedStatement->setString(1, user.c_str());
		preparedStatement->setString(2, senha.c_str());
		preparedStatement->setString(3, nome.c_str());
		preparedStatement->setString(4, tipo.c_str());
		
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}


vector<usuario*>* usuarioDAO::buscarUsuario(string user)
{
	string log;
	usuario * temp = nullptr;
	vector<usuario*> *temp2 = nullptr;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("select login, senha, nome, tipo from usuario where login = ?");
		preparedStatement->setString(1, user.c_str());
		resultSet = preparedStatement->executeQuery();

		temp2 = new vector<usuario*>();
		while (resultSet->next()) {
			temp = new usuario(resultSet->getString(1).c_str(), resultSet->getString(2).c_str(), resultSet->getString(3).c_str(), resultSet->getString(4).c_str());
			temp2->push_back(temp);
		}
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return temp2;
}

