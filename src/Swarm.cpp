/*
 * Swarm.cpp
 *
 *  Created on: 13 Sep 2014
 *      Author: johnwpurcell
 */

#include "Swarm.h"

namespace tom {

Swarm::Swarm() {
	m_pParticles = new Particle[NPARTICLES];

}

Swarm::~Swarm() {
	delete [] m_pParticles;
}



} /* namespace tom */
