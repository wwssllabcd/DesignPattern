#include "stdafx.h"
#include "MpStrategy.h"
#include "Strategy.h"


MpStrategy::MpStrategy()
{
}


MpStrategy::~MpStrategy()
{
}

Strategy m_mpStrategy;

void MpStrategy::setStrategy(Strategy s) {
	m_mpStrategy = s;
}

void MpStrategy::startMp() {

	m_mpStrategy.eraseAll();
	m_mpStrategy.scanDefect();
	m_mpStrategy.collectData();
	m_mpStrategy.programData();
	m_mpStrategy.dosFormat();
}


void MpStrategy::run() {
	Strategy tsb15nmMlc;
	setStrategy(tsb15nmMlc);
	startMp();
}
