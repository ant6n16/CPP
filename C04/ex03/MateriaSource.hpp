/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:54:43 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/11 14:54:55 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &src);
        ~MateriaSource();

        MateriaSource &operator=(MateriaSource const &src);

        void learnMateria(AMateria *m);
        AMateria *createMateria(std::string const &type);

    private:
        AMateria *_materias[4];
};

#endif
