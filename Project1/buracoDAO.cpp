#include "buracoDAO.h"


buracoDAO::buracoDAO(string nomRua, int numRua, string posRua, int tamanho, string regional, string tipoCom, string Com, string nomCid, string dataHora, int numReclamacoes, int statusBuraco, int prioridade, int numBuraco, string reclamacao)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		
	    // quando numBur = 0 ->db coloca numeração sozinho
		//preparedStatement = connection->prepareStatement("INSERT INTO buraco (numBuraco, nomeRua, numeroRua, tamanho, posicao, regional, prioridade, numReclamacoes, statusBuraco, nomeCidadao, canalCidadao, dadoCanal, dataHora, reclamacao)	VALUES(?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?); ");
		preparedStatement = connection->prepareStatement("INSERT INTO buraco (numBuraco, nomeRua, numeroRua, tamanho, posicao, regional, prioridade, numReclamacoes, statusBuraco, nomeCidadao, canalCidadao, dadoCanal, dataHora, reclamacao)	VALUES(?,?,?,?,?,?,?,?,?,?,?,?,?,?); ");

		preparedStatement->setInt(1, numBuraco); 
		preparedStatement->setString(2, nomRua.c_str());
		preparedStatement->setInt(3, numRua);
		preparedStatement->setInt(4, tamanho);
		preparedStatement->setString(5, posRua.c_str());
		preparedStatement->setString(6, regional.c_str());

		preparedStatement->setInt(7, prioridade);
		preparedStatement->setInt(8, numReclamacoes);
		preparedStatement->setInt(9, statusBuraco);

		preparedStatement->setString(10, nomCid.c_str());
		preparedStatement->setString(11, tipoCom.c_str());
		preparedStatement->setString(12, Com.c_str());
		preparedStatement->setString(13, dataHora.c_str());
		preparedStatement->setString(14, reclamacao.c_str());
		

		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
};

int buracoDAO::buscarRua(string nomRua, int numRua)
{
	string log;
	string nomRuaa;
	int numRuaa;
	int temp;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("select numBuraco from buraco where nomeRua = 'ttt' and numeroRua = 33");

		nomRuaa = nomRua;
		numRuaa = numRua;
		preparedStatement->setString(1, nomRua.c_str());
		preparedStatement->setInt(2, numRua);

		resultSet = preparedStatement->executeQuery();

		temp = resultSet->getInt(1);
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return temp;
}




//buracoDAO::string getString(string campo)
//{

//}

//buracoDAO::int getInt(string campo)
//{

//}

