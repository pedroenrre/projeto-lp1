#ifndef __ANFIBIONATIVO_H__
#define __ANFIBIONATIVO_H__

#include <anfibio.h>
#include <animalnativo.h>

/// Classe AnfibioNativo
/**
 * Detailed description starts here.
 */
class AnfibioNativo : public Anfibio, AnimalNativo {
	public:
		/// Construtor de AnfibioNativo sem parâmetros.
		/**
		*  Detailed description starts here.
		*/
		AnfibioNativo();
		/// Destrutor de AnfibioNativo.
		/**
		*  A more elaborate description of the destructor.
		*/
		~AnfibioNativo();
};

#endif // __ANFIBIONATIVO_H__