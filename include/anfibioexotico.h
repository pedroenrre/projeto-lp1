#ifndef __ANFIBIOEXOTICO_H__
#define __ANFIBIOEXOTICO_H__

#include <anfibio.h>
#include <animalexotico.h>

/// Classe AnfibioExotico
/**
 * Detailed description starts here.
 */
class AnfibioExotico : public Anfibio, AnimalExotico {
	public:
		/// Construtor de AnfibioExotico sem parâmetros.
		/**
		*  Detailed description starts here.
		*/
		AnfibioExotico();
		/// Destrutor de AnfibioExotico.
		/**
		*  A more elaborate description of the destructor.
		*/
		~AnfibioExotico();
};

#endif // __ANFIBIOEXOTICO_H__