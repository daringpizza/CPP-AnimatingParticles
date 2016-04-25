/*
 * Particle.h
 *
 *  Created on: 13 Sep 2014
 *      Author: johnwpurcell
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace tom {

struct Particle {
	double m_x;
	double m_y;

	double xspeed;
	double yspeed;

public:
	Particle();
	virtual ~Particle();
	void update();
};

} /* namespace tom */

#endif /* PARTICLE_H_ */
