#ifndef __ANIMAL_SILVESTRE_H__
#define __ANIMAL_SILVESTRE_H__

#include <string>

/// Classe AnimalSilvestre
/**
 * AnimalSilvestre é a classe onde se registra as permissões para manutenção e o
 * uso das diferentes espécies.
 */
class AnimalSilvestre {
	public:
		/// Construtor parametrizado de AnimalSilvestre.
		/**
		*  Constroi um animal silvestre já informando sua autorização do IBAMA.
		*/
		AnimalSilvestre(std::string auth);
		/// Construtor de AnimalSilvestre sem parâmetros.
		/**
		*  Constroi um animal silvestre sem informar sua autorização do IBAMA.
		*/
		AnimalSilvestre();
		/// Destrutor de AnimalSilvestre.
		/**
		*  A more elaborate description of the destructor.
		*/
		~AnimalSilvestre();
		/// Getter
		/**
		*  Método de acesso para retornar o atributo protegido autorizacao_ibama.
		*/
		std::string getAutorizacao_Ibama();
		/// Setter
		/**
		*  Método de acesso para alterar o atributo protegido autorizacao_ibama.
		*/
		void setAutorizacao_Ibama(std::string auth);
	protected:
		std::string autorizacao_ibama; ///< Autorização do IBAMA
		
};

#endif // __ANIMAL_SILVESTRE_H__