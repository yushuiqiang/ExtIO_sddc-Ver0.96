#ifndef _HT257_0_7H
#define _HT257_0_7H

// fir lowpass real 0.7M
float FIR4[257] = {
   -0.000000141905,
   -0.000000169095,
   -0.000000238001,
   -0.000000348959,
   -0.000000498046,
   -0.000000676759,
   -0.000000871728,
   -0.000001064488,
   -0.000001231350,
   -0.000001343414,
   -0.000001366797,
   -0.000001263117,
   -0.000000990290,
   -0.000000503701,
    0.000000242223,
    0.000001292006,
    0.000002686684,
    0.000004460942,
    0.000006639883,
    0.000009235496,
    0.000012242926,
    0.000015636690,
    0.000019366995,
    0.000023356346,
    0.000027496670,
    0.000031647162,
    0.000035633109,
    0.000039245905,
    0.000042244492,
    0.000044358417,
    0.000045292669,
    0.000044734410,
    0.000042361656,
    0.000037853900,
    0.000030904575,
    0.000021235185,
    0.000008610844,
   -0.000007143165,
   -0.000026124236,
   -0.000048335259,
   -0.000073668009,
   -0.000101887819,
   -0.000132620248,
   -0.000165340531,
   -0.000199366563,
   -0.000233856190,
   -0.000267809477,
   -0.000300076604,
   -0.000329371869,
   -0.000354294170,
   -0.000373354171,
   -0.000385008116,
   -0.000387698089,
   -0.000379898237,
   -0.000360166245,
   -0.000327199099,
   -0.000279891896,
   -0.000217398282,
   -0.000139190802,
   -0.000045119348,
    0.000064534333,
    0.000189008142,
    0.000327019299,
    0.000476734297,
    0.000635751178,
    0.000801095999,
    0.000969235148,
    0.001136104855,
    0.001297158888,
    0.001447434979,
    0.001581640077,
    0.001694253954,
    0.001779650181,
    0.001832232870,
    0.001846587038,
    0.001817639880,
    0.001740829677,
    0.001612278640,
    0.001428965531,
    0.001188893609,
    0.000891249192,
    0.000536546044,
    0.000126750768,
   -0.000334615447,
   -0.000842403115,
   -0.001389792769,
   -0.001968288717,
   -0.002567751034,
   -0.003176467762,
   -0.003781268420,
   -0.004367678978,
   -0.004920117410,
   -0.005422127888,
   -0.005856650631,
   -0.006206323358,
   -0.006453809326,
   -0.006582145995,
   -0.006575107576,
   -0.006417574027,
   -0.006095898560,
   -0.005598265350,
   -0.004915029027,
   -0.004039027550,
   -0.002965860336,
   -0.001694124006,
   -0.000225598771,
    0.001434620634,
    0.003278054508,
    0.005292832049,
    0.007463752017,
    0.009772411216,
    0.012197400320,
    0.014714565019,
    0.017297328918,
    0.019917073150,
    0.022543566240,
    0.025145436499,
    0.027690678085,
    0.030147180951,
    0.032483274168,
    0.034668271639,
    0.036673008987,
    0.038470360431,
    0.040035724764,
    0.041347470099,
    0.042387327851,
    0.043140727474,
    0.043597064680,
    0.043749897326,
    0.043597064680,
    0.043140727474,
    0.042387327851,
    0.041347470099,
    0.040035724764,
    0.038470360431,
    0.036673008987,
    0.034668271639,
    0.032483274168,
    0.030147180951,
    0.027690678085,
    0.025145436499,
    0.022543566240,
    0.019917073150,
    0.017297328918,
    0.014714565019,
    0.012197400320,
    0.009772411216,
    0.007463752017,
    0.005292832049,
    0.003278054508,
    0.001434620634,
   -0.000225598771,
   -0.001694124006,
   -0.002965860336,
   -0.004039027550,
   -0.004915029027,
   -0.005598265350,
   -0.006095898560,
   -0.006417574027,
   -0.006575107576,
   -0.006582145995,
   -0.006453809326,
   -0.006206323358,
   -0.005856650631,
   -0.005422127888,
   -0.004920117410,
   -0.004367678978,
   -0.003781268420,
   -0.003176467762,
   -0.002567751034,
   -0.001968288717,
   -0.001389792769,
   -0.000842403115,
   -0.000334615447,
    0.000126750768,
    0.000536546044,
    0.000891249192,
    0.001188893609,
    0.001428965531,
    0.001612278640,
    0.001740829677,
    0.001817639880,
    0.001846587038,
    0.001832232870,
    0.001779650181,
    0.001694253954,
    0.001581640077,
    0.001447434979,
    0.001297158888,
    0.001136104855,
    0.000969235148,
    0.000801095999,
    0.000635751178,
    0.000476734297,
    0.000327019299,
    0.000189008142,
    0.000064534333,
   -0.000045119348,
   -0.000139190802,
   -0.000217398282,
   -0.000279891896,
   -0.000327199099,
   -0.000360166245,
   -0.000379898237,
   -0.000387698089,
   -0.000385008116,
   -0.000373354171,
   -0.000354294170,
   -0.000329371869,
   -0.000300076604,
   -0.000267809477,
   -0.000233856190,
   -0.000199366563,
   -0.000165340531,
   -0.000132620248,
   -0.000101887819,
   -0.000073668009,
   -0.000048335259,
   -0.000026124236,
   -0.000007143165,
    0.000008610844,
    0.000021235185,
    0.000030904575,
    0.000037853900,
    0.000042361656,
    0.000044734410,
    0.000045292669,
    0.000044358417,
    0.000042244492,
    0.000039245905,
    0.000035633109,
    0.000031647162,
    0.000027496670,
    0.000023356346,
    0.000019366995,
    0.000015636690,
    0.000012242926,
    0.000009235496,
    0.000006639883,
    0.000004460942,
    0.000002686684,
    0.000001292006,
    0.000000242223,
   -0.000000503701,
   -0.000000990290,
   -0.000001263117,
   -0.000001366797,
   -0.000001343414,
   -0.000001231350,
   -0.000001064488,
   -0.000000871728,
   -0.000000676759,
   -0.000000498046,
   -0.000000348959,
   -0.000000238001,
   -0.000000169095,
   -0.000000141905
};
#endif