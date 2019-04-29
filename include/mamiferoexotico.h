#ifndef __MAMIFEROEXOTICO_H__
#define __MAMIFEROEXOTICO_H__

#include <mamifero.h>
#include <animalexotico.h>

/// Classe MamiferoExotico
/**
 * Detailed description starts here.
 */
class MamiferoExotico : public Mamifero, AnimalExotico {
	public:
		/// Construtor de MamiferoExotico sem parâmetros.
		/**
		*  Detailed description starts here.
		*/
		MamiferoExotico();
		/// Destrutor de MamiferoExotico.
		/**
		*  A more elaborate description of the destructor.
		*/
		~MamiferoExotico();
};

#endif // __MAMIFEROEXOTICO_H__