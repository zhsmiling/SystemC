#ifndef _CSPMACTimer_H
#define _CSPMACTimer_H

#include "systemc.h"

SC_MODULE (CSPMACtimer) {
	sc_in<bool> Clk, Rst, Enmactimer;
	sc_out< sc_uint<8> > OFECou;
	sc_uint<8> cou;

	void prc_CSPMACtimer ();

	SC_CTOR (CSPMACtimer) {
		SC_METHOD (prc_CSPMACtimer);
		sensitive_pos << Clk << Rst;
	}
};

#endif

