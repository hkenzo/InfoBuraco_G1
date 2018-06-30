#include "buracoDAO.h"


buracoDAO::buracoDAO(int numBuraco, string nomeRua, int numeroRua, int tamanho, string posicao, string regional, int prioridade, int numReclamacoes, int satusBuraco, string nomeCidadao, string canalCidadao, string dadoCanal, string dataHora, string reclamacao)
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
		preparedStatement->setString(2, nomeRua.c_str());
		preparedStatement->setInt(3, numeroRua);
		preparedStatement->setInt(4, tamanho);
		preparedStatement->setString(5, posicao.c_str());
		preparedStatement->setString(6, regional.c_str());

		preparedStatement->setInt(7, prioridade);
		preparedStatement->setInt(8, numReclamacoes);
		//preparedStatement->setInt(9, statusBuraco);

		preparedStatement->setString(10, nomeCidadao.c_str());
		preparedStatement->setString(11, canalCidadao.c_str());
		preparedStatement->setString(12, dadoCanal.c_str());
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
		preparedStatement = connection->prepareStatement("select numBuraco from buraco where nomeRua = 'fisica'");

		//preparedStatement->setString(1, nomRua.c_str());
		//preparedStatement->setInt(2, numRua);

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

