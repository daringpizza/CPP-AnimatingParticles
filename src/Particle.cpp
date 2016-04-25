/*
 * Particle.cpp
 *
 *  Created on: 13 Sep 2014
 *      Author: johnwpurcell
 */

#include "Particle.h"
#include <stdlib.h>

namespace tom {

Particle::Particle() {
	m_x = ((2.0 * rand()) / RAND_MAX) - 1;
	m_y = ((2.0 * rand()) / RAND_MAX) - 1;

	const double xspeed = 0.01 * (((2.0 * rand()) / RAND_MAX) - 1);
	const double yspeed = 0.01 * (((2.0 * rand()) / RAND_MAX) - 1);
}

Particle::~Particle() {
	// TODO Auto-generated destructor stub
}

void Particle::update() {

	m_x += xspeed;
	m_y += yspeed;
}
} /* namespace tom */
