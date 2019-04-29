#ifndef __REPTILNATIVO_H__
#define __REPTILNATIVO_H__

#include <reptil.h>
#include <animalnativo.h>

/// Classe ReptilNativo
/**
 * Detailed description starts here.
 */
class ReptilNativo : public Reptil, AnimalNativo {
	public:
		/// Construtor de ReptilNativo sem parâmetros.
		/**
		*  Detailed description starts here.
		*/
		ReptilNativo();
		/// Destrutor de ReptilNativo.
		/**
		*  A more elaborate description of the destructor.
		*/
		~ReptilNativo();
};

#endif // __REPTILNATIVO_H__