

#include "buracoDAO.h"

buracoDAO::buracoDAO()
{

}

buracoDAO::buracoDAO(int numBuraco, string nomeRua, int numeroRua, int tamanho, string posicao, string regional, int prioridade, int numReclamacoes, int statusBuraco, string nomeCidadao, string canalCidadao, string dadoCanal, string dataHora, string reclamacao)
{
	this->nomeRua = nomeRua;
	this->numeroRua = numeroRua;
	this->posicao = posicao;
	this->tamanho = tamanho;
	this->regional = regional;

	this->canalCidadao = canalCidadao;
	this->dadoCanal = dadoCanal;
	this->nomeCidadao = nomeCidadao;
	this->dataHora = dataHora;
	this->reclamacao = reclamacao;

	this->numReclamacoes = 1;
	this->statusBuraco = 0; //registrado e não finalizado; 1 = finalizado;
	this->prioridade = tamanho;//calculo com base nos dados informadosnumBuraco = 3//numero dado ou pelo banco de dados (automatico) ou por um contador no programa;

	this->numBuraco = 0;

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
	connection->close();
};

int buracoDAO::buscarRua(string nomeRua, int numeroRua)
{
	string log;
	string nomRuaa;
	int numRuaa;
	int temp1;
	int temp2;
	int temp3;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;

	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();

		preparedStatement = connection->prepareStatement("SELECT numBuraco, nomeRua, numeroRua, tamanho, posicao, regional, prioridade, numReclamacoes, statusBuraco, nomeCidadao, canalCidadao, dadoCanal, dataHora, reclamacao FROM buraco");

		//preparedStatement->setString(1, nomRua.c_str());
		//preparedStatement->setInt(2, numRua);

		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	temp1 = resultSet->getInt(1);
	temp3 = resultSet->getInt(2);
	temp2 = resultSet->getInt(3);
	resultSet->next();
	temp1 = resultSet->getInt(1);
	temp3 = resultSet->getInt(2);
	temp2 = resultSet->getInt(3);
	int x = temp1;
	return temp1;
	connection->close();
}









/*vector<buracos*>* buracoDAO::buscarRuae()//(int numBuraco, string nomeRua, int numeroRua, int tamanho, string posicao, string regional, int prioridade, int numReclamacoes, int statusBuraco, string nomeCidadao, string canalCidadao, string dadoCanal, string dataHora, string reclamacao)
{
	string log;
	buracos * temp = nullptr;
	vector<buracos*> *temp2 = nullptr;
	sql::Connection * connection;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT numBuraco, nomeRua, numeroRua, tamanho, posicao, regional, prioridade, numReclamacoes, statusBuraco, nomeCidadao, canalCidadao, dadoCanal, dataHora, reclamacao FROM buraco");

		resultSet = preparedStatement->executeQuery();

		temp2 = new vector<buracos*>();
		while (resultSet->next()) {
			temp = new buracos(resultSet->getInt(1), resultSet->getString(2), resultSet->getInt(3), resultSet->getInt(4), resultSet->getString(5), resultSet->getString(6), resultSet->getInt(7), resultSet->getInt(8), resultSet->getInt(9), resultSet->getString(10), resultSet->getString(11), resultSet->getString(12), resultSet->getString(13), resultSet->getString(14));
			temp2->push_back(temp);
		}
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	return temp2;
}*/

//buracoDAO::string getString(string campo)
//{

//}

//buracoDAO::int getInt(string campo)
//{

//}

