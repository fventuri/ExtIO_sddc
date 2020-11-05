#ifndef _HT257_3_6H
#define _HT257_3_6H

// fir lowpass real 3.6M
float FIR2[257] = {
	0.000000087702f,
	0.000000167024f,
	0.000000212224f,
	0.000000134187f,
   -0.000000158278f,
   -0.000000619656f,
   -0.000000986821f,
   -0.000000867068f,
	0.000000000000f,
	0.000001445565f,
	0.000002762820f,
	0.000002954935f,
	0.000001310873f,
   -0.000001966579f,
   -0.000005497289f,
   -0.000007146400f,
   -0.000005110387f,
	0.000000802005f,
	0.000008450986f,
	0.000013860763f,
	0.000013025616f,
	0.000004334179f,
   -0.000009681789f,
   -0.000022549468f,
   -0.000026476917f,
   -0.000016538820f,
	0.000005613166f,
	0.000030842199f,
	0.000045725206f,
	0.000039097174f,
	0.000009022280f,
   -0.000033724052f,
   -0.000068542744f,
   -0.000074189138f,
   -0.000040536612f,
	0.000023131378f,
	0.000088789376f,
	0.000120962501f,
	0.000094687751f,
	0.000011575090f,
   -0.000095378782f,
   -0.000173268532f,
   -0.000174080181f,
   -0.000081852989f,
	0.000072255318f,
	0.000217636131f,
	0.000274831336f,
	0.000196739965f,
   -0.000000000000f,
   -0.000232286762f,
   -0.000383143370f,
   -0.000358304293f,
   -0.000140511269f,
	0.000188071285f,
	0.000472761935f,
	0.000556428706f,
	0.000362379119f,
   -0.000052061470f,
   -0.000504499494f,
   -0.000764052004f,
   -0.000665435692f,
   -0.000205885597f,
	0.000428941499f,
	0.000934342472f,
	0.001028669193f,
	0.000603924438f,
   -0.000193071226f,
   -0.001001354244f,
   -0.001404037636f,
   -0.001137496440f,
   -0.000249150541f,
	0.000885417806f,
	0.001713649353f,
	0.001768935813f,
	0.000923130594f,
   -0.000503813606f,
   -0.001852120892f,
   -0.002419730564f,
   -0.001818731992f,
   -0.000213743675f,
	0.001695260292f,
	0.002967766661f,
	0.002876630931f,
	0.001306425165f,
   -0.001115110729f,
   -0.003251279993f,
   -0.003978664388f,
   -0.002762998941f,
	0.000000000000f,
	0.003079993706f,
	0.004944337511f,
	0.004504973495f,
	0.001723143812f,
   -0.002252092351f,
   -0.005534152943f,
   -0.006374780559f,
   -0.004067998557f,
	0.000573358234f,
	0.005457709644f,
	0.008129835599f,
	0.006973770124f,
	0.002128198127f,
   -0.004379891005f,
   -0.009439366516f,
   -0.010299591502f,
   -0.006003724671f,
	0.001909388768f,
	0.009872240137f,
	0.013830865953f,
	0.011223990543f,
	0.002469326601f,
   -0.008841098503f,
   -0.017298045250f,
   -0.018120304654f,
   -0.009637885996f,
	0.005387884924f,
	0.020406033523f,
	0.027653337082f,
	0.021734952233f,
	0.002697499369f,
   -0.022870249975f,
   -0.043466289113f,
   -0.046678964989f,
   -0.024150698616f,
	0.024453843228f,
	0.090184204477f,
	0.156976175699f,
	0.206653562534f,
	0.224999948360f,
	0.206653562534f,
	0.156976175699f,
	0.090184204477f,
	0.024453843228f,
   -0.024150698616f,
   -0.046678964989f,
   -0.043466289113f,
   -0.022870249975f,
	0.002697499369f,
	0.021734952233f,
	0.027653337082f,
	0.020406033523f,
	0.005387884924f,
   -0.009637885996f,
   -0.018120304654f,
   -0.017298045250f,
   -0.008841098503f,
	0.002469326601f,
	0.011223990543f,
	0.013830865953f,
	0.009872240137f,
	0.001909388768f,
   -0.006003724671f,
   -0.010299591502f,
   -0.009439366516f,
   -0.004379891005f,
	0.002128198127f,
	0.006973770124f,
	0.008129835599f,
	0.005457709644f,
	0.000573358234f,
   -0.004067998557f,
   -0.006374780559f,
   -0.005534152943f,
   -0.002252092351f,
	0.001723143812f,
	0.004504973495f,
	0.004944337511f,
	0.003079993706f,
	0.000000000000f,
   -0.002762998941f,
   -0.003978664388f,
   -0.003251279993f,
   -0.001115110729f,
	0.001306425165f,
	0.002876630931f,
	0.002967766661f,
	0.001695260292f,
   -0.000213743675f,
   -0.001818731992f,
   -0.002419730564f,
   -0.001852120892f,
   -0.000503813606f,
	0.000923130594f,
	0.001768935813f,
	0.001713649353f,
	0.000885417806f,
   -0.000249150541f,
   -0.001137496440f,
   -0.001404037636f,
   -0.001001354244f,
   -0.000193071226f,
	0.000603924438f,
	0.001028669193f,
	0.000934342472f,
	0.000428941499f,
   -0.000205885597f,
   -0.000665435692f,
   -0.000764052004f,
   -0.000504499494f,
   -0.000052061470f,
	0.000362379119f,
	0.000556428706f,
	0.000472761935f,
	0.000188071285f,
   -0.000140511269f,
   -0.000358304293f,
   -0.000383143370f,
   -0.000232286762f,
   -0.000000000000f,
	0.000196739965f,
	0.000274831336f,
	0.000217636131f,
	0.000072255318f,
   -0.000081852989f,
   -0.000174080181f,
   -0.000173268532f,
   -0.000095378782f,
	0.000011575090f,
	0.000094687751f,
	0.000120962501f,
	0.000088789376f,
	0.000023131378f,
   -0.000040536612f,
   -0.000074189138f,
   -0.000068542744f,
   -0.000033724052f,
	0.000009022280f,
	0.000039097174f,
	0.000045725206f,
	0.000030842199f,
	0.000005613166f,
   -0.000016538820f,
   -0.000026476917f,
   -0.000022549468f,
   -0.000009681789f,
	0.000004334179f,
	0.000013025616f,
	0.000013860763f,
	0.000008450986f,
	0.000000802005f,
   -0.000005110387f,
   -0.000007146400f,
   -0.000005497289f,
   -0.000001966579f,
	0.000001310873f,
	0.000002954935f,
	0.000002762820f,
	0.000001445565f,
	0.000000000000f,
   -0.000000867068f,
   -0.000000986821f,
   -0.000000619656f,
   -0.000000158278f,
	0.000000134187f,
	0.000000212224f,
	0.000000167024f,
	0.000000087702f
};
#endif