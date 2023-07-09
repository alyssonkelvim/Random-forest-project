#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

#define NUM_THREADS 4
#define N_ELEM 4999999
#define MAX_LINE_LENGTH 1000
typedef struct {
    int thread_id;
    int start;
    int end;
    float *F0;
    float *F1;
    float *F2;
    float *F3;
    float *F4;
    float *F5;
    float *F6;
    float *F7;
    float *F8;
    float *F9;
    float *F10;
    float *F11;
    float *F12;
    float *F13;
    float *F14;
    float *F15;
    float *F16;
    float *F17;
    float *F18;
    int *P;
} ThreadData;
DWORD WINAPI RF_with_IF_thread(LPVOID arg)
{
    ThreadData* data = (ThreadData*)arg;
    int thread_id = data->thread_id;
    int start = data->start;
    int end = data->end;    float *F0 = data->F0;
    float *F1 = data->F1;
    float *F2 = data->F2;
    float *F3 = data->F3;
    float *F4 = data->F4;
    float *F5 = data->F5;
    float *F6 = data->F6;
    float *F7 = data->F7;
    float *F8 = data->F8;
    float *F9 = data->F9;
    float *F10 = data->F10;
    float *F11 = data->F11;
    float *F12 = data->F12;
    float *F13 = data->F13;
    float *F14 = data->F14;
    float *F15 = data->F15;
    float *F16 = data->F16;
    float *F17 = data->F17;
    float *F18 = data->F18;
	int *P = data->P;

    for (int i = start; i < end; i++) {int Class[2];
        Class[0] = 0;        Class[1] = 0;

		if (F10[i]<= 0.992) {
			if (F11[i]<= 0.745) {
				if (F1[i]<= 0.705) {
					if (F14[i]<= 2.412) {
						if (F10[i]<= -1.067) {
							if (F10[i]<= -1.323) {
								if (F9[i]<= 3.058) {
									if (F9[i]<= 2.406) {
										if (F12[i]<= 0.894) {
											if (F17[i]<= 1.586) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.963) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 2.203) {
											if (F7[i]<= 1.881) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.538) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F1[i]<= 0.277) {
										if (F8[i]<= 1.304) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										if (F14[i]<= 2.411) {
											if (F7[i]<= 2.239) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								}
							} else {
								if (F9[i]<= 2.009) {
									if (F5[i]<= -1.532) {
										if (F7[i]<= 1.567) {
											if (F7[i]<= 1.507) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -1.103) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 1.541) {
											if (F5[i]<= 0.802) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -1.374) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F12[i]<= 1.319) {
										if (F15[i]<= 0.674) {
											if (F2[i]<= 1.468) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 0.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.862) {
											if (F8[i]<= 1.501) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 0.43) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F12[i]<= 0.936) {
								if (F7[i]<= 1.094) {
									if (F7[i]<= 0.73) {
										if (F1[i]<= 0.562) {
											if (F1[i]<= 0.478) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 1.28) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F12[i]<= 0.645) {
											if (F13[i]<= 1.109) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 0.844) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F16[i]<= 1.074) {
										if (F17[i]<= 1.243) {
											if (F10[i]<= 0.244) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.237) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= 0.062) {
											if (F7[i]<= 1.368) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.256) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F16[i]<= 1.128) {
									if (F13[i]<= 1.916) {
										if (F12[i]<= 1.059) {
											if (F16[i]<= 0.876) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 0.579) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.475) {
											if (F10[i]<= -0.999) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.712) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= -1.253) {
										if (F12[i]<= 1.21) {
											if (F2[i]<= -0.749) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -0.734) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 1.354) {
											if (F12[i]<= 1.067) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.039) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F12[i]<= 1.369) {
							if (F12[i]<= 1.258) {
								if (F5[i]<= 1.272) {
									if (F5[i]<= -0.938) {
										if (F15[i]<= 0.628) {
											if (F7[i]<= 1.744) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 2.016) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -0.642) {
											if (F10[i]<= -1.345) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 2.276) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 0.498) {
										if (F17[i]<= 1.455) {
											if (F9[i]<= 2.512) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.527) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.336) {
											Class[0]++;
										} else {
											if (F9[i]<= 2.566) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F9[i]<= 2.625) {
									if (F10[i]<= -0.781) {
										if (F5[i]<= 1.024) {
											if (F13[i]<= 2.61) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.749) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 0.594) {
											if (F17[i]<= 1.02) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.617) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F9[i]<= 2.816) {
										if (F15[i]<= 0.739) {
											if (F17[i]<= 1.52) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.969) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 2.033) {
											if (F17[i]<= 1.445) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 2.988) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F9[i]<= 2.889) {
								if (F10[i]<= -1.621) {
									if (F10[i]<= -1.65) {
										if (F0[i]<= 0.705) {
											Class[0]++;
										} else {
											if (F0[i]<= 0.707) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -1.648) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F7[i]<= 1.813) {
										if (F17[i]<= 1.348) {
											if (F12[i]<= 1.419) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.415) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -1.474) {
											if (F17[i]<= 1.399) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= -0.827) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F13[i]<= 2.778) {
									if (F9[i]<= 3.137) {
										if (F13[i]<= 2.719) {
											if (F2[i]<= -1.504) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 2.723) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= -1.752) {
											if (F9[i]<= 3.49) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.608) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 2.071) {
										if (F7[i]<= 1.955) {
											Class[1]++;
										} else {
											if (F7[i]<= 2.15) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[1]++;
									}
								}
							}
						}
					}
				} else {
					if (F12[i]<= 1.257) {
						if (F12[i]<= 0.97) {
							if (F12[i]<= 0.8) {
								if (F15[i]<= 0.49) {
									if (F10[i]<= 0.577) {
										if (F10[i]<= -0.015) {
											if (F11[i]<= 0.614) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 0.625) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 0.629) {
											if (F12[i]<= 0.582) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 0.377) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F4[i]<= 0.811) {
										if (F15[i]<= 0.581) {
											if (F11[i]<= 0.674) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.833) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= 1.118) {
											if (F2[i]<= -1.032) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 0.732) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F9[i]<= 1.462) {
									if (F7[i]<= 0.975) {
										if (F14[i]<= 0.281) {
											if (F2[i]<= 1.128) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.405) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F0[i]<= 0.6) {
											if (F15[i]<= 0.673) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.35) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F16[i]<= 1.271) {
										if (F10[i]<= 0.427) {
											if (F14[i]<= 1.066) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 1.237) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 1.075) {
											if (F2[i]<= -1.06) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.053) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F10[i]<= -0.22) {
								if (F16[i]<= 0.914) {
									if (F13[i]<= 1.397) {
										if (F12[i]<= 1.024) {
											if (F9[i]<= 0.568) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 0.796) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 0.716) {
											if (F2[i]<= 0.697) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 0.567) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F1[i]<= 0.832) {
										if (F16[i]<= 1.649) {
											if (F13[i]<= 1.446) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.062) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F5[i]<= 1.309) {
											if (F0[i]<= 0.678) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.185) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F14[i]<= 0.095) {
									if (F10[i]<= 0.231) {
										if (F7[i]<= 1.191) {
											if (F5[i]<= 1.477) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F6[i]<= 1.495) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F8[i]<= -1.723) {
											if (F13[i]<= 1.316) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 1.019) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F9[i]<= 2.01) {
										if (F10[i]<= 0.033) {
											if (F7[i]<= 1.225) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.436) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 0.314) {
											if (F5[i]<= -1.899) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= 1.732) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F13[i]<= 2.007) {
							if (F12[i]<= 1.415) {
								if (F7[i]<= 1.564) {
									if (F5[i]<= -1.197) {
										if (F17[i]<= 1.376) {
											if (F5[i]<= -1.357) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.87) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 0.718) {
											if (F17[i]<= 1.032) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.346) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= -0.453) {
										if (F1[i]<= 1.049) {
											if (F11[i]<= 0.602) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= 0.608) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.926) {
											if (F11[i]<= 0.737) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.71) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F4[i]<= 0.51) {
									if (F14[i]<= 1.87) {
										if (F1[i]<= 1.153) {
											if (F7[i]<= 1.859) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F17[i]<= 1.242) {
											if (F16[i]<= 1.57) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.31) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F2[i]<= 1.788) {
										if (F5[i]<= -1.258) {
											if (F1[i]<= 1.004) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.917) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.457) {
											if (F1[i]<= 0.841) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -1.558) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F15[i]<= 0.814) {
								if (F7[i]<= 1.733) {
									if (F7[i]<= 1.508) {
										if (F13[i]<= 2.014) {
											if (F0[i]<= 0.676) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.085) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= 1.062) {
											if (F1[i]<= 0.809) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -1.172) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 2.116) {
										if (F3[i]<= 1.488) {
											if (F17[i]<= 1.245) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.787) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= -1.467) {
											if (F14[i]<= 2.854) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 2.117) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F5[i]<= 1.136) {
									if (F9[i]<= 3.052) {
										if (F12[i]<= 1.667) {
											if (F7[i]<= 2.034) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 0.431) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= -1.449) {
											if (F7[i]<= 2.32) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 2.011) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 1.577) {
										if (F14[i]<= 3.132) {
											if (F5[i]<= 1.136) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 3.465) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 2.071) {
											if (F14[i]<= 2.256) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 2.032) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					}
				}
			} else {
				if (F11[i]<= 1.059) {
					if (F12[i]<= 1.192) {
						if (F1[i]<= 0.951) {
							if (F13[i]<= 0.893) {
								if (F17[i]<= 1.258) {
									if (F10[i]<= 0.64) {
										if (F14[i]<= 1.31) {
											if (F0[i]<= 0.164) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 1.212) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F16[i]<= 0.424) {
											if (F10[i]<= 0.834) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 0.984) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= 0.702) {
										if (F7[i]<= 0.981) {
											if (F0[i]<= 0.141) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 0.942) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F14[i]<= 0.546) {
											if (F12[i]<= 0.716) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 0.828) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 1.199) {
									if (F1[i]<= 0.778) {
										if (F9[i]<= 0.759) {
											if (F7[i]<= 1.015) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.073) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F0[i]<= 0.311) {
											if (F14[i]<= 2.124) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.053) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F9[i]<= 1.6) {
										if (F10[i]<= -0.002) {
											if (F7[i]<= 1.285) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.362) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -0.395) {
											if (F14[i]<= 1.532) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 0.019) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F0[i]<= 0.321) {
								if (F7[i]<= 0.976) {
									if (F4[i]<= 1.046) {
										if (F15[i]<= 0.672) {
											if (F10[i]<= 0.51) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.349) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 1.07) {
											if (F2[i]<= -1.135) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -1.294) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= 0.002) {
										if (F2[i]<= -1.057) {
											if (F13[i]<= 1.28) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 0.814) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.218) {
											if (F16[i]<= 1.445) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.137) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= 0.064) {
									if (F2[i]<= 1.284) {
										if (F2[i]<= -1.479) {
											if (F16[i]<= 1.36) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -0.991) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.638) {
											if (F16[i]<= 1.373) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.633) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 0.869) {
										if (F0[i]<= 0.425) {
											if (F10[i]<= 0.349) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.572) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 1.347) {
											if (F10[i]<= 0.348) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.959) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F0[i]<= 0.473) {
							if (F7[i]<= 1.494) {
								if (F9[i]<= 1.364) {
									if (F2[i]<= 1.188) {
										if (F0[i]<= 0.368) {
											if (F5[i]<= -1.28) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 0.743) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= 1.314) {
											if (F2[i]<= 1.768) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 1.202) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F16[i]<= 2.148) {
										if (F1[i]<= 1.012) {
											if (F15[i]<= 0.798) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.46) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -0.969) {
											if (F12[i]<= 1.461) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 2.183) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= -0.768) {
									if (F12[i]<= 1.541) {
										if (F1[i]<= 0.725) {
											if (F7[i]<= 1.751) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 2.075) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.922) {
											if (F16[i]<= 2.425) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.317) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= -0.374) {
										if (F3[i]<= -1.727) {
											if (F8[i]<= 0.834) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F6[i]<= -1.729) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 0.51) {
											if (F13[i]<= 1.245) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.696) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F12[i]<= 1.607) {
								if (F7[i]<= 1.585) {
									if (F5[i]<= 1.283) {
										if (F16[i]<= 1.896) {
											if (F2[i]<= -1.398) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 2.119) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.343) {
											if (F14[i]<= 2.227) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.438) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 2.002) {
										if (F12[i]<= 1.537) {
											if (F17[i]<= 1.354) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= -1.671) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 0.832) {
											if (F5[i]<= 0.871) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 1.833) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 1.976) {
									if (F10[i]<= -0.934) {
										if (F16[i]<= 2.048) {
											if (F2[i]<= 1.483) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 2.335) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= -1.574) {
											if (F4[i]<= 0.534) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.397) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F14[i]<= 3.016) {
										if (F7[i]<= 2.359) {
											if (F2[i]<= 1.405) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.59) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.59) {
											if (F5[i]<= 1.903) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 0.529) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F0[i]<= 0.16) {
						if (F1[i]<= 1.085) {
							if (F12[i]<= 1.223) {
								if (F12[i]<= 0.948) {
									if (F11[i]<= 1.513) {
										if (F17[i]<= 1.193) {
											if (F13[i]<= 0.55) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.048) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 2.065) {
											if (F1[i]<= 0.858) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 0.526) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F13[i]<= 0.558) {
										if (F11[i]<= 2.472) {
											if (F7[i]<= 1.245) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.88) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F0[i]<= 0.097) {
											if (F9[i]<= 2.123) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.105) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F17[i]<= 1.049) {
									if (F13[i]<= 1.018) {
										if (F15[i]<= 1.992) {
											if (F4[i]<= 0.803) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 2.1) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 1.466) {
											if (F11[i]<= 1.142) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 0.401) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F12[i]<= 1.42) {
										if (F7[i]<= 1.597) {
											if (F13[i]<= 0.809) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.799) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 1.552) {
											if (F11[i]<= 1.399) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.661) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F7[i]<= 1.02) {
								if (F2[i]<= -1.33) {
									if (F7[i]<= 0.606) {
										if (F16[i]<= 0.97) {
											if (F10[i]<= 0.526) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 3.813) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= 0.196) {
											if (F14[i]<= 2.045) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 1.019) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 0.417) {
										if (F17[i]<= 0.558) {
											if (F10[i]<= 0.522) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.538) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F1[i]<= 1.406) {
											if (F7[i]<= 0.648) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 1.35) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 1.398) {
									if (F14[i]<= 2.566) {
										if (F15[i]<= 2.327) {
											if (F10[i]<= -0.376) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 4.586) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F13[i]<= 0.518) {
											if (F17[i]<= 0.764) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 1.176) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F15[i]<= 3.752) {
										if (F7[i]<= 1.729) {
											if (F11[i]<= 2.254) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.966) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 6.278) {
											if (F12[i]<= 2.725) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 10.452) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F10[i]<= -1.11) {
							if (F9[i]<= 2.762) {
								if (F13[i]<= 1.038) {
									if (F0[i]<= 0.329) {
										if (F7[i]<= 1.765) {
											if (F5[i]<= -0.988) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 2.321) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.709) {
											if (F1[i]<= 2.673) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.554) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F5[i]<= -1.333) {
										if (F16[i]<= 2.351) {
											if (F2[i]<= -1.635) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -2.036) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 1.918) {
											if (F16[i]<= 2.488) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 2.143) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 2.399) {
									if (F2[i]<= -1.757) {
										if (F15[i]<= 3.057) {
											if (F13[i]<= 1.499) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F14[i]<= 2.749) {
											if (F2[i]<= 1.091) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 3.121) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F9[i]<= 3.811) {
										if (F2[i]<= 1.551) {
											if (F13[i]<= 0.948) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 2.753) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 0.955) {
											if (F5[i]<= -0.978) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= -1.597) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F7[i]<= 1.423) {
								if (F0[i]<= 0.287) {
									if (F2[i]<= 1.452) {
										if (F1[i]<= 1.365) {
											if (F10[i]<= 0.25) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.348) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.062) {
											if (F10[i]<= 0.224) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.331) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 1.212) {
										if (F0[i]<= 0.417) {
											if (F1[i]<= 1.565) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.348) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.77) {
											if (F1[i]<= 1.516) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.934) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F14[i]<= 0.162) {
									if (F10[i]<= -0.863) {
										if (F7[i]<= 1.606) {
											if (F16[i]<= 1.43) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.808) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 1.108) {
											if (F7[i]<= 1.762) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= 1.727) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.649) {
										if (F2[i]<= -1.469) {
											if (F11[i]<= 1.345) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.813) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 1.131) {
											if (F14[i]<= 2.376) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.338) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		} else {
			if (F0[i]<= 0.292) {
				if (F10[i]<= 1.273) {
					if (F16[i]<= 0.801) {
						if (F12[i]<= 0.901) {
							if (F1[i]<= 0.847) {
								if (F14[i]<= 0.399) {
									if (F10[i]<= 1.172) {
										if (F17[i]<= 1.306) {
											if (F11[i]<= 0.558) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.485) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F12[i]<= 0.443) {
											if (F13[i]<= 0.668) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.664) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= 1.149) {
										if (F17[i]<= 1.074) {
											if (F9[i]<= 0.499) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 0.915) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.845) {
											if (F13[i]<= 1.013) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								}
							} else {
								if (F12[i]<= 0.615) {
									if (F11[i]<= 0.945) {
										if (F12[i]<= 0.474) {
											if (F2[i]<= 2.004) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 0.85) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 0.615) {
											if (F15[i]<= 0.748) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 1.905) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= 1.075) {
										if (F2[i]<= -1.412) {
											if (F17[i]<= 1.191) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 1.106) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 0.678) {
											if (F2[i]<= 1.334) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 0.728) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F17[i]<= 1.418) {
								if (F13[i]<= 0.315) {
									if (F10[i]<= 1.179) {
										if (F8[i]<= 1.279) {
											if (F9[i]<= 0.572) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 0.306) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F15[i]<= 3.059) {
											Class[0]++;
										} else {
											if (F4[i]<= 1.469) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F2[i]<= 1.34) {
										if (F7[i]<= 1.041) {
											if (F17[i]<= 1.107) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -1.236) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 0.463) {
											if (F11[i]<= 2.885) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 3.36) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F13[i]<= 0.445) {
									if (F17[i]<= 1.557) {
										if (F6[i]<= -1.683) {
											Class[0]++;
										} else {
											if (F8[i]<= 1.581) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.563) {
											if (F16[i]<= 0.468) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 0.766) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F1[i]<= 1.167) {
										if (F2[i]<= 0.844) {
											if (F17[i]<= 1.555) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 1.159) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.52) {
											if (F13[i]<= 0.827) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.414) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F16[i]<= 0.994) {
							if (F11[i]<= 0.681) {
								if (F12[i]<= 0.633) {
									if (F7[i]<= 1.035) {
										Class[1]++;
									} else {
										if (F12[i]<= 0.611) {
											if (F5[i]<= -0.988) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.757) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F0[i]<= 0.199) {
										if (F5[i]<= -1.482) {
											if (F6[i]<= -0.814) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 0.728) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F0[i]<= 0.219) {
											Class[0]++;
										} else {
											if (F9[i]<= 1.318) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 1.213) {
									if (F17[i]<= 1.394) {
										if (F17[i]<= 0.985) {
											if (F11[i]<= 4.206) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -0.729) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.564) {
											if (F12[i]<= 0.77) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= 1.264) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F3[i]<= 1.455) {
										if (F0[i]<= 0.092) {
											if (F8[i]<= 0.296) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.399) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= -0.64) {
											if (F7[i]<= 1.412) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 1.719) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F17[i]<= 1.455) {
								if (F4[i]<= 6.576) {
									if (F0[i]<= 0.098) {
										if (F4[i]<= 3.398) {
											if (F11[i]<= 2.785) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= 1.244) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F14[i]<= 1.368) {
											if (F11[i]<= 0.837) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 1.409) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 0.433) {
										if (F9[i]<= 2.335) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									} else {
										Class[0]++;
									}
								}
							} else {
								if (F13[i]<= 0.409) {
									Class[1]++;
								} else {
									if (F16[i]<= 1.215) {
										if (F12[i]<= 0.942) {
											if (F11[i]<= 0.692) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.599) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F15[i]<= 0.552) {
											Class[1]++;
										} else {
											if (F4[i]<= 2.775) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F10[i]<= 1.522) {
						if (F14[i]<= 0.416) {
							if (F17[i]<= 1.456) {
								if (F1[i]<= 0.779) {
									if (F16[i]<= 0.905) {
										if (F4[i]<= 0.828) {
											if (F12[i]<= 0.486) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.728) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= -2.033) {
											Class[1]++;
										} else {
											if (F7[i]<= 1.447) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= -1.69) {
										if (F4[i]<= 2.128) {
											if (F11[i]<= 3.63) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.029) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 12.375) {
											if (F17[i]<= 1.23) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								}
							} else {
								if (F15[i]<= 0.675) {
									if (F2[i]<= -1.18) {
										if (F17[i]<= 1.517) {
											if (F7[i]<= 1.092) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 0.251) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 0.647) {
											if (F16[i]<= 0.408) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.488) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F1[i]<= 0.725) {
										if (F17[i]<= 1.553) {
											if (F7[i]<= 1.276) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.029) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= 1.267) {
											if (F2[i]<= -1.487) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 1.375) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F15[i]<= 2.738) {
								if (F16[i]<= 1.041) {
									if (F0[i]<= 0.001) {
										if (F13[i]<= 0.409) {
											Class[0]++;
										} else {
											if (F16[i]<= 0.663) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F8[i]<= 1.732) {
											if (F12[i]<= 0.776) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.198) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F16[i]<= 1.22) {
										if (F12[i]<= 2.138) {
											if (F0[i]<= 0.291) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.975) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.465) {
											if (F12[i]<= 2.113) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 1.501) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F17[i]<= 1.018) {
									if (F17[i]<= 0.325) {
										if (F3[i]<= -0.967) {
											if (F13[i]<= 0.432) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F15[i]<= 4.053) {
											Class[0]++;
										} else {
											if (F0[i]<= 0.059) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F11[i]<= 2.811) {
										if (F17[i]<= 1.394) {
											if (F6[i]<= 0.808) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F16[i]<= 1.294) {
											if (F8[i]<= -0.256) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							}
						}
					} else {
						if (F7[i]<= 1.586) {
							if (F11[i]<= 0.616) {
								if (F12[i]<= 0.556) {
									if (F9[i]<= 1.615) {
										if (F2[i]<= 1.997) {
											if (F1[i]<= 0.373) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F13[i]<= 0.984) {
											if (F6[i]<= -1.051) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 0.555) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 1.578) {
										if (F7[i]<= 1.384) {
											if (F8[i]<= 1.113) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.101) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F3[i]<= -1.512) {
											Class[1]++;
										} else {
											if (F11[i]<= 0.387) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F17[i]<= 1.433) {
									if (F2[i]<= -1.444) {
										if (F2[i]<= -1.445) {
											if (F13[i]<= 1.022) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F11[i]<= 5.731) {
											if (F6[i]<= 1.734) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -1.093) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= -1.716) {
										if (F7[i]<= 1.359) {
											if (F1[i]<= 0.736) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= -1.407) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 0.871) {
											if (F12[i]<= 2.286) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 1.601) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F11[i]<= 12.327) {
								if (F7[i]<= 2.158) {
									if (F11[i]<= 3.909) {
										if (F1[i]<= 0.595) {
											if (F1[i]<= 0.595) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 2.885) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 0.565) {
											if (F4[i]<= 1.702) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 0.084) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F15[i]<= 4.727) {
										if (F2[i]<= 1.607) {
											if (F4[i]<= 4.487) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 1.713) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 2.66) {
											if (F5[i]<= -0.89) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							} else {
								Class[1]++;
							}
						}
					}
				}
			} else {
				if (F10[i]<= 1.411) {
					if (F11[i]<= 0.549) {
						if (F12[i]<= 0.766) {
							if (F0[i]<= 0.461) {
								if (F7[i]<= 1.02) {
									if (F9[i]<= 0.451) {
										if (F7[i]<= 0.745) {
											if (F17[i]<= 1.59) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.02) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F17[i]<= 1.366) {
											if (F1[i]<= 0.592) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F3[i]<= -1.727) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F13[i]<= 0.983) {
										if (F3[i]<= 1.604) {
											if (F17[i]<= 1.153) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.038) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 1.15) {
											if (F1[i]<= 0.452) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.352) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 1.294) {
									if (F16[i]<= 0.402) {
										if (F15[i]<= 0.321) {
											if (F9[i]<= 0.462) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 0.395) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.303) {
											if (F12[i]<= 0.607) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.492) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= -1.537) {
										if (F5[i]<= -0.852) {
											if (F13[i]<= 1.173) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 0.574) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F6[i]<= 1.718) {
											if (F5[i]<= 1.749) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.604) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F13[i]<= 1.46) {
								if (F14[i]<= 0.455) {
									if (F5[i]<= 1.028) {
										if (F8[i]<= -0.207) {
											if (F7[i]<= 1.316) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -1.59) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 0.922) {
											if (F13[i]<= 1.301) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F10[i]<= 0.997) {
										Class[1]++;
									} else {
										if (F5[i]<= -0.956) {
											if (F9[i]<= 0.783) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.372) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F13[i]<= 1.637) {
									if (F0[i]<= 0.502) {
										if (F7[i]<= 1.456) {
											if (F2[i]<= -0.881) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.439) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.285) {
											Class[1]++;
										} else {
											if (F14[i]<= 0.013) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F0[i]<= 0.295) {
										Class[1]++;
									} else {
										if (F7[i]<= 1.853) {
											if (F11[i]<= 0.365) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							}
						}
					} else {
						if (F17[i]<= 1.482) {
							if (F4[i]<= 1.018) {
								if (F1[i]<= 0.757) {
									if (F16[i]<= 0.531) {
										if (F13[i]<= 1.246) {
											if (F13[i]<= 1.069) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= 1.53) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 0.962) {
											if (F12[i]<= 0.962) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 1.074) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F12[i]<= 1.268) {
										if (F9[i]<= 0.001) {
											Class[1]++;
										} else {
											if (F2[i]<= -2.028) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 0.723) {
											if (F6[i]<= 1.416) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							} else {
								if (F1[i]<= 1.021) {
									if (F1[i]<= 1.02) {
										if (F16[i]<= 0.149) {
											if (F16[i]<= 0.144) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.342) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F6[i]<= -0.332) {
										if (F6[i]<= -0.335) {
											if (F2[i]<= -1.417) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										Class[0]++;
									}
								}
							}
						} else {
							if (F15[i]<= 0.725) {
								if (F12[i]<= 0.885) {
									if (F16[i]<= 0.564) {
										if (F2[i]<= -1.019) {
											if (F7[i]<= 0.846) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 1.258) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 1.386) {
											if (F4[i]<= 0.757) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F17[i]<= 1.566) {
										if (F1[i]<= 0.728) {
											if (F12[i]<= 1.116) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										Class[1]++;
									}
								}
							} else {
								if (F12[i]<= 0.978) {
									if (F1[i]<= 0.708) {
										if (F4[i]<= 0.861) {
											Class[0]++;
										} else {
											if (F1[i]<= 0.643) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 1.091) {
											if (F7[i]<= 1.091) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F12[i]<= 1.196) {
										if (F11[i]<= 0.86) {
											if (F8[i]<= 0.387) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.176) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F4[i]<= 1.251) {
											Class[0]++;
										} else {
											if (F7[i]<= 2.723) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F12[i]<= 0.917) {
						if (F10[i]<= 1.678) {
							if (F4[i]<= 0.481) {
								if (F17[i]<= 1.51) {
									if (F6[i]<= -1.694) {
										if (F16[i]<= 0.346) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										if (F17[i]<= 1.352) {
											if (F2[i]<= -1.28) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.455) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F1[i]<= 0.414) {
										if (F5[i]<= -0.225) {
											if (F17[i]<= 1.574) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 0.712) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 1.395) {
											if (F16[i]<= 0.394) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								}
							} else {
								if (F13[i]<= 1.109) {
									if (F17[i]<= 1.508) {
										if (F4[i]<= 0.515) {
											if (F10[i]<= 1.412) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.965) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 1.066) {
											if (F5[i]<= 0.85) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 0.773) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F16[i]<= 0.764) {
										if (F14[i]<= 0.27) {
											if (F10[i]<= 1.452) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.792) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 0.917) {
											if (F9[i]<= 1.157) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								}
							}
						} else {
							if (F17[i]<= 1.513) {
								if (F10[i]<= 1.692) {
									if (F2[i]<= 1.189) {
										if (F9[i]<= 0.004) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									} else {
										if (F17[i]<= 1.274) {
											Class[0]++;
										} else {
											if (F2[i]<= 1.352) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F12[i]<= 0.917) {
										if (F3[i]<= -1.167) {
											if (F13[i]<= 1.609) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 0.342) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[1]++;
									}
								}
							} else {
								if (F11[i]<= 0.515) {
									if (F16[i]<= 0.12) {
										if (F6[i]<= -0.716) {
											Class[0]++;
										} else {
											if (F0[i]<= 0.458) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 0.514) {
											if (F17[i]<= 1.514) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F5[i]<= 1.548) {
										if (F7[i]<= 1.472) {
											if (F5[i]<= 0.551) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 1.902) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 1.856) {
											if (F2[i]<= 1.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							}
						}
					} else {
						if (F10[i]<= 1.939) {
							if (F15[i]<= 0.866) {
								if (F15[i]<= 0.866) {
									if (F14[i]<= 0.263) {
										if (F10[i]<= 1.938) {
											if (F8[i]<= -1.663) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F2[i]<= -1.852) {
											if (F5[i]<= -0.53) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 1.438) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									Class[1]++;
								}
							} else {
								if (F17[i]<= 1.549) {
									if (F3[i]<= -1.719) {
										if (F8[i]<= -0.918) {
											if (F2[i]<= -0.511) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F8[i]<= -1.689) {
											if (F8[i]<= -1.69) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 3.353) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F9[i]<= 0.552) {
										if (F10[i]<= 1.458) {
											if (F4[i]<= 1.266) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 0.539) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										Class[0]++;
									}
								}
							}
						} else {
							if (F2[i]<= -2.09) {
								if (F11[i]<= 0.754) {
									Class[0]++;
								} else {
									Class[1]++;
								}
							} else {
								if (F7[i]<= 2.06) {
									if (F3[i]<= -0.699) {
										if (F7[i]<= 2.06) {
											if (F15[i]<= 0.606) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F14[i]<= 0.247) {
											Class[0]++;
										} else {
											if (F17[i]<= 1.55) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.31) {
										Class[0]++;
									} else {
										if (F2[i]<= -1.722) {
											if (F6[i]<= -0.608) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 2.898) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}

		if (F12[i]<= 1.133) {
			if (F1[i]<= 0.851) {
				if (F12[i]<= 0.86) {
					if (F7[i]<= 1.109) {
						if (F11[i]<= 0.521) {
							if (F10[i]<= 0.756) {
								if (F0[i]<= 0.353) {
									if (F11[i]<= 0.449) {
										if (F10[i]<= 0.502) {
											if (F1[i]<= 0.485) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.049) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F4[i]<= 0.592) {
											if (F10[i]<= 0.372) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 0.386) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F11[i]<= 0.438) {
										if (F5[i]<= -1.287) {
											if (F16[i]<= 1.063) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 0.998) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= 0.232) {
											if (F2[i]<= 1.205) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 1.014) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F11[i]<= 0.442) {
									if (F17[i]<= 1.367) {
										if (F16[i]<= 0.34) {
											if (F0[i]<= 0.558) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.143) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= 1.148) {
											if (F10[i]<= 0.946) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.449) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.32) {
										if (F2[i]<= -1.46) {
											if (F10[i]<= 1.102) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.38) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= 1.117) {
											if (F7[i]<= 0.708) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -1.432) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F15[i]<= 0.483) {
								if (F1[i]<= 0.722) {
									if (F10[i]<= 0.687) {
										if (F2[i]<= -0.966) {
											if (F11[i]<= 0.6) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 0.604) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 0.559) {
											if (F0[i]<= 0.154) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 0.373) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= 0.763) {
										if (F17[i]<= 0.465) {
											if (F10[i]<= 0.287) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 0.591) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 1.007) {
											if (F4[i]<= 0.433) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.849) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 0.824) {
									if (F7[i]<= 0.621) {
										if (F0[i]<= 0.216) {
											if (F2[i]<= 1.271) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 1.212) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F12[i]<= 0.572) {
											if (F13[i]<= 0.667) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 0.707) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F12[i]<= 0.679) {
										if (F12[i]<= 0.513) {
											if (F7[i]<= 0.844) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.624) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 0.31) {
											if (F10[i]<= 0.241) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 0.906) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F10[i]<= 0.433) {
							if (F7[i]<= 1.415) {
								if (F10[i]<= -0.092) {
									if (F13[i]<= 2.032) {
										if (F7[i]<= 1.242) {
											if (F2[i]<= -1.572) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.327) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 0.723) {
											if (F9[i]<= 1.596) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 0.429) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F16[i]<= 1.223) {
										if (F15[i]<= 0.523) {
											if (F7[i]<= 1.203) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.22) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F6[i]<= 0.734) {
											if (F5[i]<= -2.007) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 1.64) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F15[i]<= 0.518) {
									if (F12[i]<= 0.849) {
										if (F9[i]<= 1.364) {
											if (F6[i]<= -1.503) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.038) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F8[i]<= -0.821) {
											if (F7[i]<= 1.52) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 1.533) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F12[i]<= 0.843) {
										if (F7[i]<= 1.791) {
											if (F3[i]<= 1.661) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F8[i]<= -0.609) {
											if (F0[i]<= 0.459) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 0.844) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F13[i]<= 1.009) {
								if (F4[i]<= 0.868) {
									if (F9[i]<= 1.867) {
										if (F11[i]<= 0.737) {
											if (F0[i]<= 0.322) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.583) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 0.628) {
											if (F15[i]<= 2.066) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F10[i]<= 0.641) {
										if (F9[i]<= 1.052) {
											if (F1[i]<= 0.539) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F10[i]<= 1.469) {
											if (F7[i]<= 1.241) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.475) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F0[i]<= 0.548) {
									if (F10[i]<= 1.685) {
										if (F17[i]<= 1.351) {
											if (F12[i]<= 0.481) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 1.515) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 0.86) {
											if (F7[i]<= 1.6) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -0.01) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F11[i]<= 0.384) {
										if (F12[i]<= 0.716) {
											if (F10[i]<= 0.904) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 0.522) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.333) {
											if (F13[i]<= 1.342) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.572) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F7[i]<= 1.39) {
						if (F16[i]<= 0.979) {
							if (F7[i]<= 1.065) {
								if (F5[i]<= -1.242) {
									if (F10[i]<= -0.02) {
										if (F0[i]<= 0.703) {
											if (F11[i]<= 0.579) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F8[i]<= -1.09) {
											if (F12[i]<= 0.951) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.485) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F10[i]<= 0.013) {
										if (F2[i]<= 1.121) {
											if (F9[i]<= 0.786) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 0.971) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F15[i]<= 1.371) {
											if (F7[i]<= 0.87) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 0.042) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F1[i]<= 0.693) {
									if (F5[i]<= 1.384) {
										if (F5[i]<= -1.413) {
											if (F13[i]<= 1.24) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 0.543) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 1.41) {
											if (F1[i]<= 0.672) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 0.457) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F10[i]<= -0.144) {
										if (F2[i]<= 1.403) {
											if (F9[i]<= 0.533) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.282) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= -1.316) {
											if (F5[i]<= -1.756) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.222) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F9[i]<= 0.889) {
								if (F16[i]<= 1.171) {
									if (F13[i]<= 0.697) {
										if (F13[i]<= 0.497) {
											if (F7[i]<= 0.969) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -2.055) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= 0.113) {
											if (F9[i]<= 0.808) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 1.057) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.088) {
										if (F13[i]<= 0.715) {
											if (F10[i]<= -0.202) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -1.32) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= -0.899) {
											if (F12[i]<= 0.986) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 1.596) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F1[i]<= 0.63) {
									if (F16[i]<= 1.1) {
										if (F15[i]<= 0.605) {
											if (F9[i]<= 1.649) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -0.137) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 0.49) {
											if (F9[i]<= 1.898) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 1.393) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F10[i]<= -0.106) {
										if (F16[i]<= 1.59) {
											if (F2[i]<= 1.311) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 0.813) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= 0.187) {
											if (F14[i]<= 1.879) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.17) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F13[i]<= 1.896) {
							if (F14[i]<= 0.815) {
								if (F7[i]<= 1.557) {
									if (F11[i]<= 0.531) {
										if (F3[i]<= 1.594) {
											if (F12[i]<= 1.039) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 0.563) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F16[i]<= 1.412) {
											if (F10[i]<= -0.296) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -1.116) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= -1.908) {
										if (F8[i]<= 1.477) {
											if (F5[i]<= -0.926) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.668) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 0.646) {
											if (F10[i]<= 0.645) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 1.133) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F17[i]<= 1.312) {
									if (F1[i]<= 0.599) {
										if (F1[i]<= 0.444) {
											if (F7[i]<= 1.509) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.028) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.572) {
											if (F1[i]<= 0.676) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.817) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F0[i]<= 0.268) {
										if (F9[i]<= 2.47) {
											if (F10[i]<= -0.463) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.852) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 0.235) {
											if (F9[i]<= 0.981) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.698) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F0[i]<= 0.438) {
								if (F7[i]<= 1.683) {
									if (F16[i]<= 1.478) {
										if (F17[i]<= 1.264) {
											if (F9[i]<= 1.794) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.06) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 2.219) {
											if (F10[i]<= -0.695) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= -1.656) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.917) {
										if (F16[i]<= 1.58) {
											if (F13[i]<= 2.584) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 2.549) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 0.298) {
											if (F4[i]<= 0.452) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 2.039) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F14[i]<= 1.615) {
									if (F14[i]<= 0.767) {
										if (F7[i]<= 1.866) {
											if (F5[i]<= -1.101) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.365) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 2.479) {
											if (F10[i]<= -0.471) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.602) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 1.332) {
										if (F2[i]<= -1.392) {
											if (F7[i]<= 1.645) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 2.162) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 2.247) {
											if (F17[i]<= 1.354) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -0.333) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				}
			} else {
				if (F10[i]<= 0.884) {
					if (F1[i]<= 1.184) {
						if (F7[i]<= 0.948) {
							if (F15[i]<= 0.89) {
								if (F5[i]<= -1.228) {
									if (F1[i]<= 0.99) {
										if (F5[i]<= -1.46) {
											if (F7[i]<= 0.597) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 0.583) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= 0.565) {
											if (F11[i]<= 0.941) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 0.628) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F15[i]<= 0.619) {
										if (F2[i]<= 1.015) {
											if (F1[i]<= 0.954) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 0.779) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= 1.222) {
											if (F11[i]<= 0.946) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.919) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F11[i]<= 1.527) {
									if (F0[i]<= 0.154) {
										if (F7[i]<= 0.561) {
											if (F2[i]<= -1.388) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.385) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F17[i]<= 1.4) {
											if (F5[i]<= 1.101) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -0.407) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F11[i]<= 2.132) {
										if (F15[i]<= 1.516) {
											if (F10[i]<= 0.417) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 0.837) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F15[i]<= 2.705) {
											if (F10[i]<= 0.587) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 0.359) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F7[i]<= 1.129) {
								if (F1[i]<= 1.001) {
									if (F17[i]<= 1.044) {
										if (F9[i]<= 1.231) {
											if (F15[i]<= 1.764) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -1.334) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 0.978) {
											if (F2[i]<= -1.068) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.475) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F9[i]<= 1.359) {
										if (F14[i]<= 1.232) {
											if (F5[i]<= 0.703) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.191) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 1.094) {
											if (F2[i]<= 0.62) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 0.785) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F17[i]<= 1.204) {
									if (F0[i]<= 0.195) {
										if (F10[i]<= 0.307) {
											if (F5[i]<= -0.7) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.233) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.696) {
											if (F4[i]<= 0.6) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 0.542) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 1.282) {
										if (F7[i]<= 1.321) {
											if (F16[i]<= 1.15) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 1.662) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F12[i]<= 1.132) {
											if (F8[i]<= -1.176) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							}
						}
					} else {
						if (F7[i]<= 0.796) {
							if (F2[i]<= -1.356) {
								if (F4[i]<= 1.065) {
									if (F0[i]<= 0.394) {
										if (F10[i]<= 0.265) {
											if (F1[i]<= 1.527) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.358) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 0.576) {
											if (F12[i]<= 0.948) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.265) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F15[i]<= 2.832) {
										if (F5[i]<= -1.514) {
											if (F4[i]<= 1.758) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 0.975) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F16[i]<= 1.642) {
											if (F1[i]<= 2.032) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F3[i]<= 0.292) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F15[i]<= 1.185) {
									if (F0[i]<= 0.305) {
										if (F1[i]<= 1.374) {
											if (F2[i]<= 1.329) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 1.188) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 0.743) {
											if (F10[i]<= 0.259) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.13) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F17[i]<= 0.708) {
										if (F7[i]<= 0.431) {
											if (F0[i]<= 0.116) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 0.178) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= 1.238) {
											if (F0[i]<= 0.053) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.046) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F12[i]<= 1.032) {
								if (F15[i]<= 1.438) {
									if (F1[i]<= 1.24) {
										if (F15[i]<= 1.017) {
											if (F5[i]<= 1.746) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.031) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 0.736) {
											if (F14[i]<= 2.163) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 0.892) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= 0.761) {
										if (F17[i]<= 0.969) {
											if (F11[i]<= 1.508) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 1.071) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 0.871) {
											if (F11[i]<= 2.745) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 1.582) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= 0.195) {
									if (F0[i]<= 0.287) {
										if (F15[i]<= 1.512) {
											if (F2[i]<= -1.508) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 0.846) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F1[i]<= 1.249) {
											if (F15[i]<= 0.764) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.229) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F4[i]<= 1.197) {
										if (F0[i]<= 0.145) {
											if (F5[i]<= -1.351) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 2.041) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F17[i]<= 1.06) {
											if (F10[i]<= 0.497) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.473) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F17[i]<= 1.283) {
						if (F0[i]<= 0.106) {
							if (F10[i]<= 1.105) {
								if (F2[i]<= 1.436) {
									if (F0[i]<= 0.042) {
										if (F14[i]<= 0.473) {
											if (F7[i]<= 0.659) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 0.693) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.079) {
											if (F12[i]<= 0.504) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 2.267) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F5[i]<= 0.951) {
										if (F10[i]<= 0.96) {
											if (F15[i]<= 2.671) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 0.294) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 0.562) {
											if (F0[i]<= 0.049) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 0.067) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F16[i]<= 0.577) {
									if (F7[i]<= 1.073) {
										if (F16[i]<= 0.011) {
											if (F15[i]<= 0.635) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 0.941) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 4.904) {
											if (F15[i]<= 0.967) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F3[i]<= 1.733) {
										if (F13[i]<= 0.772) {
											if (F1[i]<= 1.21) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.772) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[1]++;
									}
								}
							}
						} else {
							if (F0[i]<= 0.25) {
								if (F10[i]<= 1.143) {
									if (F1[i]<= 0.99) {
										if (F7[i]<= 1.05) {
											if (F13[i]<= 0.805) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 1.027) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 0.644) {
											if (F16[i]<= 0.64) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 2.029) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F1[i]<= 1.322) {
										if (F16[i]<= 0.451) {
											if (F2[i]<= -1.802) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -2.028) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 2.03) {
											if (F5[i]<= 0.395) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 0.587) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F2[i]<= -1.601) {
									if (F2[i]<= -1.602) {
										if (F16[i]<= 0.111) {
											if (F17[i]<= 0.643) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.737) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F10[i]<= 1.083) {
										if (F17[i]<= 0.91) {
											if (F5[i]<= 0.802) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.654) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 0.771) {
											if (F11[i]<= 0.771) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F8[i]<= 1.719) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F16[i]<= 0.711) {
							if (F7[i]<= 0.984) {
								if (F13[i]<= 0.553) {
									if (F1[i]<= 1.159) {
										if (F16[i]<= 0.462) {
											if (F5[i]<= -1.461) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.444) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= 1.184) {
											if (F11[i]<= 1.891) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 2.102) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 0.782) {
										if (F2[i]<= 1.323) {
											if (F5[i]<= -1.192) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 0.608) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= 1.169) {
											if (F5[i]<= -1.349) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.094) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F4[i]<= 0.878) {
									if (F7[i]<= 1.241) {
										if (F17[i]<= 1.286) {
											if (F4[i]<= 0.589) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 0.54) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 1.614) {
											if (F0[i]<= 0.185) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 0.101) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.216) {
										if (F13[i]<= 1.001) {
											if (F1[i]<= 1.089) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.464) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= 2.035) {
											if (F11[i]<= 0.729) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 1.275) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F7[i]<= 1.279) {
								if (F13[i]<= 0.444) {
									if (F10[i]<= 1.145) {
										if (F17[i]<= 1.291) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										if (F0[i]<= 0.009) {
											Class[1]++;
										} else {
											if (F12[i]<= 1.075) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.035) {
										if (F0[i]<= 0.064) {
											if (F11[i]<= 1.658) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 1.246) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 0.823) {
											if (F2[i]<= -0.223) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.074) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= 1.633) {
									if (F2[i]<= -0.364) {
										if (F2[i]<= -0.397) {
											if (F15[i]<= 1.357) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= 0.298) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= 1.015) {
											if (F15[i]<= 0.902) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.549) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 2.033) {
										if (F2[i]<= -1.936) {
											if (F13[i]<= 0.606) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.38) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F6[i]<= -0.317) {
											if (F12[i]<= 1.126) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							}
						}
					}
				}
			}
		} else {
			if (F7[i]<= 1.54) {
				if (F1[i]<= 0.907) {
					if (F1[i]<= 0.664) {
						if (F17[i]<= 1.235) {
							if (F7[i]<= 1.345) {
								if (F17[i]<= 1.016) {
									if (F12[i]<= 1.197) {
										if (F7[i]<= 1.25) {
											if (F12[i]<= 1.136) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 0.864) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 1.124) {
											if (F2[i]<= -1.189) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 2.68) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F12[i]<= 1.278) {
										if (F12[i]<= 1.225) {
											if (F10[i]<= -0.621) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -0.853) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F3[i]<= -0.356) {
											if (F7[i]<= 1.223) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.722) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F4[i]<= 0.77) {
									if (F2[i]<= 1.309) {
										if (F9[i]<= 2.018) {
											if (F1[i]<= 0.445) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.741) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.137) {
											if (F11[i]<= 1.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 0.612) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F5[i]<= 1.66) {
										if (F2[i]<= 1.329) {
											if (F5[i]<= -1.13) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 2.206) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.411) {
											if (F9[i]<= 2.108) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 0.873) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F12[i]<= 1.329) {
								if (F14[i]<= 1.96) {
									if (F9[i]<= 1.698) {
										if (F6[i]<= 1.719) {
											if (F10[i]<= -0.164) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F7[i]<= 1.456) {
											if (F8[i]<= -1.692) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.477) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.452) {
										if (F11[i]<= 0.532) {
											if (F5[i]<= -1.004) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 1.114) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F17[i]<= 1.426) {
											if (F14[i]<= 2.393) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 1.277) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F17[i]<= 1.562) {
									if (F15[i]<= 1.35) {
										if (F12[i]<= 1.433) {
											if (F9[i]<= 2.2) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 1.085) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F3[i]<= -1.465) {
											if (F0[i]<= 0.024) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.005) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F12[i]<= 1.397) {
										if (F10[i]<= -1.035) {
											if (F0[i]<= 0.17) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 0.642) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 0.406) {
											if (F5[i]<= -0.09) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								}
							}
						}
					} else {
						if (F12[i]<= 1.366) {
							if (F14[i]<= 1.471) {
								if (F2[i]<= -1.459) {
									if (F9[i]<= 0.939) {
										if (F10[i]<= -0.716) {
											if (F10[i]<= -1.106) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 1.187) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= -1.05) {
											if (F6[i]<= 1.71) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.106) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F16[i]<= 0.962) {
										if (F9[i]<= 0.603) {
											if (F4[i]<= 0.992) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.657) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 0.947) {
											if (F14[i]<= 0.796) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 0.948) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F12[i]<= 1.262) {
									if (F14[i]<= 2.418) {
										if (F10[i]<= -0.584) {
											if (F11[i]<= 1.161) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 1.066) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.046) {
											if (F10[i]<= -0.416) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.234) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F15[i]<= 1.112) {
										if (F16[i]<= 2.085) {
											if (F17[i]<= 1.119) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.146) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 1.69) {
											if (F14[i]<= 1.916) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 1.628) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F10[i]<= -0.897) {
								if (F2[i]<= 1.471) {
									if (F13[i]<= 1.232) {
										if (F16[i]<= 2.374) {
											if (F12[i]<= 1.423) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.151) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 2.936) {
											if (F17[i]<= 1.221) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.643) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F14[i]<= 2.845) {
										if (F10[i]<= -1.197) {
											if (F8[i]<= 0.87) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -1.034) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 1.691) {
											if (F0[i]<= 0.011) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 2.437) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F17[i]<= 1.036) {
									if (F0[i]<= 0.234) {
										if (F13[i]<= 1.105) {
											if (F8[i]<= 0.497) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 1.058) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.904) {
											if (F9[i]<= 1.56) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 0.956) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F0[i]<= 0.131) {
										if (F2[i]<= 1.202) {
											if (F14[i]<= 2.838) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.948) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 2.304) {
											if (F2[i]<= 1.545) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.747) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F7[i]<= 1.124) {
						if (F0[i]<= 0.164) {
							if (F14[i]<= 2.328) {
								if (F10[i]<= 0.02) {
									if (F2[i]<= -1.327) {
										if (F2[i]<= -1.781) {
											if (F13[i]<= 0.495) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 3.643) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F12[i]<= 1.32) {
											if (F2[i]<= 1.416) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.036) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= -1.271) {
										if (F5[i]<= -1.528) {
											if (F4[i]<= 3.297) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 2.609) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F4[i]<= 4.461) {
											if (F0[i]<= 0.068) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 4.638) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F11[i]<= 2.915) {
									if (F5[i]<= 1.375) {
										if (F2[i]<= 1.418) {
											if (F5[i]<= -1.35) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 0.868) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F14[i]<= 2.632) {
											if (F10[i]<= -0.394) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= -0.085) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 1.116) {
										if (F2[i]<= -1.155) {
											if (F10[i]<= -0.676) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 4.304) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F6[i]<= -1.39) {
											Class[0]++;
										} else {
											if (F14[i]<= 2.441) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F10[i]<= -0.345) {
								if (F17[i]<= 0.803) {
									if (F12[i]<= 1.343) {
										if (F14[i]<= 2.25) {
											if (F0[i]<= 0.282) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 0.98) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= 1.243) {
											if (F5[i]<= -1.376) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.7) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F2[i]<= -1.23) {
										if (F2[i]<= -1.675) {
											if (F9[i]<= 0.9) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 0.884) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F9[i]<= 0.954) {
											if (F1[i]<= 1.32) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.322) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F0[i]<= 0.305) {
									if (F17[i]<= 0.87) {
										if (F2[i]<= 1.396) {
											if (F5[i]<= -1.207) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.64) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= -0.174) {
											if (F5[i]<= 1.332) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 1.328) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F12[i]<= 1.239) {
										if (F11[i]<= 1.301) {
											if (F2[i]<= -1.626) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 2.101) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 0.762) {
											if (F10[i]<= -0.215) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 0.8) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F10[i]<= -0.355) {
							if (F2[i]<= 1.368) {
								if (F17[i]<= 1.031) {
									if (F12[i]<= 1.465) {
										if (F15[i]<= 1.464) {
											if (F2[i]<= -1.311) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.861) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F15[i]<= 2.301) {
											if (F14[i]<= 2.451) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 2.074) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 0.713) {
										if (F13[i]<= 0.535) {
											if (F14[i]<= 1.426) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.424) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= -1.341) {
											if (F14[i]<= 2.702) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 1.709) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F12[i]<= 1.429) {
									if (F2[i]<= 1.699) {
										if (F10[i]<= -0.574) {
											if (F16[i]<= 0.832) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 1.21) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 0.925) {
											if (F5[i]<= 1.626) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 1.978) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F15[i]<= 2.091) {
										if (F2[i]<= 1.799) {
											if (F0[i]<= 0.652) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.744) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 3.557) {
											if (F5[i]<= -1.161) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.181) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F1[i]<= 1.248) {
								if (F0[i]<= 0.173) {
									if (F15[i]<= 1.586) {
										if (F10[i]<= -0.2) {
											if (F2[i]<= 1.056) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 1.748) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.544) {
											if (F15[i]<= 2.392) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.195) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= -1.492) {
										if (F1[i]<= 1.026) {
											if (F3[i]<= 0.322) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 1.346) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F0[i]<= 0.392) {
											if (F5[i]<= 1.251) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= -1.713) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F17[i]<= 0.852) {
									if (F11[i]<= 7.027) {
										if (F11[i]<= 3.989) {
											if (F17[i]<= 0.707) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.731) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 1.417) {
											if (F14[i]<= 2.595) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F10[i]<= 0.678) {
										if (F13[i]<= 0.494) {
											if (F10[i]<= -0.115) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.269) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.311) {
											if (F13[i]<= 0.458) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.149) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				}
			} else {
				if (F7[i]<= 1.84) {
					if (F15[i]<= 0.763) {
						if (F11[i]<= 0.597) {
							if (F1[i]<= 0.541) {
								if (F10[i]<= -0.949) {
									if (F2[i]<= -1.29) {
										if (F9[i]<= 2.312) {
											if (F2[i]<= -1.701) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= -1.668) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F12[i]<= 1.144) {
											if (F17[i]<= 1.563) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 0.431) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F14[i]<= 2.779) {
										if (F7[i]<= 1.719) {
											if (F7[i]<= 1.555) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -1.084) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 1.304) {
											Class[1]++;
										} else {
											if (F1[i]<= 0.468) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F17[i]<= 1.247) {
									if (F13[i]<= 1.953) {
										if (F14[i]<= 2.732) {
											if (F3[i]<= -1.256) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= 0.133) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= -0.691) {
											if (F3[i]<= -1.576) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.956) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F11[i]<= 0.513) {
										if (F14[i]<= 2.036) {
											if (F3[i]<= 0.617) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 1.33) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 2.256) {
											if (F5[i]<= 1.282) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 2.517) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F15[i]<= 0.747) {
								if (F2[i]<= -1.535) {
									if (F10[i]<= -0.534) {
										if (F9[i]<= 2.342) {
											if (F16[i]<= 1.681) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F15[i]<= 0.729) {
											Class[0]++;
										} else {
											if (F2[i]<= -1.67) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F12[i]<= 1.134) {
										if (F4[i]<= 0.594) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										if (F9[i]<= 2.291) {
											if (F14[i]<= 0.816) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -1.122) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F9[i]<= 1.736) {
									if (F5[i]<= -1.88) {
										Class[1]++;
									} else {
										if (F11[i]<= 0.632) {
											if (F3[i]<= -1.656) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.455) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.65) {
										if (F5[i]<= -1.101) {
											if (F8[i]<= 1.071) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.153) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.277) {
											if (F5[i]<= -1.575) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.573) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F10[i]<= -0.769) {
							if (F11[i]<= 0.788) {
								if (F1[i]<= 0.633) {
									if (F16[i]<= 1.925) {
										if (F16[i]<= 1.644) {
											if (F10[i]<= -0.82) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.71) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.401) {
											if (F2[i]<= -0.237) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 3.208) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.275) {
										if (F7[i]<= 1.583) {
											if (F12[i]<= 1.408) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.9) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 1.733) {
											if (F17[i]<= 1.282) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -1.318) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F0[i]<= 0.299) {
									if (F14[i]<= 3.07) {
										if (F2[i]<= -1.547) {
											if (F7[i]<= 1.726) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 0.988) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 0.974) {
											if (F12[i]<= 1.545) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.199) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F14[i]<= 2.72) {
										if (F2[i]<= -1.576) {
											if (F4[i]<= 0.627) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 0.91) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 2.496) {
											if (F17[i]<= 1.224) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.403) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F5[i]<= -1.544) {
								if (F4[i]<= 2.415) {
									if (F8[i]<= 1.693) {
										if (F5[i]<= -1.545) {
											if (F9[i]<= 2.14) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F9[i]<= 2.557) {
											if (F16[i]<= 0.756) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F4[i]<= 2.428) {
										Class[1]++;
									} else {
										if (F6[i]<= 1.655) {
											if (F9[i]<= 1.286) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								}
							} else {
								if (F4[i]<= 6.742) {
									if (F15[i]<= 6.345) {
										if (F10[i]<= -0.38) {
											if (F12[i]<= 1.415) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.623) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 6.525) {
											Class[1]++;
										} else {
											if (F15[i]<= 7.885) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F17[i]<= 0.693) {
										if (F5[i]<= 0.688) {
											Class[1]++;
										} else {
											if (F5[i]<= 1.011) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= 0.621) {
											if (F11[i]<= 9.264) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									}
								}
							}
						}
					}
				} else {
					if (F7[i]<= 2.173) {
						if (F13[i]<= 2.327) {
							if (F10[i]<= -1.231) {
								if (F0[i]<= 0.348) {
									if (F12[i]<= 2.542) {
										if (F13[i]<= 0.944) {
											if (F5[i]<= -1.791) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.801) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 5.687) {
											if (F14[i]<= 2.265) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 2.564) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F1[i]<= 0.38) {
										Class[1]++;
									} else {
										if (F2[i]<= 1.679) {
											if (F11[i]<= 1.624) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.437) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F17[i]<= 1.118) {
									if (F8[i]<= 1.738) {
										if (F12[i]<= 4.346) {
											if (F11[i]<= 3.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 4.666) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F8[i]<= 1.738) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F4[i]<= 0.862) {
										if (F10[i]<= -0.657) {
											if (F1[i]<= 0.549) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 1.816) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 12.272) {
											if (F4[i]<= 3.405) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								}
							}
						} else {
							if (F17[i]<= 1.336) {
								if (F4[i]<= 0.46) {
									if (F5[i]<= 0.415) {
										if (F16[i]<= 1.501) {
											Class[1]++;
										} else {
											if (F13[i]<= 2.717) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= 1.474) {
											if (F6[i]<= -0.92) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F0[i]<= 0.014) {
										if (F17[i]<= 1.313) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										if (F11[i]<= 0.378) {
											if (F17[i]<= 1.332) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.215) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F14[i]<= 2.179) {
									if (F5[i]<= -1.028) {
										if (F17[i]<= 1.521) {
											if (F15[i]<= 0.778) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F1[i]<= 0.612) {
											if (F14[i]<= 2.122) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.62) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F9[i]<= 2.588) {
										if (F2[i]<= -1.711) {
											Class[1]++;
										} else {
											if (F2[i]<= -0.847) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 3.379) {
											if (F5[i]<= 1.36) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= 1.589) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F10[i]<= -1.358) {
							if (F12[i]<= 2.56) {
								if (F9[i]<= 3.579) {
									if (F13[i]<= 0.947) {
										if (F13[i]<= 0.945) {
											if (F4[i]<= 0.905) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F4[i]<= 0.494) {
											if (F7[i]<= 2.448) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= -1.733) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F11[i]<= 2.475) {
										if (F4[i]<= 0.429) {
											if (F3[i]<= -0.895) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 2.084) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 0.161) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								}
							} else {
								if (F10[i]<= -2.455) {
									if (F14[i]<= 2.433) {
										if (F16[i]<= 4.278) {
											if (F13[i]<= 0.841) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 5.189) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= -1.879) {
											if (F15[i]<= 7.362) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 0.784) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F15[i]<= 6.484) {
										if (F7[i]<= 2.719) {
											if (F14[i]<= 2.479) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.85) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -2.222) {
											if (F12[i]<= 5.714) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.119) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F15[i]<= 11.599) {
								if (F11[i]<= 4.23) {
									if (F10[i]<= 0.672) {
										if (F10[i]<= 0.672) {
											if (F15[i]<= 3.337) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F5[i]<= 1.83) {
											if (F0[i]<= 0.244) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 2.357) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F6[i]<= -1.729) {
										if (F17[i]<= 1.414) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										if (F7[i]<= 2.916) {
											if (F3[i]<= 1.706) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F3[i]<= -1.709) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F2[i]<= -1.566) {
									Class[0]++;
								} else {
									Class[1]++;
								}
							}
						}
					}
				}
			}
		}

		if (F11[i]<= 0.741) {
			if (F11[i]<= 0.559) {
				if (F14[i]<= 2.521) {
					if (F7[i]<= 1.423) {
						if (F5[i]<= -1.293) {
							if (F17[i]<= 0.716) {
								if (F11[i]<= 0.464) {
									if (F10[i]<= 0.371) {
										if (F3[i]<= -1.731) {
											if (F3[i]<= -1.733) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.189) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F0[i]<= 0.005) {
											if (F0[i]<= 0.004) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 0.731) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 0.393) {
										if (F13[i]<= 0.393) {
											if (F10[i]<= 0.562) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F4[i]<= 0.62) {
											if (F0[i]<= 0.181) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 0.297) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 1.017) {
									if (F12[i]<= 0.113) {
										if (F7[i]<= 0.547) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									} else {
										if (F11[i]<= 0.509) {
											if (F2[i]<= -1.283) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.3) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F15[i]<= 0.402) {
										if (F13[i]<= 1.483) {
											if (F15[i]<= 0.353) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.375) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -0.11) {
											if (F9[i]<= 1.514) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.322) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F0[i]<= 0.37) {
								if (F1[i]<= 0.566) {
									if (F2[i]<= 1.077) {
										if (F7[i]<= 1.016) {
											if (F2[i]<= -1.044) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 0.027) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.434) {
											if (F1[i]<= 0.48) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 0.954) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F5[i]<= 1.226) {
										if (F15[i]<= 0.371) {
											if (F7[i]<= 0.588) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 0.755) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F15[i]<= 0.426) {
											if (F7[i]<= 0.738) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= 0.772) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 1.026) {
									if (F2[i]<= 1.065) {
										if (F13[i]<= 1.059) {
											if (F10[i]<= 0.619) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.492) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 0.465) {
											if (F16[i]<= 0.761) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 1.305) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F16[i]<= 0.945) {
										if (F17[i]<= 1.139) {
											if (F16[i]<= 0.651) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.264) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F9[i]<= 1.468) {
											if (F2[i]<= 0.895) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -0.327) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F7[i]<= 1.693) {
							if (F9[i]<= 2.132) {
								if (F15[i]<= 0.442) {
									if (F12[i]<= 0.618) {
										if (F9[i]<= 1.79) {
											if (F11[i]<= 0.374) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.627) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F4[i]<= 0.431) {
											Class[1]++;
										} else {
											if (F13[i]<= 2.436) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F10[i]<= -0.108) {
										if (F11[i]<= 0.324) {
											if (F0[i]<= 0.408) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 1.956) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 0.442) {
											Class[1]++;
										} else {
											if (F13[i]<= 1.812) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F11[i]<= 0.424) {
									if (F15[i]<= 0.583) {
										if (F12[i]<= 0.982) {
											if (F7[i]<= 1.589) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 2.46) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F14[i]<= 1.514) {
											if (F11[i]<= 0.423) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 1.134) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F13[i]<= 1.932) {
										if (F9[i]<= 2.284) {
											if (F10[i]<= -0.345) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= -1.53) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.246) {
											if (F16[i]<= 1.884) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.211) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F7[i]<= 1.886) {
								if (F14[i]<= 1.846) {
									if (F13[i]<= 1.827) {
										if (F2[i]<= 1.804) {
											if (F5[i]<= 2.019) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 0.331) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= -1.282) {
											if (F11[i]<= 0.378) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.828) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= -1.03) {
										if (F12[i]<= 1.3) {
											if (F8[i]<= -1.202) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= -0.788) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F9[i]<= 2.521) {
											if (F1[i]<= 0.282) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.362) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F16[i]<= 1.569) {
									if (F10[i]<= 0.313) {
										if (F10[i]<= 0.312) {
											if (F1[i]<= 0.73) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F0[i]<= 0.013) {
											if (F3[i]<= -1.563) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 1.726) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= -0.534) {
										if (F9[i]<= 3.144) {
											if (F12[i]<= 1.221) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.535) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 2.067) {
											if (F11[i]<= 0.556) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F8[i]<= 0.988) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F7[i]<= 1.798) {
						if (F2[i]<= -1.206) {
							if (F9[i]<= 2.371) {
								if (F15[i]<= 0.686) {
									if (F11[i]<= 0.409) {
										if (F0[i]<= 0.592) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										if (F7[i]<= 1.323) {
											if (F4[i]<= 0.752) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 1.988) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.464) {
										if (F7[i]<= 1.453) {
											if (F5[i]<= -0.845) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F17[i]<= 1.476) {
											if (F5[i]<= -0.816) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.732) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F14[i]<= 3.053) {
									if (F17[i]<= 1.328) {
										if (F12[i]<= 1.288) {
											if (F6[i]<= 0.669) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F8[i]<= 1.156) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 2.281) {
											if (F10[i]<= -1.24) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -1.983) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F15[i]<= 0.73) {
										Class[0]++;
									} else {
										if (F5[i]<= -1.762) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								}
							}
						} else {
							if (F7[i]<= 1.541) {
								if (F17[i]<= 1.298) {
									if (F14[i]<= 2.63) {
										if (F1[i]<= 0.573) {
											if (F5[i]<= 0.984) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 1.97) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F5[i]<= 1.401) {
											if (F11[i]<= 0.556) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 0.67) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F1[i]<= 0.565) {
										if (F15[i]<= 0.675) {
											if (F5[i]<= 0.831) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F6[i]<= -1.553) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F5[i]<= 1.112) {
											if (F5[i]<= 1.077) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 2.883) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= -1.017) {
									if (F14[i]<= 2.936) {
										if (F13[i]<= 2.73) {
											if (F2[i]<= 1.358) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 1.922) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.489) {
											if (F9[i]<= 2.666) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 2.219) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.196) {
										if (F15[i]<= 0.675) {
											if (F10[i]<= -0.612) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 2.041) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F0[i]<= 0.582) {
											if (F13[i]<= 2.395) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.26) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F13[i]<= 3.029) {
							if (F17[i]<= 1.346) {
								if (F15[i]<= 0.762) {
									if (F9[i]<= 2.994) {
										if (F5[i]<= -1.141) {
											if (F5[i]<= -1.282) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 0.861) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F6[i]<= 1.355) {
											if (F17[i]<= 1.287) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.757) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F13[i]<= 2.41) {
										if (F15[i]<= 0.795) {
											Class[0]++;
										} else {
											if (F13[i]<= 2.406) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										Class[0]++;
									}
								}
							} else {
								if (F7[i]<= 2.08) {
									if (F16[i]<= 1.964) {
										if (F15[i]<= 0.611) {
											Class[1]++;
										} else {
											if (F3[i]<= -1.384) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.918) {
											if (F9[i]<= 2.578) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 3.12) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F11[i]<= 0.379) {
										if (F9[i]<= 3.577) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									} else {
										if (F10[i]<= -1.922) {
											if (F14[i]<= 2.525) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 3.49) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F15[i]<= 0.67) {
								if (F3[i]<= 0.706) {
									if (F5[i]<= 1.58) {
										if (F13[i]<= 3.107) {
											if (F4[i]<= 0.48) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F3[i]<= -0.662) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F2[i]<= -0.68) {
										if (F17[i]<= 1.413) {
											Class[0]++;
										} else {
											if (F16[i]<= 2.1) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.563) {
											Class[0]++;
										} else {
											if (F2[i]<= 0.048) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								Class[0]++;
							}
						}
					}
				}
			} else {
				if (F7[i]<= 1.277) {
					if (F12[i]<= 0.899) {
						if (F10[i]<= 0.81) {
							if (F0[i]<= 0.293) {
								if (F1[i]<= 0.718) {
									if (F0[i]<= 0.17) {
										if (F7[i]<= 1.01) {
											if (F15[i]<= 0.541) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 0.897) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= 0.295) {
											if (F2[i]<= 1.248) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.069) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.219) {
										if (F1[i]<= 0.861) {
											if (F10[i]<= 0.421) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 0.519) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 1.073) {
											if (F5[i]<= -1.077) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 1.184) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F17[i]<= 1.183) {
									if (F7[i]<= 0.961) {
										if (F1[i]<= 0.798) {
											if (F15[i]<= 0.502) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -1.2) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F13[i]<= 1.267) {
											if (F7[i]<= 1.138) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= 0.619) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F7[i]<= 0.88) {
										if (F2[i]<= -0.996) {
											if (F13[i]<= 1.011) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 0.763) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 1.129) {
											if (F2[i]<= -1.107) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 0.183) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F17[i]<= 1.241) {
								if (F7[i]<= 0.839) {
									if (F17[i]<= 0.788) {
										if (F7[i]<= 0.6) {
											if (F13[i]<= 0.38) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 0.792) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= -1.191) {
											if (F16[i]<= 0.246) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 0.951) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.095) {
										if (F13[i]<= 0.594) {
											if (F9[i]<= 0.003) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 1.101) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 0.764) {
											if (F10[i]<= 1.107) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 0.617) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F15[i]<= 0.509) {
									if (F7[i]<= 0.635) {
										Class[1]++;
									} else {
										if (F11[i]<= 0.597) {
											if (F5[i]<= -1.471) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.359) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F1[i]<= 0.748) {
										if (F7[i]<= 0.886) {
											if (F17[i]<= 1.451) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.069) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 0.851) {
											if (F13[i]<= 0.616) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 0.249) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F1[i]<= 0.773) {
							if (F9[i]<= 0.996) {
								if (F16[i]<= 1.188) {
									if (F16[i]<= 0.497) {
										if (F5[i]<= -1.535) {
											if (F17[i]<= 1.309) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 0.279) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.231) {
											if (F9[i]<= 0.513) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 0.787) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F1[i]<= 0.489) {
										if (F7[i]<= 0.964) {
											if (F2[i]<= 0.316) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 1.667) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 1.018) {
											if (F5[i]<= 1.396) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -1.347) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F0[i]<= 0.333) {
									if (F5[i]<= -1.414) {
										if (F14[i]<= 2.452) {
											if (F15[i]<= 0.784) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 0.967) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F14[i]<= 2.562) {
											if (F10[i]<= -0.242) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 0.636) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= -0.147) {
										if (F14[i]<= 2.453) {
											if (F2[i]<= -1.302) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 2.094) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.603) {
											if (F7[i]<= 1.222) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.013) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F10[i]<= -0.188) {
								if (F14[i]<= 2.361) {
									if (F2[i]<= -1.288) {
										if (F2[i]<= -1.711) {
											if (F1[i]<= 1.013) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.175) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F1[i]<= 0.901) {
											if (F16[i]<= 0.823) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.094) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= 1.411) {
										if (F12[i]<= 1.346) {
											if (F2[i]<= -1.456) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= -1.592) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 0.956) {
											if (F7[i]<= 1.064) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.552) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 1.091) {
									if (F1[i]<= 0.934) {
										if (F2[i]<= -1.328) {
											if (F4[i]<= 0.818) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 2.007) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.207) {
											if (F1[i]<= 1.087) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.611) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F0[i]<= 0.252) {
										if (F14[i]<= 2.091) {
											if (F2[i]<= 0.825) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.719) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= -1.73) {
											if (F9[i]<= 0.673) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 1.023) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F9[i]<= 2.608) {
						if (F16[i]<= 1.417) {
							if (F7[i]<= 1.552) {
								if (F10[i]<= 0.154) {
									if (F9[i]<= 1.709) {
										if (F2[i]<= 0.958) {
											if (F7[i]<= 1.337) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.364) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 0.89) {
											if (F7[i]<= 1.368) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 1.64) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F15[i]<= 0.595) {
										if (F2[i]<= 1.958) {
											if (F11[i]<= 0.597) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.988) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F13[i]<= 1.372) {
											if (F15[i]<= 0.824) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.843) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F16[i]<= 1.018) {
									if (F7[i]<= 1.809) {
										if (F13[i]<= 1.827) {
											if (F15[i]<= 0.869) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.71) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 1.22) {
											if (F15[i]<= 0.664) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -1.96) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= 0.323) {
										if (F15[i]<= 0.847) {
											if (F9[i]<= 2.577) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 1.53) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F8[i]<= -1.726) {
											Class[1]++;
										} else {
											if (F10[i]<= 1.993) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F7[i]<= 1.653) {
								if (F14[i]<= 2.918) {
									if (F7[i]<= 1.457) {
										if (F15[i]<= 0.648) {
											if (F11[i]<= 0.627) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.77) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 2.151) {
											if (F10[i]<= -0.768) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.687) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F16[i]<= 2.299) {
										if (F12[i]<= 1.486) {
											if (F2[i]<= 1.453) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F3[i]<= -1.617) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 2.411) {
											if (F10[i]<= -1.257) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.526) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F9[i]<= 2.477) {
									if (F7[i]<= 2.051) {
										if (F7[i]<= 1.674) {
											if (F2[i]<= -1.25) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 2.744) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= -0.425) {
											if (F8[i]<= -1.704) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= -1.473) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= -0.994) {
										if (F14[i]<= 3.151) {
											if (F2[i]<= -1.58) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -1.124) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.103) {
											if (F13[i]<= 1.786) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.702) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F14[i]<= 1.86) {
							if (F10[i]<= -0.614) {
								if (F12[i]<= 1.368) {
									if (F7[i]<= 2.067) {
										if (F12[i]<= 1.368) {
											if (F8[i]<= 1.722) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F11[i]<= 0.651) {
											Class[0]++;
										} else {
											if (F14[i]<= 1.714) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= 1.893) {
										if (F7[i]<= 1.756) {
											Class[1]++;
										} else {
											if (F15[i]<= 0.803) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.837) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								}
							} else {
								if (F11[i]<= 0.56) {
									if (F11[i]<= 0.56) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								} else {
									if (F8[i]<= 1.705) {
										if (F17[i]<= 1.048) {
											if (F10[i]<= 0.175) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.386) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.945) {
											if (F6[i]<= -0.543) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							}
						} else {
							if (F12[i]<= 1.611) {
								if (F7[i]<= 1.981) {
									if (F10[i]<= -1.362) {
										if (F5[i]<= -1.442) {
											if (F16[i]<= 2.199) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 1.655) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -1.25) {
											if (F10[i]<= -1.25) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 2.973) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F10[i]<= -1.008) {
										if (F13[i]<= 1.836) {
											if (F9[i]<= 3.029) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -1.448) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 0.741) {
											if (F5[i]<= 1.645) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								}
							} else {
								if (F7[i]<= 2.116) {
									if (F15[i]<= 0.936) {
										if (F5[i]<= 1.962) {
											if (F16[i]<= 1.719) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.838) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= -1.71) {
											if (F13[i]<= 2.123) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 1.924) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= 1.688) {
										if (F9[i]<= 2.674) {
											if (F8[i]<= -0.084) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 3.502) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 3.866) {
											if (F9[i]<= 3.85) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							}
						}
					}
				}
			}
		} else {
			if (F11[i]<= 1.053) {
				if (F0[i]<= 0.255) {
					if (F12[i]<= 1.192) {
						if (F10[i]<= 0.909) {
							if (F13[i]<= 0.869) {
								if (F15[i]<= 0.699) {
									if (F10[i]<= 0.579) {
										if (F1[i]<= 0.944) {
											if (F10[i]<= 0.367) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 1.431) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.866) {
											if (F11[i]<= 0.814) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.601) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F1[i]<= 0.906) {
										if (F10[i]<= 0.55) {
											if (F16[i]<= 0.935) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 0.574) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 0.908) {
											if (F1[i]<= 1.089) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.129) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F12[i]<= 0.994) {
									if (F10[i]<= 0.047) {
										if (F9[i]<= 0.677) {
											if (F2[i]<= 1.6) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.389) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F16[i]<= 1.051) {
											if (F4[i]<= 0.891) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 1.776) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F14[i]<= 0.895) {
										if (F14[i]<= 0.038) {
											if (F2[i]<= 0.935) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.792) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 1.391) {
											if (F10[i]<= -0.06) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.405) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F1[i]<= 0.939) {
								if (F17[i]<= 1.423) {
									if (F16[i]<= 0.766) {
										if (F15[i]<= 0.683) {
											if (F2[i]<= 1.77) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.837) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 1.261) {
											if (F1[i]<= 0.939) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 1.485) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F16[i]<= 0.774) {
										if (F10[i]<= 1.312) {
											if (F15[i]<= 0.745) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 0.537) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.294) {
											if (F7[i]<= 0.968) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 1.682) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 0.959) {
									if (F12[i]<= 0.586) {
										if (F17[i]<= 1.005) {
											if (F13[i]<= 0.474) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -0.93) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 0.985) {
											if (F7[i]<= 0.684) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 1.019) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F15[i]<= 0.884) {
										if (F13[i]<= 0.679) {
											if (F5[i]<= -1.111) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.203) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= -1.75) {
											if (F15[i]<= 0.983) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 0.501) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F14[i]<= 1.296) {
							if (F7[i]<= 1.416) {
								if (F4[i]<= 0.764) {
									if (F10[i]<= -0.2) {
										Class[1]++;
									} else {
										if (F11[i]<= 1.033) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F13[i]<= 1.207) {
										if (F15[i]<= 1.04) {
											if (F5[i]<= 1.411) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.169) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 0.962) {
											if (F7[i]<= 1.327) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.855) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F0[i]<= 0.254) {
									if (F7[i]<= 1.815) {
										if (F5[i]<= 1.751) {
											if (F2[i]<= -1.724) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 1.292) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F8[i]<= -1.218) {
											if (F11[i]<= 0.794) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.983) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									Class[1]++;
								}
							}
						} else {
							if (F13[i]<= 1.527) {
								if (F7[i]<= 1.542) {
									if (F10[i]<= -0.483) {
										if (F16[i]<= 2.157) {
											if (F12[i]<= 1.307) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -1.029) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.304) {
											if (F17[i]<= 0.951) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.767) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= -0.819) {
										if (F12[i]<= 1.454) {
											if (F15[i]<= 1.179) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.84) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.764) {
											if (F7[i]<= 1.627) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.679) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F9[i]<= 2.657) {
									if (F16[i]<= 2.235) {
										if (F1[i]<= 0.894) {
											if (F14[i]<= 2.26) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 2.656) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.683) {
											if (F16[i]<= 2.354) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 2.655) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F4[i]<= 1.58) {
										if (F1[i]<= 0.688) {
											if (F7[i]<= 1.798) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 2.615) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 0.622) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								}
							}
						}
					}
				} else {
					if (F10[i]<= 0.345) {
						if (F16[i]<= 1.844) {
							if (F0[i]<= 0.431) {
								if (F15[i]<= 0.928) {
									if (F5[i]<= 1.338) {
										if (F1[i]<= 1.058) {
											if (F12[i]<= 1.077) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.933) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.395) {
											if (F4[i]<= 0.702) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 1.06) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.362) {
										if (F10[i]<= -0.085) {
											if (F0[i]<= 0.328) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.209) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -0.509) {
											if (F7[i]<= 1.693) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.291) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F2[i]<= -1.339) {
									if (F12[i]<= 1.487) {
										if (F15[i]<= 0.683) {
											if (F12[i]<= 0.837) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.39) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 1.013) {
											if (F15[i]<= 1.041) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 1.14) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 1.195) {
										if (F0[i]<= 0.583) {
											if (F10[i]<= -1.211) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -1.43) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.522) {
											if (F11[i]<= 0.813) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.432) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F0[i]<= 0.481) {
								if (F9[i]<= 2.457) {
									if (F16[i]<= 2.11) {
										if (F12[i]<= 1.474) {
											if (F2[i]<= 1.472) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -1.074) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 2.937) {
											if (F10[i]<= -0.955) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.756) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F15[i]<= 0.993) {
										if (F10[i]<= -1.054) {
											if (F9[i]<= 2.754) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.782) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.937) {
											if (F17[i]<= 1.302) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 0.565) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= -1.642) {
									if (F13[i]<= 1.903) {
										if (F12[i]<= 1.928) {
											if (F1[i]<= 1.075) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 3.071) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 2.384) {
											if (F5[i]<= 1.62) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F16[i]<= 2.145) {
										if (F2[i]<= 1.332) {
											if (F17[i]<= 1.357) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 2.343) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 2.341) {
											if (F16[i]<= 2.341) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.995) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F0[i]<= 0.327) {
							if (F15[i]<= 0.923) {
								if (F7[i]<= 1.153) {
									if (F15[i]<= 0.561) {
										if (F14[i]<= 0.321) {
											if (F6[i]<= -1.334) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 0.168) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.948) {
											if (F5[i]<= -1.592) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.656) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.591) {
										if (F13[i]<= 1.002) {
											if (F1[i]<= 0.683) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.807) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 1.808) {
											if (F16[i]<= 0.74) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							} else {
								if (F16[i]<= 0.576) {
									if (F7[i]<= 1.195) {
										if (F2[i]<= 1.572) {
											if (F8[i]<= 1.548) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 0.933) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F16[i]<= 0.575) {
											if (F11[i]<= 1.053) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F4[i]<= 1.107) {
										if (F7[i]<= 1.489) {
											if (F12[i]<= 1.23) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= 1.614) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 1.107) {
											Class[1]++;
										} else {
											if (F8[i]<= 1.693) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F10[i]<= 0.577) {
								if (F12[i]<= 1.041) {
									if (F1[i]<= 1.018) {
										if (F0[i]<= 0.369) {
											if (F16[i]<= 0.497) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.707) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F0[i]<= 0.567) {
											if (F12[i]<= 0.081) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.025) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 1.129) {
										if (F13[i]<= 1.129) {
											if (F2[i]<= 1.829) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F7[i]<= 1.219) {
											if (F8[i]<= -1.174) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.346) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= 0.854) {
									if (F12[i]<= 1.097) {
										if (F1[i]<= 0.967) {
											if (F17[i]<= 1.55) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 1.096) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 0.854) {
											if (F2[i]<= -1.374) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F9[i]<= 0.001) {
										if (F11[i]<= 0.915) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										if (F7[i]<= 1.94) {
											if (F7[i]<= 1.939) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -1.867) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				}
			} else {
				if (F7[i]<= 1.103) {
					if (F10[i]<= 0.761) {
						if (F12[i]<= 1.082) {
							if (F0[i]<= 0.117) {
								if (F1[i]<= 1.033) {
									if (F11[i]<= 1.524) {
										if (F1[i]<= 0.85) {
											if (F15[i]<= 1.036) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 1.054) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F17[i]<= 0.929) {
											if (F4[i]<= 0.985) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 0.775) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F2[i]<= -1.349) {
										if (F16[i]<= 0.901) {
											if (F2[i]<= -1.716) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 0.252) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 1.306) {
											if (F10[i]<= 0.454) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 0.674) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F17[i]<= 0.83) {
									if (F2[i]<= -1.268) {
										if (F0[i]<= 0.272) {
											if (F2[i]<= -1.624) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 0.743) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 0.227) {
											if (F13[i]<= 0.466) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.321) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F12[i]<= 0.977) {
										if (F16[i]<= 0.542) {
											if (F5[i]<= -1.342) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 0.889) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F17[i]<= 1.151) {
											if (F14[i]<= 0.017) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 0.835) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F17[i]<= 0.894) {
								if (F0[i]<= 0.186) {
									if (F2[i]<= 1.23) {
										if (F13[i]<= 0.407) {
											if (F10[i]<= -0.005) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.214) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 2.378) {
											if (F15[i]<= 4.028) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.078) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F0[i]<= 0.381) {
										if (F2[i]<= 1.206) {
											if (F1[i]<= 1.712) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.301) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 1.389) {
											if (F15[i]<= 0.937) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.259) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F2[i]<= 1.257) {
									if (F2[i]<= -1.327) {
										if (F15[i]<= 2.489) {
											if (F0[i]<= 0.159) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.06) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F5[i]<= -1.235) {
											if (F14[i]<= 0.876) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.215) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F15[i]<= 2.771) {
										if (F0[i]<= 0.165) {
											if (F2[i]<= 1.753) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 0.404) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F1[i]<= 3.23) {
											if (F11[i]<= 3.97) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -0.321) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F10[i]<= 0.989) {
							if (F0[i]<= 0.074) {
								if (F17[i]<= 1.242) {
									if (F16[i]<= 0.611) {
										if (F13[i]<= 0.337) {
											if (F0[i]<= 0.032) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.426) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F17[i]<= 1.086) {
											if (F4[i]<= 4.359) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 0.846) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 0.445) {
										if (F16[i]<= 0.164) {
											if (F12[i]<= 1.02) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.4) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F15[i]<= 1.177) {
											if (F2[i]<= -1.568) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.205) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F13[i]<= 0.543) {
									if (F2[i]<= -1.495) {
										if (F15[i]<= 2.23) {
											if (F1[i]<= 1.105) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F1[i]<= 0.786) {
											if (F10[i]<= 0.814) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 0.392) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F16[i]<= 0.62) {
										if (F0[i]<= 0.141) {
											if (F9[i]<= 0.761) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.609) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.114) {
											if (F13[i]<= 0.85) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 0.85) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F7[i]<= 0.939) {
								if (F17[i]<= 0.991) {
									if (F0[i]<= 0.086) {
										if (F12[i]<= 1.02) {
											if (F15[i]<= 1.742) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.486) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 0.582) {
											if (F8[i]<= -1.704) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 0.936) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F4[i]<= 1.31) {
										if (F16[i]<= 0.356) {
											if (F10[i]<= 1.084) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 0.593) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 2.597) {
											if (F4[i]<= 2.192) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.413) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F17[i]<= 1.188) {
									if (F11[i]<= 3.855) {
										if (F5[i]<= -1.381) {
											if (F17[i]<= 0.865) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.573) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 0.022) {
											if (F16[i]<= 0.516) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 17.79) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F16[i]<= 0.523) {
										if (F5[i]<= 1.108) {
											if (F2[i]<= -1.633) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.203) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 0.568) {
											if (F16[i]<= 0.598) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 1.591) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F9[i]<= 2.434) {
						if (F1[i]<= 0.912) {
							if (F7[i]<= 1.519) {
								if (F16[i]<= 1.25) {
									if (F15[i]<= 1.104) {
										if (F6[i]<= -1.486) {
											if (F0[i]<= 0.143) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 1.032) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 0.337) {
											if (F9[i]<= 1.06) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.309) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F14[i]<= 2.87) {
										if (F0[i]<= 0.075) {
											if (F17[i]<= 0.986) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.042) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F4[i]<= 0.965) {
											if (F7[i]<= 1.501) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 1.533) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F9[i]<= 2.285) {
									if (F7[i]<= 1.667) {
										if (F14[i]<= 2.01) {
											if (F15[i]<= 1.138) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 1.079) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F8[i]<= -1.725) {
											Class[1]++;
										} else {
											if (F10[i]<= 0.117) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.666) {
										if (F17[i]<= 1.254) {
											if (F5[i]<= 1.692) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 1.033) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.825) {
											if (F13[i]<= 1.186) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 2.563) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F2[i]<= -1.484) {
								if (F7[i]<= 1.568) {
									if (F7[i]<= 1.316) {
										if (F12[i]<= 1.094) {
											if (F7[i]<= 1.177) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 2.459) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -0.753) {
											if (F4[i]<= 3.123) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 4.145) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F12[i]<= 1.783) {
										if (F14[i]<= 0.38) {
											if (F11[i]<= 3.696) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.331) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 5.284) {
											if (F2[i]<= -1.781) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 0.608) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 1.424) {
									if (F15[i]<= 1.075) {
										if (F11[i]<= 1.095) {
											if (F10[i]<= -0.258) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 2.039) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.309) {
											if (F17[i]<= 1.074) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 0.977) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F12[i]<= 1.419) {
										if (F1[i]<= 1.117) {
											if (F12[i]<= 1.214) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.592) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -0.682) {
											if (F12[i]<= 1.716) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.752) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F4[i]<= 1.055) {
							if (F7[i]<= 1.878) {
								if (F1[i]<= 0.835) {
									if (F12[i]<= 1.458) {
										if (F7[i]<= 1.725) {
											if (F12[i]<= 1.295) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 1.437) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F14[i]<= 3.148) {
											if (F14[i]<= 2.716) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 0.635) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F0[i]<= 0.538) {
										if (F17[i]<= 1.34) {
											if (F15[i]<= 2.996) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 3.033) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.171) {
											if (F1[i]<= 2.991) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 0.53) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 2.33) {
									if (F2[i]<= -1.272) {
										if (F14[i]<= 2.782) {
											if (F11[i]<= 3.085) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 1.325) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 1.048) {
											if (F15[i]<= 1.455) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 0.875) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 1.609) {
										if (F10[i]<= -1.926) {
											if (F9[i]<= 3.675) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -1.629) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F3[i]<= 1.703) {
											if (F1[i]<= 2.258) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								}
							}
						} else {
							if (F7[i]<= 1.909) {
								if (F14[i]<= 3.325) {
									if (F2[i]<= 1.657) {
										if (F2[i]<= -1.324) {
											if (F16[i]<= 1.943) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.718) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F6[i]<= -1.314) {
											if (F7[i]<= 1.846) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= -1.697) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									Class[0]++;
								}
							} else {
								if (F7[i]<= 2.34) {
									if (F5[i]<= -1.531) {
										if (F0[i]<= 0.412) {
											if (F16[i]<= 3.04) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 2.369) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 2.34) {
											if (F13[i]<= 0.34) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F15[i]<= 2.467) {
										if (F4[i]<= 1.239) {
											if (F10[i]<= 0.634) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 2.676) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 1.093) {
											if (F5[i]<= -0.998) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 1.098) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}

		if (F16[i]<= 1.734) {
			if (F1[i]<= 0.913) {
				if (F10[i]<= 1.013) {
					if (F12[i]<= 1.089) {
						if (F15[i]<= 0.53) {
							if (F1[i]<= 0.633) {
								if (F10[i]<= 0.622) {
									if (F7[i]<= 1.26) {
										if (F1[i]<= 0.535) {
											if (F7[i]<= 0.887) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -1.148) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F13[i]<= 2.167) {
											if (F13[i]<= 1.695) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.143) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.259) {
										if (F16[i]<= 0.498) {
											if (F11[i]<= 0.542) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 0.821) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 0.615) {
											if (F2[i]<= 1.008) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 1.569) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F11[i]<= 0.614) {
									if (F10[i]<= 0.446) {
										if (F7[i]<= 0.939) {
											if (F5[i]<= 1.186) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -0.742) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 1.003) {
											if (F13[i]<= 0.917) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.307) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F11[i]<= 0.697) {
										if (F7[i]<= 0.703) {
											if (F16[i]<= 0.756) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 0.239) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.561) {
											if (F7[i]<= 0.596) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 1.014) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F1[i]<= 0.724) {
								if (F9[i]<= 1.969) {
									if (F13[i]<= 0.947) {
										if (F16[i]<= 0.798) {
											if (F7[i]<= 0.665) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 0.471) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= 0.139) {
											if (F0[i]<= 0.337) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 0.824) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F11[i]<= 0.474) {
										if (F10[i]<= -0.475) {
											if (F16[i]<= 1.426) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -0.068) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.508) {
											if (F17[i]<= 1.182) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -0.172) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F13[i]<= 0.858) {
									if (F10[i]<= 0.551) {
										if (F13[i]<= 0.622) {
											if (F4[i]<= 0.78) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 0.129) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 0.699) {
											if (F15[i]<= 0.754) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 1.37) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F9[i]<= 1.603) {
										if (F0[i]<= 0.216) {
											if (F7[i]<= 0.978) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.047) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -0.128) {
											if (F13[i]<= 0.922) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 0.529) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F10[i]<= -0.344) {
							if (F9[i]<= 2.189) {
								if (F12[i]<= 1.261) {
									if (F10[i]<= -1.099) {
										if (F7[i]<= 1.518) {
											if (F9[i]<= 2.057) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 0.708) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= -1.2) {
											if (F14[i]<= 1.439) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.336) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.516) {
										if (F14[i]<= 1.673) {
											if (F14[i]<= 1.236) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.098) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F13[i]<= 2.029) {
											if (F15[i]<= 0.829) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.964) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 1.715) {
									if (F11[i]<= 0.561) {
										if (F14[i]<= 1.97) {
											if (F17[i]<= 1.257) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.568) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.342) {
											if (F5[i]<= -1.642) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -1.837) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F15[i]<= 0.78) {
										if (F17[i]<= 1.59) {
											if (F9[i]<= 2.796) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= -0.968) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F9[i]<= 3.056) {
											if (F12[i]<= 1.098) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.968) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F11[i]<= 0.88) {
								if (F12[i]<= 1.166) {
									if (F4[i]<= 0.887) {
										if (F5[i]<= -1.26) {
											if (F17[i]<= 1.152) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.153) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.325) {
											if (F7[i]<= 1.317) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.276) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.611) {
										if (F2[i]<= 1.492) {
											if (F12[i]<= 1.228) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.138) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F5[i]<= -2.041) {
											if (F0[i]<= 0.637) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.737) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= -0.122) {
									if (F7[i]<= 1.391) {
										if (F8[i]<= -1.655) {
											if (F5[i]<= -0.764) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.189) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 0.998) {
											if (F16[i]<= 1.682) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -0.877) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.437) {
										if (F7[i]<= 1.178) {
											if (F15[i]<= 0.919) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.92) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 1.513) {
											if (F13[i]<= 1.179) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.195) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F7[i]<= 1.14) {
						if (F7[i]<= 0.912) {
							if (F9[i]<= 0.741) {
								if (F11[i]<= 0.569) {
									if (F13[i]<= 0.848) {
										if (F12[i]<= 0.205) {
											if (F10[i]<= 1.023) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.415) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 0.857) {
											if (F2[i]<= 1.312) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 0.488) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F0[i]<= 0.076) {
										if (F17[i]<= 1.25) {
											if (F12[i]<= 0.391) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 1.195) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 0.488) {
											if (F1[i]<= 0.72) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.383) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F16[i]<= 0.363) {
									if (F1[i]<= 0.622) {
										if (F11[i]<= 0.703) {
											if (F10[i]<= 1.18) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 1.055) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= 1.534) {
											if (F5[i]<= -0.977) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.036) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F11[i]<= 0.511) {
										if (F6[i]<= 1.728) {
											if (F10[i]<= 1.048) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F12[i]<= 0.533) {
											if (F11[i]<= 0.603) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.475) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F2[i]<= 1.431) {
								if (F11[i]<= 0.536) {
									if (F13[i]<= 1.161) {
										if (F7[i]<= 1.036) {
											if (F12[i]<= 0.386) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 0.46) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.394) {
											if (F17[i]<= 1.295) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 1.016) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.339) {
										if (F2[i]<= -1.869) {
											if (F9[i]<= 0.808) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 2.035) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F1[i]<= 0.715) {
											if (F2[i]<= -1.114) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 0.371) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F14[i]<= 0.481) {
									if (F17[i]<= 1.196) {
										if (F11[i]<= 0.386) {
											Class[1]++;
										} else {
											if (F5[i]<= -1.145) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 0.448) {
											if (F11[i]<= 0.417) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 0.001) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F3[i]<= -0.411) {
										if (F4[i]<= 0.671) {
											Class[0]++;
										} else {
											if (F7[i]<= 0.979) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 0.413) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								}
							}
						}
					} else {
						if (F0[i]<= 0.519) {
							if (F10[i]<= 1.72) {
								if (F17[i]<= 1.463) {
									if (F10[i]<= 1.472) {
										if (F4[i]<= 0.739) {
											if (F11[i]<= 0.477) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.284) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.288) {
											if (F13[i]<= 0.459) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.663) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F4[i]<= 0.76) {
										if (F7[i]<= 1.294) {
											if (F13[i]<= 1.279) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.643) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 1.183) {
											if (F1[i]<= 0.752) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -1.99) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= 1.993) {
									if (F12[i]<= 0.567) {
										if (F5[i]<= -1.98) {
											if (F10[i]<= 1.917) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 0.533) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.497) {
											if (F14[i]<= 0.113) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.569) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F11[i]<= 0.357) {
										if (F4[i]<= 0.539) {
											if (F11[i]<= 0.357) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 0.547) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.554) {
											if (F17[i]<= 1.433) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.963) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F15[i]<= 0.485) {
								if (F11[i]<= 0.406) {
									if (F7[i]<= 1.473) {
										if (F17[i]<= 1.517) {
											if (F2[i]<= 1.707) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 0.341) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F17[i]<= 1.586) {
											if (F2[i]<= -1.746) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.571) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F5[i]<= -2.001) {
										Class[1]++;
									} else {
										if (F10[i]<= 1.013) {
											Class[1]++;
										} else {
											if (F2[i]<= -1.417) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F1[i]<= 0.555) {
									if (F9[i]<= 0.005) {
										if (F15[i]<= 0.589) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									} else {
										if (F0[i]<= 0.611) {
											if (F3[i]<= -1.529) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.554) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 2.298) {
										if (F12[i]<= 0.852) {
											if (F4[i]<= 0.645) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.454) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 2.299) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								}
							}
						}
					}
				}
			} else {
				if (F12[i]<= 1.303) {
					if (F9[i]<= 1.552) {
						if (F15[i]<= 0.872) {
							if (F7[i]<= 1.031) {
								if (F11[i]<= 0.921) {
									if (F1[i]<= 1.048) {
										if (F16[i]<= 1.586) {
											if (F1[i]<= 0.998) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 0.696) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 0.546) {
											if (F13[i]<= 0.899) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.602) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F11[i]<= 1.007) {
										if (F2[i]<= 1.558) {
											if (F9[i]<= 0.928) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 1.676) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 0.794) {
											if (F7[i]<= 0.372) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 0.903) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 1.282) {
									if (F9[i]<= 1.224) {
										if (F0[i]<= 0.484) {
											if (F13[i]<= 0.815) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.169) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 1.109) {
											if (F13[i]<= 0.975) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.111) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F15[i]<= 0.738) {
										if (F2[i]<= 1.261) {
											if (F12[i]<= 1.245) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.261) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.99) {
											if (F10[i]<= -0.421) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.225) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F7[i]<= 1.041) {
								if (F5[i]<= 1.236) {
									if (F17[i]<= 0.867) {
										if (F7[i]<= 0.495) {
											if (F10[i]<= 0.521) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.286) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 0.546) {
											if (F5[i]<= -1.045) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 0.018) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F0[i]<= 0.162) {
										if (F1[i]<= 1.21) {
											if (F15[i]<= 2.122) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 1.451) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= 0.186) {
											if (F12[i]<= 1.044) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 1.365) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F1[i]<= 1.199) {
									if (F7[i]<= 1.28) {
										if (F10[i]<= -0.369) {
											if (F0[i]<= 0.18) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.432) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -0.261) {
											if (F11[i]<= 1.384) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.331) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= 0.268) {
										if (F7[i]<= 1.095) {
											if (F13[i]<= 0.745) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.142) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.225) {
											if (F17[i]<= 0.802) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.486) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F14[i]<= 0.175) {
							if (F10[i]<= 1.554) {
								if (F17[i]<= 1.501) {
									if (F9[i]<= 1.995) {
										if (F7[i]<= 1.293) {
											if (F2[i]<= 1.704) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.19) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.505) {
											if (F5[i]<= -1.524) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.481) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 0.234) {
										if (F13[i]<= 0.878) {
											if (F9[i]<= 1.653) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.584) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 1.036) {
											if (F5[i]<= 1.335) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 0.385) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 1.5) {
									if (F16[i]<= 0.922) {
										if (F9[i]<= 1.989) {
											if (F16[i]<= 0.814) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= -1.709) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.746) {
											if (F6[i]<= -1.523) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F15[i]<= 1.228) {
										if (F17[i]<= 1.561) {
											if (F17[i]<= 0.837) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.761) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 0.895) {
											if (F10[i]<= 1.731) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 0.497) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F17[i]<= 1.178) {
								if (F11[i]<= 0.757) {
									if (F0[i]<= 0.372) {
										if (F5[i]<= -1.487) {
											if (F2[i]<= -1.127) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.757) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= -0.442) {
											if (F2[i]<= -1.214) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 0.793) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.229) {
										if (F15[i]<= 0.773) {
											if (F11[i]<= 0.842) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 0.874) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 0.203) {
											if (F17[i]<= 0.99) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.784) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F1[i]<= 1.191) {
									if (F17[i]<= 1.374) {
										if (F9[i]<= 1.893) {
											if (F10[i]<= 0.535) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.84) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.299) {
											if (F7[i]<= 1.221) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 0.223) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.185) {
										if (F2[i]<= 0.948) {
											if (F17[i]<= 1.191) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 1.569) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 0.132) {
											if (F12[i]<= 1.289) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F3[i]<= 1.328) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F9[i]<= 2.081) {
						if (F10[i]<= 0.189) {
							if (F12[i]<= 1.66) {
								if (F0[i]<= 0.185) {
									if (F2[i]<= -1.408) {
										if (F10[i]<= -0.197) {
											if (F15[i]<= 2.537) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 0.401) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 0.099) {
											if (F7[i]<= 1.074) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.235) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F14[i]<= 0.932) {
										if (F2[i]<= 1.425) {
											if (F5[i]<= -1.366) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.075) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.413) {
											if (F0[i]<= 0.37) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.32) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F15[i]<= 3.071) {
									if (F4[i]<= 2.258) {
										if (F13[i]<= 1.13) {
											if (F1[i]<= 2.819) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.248) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.392) {
											if (F17[i]<= 1.06) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -1.117) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F0[i]<= 0.147) {
										if (F13[i]<= 0.424) {
											if (F0[i]<= 0.078) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.067) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= -1.253) {
											if (F2[i]<= -1.664) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 2.085) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F13[i]<= 0.541) {
								if (F10[i]<= 1.358) {
									if (F15[i]<= 4.02) {
										if (F1[i]<= 3.084) {
											if (F5[i]<= 1.153) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 3.64) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 0.634) {
											if (F7[i]<= 0.667) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.039) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F11[i]<= 6.45) {
										if (F11[i]<= 3.809) {
											if (F7[i]<= 1.318) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 0.012) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 3.742) {
											Class[1]++;
										} else {
											if (F8[i]<= -0.543) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= 1.552) {
									if (F13[i]<= 0.784) {
										if (F7[i]<= 1.12) {
											if (F17[i]<= 0.894) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.135) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 0.276) {
											if (F7[i]<= 1.375) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.696) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F11[i]<= 2.989) {
										if (F10[i]<= 1.652) {
											if (F9[i]<= 0.179) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 1.256) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 1.942) {
											if (F7[i]<= 1.91) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.71) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F7[i]<= 1.661) {
							if (F14[i]<= 1.481) {
								if (F2[i]<= -1.519) {
									if (F2[i]<= -1.534) {
										if (F4[i]<= 2.448) {
											if (F2[i]<= -1.712) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F10[i]<= -0.397) {
										if (F17[i]<= 1.591) {
											if (F8[i]<= -1.705) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= -0.723) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 1.092) {
											if (F16[i]<= 1.524) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.237) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F11[i]<= 0.827) {
									if (F12[i]<= 1.392) {
										if (F7[i]<= 1.444) {
											if (F14[i]<= 1.92) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.338) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 1.068) {
											if (F2[i]<= 0.911) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 1.53) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F5[i]<= -1.243) {
										if (F6[i]<= 1.523) {
											if (F5[i]<= -1.714) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= -0.975) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= -1.04) {
											if (F5[i]<= 1.516) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.135) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F13[i]<= 1.248) {
								if (F5[i]<= -1.151) {
									if (F5[i]<= -1.154) {
										if (F10[i]<= -1.394) {
											if (F0[i]<= 0.341) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -1.176) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= -1.492) {
											Class[1]++;
										} else {
											if (F7[i]<= 1.671) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.939) {
										if (F7[i]<= 1.939) {
											if (F1[i]<= 6.257) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F8[i]<= -1.724) {
											if (F5[i]<= 0.735) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 1.732) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 2.141) {
									if (F2[i]<= -1.55) {
										if (F7[i]<= 1.837) {
											if (F14[i]<= 2.026) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 1.506) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 0.657) {
											if (F13[i]<= 2.174) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.513) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 2.81) {
										if (F7[i]<= 2.81) {
											if (F15[i]<= 2.523) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F12[i]<= 3.224) {
											if (F2[i]<= -1.722) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.729) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		} else {
			if (F7[i]<= 1.646) {
				if (F17[i]<= 1.088) {
					if (F1[i]<= 0.85) {
						if (F14[i]<= 2.589) {
							if (F7[i]<= 1.333) {
								if (F1[i]<= 0.684) {
									if (F10[i]<= -0.478) {
										if (F12[i]<= 1.123) {
											if (F14[i]<= 2.46) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.22) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F9[i]<= 1.689) {
											if (F14[i]<= 2.432) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.107) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= 1.616) {
										if (F17[i]<= 0.892) {
											if (F14[i]<= 2.296) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.218) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -0.517) {
											if (F9[i]<= 1.839) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.865) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F8[i]<= -1.689) {
									if (F13[i]<= 1.602) {
										if (F16[i]<= 1.94) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F7[i]<= 1.438) {
										if (F4[i]<= 0.797) {
											if (F9[i]<= 1.943) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.504) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.023) {
											if (F8[i]<= -0.533) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.669) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F16[i]<= 2.092) {
								if (F1[i]<= 0.681) {
									if (F11[i]<= 1.259) {
										if (F5[i]<= -1.643) {
											if (F2[i]<= -0.684) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.625) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= -0.851) {
											if (F7[i]<= 1.122) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 0.576) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F9[i]<= 1.197) {
										if (F17[i]<= 0.221) {
											if (F1[i]<= 0.833) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 1.067) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F15[i]<= 1.171) {
											if (F2[i]<= -1.535) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 2.088) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F13[i]<= 0.703) {
									if (F10[i]<= -0.717) {
										if (F5[i]<= -1.426) {
											if (F0[i]<= 0.021) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 0.883) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F4[i]<= 1.318) {
											if (F1[i]<= 0.67) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F9[i]<= 1.222) {
										if (F15[i]<= 0.734) {
											if (F14[i]<= 2.818) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 0.846) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F14[i]<= 2.948) {
											if (F15[i]<= 0.653) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.603) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F14[i]<= 2.451) {
							if (F1[i]<= 1.065) {
								if (F10[i]<= -0.266) {
									if (F5[i]<= -1.281) {
										if (F5[i]<= -2.044) {
											Class[0]++;
										} else {
											if (F0[i]<= 0.065) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 1.189) {
											if (F5[i]<= 1.563) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 1.693) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F10[i]<= -0.125) {
										if (F8[i]<= -1.447) {
											if (F16[i]<= 1.756) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.057) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F15[i]<= 2.011) {
											if (F13[i]<= 0.412) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.284) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F13[i]<= 0.609) {
									if (F15[i]<= 3.455) {
										if (F1[i]<= 2.03) {
											if (F4[i]<= 1.958) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 2.41) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.024) {
											if (F2[i]<= -1.549) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.479) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 0.844) {
										if (F2[i]<= -1.228) {
											if (F5[i]<= 0.612) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 0.719) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= -1.52) {
											if (F10[i]<= -0.128) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.323) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F12[i]<= 1.481) {
								if (F10[i]<= -0.239) {
									if (F9[i]<= 1.131) {
										if (F0[i]<= 0.213) {
											if (F11[i]<= 2.001) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 2.022) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 1.363) {
											if (F5[i]<= 1.135) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 0.927) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 1.154) {
										if (F4[i]<= 2.174) {
											if (F5[i]<= -1.381) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.056) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 1.08) {
											if (F7[i]<= 0.922) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 1.473) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F4[i]<= 4.021) {
									if (F13[i]<= 0.754) {
										if (F1[i]<= 1.67) {
											if (F11[i]<= 2.229) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.549) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F13[i]<= 1.112) {
											if (F0[i]<= 0.243) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.692) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 0.435) {
										if (F0[i]<= 0.004) {
											if (F5[i]<= 0.145) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F7[i]<= 1.299) {
											if (F2[i]<= 1.113) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 4.241) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F16[i]<= 2.117) {
						if (F7[i]<= 1.413) {
							if (F12[i]<= 1.322) {
								if (F12[i]<= 1.225) {
									if (F12[i]<= 1.174) {
										if (F13[i]<= 0.904) {
											if (F7[i]<= 1.407) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.619) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= 1.346) {
											if (F1[i]<= 0.569) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.293) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F9[i]<= 1.745) {
										if (F11[i]<= 1.047) {
											if (F14[i]<= 2.591) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.932) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F13[i]<= 1.093) {
											if (F10[i]<= -0.623) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.686) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F12[i]<= 1.442) {
									if (F1[i]<= 0.707) {
										if (F10[i]<= -1.074) {
											if (F8[i]<= 0.041) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 0.645) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= 1.379) {
											if (F17[i]<= 1.409) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.342) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F14[i]<= 2.079) {
										if (F2[i]<= 1.606) {
											if (F13[i]<= 0.788) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.292) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= -1.092) {
											if (F5[i]<= -0.042) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -1.254) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F1[i]<= 0.771) {
								if (F11[i]<= 0.498) {
									if (F4[i]<= 0.496) {
										if (F7[i]<= 1.597) {
											if (F10[i]<= -0.892) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.695) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F9[i]<= 2.086) {
											if (F13[i]<= 2.384) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -0.918) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.262) {
										if (F7[i]<= 1.519) {
											if (F5[i]<= -1.485) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.929) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 2.122) {
											if (F2[i]<= -1.585) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 2.356) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F17[i]<= 1.293) {
									if (F17[i]<= 1.177) {
										if (F5[i]<= -1.386) {
											if (F7[i]<= 1.517) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 3.545) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F12[i]<= 1.499) {
											if (F9[i]<= 2.061) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 1.938) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F1[i]<= 1.058) {
										if (F2[i]<= -1.421) {
											if (F9[i]<= 2.128) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 0.886) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 0.643) {
											if (F1[i]<= 1.385) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.571) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F14[i]<= 2.963) {
							if (F4[i]<= 1.016) {
								if (F1[i]<= 0.768) {
									if (F13[i]<= 1.045) {
										if (F2[i]<= -0.963) {
											if (F10[i]<= -0.963) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 1.498) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F17[i]<= 1.289) {
											if (F2[i]<= 0.774) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.387) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F13[i]<= 0.845) {
										if (F0[i]<= 0.109) {
											if (F2[i]<= -2.002) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.285) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 1.306) {
											if (F4[i]<= 0.535) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.634) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F11[i]<= 2.747) {
									if (F5[i]<= -1.612) {
										if (F16[i]<= 2.306) {
											if (F9[i]<= 2.055) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F5[i]<= 1.441) {
											if (F1[i]<= 0.858) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.377) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F13[i]<= 0.541) {
										if (F5[i]<= -1.805) {
											if (F3[i]<= -1.583) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 2.445) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F4[i]<= 2.558) {
											if (F12[i]<= 1.977) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 2.314) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F12[i]<= 1.451) {
								if (F1[i]<= 0.666) {
									if (F10[i]<= -1.221) {
										if (F16[i]<= 2.365) {
											if (F16[i]<= 2.355) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.04) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= -1.026) {
											if (F4[i]<= 0.68) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.085) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F16[i]<= 2.353) {
										if (F2[i]<= 1.866) {
											if (F10[i]<= -1.233) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 3.058) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.249) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								}
							} else {
								if (F12[i]<= 1.577) {
									if (F2[i]<= 1.621) {
										if (F9[i]<= 1.6) {
											if (F7[i]<= 1.46) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 3.071) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 2.97) {
											Class[1]++;
										} else {
											if (F6[i]<= -0.951) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F1[i]<= 0.958) {
										if (F5[i]<= 1.725) {
											if (F7[i]<= 1.617) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 0.761) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F12[i]<= 2.854) {
											if (F14[i]<= 3.147) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								}
							}
						}
					}
				}
			} else {
				if (F10[i]<= -0.69) {
					if (F15[i]<= 0.807) {
						if (F10[i]<= -1.635) {
							if (F15[i]<= 0.657) {
								if (F11[i]<= 0.367) {
									if (F5[i]<= 1.388) {
										if (F15[i]<= 0.574) {
											Class[1]++;
										} else {
											if (F8[i]<= -0.493) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 2.018) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F10[i]<= -1.713) {
										Class[0]++;
									} else {
										if (F10[i]<= -1.646) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								}
							} else {
								if (F2[i]<= 2.063) {
									if (F10[i]<= -1.883) {
										if (F4[i]<= 0.644) {
											Class[0]++;
										} else {
											if (F17[i]<= 1.589) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 0.802) {
											if (F9[i]<= 3.151) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.802) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									Class[1]++;
								}
							}
						} else {
							if (F16[i]<= 2.372) {
								if (F7[i]<= 1.807) {
									if (F9[i]<= 2.471) {
										if (F5[i]<= -1.657) {
											if (F13[i]<= 2.255) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 1.718) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 0.503) {
											if (F9[i]<= 2.562) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -1.084) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.526) {
										if (F9[i]<= 3.075) {
											if (F7[i]<= 1.964) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.47) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 2.188) {
											if (F0[i]<= 0.405) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.971) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F9[i]<= 2.868) {
									if (F10[i]<= -1.384) {
										if (F9[i]<= 2.855) {
											if (F17[i]<= 1.465) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F12[i]<= 1.613) {
											if (F1[i]<= 0.582) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F10[i]<= -1.634) {
										Class[1]++;
									} else {
										if (F14[i]<= 3.185) {
											if (F10[i]<= -1.609) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							}
						}
					} else {
						if (F7[i]<= 1.876) {
							if (F12[i]<= 1.539) {
								if (F10[i]<= -1.123) {
									if (F4[i]<= 0.966) {
										if (F5[i]<= 1.738) {
											if (F9[i]<= 2.219) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 2.228) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F15[i]<= 1.447) {
											if (F8[i]<= -1.7) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 2.128) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F1[i]<= 0.618) {
										if (F14[i]<= 2.62) {
											if (F7[i]<= 1.679) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 2.609) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= -2.047) {
											Class[1]++;
										} else {
											if (F12[i]<= 1.305) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F0[i]<= 0.48) {
									if (F10[i]<= -1.315) {
										if (F9[i]<= 2.594) {
											if (F14[i]<= 2.42) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 1.084) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 2.975) {
											if (F14[i]<= 2.92) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 2.284) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.226) {
										if (F14[i]<= 2.549) {
											if (F17[i]<= 1.18) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -1.422) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= -1.489) {
											if (F15[i]<= 1.299) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 2.96) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F11[i]<= 4.259) {
								if (F7[i]<= 2.265) {
									if (F9[i]<= 2.955) {
										if (F5[i]<= -1.743) {
											if (F12[i]<= 2.876) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 2.152) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 2.673) {
											if (F1[i]<= 0.729) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 2.264) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F12[i]<= 2.574) {
										if (F11[i]<= 1.376) {
											if (F2[i]<= 1.656) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.004) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 1.372) {
											if (F5[i]<= -1.435) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 2.574) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F5[i]<= -1.414) {
									if (F2[i]<= -0.093) {
										if (F5[i]<= -1.497) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									} else {
										if (F14[i]<= 0.912) {
											if (F15[i]<= 4.965) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.152) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 2.186) {
										if (F16[i]<= 2.38) {
											if (F13[i]<= 0.393) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 4.883) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 6.298) {
											if (F1[i]<= 5.169) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.62) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F9[i]<= 2.983) {
						if (F10[i]<= -0.107) {
							if (F13[i]<= 0.62) {
								if (F7[i]<= 1.674) {
									Class[0]++;
								} else {
									if (F4[i]<= 1.34) {
										if (F16[i]<= 2.145) {
											if (F7[i]<= 1.818) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.316) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= 0.989) {
											if (F15[i]<= 8.035) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 3.754) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F16[i]<= 2.01) {
									if (F11[i]<= 0.577) {
										if (F4[i]<= 0.654) {
											if (F2[i]<= -1.953) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.612) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.621) {
											if (F2[i]<= 1.822) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.439) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F12[i]<= 1.426) {
										if (F14[i]<= 3.11) {
											if (F4[i]<= 0.433) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F3[i]<= 1.723) {
											if (F13[i]<= 0.98) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.978) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F13[i]<= 0.664) {
								if (F1[i]<= 9.124) {
									if (F7[i]<= 2.477) {
										if (F4[i]<= 7.411) {
											if (F17[i]<= 1.307) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F12[i]<= 4.77) {
											if (F10[i]<= 0.922) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 0.673) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F0[i]<= 0.066) {
										Class[1]++;
									} else {
										Class[0]++;
									}
								}
							} else {
								if (F9[i]<= 2.983) {
									if (F0[i]<= 0.111) {
										if (F13[i]<= 1.054) {
											if (F13[i]<= 1.053) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 1.813) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 0.468) {
											if (F15[i]<= 0.981) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.735) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F15[i]<= 1.331) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								}
							}
						}
					} else {
						if (F10[i]<= 0.276) {
							if (F10[i]<= 0.276) {
								if (F0[i]<= 0.056) {
									if (F11[i]<= 1.641) {
										if (F16[i]<= 1.986) {
											if (F4[i]<= 1.127) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 3.513) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 1.832) {
											if (F10[i]<= 0.249) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F6[i]<= 1.139) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F6[i]<= -1.454) {
										if (F10[i]<= -0.441) {
											if (F3[i]<= 0.746) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -1.431) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 1.904) {
											if (F7[i]<= 2.302) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 3.656) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								Class[1]++;
							}
						} else {
							if (F13[i]<= 1.055) {
								if (F7[i]<= 2.104) {
									if (F16[i]<= 1.785) {
										if (F0[i]<= 0.118) {
											Class[0]++;
										} else {
											if (F8[i]<= -0.321) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F3[i]<= 1.221) {
											Class[0]++;
										} else {
											if (F3[i]<= 1.31) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 1.055) {
										if (F7[i]<= 2.23) {
											if (F11[i]<= 1.026) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.053) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[1]++;
									}
								}
							} else {
								if (F2[i]<= 1.947) {
									if (F4[i]<= 1.66) {
										if (F9[i]<= 6.767) {
											if (F7[i]<= 2.98) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 6.768) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F3[i]<= 1.7) {
											if (F5[i]<= 1.326) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 2.117) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 1.948) {
										Class[1]++;
									} else {
										Class[0]++;
									}
								}
							}
						}
					}
				}
			}
		}

		if (F7[i]<= 1.218) {
			if (F1[i]<= 0.897) {
				if (F4[i]<= 0.819) {
					if (F0[i]<= 0.313) {
						if (F2[i]<= 1.351) {
							if (F15[i]<= 0.57) {
								if (F5[i]<= -0.967) {
									if (F2[i]<= -0.999) {
										if (F1[i]<= 0.662) {
											if (F10[i]<= 0.861) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 0.79) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F13[i]<= 0.591) {
											if (F1[i]<= 0.634) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 0.953) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F5[i]<= 0.917) {
										if (F14[i]<= 0.101) {
											if (F7[i]<= 0.683) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.226) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F1[i]<= 0.625) {
											if (F7[i]<= 0.704) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 0.403) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= 0.834) {
									if (F1[i]<= 0.709) {
										if (F13[i]<= 0.8) {
											if (F4[i]<= 0.555) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 0.998) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= -1.388) {
											if (F15[i]<= 1.544) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 0.463) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F16[i]<= 0.64) {
										if (F7[i]<= 0.912) {
											if (F13[i]<= 0.564) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 0.673) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 0.956) {
											if (F7[i]<= 0.832) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.309) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F9[i]<= 1.327) {
								if (F15[i]<= 0.558) {
									if (F13[i]<= 0.811) {
										if (F10[i]<= 0.862) {
											if (F11[i]<= 0.579) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 0.588) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F15[i]<= 0.491) {
											if (F15[i]<= 0.431) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 1.097) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F11[i]<= 0.633) {
										if (F2[i]<= 1.718) {
											if (F13[i]<= 0.803) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 0.01) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= 1.698) {
											if (F10[i]<= 0.853) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 1.585) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F13[i]<= 1.489) {
									if (F15[i]<= 1.194) {
										if (F2[i]<= 1.668) {
											if (F1[i]<= 0.804) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -0.17) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= 1.259) {
											if (F17[i]<= 0.684) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F17[i]<= 0.796) {
										if (F12[i]<= 1.136) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										if (F13[i]<= 1.683) {
											if (F16[i]<= 2.005) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.328) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F7[i]<= 0.914) {
							if (F11[i]<= 0.556) {
								if (F2[i]<= 1.193) {
									if (F5[i]<= -1.047) {
										if (F10[i]<= 0.563) {
											if (F1[i]<= 0.569) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.15) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 0.472) {
											if (F7[i]<= 0.719) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 0.693) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F3[i]<= -1.734) {
										if (F2[i]<= 1.619) {
											if (F12[i]<= 0.581) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 0.843) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 0.772) {
											if (F3[i]<= -1.638) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.449) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F1[i]<= 0.812) {
									if (F2[i]<= -1.354) {
										if (F8[i]<= 1.672) {
											if (F1[i]<= 0.811) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.491) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F1[i]<= 0.721) {
											if (F2[i]<= 0.904) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 0.487) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F2[i]<= 1.294) {
										if (F5[i]<= -1.148) {
											if (F5[i]<= -1.707) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 1.264) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= 1.759) {
											if (F2[i]<= 1.757) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 0.519) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F10[i]<= -0.06) {
								if (F2[i]<= -1.29) {
									if (F11[i]<= 0.537) {
										if (F10[i]<= -0.273) {
											if (F9[i]<= 1.234) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.604) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F5[i]<= -1.367) {
											if (F17[i]<= 1.373) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 2.529) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 1.042) {
										if (F11[i]<= 0.532) {
											if (F1[i]<= 0.6) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -1.487) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F5[i]<= 0.883) {
											if (F17[i]<= 0.925) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 0.622) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F1[i]<= 0.563) {
									if (F12[i]<= 0.487) {
										if (F7[i]<= 0.989) {
											if (F1[i]<= 0.37) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 0.883) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F13[i]<= 1.23) {
											if (F17[i]<= 1.295) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 1.103) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F1[i]<= 0.76) {
										if (F2[i]<= -1.188) {
											if (F0[i]<= 0.556) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.469) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 0.94) {
											if (F3[i]<= -1.717) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.599) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F12[i]<= 0.855) {
						if (F1[i]<= 0.739) {
							if (F12[i]<= 0.726) {
								if (F0[i]<= 0.309) {
									if (F7[i]<= 0.784) {
										if (F10[i]<= 0.645) {
											if (F17[i]<= 0.842) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 0.948) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F13[i]<= 0.831) {
											if (F7[i]<= 0.894) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -0.807) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= 0.511) {
										if (F5[i]<= -1.213) {
											if (F16[i]<= 0.687) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 0.477) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 0.619) {
											if (F17[i]<= 1.18) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F8[i]<= -0.104) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F0[i]<= 0.235) {
									if (F1[i]<= 0.597) {
										if (F14[i]<= 0.19) {
											if (F16[i]<= 0.883) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.114) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F16[i]<= 1.218) {
											if (F10[i]<= 0.337) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 1.186) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= -1.189) {
										if (F7[i]<= 1.016) {
											if (F13[i]<= 0.95) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 0.607) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= 0.304) {
											if (F10[i]<= 0.007) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.198) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F2[i]<= -1.286) {
								if (F5[i]<= -1.133) {
									if (F13[i]<= 0.868) {
										if (F15[i]<= 0.635) {
											if (F7[i]<= 0.705) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.628) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= 0.89) {
											if (F17[i]<= 1.121) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F6[i]<= 1.35) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 0.808) {
										if (F17[i]<= 0.518) {
											if (F9[i]<= 0.814) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.024) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F12[i]<= 0.736) {
											if (F11[i]<= 1.206) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.769) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= 0.838) {
									if (F15[i]<= 0.638) {
										if (F11[i]<= 0.745) {
											if (F2[i]<= 0.95) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 0.462) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 0.727) {
											if (F2[i]<= 1.122) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 0.887) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.252) {
										if (F9[i]<= 0.391) {
											if (F10[i]<= 0.981) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 1.652) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 0.844) {
											if (F2[i]<= 0.857) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.057) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F14[i]<= 2.361) {
							if (F9[i]<= 0.795) {
								if (F10[i]<= 0.17) {
									if (F2[i]<= -1.358) {
										if (F7[i]<= 1.061) {
											if (F8[i]<= 1.379) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F8[i]<= 1.448) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.225) {
											if (F12[i]<= 0.991) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.449) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F0[i]<= 0.259) {
										if (F17[i]<= 0.985) {
											if (F7[i]<= 0.856) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 1.511) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F17[i]<= 1.232) {
											if (F5[i]<= 1.599) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 0.591) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F2[i]<= 1.238) {
									if (F14[i]<= 0.275) {
										if (F10[i]<= 0.549) {
											if (F13[i]<= 0.967) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 0.993) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= -1.338) {
											if (F10[i]<= -0.179) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.006) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F10[i]<= -0.099) {
										if (F16[i]<= 1.465) {
											if (F2[i]<= 1.674) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.017) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F12[i]<= 0.929) {
											if (F7[i]<= 1.144) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.046) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F4[i]<= 0.882) {
								if (F14[i]<= 2.752) {
									if (F9[i]<= 1.55) {
										if (F0[i]<= 0.085) {
											if (F7[i]<= 1.03) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 0.756) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F12[i]<= 1.226) {
											if (F8[i]<= 1.175) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 0.99) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F2[i]<= -1.372) {
										if (F5[i]<= -0.744) {
											Class[1]++;
										} else {
											if (F6[i]<= -0.633) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 0.906) {
											if (F9[i]<= 0.84) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 0.835) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F13[i]<= 0.841) {
									if (F17[i]<= 0.828) {
										if (F9[i]<= 0.793) {
											if (F4[i]<= 0.927) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -1.701) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 1.391) {
											if (F4[i]<= 1.116) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 1.97) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F16[i]<= 1.992) {
										if (F10[i]<= -0.672) {
											if (F14[i]<= 2.527) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.696) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 1.223) {
											if (F1[i]<= 0.719) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 2.761) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				}
			} else {
				if (F7[i]<= 0.718) {
					if (F1[i]<= 1.245) {
						if (F0[i]<= 0.171) {
							if (F2[i]<= -1.293) {
								if (F10[i]<= 0.519) {
									if (F13[i]<= 0.372) {
										if (F0[i]<= 0.06) {
											if (F17[i]<= 0.127) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -1.082) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F5[i]<= -1.1) {
											if (F4[i]<= 1.459) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 1.29) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F16[i]<= 0.598) {
										if (F10[i]<= 0.803) {
											if (F4[i]<= 0.622) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 0.925) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F1[i]<= 0.965) {
											if (F11[i]<= 1.317) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 0.891) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= 0.536) {
									if (F15[i]<= 1.281) {
										if (F5[i]<= 1.193) {
											if (F14[i]<= 1.553) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 0.77) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F15[i]<= 1.674) {
											if (F12[i]<= 0.975) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 1.956) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F16[i]<= 0.595) {
										if (F17[i]<= 0.948) {
											if (F10[i]<= 0.784) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 0.677) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F12[i]<= 0.631) {
											if (F5[i]<= 1.541) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 0.538) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F1[i]<= 1.02) {
								if (F15[i]<= 0.664) {
									if (F11[i]<= 0.744) {
										if (F5[i]<= -0.986) {
											if (F5[i]<= -1.225) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 0.146) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 0.385) {
											if (F10[i]<= 0.428) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.546) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= -1.351) {
										if (F2[i]<= -1.355) {
											if (F10[i]<= 0.033) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 0.955) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F0[i]<= 0.241) {
											if (F5[i]<= 1.282) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 0.988) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F4[i]<= 0.86) {
									if (F2[i]<= 1.639) {
										if (F2[i]<= -1.463) {
											if (F2[i]<= -1.807) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 1.404) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 0.522) {
											if (F2[i]<= 1.71) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.866) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F2[i]<= 1.249) {
										if (F14[i]<= 1.681) {
											if (F5[i]<= -0.931) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.32) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 1.118) {
											if (F15[i]<= 0.799) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							}
						}
					} else {
						if (F4[i]<= 1.316) {
							if (F0[i]<= 0.252) {
								if (F12[i]<= 0.816) {
									if (F0[i]<= 0.126) {
										if (F4[i]<= 1.016) {
											if (F7[i]<= 0.428) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.652) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.465) {
											if (F16[i]<= 1.041) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 0.778) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F0[i]<= 0.175) {
										if (F2[i]<= -1.254) {
											if (F10[i]<= 0.161) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 1.187) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 1.607) {
											if (F2[i]<= 1.182) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 1.059) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F0[i]<= 0.439) {
									if (F12[i]<= 0.567) {
										if (F2[i]<= 1.323) {
											if (F0[i]<= 0.283) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.382) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 1.581) {
											if (F1[i]<= 1.384) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.241) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F12[i]<= 0.722) {
										if (F10[i]<= 0.149) {
											if (F1[i]<= 1.282) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 1.068) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 1.024) {
											if (F9[i]<= 0.442) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.981) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F2[i]<= -1.355) {
								if (F4[i]<= 1.713) {
									if (F0[i]<= 0.095) {
										if (F5[i]<= 0.803) {
											if (F14[i]<= 0.009) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F8[i]<= 0.476) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= -1.52) {
											if (F15[i]<= 1.022) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 1.84) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= -1.508) {
										if (F17[i]<= 1.076) {
											if (F17[i]<= 1.069) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.029) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= -1.715) {
											if (F14[i]<= 2.065) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 3.777) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 0.497) {
									if (F5[i]<= 1.236) {
										if (F0[i]<= 0.077) {
											if (F14[i]<= 1.12) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -1.074) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 0.906) {
											if (F0[i]<= 0.13) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 4.406) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F15[i]<= 2.608) {
										if (F10[i]<= 0.137) {
											if (F17[i]<= 0.75) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 0.631) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 3.19) {
											if (F0[i]<= 0.083) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 4.521) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F5[i]<= 1.328) {
						if (F5[i]<= -1.206) {
							if (F10[i]<= -0.031) {
								if (F2[i]<= -1.582) {
									if (F14[i]<= 2.309) {
										if (F5[i]<= -1.375) {
											if (F0[i]<= 0.263) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 0.85) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 0.734) {
											if (F4[i]<= 0.757) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.468) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F0[i]<= 0.185) {
										if (F16[i]<= 1.796) {
											if (F17[i]<= 0.858) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 2.548) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F1[i]<= 1.127) {
											if (F7[i]<= 0.981) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 1.432) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= 1.105) {
									if (F1[i]<= 1.287) {
										if (F7[i]<= 0.97) {
											if (F15[i]<= 0.762) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.408) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 2.614) {
											if (F0[i]<= 0.183) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 0.963) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.236) {
										if (F15[i]<= 3.493) {
											if (F9[i]<= 0.725) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.61) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 0.954) {
											if (F13[i]<= 0.948) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.099) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F7[i]<= 0.943) {
								if (F7[i]<= 0.828) {
									if (F9[i]<= 0.945) {
										if (F17[i]<= 0.822) {
											if (F10[i]<= 0.013) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.002) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 0.724) {
											if (F1[i]<= 1.113) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.457) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F17[i]<= 0.805) {
										if (F13[i]<= 1.172) {
											if (F2[i]<= -1.398) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.225) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= -1.106) {
											if (F12[i]<= 0.959) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 0.899) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F17[i]<= 0.985) {
									if (F17[i]<= 0.767) {
										if (F12[i]<= 1.176) {
											if (F7[i]<= 0.999) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.405) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 0.105) {
											if (F2[i]<= -1.26) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.727) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.227) {
										if (F10[i]<= -0.049) {
											if (F10[i]<= -0.378) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.269) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 1.046) {
											if (F15[i]<= 0.783) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 0.988) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F17[i]<= 0.81) {
							if (F10[i]<= 0.074) {
								if (F16[i]<= 1.918) {
									if (F0[i]<= 0.323) {
										if (F2[i]<= 1.427) {
											if (F0[i]<= 0.104) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.021) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= 1.472) {
											if (F15[i]<= 1.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.374) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 0.482) {
										if (F8[i]<= -1.41) {
											if (F5[i]<= 1.88) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 2.629) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F9[i]<= 1.325) {
											if (F0[i]<= 0.306) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= -1.709) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F17[i]<= 0.658) {
									if (F15[i]<= 5.129) {
										if (F4[i]<= 3.664) {
											if (F5[i]<= 1.862) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 2.969) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F2[i]<= 1.696) {
										if (F4[i]<= 1.67) {
											if (F4[i]<= 0.968) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 1.7) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 0.961) {
											if (F5[i]<= 1.623) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.468) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F11[i]<= 2.528) {
								if (F10[i]<= 0.553) {
									if (F2[i]<= 1.46) {
										if (F7[i]<= 0.963) {
											if (F0[i]<= 0.144) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -0.415) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.02) {
											if (F5[i]<= 1.83) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -0.287) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 1.334) {
										if (F10[i]<= 1.178) {
											if (F16[i]<= 0.681) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.568) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 0.833) {
											if (F10[i]<= 1.246) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.342) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= 0.319) {
									if (F1[i]<= 1.393) {
										if (F16[i]<= 2.163) {
											if (F14[i]<= 0.028) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F0[i]<= 0.043) {
											if (F6[i]<= 0.784) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.049) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F16[i]<= 1.276) {
										if (F15[i]<= 3.681) {
											if (F1[i]<= 1.319) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= 0.336) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										Class[0]++;
									}
								}
							}
						}
					}
				}
			}
		} else {
			if (F7[i]<= 1.579) {
				if (F1[i]<= 0.754) {
					if (F14[i]<= 1.442) {
						if (F7[i]<= 1.339) {
							if (F16[i]<= 0.979) {
								if (F12[i]<= 0.583) {
									if (F11[i]<= 0.343) {
										if (F15[i]<= 0.331) {
											if (F2[i]<= -0.814) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= -1.412) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F17[i]<= 1.587) {
											if (F13[i]<= 0.834) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F11[i]<= 0.442) {
										if (F13[i]<= 1.743) {
											if (F4[i]<= 0.513) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.56) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 0.679) {
											if (F16[i]<= 0.876) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.764) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F13[i]<= 1.507) {
									if (F17[i]<= 1.238) {
										if (F17[i]<= 1.047) {
											if (F0[i]<= 0.701) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F8[i]<= -0.538) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 0.903) {
											if (F14[i]<= 0.37) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.388) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.413) {
										if (F9[i]<= 1.282) {
											if (F5[i]<= -1.873) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.615) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.445) {
											if (F4[i]<= 0.464) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F3[i]<= -1.396) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F14[i]<= 0.754) {
								if (F10[i]<= 0.669) {
									if (F1[i]<= 0.505) {
										if (F7[i]<= 1.398) {
											if (F10[i]<= -1.031) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 2.081) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 0.154) {
											if (F12[i]<= 1.066) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -1.775) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 1.38) {
										if (F13[i]<= 0.862) {
											if (F5[i]<= 1.62) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= 1.696) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 0.489) {
											if (F16[i]<= 0.621) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 0.571) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= -0.386) {
									if (F12[i]<= 1.041) {
										if (F2[i]<= 1.224) {
											if (F7[i]<= 1.46) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 0.969) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= -1.311) {
											if (F6[i]<= 1.575) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 1.928) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.46) {
										if (F9[i]<= 1.477) {
											if (F13[i]<= 1.75) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.48) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 1.336) {
											if (F12[i]<= 0.923) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.403) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F9[i]<= 1.81) {
							if (F7[i]<= 1.373) {
								if (F2[i]<= 1.303) {
									if (F17[i]<= 1.073) {
										if (F14[i]<= 2.468) {
											if (F6[i]<= -1.69) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 0.897) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= -0.673) {
											if (F4[i]<= 0.449) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 0.941) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F0[i]<= 0.398) {
										if (F17[i]<= 1.021) {
											if (F3[i]<= 0.328) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 0.945) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F12[i]<= 0.967) {
											if (F6[i]<= 0.559) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -0.158) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= -0.496) {
									if (F16[i]<= 2.029) {
										if (F15[i]<= 0.701) {
											if (F7[i]<= 1.482) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 1.306) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F16[i]<= 2.454) {
											if (F15[i]<= 1.366) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F3[i]<= -1.554) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F4[i]<= 1.144) {
										if (F14[i]<= 1.444) {
											Class[1]++;
										} else {
											if (F7[i]<= 1.377) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 1.797) {
											if (F8[i]<= -0.703) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							}
						} else {
							if (F4[i]<= 0.809) {
								if (F1[i]<= 0.594) {
									if (F10[i]<= -0.362) {
										if (F10[i]<= -0.73) {
											if (F11[i]<= 0.495) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 2.108) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.034) {
											if (F0[i]<= 0.814) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 0.549) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F12[i]<= 1.072) {
										if (F11[i]<= 0.548) {
											if (F7[i]<= 1.408) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.113) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F16[i]<= 2.12) {
											if (F11[i]<= 1.07) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 1.401) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F16[i]<= 2.171) {
									if (F12[i]<= 1.03) {
										if (F14[i]<= 1.522) {
											Class[1]++;
										} else {
											if (F2[i]<= -1.755) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 0.309) {
											if (F17[i]<= 1.165) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 1.55) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.19) {
										if (F2[i]<= 1.374) {
											if (F2[i]<= -1.186) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 0.351) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 1.467) {
											if (F9[i]<= 1.987) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.9) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F17[i]<= 1.127) {
						if (F2[i]<= -1.473) {
							if (F11[i]<= 2.119) {
								if (F17[i]<= 0.925) {
									if (F16[i]<= 0.801) {
										if (F9[i]<= 0.015) {
											if (F4[i]<= 1.252) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 0.437) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 1.368) {
											if (F1[i]<= 1.951) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -1.744) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.315) {
										if (F0[i]<= 0.494) {
											if (F10[i]<= 0.227) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -0.804) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F5[i]<= -1.649) {
											if (F8[i]<= 0.034) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 1.7) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= 0.655) {
									if (F16[i]<= 0.669) {
										Class[1]++;
									} else {
										if (F7[i]<= 1.304) {
											if (F2[i]<= -1.723) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -0.875) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F4[i]<= 4.337) {
										if (F10[i]<= 1.854) {
											if (F17[i]<= 1.122) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										Class[1]++;
									}
								}
							}
						} else {
							if (F1[i]<= 0.947) {
								if (F12[i]<= 1.065) {
									if (F13[i]<= 1.244) {
										if (F3[i]<= -1.718) {
											if (F2[i]<= -1.223) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.737) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 0.184) {
											if (F9[i]<= 1.902) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= -1.439) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= -0.333) {
										if (F12[i]<= 1.349) {
											if (F7[i]<= 1.341) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 1.145) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= 0.748) {
											if (F12[i]<= 1.065) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.282) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F5[i]<= 1.217) {
									if (F2[i]<= 1.716) {
										if (F1[i]<= 3.661) {
											if (F10[i]<= 0.021) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 4.182) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -0.38) {
											if (F16[i]<= 1.953) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.425) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F11[i]<= 3.584) {
										if (F2[i]<= 1.512) {
											if (F7[i]<= 1.401) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.897) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -0.429) {
											if (F0[i]<= 0.108) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F8[i]<= 0.375) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F14[i]<= 0.974) {
							if (F14[i]<= 0.025) {
								if (F7[i]<= 1.375) {
									if (F16[i]<= 1.313) {
										if (F2[i]<= 1.028) {
											if (F13[i]<= 1.51) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 0.822) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 0.194) {
											if (F4[i]<= 2.88) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.779) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= -1.394) {
										if (F11[i]<= 3.509) {
											if (F11[i]<= 1.034) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= -1.287) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F15[i]<= 3.636) {
											if (F10[i]<= 0.487) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.514) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= -0.357) {
									if (F16[i]<= 1.479) {
										if (F11[i]<= 2.931) {
											if (F5[i]<= -1.013) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -1.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 0.174) {
											if (F2[i]<= 1.766) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 1.851) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F4[i]<= 4.4) {
										if (F7[i]<= 1.37) {
											if (F1[i]<= 1.132) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 1.36) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 2.292) {
											if (F3[i]<= -0.363) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 0.224) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F2[i]<= 1.371) {
								if (F5[i]<= -1.242) {
									if (F2[i]<= -1.688) {
										if (F14[i]<= 2.957) {
											if (F12[i]<= 1.568) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.562) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F1[i]<= 0.879) {
											if (F12[i]<= 1.506) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -1.108) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= 1.201) {
										if (F12[i]<= 1.475) {
											if (F4[i]<= 1.135) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 2.922) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 2.215) {
											if (F17[i]<= 1.221) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.237) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F12[i]<= 1.428) {
									if (F14[i]<= 1.622) {
										if (F10[i]<= -0.099) {
											if (F5[i]<= 0.231) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.011) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.468) {
											if (F4[i]<= 0.583) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F6[i]<= -1.472) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 0.862) {
										if (F13[i]<= 0.496) {
											if (F14[i]<= 2.837) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 2.903) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.797) {
											if (F17[i]<= 1.269) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.336) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					}
				}
			} else {
				if (F7[i]<= 1.855) {
					if (F16[i]<= 1.443) {
						if (F10[i]<= -0.169) {
							if (F9[i]<= 2.147) {
								if (F13[i]<= 0.699) {
									if (F15[i]<= 4.534) {
										if (F9[i]<= 0.3) {
											if (F0[i]<= 0.171) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.775) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 0.94) {
											if (F7[i]<= 1.831) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.626) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F9[i]<= 1.296) {
										if (F5[i]<= -1.488) {
											if (F4[i]<= 2.018) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 3.662) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.085) {
											if (F2[i]<= 1.398) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 2.59) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F15[i]<= 0.645) {
									if (F16[i]<= 1.279) {
										if (F13[i]<= 1.988) {
											if (F11[i]<= 0.455) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 0.974) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 1.294) {
											if (F12[i]<= 0.824) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.642) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F8[i]<= -1.714) {
										Class[1]++;
									} else {
										if (F10[i]<= -0.866) {
											if (F7[i]<= 1.627) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= -0.21) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F15[i]<= 7.737) {
								if (F17[i]<= 1.24) {
									if (F13[i]<= 1.658) {
										if (F2[i]<= -1.659) {
											if (F8[i]<= -1.526) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 2.792) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 0.411) {
											if (F16[i]<= 1.213) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.582) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F11[i]<= 0.515) {
										if (F7[i]<= 1.647) {
											if (F7[i]<= 1.647) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 1.085) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F4[i]<= 6.738) {
											if (F16[i]<= 0.773) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 3.151) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F5[i]<= -0.919) {
									if (F12[i]<= 4.009) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								} else {
									Class[1]++;
								}
							}
						}
					} else {
						if (F1[i]<= 0.761) {
							if (F14[i]<= 2.284) {
								if (F14[i]<= 2.0) {
									if (F17[i]<= 1.343) {
										if (F10[i]<= -0.949) {
											if (F10[i]<= -0.979) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.627) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.53) {
											if (F15[i]<= 0.62) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 1.76) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.684) {
										if (F13[i]<= 1.918) {
											if (F10[i]<= -0.628) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= 0.533) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= -0.449) {
											if (F1[i]<= 0.338) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.333) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F11[i]<= 0.539) {
									if (F10[i]<= -1.024) {
										if (F12[i]<= 1.369) {
											if (F9[i]<= 2.047) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 0.632) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= 1.326) {
											if (F11[i]<= 0.538) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.613) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.705) {
										if (F17[i]<= 1.248) {
											if (F4[i]<= 0.809) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 2.371) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.31) {
											if (F17[i]<= 1.187) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.524) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F5[i]<= 1.257) {
								if (F5[i]<= -1.028) {
									if (F16[i]<= 2.289) {
										if (F17[i]<= 1.316) {
											if (F15[i]<= 1.964) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.857) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 2.498) {
											if (F0[i]<= 0.36) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.584) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.277) {
										if (F11[i]<= 2.139) {
											if (F10[i]<= -0.053) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.569) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= -1.519) {
											if (F4[i]<= 0.615) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 3.072) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F17[i]<= 1.238) {
									if (F2[i]<= -0.883) {
										if (F15[i]<= 2.992) {
											if (F1[i]<= 0.786) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= -0.62) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F12[i]<= 2.069) {
											if (F6[i]<= 1.715) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.593) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.727) {
										if (F10[i]<= -0.999) {
											if (F14[i]<= 3.092) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.499) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 3.303) {
											if (F16[i]<= 2.418) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 0.877) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F10[i]<= -0.763) {
						if (F9[i]<= 3.151) {
							if (F7[i]<= 2.264) {
								if (F14[i]<= 3.253) {
									if (F2[i]<= 1.599) {
										if (F15[i]<= 3.641) {
											if (F10[i]<= -1.441) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 2.992) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 1.892) {
											if (F7[i]<= 1.925) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 2.804) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F12[i]<= 1.598) {
										if (F6[i]<= -1.601) {
											if (F7[i]<= 1.952) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.598) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 6.258) {
											if (F17[i]<= 1.298) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								}
							} else {
								if (F15[i]<= 4.677) {
									if (F15[i]<= 1.842) {
										if (F2[i]<= 2.05) {
											if (F1[i]<= 2.215) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.587) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= -1.862) {
											if (F16[i]<= 1.532) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -2.552) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F15[i]<= 6.489) {
										if (F2[i]<= 1.633) {
											if (F5[i]<= -1.24) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.164) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 2.52) {
											if (F16[i]<= 0.831) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 0.447) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F2[i]<= 1.631) {
								if (F12[i]<= 1.476) {
									if (F7[i]<= 2.26) {
										if (F10[i]<= -1.768) {
											if (F12[i]<= 1.461) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 1.653) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.277) {
											if (F1[i]<= 0.276) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 1.476) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F7[i]<= 2.32) {
										if (F1[i]<= 0.42) {
											Class[1]++;
										} else {
											if (F7[i]<= 2.32) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F4[i]<= 0.429) {
											if (F2[i]<= 0.799) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 5.206) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F16[i]<= 6.671) {
									if (F16[i]<= 2.223) {
										if (F5[i]<= 1.344) {
											if (F13[i]<= 1.253) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 2.449) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 1.612) {
											if (F9[i]<= 3.171) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 0.855) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= 0.486) {
										Class[1]++;
									} else {
										Class[0]++;
									}
								}
							}
						}
					} else {
						if (F12[i]<= 0.819) {
							if (F13[i]<= 1.397) {
								if (F10[i]<= 1.487) {
									if (F10[i]<= 1.486) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								} else {
									if (F11[i]<= 3.2) {
										if (F2[i]<= -2.022) {
											if (F15[i]<= 1.435) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.562) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 0.173) {
											Class[0]++;
										} else {
											if (F10[i]<= 2.714) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F15[i]<= 0.545) {
									if (F1[i]<= 0.647) {
										if (F5[i]<= 1.264) {
											Class[0]++;
										} else {
											if (F5[i]<= 1.273) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F13[i]<= 1.398) {
										Class[1]++;
									} else {
										if (F0[i]<= 0.256) {
											if (F15[i]<= 0.549) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							}
						} else {
							if (F10[i]<= 0.637) {
								if (F15[i]<= 4.264) {
									if (F1[i]<= 0.402) {
										if (F16[i]<= 1.111) {
											if (F3[i]<= -1.37) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.402) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F13[i]<= 0.768) {
											if (F4[i]<= 0.431) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.731) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 0.418) {
										if (F17[i]<= 1.397) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									} else {
										if (F10[i]<= 0.608) {
											if (F7[i]<= 2.062) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.614) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 2.159) {
									if (F7[i]<= 2.156) {
										if (F15[i]<= 8.115) {
											if (F4[i]<= 3.725) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -0.317) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F12[i]<= 1.595) {
											Class[0]++;
										} else {
											if (F5[i]<= -0.98) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F15[i]<= 12.803) {
										if (F15[i]<= 0.435) {
											if (F10[i]<= 1.057) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 10.633) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[1]++;
									}
								}
							}
						}
					}
				}
			}
		}

		if (F12[i]<= 1.151) {
			if (F7[i]<= 1.273) {
				if (F13[i]<= 1.21) {
					if (F1[i]<= 0.882) {
						if (F11[i]<= 0.563) {
							if (F9[i]<= 0.971) {
								if (F11[i]<= 0.461) {
									if (F2[i]<= -1.143) {
										if (F10[i]<= 0.877) {
											if (F11[i]<= 0.415) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 0.305) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 0.705) {
											if (F2[i]<= 0.94) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 0.918) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F7[i]<= 0.828) {
										if (F10[i]<= 0.624) {
											if (F15[i]<= 0.419) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 0.316) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 0.987) {
											if (F4[i]<= 0.497) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 1.122) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F15[i]<= 0.459) {
									if (F9[i]<= 1.163) {
										if (F17[i]<= 1.328) {
											if (F7[i]<= 0.807) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 1.311) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.011) {
											if (F1[i]<= 0.388) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -0.354) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 0.902) {
										if (F2[i]<= -1.553) {
											if (F9[i]<= 1.31) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.065) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= 0.02) {
											if (F7[i]<= 1.225) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.086) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F10[i]<= 0.853) {
								if (F13[i]<= 0.839) {
									if (F4[i]<= 0.563) {
										if (F15[i]<= 0.551) {
											if (F10[i]<= 0.582) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.458) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F5[i]<= -1.406) {
											if (F2[i]<= -1.013) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 0.953) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F1[i]<= 0.725) {
										if (F15[i]<= 0.536) {
											if (F17[i]<= 0.691) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.252) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F0[i]<= 0.301) {
											if (F14[i]<= 1.944) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 0.821) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F17[i]<= 1.302) {
									if (F1[i]<= 0.605) {
										if (F7[i]<= 0.708) {
											if (F12[i]<= 0.332) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 0.488) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 0.212) {
											if (F17[i]<= 1.049) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 1.124) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 0.914) {
										if (F10[i]<= 0.991) {
											if (F5[i]<= 1.377) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.485) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F1[i]<= 0.722) {
											if (F11[i]<= 1.492) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.085) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F4[i]<= 0.928) {
							if (F1[i]<= 1.167) {
								if (F7[i]<= 0.951) {
									if (F1[i]<= 0.998) {
										if (F10[i]<= 0.528) {
											if (F15[i]<= 0.967) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.088) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 0.921) {
											if (F7[i]<= 0.747) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 1.185) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F15[i]<= 0.879) {
										if (F13[i]<= 0.883) {
											if (F10[i]<= 0.51) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.024) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -0.183) {
											if (F2[i]<= 1.538) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 0.885) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F15[i]<= 0.693) {
									if (F11[i]<= 0.859) {
										if (F10[i]<= 0.407) {
											if (F4[i]<= 0.718) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 0.673) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 0.96) {
											if (F15[i]<= 0.634) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= -1.734) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= -1.251) {
										if (F15[i]<= 1.667) {
											if (F4[i]<= 0.73) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.851) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 1.398) {
											if (F10[i]<= 0.57) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 1.343) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F0[i]<= 0.13) {
								if (F0[i]<= 0.054) {
									if (F7[i]<= 0.849) {
										if (F11[i]<= 2.253) {
											if (F2[i]<= -1.339) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 3.075) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F16[i]<= 0.815) {
											if (F16[i]<= 0.43) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 0.954) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= 1.192) {
										if (F2[i]<= -1.327) {
											if (F5[i]<= -1.301) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 0.001) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F1[i]<= 1.236) {
											if (F4[i]<= 1.216) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 1.326) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= 0.313) {
									if (F17[i]<= 0.781) {
										if (F0[i]<= 0.224) {
											if (F11[i]<= 1.145) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.328) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= -1.294) {
											if (F2[i]<= -1.464) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 1.114) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F17[i]<= 0.903) {
										if (F1[i]<= 1.145) {
											if (F10[i]<= 0.499) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 0.691) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= -1.239) {
											if (F13[i]<= 0.84) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 0.928) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F11[i]<= 0.566) {
						if (F7[i]<= 0.98) {
							if (F1[i]<= 0.585) {
								if (F1[i]<= 0.491) {
									if (F7[i]<= 0.736) {
										if (F9[i]<= 0.598) {
											if (F10[i]<= -0.071) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.223) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F17[i]<= 1.073) {
											if (F14[i]<= 1.203) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 0.95) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F16[i]<= 0.71) {
										if (F12[i]<= 0.762) {
											if (F5[i]<= 1.277) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -1.298) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F9[i]<= 0.588) {
											if (F5[i]<= -1.166) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.127) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F9[i]<= 0.631) {
									if (F1[i]<= 0.668) {
										if (F10[i]<= 0.08) {
											if (F2[i]<= -1.243) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 0.753) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.669) {
											if (F4[i]<= 0.487) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.119) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F6[i]<= 1.038) {
										if (F0[i]<= 0.502) {
											if (F2[i]<= -1.213) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.113) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= -0.018) {
											if (F2[i]<= 1.149) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -0.005) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F10[i]<= -0.27) {
								if (F9[i]<= 1.462) {
									if (F2[i]<= 1.272) {
										if (F12[i]<= 0.926) {
											if (F2[i]<= -0.919) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.156) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= 1.614) {
											if (F1[i]<= 0.306) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 2.079) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F15[i]<= 0.552) {
										if (F17[i]<= 1.081) {
											if (F9[i]<= 1.615) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 2.05) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F5[i]<= 1.22) {
											if (F0[i]<= 0.263) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 0.461) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F11[i]<= 0.483) {
									if (F9[i]<= 1.086) {
										if (F1[i]<= 0.464) {
											if (F9[i]<= 1.071) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -1.506) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.181) {
											if (F12[i]<= 0.646) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 1.746) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.081) {
										if (F2[i]<= 1.231) {
											if (F13[i]<= 1.298) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.499) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F5[i]<= -1.038) {
											if (F17[i]<= 1.083) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 0.15) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F10[i]<= -0.105) {
							if (F5[i]<= -1.23) {
								if (F15[i]<= 0.714) {
									if (F1[i]<= 0.809) {
										if (F2[i]<= -1.573) {
											if (F0[i]<= 0.482) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 0.708) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 0.741) {
											if (F2[i]<= -1.041) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 0.689) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F14[i]<= 0.992) {
										if (F16[i]<= 1.043) {
											if (F0[i]<= 0.582) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.921) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= -0.428) {
											if (F2[i]<= -1.322) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 0.724) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F0[i]<= 0.402) {
									if (F1[i]<= 0.723) {
										if (F14[i]<= 2.166) {
											if (F2[i]<= 1.218) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 0.824) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F14[i]<= 2.162) {
											if (F10[i]<= -0.279) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 0.769) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F5[i]<= 1.081) {
										if (F15[i]<= 0.763) {
											if (F2[i]<= -1.494) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 0.901) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.316) {
											if (F5[i]<= 1.505) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 0.713) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F10[i]<= 0.072) {
								if (F11[i]<= 0.659) {
									if (F12[i]<= 0.925) {
										if (F0[i]<= 0.479) {
											if (F15[i]<= 0.645) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -1.238) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.725) {
											if (F2[i]<= -0.918) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.514) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F1[i]<= 0.755) {
										if (F10[i]<= -0.027) {
											if (F5[i]<= 0.903) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.212) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 0.744) {
											if (F0[i]<= 0.217) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 1.029) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F11[i]<= 0.677) {
									if (F2[i]<= -1.11) {
										if (F0[i]<= 0.492) {
											if (F16[i]<= 1.136) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 0.743) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 1.306) {
											if (F5[i]<= 1.26) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 0.908) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F0[i]<= 0.405) {
										if (F11[i]<= 0.783) {
											if (F0[i]<= 0.038) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 0.343) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 0.955) {
											if (F17[i]<= 0.776) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 0.734) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				}
			} else {
				if (F10[i]<= -0.297) {
					if (F7[i]<= 1.573) {
						if (F9[i]<= 1.91) {
							if (F14[i]<= 0.48) {
								if (F7[i]<= 1.321) {
									if (F1[i]<= 0.506) {
										if (F7[i]<= 1.276) {
											if (F11[i]<= 0.424) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -1.004) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F16[i]<= 0.351) {
											if (F9[i]<= 0.009) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.464) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F16[i]<= 1.37) {
										if (F2[i]<= 1.581) {
											if (F6[i]<= 0.708) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.464) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -0.575) {
											if (F6[i]<= 0.323) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							} else {
								if (F12[i]<= 0.992) {
									if (F0[i]<= 0.362) {
										if (F12[i]<= 0.844) {
											if (F12[i]<= 0.828) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 0.872) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F14[i]<= 0.758) {
											if (F2[i]<= 1.569) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.422) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.39) {
										if (F10[i]<= -0.77) {
											if (F9[i]<= 1.457) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 0.899) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 0.565) {
											if (F2[i]<= -1.302) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 2.296) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F16[i]<= 1.559) {
								if (F14[i]<= 1.404) {
									if (F11[i]<= 0.474) {
										if (F7[i]<= 1.476) {
											if (F4[i]<= 0.547) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F6[i]<= 1.327) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F6[i]<= -0.402) {
											if (F17[i]<= 1.465) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.887) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F2[i]<= 1.258) {
										if (F7[i]<= 1.415) {
											if (F13[i]<= 2.031) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 0.513) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 1.904) {
											if (F1[i]<= 0.329) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 0.309) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= -0.675) {
									if (F15[i]<= 0.602) {
										if (F15[i]<= 0.533) {
											if (F1[i]<= 0.265) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.512) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= 1.411) {
											if (F13[i]<= 2.371) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 0.597) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F10[i]<= -0.496) {
										if (F9[i]<= 2.182) {
											if (F7[i]<= 1.392) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 0.529) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= -1.058) {
											if (F3[i]<= -0.264) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -0.355) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F13[i]<= 2.124) {
							if (F16[i]<= 1.654) {
								if (F14[i]<= 1.194) {
									if (F8[i]<= 1.152) {
										if (F1[i]<= 0.274) {
											Class[1]++;
										} else {
											if (F9[i]<= 1.585) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.391) {
											if (F14[i]<= 0.157) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.614) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= 1.406) {
										if (F11[i]<= 0.821) {
											if (F7[i]<= 1.682) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= -0.078) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 0.63) {
											if (F5[i]<= 1.423) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 0.721) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F6[i]<= -1.718) {
									if (F2[i]<= -0.428) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								} else {
									if (F14[i]<= 1.682) {
										if (F7[i]<= 1.853) {
											if (F0[i]<= 0.004) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.777) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -0.852) {
											if (F12[i]<= 1.149) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 1.082) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F14[i]<= 2.205) {
								if (F10[i]<= -1.508) {
									if (F8[i]<= 1.71) {
										if (F5[i]<= 1.407) {
											if (F1[i]<= 0.272) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.41) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F15[i]<= 0.543) {
										if (F7[i]<= 1.589) {
											if (F1[i]<= 0.319) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -0.703) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= -0.714) {
											if (F5[i]<= -1.328) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.476) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F0[i]<= 0.035) {
									if (F5[i]<= -1.241) {
										Class[0]++;
									} else {
										if (F9[i]<= 2.668) {
											if (F2[i]<= -1.203) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 2.855) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F11[i]<= 0.427) {
										if (F5[i]<= -1.625) {
											if (F15[i]<= 0.614) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= 0.918) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 0.608) {
											if (F4[i]<= 0.743) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 0.415) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F1[i]<= 0.788) {
						if (F10[i]<= 0.319) {
							if (F13[i]<= 2.213) {
								if (F9[i]<= 2.183) {
									if (F7[i]<= 1.491) {
										if (F1[i]<= 0.567) {
											if (F9[i]<= 1.444) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.026) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 1.575) {
											if (F14[i]<= 1.142) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.579) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.674) {
										if (F1[i]<= 0.38) {
											if (F5[i]<= -1.006) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= -1.613) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= 2.053) {
											if (F2[i]<= -1.813) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								}
							} else {
								if (F7[i]<= 1.629) {
									if (F15[i]<= 0.464) {
										if (F7[i]<= 1.382) {
											if (F14[i]<= 1.814) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 0.348) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F5[i]<= -1.71) {
										if (F0[i]<= 0.706) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										if (F12[i]<= 0.974) {
											if (F5[i]<= 0.993) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 0.506) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F9[i]<= 2.295) {
								if (F16[i]<= 1.288) {
									if (F7[i]<= 1.48) {
										if (F11[i]<= 0.443) {
											if (F13[i]<= 1.298) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.202) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.788) {
											if (F1[i]<= 0.6) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.788) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= 0.621) {
										if (F10[i]<= 0.62) {
											if (F3[i]<= 1.723) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F11[i]<= 2.225) {
											if (F6[i]<= -1.694) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 0.926) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= 2.029) {
									if (F2[i]<= 1.982) {
										if (F12[i]<= 1.151) {
											if (F7[i]<= 1.761) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.137) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.999) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F10[i]<= 2.62) {
										if (F13[i]<= 1.397) {
											if (F3[i]<= -1.498) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.319) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[0]++;
									}
								}
							}
						}
					} else {
						if (F10[i]<= 0.501) {
							if (F15[i]<= 1.741) {
								if (F1[i]<= 0.862) {
									if (F11[i]<= 0.562) {
										Class[1]++;
									} else {
										if (F10[i]<= 0.203) {
											if (F2[i]<= -1.626) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= -0.975) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F0[i]<= 0.229) {
										if (F14[i]<= 1.395) {
											if (F6[i]<= -0.27) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.693) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= -1.956) {
											Class[1]++;
										} else {
											if (F8[i]<= 1.647) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F16[i]<= 1.649) {
									if (F9[i]<= 1.258) {
										if (F16[i]<= 1.31) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									} else {
										Class[1]++;
									}
								} else {
									Class[0]++;
								}
							}
						} else {
							if (F10[i]<= 1.603) {
								if (F1[i]<= 1.135) {
									if (F15[i]<= 0.586) {
										if (F17[i]<= 1.318) {
											if (F1[i]<= 0.829) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 1.487) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 0.276) {
											if (F11[i]<= 0.778) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.403) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.103) {
										if (F14[i]<= 0.877) {
											if (F2[i]<= -1.78) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 0.965) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 0.165) {
											if (F13[i]<= 0.324) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							} else {
								if (F6[i]<= 1.734) {
									if (F10[i]<= 2.159) {
										if (F17[i]<= 1.476) {
											if (F9[i]<= 0.001) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.765) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 1.264) {
											if (F7[i]<= 2.253) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.784) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= 0.739) {
										Class[0]++;
									} else {
										if (F10[i]<= 1.73) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								}
							}
						}
					}
				}
			}
		} else {
			if (F9[i]<= 2.469) {
				if (F0[i]<= 0.203) {
					if (F7[i]<= 1.502) {
						if (F5[i]<= -1.405) {
							if (F10[i]<= 0.198) {
								if (F17[i]<= 1.027) {
									if (F13[i]<= 0.479) {
										if (F2[i]<= -0.374) {
											if (F0[i]<= 0.189) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 5.982) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F9[i]<= 1.623) {
											if (F14[i]<= 2.542) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.944) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 0.572) {
										if (F0[i]<= 0.044) {
											if (F1[i]<= 2.283) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -0.917) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F14[i]<= 2.857) {
											if (F2[i]<= -1.364) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 3.004) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F11[i]<= 3.465) {
									if (F15[i]<= 1.799) {
										if (F2[i]<= -1.608) {
											if (F1[i]<= 1.975) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 2.522) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F5[i]<= -1.675) {
											if (F10[i]<= 0.983) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.576) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 0.267) {
										if (F3[i]<= -1.466) {
											Class[0]++;
										} else {
											if (F2[i]<= 1.515) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 0.559) {
											if (F1[i]<= 3.47) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 1.079) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F16[i]<= 0.933) {
								if (F9[i]<= 1.19) {
									if (F2[i]<= 1.293) {
										if (F0[i]<= 0.118) {
											if (F7[i]<= 0.997) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.101) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 0.907) {
											if (F2[i]<= 1.68) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 3.39) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F16[i]<= 0.67) {
										if (F11[i]<= 7.257) {
											if (F7[i]<= 1.103) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F5[i]<= 1.447) {
											if (F9[i]<= 1.462) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.546) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F2[i]<= 1.33) {
									if (F17[i]<= 1.129) {
										if (F12[i]<= 1.345) {
											if (F10[i]<= -0.075) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.63) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 1.118) {
											if (F16[i]<= 2.181) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.411) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.1) {
										if (F14[i]<= 2.591) {
											if (F5[i]<= -0.66) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 1.321) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -0.121) {
											if (F12[i]<= 1.37) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 1.802) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F1[i]<= 0.743) {
							if (F7[i]<= 1.644) {
								if (F1[i]<= 0.563) {
									if (F17[i]<= 1.298) {
										if (F17[i]<= 1.177) {
											if (F3[i]<= 1.264) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.291) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 2.236) {
											if (F16[i]<= 2.203) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.522) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F16[i]<= 2.354) {
										if (F10[i]<= -0.83) {
											if (F15[i]<= 1.494) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.122) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 0.732) {
											if (F16[i]<= 2.403) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.312) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F9[i]<= 2.469) {
									if (F0[i]<= 0.203) {
										if (F10[i]<= -1.601) {
											Class[0]++;
										} else {
											if (F7[i]<= 1.837) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F2[i]<= 1.015) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								}
							}
						} else {
							if (F10[i]<= -0.772) {
								if (F7[i]<= 1.611) {
									if (F12[i]<= 1.583) {
										if (F16[i]<= 1.626) {
											if (F14[i]<= 1.379) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.142) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 0.655) {
											if (F0[i]<= 0.18) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 1.595) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 0.685) {
										if (F13[i]<= 0.538) {
											if (F4[i]<= 1.825) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.102) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 0.624) {
											if (F3[i]<= -1.234) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.125) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F11[i]<= 7.884) {
									if (F10[i]<= 0.534) {
										if (F7[i]<= 1.799) {
											if (F6[i]<= -1.731) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 2.989) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 4.279) {
											if (F15[i]<= 7.501) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 0.045) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F3[i]<= 1.326) {
										if (F2[i]<= -0.667) {
											if (F5[i]<= -0.39) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 0.61) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										Class[0]++;
									}
								}
							}
						}
					}
				} else {
					if (F12[i]<= 1.412) {
						if (F10[i]<= -0.372) {
							if (F12[i]<= 1.262) {
								if (F1[i]<= 0.835) {
									if (F7[i]<= 1.527) {
										if (F14[i]<= 1.511) {
											if (F9[i]<= 1.386) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.96) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F14[i]<= 2.229) {
											if (F2[i]<= 1.19) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.875) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F5[i]<= 1.275) {
										if (F10[i]<= -0.535) {
											if (F2[i]<= -1.214) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -1.382) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -0.534) {
											if (F4[i]<= 0.921) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 1.748) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= -0.705) {
									if (F12[i]<= 1.348) {
										if (F16[i]<= 1.367) {
											if (F14[i]<= 1.203) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.646) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 1.189) {
											if (F1[i]<= 1.034) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 0.975) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 1.116) {
										if (F17[i]<= 0.388) {
											if (F10[i]<= -0.487) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.236) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -0.594) {
											if (F13[i]<= 1.393) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.069) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F0[i]<= 0.34) {
								if (F17[i]<= 1.133) {
									if (F1[i]<= 2.116) {
										if (F12[i]<= 1.255) {
											if (F7[i]<= 1.115) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.018) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 0.427) {
											if (F2[i]<= -1.442) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -1.059) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F15[i]<= 1.204) {
										if (F2[i]<= -1.467) {
											if (F10[i]<= 0.175) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.197) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 1.266) {
											if (F10[i]<= 0.526) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.108) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F12[i]<= 1.24) {
									if (F7[i]<= 1.295) {
										if (F1[i]<= 1.839) {
											if (F10[i]<= 0.021) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.334) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F8[i]<= 1.74) {
											if (F2[i]<= -1.607) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F7[i]<= 1.627) {
										if (F10[i]<= -0.205) {
											if (F15[i]<= 0.972) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.338) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 0.636) {
											Class[1]++;
										} else {
											if (F11[i]<= 1.028) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F2[i]<= -1.496) {
							if (F12[i]<= 1.492) {
								if (F7[i]<= 1.671) {
									if (F5[i]<= -1.253) {
										if (F17[i]<= 1.243) {
											if (F12[i]<= 1.429) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -2.001) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F17[i]<= 1.157) {
											if (F14[i]<= 2.574) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= 0.845) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= -1.179) {
										if (F9[i]<= 0.359) {
											if (F2[i]<= -1.646) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 0.98) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= -1.547) {
											Class[0]++;
										} else {
											if (F2[i]<= -1.545) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F1[i]<= 1.013) {
									if (F15[i]<= 1.065) {
										if (F8[i]<= -1.668) {
											Class[1]++;
										} else {
											if (F12[i]<= 1.502) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.898) {
											Class[0]++;
										} else {
											if (F9[i]<= 2.155) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 0.992) {
										if (F10[i]<= -0.381) {
											if (F16[i]<= 1.28) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -1.684) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 2.211) {
											if (F13[i]<= 1.913) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.014) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F16[i]<= 2.234) {
								if (F12[i]<= 1.69) {
									if (F16[i]<= 1.025) {
										if (F0[i]<= 0.379) {
											if (F15[i]<= 1.441) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.309) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 0.005) {
											if (F15[i]<= 1.328) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 2.556) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= -0.453) {
										if (F7[i]<= 1.801) {
											if (F14[i]<= 2.261) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 2.442) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.714) {
											if (F10[i]<= -0.054) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.695) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F0[i]<= 0.335) {
									if (F2[i]<= 1.497) {
										if (F7[i]<= 2.671) {
											if (F14[i]<= 2.511) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 4.148) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 4.287) {
											if (F5[i]<= 1.554) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F1[i]<= 0.955) {
										if (F7[i]<= 1.848) {
											if (F16[i]<= 2.363) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -1.753) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.795) {
											if (F0[i]<= 0.583) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -0.215) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				}
			} else {
				if (F9[i]<= 2.829) {
					if (F10[i]<= -0.817) {
						if (F0[i]<= 0.246) {
							if (F11[i]<= 0.639) {
								if (F5[i]<= -1.065) {
									if (F13[i]<= 1.985) {
										if (F3[i]<= 0.046) {
											if (F10[i]<= -1.081) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F14[i]<= 2.156) {
											Class[0]++;
										} else {
											if (F3[i]<= -1.068) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F9[i]<= 2.652) {
										if (F16[i]<= 2.302) {
											if (F14[i]<= 2.561) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.692) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.825) {
											if (F11[i]<= 0.638) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 1.498) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F12[i]<= 1.564) {
									if (F16[i]<= 2.095) {
										if (F4[i]<= 0.709) {
											if (F7[i]<= 1.766) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.707) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.264) {
											if (F16[i]<= 2.095) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -1.367) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= -1.681) {
										if (F6[i]<= 0.916) {
											if (F3[i]<= 1.714) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -1.207) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= 1.518) {
											if (F16[i]<= 3.756) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.365) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F12[i]<= 1.515) {
								if (F14[i]<= 2.132) {
									if (F5[i]<= -1.649) {
										if (F15[i]<= 0.761) {
											if (F4[i]<= 0.742) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 2.588) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.83) {
											if (F1[i]<= 0.687) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 2.029) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= -1.125) {
										if (F7[i]<= 1.797) {
											if (F15[i]<= 0.709) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.525) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 1.65) {
											if (F0[i]<= 0.856) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.389) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F2[i]<= 1.531) {
									if (F7[i]<= 1.91) {
										if (F11[i]<= 0.675) {
											if (F17[i]<= 1.271) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.325) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 1.415) {
											if (F7[i]<= 2.13) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.418) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F16[i]<= 2.427) {
										if (F10[i]<= -1.778) {
											if (F12[i]<= 2.819) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 2.405) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 2.957) {
											if (F4[i]<= 0.694) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.372) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F1[i]<= 0.716) {
							if (F0[i]<= 0.229) {
								if (F0[i]<= 0.228) {
									if (F7[i]<= 1.874) {
										if (F14[i]<= 2.532) {
											if (F16[i]<= 1.924) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 1.727) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F5[i]<= -1.571) {
											if (F16[i]<= 1.755) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 1.547) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									Class[1]++;
								}
							} else {
								if (F5[i]<= -1.726) {
									if (F14[i]<= 1.888) {
										Class[0]++;
									} else {
										if (F8[i]<= -0.883) {
											if (F17[i]<= 1.109) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.681) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= -0.605) {
										if (F7[i]<= 1.753) {
											if (F12[i]<= 1.191) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 1.668) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= 1.775) {
											if (F8[i]<= 1.638) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 2.045) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F9[i]<= 2.829) {
								if (F5[i]<= -1.487) {
									if (F6[i]<= 1.726) {
										if (F2[i]<= -1.303) {
											if (F7[i]<= 1.664) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.051) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F7[i]<= 1.936) {
										if (F11[i]<= 4.177) {
											if (F7[i]<= 1.936) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 1.317) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= -1.635) {
											if (F3[i]<= -0.856) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.641) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								Class[1]++;
							}
						}
					}
				} else {
					if (F14[i]<= 1.612) {
						if (F16[i]<= 5.969) {
							if (F2[i]<= 1.195) {
								if (F3[i]<= 1.735) {
									if (F14[i]<= 0.868) {
										if (F11[i]<= 3.865) {
											if (F5[i]<= 1.866) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 2.074) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 1.291) {
											if (F7[i]<= 2.472) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.001) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= -0.215) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								}
							} else {
								if (F7[i]<= 2.084) {
									if (F8[i]<= 0.877) {
										if (F1[i]<= 0.634) {
											if (F2[i]<= 1.245) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 2.064) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F6[i]<= -1.559) {
											Class[1]++;
										} else {
											if (F17[i]<= 1.139) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= -1.994) {
										Class[1]++;
									} else {
										if (F12[i]<= 5.71) {
											if (F15[i]<= 5.452) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								}
							}
						} else {
							if (F16[i]<= 5.99) {
								Class[1]++;
							} else {
								Class[0]++;
							}
						}
					} else {
						if (F12[i]<= 1.569) {
							if (F9[i]<= 3.178) {
								if (F10[i]<= -1.452) {
									if (F16[i]<= 2.121) {
										if (F9[i]<= 2.901) {
											if (F3[i]<= 1.698) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -1.742) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.529) {
											if (F7[i]<= 1.947) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.528) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F4[i]<= 0.714) {
										if (F16[i]<= 1.945) {
											if (F0[i]<= 0.001) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.781) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 0.002) {
											if (F10[i]<= -0.995) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.843) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 2.248) {
									if (F4[i]<= 0.49) {
										if (F13[i]<= 2.429) {
											if (F6[i]<= -1.662) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.702) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F1[i]<= 0.467) {
											if (F14[i]<= 3.051) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.59) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F1[i]<= 0.749) {
										if (F7[i]<= 2.599) {
											if (F10[i]<= -2.29) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.433) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[0]++;
									}
								}
							}
						} else {
							if (F13[i]<= 1.194) {
								if (F10[i]<= -1.4) {
									if (F13[i]<= 0.741) {
										if (F8[i]<= 0.284) {
											if (F9[i]<= 2.83) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.109) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= -1.404) {
											if (F9[i]<= 2.946) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.253) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F11[i]<= 1.177) {
										if (F3[i]<= 1.428) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										if (F8[i]<= -1.681) {
											if (F8[i]<= -1.689) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F3[i]<= -1.73) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F3[i]<= 1.735) {
									if (F9[i]<= 3.334) {
										if (F4[i]<= 1.041) {
											if (F16[i]<= 2.758) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -1.998) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 1.821) {
											if (F9[i]<= 3.572) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 2.342) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									Class[1]++;
								}
							}
						}
					}
				}
			}
		}

		if (F9[i]<= 1.904) {
			if (F7[i]<= 1.204) {
				if (F15[i]<= 0.739) {
					if (F15[i]<= 0.581) {
						if (F10[i]<= 0.808) {
							if (F4[i]<= 0.922) {
								if (F5[i]<= 1.198) {
									if (F11[i]<= 0.619) {
										if (F0[i]<= 0.37) {
											if (F17[i]<= 1.055) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.18) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F5[i]<= -1.208) {
											if (F0[i]<= 0.441) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 0.665) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= 0.507) {
										if (F1[i]<= 0.794) {
											if (F2[i]<= 1.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 1.031) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 0.53) {
											if (F2[i]<= 0.936) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.307) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F15[i]<= 0.529) {
									if (F11[i]<= 0.694) {
										if (F7[i]<= 0.711) {
											if (F5[i]<= -1.293) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 0.971) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F5[i]<= 1.562) {
											if (F7[i]<= 0.439) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.266) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F1[i]<= 0.716) {
										if (F5[i]<= -1.117) {
											if (F1[i]<= 0.643) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.184) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F17[i]<= 0.47) {
											if (F10[i]<= 0.527) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 0.723) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F1[i]<= 0.651) {
								if (F17[i]<= 1.295) {
									if (F7[i]<= 0.849) {
										if (F13[i]<= 0.489) {
											if (F13[i]<= 0.314) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 0.231) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 0.229) {
											if (F7[i]<= 1.079) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.014) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 0.875) {
										if (F17[i]<= 1.494) {
											if (F13[i]<= 0.676) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 1.058) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 0.448) {
											if (F12[i]<= 0.464) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 0.531) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 0.896) {
									if (F17[i]<= 0.858) {
										if (F1[i]<= 0.988) {
											if (F11[i]<= 0.729) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.896) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 0.628) {
											if (F10[i]<= 0.912) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -0.808) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F11[i]<= 0.642) {
										if (F11[i]<= 0.563) {
											if (F13[i]<= 0.848) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.761) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= -2.015) {
											Class[1]++;
										} else {
											if (F7[i]<= 0.941) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F11[i]<= 0.762) {
							if (F5[i]<= -1.325) {
								if (F7[i]<= 0.75) {
									if (F0[i]<= 0.259) {
										if (F2[i]<= -0.839) {
											if (F1[i]<= 0.826) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.294) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F17[i]<= 0.926) {
											if (F7[i]<= 0.131) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 0.579) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F10[i]<= 0.006) {
										if (F16[i]<= 1.86) {
											if (F4[i]<= 0.505) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 0.621) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 0.711) {
											if (F2[i]<= -0.632) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 0.876) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F0[i]<= 0.303) {
									if (F1[i]<= 0.749) {
										if (F10[i]<= 0.917) {
											if (F2[i]<= 1.259) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 0.658) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.844) {
											if (F7[i]<= 0.714) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 0.912) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F1[i]<= 0.813) {
										if (F7[i]<= 0.932) {
											if (F2[i]<= 1.269) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -0.222) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 1.702) {
											if (F10[i]<= 0.133) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 0.906) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F0[i]<= 0.325) {
								if (F9[i]<= 0.962) {
									if (F11[i]<= 0.84) {
										if (F10[i]<= 0.631) {
											if (F15[i]<= 0.672) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 1.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 1.027) {
											if (F7[i]<= 0.6) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.726) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 0.823) {
										if (F11[i]<= 0.808) {
											if (F1[i]<= 0.817) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.139) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 0.498) {
											if (F11[i]<= 0.797) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 0.878) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F11[i]<= 0.861) {
									if (F7[i]<= 0.743) {
										if (F15[i]<= 0.678) {
											if (F11[i]<= 0.78) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 0.735) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.114) {
											if (F12[i]<= 1.282) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.364) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 0.676) {
										if (F11[i]<= 0.947) {
											if (F11[i]<= 0.878) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.036) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 0.917) {
											if (F14[i]<= 2.255) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= 1.629) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F10[i]<= 0.838) {
						if (F1[i]<= 1.02) {
							if (F7[i]<= 0.818) {
								if (F13[i]<= 0.621) {
									if (F1[i]<= 0.801) {
										if (F10[i]<= 0.431) {
											if (F15[i]<= 1.367) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 0.547) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 1.273) {
											if (F0[i]<= 0.09) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 0.942) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.013) {
										if (F0[i]<= 0.201) {
											if (F16[i]<= 1.596) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.287) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F14[i]<= 0.365) {
											if (F1[i]<= 0.799) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 0.789) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F1[i]<= 0.778) {
									if (F10[i]<= -0.156) {
										if (F14[i]<= 2.539) {
											if (F15[i]<= 1.222) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 1.28) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 1.018) {
											if (F10[i]<= 0.058) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 0.386) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.005) {
										if (F10[i]<= -0.18) {
											if (F14[i]<= 2.299) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 1.779) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= -0.483) {
											if (F17[i]<= 0.966) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.205) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F2[i]<= -1.351) {
								if (F12[i]<= 1.166) {
									if (F16[i]<= 1.099) {
										if (F10[i]<= 0.492) {
											if (F7[i]<= 0.905) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 0.804) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= -1.57) {
											if (F1[i]<= 1.235) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.204) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 0.554) {
										if (F2[i]<= -1.573) {
											if (F17[i]<= 0.966) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 3.716) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F4[i]<= 1.238) {
											if (F16[i]<= 1.822) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 0.851) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F2[i]<= 1.247) {
									if (F14[i]<= 1.907) {
										if (F0[i]<= 0.154) {
											if (F5[i]<= -1.236) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.373) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 2.381) {
											if (F0[i]<= 0.291) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -1.358) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F0[i]<= 0.164) {
										if (F2[i]<= 1.517) {
											if (F16[i]<= 1.262) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.123) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= 1.643) {
											if (F16[i]<= 1.699) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.042) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F17[i]<= 1.279) {
							if (F0[i]<= 0.063) {
								if (F16[i]<= 0.61) {
									if (F17[i]<= 0.909) {
										if (F2[i]<= -1.071) {
											if (F10[i]<= 1.091) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.519) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 0.871) {
											if (F4[i]<= 1.313) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.567) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.069) {
										if (F15[i]<= 3.334) {
											if (F15[i]<= 2.2) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 4.99) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F13[i]<= 0.525) {
											if (F9[i]<= 0.653) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.768) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 0.945) {
									if (F15[i]<= 1.178) {
										if (F1[i]<= 1.156) {
											if (F11[i]<= 0.828) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.577) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 1.399) {
											if (F2[i]<= -0.013) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 0.565) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F11[i]<= 1.038) {
										if (F17[i]<= 1.006) {
											if (F9[i]<= 1.217) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.937) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F0[i]<= 0.153) {
											if (F12[i]<= 1.472) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.469) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F7[i]<= 0.899) {
								if (F16[i]<= 0.274) {
									if (F2[i]<= 1.09) {
										if (F12[i]<= 0.792) {
											if (F17[i]<= 1.432) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 0.775) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 0.86) {
											if (F16[i]<= 0.061) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 1.479) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.446) {
										if (F10[i]<= 1.004) {
											if (F12[i]<= 0.713) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.655) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.502) {
											if (F12[i]<= 0.793) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.006) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 1.053) {
									if (F16[i]<= 0.418) {
										if (F0[i]<= 0.17) {
											if (F14[i]<= 0.182) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= 1.527) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F5[i]<= 1.159) {
											if (F1[i]<= 0.944) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.216) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F1[i]<= 0.869) {
										if (F16[i]<= 0.818) {
											if (F0[i]<= 0.085) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.542) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 0.273) {
											if (F5[i]<= 1.106) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 1.139) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				}
			} else {
				if (F9[i]<= 1.807) {
					if (F17[i]<= 1.118) {
						if (F16[i]<= 1.232) {
							if (F7[i]<= 1.439) {
								if (F10[i]<= 0.607) {
									if (F11[i]<= 0.619) {
										if (F0[i]<= 0.713) {
											if (F7[i]<= 1.301) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.795) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= -1.176) {
											if (F12[i]<= 2.103) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 1.404) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.29) {
										if (F2[i]<= 2.018) {
											if (F10[i]<= 1.083) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 1.125) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 1.247) {
											if (F4[i]<= 3.626) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 2.685) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 1.679) {
									if (F13[i]<= 1.051) {
										if (F15[i]<= 2.171) {
											if (F11[i]<= 1.773) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.723) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F9[i]<= 1.791) {
											if (F12[i]<= 1.537) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.366) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F11[i]<= 3.999) {
										if (F10[i]<= -0.804) {
											if (F0[i]<= 0.482) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 0.001) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F8[i]<= 1.709) {
											if (F15[i]<= 7.943) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 5.466) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F15[i]<= 3.897) {
								if (F11[i]<= 0.713) {
									if (F9[i]<= 1.346) {
										if (F16[i]<= 1.929) {
											if (F13[i]<= 2.122) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.294) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.433) {
											if (F14[i]<= 2.308) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= -1.706) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F12[i]<= 1.151) {
										if (F1[i]<= 0.725) {
											if (F5[i]<= -0.695) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 2.999) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.476) {
											if (F2[i]<= -1.444) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 2.194) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F13[i]<= 0.497) {
									if (F10[i]<= -0.144) {
										if (F15[i]<= 5.932) {
											if (F5[i]<= 1.479) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.104) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 1.556) {
											if (F14[i]<= 1.408) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F8[i]<= 1.692) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F12[i]<= 2.944) {
										if (F10[i]<= -0.768) {
											if (F5[i]<= 1.321) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 2.877) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 0.436) {
											if (F11[i]<= 6.091) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.278) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F16[i]<= 0.914) {
							if (F14[i]<= 0.108) {
								if (F4[i]<= 0.771) {
									if (F13[i]<= 1.173) {
										if (F1[i]<= 0.693) {
											if (F7[i]<= 1.301) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 2.814) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 0.594) {
											if (F0[i]<= 0.289) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 0.206) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= 1.657) {
										if (F2[i]<= 1.271) {
											if (F17[i]<= 1.353) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.311) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 3.181) {
											if (F2[i]<= -1.48) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 1.716) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 1.446) {
									if (F13[i]<= 1.406) {
										if (F11[i]<= 0.747) {
											if (F2[i]<= -2.013) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.103) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 0.631) {
											if (F2[i]<= 1.04) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 0.577) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.806) {
										if (F9[i]<= 0.431) {
											if (F12[i]<= 2.571) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.529) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 1.655) {
											if (F10[i]<= 0.57) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 1.657) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F14[i]<= 0.765) {
								if (F15[i]<= 3.249) {
									if (F7[i]<= 1.504) {
										if (F4[i]<= 0.802) {
											if (F9[i]<= 1.791) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.309) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.854) {
											if (F10[i]<= -0.606) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.768) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= 1.512) {
										if (F0[i]<= 0.14) {
											if (F7[i]<= 1.493) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -2.236) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 0.542) {
											if (F14[i]<= 0.337) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.159) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 1.46) {
									if (F7[i]<= 1.317) {
										if (F2[i]<= 1.333) {
											if (F13[i]<= 1.515) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.028) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 1.566) {
											if (F5[i]<= -1.248) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.781) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= -1.498) {
										if (F7[i]<= 1.634) {
											if (F17[i]<= 1.219) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.492) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 4.343) {
											if (F11[i]<= 1.761) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.168) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F2[i]<= 1.372) {
						if (F10[i]<= -0.154) {
							if (F12[i]<= 1.327) {
								if (F7[i]<= 1.276) {
									if (F17[i]<= 1.103) {
										if (F12[i]<= 1.228) {
											if (F8[i]<= 1.645) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -1.139) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 0.784) {
											if (F5[i]<= -1.187) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 0.978) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F0[i]<= 0.437) {
										if (F10[i]<= -1.175) {
											if (F11[i]<= 1.104) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 1.196) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 1.033) {
											if (F7[i]<= 1.529) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.745) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 1.504) {
									if (F1[i]<= 1.424) {
										if (F2[i]<= -1.301) {
											if (F14[i]<= 2.797) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 2.036) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -1.16) {
											if (F2[i]<= -0.643) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 2.113) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F14[i]<= 1.089) {
										if (F2[i]<= -0.726) {
											if (F14[i]<= 0.561) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -1.227) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.685) {
											if (F2[i]<= -1.542) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.03) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F10[i]<= 0.557) {
								if (F15[i]<= 0.593) {
									if (F10[i]<= 0.263) {
										if (F2[i]<= -0.259) {
											if (F5[i]<= -1.29) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.323) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F17[i]<= 1.277) {
											if (F14[i]<= 1.868) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.486) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F0[i]<= 0.203) {
										if (F16[i]<= 1.68) {
											if (F17[i]<= 0.975) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.828) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.571) {
											if (F13[i]<= 1.216) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.623) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F15[i]<= 0.663) {
									if (F7[i]<= 1.359) {
										if (F17[i]<= 1.567) {
											if (F0[i]<= 0.042) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 1.209) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F3[i]<= 1.583) {
											if (F0[i]<= 0.003) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 0.651) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F0[i]<= 0.139) {
										if (F10[i]<= 1.597) {
											if (F7[i]<= 1.307) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 1.744) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= 1.61) {
											if (F3[i]<= 1.731) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.194) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F7[i]<= 1.415) {
							if (F12[i]<= 1.328) {
								if (F13[i]<= 1.793) {
									if (F10[i]<= -0.195) {
										if (F13[i]<= 0.863) {
											if (F0[i]<= 0.002) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -0.624) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F12[i]<= 1.101) {
											if (F13[i]<= 1.157) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F6[i]<= -1.473) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.096) {
										if (F10[i]<= -0.503) {
											if (F16[i]<= 1.81) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.856) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 1.252) {
											if (F11[i]<= 0.648) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.414) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F16[i]<= 2.063) {
									if (F10[i]<= -0.345) {
										if (F16[i]<= 1.827) {
											if (F12[i]<= 1.519) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -0.581) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 2.491) {
											if (F7[i]<= 1.219) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 1.452) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F13[i]<= 0.548) {
										Class[1]++;
									} else {
										if (F10[i]<= -0.914) {
											if (F16[i]<= 2.242) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.837) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F16[i]<= 1.223) {
								if (F1[i]<= 0.477) {
									if (F1[i]<= 0.471) {
										if (F13[i]<= 2.227) {
											if (F17[i]<= 1.473) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F5[i]<= 1.288) {
										if (F6[i]<= 1.101) {
											if (F10[i]<= -0.731) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= 1.514) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F17[i]<= 0.895) {
											if (F2[i]<= 1.437) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 3.066) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= -0.716) {
									if (F10[i]<= -1.844) {
										if (F13[i]<= 0.684) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									} else {
										if (F7[i]<= 1.679) {
											if (F8[i]<= -1.391) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -1.757) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F11[i]<= 0.527) {
										if (F13[i]<= 1.915) {
											Class[1]++;
										} else {
											if (F12[i]<= 1.097) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 2.018) {
											if (F16[i]<= 1.225) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 2.148) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		} else {
			if (F9[i]<= 2.387) {
				if (F7[i]<= 1.59) {
					if (F17[i]<= 1.127) {
						if (F17[i]<= 0.989) {
							if (F14[i]<= 2.623) {
								if (F2[i]<= -1.555) {
									if (F10[i]<= -0.475) {
										if (F2[i]<= -1.776) {
											if (F2[i]<= -1.9) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 1.177) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 2.987) {
											if (F17[i]<= 0.676) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F7[i]<= 1.374) {
										if (F2[i]<= 1.796) {
											if (F5[i]<= -1.391) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.129) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F14[i]<= 0.69) {
											if (F3[i]<= 0.128) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.262) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F12[i]<= 1.499) {
									if (F17[i]<= 0.974) {
										if (F15[i]<= 1.58) {
											if (F9[i]<= 1.978) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -1.707) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 1.013) {
											if (F17[i]<= 0.974) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 2.241) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F15[i]<= 3.837) {
										if (F15[i]<= 1.207) {
											if (F14[i]<= 2.785) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.472) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 2.094) {
											Class[1]++;
										} else {
											if (F0[i]<= 0.01) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F11[i]<= 0.697) {
								if (F9[i]<= 2.121) {
									if (F5[i]<= 1.201) {
										if (F7[i]<= 1.439) {
											if (F11[i]<= 0.576) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 2.118) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 1.787) {
											if (F4[i]<= 0.433) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 0.123) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F2[i]<= -1.539) {
										if (F16[i]<= 1.816) {
											if (F7[i]<= 1.447) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.068) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F9[i]<= 2.236) {
											if (F5[i]<= 1.229) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.099) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F12[i]<= 1.398) {
									if (F10[i]<= -0.142) {
										if (F7[i]<= 1.384) {
											if (F13[i]<= 0.814) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 1.18) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 1.744) {
											if (F7[i]<= 1.389) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 1.899) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F2[i]<= 1.76) {
										if (F7[i]<= 1.476) {
											if (F2[i]<= -1.414) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 2.683) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= 0.366) {
											if (F2[i]<= 1.776) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 2.73) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F15[i]<= 0.741) {
							if (F17[i]<= 1.254) {
								if (F14[i]<= 1.723) {
									if (F17[i]<= 1.231) {
										if (F7[i]<= 1.444) {
											if (F11[i]<= 0.634) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= 1.652) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F12[i]<= 0.935) {
											if (F2[i]<= -0.304) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.234) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F9[i]<= 2.171) {
										if (F14[i]<= 2.709) {
											if (F2[i]<= 1.321) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 1.326) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F6[i]<= -1.391) {
											if (F8[i]<= 0.788) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 1.397) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F14[i]<= 1.423) {
									if (F15[i]<= 0.59) {
										if (F7[i]<= 1.491) {
											if (F13[i]<= 1.761) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 0.451) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 0.686) {
											if (F7[i]<= 1.527) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 2.203) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F15[i]<= 0.659) {
										if (F5[i]<= -0.96) {
											if (F12[i]<= 0.829) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 0.606) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 1.484) {
											if (F5[i]<= 1.299) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 2.228) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F12[i]<= 1.42) {
								if (F5[i]<= -1.456) {
									if (F16[i]<= 1.378) {
										if (F2[i]<= -1.732) {
											if (F14[i]<= 1.255) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 1.512) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.329) {
											if (F11[i]<= 1.038) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 1.052) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F4[i]<= 1.044) {
										if (F5[i]<= 1.159) {
											if (F16[i]<= 1.506) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 1.48) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F14[i]<= 1.268) {
											if (F16[i]<= 0.99) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 1.836) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F2[i]<= 1.491) {
									if (F5[i]<= -1.245) {
										if (F14[i]<= 3.009) {
											if (F5[i]<= -1.668) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -1.252) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F16[i]<= 2.219) {
											if (F13[i]<= 0.514) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.384) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 1.51) {
										if (F2[i]<= 1.837) {
											if (F5[i]<= -0.005) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.332) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F14[i]<= 2.85) {
											if (F14[i]<= 1.673) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 1.993) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F10[i]<= -0.221) {
						if (F10[i]<= -1.84) {
							if (F11[i]<= 6.559) {
								if (F11[i]<= 1.816) {
									if (F7[i]<= 2.451) {
										if (F8[i]<= -1.589) {
											if (F12[i]<= 2.232) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.148) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 1.511) {
											if (F2[i]<= -1.717) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.471) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= 1.684) {
										if (F14[i]<= 1.54) {
											if (F11[i]<= 6.325) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 1.269) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 1.675) {
											if (F0[i]<= 0.253) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 0.972) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= -3.683) {
									Class[0]++;
								} else {
									if (F9[i]<= 1.983) {
										Class[0]++;
									} else {
										if (F17[i]<= 0.536) {
											Class[0]++;
										} else {
											if (F7[i]<= 3.607) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F5[i]<= 1.325) {
								if (F10[i]<= -1.027) {
									if (F0[i]<= 0.32) {
										if (F7[i]<= 1.773) {
											if (F12[i]<= 1.362) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -1.372) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F6[i]<= -1.726) {
											if (F7[i]<= 1.652) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 2.082) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F12[i]<= 1.112) {
										if (F7[i]<= 1.62) {
											if (F9[i]<= 2.123) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F8[i]<= -0.618) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.715) {
											if (F16[i]<= 1.904) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 5.971) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F11[i]<= 3.817) {
									if (F11[i]<= 0.638) {
										if (F9[i]<= 2.384) {
											if (F3[i]<= 0.345) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 1.005) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= -1.203) {
											if (F7[i]<= 1.822) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= -1.7) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F9[i]<= 2.044) {
										Class[0]++;
									} else {
										if (F1[i]<= 2.127) {
											if (F9[i]<= 2.234) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								}
							}
						}
					} else {
						if (F8[i]<= -1.727) {
							Class[1]++;
						} else {
							if (F1[i]<= 0.269) {
								Class[1]++;
							} else {
								if (F11[i]<= 0.694) {
									if (F1[i]<= 0.607) {
										if (F1[i]<= 0.607) {
											if (F15[i]<= 0.746) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F16[i]<= 1.193) {
											if (F11[i]<= 0.692) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.694) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F4[i]<= 14.083) {
										if (F11[i]<= 5.187) {
											if (F16[i]<= 0.889) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 0.426) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[1]++;
									}
								}
							}
						}
					}
				}
			} else {
				if (F10[i]<= -0.598) {
					if (F10[i]<= -1.542) {
						if (F2[i]<= -1.507) {
							if (F7[i]<= 2.262) {
								if (F4[i]<= 0.446) {
									if (F6[i]<= 0.368) {
										if (F5[i]<= 0.481) {
											Class[0]++;
										} else {
											if (F13[i]<= 0.933) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F11[i]<= 0.761) {
										if (F10[i]<= -1.736) {
											if (F6[i]<= -1.59) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.76) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F9[i]<= 2.938) {
											if (F16[i]<= 3.115) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 3.121) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F17[i]<= 0.75) {
									if (F4[i]<= 0.814) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								} else {
									if (F10[i]<= -1.642) {
										if (F9[i]<= 3.858) {
											if (F4[i]<= 0.462) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 1.595) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -1.637) {
											Class[1]++;
										} else {
											if (F2[i]<= -1.556) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F14[i]<= 3.128) {
								if (F10[i]<= -1.81) {
									if (F9[i]<= 3.689) {
										if (F5[i]<= 1.624) {
											if (F16[i]<= 3.354) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.264) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 2.094) {
											if (F1[i]<= 3.166) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F5[i]<= 1.297) {
										if (F5[i]<= -1.24) {
											if (F2[i]<= 0.802) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.561) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.525) {
											if (F7[i]<= 2.178) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.968) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F12[i]<= 1.641) {
									if (F13[i]<= 0.797) {
										Class[1]++;
									} else {
										if (F12[i]<= 1.64) {
											if (F6[i]<= 0.809) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F5[i]<= 1.612) {
										if (F12[i]<= 1.84) {
											if (F13[i]<= 1.994) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.213) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 5.456) {
											if (F5[i]<= 1.621) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								}
							}
						}
					} else {
						if (F15[i]<= 0.803) {
							if (F17[i]<= 1.353) {
								if (F10[i]<= -0.94) {
									if (F7[i]<= 1.844) {
										if (F14[i]<= 3.049) {
											if (F17[i]<= 1.236) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.418) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.25) {
											if (F0[i]<= 0.054) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.633) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F16[i]<= 2.002) {
										if (F12[i]<= 1.193) {
											if (F7[i]<= 1.779) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.277) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.738) {
											if (F13[i]<= 2.102) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 3.024) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F17[i]<= 1.516) {
									if (F9[i]<= 2.698) {
										if (F7[i]<= 1.71) {
											if (F2[i]<= 1.263) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 1.905) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 2.025) {
											if (F16[i]<= 1.78) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.604) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F9[i]<= 2.72) {
										if (F10[i]<= -1.254) {
											if (F12[i]<= 1.093) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.822) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 2.826) {
											if (F13[i]<= 2.553) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 0.602) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F17[i]<= 1.367) {
								if (F9[i]<= 2.704) {
									if (F12[i]<= 1.531) {
										if (F11[i]<= 1.279) {
											if (F7[i]<= 1.654) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -1.003) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 2.979) {
											if (F7[i]<= 1.739) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.65) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 2.103) {
										if (F12[i]<= 1.566) {
											if (F12[i]<= 1.566) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 2.302) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= -2.014) {
											if (F16[i]<= 2.086) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 3.232) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 1.876) {
									if (F10[i]<= -1.413) {
										if (F14[i]<= 3.187) {
											if (F1[i]<= 0.848) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= -1.082) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= -1.698) {
											if (F3[i]<= -0.68) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 1.126) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 2.042) {
										if (F11[i]<= 0.711) {
											if (F11[i]<= 0.71) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 1.761) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 1.653) {
											if (F0[i]<= 0.378) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.367) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F1[i]<= 0.779) {
						if (F7[i]<= 1.802) {
							if (F15[i]<= 1.556) {
								if (F2[i]<= -1.79) {
									if (F10[i]<= -0.226) {
										if (F5[i]<= -0.624) {
											if (F14[i]<= 0.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F17[i]<= 1.513) {
											Class[0]++;
										} else {
											if (F13[i]<= 1.474) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F1[i]<= 0.779) {
										if (F13[i]<= 2.609) {
											if (F10[i]<= -0.328) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 1.802) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[1]++;
									}
								}
							} else {
								if (F4[i]<= 0.783) {
									Class[1]++;
								} else {
									Class[0]++;
								}
							}
						} else {
							if (F7[i]<= 2.004) {
								if (F2[i]<= -1.92) {
									if (F3[i]<= -0.413) {
										if (F15[i]<= 0.884) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									} else {
										Class[0]++;
									}
								} else {
									if (F4[i]<= 0.517) {
										if (F7[i]<= 2.004) {
											if (F4[i]<= 0.517) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F11[i]<= 1.156) {
											if (F5[i]<= 1.766) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.753) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F15[i]<= 1.618) {
									if (F8[i]<= -0.237) {
										if (F3[i]<= 1.721) {
											if (F8[i]<= -0.237) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 1.12) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 2.449) {
											if (F2[i]<= 1.462) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F13[i]<= 1.705) {
										if (F8[i]<= -1.6) {
											if (F10[i]<= -0.363) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F10[i]<= 5.749) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								}
							}
						}
					} else {
						if (F17[i]<= 0.043) {
							Class[1]++;
						} else {
							if (F7[i]<= 2.004) {
								if (F17[i]<= 1.008) {
									if (F13[i]<= 0.325) {
										Class[1]++;
									} else {
										if (F1[i]<= 2.27) {
											if (F7[i]<= 1.639) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 2.271) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.008) {
										if (F13[i]<= 1.318) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									} else {
										if (F10[i]<= 1.225) {
											if (F5[i]<= -2.031) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 2.93) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= 2.658) {
									if (F7[i]<= 2.235) {
										if (F16[i]<= 2.807) {
											if (F15[i]<= 2.077) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 2.825) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 3.24) {
											if (F10[i]<= 2.658) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F3[i]<= 1.593) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F0[i]<= 0.018) {
										if (F12[i]<= 2.588) {
											Class[0]++;
										} else {
											if (F5[i]<= 1.307) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 5.426) {
											if (F6[i]<= -1.493) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 5.454) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}

		if (F14[i]<= 2.426) {
			if (F7[i]<= 1.218) {
				if (F2[i]<= 1.273) {
					if (F11[i]<= 0.749) {
						if (F1[i]<= 0.709) {
							if (F11[i]<= 0.489) {
								if (F5[i]<= -1.003) {
									if (F5[i]<= -1.364) {
										if (F2[i]<= -1.313) {
											if (F10[i]<= 1.019) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.282) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F0[i]<= 0.353) {
											if (F7[i]<= 0.703) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 0.893) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F5[i]<= 0.846) {
										if (F10[i]<= 0.733) {
											if (F0[i]<= 0.335) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.339) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 0.95) {
											if (F15[i]<= 0.24) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 1.339) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F5[i]<= -1.146) {
									if (F11[i]<= 0.594) {
										if (F4[i]<= 0.585) {
											if (F2[i]<= -1.457) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 0.861) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F15[i]<= 0.545) {
											if (F16[i]<= 0.48) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 0.396) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F1[i]<= 0.597) {
										if (F2[i]<= -1.526) {
											if (F12[i]<= 0.697) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 1.037) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F13[i]<= 0.959) {
											if (F5[i]<= 0.938) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 0.497) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F7[i]<= 0.755) {
								if (F1[i]<= 0.832) {
									if (F5[i]<= -1.022) {
										if (F5[i]<= -1.489) {
											if (F4[i]<= 0.742) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 0.62) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F1[i]<= 0.765) {
											if (F15[i]<= 0.57) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 0.587) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F2[i]<= -1.088) {
										if (F12[i]<= 1.005) {
											if (F15[i]<= 0.527) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 0.55) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F15[i]<= 0.564) {
											if (F11[i]<= 0.666) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.017) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F13[i]<= 1.031) {
									if (F13[i]<= 0.749) {
										if (F2[i]<= -1.191) {
											if (F10[i]<= 1.052) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 0.34) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 0.932) {
											if (F7[i]<= 0.958) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 1.175) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= -0.117) {
										if (F2[i]<= -1.313) {
											if (F1[i]<= 0.804) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 1.188) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 1.32) {
											if (F15[i]<= 0.559) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -0.801) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F12[i]<= 1.059) {
							if (F0[i]<= 0.169) {
								if (F10[i]<= 0.716) {
									if (F17[i]<= 0.889) {
										if (F10[i]<= 0.455) {
											if (F1[i]<= 0.949) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.061) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.869) {
											if (F2[i]<= -1.543) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.291) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.102) {
										if (F2[i]<= -1.3) {
											if (F11[i]<= 1.756) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 0.746) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= -1.202) {
											if (F7[i]<= 0.844) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 0.786) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= 0.216) {
									if (F11[i]<= 1.005) {
										if (F17[i]<= 0.888) {
											if (F0[i]<= 0.29) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.882) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 0.564) {
											if (F10[i]<= 0.006) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.467) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F15[i]<= 0.671) {
										if (F2[i]<= -1.568) {
											if (F11[i]<= 0.81) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.47) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 1.14) {
											if (F10[i]<= 0.471) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.572) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F0[i]<= 0.185) {
								if (F10[i]<= -0.108) {
									if (F17[i]<= 0.976) {
										if (F12[i]<= 1.192) {
											if (F1[i]<= 0.832) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 1.252) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F1[i]<= 0.924) {
											if (F2[i]<= -1.439) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -1.356) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.013) {
										if (F15[i]<= 2.958) {
											if (F10[i]<= 0.375) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.068) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 0.44) {
											if (F7[i]<= 1.014) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.528) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F11[i]<= 1.05) {
									if (F1[i]<= 1.042) {
										if (F10[i]<= -0.354) {
											if (F9[i]<= 1.155) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.089) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 0.881) {
											if (F2[i]<= -1.11) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 0.524) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F1[i]<= 1.521) {
										if (F17[i]<= 1.031) {
											if (F0[i]<= 0.285) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 0.259) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= -1.37) {
											if (F11[i]<= 1.244) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 1.103) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F15[i]<= 0.692) {
						if (F10[i]<= 0.915) {
							if (F11[i]<= 0.744) {
								if (F1[i]<= 0.768) {
									if (F7[i]<= 0.737) {
										if (F5[i]<= 0.647) {
											if (F5[i]<= -0.352) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 0.855) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F5[i]<= 0.973) {
											if (F13[i]<= 1.086) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 0.865) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F15[i]<= 0.549) {
										if (F17[i]<= 0.694) {
											if (F2[i]<= 1.327) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F3[i]<= 0.767) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F14[i]<= 1.948) {
											if (F2[i]<= 1.761) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 0.694) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F1[i]<= 1.029) {
									if (F2[i]<= 1.653) {
										if (F7[i]<= 0.565) {
											if (F5[i]<= 1.509) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 1.025) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 0.571) {
											if (F15[i]<= 0.605) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 0.879) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F11[i]<= 0.891) {
										if (F17[i]<= 0.498) {
											if (F11[i]<= 0.783) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.675) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F4[i]<= 0.55) {
											if (F9[i]<= 0.112) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.074) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F12[i]<= 0.405) {
								if (F1[i]<= 0.75) {
									if (F8[i]<= 0.376) {
										if (F11[i]<= 0.531) {
											if (F16[i]<= 0.273) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.397) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 0.46) {
											if (F2[i]<= 1.798) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 0.637) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F7[i]<= 0.654) {
										if (F7[i]<= 0.646) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										if (F1[i]<= 0.794) {
											if (F12[i]<= 0.396) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 0.14) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F13[i]<= 0.747) {
									if (F16[i]<= 0.553) {
										if (F7[i]<= 0.813) {
											if (F11[i]<= 0.735) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 0.329) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 0.55) {
											if (F4[i]<= 0.459) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F7[i]<= 0.904) {
										if (F13[i]<= 0.935) {
											if (F11[i]<= 0.685) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 0.839) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F14[i]<= 0.42) {
											if (F11[i]<= 0.459) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 0.953) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F16[i]<= 1.478) {
							if (F2[i]<= 1.621) {
								if (F5[i]<= -0.309) {
									if (F12[i]<= 0.948) {
										if (F10[i]<= 0.739) {
											if (F5[i]<= -1.094) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 0.763) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= -0.898) {
											if (F7[i]<= 1.092) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 0.822) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F1[i]<= 0.99) {
										if (F7[i]<= 0.935) {
											if (F7[i]<= 0.661) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.153) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 0.774) {
											if (F4[i]<= 1.143) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 0.832) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F17[i]<= 1.056) {
									if (F7[i]<= 0.787) {
										if (F12[i]<= 0.931) {
											if (F5[i]<= -0.737) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 2.223) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F17[i]<= 0.755) {
											if (F0[i]<= 0.12) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.113) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 0.903) {
										if (F1[i]<= 0.806) {
											if (F7[i]<= 0.637) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 0.912) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F9[i]<= 1.033) {
											if (F11[i]<= 0.728) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 0.81) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F12[i]<= 1.19) {
								if (F1[i]<= 0.891) {
									if (F9[i]<= 1.247) {
										if (F13[i]<= 0.5) {
											if (F14[i]<= 2.217) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 1.713) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F15[i]<= 1.243) {
											if (F16[i]<= 1.65) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 0.544) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F2[i]<= 1.497) {
										if (F12[i]<= 0.8) {
											Class[0]++;
										} else {
											if (F15[i]<= 1.654) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F13[i]<= 1.047) {
											if (F15[i]<= 1.422) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 1.749) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= -0.493) {
									if (F2[i]<= 1.665) {
										if (F1[i]<= 1.026) {
											if (F7[i]<= 0.963) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.104) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F17[i]<= 0.679) {
											if (F15[i]<= 1.541) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.236) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F11[i]<= 3.73) {
										if (F15[i]<= 0.893) {
											if (F13[i]<= 1.307) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.204) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F8[i]<= -0.949) {
											if (F8[i]<= -1.456) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 2.118) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				}
			} else {
				if (F11[i]<= 0.642) {
					if (F7[i]<= 1.568) {
						if (F9[i]<= 1.814) {
							if (F7[i]<= 1.364) {
								if (F10[i]<= 0.086) {
									if (F7[i]<= 1.276) {
										if (F9[i]<= 1.474) {
											if (F16[i]<= 0.822) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 0.456) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 0.561) {
											if (F10[i]<= -0.791) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 1.546) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F9[i]<= 1.457) {
										if (F17[i]<= 1.133) {
											if (F13[i]<= 1.129) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.159) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 0.24) {
											if (F3[i]<= -0.694) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 0.907) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F12[i]<= 0.682) {
									if (F13[i]<= 1.357) {
										if (F14[i]<= 1.395) {
											if (F7[i]<= 1.438) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.644) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F5[i]<= -1.15) {
											if (F2[i]<= -0.837) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.301) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 1.508) {
										if (F10[i]<= 0.313) {
											if (F13[i]<= 1.503) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.564) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= 0.907) {
											if (F14[i]<= 0.235) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.258) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F1[i]<= 0.576) {
								if (F13[i]<= 1.976) {
									if (F17[i]<= 1.151) {
										if (F5[i]<= -1.283) {
											if (F13[i]<= 1.723) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.034) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.363) {
											if (F16[i]<= 1.262) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -1.537) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.2) {
										if (F7[i]<= 1.382) {
											if (F4[i]<= 0.671) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -0.366) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.433) {
											if (F5[i]<= 0.656) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 2.151) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= -0.43) {
									if (F9[i]<= 2.007) {
										if (F17[i]<= 1.226) {
											if (F8[i]<= 1.004) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 2.04) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 1.457) {
											if (F2[i]<= -1.218) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -0.631) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 1.443) {
										if (F5[i]<= -1.318) {
											if (F11[i]<= 0.595) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.36) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -0.031) {
											if (F9[i]<= 2.008) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.243) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F14[i]<= 1.841) {
							if (F10[i]<= 0.222) {
								if (F10[i]<= -1.498) {
									if (F13[i]<= 2.441) {
										if (F8[i]<= -0.464) {
											if (F10[i]<= -1.57) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 2.104) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 0.952) {
											Class[1]++;
										} else {
											if (F15[i]<= 0.574) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F16[i]<= 1.658) {
										if (F12[i]<= 1.149) {
											if (F7[i]<= 1.756) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.77) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 1.742) {
											if (F11[i]<= 0.414) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.095) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= 2.013) {
									if (F17[i]<= 1.586) {
										if (F1[i]<= 0.416) {
											if (F7[i]<= 1.573) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.755) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.588) {
											if (F8[i]<= -0.109) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.743) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F10[i]<= 2.499) {
										if (F10[i]<= 2.498) {
											if (F2[i]<= 1.685) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F8[i]<= -1.712) {
											if (F2[i]<= 0.866) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.298) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F7[i]<= 1.874) {
								if (F1[i]<= 0.445) {
									if (F9[i]<= 2.183) {
										if (F15[i]<= 0.573) {
											Class[0]++;
										} else {
											if (F5[i]<= 0.248) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.713) {
											if (F16[i]<= 1.688) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 0.326) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F9[i]<= 2.339) {
										if (F10[i]<= -0.866) {
											if (F0[i]<= 0.456) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.821) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 2.527) {
											if (F17[i]<= 1.279) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -1.036) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F17[i]<= 1.428) {
									if (F9[i]<= 3.075) {
										if (F2[i]<= -1.862) {
											if (F11[i]<= 0.62) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 1.775) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 0.482) {
											if (F4[i]<= 0.481) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 0.387) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.428) {
										Class[1]++;
									} else {
										if (F10[i]<= -1.749) {
											if (F12[i]<= 1.367) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.814) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F2[i]<= 1.366) {
						if (F14[i]<= 1.175) {
							if (F7[i]<= 1.542) {
								if (F12[i]<= 0.881) {
									if (F17[i]<= 1.253) {
										if (F1[i]<= 0.641) {
											if (F10[i]<= 0.377) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.827) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.574) {
											if (F10[i]<= 0.935) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.251) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.366) {
										if (F10[i]<= -0.248) {
											if (F2[i]<= -1.463) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.021) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 1.348) {
											if (F13[i]<= 1.066) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 4.079) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 1.902) {
									if (F1[i]<= 1.861) {
										if (F13[i]<= 1.272) {
											if (F14[i]<= 0.445) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.636) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 1.892) {
											if (F11[i]<= 4.564) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 4.488) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F1[i]<= 2.586) {
										if (F12[i]<= 1.929) {
											if (F13[i]<= 1.15) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.213) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= -1.4) {
											if (F10[i]<= -1.044) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 9.74) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F1[i]<= 0.821) {
								if (F7[i]<= 1.542) {
									if (F5[i]<= 1.227) {
										if (F7[i]<= 1.379) {
											if (F0[i]<= 0.299) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.764) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 1.211) {
											if (F14[i]<= 1.778) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -0.223) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= -0.43) {
										if (F12[i]<= 1.388) {
											if (F5[i]<= -1.627) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 1.587) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= 1.856) {
											if (F8[i]<= -1.724) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.04) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F1[i]<= 1.287) {
									if (F9[i]<= 2.409) {
										if (F9[i]<= 1.635) {
											if (F17[i]<= 1.221) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.174) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -0.465) {
											if (F9[i]<= 2.786) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 2.955) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F9[i]<= 2.278) {
										if (F7[i]<= 1.651) {
											if (F16[i]<= 1.988) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 4.258) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= -1.714) {
											if (F7[i]<= 2.118) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.434) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F14[i]<= 1.068) {
							if (F9[i]<= 1.954) {
								if (F14[i]<= 0.119) {
									if (F7[i]<= 1.551) {
										if (F15[i]<= 3.091) {
											if (F0[i]<= 0.079) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 3.439) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F1[i]<= 3.879) {
											if (F10[i]<= -0.692) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.047) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F10[i]<= 0.091) {
										if (F7[i]<= 1.581) {
											if (F13[i]<= 0.571) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.617) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F6[i]<= -1.724) {
											if (F13[i]<= 0.562) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 0.766) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F12[i]<= 5.502) {
									if (F11[i]<= 5.159) {
										if (F10[i]<= 0.737) {
											if (F7[i]<= 1.905) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.389) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 4.737) {
											if (F12[i]<= 2.247) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									Class[1]++;
								}
							}
						} else {
							if (F16[i]<= 2.018) {
								if (F14[i]<= 1.862) {
									if (F17[i]<= 1.192) {
										if (F7[i]<= 1.403) {
											if (F13[i]<= 1.465) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -0.419) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 0.027) {
											if (F10[i]<= -1.275) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.514) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F1[i]<= 0.803) {
										if (F0[i]<= 0.529) {
											if (F12[i]<= 1.388) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.645) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -0.412) {
											if (F12[i]<= 1.623) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.172) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F15[i]<= 2.057) {
									if (F5[i]<= 0.006) {
										if (F16[i]<= 2.216) {
											if (F15[i]<= 1.132) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -0.007) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F14[i]<= 2.404) {
											if (F10[i]<= -0.975) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.742) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= -0.664) {
										if (F9[i]<= 2.576) {
											if (F13[i]<= 0.577) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 5.582) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F16[i]<= 2.125) {
											if (F1[i]<= 2.73) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							}
						}
					}
				}
			}
		} else {
			if (F1[i]<= 0.843) {
				if (F9[i]<= 2.604) {
					if (F7[i]<= 1.584) {
						if (F1[i]<= 0.651) {
							if (F12[i]<= 1.278) {
								if (F4[i]<= 0.82) {
									if (F9[i]<= 1.379) {
										if (F7[i]<= 1.407) {
											if (F17[i]<= 1.392) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -1.139) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.532) {
											if (F5[i]<= -1.591) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.453) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.167) {
										if (F7[i]<= 1.302) {
											if (F9[i]<= 1.268) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.791) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F13[i]<= 1.061) {
											if (F14[i]<= 2.433) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 2.013) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F2[i]<= 1.037) {
									if (F4[i]<= 0.807) {
										if (F12[i]<= 1.385) {
											if (F10[i]<= -1.021) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.999) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= -1.515) {
											if (F5[i]<= -0.904) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 1.411) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F12[i]<= 1.38) {
										if (F14[i]<= 2.821) {
											if (F14[i]<= 2.509) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.234) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F17[i]<= 1.315) {
											if (F4[i]<= 0.985) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 0.29) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F12[i]<= 1.414) {
								if (F17[i]<= 1.131) {
									if (F14[i]<= 2.692) {
										if (F10[i]<= -0.531) {
											if (F2[i]<= 0.944) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 1.146) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 1.146) {
											if (F9[i]<= 1.317) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 2.212) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F16[i]<= 2.111) {
										if (F13[i]<= 0.944) {
											if (F1[i]<= 0.695) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 1.307) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F15[i]<= 1.081) {
											if (F9[i]<= 1.986) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= -1.585) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F16[i]<= 2.21) {
									if (F10[i]<= -0.882) {
										if (F5[i]<= -1.318) {
											if (F5[i]<= -1.646) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 0.702) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.163) {
											if (F5[i]<= -1.946) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 1.232) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 1.281) {
										if (F15[i]<= 1.735) {
											if (F6[i]<= 1.49) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.019) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F9[i]<= 1.768) {
											if (F9[i]<= 1.768) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 2.297) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F7[i]<= 1.735) {
							if (F13[i]<= 2.331) {
								if (F12[i]<= 1.519) {
									if (F10[i]<= -0.981) {
										if (F9[i]<= 2.381) {
											if (F11[i]<= 1.189) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.248) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 0.835) {
											if (F1[i]<= 0.743) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 2.205) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F15[i]<= 1.192) {
										if (F12[i]<= 1.598) {
											if (F16[i]<= 2.352) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.049) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.297) {
											if (F11[i]<= 1.161) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 0.889) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F2[i]<= -1.545) {
									if (F0[i]<= 0.094) {
										if (F10[i]<= -1.229) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									} else {
										if (F11[i]<= 0.426) {
											if (F14[i]<= 2.642) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 2.962) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F5[i]<= 1.62) {
										if (F12[i]<= 1.413) {
											if (F5[i]<= -1.051) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 1.429) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -1.383) {
											if (F0[i]<= 0.447) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.93) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F17[i]<= 1.588) {
								if (F9[i]<= 2.588) {
									if (F15[i]<= 2.245) {
										if (F12[i]<= 1.113) {
											Class[1]++;
										} else {
											if (F17[i]<= 1.521) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 2.582) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F16[i]<= 1.939) {
										if (F3[i]<= 0.588) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									} else {
										if (F13[i]<= 2.666) {
											if (F17[i]<= 1.549) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								}
							} else {
								if (F5[i]<= 0.348) {
									if (F16[i]<= 2.247) {
										if (F5[i]<= -1.287) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									} else {
										Class[0]++;
									}
								} else {
									if (F5[i]<= 1.117) {
										if (F9[i]<= 1.459) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										Class[0]++;
									}
								}
							}
						}
					}
				} else {
					if (F15[i]<= 0.787) {
						if (F10[i]<= -1.026) {
							if (F2[i]<= 1.54) {
								if (F5[i]<= -1.24) {
									if (F11[i]<= 0.357) {
										if (F3[i]<= 1.447) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										if (F3[i]<= -0.325) {
											if (F10[i]<= -1.568) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 2.746) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= -1.66) {
										if (F9[i]<= 3.352) {
											if (F0[i]<= 0.08) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -1.718) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 1.4) {
											if (F10[i]<= -1.356) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.401) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F13[i]<= 2.639) {
									if (F7[i]<= 1.865) {
										if (F0[i]<= 0.874) {
											if (F13[i]<= 2.255) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F17[i]<= 1.362) {
											if (F6[i]<= 0.285) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 2.108) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F9[i]<= 3.123) {
										if (F5[i]<= 1.621) {
											if (F2[i]<= 1.564) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F4[i]<= 0.447) {
											if (F1[i]<= 0.384) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							}
						} else {
							if (F3[i]<= 1.732) {
								if (F9[i]<= 2.974) {
									if (F13[i]<= 2.08) {
										if (F10[i]<= -0.815) {
											if (F17[i]<= 1.27) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.155) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.746) {
											if (F16[i]<= 2.195) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F3[i]<= -1.416) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= -1.021) {
										Class[1]++;
									} else {
										if (F9[i]<= 3.32) {
											if (F0[i]<= 0.368) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							} else {
								Class[1]++;
							}
						}
					} else {
						if (F17[i]<= 1.372) {
							if (F16[i]<= 2.413) {
								if (F9[i]<= 2.85) {
									if (F15[i]<= 1.18) {
										if (F5[i]<= 1.711) {
											if (F4[i]<= 0.905) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.775) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.305) {
											if (F12[i]<= 1.407) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 2.647) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F6[i]<= -1.732) {
										if (F17[i]<= 1.234) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										if (F8[i]<= -1.598) {
											if (F4[i]<= 0.485) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 2.116) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F9[i]<= 2.924) {
									if (F9[i]<= 2.923) {
										if (F0[i]<= 0.485) {
											if (F3[i]<= 0.496) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -1.294) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F12[i]<= 1.431) {
										if (F7[i]<= 2.451) {
											if (F12[i]<= 1.43) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F6[i]<= -0.669) {
											if (F5[i]<= -2.006) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 3.161) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F12[i]<= 1.568) {
								if (F9[i]<= 2.896) {
									if (F11[i]<= 0.582) {
										if (F3[i]<= 1.462) {
											if (F5[i]<= -1.658) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.674) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.941) {
											if (F16[i]<= 2.2) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 2.495) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 2.118) {
										if (F5[i]<= -1.238) {
											if (F12[i]<= 1.553) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.178) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= -1.838) {
											if (F0[i]<= 0.298) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 2.47) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= -1.847) {
									if (F1[i]<= 0.841) {
										if (F13[i]<= 1.115) {
											if (F0[i]<= 0.116) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 2.313) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= 1.373) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F2[i]<= -1.663) {
										if (F16[i]<= 2.363) {
											Class[1]++;
										} else {
											if (F1[i]<= 0.777) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 2.717) {
											if (F5[i]<= 1.342) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.012) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				}
			} else {
				if (F9[i]<= 2.472) {
					if (F16[i]<= 2.146) {
						if (F17[i]<= 1.088) {
							if (F12[i]<= 1.406) {
								if (F15[i]<= 1.197) {
									if (F10[i]<= -0.235) {
										if (F9[i]<= 1.045) {
											if (F11[i]<= 0.825) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.997) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 0.589) {
											if (F7[i]<= 0.928) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 0.861) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.286) {
										if (F15[i]<= 2.238) {
											if (F10[i]<= -0.258) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.008) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= -1.812) {
											if (F2[i]<= -1.824) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 0.863) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F0[i]<= 0.321) {
									if (F5[i]<= -1.316) {
										if (F2[i]<= -1.876) {
											if (F7[i]<= 1.137) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 2.001) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -0.301) {
											if (F0[i]<= 0.11) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 4.719) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F8[i]<= 1.726) {
										if (F2[i]<= 1.711) {
											if (F1[i]<= 1.591) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.364) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 1.064) {
											if (F0[i]<= 0.742) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 1.557) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F10[i]<= -1.292) {
								if (F13[i]<= 0.903) {
									if (F13[i]<= 0.874) {
										if (F13[i]<= 0.675) {
											if (F0[i]<= 0.064) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 2.127) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F10[i]<= -1.33) {
										if (F8[i]<= -0.696) {
											if (F3[i]<= 1.049) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -1.548) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 1.389) {
											if (F12[i]<= 1.762) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= -1.637) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F12[i]<= 1.495) {
									if (F13[i]<= 1.036) {
										if (F11[i]<= 1.634) {
											if (F5[i]<= -1.649) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 2.619) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 2.578) {
											if (F10[i]<= -0.695) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.578) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F1[i]<= 1.15) {
										if (F13[i]<= 0.75) {
											if (F7[i]<= 1.534) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 2.832) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 0.811) {
											if (F4[i]<= 2.732) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.723) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F0[i]<= 0.318) {
							if (F11[i]<= 3.699) {
								if (F14[i]<= 2.977) {
									if (F10[i]<= -0.967) {
										if (F1[i]<= 1.279) {
											if (F13[i]<= 1.135) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 2.232) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.042) {
											if (F15[i]<= 1.851) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.446) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= 1.658) {
										if (F9[i]<= 1.043) {
											if (F10[i]<= -1.001) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.457) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 1.711) {
											if (F9[i]<= 1.319) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 1.65) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F12[i]<= 3.275) {
									if (F7[i]<= 1.132) {
										if (F1[i]<= 3.682) {
											if (F12[i]<= 1.431) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 4.77) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 5.246) {
											if (F15[i]<= 3.876) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 0.505) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F3[i]<= 0.055) {
										if (F11[i]<= 10.059) {
											if (F4[i]<= 3.239) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F7[i]<= 2.257) {
											if (F9[i]<= 2.346) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 5.298) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F17[i]<= 1.04) {
								if (F1[i]<= 1.214) {
									if (F16[i]<= 2.246) {
										if (F9[i]<= 1.204) {
											if (F9[i]<= 1.199) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 1.022) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 0.838) {
											if (F9[i]<= 0.414) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.608) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F3[i]<= 1.727) {
										if (F16[i]<= 2.156) {
											if (F8[i]<= -1.471) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.425) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F8[i]<= -0.2) {
											Class[0]++;
										} else {
											if (F13[i]<= 1.332) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= -1.402) {
									if (F2[i]<= -1.918) {
										if (F7[i]<= 1.967) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									} else {
										if (F7[i]<= 1.822) {
											if (F0[i]<= 0.325) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 2.491) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F14[i]<= 2.968) {
										if (F1[i]<= 0.934) {
											if (F12[i]<= 1.463) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.581) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 0.753) {
											if (F8[i]<= -0.799) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.04) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F16[i]<= 2.405) {
						if (F2[i]<= 1.368) {
							if (F9[i]<= 2.757) {
								if (F12[i]<= 1.928) {
									if (F17[i]<= 1.228) {
										if (F17[i]<= 1.059) {
											if (F11[i]<= 0.669) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.06) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= -1.256) {
											if (F17[i]<= 1.451) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 1.536) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F16[i]<= 2.405) {
										if (F2[i]<= -1.891) {
											if (F0[i]<= 0.655) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.303) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 1.186) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								}
							} else {
								if (F5[i]<= 1.606) {
									if (F2[i]<= -1.775) {
										if (F12[i]<= 1.683) {
											Class[0]++;
										} else {
											if (F9[i]<= 3.004) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -1.148) {
											if (F12[i]<= 1.69) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.9) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F6[i]<= 1.038) {
										if (F16[i]<= 2.346) {
											if (F12[i]<= 1.985) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 1.682) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= -1.31) {
											if (F5[i]<= 1.642) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							}
						} else {
							if (F1[i]<= 1.304) {
								if (F10[i]<= -1.155) {
									if (F5[i]<= 0.556) {
										if (F13[i]<= 1.157) {
											if (F17[i]<= 1.589) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 2.296) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 2.046) {
											if (F2[i]<= 1.402) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.991) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= 1.17) {
										if (F13[i]<= 1.299) {
											if (F16[i]<= 1.979) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F10[i]<= -0.547) {
											if (F4[i]<= 0.75) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							} else {
								if (F8[i]<= -1.714) {
									Class[1]++;
								} else {
									if (F15[i]<= 1.449) {
										if (F17[i]<= 1.581) {
											if (F6[i]<= 0.891) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F3[i]<= 1.656) {
											if (F2[i]<= 1.369) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								}
							}
						}
					} else {
						if (F9[i]<= 3.119) {
							if (F13[i]<= 0.936) {
								if (F10[i]<= -1.262) {
									if (F0[i]<= 0.007) {
										if (F6[i]<= -0.009) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										if (F13[i]<= 0.935) {
											if (F11[i]<= 2.972) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 2.221) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 0.546) {
										if (F2[i]<= -0.803) {
											if (F12[i]<= 1.944) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F2[i]<= -1.665) {
											if (F3[i]<= 0.333) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.661) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F9[i]<= 3.118) {
									if (F6[i]<= -1.728) {
										if (F14[i]<= 2.96) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									} else {
										if (F16[i]<= 2.561) {
											if (F7[i]<= 1.992) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.224) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= -1.677) {
										Class[1]++;
									} else {
										Class[0]++;
									}
								}
							}
						} else {
							if (F15[i]<= 6.469) {
								if (F2[i]<= 1.852) {
									if (F14[i]<= 3.121) {
										if (F14[i]<= 3.121) {
											if (F10[i]<= -1.492) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F13[i]<= 1.099) {
											if (F2[i]<= 1.483) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.85) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F16[i]<= 2.417) {
										Class[1]++;
									} else {
										if (F14[i]<= 2.889) {
											if (F13[i]<= 1.795) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							} else {
								if (F10[i]<= -6.776) {
									Class[0]++;
								} else {
									Class[1]++;
								}
							}
						}
					}
				}
			}
		}

		if (F7[i]<= 1.204) {
			if (F12[i]<= 1.08) {
				if (F1[i]<= 0.85) {
					if (F12[i]<= 0.721) {
						if (F5[i]<= -1.294) {
							if (F2[i]<= -0.832) {
								if (F1[i]<= 0.628) {
									if (F2[i]<= -1.413) {
										if (F7[i]<= 0.807) {
											if (F15[i]<= 0.114) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 0.876) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 0.836) {
											if (F11[i]<= 0.425) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.061) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F10[i]<= 0.935) {
										if (F2[i]<= -1.362) {
											if (F15[i]<= 0.501) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 0.832) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F14[i]<= 0.039) {
											if (F17[i]<= 1.148) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 0.602) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 0.782) {
									if (F10[i]<= 0.549) {
										if (F16[i]<= 0.496) {
											if (F5[i]<= -1.601) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 0.312) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F1[i]<= 0.618) {
											if (F12[i]<= 0.265) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 0.662) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F10[i]<= 0.312) {
										if (F17[i]<= 0.992) {
											if (F1[i]<= 0.388) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 0.248) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= 1.331) {
											if (F14[i]<= 0.738) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.742) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F10[i]<= 0.801) {
								if (F1[i]<= 0.619) {
									if (F1[i]<= 0.516) {
										if (F11[i]<= 0.521) {
											if (F7[i]<= 0.839) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 0.49) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 1.23) {
											if (F7[i]<= 0.702) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 1.526) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F2[i]<= 1.272) {
										if (F7[i]<= 0.668) {
											if (F2[i]<= -1.293) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 0.661) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 1.096) {
											if (F2[i]<= 1.555) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.194) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F13[i]<= 0.683) {
									if (F12[i]<= 0.428) {
										if (F7[i]<= 0.746) {
											if (F1[i]<= 0.632) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.54) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.317) {
											if (F14[i]<= 0.521) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 1.833) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F7[i]<= 0.864) {
										if (F1[i]<= 0.605) {
											if (F17[i]<= 1.317) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 0.809) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F17[i]<= 1.228) {
											if (F13[i]<= 0.984) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.618) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F1[i]<= 0.624) {
							if (F16[i]<= 0.83) {
								if (F10[i]<= 0.269) {
									if (F0[i]<= 0.263) {
										if (F7[i]<= 0.831) {
											if (F15[i]<= 1.145) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 0.542) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F14[i]<= 0.623) {
											if (F7[i]<= 1.013) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 0.856) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F12[i]<= 0.834) {
										if (F7[i]<= 0.976) {
											if (F10[i]<= 0.27) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.028) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F15[i]<= 0.785) {
											if (F6[i]<= -1.67) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -0.406) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F15[i]<= 0.544) {
									if (F17[i]<= 1.193) {
										if (F10[i]<= 0.006) {
											if (F11[i]<= 0.522) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 1.431) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F5[i]<= -1.285) {
											if (F2[i]<= -1.006) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 0.833) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F14[i]<= 0.829) {
										if (F15[i]<= 1.135) {
											if (F7[i]<= 1.007) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F6[i]<= 0.106) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= 1.457) {
											if (F9[i]<= 0.669) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 0.639) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F2[i]<= 1.309) {
								if (F7[i]<= 0.997) {
									if (F2[i]<= -1.126) {
										if (F10[i]<= 0.086) {
											if (F16[i]<= 1.482) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 1.067) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= -0.014) {
											if (F0[i]<= 0.237) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 1.187) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F12[i]<= 0.941) {
										if (F10[i]<= 0.262) {
											if (F7[i]<= 1.08) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 0.915) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= -0.198) {
											if (F2[i]<= -1.51) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 1.196) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F2[i]<= 1.662) {
									if (F7[i]<= 1.018) {
										if (F1[i]<= 0.752) {
											if (F9[i]<= 0.485) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.093) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F16[i]<= 0.943) {
											if (F12[i]<= 0.975) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 0.706) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F14[i]<= 0.247) {
										if (F2[i]<= 2.081) {
											if (F14[i]<= 0.24) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 0.123) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= 1.215) {
											if (F13[i]<= 0.452) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 2.177) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F0[i]<= 0.132) {
						if (F10[i]<= 0.732) {
							if (F17[i]<= 0.953) {
								if (F0[i]<= 0.048) {
									if (F7[i]<= 0.35) {
										if (F12[i]<= 0.718) {
											if (F1[i]<= 1.212) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 0.243) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 2.136) {
											if (F5[i]<= 1.354) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 0.457) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F2[i]<= -1.338) {
										if (F2[i]<= -1.602) {
											if (F7[i]<= 0.614) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 1.177) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F4[i]<= 1.695) {
											if (F7[i]<= 0.764) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.577) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F13[i]<= 0.467) {
									if (F15[i]<= 2.714) {
										if (F13[i]<= 0.368) {
											if (F9[i]<= 0.397) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 1.246) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= 0.01) {
											if (F7[i]<= 0.928) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 0.229) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F7[i]<= 0.889) {
										if (F1[i]<= 1.07) {
											if (F15[i]<= 0.782) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 0.658) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= -0.108) {
											if (F13[i]<= 0.664) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.227) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F14[i]<= 0.679) {
								if (F2[i]<= 1.248) {
									if (F7[i]<= 0.789) {
										if (F10[i]<= 0.9) {
											if (F2[i]<= -1.28) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.293) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 1.105) {
											if (F16[i]<= 0.333) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.676) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= 1.064) {
										if (F17[i]<= 1.108) {
											if (F13[i]<= 0.436) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 2.211) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F15[i]<= 2.965) {
											if (F13[i]<= 0.702) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.211) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F17[i]<= 0.779) {
									if (F15[i]<= 3.169) {
										if (F10[i]<= 0.862) {
											if (F11[i]<= 0.693) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.714) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F8[i]<= -1.207) {
											Class[0]++;
										} else {
											if (F7[i]<= 0.853) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.0) {
										if (F7[i]<= 0.889) {
											if (F15[i]<= 0.542) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.075) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 0.951) {
											if (F2[i]<= 0.624) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 2.153) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F0[i]<= 0.293) {
							if (F14[i]<= 0.0) {
								if (F10[i]<= 0.531) {
									if (F1[i]<= 1.105) {
										if (F0[i]<= 0.207) {
											if (F9[i]<= 0.737) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.108) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= -1.324) {
											if (F2[i]<= -1.117) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.189) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F11[i]<= 1.075) {
										if (F10[i]<= 0.765) {
											if (F1[i]<= 0.996) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.004) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 1.183) {
											if (F5[i]<= 1.493) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 0.856) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F17[i]<= 0.837) {
									if (F11[i]<= 1.077) {
										if (F10[i]<= 0.266) {
											if (F5[i]<= 1.256) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 0.866) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 1.442) {
											if (F7[i]<= 0.816) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 0.641) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= -1.266) {
										if (F5[i]<= -1.496) {
											if (F2[i]<= -1.282) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.087) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 0.208) {
											if (F1[i]<= 0.958) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 0.882) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F1[i]<= 1.155) {
								if (F1[i]<= 0.998) {
									if (F10[i]<= 0.131) {
										if (F16[i]<= 1.515) {
											if (F2[i]<= 1.126) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.836) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F16[i]<= 0.757) {
											if (F2[i]<= -1.151) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.377) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 1.191) {
										if (F7[i]<= 0.896) {
											if (F2[i]<= -1.121) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.078) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.493) {
											if (F12[i]<= 0.631) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 0.994) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F13[i]<= 0.722) {
									if (F2[i]<= 1.42) {
										if (F13[i]<= 0.58) {
											if (F2[i]<= -1.016) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 1.081) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 0.356) {
											if (F1[i]<= 1.39) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 0.867) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 1.558) {
										if (F10[i]<= 0.065) {
											if (F14[i]<= 1.45) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.542) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 0.877) {
											if (F0[i]<= 0.408) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.157) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					}
				}
			} else {
				if (F2[i]<= -1.311) {
					if (F15[i]<= 0.77) {
						if (F9[i]<= 1.395) {
							if (F7[i]<= 0.751) {
								if (F2[i]<= -1.912) {
									Class[1]++;
								} else {
									if (F0[i]<= 0.096) {
										Class[1]++;
									} else {
										if (F5[i]<= -1.856) {
											Class[1]++;
										} else {
											if (F15[i]<= 0.617) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= -0.357) {
									if (F11[i]<= 0.779) {
										if (F5[i]<= -1.425) {
											if (F11[i]<= 0.718) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 1.712) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F13[i]<= 1.282) {
											if (F5[i]<= -0.558) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.102) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F12[i]<= 1.085) {
										Class[1]++;
									} else {
										if (F5[i]<= -1.57) {
											if (F14[i]<= 1.478) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.788) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F11[i]<= 0.714) {
								if (F16[i]<= 1.867) {
									if (F1[i]<= 0.786) {
										if (F4[i]<= 0.558) {
											if (F4[i]<= 0.557) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.324) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.787) {
											if (F16[i]<= 1.423) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.058) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F11[i]<= 0.554) {
										if (F14[i]<= 2.653) {
											if (F14[i]<= 2.512) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F10[i]<= -0.684) {
											if (F8[i]<= 1.488) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= -1.282) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F11[i]<= 0.766) {
									if (F13[i]<= 1.595) {
										if (F2[i]<= -1.324) {
											if (F15[i]<= 0.722) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F1[i]<= 1.049) {
											if (F14[i]<= 2.989) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F6[i]<= -0.023) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F14[i]<= 2.137) {
										if (F14[i]<= 1.997) {
											if (F9[i]<= 1.402) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= 0.068) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 0.482) {
											if (F4[i]<= 1.013) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.73) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F14[i]<= 2.527) {
							if (F17[i]<= 0.952) {
								if (F5[i]<= 0.464) {
									if (F4[i]<= 3.473) {
										if (F2[i]<= -1.669) {
											if (F16[i]<= 1.739) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.232) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 4.922) {
											if (F16[i]<= 0.602) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 0.341) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F4[i]<= 0.877) {
										if (F0[i]<= 0.114) {
											if (F10[i]<= -0.572) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 0.531) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= 1.386) {
											if (F16[i]<= 1.874) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 1.827) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= -0.115) {
									if (F13[i]<= 0.541) {
										if (F13[i]<= 0.354) {
											if (F9[i]<= 0.393) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.983) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= -1.615) {
											if (F0[i]<= 0.152) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.221) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F5[i]<= -1.343) {
										if (F11[i]<= 1.308) {
											if (F3[i]<= 0.471) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.61) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F4[i]<= 2.663) {
											if (F7[i]<= 0.94) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.948) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F0[i]<= 0.191) {
								if (F10[i]<= -0.761) {
									if (F12[i]<= 1.311) {
										if (F5[i]<= 1.014) {
											if (F7[i]<= 1.178) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F1[i]<= 0.704) {
											if (F13[i]<= 0.656) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.446) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F4[i]<= 1.109) {
										if (F9[i]<= 1.117) {
											if (F3[i]<= -1.283) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.071) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 1.432) {
											if (F2[i]<= -2.005) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 3.165) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F0[i]<= 0.309) {
									if (F15[i]<= 0.906) {
										if (F2[i]<= -1.901) {
											if (F8[i]<= 0.184) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F3[i]<= 0.05) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F17[i]<= 0.03) {
											Class[1]++;
										} else {
											if (F2[i]<= -1.652) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.425) {
										if (F3[i]<= -1.727) {
											Class[1]++;
										} else {
											if (F9[i]<= 0.269) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[1]++;
									}
								}
							}
						}
					}
				} else {
					if (F10[i]<= -0.362) {
						if (F17[i]<= 0.906) {
							if (F1[i]<= 1.129) {
								if (F9[i]<= 1.505) {
									if (F2[i]<= 1.073) {
										if (F16[i]<= 1.8) {
											if (F0[i]<= 0.311) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 1.237) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.957) {
											if (F5[i]<= 1.223) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 0.689) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F11[i]<= 0.645) {
										if (F5[i]<= 0.965) {
											if (F5[i]<= -1.226) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 1.516) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 2.402) {
											if (F5[i]<= 1.363) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 0.78) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F0[i]<= 0.221) {
									if (F5[i]<= 1.613) {
										if (F14[i]<= 2.155) {
											if (F12[i]<= 1.44) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.585) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 3.075) {
											if (F0[i]<= 0.069) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 2.01) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F7[i]<= 0.998) {
										if (F5[i]<= 1.081) {
											if (F1[i]<= 1.447) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.668) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 2.27) {
											if (F4[i]<= 0.937) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 0.684) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F9[i]<= 1.122) {
								if (F16[i]<= 0.886) {
									if (F5[i]<= 1.053) {
										if (F2[i]<= 0.938) {
											if (F0[i]<= 0.195) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.783) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F4[i]<= 1.375) {
											if (F2[i]<= 1.287) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 1.4) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F13[i]<= 0.564) {
										if (F2[i]<= 0.983) {
											if (F12[i]<= 1.443) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 0.933) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F12[i]<= 1.33) {
											if (F1[i]<= 0.806) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.811) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F1[i]<= 0.897) {
									if (F16[i]<= 1.977) {
										if (F17[i]<= 1.105) {
											if (F13[i]<= 0.816) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 1.214) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F1[i]<= 0.584) {
											if (F17[i]<= 1.117) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 2.062) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 1.218) {
										if (F16[i]<= 1.841) {
											if (F1[i]<= 1.157) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 2.407) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.066) {
											if (F14[i]<= 2.152) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 2.507) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F10[i]<= 0.017) {
							if (F0[i]<= 0.185) {
								if (F2[i]<= 1.308) {
									if (F0[i]<= 0.107) {
										if (F16[i]<= 1.38) {
											if (F7[i]<= 0.952) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.382) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= -1.088) {
											if (F5[i]<= -1.206) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.998) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F11[i]<= 2.247) {
										if (F17[i]<= 0.93) {
											if (F5[i]<= 1.723) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 1.331) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.734) {
											if (F16[i]<= 1.096) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 3.653) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F2[i]<= 1.324) {
									if (F16[i]<= 1.588) {
										if (F11[i]<= 1.676) {
											if (F4[i]<= 0.744) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.238) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 0.282) {
											if (F15[i]<= 0.794) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.219) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F16[i]<= 1.661) {
										if (F0[i]<= 0.25) {
											if (F11[i]<= 1.201) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 0.991) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 2.458) {
											if (F4[i]<= 1.265) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 2.086) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F0[i]<= 0.099) {
								if (F7[i]<= 0.863) {
									if (F17[i]<= 1.056) {
										if (F13[i]<= 0.348) {
											if (F15[i]<= 5.28) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 0.548) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 0.389) {
											if (F4[i]<= 5.064) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 1.113) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F15[i]<= 2.595) {
										if (F10[i]<= 0.598) {
											if (F5[i]<= 1.406) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 1.186) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= 1.317) {
											if (F13[i]<= 0.393) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 0.818) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F2[i]<= 1.64) {
									if (F1[i]<= 1.722) {
										if (F5[i]<= 1.226) {
											if (F13[i]<= 0.739) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 0.956) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 0.19) {
											if (F7[i]<= 0.864) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 0.776) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 0.812) {
										if (F17[i]<= 0.83) {
											if (F9[i]<= 0.701) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 0.723) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F17[i]<= 1.059) {
											if (F11[i]<= 3.372) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 1.29) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		} else {
			if (F1[i]<= 0.767) {
				if (F14[i]<= 1.388) {
					if (F10[i]<= 0.784) {
						if (F10[i]<= -1.21) {
							if (F11[i]<= 1.327) {
								if (F9[i]<= 2.679) {
									if (F12[i]<= 1.265) {
										if (F13[i]<= 2.197) {
											if (F9[i]<= 1.677) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.585) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 0.848) {
											if (F6[i]<= -1.425) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -1.913) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F11[i]<= 0.297) {
										if (F11[i]<= 0.293) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										if (F14[i]<= 1.189) {
											if (F9[i]<= 2.731) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -1.256) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F12[i]<= 1.174) {
									Class[1]++;
								} else {
									if (F11[i]<= 1.343) {
										Class[1]++;
									} else {
										if (F16[i]<= 2.491) {
											Class[0]++;
										} else {
											if (F16[i]<= 2.633) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F12[i]<= 1.134) {
								if (F14[i]<= 0.75) {
									if (F12[i]<= 0.818) {
										if (F1[i]<= 0.547) {
											if (F1[i]<= 0.34) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.908) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 1.061) {
											if (F13[i]<= 1.909) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.555) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= -0.049) {
										if (F15[i]<= 0.583) {
											if (F0[i]<= 0.661) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.525) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F12[i]<= 0.94) {
											if (F7[i]<= 1.362) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.557) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 1.582) {
									if (F2[i]<= 1.592) {
										if (F13[i]<= 1.819) {
											if (F2[i]<= -0.842) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.423) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.416) {
											if (F7[i]<= 1.33) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -1.145) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F12[i]<= 1.317) {
										if (F12[i]<= 1.316) {
											if (F10[i]<= -1.186) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F1[i]<= 0.672) {
											Class[0]++;
										} else {
											if (F1[i]<= 0.673) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F7[i]<= 1.525) {
							if (F15[i]<= 0.366) {
								if (F13[i]<= 1.311) {
									if (F11[i]<= 0.407) {
										if (F12[i]<= 0.07) {
											Class[1]++;
										} else {
											if (F7[i]<= 1.35) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.159) {
											if (F10[i]<= 1.119) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.187) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= -1.519) {
										Class[1]++;
									} else {
										if (F14[i]<= 0.777) {
											if (F3[i]<= 0.065) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.424) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F4[i]<= 0.664) {
									if (F11[i]<= 0.443) {
										if (F17[i]<= 1.511) {
											if (F14[i]<= 0.166) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.369) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.281) {
											if (F11[i]<= 0.452) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 0.632) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 1.017) {
										if (F7[i]<= 1.401) {
											if (F12[i]<= 0.78) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.478) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.27) {
											if (F15[i]<= 0.457) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -0.865) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F10[i]<= 2.168) {
								if (F15[i]<= 2.538) {
									if (F7[i]<= 1.787) {
										if (F13[i]<= 1.547) {
											if (F9[i]<= 1.632) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 0.173) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 0.495) {
											if (F7[i]<= 5.501) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -2.053) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F9[i]<= 0.295) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								}
							} else {
								if (F16[i]<= 3.709) {
									if (F8[i]<= -1.712) {
										if (F2[i]<= 0.947) {
											Class[0]++;
										} else {
											if (F3[i]<= 1.435) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 2.372) {
											if (F3[i]<= 1.724) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.832) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F0[i]<= 0.38) {
										Class[0]++;
									} else {
										if (F13[i]<= 1.717) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								}
							}
						}
					}
				} else {
					if (F13[i]<= 2.708) {
						if (F7[i]<= 1.585) {
							if (F12[i]<= 1.353) {
								if (F13[i]<= 1.937) {
									if (F14[i]<= 1.928) {
										if (F7[i]<= 1.373) {
											if (F9[i]<= 1.711) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -0.4) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 1.805) {
											if (F10[i]<= -0.672) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.16) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F9[i]<= 1.716) {
										if (F7[i]<= 1.375) {
											if (F5[i]<= -1.192) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 2.347) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.416) {
											if (F2[i]<= -1.26) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.289) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F14[i]<= 3.012) {
									if (F5[i]<= 1.388) {
										if (F2[i]<= -1.296) {
											if (F12[i]<= 1.378) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.03) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F0[i]<= 0.015) {
											if (F4[i]<= 1.028) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 2.289) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F15[i]<= 1.215) {
										if (F4[i]<= 0.929) {
											if (F7[i]<= 1.359) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.693) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 3.249) {
											if (F10[i]<= -1.194) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -1.031) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F10[i]<= -0.706) {
								if (F9[i]<= 2.828) {
									if (F9[i]<= 2.379) {
										if (F7[i]<= 1.737) {
											if (F6[i]<= -1.654) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -2.055) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 2.338) {
											if (F7[i]<= 1.746) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.804) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F11[i]<= 0.548) {
										if (F5[i]<= 1.95) {
											if (F7[i]<= 2.172) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.996) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 2.588) {
											if (F4[i]<= 0.929) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 3.279) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F16[i]<= 2.019) {
									if (F7[i]<= 1.829) {
										if (F13[i]<= 1.865) {
											if (F1[i]<= 0.294) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -0.963) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 2.974) {
											if (F5[i]<= -1.51) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 2.362) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F9[i]<= 2.885) {
										if (F11[i]<= 1.342) {
											if (F9[i]<= 2.884) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 0.483) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 3.603) {
											if (F14[i]<= 3.081) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							}
						}
					} else {
						if (F11[i]<= 0.376) {
							if (F9[i]<= 2.683) {
								if (F7[i]<= 1.788) {
									if (F10[i]<= -1.268) {
										if (F9[i]<= 2.451) {
											if (F7[i]<= 1.605) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= 0.7) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 0.359) {
											if (F12[i]<= 1.131) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.397) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F2[i]<= -0.855) {
										if (F0[i]<= 0.144) {
											if (F9[i]<= 0.463) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										Class[0]++;
									}
								}
							} else {
								if (F12[i]<= 1.267) {
									if (F1[i]<= 0.258) {
										Class[1]++;
									} else {
										if (F12[i]<= 1.266) {
											if (F14[i]<= 2.268) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									Class[0]++;
								}
							}
						} else {
							if (F16[i]<= 2.153) {
								if (F15[i]<= 0.639) {
									if (F17[i]<= 1.425) {
										if (F7[i]<= 1.66) {
											Class[1]++;
										} else {
											if (F3[i]<= 1.334) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.897) {
											if (F11[i]<= 0.383) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F7[i]<= 1.838) {
										if (F13[i]<= 2.759) {
											if (F2[i]<= 0.075) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -0.672) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 3.237) {
											if (F9[i]<= 2.933) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 4.106) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 2.102) {
									if (F15[i]<= 0.743) {
										if (F15[i]<= 0.709) {
											if (F10[i]<= -1.757) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 0.732) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.54) {
											Class[0]++;
										} else {
											if (F0[i]<= 0.731) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F11[i]<= 0.383) {
										if (F6[i]<= 1.589) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										if (F9[i]<= 3.449) {
											if (F9[i]<= 3.447) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							}
						}
					}
				}
			} else {
				if (F7[i]<= 1.572) {
					if (F16[i]<= 1.113) {
						if (F10[i]<= 0.04) {
							if (F5[i]<= -1.217) {
								if (F14[i]<= 0.058) {
									if (F4[i]<= 2.835) {
										if (F7[i]<= 1.232) {
											if (F12[i]<= 1.317) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 0.479) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 0.752) {
											if (F16[i]<= 0.651) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F8[i]<= -1.123) {
										if (F2[i]<= -1.404) {
											if (F17[i]<= 1.214) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -0.907) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= -1.472) {
											if (F2[i]<= -1.748) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 1.481) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F2[i]<= 1.415) {
									if (F17[i]<= 1.061) {
										if (F5[i]<= 1.733) {
											if (F11[i]<= 5.185) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.413) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.387) {
											if (F11[i]<= 0.929) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.849) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F9[i]<= 0.361) {
										if (F15[i]<= 2.73) {
											if (F4[i]<= 0.676) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F11[i]<= 2.341) {
											if (F7[i]<= 1.371) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.479) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F13[i]<= 0.945) {
								if (F11[i]<= 5.566) {
									if (F2[i]<= -1.753) {
										if (F10[i]<= 1.328) {
											if (F11[i]<= 1.55) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.565) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F4[i]<= 1.726) {
											if (F16[i]<= 0.851) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.287) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F8[i]<= 0.729) {
										if (F0[i]<= 0.003) {
											Class[0]++;
										} else {
											if (F15[i]<= 5.918) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										Class[0]++;
									}
								}
							} else {
								if (F2[i]<= -1.399) {
									if (F0[i]<= 0.304) {
										if (F8[i]<= -1.657) {
											if (F4[i]<= 1.132) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 0.781) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 1.635) {
											if (F8[i]<= 0.264) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.829) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= 1.259) {
										if (F17[i]<= 1.089) {
											if (F0[i]<= 0.352) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 1.599) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.35) {
											if (F17[i]<= 1.267) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.198) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F10[i]<= -0.514) {
							if (F13[i]<= 0.648) {
								if (F1[i]<= 2.805) {
									if (F2[i]<= -1.494) {
										if (F11[i]<= 3.464) {
											if (F5[i]<= 1.181) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.015) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= 1.594) {
											if (F13[i]<= 0.517) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 2.159) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= -1.351) {
										if (F7[i]<= 1.21) {
											Class[0]++;
										} else {
											if (F5[i]<= -0.155) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F15[i]<= 5.194) {
											if (F2[i]<= 1.107) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 1.357) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F1[i]<= 1.032) {
									if (F17[i]<= 1.149) {
										if (F4[i]<= 0.658) {
											if (F0[i]<= 0.406) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.02) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.304) {
											if (F14[i]<= 2.758) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.469) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F16[i]<= 2.079) {
										if (F5[i]<= 1.247) {
											if (F2[i]<= -1.301) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.088) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 1.096) {
											if (F4[i]<= 1.353) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 2.248) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F10[i]<= 0.024) {
								if (F2[i]<= 1.28) {
									if (F12[i]<= 1.228) {
										if (F0[i]<= 0.239) {
											if (F15[i]<= 1.913) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.688) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.343) {
											if (F0[i]<= 0.114) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.158) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F11[i]<= 3.802) {
										if (F17[i]<= 1.182) {
											if (F7[i]<= 1.435) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= 0.429) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F6[i]<= -1.18) {
											Class[0]++;
										} else {
											if (F6[i]<= 0.109) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F14[i]<= 1.49) {
									if (F17[i]<= 1.057) {
										if (F11[i]<= 6.484) {
											if (F5[i]<= -2.013) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.067) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 2.278) {
											if (F1[i]<= 1.037) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 2.036) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= 0.294) {
										if (F16[i]<= 1.579) {
											if (F10[i]<= 0.291) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F3[i]<= 1.727) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F12[i]<= 2.639) {
											if (F1[i]<= 0.769) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.656) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F9[i]<= 2.938) {
						if (F10[i]<= -0.763) {
							if (F2[i]<= -1.32) {
								if (F11[i]<= 3.132) {
									if (F12[i]<= 1.648) {
										if (F14[i]<= 1.161) {
											if (F10[i]<= -0.767) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 1.051) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 2.408) {
											if (F7[i]<= 2.029) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 0.009) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F4[i]<= 3.15) {
										if (F7[i]<= 1.893) {
											if (F2[i]<= -1.856) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 0.894) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 2.762) {
											if (F1[i]<= 3.904) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F3[i]<= -1.261) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F15[i]<= 4.641) {
									if (F12[i]<= 1.694) {
										if (F14[i]<= 1.68) {
											if (F4[i]<= 2.058) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.748) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 2.112) {
											if (F15[i]<= 2.19) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.088) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 1.202) {
										if (F5[i]<= 1.078) {
											if (F15[i]<= 10.872) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.097) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F6[i]<= -0.768) {
											if (F11[i]<= 6.806) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F3[i]<= -0.338) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F7[i]<= 1.836) {
								if (F16[i]<= 1.321) {
									if (F12[i]<= 2.794) {
										if (F17[i]<= 1.075) {
											if (F2[i]<= 1.786) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.075) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 0.513) {
											if (F11[i]<= 8.055) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.118) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F16[i]<= 1.321) {
										Class[1]++;
									} else {
										if (F15[i]<= 4.76) {
											if (F7[i]<= 1.655) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= 0.77) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= 0.867) {
									if (F4[i]<= 12.202) {
										if (F15[i]<= 3.232) {
											if (F2[i]<= 2.098) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 3.233) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F4[i]<= 17.78) {
										if (F3[i]<= -1.729) {
											if (F3[i]<= -1.729) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 3.646) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[1]++;
									}
								}
							}
						}
					} else {
						if (F5[i]<= -1.39) {
							if (F10[i]<= -1.45) {
								if (F13[i]<= 1.209) {
									if (F17[i]<= 0.348) {
										Class[1]++;
									} else {
										if (F0[i]<= 0.096) {
											if (F1[i]<= 2.371) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F6[i]<= -1.069) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 2.376) {
										if (F14[i]<= 2.726) {
											if (F14[i]<= 2.704) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.582) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 3.332) {
											if (F13[i]<= 1.393) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 3.344) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F2[i]<= 0.945) {
									if (F10[i]<= -0.317) {
										if (F7[i]<= 1.976) {
											if (F7[i]<= 1.974) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 1.732) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F6[i]<= -1.306) {
											if (F13[i]<= 0.572) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 2.2) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 0.796) {
										Class[0]++;
									} else {
										if (F5[i]<= -1.62) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								}
							}
						} else {
							if (F10[i]<= -0.625) {
								if (F14[i]<= 3.124) {
									if (F10[i]<= -0.625) {
										if (F5[i]<= 1.571) {
											if (F16[i]<= 7.603) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.589) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F12[i]<= 1.84) {
										if (F17[i]<= 1.59) {
											if (F11[i]<= 1.41) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.614) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F4[i]<= 2.072) {
											if (F12[i]<= 1.984) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 2.525) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= 2.658) {
									if (F10[i]<= 2.658) {
										if (F9[i]<= 3.665) {
											if (F2[i]<= -1.939) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.744) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 2.27) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F2[i]<= -1.54) {
										if (F4[i]<= 3.626) {
											Class[0]++;
										} else {
											if (F16[i]<= 1.712) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 0.502) {
											Class[0]++;
										} else {
											if (F7[i]<= 2.785) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}

		if (F7[i]<= 1.205) {
			if (F1[i]<= 0.897) {
				if (F12[i]<= 0.875) {
					if (F7[i]<= 0.877) {
						if (F11[i]<= 0.533) {
							if (F11[i]<= 0.449) {
								if (F10[i]<= 0.554) {
									if (F13[i]<= 1.062) {
										if (F0[i]<= 0.308) {
											if (F5[i]<= -1.146) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 0.623) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= -1.289) {
											if (F2[i]<= -1.698) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 0.453) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F7[i]<= 0.694) {
										if (F13[i]<= 0.436) {
											if (F1[i]<= 0.417) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 0.302) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F13[i]<= 0.924) {
											if (F12[i]<= 0.325) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 0.705) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 0.56) {
									if (F1[i]<= 0.604) {
										if (F5[i]<= 1.394) {
											if (F15[i]<= 0.391) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 0.602) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= 0.534) {
											if (F12[i]<= 0.1) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 0.315) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F13[i]<= 0.843) {
										if (F17[i]<= 0.966) {
											if (F13[i]<= 0.625) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 0.284) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F1[i]<= 0.584) {
											if (F10[i]<= 0.039) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 0.843) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F2[i]<= 1.343) {
								if (F0[i]<= 0.169) {
									if (F2[i]<= -1.343) {
										if (F7[i]<= 0.629) {
											if (F4[i]<= 0.621) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 0.534) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= 0.648) {
											if (F17[i]<= 1.061) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.046) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F0[i]<= 0.308) {
										if (F1[i]<= 0.688) {
											if (F17[i]<= 0.945) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.252) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 0.616) {
											if (F5[i]<= -1.03) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.333) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 0.536) {
									if (F5[i]<= 1.049) {
										if (F17[i]<= 0.802) {
											if (F15[i]<= 1.514) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.164) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F17[i]<= 0.577) {
											if (F10[i]<= 0.59) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 0.463) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F9[i]<= 0.639) {
										if (F0[i]<= 0.129) {
											if (F10[i]<= 0.907) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 0.599) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= 1.566) {
											if (F17[i]<= 1.061) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 0.657) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F13[i]<= 1.213) {
							if (F1[i]<= 0.661) {
								if (F7[i]<= 1.015) {
									if (F12[i]<= 0.649) {
										if (F12[i]<= 0.42) {
											if (F15[i]<= 0.325) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.519) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 0.962) {
											if (F1[i]<= 0.596) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.005) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F10[i]<= 0.235) {
										if (F14[i]<= 0.497) {
											if (F0[i]<= 0.165) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.342) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F15[i]<= 0.439) {
											if (F7[i]<= 1.096) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 0.591) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F17[i]<= 0.959) {
									if (F13[i]<= 0.85) {
										if (F10[i]<= 0.376) {
											if (F0[i]<= 0.085) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.049) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 0.486) {
											if (F2[i]<= 0.002) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 0.43) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.041) {
										if (F12[i]<= 0.686) {
											if (F14[i]<= 0.001) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.074) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F16[i]<= 0.729) {
											if (F5[i]<= -1.726) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.792) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F9[i]<= 1.265) {
								if (F10[i]<= 0.01) {
									if (F5[i]<= -1.026) {
										if (F7[i]<= 0.917) {
											if (F14[i]<= 1.393) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.317) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F15[i]<= 0.422) {
											if (F16[i]<= 0.818) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 0.918) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F1[i]<= 0.546) {
										if (F16[i]<= 1.072) {
											if (F13[i]<= 1.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 1.156) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F1[i]<= 0.709) {
											if (F15[i]<= 0.477) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F6[i]<= -1.563) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= -0.077) {
									if (F14[i]<= 1.192) {
										if (F7[i]<= 1.078) {
											if (F1[i]<= 0.554) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 1.072) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 0.41) {
											if (F9[i]<= 1.647) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -1.366) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F12[i]<= 0.828) {
										if (F10[i]<= 0.088) {
											if (F7[i]<= 1.165) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 1.025) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= 0.093) {
											if (F7[i]<= 1.046) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 0.624) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F9[i]<= 0.952) {
						if (F14[i]<= 0.299) {
							if (F10[i]<= -0.089) {
								if (F13[i]<= 0.729) {
									if (F4[i]<= 0.818) {
										if (F11[i]<= 1.101) {
											Class[0]++;
										} else {
											if (F17[i]<= 1.065) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 0.939) {
											if (F2[i]<= 0.91) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= -0.408) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F12[i]<= 0.957) {
										if (F7[i]<= 1.106) {
											if (F2[i]<= 1.259) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 0.592) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F0[i]<= 0.613) {
											if (F2[i]<= 1.296) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 0.43) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F3[i]<= -0.613) {
									if (F0[i]<= 0.353) {
										if (F13[i]<= 1.128) {
											if (F10[i]<= 0.882) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.585) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= -0.801) {
											if (F0[i]<= 0.511) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 0.24) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F11[i]<= 1.279) {
										if (F12[i]<= 0.96) {
											if (F17[i]<= 1.213) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 0.964) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.815) {
											if (F7[i]<= 0.78) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									}
								}
							}
						} else {
							if (F11[i]<= 1.37) {
								if (F2[i]<= 1.299) {
									if (F1[i]<= 0.756) {
										if (F14[i]<= 1.471) {
											if (F14[i]<= 0.985) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.027) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= 0.023) {
											if (F7[i]<= 0.923) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= -1.242) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 1.646) {
										if (F10[i]<= -0.002) {
											if (F7[i]<= 0.907) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 0.668) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 0.084) {
											if (F15[i]<= 0.552) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 0.752) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= -0.538) {
									if (F13[i]<= 0.82) {
										if (F8[i]<= -1.61) {
											if (F9[i]<= 0.835) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F8[i]<= 1.609) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[0]++;
									}
								} else {
									if (F10[i]<= 0.008) {
										if (F12[i]<= 0.949) {
											if (F15[i]<= 1.454) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F3[i]<= 1.644) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= 0.84) {
											if (F4[i]<= 0.873) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -1.107) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F2[i]<= -1.323) {
							if (F14[i]<= 2.531) {
								if (F15[i]<= 0.586) {
									if (F5[i]<= -1.268) {
										if (F17[i]<= 0.843) {
											if (F11[i]<= 0.643) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= -1.718) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= -0.187) {
											if (F1[i]<= 0.551) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 1.252) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F17[i]<= 0.98) {
										if (F12[i]<= 1.018) {
											if (F2[i]<= -1.57) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 1.744) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F14[i]<= 1.309) {
											if (F9[i]<= 1.406) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.668) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F11[i]<= 0.7) {
									if (F15[i]<= 0.602) {
										Class[1]++;
									} else {
										if (F10[i]<= -0.686) {
											if (F16[i]<= 1.974) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 0.667) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F14[i]<= 2.723) {
										if (F10[i]<= -0.759) {
											if (F10[i]<= -0.777) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F3[i]<= -0.224) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 1.527) {
											if (F5[i]<= 0.53) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 1.711) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F11[i]<= 0.551) {
								if (F14[i]<= 1.326) {
									if (F1[i]<= 0.616) {
										if (F5[i]<= 0.889) {
											if (F3[i]<= 0.335) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 0.876) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= -0.236) {
											if (F2[i]<= -0.885) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.305) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= 0.923) {
										if (F1[i]<= 0.566) {
											if (F10[i]<= -0.343) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 1.011) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 1.002) {
											if (F2[i]<= 1.328) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 1.995) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= -0.144) {
									if (F13[i]<= 0.933) {
										if (F13[i]<= 0.607) {
											if (F0[i]<= 0.051) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 1.077) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F14[i]<= 2.488) {
											if (F0[i]<= 0.33) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 0.907) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F10[i]<= 0.108) {
										if (F9[i]<= 1.434) {
											if (F15[i]<= 1.068) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 1.221) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F14[i]<= 1.506) {
											if (F2[i]<= 0.882) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 0.191) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				}
			} else {
				if (F7[i]<= 0.749) {
					if (F2[i]<= -1.328) {
						if (F17[i]<= 0.689) {
							if (F10[i]<= 0.507) {
								if (F1[i]<= 1.198) {
									if (F13[i]<= 0.634) {
										if (F16[i]<= 0.784) {
											if (F14[i]<= 0.284) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.195) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 0.999) {
											if (F2[i]<= -1.497) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -1.376) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F0[i]<= 0.222) {
										if (F14[i]<= 1.555) {
											if (F5[i]<= -1.408) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 1.367) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 0.227) {
											if (F1[i]<= 1.754) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.713) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F2[i]<= -1.494) {
									if (F4[i]<= 2.098) {
										if (F0[i]<= 0.031) {
											if (F13[i]<= 0.451) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 0.558) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 2.522) {
											if (F5[i]<= -1.995) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 0.337) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= 1.011) {
										if (F14[i]<= 0.633) {
											if (F0[i]<= 0.065) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 1.123) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F8[i]<= -1.209) {
											Class[0]++;
										} else {
											if (F12[i]<= 0.345) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F2[i]<= -1.572) {
								if (F7[i]<= 0.501) {
									if (F5[i]<= -1.363) {
										if (F4[i]<= 1.078) {
											if (F2[i]<= -2.011) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 0.11) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F15[i]<= 2.925) {
											if (F0[i]<= 0.015) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 1.076) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F17[i]<= 0.923) {
										if (F14[i]<= 0.817) {
											if (F5[i]<= -1.373) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 0.76) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F16[i]<= 0.276) {
											if (F0[i]<= 0.128) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 0.709) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 0.492) {
									if (F1[i]<= 1.263) {
										if (F2[i]<= -1.484) {
											if (F0[i]<= 0.251) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 1.257) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 0.303) {
											if (F8[i]<= -1.564) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F6[i]<= -0.384) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F5[i]<= 0.832) {
										if (F17[i]<= 1.318) {
											if (F16[i]<= 0.809) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 0.962) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 1.88) {
											if (F2[i]<= -1.364) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 0.704) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F1[i]<= 1.188) {
							if (F7[i]<= 0.52) {
								if (F15[i]<= 0.925) {
									if (F15[i]<= 0.638) {
										if (F13[i]<= 0.353) {
											if (F1[i]<= 1.051) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 1.084) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.062) {
											if (F5[i]<= -1.173) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.164) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F0[i]<= 0.084) {
										if (F0[i]<= 0.032) {
											if (F15[i]<= 1.461) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 0.682) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F1[i]<= 1.071) {
											if (F10[i]<= 0.062) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 1.129) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F17[i]<= 0.829) {
									if (F5[i]<= 1.224) {
										if (F16[i]<= 0.622) {
											if (F14[i]<= 0.121) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.148) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F9[i]<= 0.716) {
											if (F16[i]<= 0.511) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 1.398) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F16[i]<= 0.601) {
										if (F15[i]<= 1.088) {
											if (F2[i]<= 1.242) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 1.635) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F13[i]<= 0.694) {
											if (F0[i]<= 0.059) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 1.235) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F15[i]<= 1.165) {
								if (F0[i]<= 0.311) {
									if (F15[i]<= 0.897) {
										if (F2[i]<= 1.414) {
											if (F15[i]<= 0.746) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 1.028) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 0.553) {
											if (F5[i]<= 1.226) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 0.557) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 0.655) {
										if (F1[i]<= 1.723) {
											if (F2[i]<= 1.294) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.021) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 1.233) {
											if (F17[i]<= 0.703) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.51) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F1[i]<= 1.586) {
									if (F13[i]<= 0.466) {
										if (F11[i]<= 1.87) {
											if (F17[i]<= 0.533) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 0.541) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F5[i]<= 1.241) {
											if (F2[i]<= 1.22) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 0.529) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F15[i]<= 1.909) {
										if (F4[i]<= 1.675) {
											if (F10[i]<= 0.53) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.642) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 0.093) {
											if (F2[i]<= 1.221) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.168) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F10[i]<= 0.114) {
						if (F17[i]<= 0.846) {
							if (F7[i]<= 0.947) {
								if (F5[i]<= 1.25) {
									if (F2[i]<= -1.13) {
										if (F1[i]<= 1.293) {
											if (F12[i]<= 1.174) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 0.779) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 0.498) {
											if (F11[i]<= 2.551) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -1.491) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F17[i]<= 0.628) {
										if (F13[i]<= 0.492) {
											if (F0[i]<= 0.157) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.369) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= -0.235) {
											if (F2[i]<= 1.27) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 1.425) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F13[i]<= 0.622) {
									if (F1[i]<= 2.244) {
										if (F13[i]<= 0.447) {
											if (F11[i]<= 2.579) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F8[i]<= -1.372) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 4.886) {
											if (F17[i]<= 0.447) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.111) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F12[i]<= 1.382) {
										if (F2[i]<= 1.539) {
											if (F1[i]<= 1.49) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 2.727) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.093) {
											if (F13[i]<= 0.878) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -1.169) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F1[i]<= 1.137) {
								if (F15[i]<= 1.452) {
									if (F9[i]<= 0.703) {
										if (F2[i]<= 1.125) {
											if (F13[i]<= 0.931) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= -1.696) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F1[i]<= 1.007) {
											if (F13[i]<= 1.029) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 1.237) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F2[i]<= -1.59) {
										if (F5[i]<= 0.694) {
											if (F0[i]<= 0.07) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 0.999) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F0[i]<= 0.089) {
											if (F4[i]<= 1.792) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= -0.202) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F5[i]<= -1.374) {
									if (F4[i]<= 1.546) {
										if (F13[i]<= 0.685) {
											if (F2[i]<= 0.992) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 0.922) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F13[i]<= 0.431) {
											if (F7[i]<= 1.141) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 1.74) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F16[i]<= 0.817) {
										if (F2[i]<= 1.225) {
											if (F0[i]<= 0.153) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.388) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F13[i]<= 0.652) {
											if (F13[i]<= 0.469) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 1.143) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F7[i]<= 0.949) {
							if (F0[i]<= 0.208) {
								if (F2[i]<= 1.345) {
									if (F12[i]<= 0.697) {
										if (F12[i]<= 0.531) {
											if (F9[i]<= 0.761) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 0.759) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= -1.443) {
											if (F17[i]<= 0.913) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -1.302) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F17[i]<= 0.711) {
										if (F4[i]<= 3.874) {
											if (F2[i]<= 1.866) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F16[i]<= 0.62) {
											if (F9[i]<= 0.077) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.046) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F16[i]<= 1.157) {
									if (F11[i]<= 1.125) {
										if (F17[i]<= 0.757) {
											if (F17[i]<= 0.664) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.106) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 1.542) {
											if (F5[i]<= -1.606) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 0.564) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F11[i]<= 0.829) {
										if (F1[i]<= 1.07) {
											if (F8[i]<= 1.295) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= 1.266) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= -2.007) {
											Class[1]++;
										} else {
											if (F10[i]<= 0.226) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F2[i]<= -1.412) {
								if (F12[i]<= 0.72) {
									if (F7[i]<= 0.983) {
										if (F16[i]<= 0.123) {
											if (F17[i]<= 0.516) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 0.63) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 0.347) {
											if (F1[i]<= 0.959) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.51) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F11[i]<= 4.074) {
										if (F17[i]<= 0.998) {
											if (F5[i]<= 1.48) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 0.862) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 2.333) {
											Class[1]++;
										} else {
											if (F16[i]<= 0.722) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F2[i]<= 1.336) {
									if (F1[i]<= 1.194) {
										if (F12[i]<= 0.871) {
											if (F17[i]<= 0.889) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.018) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 1.366) {
											if (F1[i]<= 1.446) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.36) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F12[i]<= 0.893) {
										if (F4[i]<= 0.457) {
											if (F3[i]<= 0.331) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.046) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 0.814) {
											if (F13[i]<= 0.241) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 2.622) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		} else {
			if (F10[i]<= -0.16) {
				if (F7[i]<= 1.583) {
					if (F12[i]<= 1.367) {
						if (F13[i]<= 1.933) {
							if (F10[i]<= -0.672) {
								if (F7[i]<= 1.393) {
									if (F9[i]<= 1.796) {
										if (F9[i]<= 1.421) {
											if (F0[i]<= 0.19) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.806) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 2.113) {
											if (F1[i]<= 0.673) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 1.353) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F9[i]<= 1.995) {
										if (F13[i]<= 0.843) {
											if (F6[i]<= 1.279) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.335) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 1.682) {
											if (F14[i]<= 1.482) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.69) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 1.342) {
									if (F1[i]<= 0.751) {
										if (F17[i]<= 1.017) {
											if (F13[i]<= 0.887) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.113) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= -0.361) {
											if (F14[i]<= 0.95) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.729) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F12[i]<= 1.19) {
										if (F7[i]<= 1.451) {
											if (F9[i]<= 1.907) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.589) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 1.372) {
											if (F10[i]<= -0.333) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.585) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F9[i]<= 1.775) {
								if (F0[i]<= 0.589) {
									if (F10[i]<= -1.151) {
										if (F16[i]<= 2.07) {
											if (F11[i]<= 0.567) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 1.349) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 1.717) {
											if (F14[i]<= 2.225) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 0.341) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F15[i]<= 0.653) {
										if (F14[i]<= 2.292) {
											if (F5[i]<= 1.047) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F15[i]<= 0.64) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F8[i]<= 1.619) {
											if (F7[i]<= 1.512) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 0.672) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F1[i]<= 0.582) {
									if (F17[i]<= 1.274) {
										if (F2[i]<= 1.357) {
											if (F7[i]<= 1.319) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.217) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 0.494) {
											if (F14[i]<= 1.651) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 2.19) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.385) {
										if (F1[i]<= 0.688) {
											if (F2[i]<= 1.373) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.152) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F13[i]<= 2.258) {
											if (F2[i]<= 1.508) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 0.908) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F2[i]<= -1.463) {
							if (F5[i]<= 0.627) {
								if (F10[i]<= -0.782) {
									if (F0[i]<= 0.243) {
										if (F14[i]<= 2.829) {
											if (F10[i]<= -0.837) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.673) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 1.634) {
											if (F13[i]<= 1.987) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 1.93) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F16[i]<= 2.003) {
										if (F7[i]<= 1.298) {
											if (F14[i]<= 1.907) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.739) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F3[i]<= 1.518) {
											if (F8[i]<= 1.43) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= -0.182) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F16[i]<= 2.315) {
									if (F13[i]<= 0.557) {
										if (F4[i]<= 0.845) {
											if (F17[i]<= 1.163) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 1.676) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= -0.928) {
											if (F13[i]<= 0.757) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= -1.482) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F14[i]<= 3.191) {
										if (F0[i]<= 0.138) {
											if (F0[i]<= 0.122) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 0.772) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 1.792) {
											Class[0]++;
										} else {
											if (F6[i]<= -0.146) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F10[i]<= -0.774) {
								if (F13[i]<= 0.712) {
									if (F1[i]<= 2.211) {
										if (F15[i]<= 3.13) {
											if (F5[i]<= -1.652) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.389) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F15[i]<= 5.34) {
											if (F0[i]<= 0.183) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 0.432) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= 1.258) {
										if (F2[i]<= 1.299) {
											if (F16[i]<= 2.294) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.806) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F14[i]<= 2.91) {
											if (F15[i]<= 0.888) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 3.095) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F0[i]<= 0.228) {
									if (F10[i]<= -0.501) {
										if (F7[i]<= 1.318) {
											if (F5[i]<= 1.469) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 0.716) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 1.284) {
											if (F2[i]<= -1.454) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 2.822) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F1[i]<= 1.893) {
										if (F7[i]<= 1.33) {
											if (F10[i]<= -0.567) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.233) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 0.662) {
											if (F7[i]<= 1.233) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 1.803) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F1[i]<= 0.714) {
						if (F7[i]<= 1.885) {
							if (F9[i]<= 2.341) {
								if (F2[i]<= -1.37) {
									if (F13[i]<= 0.709) {
										if (F13[i]<= 0.55) {
											Class[0]++;
										} else {
											if (F12[i]<= 1.025) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F6[i]<= 1.686) {
											if (F15[i]<= 0.902) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F9[i]<= 2.152) {
										if (F11[i]<= 1.485) {
											if (F7[i]<= 1.682) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.06) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 1.701) {
											if (F17[i]<= 1.319) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 2.154) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F4[i]<= 0.806) {
									if (F7[i]<= 1.715) {
										if (F2[i]<= 1.381) {
											if (F10[i]<= -0.969) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 2.312) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= -1.634) {
											if (F8[i]<= 1.242) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 0.525) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F9[i]<= 2.513) {
										if (F17[i]<= 1.193) {
											if (F12[i]<= 1.479) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 2.399) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= 1.532) {
											if (F0[i]<= 0.308) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 2.796) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F10[i]<= -1.917) {
								if (F14[i]<= 0.018) {
									if (F13[i]<= 1.083) {
										Class[1]++;
									} else {
										if (F14[i]<= 0.012) {
											if (F13[i]<= 3.073) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F8[i]<= 1.588) {
										if (F11[i]<= 1.289) {
											if (F5[i]<= 0.732) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 2.351) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.587) {
											if (F4[i]<= 0.456) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.515) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F9[i]<= 3.267) {
									if (F10[i]<= -1.166) {
										if (F2[i]<= -1.269) {
											if (F16[i]<= 2.119) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 2.095) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 0.136) {
											if (F5[i]<= 1.116) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 0.938) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 2.369) {
										if (F13[i]<= 3.581) {
											if (F14[i]<= 3.564) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F17[i]<= 1.114) {
											if (F9[i]<= 3.607) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 0.476) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F7[i]<= 1.915) {
							if (F14[i]<= 2.966) {
								if (F10[i]<= -1.073) {
									if (F15[i]<= 3.773) {
										if (F2[i]<= -1.467) {
											if (F0[i]<= 0.182) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.256) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 3.054) {
											if (F3[i]<= 0.704) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 2.623) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F15[i]<= 5.801) {
										if (F5[i]<= 1.232) {
											if (F7[i]<= 1.678) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.815) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 5.894) {
											Class[1]++;
										} else {
											if (F11[i]<= 8.455) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F1[i]<= 0.959) {
									if (F6[i]<= -1.729) {
										Class[1]++;
									} else {
										if (F17[i]<= 1.333) {
											if (F14[i]<= 2.976) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.19) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F9[i]<= 2.874) {
										if (F11[i]<= 7.154) {
											if (F17[i]<= 1.265) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										Class[1]++;
									}
								}
							}
						} else {
							if (F15[i]<= 4.159) {
								if (F2[i]<= 1.422) {
									if (F7[i]<= 2.303) {
										if (F10[i]<= -1.469) {
											if (F13[i]<= 0.892) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F15[i]<= 1.58) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 2.249) {
											if (F11[i]<= 1.495) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 2.869) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 1.796) {
										if (F7[i]<= 2.252) {
											if (F10[i]<= -1.29) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F14[i]<= 2.562) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 1.902) {
											if (F0[i]<= 0.383) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F16[i]<= 2.524) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F13[i]<= 0.573) {
									if (F2[i]<= -1.416) {
										if (F9[i]<= 2.547) {
											if (F13[i]<= 0.507) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F10[i]<= -1.44) {
											if (F15[i]<= 9.913) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= -1.229) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= 1.354) {
										if (F0[i]<= 0.283) {
											if (F9[i]<= 0.033) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.097) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= 1.37) {
											if (F16[i]<= 4.321) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 5.045) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					}
				}
			} else {
				if (F7[i]<= 1.407) {
					if (F1[i]<= 0.735) {
						if (F10[i]<= 0.32) {
							if (F15[i]<= 0.515) {
								if (F14[i]<= 1.307) {
									if (F5[i]<= 1.881) {
										if (F2[i]<= -1.579) {
											Class[1]++;
										} else {
											if (F7[i]<= 1.36) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[0]++;
									}
								} else {
									if (F2[i]<= 1.006) {
										if (F5[i]<= 0.12) {
											if (F1[i]<= 0.425) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.094) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 1.386) {
											if (F13[i]<= 1.954) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 0.755) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F14[i]<= 1.803) {
									if (F11[i]<= 1.366) {
										if (F2[i]<= 1.385) {
											if (F1[i]<= 0.647) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.601) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 1.403) {
											Class[0]++;
										} else {
											if (F11[i]<= 1.538) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F17[i]<= 0.919) {
										if (F14[i]<= 2.247) {
											if (F6[i]<= -1.59) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F3[i]<= 1.478) {
											if (F15[i]<= 0.611) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.64) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F17[i]<= 1.306) {
								if (F7[i]<= 1.29) {
									if (F11[i]<= 0.328) {
										if (F3[i]<= 0.37) {
											Class[1]++;
										} else {
											if (F12[i]<= 0.564) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 0.642) {
											if (F13[i]<= 0.977) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.562) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= 0.66) {
										if (F17[i]<= 0.997) {
											if (F1[i]<= 0.493) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.404) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F8[i]<= -1.628) {
											if (F4[i]<= 0.49) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.408) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F9[i]<= 1.688) {
									if (F2[i]<= -0.889) {
										if (F11[i]<= 0.48) {
											if (F7[i]<= 1.306) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 0.738) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F14[i]<= 0.381) {
											if (F1[i]<= 0.371) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.057) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F13[i]<= 1.481) {
										if (F16[i]<= 0.96) {
											if (F5[i]<= -1.552) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 0.591) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F6[i]<= 0.586) {
											if (F15[i]<= 0.466) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F14[i]<= 0.918) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F12[i]<= 0.962) {
							if (F11[i]<= 0.811) {
								if (F2[i]<= -1.722) {
									if (F15[i]<= 0.653) {
										if (F7[i]<= 1.211) {
											Class[1]++;
										} else {
											if (F4[i]<= 0.438) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 0.782) {
											if (F8[i]<= 0.816) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 0.888) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.095) {
										if (F17[i]<= 0.935) {
											if (F7[i]<= 1.222) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.952) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F12[i]<= 0.756) {
											if (F2[i]<= 1.784) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.095) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F5[i]<= -2.005) {
									if (F9[i]<= 0.682) {
										Class[1]++;
									} else {
										if (F2[i]<= 0.461) {
											Class[0]++;
										} else {
											if (F12[i]<= 0.815) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F10[i]<= 0.501) {
										if (F10[i]<= 0.489) {
											if (F12[i]<= 0.868) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F10[i]<= 0.858) {
											if (F10[i]<= 0.857) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F17[i]<= 1.147) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F1[i]<= 1.051) {
								if (F7[i]<= 1.3) {
									if (F2[i]<= 1.556) {
										if (F17[i]<= 0.988) {
											if (F7[i]<= 1.208) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.032) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 1.004) {
											if (F4[i]<= 1.333) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 1.488) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F17[i]<= 1.001) {
										if (F4[i]<= 0.441) {
											Class[1]++;
										} else {
											if (F4[i]<= 1.51) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F16[i]<= 1.117) {
											if (F4[i]<= 1.18) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.616) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F13[i]<= 0.318) {
									if (F15[i]<= 3.97) {
										if (F13[i]<= 0.318) {
											if (F16[i]<= 0.539) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F3[i]<= 0.691) {
											if (F11[i]<= 4.128) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 0.546) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= 0.563) {
										if (F0[i]<= 0.268) {
											if (F5[i]<= 1.148) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 0.864) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.168) {
											if (F5[i]<= 2.047) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F16[i]<= 0.755) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (F9[i]<= 2.703) {
						if (F13[i]<= 1.191) {
							if (F10[i]<= 0.678) {
								if (F15[i]<= 7.391) {
									if (F12[i]<= 1.33) {
										if (F0[i]<= 0.197) {
											if (F16[i]<= 1.585) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 0.119) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= -1.771) {
											if (F16[i]<= 1.722) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.215) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F3[i]<= -0.64) {
										Class[1]++;
									} else {
										if (F4[i]<= 7.18) {
											Class[0]++;
										} else {
											if (F17[i]<= 0.404) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= 1.913) {
									if (F7[i]<= 1.678) {
										if (F2[i]<= -1.537) {
											if (F12[i]<= 1.368) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F17[i]<= 1.205) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 4.07) {
											if (F2[i]<= 1.401) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.041) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F4[i]<= 6.25) {
										if (F7[i]<= 2.17) {
											if (F15[i]<= 3.851) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 4.488) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 6.261) {
											Class[1]++;
										} else {
											if (F7[i]<= 1.799) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F10[i]<= 1.939) {
								if (F7[i]<= 1.578) {
									if (F2[i]<= -1.597) {
										if (F0[i]<= 0.769) {
											if (F1[i]<= 0.427) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= 0.06) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 1.077) {
											if (F9[i]<= 1.576) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.92) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F15[i]<= 0.694) {
										if (F10[i]<= 1.939) {
											if (F10[i]<= 0.765) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F5[i]<= -2.042) {
											if (F10[i]<= 0.177) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.478) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F12[i]<= 0.754) {
									if (F10[i]<= 2.01) {
										if (F17[i]<= 1.565) {
											if (F9[i]<= 2.454) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 0.401) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F15[i]<= 0.545) {
											if (F7[i]<= 1.763) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 0.137) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F15[i]<= 0.986) {
										if (F7[i]<= 2.085) {
											if (F16[i]<= 1.315) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 0.65) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F17[i]<= 1.59) {
											if (F16[i]<= 0.651) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 1.039) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						}
					} else {
						if (F16[i]<= 1.807) {
							if (F17[i]<= 0.023) {
								Class[1]++;
							} else {
								if (F2[i]<= 1.226) {
									if (F3[i]<= 1.734) {
										if (F7[i]<= 1.994) {
											if (F5[i]<= 1.429) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 0.515) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F16[i]<= 1.807) {
										if (F13[i]<= 0.507) {
											if (F4[i]<= 3.522) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 2.463) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[1]++;
									}
								}
							}
						} else {
							if (F7[i]<= 2.334) {
								if (F11[i]<= 4.582) {
									if (F10[i]<= 0.257) {
										if (F8[i]<= 1.713) {
											if (F10[i]<= 0.256) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F6[i]<= -0.829) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F6[i]<= -1.095) {
											if (F10[i]<= 1.143) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F1[i]<= 4.071) {
										Class[1]++;
									} else {
										Class[0]++;
									}
								}
							} else {
								if (F11[i]<= 4.536) {
									if (F0[i]<= 0.029) {
										if (F0[i]<= 0.029) {
											if (F2[i]<= 1.322) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F5[i]<= 2.04) {
											if (F3[i]<= 1.643) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= -0.503) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= 1.329) {
										if (F9[i]<= 3.73) {
											if (F10[i]<= 0.041) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F15[i]<= 4.442) {
											if (F13[i]<= 0.62) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		int p0 = (Class[0] > Class[1])?0:1;
		int Q0 = (Class[0] > Class[1])?Class[0]:Class[1];
		P[i] = p0;
	}
    return 0;

}

void RF_with_IF_parallel(float *F0,float *F1,float *F2,float *F3,float *F4,float *F5,float *F6,float *F7,float *F8,float *F9,float *F10,float *F11,float *F12,float *F13,float *F14,float *F15,float *F16,float *F17,float *F18, int *P, const int N)
{
    HANDLE threads[NUM_THREADS];
    ThreadData thread_data[NUM_THREADS];

    int chunk_size = N / NUM_THREADS;
    int remainder = N % NUM_THREADS;
    int start = 0;

    for (int i = 0; i < NUM_THREADS; i++) {
        int end = start + chunk_size;
        if (i < remainder)
            end++;

        thread_data[i].thread_id = i;
        thread_data[i].start = start;
        thread_data[i].end = end;

        thread_data[i].F0 = F0;
        thread_data[i].F1 = F1;
        thread_data[i].F2 = F2;
        thread_data[i].F3 = F3;
        thread_data[i].F4 = F4;
        thread_data[i].F5 = F5;
        thread_data[i].F6 = F6;
        thread_data[i].F7 = F7;
        thread_data[i].F8 = F8;
        thread_data[i].F9 = F9;
        thread_data[i].F10 = F10;
        thread_data[i].F11 = F11;
        thread_data[i].F12 = F12;
        thread_data[i].F13 = F13;
        thread_data[i].F14 = F14;
        thread_data[i].F15 = F15;
        thread_data[i].F16 = F16;
        thread_data[i].F17 = F17;
        thread_data[i].F18 = F18;

		thread_data[i].P = P;
        threads[i] = CreateThread(NULL, 0, RF_with_IF_thread, &thread_data[i], 0, NULL);

        start = end;
    }

    WaitForMultipleObjects(NUM_THREADS, threads, TRUE, INFINITE);

    for (int i = 0; i < NUM_THREADS; i++) {
        CloseHandle(threads[i]);
    }
}
void initialData(float *ip, int size)
{
    for (int i = 0; i < size; i++) {
        ip[i] = (float)(rand() & 15);
    }
}

void readInFile(float **ip) {
    FILE *file = fopen("assets/datasets/SUSY.csv", "r");
    if (file == NULL) {
        printf("[C - Random Forest]: Failed to open the file.\n");
        exit(1);
    }

    char line[MAX_LINE_LENGTH];
    
    int row = 0;
    while (fgets(line, sizeof(line), file)) {
        char *token = strtok(line, ",");
        
        int column = 0;
        while (token != NULL) {
            ip[column][row] = atof(token);
            token = strtok(NULL, ",");
            column++;
        }

        row++;
        if(row > N_ELEM) break;
    }

    fclose(file);
}

void writeOutFile(int *h, int size)
{
    FILE *file = fopen("generated/cpu/conditional/out_rf_if_cpu.csv", "w");
    if (file == NULL) {
        printf("[C - Random Forest]: Failed to open the file.\n");
        return;
    }

    for (int i = 0; i < size; i++) {
        fprintf(file, "%d\n", h[i]);
    }

    fclose(file);
}

void registerTime(float value) {
    printf("[C - Random Forest]: Time spent: %f.\n", value);
    FILE *file = fopen("generated/cpu/conditional/results.csv", "a"); // Abre o arquivo no modo de "acrescentar" (append)
    if (file == NULL) {
        printf("[C - Random Forest]: Falha ao abrir o arquivo results.csv.\n");
        return;
    }

    fprintf(file, ",%.2f", value); // Escreve o valor no arquivo, separado por vírgula
    fclose(file);
}
int main(int argc, char **argv)
{
    float elapsed_time;

    // Configuração dos dados
    int nElem = N_ELEM;
    printf("[C - Random Forest]: Vector Size %d\n", nElem);

    // Alocação de memória do host
    size_t nBytes = nElem * sizeof(float);

float *h_0, *h_1, *h_2, *h_3, *h_4, *h_5, *h_6, *h_7, *h_8, *h_9, *h_10, *h_11, *h_12, *h_13, *h_14, *h_15, *h_16, *h_17, *h_18;
		int *h_P, *hostRef;
   h_0 = (float *)malloc(nBytes);
   h_1 = (float *)malloc(nBytes);
   h_2 = (float *)malloc(nBytes);
   h_3 = (float *)malloc(nBytes);
   h_4 = (float *)malloc(nBytes);
   h_5 = (float *)malloc(nBytes);
   h_6 = (float *)malloc(nBytes);
   h_7 = (float *)malloc(nBytes);
   h_8 = (float *)malloc(nBytes);
   h_9 = (float *)malloc(nBytes);
   h_10 = (float *)malloc(nBytes);
   h_11 = (float *)malloc(nBytes);
   h_12 = (float *)malloc(nBytes);
   h_13 = (float *)malloc(nBytes);
   h_14 = (float *)malloc(nBytes);
   h_15 = (float *)malloc(nBytes);
   h_16 = (float *)malloc(nBytes);
   h_17 = (float *)malloc(nBytes);
   h_18 = (float *)malloc(nBytes);    

h_P = (int *)malloc(nBytes);
    hostRef = (int *)malloc(nBytes);

    printf("[C - Random Forest]: Start Reading Dataset\n");
float* h[19] = { h_0, h_1, h_2, h_3, h_4, h_5, h_6, h_7, h_8, h_9, h_10, h_11, h_12, h_13, h_14, h_15, h_16, h_17, h_18};
	readInFile(h);
	printf("[C - Random Forest]: Finished Reading Dataset\n");

    // Obter o tempo inicial
    clock_t start_time = clock();
    // Execução do algoritmo paralelo

    RF_with_IF_parallel( h_0, h_1, h_2, h_3, h_4, h_5, h_6, h_7, h_8, h_9, h_10, h_11, h_12, h_13, h_14, h_15, h_16, h_17, h_18, h_P, nElem);
     // Obter o tempo final
    clock_t end_time = clock();
    // Calcular o tempo decorrido em segundos
    elapsed_time = ((float)(end_time - start_time)) / ((float)(CLOCKS_PER_SEC/1000.0));
    registerTime(elapsed_time);

    writeOutFile(h_P, nElem);

    // Liberação da memória do host

    free(h_0);
    free(h_1);
    free(h_2);
    free(h_3);
    free(h_4);
    free(h_5);
    free(h_6);
    free(h_7);
    free(h_8);
    free(h_9);
    free(h_10);
    free(h_11);
    free(h_12);
    free(h_13);
    free(h_14);
    free(h_15);
    free(h_16);
    free(h_17);
    free(h_18);
    free(h_P);
    free(hostRef);

    return 0;
}
