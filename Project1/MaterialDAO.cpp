#include "MaterialDAO.h"

using namespace std;

MaterialDAO::MaterialDAO()
{
}

void MaterialDAO::criarMaterialDAO(string nomematerial, string unidademedida, int custo)
{
	/*string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO material (tipoMaterial, unidade, precoUnidade) VALUES (?,?,?)");

		preparedStatement->setString(1, nomematerial.c_str());
		preparedStatement->setString(2, unidademedida.c_str());
		preparedStatement->setInt(3, custo);
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}*/
}

void MaterialDAO::deletarMaterialDAO(string nomematerial)
{
	/*string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("DELETE FROM material WHERE nomematerial = ?");

		preparedStatement->setString(1, nomematerial.c_str());
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}*/
}

/*void MaterialDAO::editarMaterialDAO(string nomematerial, string unidademedida, int custo)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("UPDATE material SET unidademedida = ?, custo = ? WHERE nomematerial = ?");

		preparedStatement->setString(1, unidademedida.c_str);
		preparedStatement->setString(2, nomematerial.c_str());
		preparedStatement->setInt(3, custo);

		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
}*/

/*Material MaterialDAO::buscarMaterial(string nomematerial)
{
	string log;
	Material * material = nullptr;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT nomematerial, unidademedida, custo FROM material WHERE nomematerial = ?");

		preparedStatement->setString(1, nomematerial.c_str());
		resultSet = preparedStatement->executeQuery();

		if (resultSet->next()) {
			material = new Material();
			material->setNomeMaterial(resultSet->getString(1).c_str());
			material->setUnidadeMedida(resultSet->getInt(2));
			material->setCusto(resultSet->getInt(3));
		}
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return material;
}*/

