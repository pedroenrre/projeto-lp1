#ifndef __MAMIFERONATIVO_H__
#define __MAMIFERONATIVO_H__

#include <mamifero.h>
#include <animalnativo.h>

/// Classe MamiferoNativo
/**
 * Detailed description starts here.
 */
class MamiferoNativo : public Mamifero, AnimalNativo {
	public:
		/// Construtor de MamiferoNativo sem parâmetros.
		/**
		*  Detailed description starts here.
		*/
		MamiferoNativo();
		/// Destrutor de MamiferoNativo.
		/**
		*  A more elaborate description of the destructor.
		*/
		~MamiferoNativo();
};

#endif // __MAMIFERONATIVO_H__