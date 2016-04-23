/*
 * Swarm.h
 *
 *  Created on: 13 Sep 2014
 *      Author: johnwpurcell
 */

#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

namespace tom {

class Swarm {
public:
	const static int NPARTICLES = 5000;

private:
	Particle * m_pParticles;

public:
	Swarm();
	virtual ~Swarm();

	const Particle * const getParticles() { return m_pParticles; };
};

} /* namespace tom */

#endif /* SWARM_H_ */
