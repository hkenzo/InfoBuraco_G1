#include "materialDAO.h"

using namespace std;

materialDAO::materialDAO()
{
}

void materialDAO::criarMaterialDAO(string tipoMaterial, string unidadeMaterial, int precoUnidade)
{
	string log;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO material (tipoMaterial, unidade, precoUnidade) VALUES (?,?,?)");

		preparedStatement->setString(1, tipoMaterial.c_str());
		preparedStatement->setString(2, unidadeMaterial.c_str());
		preparedStatement->setInt(3, precoUnidade);
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void materialDAO::deletarMaterialDAO(int idMaterial)
{
	string log;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("DELETE FROM material WHERE sequencialMaterial = ?");

		preparedStatement->setInt(1, idMaterial);
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

void materialDAO::alterarMaterialDAO(int precoUnidade, int idMaterial)
{
	string log;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("UPDATE material SET precoUnidade = ? WHERE sequencialMaterial = ?");
		preparedStatement->setInt(1, precoUnidade);
		preparedStatement->setInt(2, idMaterial);

		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}

vector<material*>* materialDAO::buscarMaterial()
{
	string log;
	material * temp = nullptr;
	vector<material*> *temp2 = nullptr;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("select tipoMaterial, unidade, precoUnidade, sequencialMaterial from material");

		resultSet = preparedStatement->executeQuery();

		temp2 = new vector<material*>();
		while (resultSet->next()) {
			temp = new material(resultSet->getString(1).c_str(), resultSet->getString(2).c_str(), resultSet->getInt(3), resultSet->getInt(4));
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

void materialDAO::criarMaterialSaidaDAO(string data, int numOS, int sequencial) {
	string log;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO Material_saida (data, numOS, sequencialMaterial) VALUES (?,?,?)");

		preparedStatement->setString(1, data.c_str());
		preparedStatement->setInt(2, numOS);
		preparedStatement->setInt(3, sequencial);
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}