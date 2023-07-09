#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

#define NUM_THREADS 4
#define N_ELEM 32561
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
	int *P = data->P;

    for (int i = start; i < end; i++) {int Class[2];
        Class[0] = 0;        Class[1] = 0;

		if (F4[i]<= 12.5) {
			if (F10[i]<= 5119.0) {
				if (F5[i]<= 1.5) {
					if (F10[i]<= 4718.5) {
						if (F1[i]<= 2.5) {
							if (F4[i]<= 11.5) {
								if (F3[i]<= 15.5) {
									if (F2[i]<= 455774.0) {
										if (F8[i]<= 2.5) {
											if (F7[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 4.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 1.5) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F12[i]<= 45.0) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								}
							} else {
								if (F0[i]<= 28.0) {
									Class[0]++;
								} else {
									if (F7[i]<= 2.5) {
										if (F2[i]<= 168078.0) {
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
							if (F4[i]<= 10.5) {
								if (F4[i]<= 8.5) {
									if (F13[i]<= 4.5) {
										if (F12[i]<= 57.5) {
											Class[0]++;
										} else {
											if (F0[i]<= 19.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 5.5) {
											if (F2[i]<= 152729.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 7.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 2.5) {
										if (F6[i]<= 12.5) {
											if (F9[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 1222.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 2502.5) {
											if (F1[i]<= 3.5) {
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
								if (F9[i]<= 1.5) {
									if (F11[i]<= 1412.0) {
										if (F2[i]<= 25928.5) {
											if (F3[i]<= 7.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 3.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F12[i]<= 58.0) {
										if (F6[i]<= 4.5) {
											if (F7[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F2[i]<= 312192.5) {
											if (F8[i]<= 1.5) {
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
					} else {
						if (F10[i]<= 4826.0) {
							Class[1]++;
						} else {
							Class[0]++;
						}
					}
				} else {
					if (F9[i]<= 1.5) {
						if (F3[i]<= 8.5) {
							if (F12[i]<= 35.5) {
								if (F4[i]<= 9.5) {
									if (F12[i]<= 29.0) {
										if (F0[i]<= 31.0) {
											if (F0[i]<= 29.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= 2.5) {
											if (F1[i]<= 6.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F12[i]<= 31.0) {
										if (F12[i]<= 7.0) {
											if (F6[i]<= 5.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F6[i]<= 3.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F3[i]<= 6.5) {
											if (F8[i]<= 3.5) {
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
								if (F7[i]<= 1.5) {
									if (F10[i]<= 4718.5) {
										if (F12[i]<= 41.5) {
											if (F3[i]<= 7.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F0[i]<= 35.5) {
										if (F11[i]<= 1794.0) {
											if (F1[i]<= 6.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 1952.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 1782.5) {
											if (F7[i]<= 3.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 9.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F7[i]<= 1.5) {
								Class[0]++;
							} else {
								if (F2[i]<= 367276.5) {
									if (F13[i]<= 1.5) {
										if (F3[i]<= 12.5) {
											if (F6[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 4164.0) {
											if (F1[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F3[i]<= 12.5) {
										if (F12[i]<= 55.0) {
											Class[0]++;
										} else {
											if (F0[i]<= 42.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F12[i]<= 41.5) {
											if (F0[i]<= 44.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 38.5) {
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
						if (F11[i]<= 1881.5) {
							if (F3[i]<= 8.5) {
								if (F5[i]<= 2.5) {
									if (F0[i]<= 28.5) {
										if (F7[i]<= 3.5) {
											if (F0[i]<= 23.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F4[i]<= 9.5) {
											if (F12[i]<= 43.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 170400.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F10[i]<= 4668.5) {
										if (F6[i]<= 1.5) {
											if (F2[i]<= 23631.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 24.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 4776.0) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								}
							} else {
								if (F2[i]<= 348332.5) {
									if (F5[i]<= 2.5) {
										if (F6[i]<= 1.5) {
											if (F0[i]<= 35.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 39.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[0]++;
									}
								} else {
									if (F7[i]<= 4.0) {
										if (F6[i]<= 8.5) {
											Class[0]++;
										} else {
											if (F12[i]<= 45.0) {
												Class[1]++;
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
							if (F11[i]<= 1978.5) {
								if (F11[i]<= 1938.0) {
									Class[1]++;
								} else {
									if (F2[i]<= 140705.5) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								}
							} else {
								if (F5[i]<= 6.0) {
									Class[0]++;
								} else {
									if (F6[i]<= 6.5) {
										if (F2[i]<= 125411.0) {
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
				}
			} else {
				if (F9[i]<= 1.5) {
					if (F7[i]<= 3.0) {
						if (F0[i]<= 61.5) {
							if (F5[i]<= 2.5) {
								if (F8[i]<= 3.5) {
									Class[1]++;
								} else {
									if (F0[i]<= 40.5) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								}
							} else {
								if (F2[i]<= 34140.0) {
									Class[0]++;
								} else {
									if (F0[i]<= 54.0) {
										Class[1]++;
									} else {
										if (F1[i]<= 3.0) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								}
							}
						} else {
							if (F0[i]<= 67.5) {
								if (F12[i]<= 37.5) {
									Class[1]++;
								} else {
									if (F1[i]<= 4.5) {
										if (F6[i]<= 6.5) {
											Class[1]++;
										} else {
											if (F13[i]<= 16.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										Class[1]++;
									}
								}
							} else {
								if (F0[i]<= 73.0) {
									Class[1]++;
								} else {
									if (F12[i]<= 15.5) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								}
							}
						}
					} else {
						if (F3[i]<= 2.5) {
							if (F7[i]<= 4.5) {
								Class[1]++;
							} else {
								if (F2[i]<= 407767.0) {
									Class[1]++;
								} else {
									Class[0]++;
								}
							}
						} else {
							Class[0]++;
						}
					}
				} else {
					if (F7[i]<= 3.5) {
						if (F5[i]<= 4.0) {
							if (F0[i]<= 60.5) {
								Class[1]++;
							} else {
								if (F1[i]<= 5.0) {
									if (F10[i]<= 15308.5) {
										Class[0]++;
									} else {
										if (F12[i]<= 25.0) {
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
							if (F3[i]<= 7.0) {
								if (F1[i]<= 2.5) {
									Class[0]++;
								} else {
									if (F5[i]<= 6.0) {
										Class[0]++;
									} else {
										if (F10[i]<= 11095.5) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								}
							} else {
								Class[1]++;
							}
						}
					} else {
						if (F2[i]<= 122308.0) {
							Class[0]++;
						} else {
							if (F10[i]<= 7565.5) {
								if (F7[i]<= 4.5) {
									Class[1]++;
								} else {
									Class[0]++;
								}
							} else {
								if (F10[i]<= 29665.5) {
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
			if (F10[i]<= 7073.5) {
				if (F5[i]<= 1.5) {
					if (F6[i]<= 1.5) {
						if (F1[i]<= 3.5) {
							if (F0[i]<= 44.5) {
								if (F9[i]<= 1.5) {
									Class[0]++;
								} else {
									if (F1[i]<= 2.5) {
										Class[0]++;
									} else {
										if (F0[i]<= 26.5) {
											if (F0[i]<= 25.5) {
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
								if (F4[i]<= 13.5) {
									if (F8[i]<= 1.5) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								} else {
									Class[0]++;
								}
							}
						} else {
							Class[0]++;
						}
					} else {
						if (F12[i]<= 42.5) {
							if (F6[i]<= 4.5) {
								if (F4[i]<= 14.5) {
									if (F13[i]<= 4.5) {
										if (F7[i]<= 2.5) {
											if (F1[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 3.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F6[i]<= 3.0) {
											Class[0]++;
										} else {
											if (F12[i]<= 38.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F1[i]<= 2.5) {
										if (F0[i]<= 40.5) {
											if (F2[i]<= 133707.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F2[i]<= 173159.5) {
											if (F13[i]<= 7.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 13.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F4[i]<= 15.5) {
									if (F12[i]<= 22.5) {
										if (F12[i]<= 20.5) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										if (F9[i]<= 1.5) {
											if (F1[i]<= 3.5) {
												Class[0]++;
											} else {
												Class[0]++;
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
							if (F4[i]<= 14.5) {
								if (F9[i]<= 1.5) {
									if (F0[i]<= 38.5) {
										if (F2[i]<= 176096.0) {
											if (F13[i]<= 3.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 1164.5) {
											if (F0[i]<= 55.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F6[i]<= 12.5) {
										if (F1[i]<= 6.5) {
											if (F1[i]<= 3.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 55.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F3[i]<= 2.5) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								}
							} else {
								if (F10[i]<= 297.0) {
									if (F12[i]<= 77.5) {
										if (F9[i]<= 1.5) {
											if (F13[i]<= 5.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 42109.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
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
					if (F7[i]<= 3.5) {
						if (F12[i]<= 32.5) {
							if (F3[i]<= 7.0) {
								if (F1[i]<= 1.5) {
									Class[0]++;
								} else {
									if (F12[i]<= 6.5) {
										if (F3[i]<= 2.5) {
											Class[0]++;
										} else {
											if (F0[i]<= 63.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 2.5) {
											if (F0[i]<= 42.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 49.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F6[i]<= 8.5) {
									if (F11[i]<= 1123.0) {
										if (F2[i]<= 96001.5) {
											if (F7[i]<= 1.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 2465.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F4[i]<= 15.5) {
										Class[0]++;
									} else {
										if (F2[i]<= 126034.0) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								}
							}
						} else {
							if (F4[i]<= 13.5) {
								if (F11[i]<= 1794.5) {
									if (F7[i]<= 1.5) {
										if (F2[i]<= 126557.5) {
											if (F12[i]<= 47.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 1087.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= 4.0) {
											if (F10[i]<= 5095.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F0[i]<= 26.5) {
										Class[0]++;
									} else {
										if (F13[i]<= 3.0) {
											if (F5[i]<= 2.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									}
								}
							} else {
								if (F3[i]<= 7.0) {
									if (F6[i]<= 3.0) {
										if (F7[i]<= 1.5) {
											if (F0[i]<= 42.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 35.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 1.5) {
											if (F1[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 2.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F0[i]<= 71.5) {
										if (F8[i]<= 1.5) {
											if (F7[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 57.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F1[i]<= 2.5) {
											Class[0]++;
										} else {
											if (F12[i]<= 37.5) {
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
						if (F11[i]<= 1740.5) {
							if (F0[i]<= 51.5) {
								if (F2[i]<= 252516.0) {
									if (F6[i]<= 6.5) {
										if (F1[i]<= 4.5) {
											if (F6[i]<= 3.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 128317.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[0]++;
									}
								} else {
									if (F5[i]<= 2.5) {
										Class[1]++;
									} else {
										if (F5[i]<= 6.0) {
											if (F8[i]<= 2.5) {
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
								if (F0[i]<= 56.0) {
									Class[0]++;
								} else {
									if (F0[i]<= 59.5) {
										if (F10[i]<= 2393.5) {
											if (F9[i]<= 1.5) {
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
							}
						} else {
							if (F6[i]<= 5.0) {
								Class[1]++;
							} else {
								Class[0]++;
							}
						}
					}
				}
			} else {
				if (F1[i]<= 2.5) {
					if (F12[i]<= 47.5) {
						Class[1]++;
					} else {
						if (F12[i]<= 52.5) {
							if (F3[i]<= 2.5) {
								if (F2[i]<= 131606.0) {
									Class[1]++;
								} else {
									if (F6[i]<= 3.0) {
										Class[1]++;
									} else {
										if (F10[i]<= 8932.0) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								}
							} else {
								if (F7[i]<= 2.5) {
									Class[0]++;
								} else {
									Class[1]++;
								}
							}
						} else {
							Class[1]++;
						}
					}
				} else {
					Class[1]++;
				}
			}
		}

		if (F7[i]<= 3.5) {
			if (F12[i]<= 41.5) {
				if (F5[i]<= 1.5) {
					if (F0[i]<= 34.5) {
						if (F0[i]<= 28.5) {
							if (F6[i]<= 4.5) {
								if (F0[i]<= 27.5) {
									if (F0[i]<= 21.5) {
										Class[0]++;
									} else {
										if (F11[i]<= 2399.0) {
											if (F2[i]<= 457665.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F6[i]<= 1.5) {
										Class[0]++;
									} else {
										if (F3[i]<= 3.0) {
											Class[0]++;
										} else {
											if (F10[i]<= 5260.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F3[i]<= 7.5) {
									if (F6[i]<= 12.5) {
										Class[0]++;
									} else {
										if (F10[i]<= 51453.0) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F4[i]<= 9.5) {
										Class[0]++;
									} else {
										if (F10[i]<= 13914.0) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								}
							}
						} else {
							if (F2[i]<= 100808.0) {
								Class[0]++;
							} else {
								if (F0[i]<= 29.5) {
									if (F4[i]<= 9.5) {
										Class[0]++;
									} else {
										if (F1[i]<= 3.5) {
											if (F3[i]<= 6.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F9[i]<= 1.5) {
										if (F4[i]<= 4.5) {
											if (F0[i]<= 32.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F3[i]<= 4.5) {
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
						if (F10[i]<= 4718.5) {
							if (F4[i]<= 14.5) {
								if (F4[i]<= 12.5) {
									if (F12[i]<= 34.0) {
										Class[0]++;
									} else {
										if (F11[i]<= 2391.5) {
											if (F12[i]<= 35.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F10[i]<= 2325.0) {
										if (F9[i]<= 1.5) {
											if (F11[i]<= 670.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 13.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[0]++;
									}
								}
							} else {
								if (F13[i]<= 7.0) {
									if (F13[i]<= 2.5) {
										if (F0[i]<= 52.0) {
											if (F11[i]<= 1412.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
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
							if (F6[i]<= 1.5) {
								if (F4[i]<= 10.5) {
									Class[0]++;
								} else {
									if (F2[i]<= 112996.5) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								}
							} else {
								Class[1]++;
							}
						}
					}
				} else {
					if (F7[i]<= 1.5) {
						if (F10[i]<= 4718.5) {
							if (F4[i]<= 12.5) {
								if (F8[i]<= 2.5) {
									if (F12[i]<= 29.5) {
										if (F1[i]<= 2.5) {
											if (F6[i]<= 10.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 21.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F8[i]<= 1.5) {
											if (F6[i]<= 12.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F13[i]<= 27.5) {
										if (F3[i]<= 2.5) {
											if (F9[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F2[i]<= 126136.0) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								}
							} else {
								if (F4[i]<= 15.5) {
									if (F0[i]<= 44.5) {
										if (F6[i]<= 3.0) {
											if (F0[i]<= 39.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 5.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 2.5) {
											if (F4[i]<= 13.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F0[i]<= 48.0) {
										Class[0]++;
									} else {
										if (F2[i]<= 285914.0) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								}
							}
						} else {
							if (F3[i]<= 5.0) {
								if (F4[i]<= 11.0) {
									if (F0[i]<= 28.5) {
										Class[0]++;
									} else {
										if (F2[i]<= 165426.5) {
											Class[1]++;
										} else {
											if (F2[i]<= 172919.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									Class[1]++;
								}
							} else {
								if (F5[i]<= 5.5) {
									if (F4[i]<= 11.5) {
										if (F6[i]<= 1.5) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F6[i]<= 5.5) {
										Class[1]++;
									} else {
										Class[0]++;
									}
								}
							}
						}
					} else {
						if (F4[i]<= 10.5) {
							if (F3[i]<= 7.5) {
								if (F12[i]<= 34.5) {
									if (F9[i]<= 1.5) {
										if (F2[i]<= 250152.5) {
											if (F3[i]<= 5.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 1782.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F4[i]<= 8.0) {
											Class[0]++;
										} else {
											if (F11[i]<= 2297.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F4[i]<= 8.0) {
										if (F9[i]<= 1.5) {
											if (F2[i]<= 34734.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 1794.0) {
											if (F3[i]<= 4.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 9.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F2[i]<= 544799.5) {
									if (F2[i]<= 185885.0) {
										if (F0[i]<= 34.5) {
											if (F0[i]<= 31.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 3.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F6[i]<= 8.5) {
											if (F2[i]<= 241920.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 238359.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F8[i]<= 1.5) {
										if (F13[i]<= 3.5) {
											if (F6[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F10[i]<= 3844.0) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								}
							}
						} else {
							if (F10[i]<= 5095.5) {
								if (F11[i]<= 1794.0) {
									if (F12[i]<= 31.0) {
										if (F9[i]<= 1.5) {
											if (F3[i]<= 9.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 3.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 25.5) {
											if (F12[i]<= 37.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 6.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F0[i]<= 27.0) {
										if (F3[i]<= 6.0) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									} else {
										if (F6[i]<= 5.0) {
											if (F9[i]<= 1.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
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
				if (F3[i]<= 1.5) {
					if (F0[i]<= 27.5) {
						if (F2[i]<= 33930.0) {
							Class[1]++;
						} else {
							if (F11[i]<= 924.0) {
								if (F9[i]<= 1.5) {
									if (F7[i]<= 1.5) {
										if (F0[i]<= 24.5) {
											Class[0]++;
										} else {
											if (F12[i]<= 75.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F0[i]<= 23.0) {
											Class[0]++;
										} else {
											if (F10[i]<= 1414.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F8[i]<= 1.5) {
										if (F2[i]<= 182322.0) {
											Class[0]++;
										} else {
											if (F0[i]<= 25.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 304608.0) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								}
							} else {
								if (F0[i]<= 26.5) {
									Class[0]++;
								} else {
									Class[1]++;
								}
							}
						}
					} else {
						if (F7[i]<= 1.5) {
							if (F2[i]<= 34870.0) {
								if (F0[i]<= 39.5) {
									if (F2[i]<= 29320.0) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								} else {
									Class[1]++;
								}
							} else {
								if (F10[i]<= 7731.5) {
									if (F5[i]<= 2.0) {
										if (F2[i]<= 120301.5) {
											if (F1[i]<= 3.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F8[i]<= 2.5) {
											if (F5[i]<= 3.5) {
												Class[0]++;
											} else {
												Class[0]++;
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
							if (F6[i]<= 6.5) {
								if (F10[i]<= 5095.5) {
									if (F2[i]<= 199142.5) {
										if (F2[i]<= 79590.0) {
											if (F0[i]<= 47.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 67.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 260592.5) {
											if (F9[i]<= 1.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 57.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 158821.5) {
										if (F2[i]<= 152945.0) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									} else {
										Class[1]++;
									}
								}
							} else {
								if (F2[i]<= 104830.5) {
									if (F12[i]<= 44.0) {
										if (F2[i]<= 67130.5) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									} else {
										if (F12[i]<= 55.0) {
											if (F12[i]<= 47.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 40.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= 4483.5) {
										if (F0[i]<= 38.5) {
											if (F12[i]<= 44.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= 1.5) {
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
						}
					}
				} else {
					if (F5[i]<= 1.5) {
						if (F0[i]<= 34.5) {
							if (F3[i]<= 6.5) {
								if (F3[i]<= 3.5) {
									Class[0]++;
								} else {
									if (F2[i]<= 110364.5) {
										Class[0]++;
									} else {
										if (F2[i]<= 114905.0) {
											Class[1]++;
										} else {
											if (F10[i]<= 4444.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F3[i]<= 10.5) {
									if (F6[i]<= 4.5) {
										if (F2[i]<= 189969.5) {
											if (F0[i]<= 27.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 71.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 4.0) {
											if (F2[i]<= 307172.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 63.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F4[i]<= 11.5) {
										Class[0]++;
									} else {
										if (F9[i]<= 1.5) {
											Class[0]++;
										} else {
											if (F2[i]<= 135891.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F1[i]<= 1.5) {
								if (F2[i]<= 87490.0) {
									Class[0]++;
								} else {
									Class[1]++;
								}
							} else {
								if (F10[i]<= 7372.5) {
									if (F4[i]<= 11.5) {
										if (F6[i]<= 1.5) {
											if (F12[i]<= 43.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 2187.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F6[i]<= 3.0) {
											if (F9[i]<= 1.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 54.0) {
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
						}
					} else {
						if (F5[i]<= 2.5) {
							if (F0[i]<= 29.5) {
								if (F10[i]<= 6155.5) {
									if (F6[i]<= 2.5) {
										if (F0[i]<= 27.5) {
											if (F2[i]<= 159501.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 52.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 13.0) {
											if (F1[i]<= 3.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 52.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									Class[1]++;
								}
							} else {
								if (F2[i]<= 93556.5) {
									if (F1[i]<= 1.5) {
										if (F12[i]<= 45.5) {
											if (F3[i]<= 7.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 55.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F6[i]<= 6.5) {
											if (F3[i]<= 9.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 6.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F0[i]<= 35.5) {
										if (F11[i]<= 1794.0) {
											if (F4[i]<= 13.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 107486.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F6[i]<= 4.5) {
											if (F4[i]<= 11.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 1794.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F8[i]<= 2.5) {
								if (F2[i]<= 204254.5) {
									if (F1[i]<= 6.5) {
										if (F10[i]<= 4668.5) {
											if (F0[i]<= 35.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 3.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 12.5) {
											if (F12[i]<= 52.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F5[i]<= 6.5) {
										if (F4[i]<= 13.0) {
											if (F2[i]<= 204821.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 58.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F6[i]<= 8.0) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								}
							} else {
								if (F3[i]<= 5.0) {
									if (F2[i]<= 142875.5) {
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
			}
		} else {
			if (F10[i]<= 4668.5) {
				if (F1[i]<= 2.5) {
					if (F0[i]<= 28.5) {
						if (F3[i]<= 5.0) {
							Class[0]++;
						} else {
							if (F13[i]<= 18.5) {
								Class[0]++;
							} else {
								Class[1]++;
							}
						}
					} else {
						if (F8[i]<= 3.5) {
							if (F4[i]<= 14.5) {
								if (F4[i]<= 10.5) {
									if (F10[i]<= 4136.5) {
										if (F0[i]<= 39.5) {
											Class[0]++;
										} else {
											if (F5[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 110395.0) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F5[i]<= 2.5) {
										Class[0]++;
									} else {
										if (F5[i]<= 3.5) {
											if (F2[i]<= 275535.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 4.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F3[i]<= 10.5) {
									if (F7[i]<= 4.5) {
										if (F5[i]<= 2.0) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F1[i]<= 1.5) {
										Class[0]++;
									} else {
										if (F0[i]<= 58.0) {
											if (F5[i]<= 2.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							}
						} else {
							if (F2[i]<= 53393.5) {
								Class[1]++;
							} else {
								Class[0]++;
							}
						}
					}
				} else {
					if (F12[i]<= 41.5) {
						if (F12[i]<= 31.0) {
							if (F4[i]<= 9.5) {
								Class[0]++;
							} else {
								if (F6[i]<= 1.5) {
									if (F5[i]<= 1.5) {
										Class[0]++;
									} else {
										if (F0[i]<= 57.0) {
											Class[0]++;
										} else {
											if (F0[i]<= 60.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= 2.5) {
										Class[0]++;
									} else {
										if (F5[i]<= 3.5) {
											if (F6[i]<= 5.5) {
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
						} else {
							if (F11[i]<= 2248.0) {
								if (F5[i]<= 6.0) {
									if (F5[i]<= 1.5) {
										if (F6[i]<= 7.5) {
											if (F11[i]<= 1486.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F7[i]<= 5.5) {
											if (F0[i]<= 45.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 10.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 56547.0) {
										Class[1]++;
									} else {
										if (F12[i]<= 35.5) {
											if (F4[i]<= 12.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 52.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F6[i]<= 2.5) {
									Class[1]++;
								} else {
									if (F12[i]<= 37.5) {
										Class[0]++;
									} else {
										if (F7[i]<= 4.5) {
											if (F0[i]<= 32.0) {
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
						if (F5[i]<= 1.5) {
							if (F8[i]<= 2.5) {
								if (F1[i]<= 3.5) {
									if (F7[i]<= 4.5) {
										if (F9[i]<= 1.5) {
											if (F12[i]<= 42.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F0[i]<= 40.0) {
											Class[0]++;
										} else {
											if (F0[i]<= 43.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									Class[0]++;
								}
							} else {
								if (F12[i]<= 62.0) {
									Class[0]++;
								} else {
									if (F7[i]<= 4.5) {
										Class[1]++;
									} else {
										Class[0]++;
									}
								}
							}
						} else {
							if (F0[i]<= 38.5) {
								if (F5[i]<= 2.5) {
									if (F0[i]<= 31.5) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								} else {
									if (F12[i]<= 91.5) {
										if (F3[i]<= 6.5) {
											if (F0[i]<= 28.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.5) {
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
								if (F2[i]<= 28846.5) {
									if (F2[i]<= 22832.5) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								} else {
									if (F4[i]<= 9.5) {
										if (F3[i]<= 4.0) {
											if (F2[i]<= 38588.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F0[i]<= 59.0) {
											if (F13[i]<= 24.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 152987.5) {
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
				if (F3[i]<= 12.0) {
					if (F13[i]<= 3.0) {
						if (F2[i]<= 66495.0) {
							Class[0]++;
						} else {
							if (F5[i]<= 1.5) {
								if (F8[i]<= 1.5) {
									if (F2[i]<= 160098.0) {
										Class[1]++;
									} else {
										if (F10[i]<= 8028.5) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F2[i]<= 155627.5) {
										Class[1]++;
									} else {
										Class[0]++;
									}
								}
							} else {
								if (F9[i]<= 1.5) {
									if (F5[i]<= 3.5) {
										if (F0[i]<= 46.5) {
											if (F4[i]<= 13.5) {
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
								} else {
									if (F6[i]<= 4.5) {
										if (F0[i]<= 63.0) {
											if (F2[i]<= 179269.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F4[i]<= 9.5) {
											Class[0]++;
										} else {
											if (F3[i]<= 6.5) {
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
						Class[1]++;
					}
				} else {
					Class[0]++;
				}
			}
		}

		if (F0[i]<= 29.5) {
			if (F0[i]<= 26.5) {
				if (F5[i]<= 1.5) {
					if (F0[i]<= 24.5) {
						if (F3[i]<= 6.5) {
							if (F3[i]<= 1.5) {
								if (F0[i]<= 22.5) {
									if (F8[i]<= 3.5) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								} else {
									Class[0]++;
								}
							} else {
								if (F8[i]<= 1.5) {
									Class[0]++;
								} else {
									if (F9[i]<= 1.5) {
										Class[0]++;
									} else {
										if (F3[i]<= 5.5) {
											Class[0]++;
										} else {
											if (F10[i]<= 50296.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F2[i]<= 24244.5) {
								Class[1]++;
							} else {
								if (F12[i]<= 57.5) {
									if (F0[i]<= 21.5) {
										Class[0]++;
									} else {
										if (F11[i]<= 2272.5) {
											if (F6[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F12[i]<= 62.5) {
										if (F6[i]<= 9.0) {
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
						if (F1[i]<= 6.5) {
							if (F4[i]<= 12.5) {
								if (F6[i]<= 7.5) {
									Class[0]++;
								} else {
									if (F0[i]<= 25.5) {
										if (F12[i]<= 47.5) {
											Class[0]++;
										} else {
											if (F6[i]<= 8.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[0]++;
									}
								}
							} else {
								if (F2[i]<= 176971.0) {
									if (F0[i]<= 25.5) {
										if (F10[i]<= 15751.0) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										if (F9[i]<= 1.5) {
											if (F10[i]<= 5260.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F6[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F8[i]<= 1.5) {
										if (F9[i]<= 1.5) {
											if (F0[i]<= 25.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										Class[0]++;
									}
								}
							}
						} else {
							if (F4[i]<= 12.0) {
								Class[0]++;
							} else {
								if (F0[i]<= 25.5) {
									if (F6[i]<= 3.5) {
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
				} else {
					if (F12[i]<= 43.5) {
						if (F10[i]<= 5095.5) {
							if (F6[i]<= 4.5) {
								if (F2[i]<= 353281.5) {
									if (F11[i]<= 1881.5) {
										if (F4[i]<= 13.5) {
											if (F0[i]<= 24.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F2[i]<= 414555.0) {
										if (F9[i]<= 1.5) {
											if (F12[i]<= 32.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 24.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F3[i]<= 4.0) {
											if (F4[i]<= 11.0) {
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
								if (F11[i]<= 2468.0) {
									if (F5[i]<= 5.5) {
										if (F7[i]<= 3.5) {
											if (F6[i]<= 7.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 24.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 1.5) {
											Class[0]++;
										} else {
											if (F2[i]<= 129432.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									Class[1]++;
								}
							}
						} else {
							Class[1]++;
						}
					} else {
						if (F6[i]<= 7.5) {
							if (F4[i]<= 12.5) {
								if (F5[i]<= 3.5) {
									if (F4[i]<= 9.5) {
										if (F6[i]<= 2.5) {
											if (F12[i]<= 69.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F6[i]<= 6.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= 2.5) {
											if (F8[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									Class[0]++;
								}
							} else {
								if (F12[i]<= 44.5) {
									Class[0]++;
								} else {
									if (F12[i]<= 56.5) {
										if (F7[i]<= 1.5) {
											Class[0]++;
										} else {
											if (F6[i]<= 5.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 250336.5) {
											if (F0[i]<= 25.5) {
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
							if (F4[i]<= 9.5) {
								if (F10[i]<= 5576.0) {
									if (F6[i]<= 8.5) {
										if (F0[i]<= 24.5) {
											if (F2[i]<= 126145.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 7.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[0]++;
									}
								} else {
									Class[1]++;
								}
							} else {
								if (F5[i]<= 2.5) {
									if (F12[i]<= 49.0) {
										Class[1]++;
									} else {
										if (F3[i]<= 2.5) {
											Class[0]++;
										} else {
											if (F2[i]<= 37865.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
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
				if (F3[i]<= 1.5) {
					if (F5[i]<= 1.5) {
						if (F2[i]<= 198684.5) {
							if (F6[i]<= 3.5) {
								Class[0]++;
							} else {
								if (F10[i]<= 7731.5) {
									if (F12[i]<= 52.5) {
										if (F6[i]<= 7.5) {
											if (F8[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F13[i]<= 7.5) {
											if (F6[i]<= 5.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									Class[1]++;
								}
							}
						} else {
							if (F0[i]<= 27.5) {
								Class[0]++;
							} else {
								if (F12[i]<= 49.0) {
									Class[0]++;
								} else {
									if (F12[i]<= 51.0) {
										if (F7[i]<= 3.5) {
											if (F1[i]<= 1.5) {
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
							}
						}
					} else {
						if (F5[i]<= 2.5) {
							if (F7[i]<= 2.5) {
								if (F11[i]<= 1794.0) {
									if (F2[i]<= 138120.0) {
										if (F2[i]<= 103066.0) {
											if (F0[i]<= 28.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F12[i]<= 42.5) {
											if (F8[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 4.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									Class[1]++;
								}
							} else {
								if (F6[i]<= 12.0) {
									if (F13[i]<= 3.0) {
										if (F2[i]<= 368125.0) {
											if (F12[i]<= 48.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										Class[0]++;
									}
								} else {
									Class[0]++;
								}
							}
						} else {
							if (F8[i]<= 2.0) {
								Class[0]++;
							} else {
								if (F1[i]<= 4.5) {
									Class[1]++;
								} else {
									Class[0]++;
								}
							}
						}
					}
				} else {
					if (F5[i]<= 1.5) {
						if (F6[i]<= 2.5) {
							if (F6[i]<= 1.5) {
								Class[0]++;
							} else {
								if (F12[i]<= 59.0) {
									Class[0]++;
								} else {
									if (F1[i]<= 5.0) {
										if (F2[i]<= 189536.5) {
											if (F2[i]<= 145672.0) {
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
							if (F13[i]<= 4.5) {
								if (F7[i]<= 2.5) {
									if (F9[i]<= 1.5) {
										if (F11[i]<= 704.0) {
											if (F2[i]<= 387082.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F6[i]<= 4.5) {
											if (F2[i]<= 38726.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									Class[0]++;
								}
							} else {
								if (F12[i]<= 49.0) {
									Class[0]++;
								} else {
									if (F10[i]<= 297.0) {
										if (F7[i]<= 2.5) {
											if (F6[i]<= 8.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
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
						if (F10[i]<= 5095.5) {
							if (F7[i]<= 3.5) {
								if (F6[i]<= 4.5) {
									if (F7[i]<= 1.5) {
										Class[0]++;
									} else {
										if (F8[i]<= 2.5) {
											if (F2[i]<= 370724.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 228321.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F11[i]<= 1794.0) {
										if (F5[i]<= 2.5) {
											if (F6[i]<= 10.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										Class[1]++;
									}
								}
							} else {
								if (F1[i]<= 2.5) {
									if (F13[i]<= 13.5) {
										if (F0[i]<= 28.5) {
											Class[0]++;
										} else {
											if (F6[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
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
				}
			}
		} else {
			if (F11[i]<= 1820.5) {
				if (F5[i]<= 2.5) {
					if (F7[i]<= 3.5) {
						if (F7[i]<= 1.5) {
							if (F4[i]<= 14.5) {
								if (F12[i]<= 42.5) {
									if (F4[i]<= 12.5) {
										if (F6[i]<= 7.5) {
											if (F10[i]<= 4230.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 4.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 35.5) {
											if (F13[i]<= 13.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 4.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= 7731.5) {
										if (F11[i]<= 782.0) {
											if (F2[i]<= 192740.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 12.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										Class[1]++;
									}
								}
							} else {
								if (F1[i]<= 3.5) {
									if (F10[i]<= 2936.5) {
										if (F0[i]<= 32.5) {
											Class[0]++;
										} else {
											if (F6[i]<= 3.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F1[i]<= 6.0) {
										if (F0[i]<= 30.5) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										if (F4[i]<= 15.5) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								}
							}
						} else {
							if (F10[i]<= 5095.5) {
								if (F3[i]<= 1.5) {
									if (F12[i]<= 31.0) {
										if (F9[i]<= 1.5) {
											if (F2[i]<= 568422.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 49.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 114375.0) {
											if (F0[i]<= 31.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 1.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F3[i]<= 3.5) {
										if (F12[i]<= 34.5) {
											if (F7[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 41.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 62.5) {
											if (F4[i]<= 13.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F3[i]<= 4.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F1[i]<= 2.5) {
									if (F2[i]<= 286231.5) {
										if (F2[i]<= 33263.5) {
											if (F9[i]<= 1.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F6[i]<= 8.0) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F0[i]<= 63.5) {
										Class[1]++;
									} else {
										if (F0[i]<= 67.5) {
											if (F10[i]<= 10585.5) {
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
						}
					} else {
						if (F7[i]<= 5.5) {
							if (F5[i]<= 1.5) {
								if (F7[i]<= 4.5) {
									if (F0[i]<= 34.5) {
										Class[0]++;
									} else {
										if (F4[i]<= 10.5) {
											if (F0[i]<= 35.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 129648.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= 10893.5) {
										if (F8[i]<= 1.5) {
											if (F0[i]<= 42.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										Class[1]++;
									}
								}
							} else {
								if (F10[i]<= 5381.0) {
									if (F0[i]<= 39.5) {
										if (F1[i]<= 4.5) {
											if (F8[i]<= 2.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F1[i]<= 2.5) {
											Class[0]++;
										} else {
											if (F8[i]<= 3.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									Class[1]++;
								}
							}
						} else {
							if (F4[i]<= 13.5) {
								if (F2[i]<= 259597.0) {
									if (F1[i]<= 3.5) {
										if (F13[i]<= 2.0) {
											if (F8[i]<= 3.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F1[i]<= 4.5) {
											if (F12[i]<= 42.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F4[i]<= 9.5) {
										Class[0]++;
									} else {
										if (F5[i]<= 1.5) {
											Class[0]++;
										} else {
											if (F2[i]<= 366202.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F12[i]<= 39.0) {
									Class[1]++;
								} else {
									if (F6[i]<= 3.0) {
										Class[1]++;
									} else {
										if (F9[i]<= 1.5) {
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
					if (F10[i]<= 7073.5) {
						if (F4[i]<= 12.5) {
							if (F12[i]<= 45.5) {
								if (F2[i]<= 40762.5) {
									if (F3[i]<= 6.5) {
										if (F7[i]<= 3.5) {
											if (F0[i]<= 55.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										Class[0]++;
									}
								} else {
									if (F10[i]<= 4718.5) {
										if (F12[i]<= 41.5) {
											if (F13[i]<= 29.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 239307.0) {
											if (F6[i]<= 9.5) {
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
								if (F9[i]<= 1.5) {
									if (F7[i]<= 5.5) {
										if (F0[i]<= 39.5) {
											if (F2[i]<= 33674.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 3.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 73.5) {
											if (F11[i]<= 782.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F0[i]<= 47.5) {
										if (F2[i]<= 184561.5) {
											if (F6[i]<= 12.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F6[i]<= 4.5) {
											Class[0]++;
										} else {
											if (F7[i]<= 3.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F4[i]<= 13.5) {
								if (F13[i]<= 1.5) {
									if (F6[i]<= 2.5) {
										if (F10[i]<= 1087.0) {
											if (F9[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F11[i]<= 1486.0) {
											if (F9[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 8.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F0[i]<= 46.5) {
										if (F9[i]<= 1.5) {
											if (F0[i]<= 45.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 58.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[0]++;
									}
								}
							} else {
								if (F1[i]<= 4.5) {
									if (F12[i]<= 49.0) {
										if (F0[i]<= 60.5) {
											if (F7[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 3.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= 208512.5) {
											if (F4[i]<= 15.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 301466.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F12[i]<= 57.5) {
										if (F2[i]<= 141246.0) {
											Class[0]++;
										} else {
											if (F7[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F8[i]<= 2.0) {
											if (F5[i]<= 6.0) {
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
					} else {
						if (F4[i]<= 9.5) {
							if (F12[i]<= 56.0) {
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
				if (F5[i]<= 2.5) {
					if (F4[i]<= 10.5) {
						if (F6[i]<= 6.5) {
							if (F8[i]<= 1.5) {
								if (F11[i]<= 1978.5) {
									if (F1[i]<= 1.5) {
										if (F0[i]<= 48.0) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										if (F11[i]<= 1881.5) {
											if (F3[i]<= 4.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F2[i]<= 286847.0) {
										if (F6[i]<= 1.5) {
											if (F0[i]<= 42.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 6.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[0]++;
									}
								}
							} else {
								if (F8[i]<= 2.5) {
									if (F2[i]<= 33524.0) {
										Class[1]++;
									} else {
										Class[0]++;
									}
								} else {
									Class[1]++;
								}
							}
						} else {
							if (F4[i]<= 9.5) {
								if (F11[i]<= 1978.5) {
									if (F2[i]<= 258162.5) {
										if (F7[i]<= 3.5) {
											if (F2[i]<= 167092.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F0[i]<= 47.0) {
											if (F6[i]<= 7.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F7[i]<= 1.5) {
										if (F1[i]<= 5.0) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										if (F11[i]<= 2218.5) {
											Class[0]++;
										} else {
											if (F0[i]<= 54.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F2[i]<= 133179.5) {
									if (F6[i]<= 7.5) {
										if (F11[i]<= 1976.5) {
											Class[1]++;
										} else {
											if (F0[i]<= 38.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F0[i]<= 42.5) {
										if (F6[i]<= 11.5) {
											if (F0[i]<= 39.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F12[i]<= 37.5) {
											Class[1]++;
										} else {
											if (F0[i]<= 52.0) {
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
						if (F12[i]<= 82.0) {
							if (F4[i]<= 12.5) {
								if (F12[i]<= 47.5) {
									Class[1]++;
								} else {
									if (F6[i]<= 6.5) {
										Class[1]++;
									} else {
										if (F4[i]<= 11.5) {
											if (F7[i]<= 3.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 5.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F0[i]<= 54.5) {
									if (F5[i]<= 1.5) {
										if (F9[i]<= 1.5) {
											Class[1]++;
										} else {
											if (F0[i]<= 45.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F4[i]<= 15.5) {
											if (F4[i]<= 13.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 354495.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= 1.5) {
										Class[0]++;
									} else {
										if (F13[i]<= 20.5) {
											if (F2[i]<= 181248.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 13.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							Class[0]++;
						}
					}
				} else {
					if (F12[i]<= 61.0) {
						if (F2[i]<= 122317.5) {
							if (F9[i]<= 1.5) {
								if (F11[i]<= 2116.0) {
									Class[0]++;
								} else {
									Class[1]++;
								}
							} else {
								if (F0[i]<= 67.0) {
									if (F2[i]<= 109900.5) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								} else {
									Class[0]++;
								}
							}
						} else {
							if (F0[i]<= 54.5) {
								if (F1[i]<= 2.5) {
									Class[0]++;
								} else {
									if (F11[i]<= 2169.0) {
										Class[0]++;
									} else {
										if (F4[i]<= 10.0) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								}
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

		if (F0[i]<= 29.5) {
			if (F12[i]<= 40.5) {
				if (F10[i]<= 7073.5) {
					if (F11[i]<= 1881.5) {
						if (F4[i]<= 10.5) {
							if (F5[i]<= 1.5) {
								if (F4[i]<= 9.5) {
									Class[0]++;
								} else {
									if (F13[i]<= 1.5) {
										if (F7[i]<= 2.5) {
											if (F11[i]<= 881.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[0]++;
									}
								}
							} else {
								if (F6[i]<= 2.5) {
									if (F9[i]<= 1.5) {
										if (F12[i]<= 39.0) {
											Class[0]++;
										} else {
											if (F0[i]<= 25.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 28.5) {
											if (F7[i]<= 3.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 4.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= 2.5) {
										if (F10[i]<= 4147.0) {
											if (F0[i]<= 28.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F0[i]<= 28.5) {
											Class[0]++;
										} else {
											if (F6[i]<= 8.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F12[i]<= 39.5) {
								if (F9[i]<= 1.5) {
									if (F0[i]<= 28.5) {
										Class[0]++;
									} else {
										if (F7[i]<= 4.0) {
											if (F3[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F12[i]<= 34.0) {
										Class[0]++;
									} else {
										if (F1[i]<= 2.5) {
											if (F2[i]<= 85684.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 35.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F0[i]<= 27.5) {
									if (F6[i]<= 1.5) {
										if (F10[i]<= 2032.0) {
											if (F2[i]<= 175914.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F2[i]<= 253338.0) {
											if (F8[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= 1.5) {
										if (F4[i]<= 13.5) {
											if (F13[i]<= 3.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 7.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F6[i]<= 6.5) {
											if (F7[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.5) {
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
						if (F3[i]<= 1.5) {
							if (F11[i]<= 1978.5) {
								Class[1]++;
							} else {
								if (F6[i]<= 7.5) {
									Class[1]++;
								} else {
									Class[0]++;
								}
							}
						} else {
							if (F2[i]<= 381405.5) {
								if (F11[i]<= 1930.5) {
									Class[1]++;
								} else {
									if (F11[i]<= 2468.0) {
										if (F0[i]<= 25.0) {
											Class[0]++;
										} else {
											if (F0[i]<= 27.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F8[i]<= 1.5) {
											if (F6[i]<= 6.0) {
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
								Class[1]++;
							}
						}
					}
				} else {
					if (F3[i]<= 11.5) {
						if (F12[i]<= 15.5) {
							Class[0]++;
						} else {
							Class[1]++;
						}
					} else {
						Class[0]++;
					}
				}
			} else {
				if (F1[i]<= 6.5) {
					if (F6[i]<= 8.5) {
						if (F7[i]<= 3.5) {
							if (F9[i]<= 1.5) {
								if (F7[i]<= 1.5) {
									if (F13[i]<= 32.0) {
										if (F4[i]<= 10.5) {
											if (F1[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 7731.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F6[i]<= 6.5) {
										if (F10[i]<= 4225.0) {
											if (F1[i]<= 2.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 57.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 924.0) {
											if (F4[i]<= 9.5) {
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
								if (F3[i]<= 10.5) {
									if (F7[i]<= 2.0) {
										if (F12[i]<= 41.5) {
											Class[1]++;
										} else {
											if (F5[i]<= 2.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 2589.0) {
											if (F4[i]<= 9.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F0[i]<= 27.5) {
										Class[1]++;
									} else {
										Class[0]++;
									}
								}
							}
						} else {
							if (F13[i]<= 13.5) {
								if (F12[i]<= 62.0) {
									Class[0]++;
								} else {
									if (F8[i]<= 2.5) {
										if (F7[i]<= 4.5) {
											if (F0[i]<= 25.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										Class[1]++;
									}
								}
							} else {
								if (F13[i]<= 24.5) {
									if (F7[i]<= 5.5) {
										if (F13[i]<= 16.0) {
											if (F12[i]<= 47.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 4.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
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
						if (F5[i]<= 1.5) {
							if (F6[i]<= 12.5) {
								if (F0[i]<= 25.5) {
									Class[0]++;
								} else {
									if (F2[i]<= 148667.5) {
										Class[0]++;
									} else {
										if (F8[i]<= 2.5) {
											Class[0]++;
										} else {
											if (F0[i]<= 27.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F3[i]<= 7.5) {
									Class[0]++;
								} else {
									if (F0[i]<= 28.0) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								}
							}
						} else {
							if (F2[i]<= 405395.5) {
								if (F12[i]<= 42.5) {
									Class[1]++;
								} else {
									if (F7[i]<= 2.5) {
										if (F7[i]<= 1.5) {
											Class[0]++;
										} else {
											if (F10[i]<= 1052.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 4.0) {
											if (F2[i]<= 254497.5) {
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
								if (F2[i]<= 411185.0) {
									Class[1]++;
								} else {
									Class[0]++;
								}
							}
						}
					}
				} else {
					if (F9[i]<= 1.5) {
						if (F7[i]<= 3.0) {
							if (F0[i]<= 28.5) {
								if (F11[i]<= 943.5) {
									if (F3[i]<= 4.5) {
										if (F0[i]<= 27.5) {
											if (F12[i]<= 47.5) {
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
								} else {
									Class[1]++;
								}
							} else {
								Class[0]++;
							}
						} else {
							Class[0]++;
						}
					} else {
						Class[0]++;
					}
				}
			}
		} else {
			if (F4[i]<= 12.5) {
				if (F5[i]<= 2.5) {
					if (F7[i]<= 1.5) {
						if (F12[i]<= 49.5) {
							if (F1[i]<= 1.5) {
								if (F4[i]<= 9.5) {
									if (F8[i]<= 1.5) {
										if (F10[i]<= 7172.0) {
											if (F12[i]<= 39.0) {
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
								} else {
									Class[0]++;
								}
							} else {
								if (F10[i]<= 7731.5) {
									if (F3[i]<= 7.5) {
										if (F6[i]<= 10.5) {
											if (F0[i]<= 30.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 39.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 41.0) {
											if (F12[i]<= 39.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 2.5) {
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
							if (F13[i]<= 2.0) {
								if (F11[i]<= 1279.5) {
									if (F2[i]<= 343816.5) {
										if (F0[i]<= 36.5) {
											if (F12[i]<= 67.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 1.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 1662.5) {
											if (F6[i]<= 8.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= 4.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									Class[1]++;
								}
							} else {
								Class[0]++;
							}
						}
					} else {
						if (F3[i]<= 8.5) {
							if (F6[i]<= 2.5) {
								if (F7[i]<= 3.5) {
									if (F12[i]<= 41.0) {
										if (F7[i]<= 2.5) {
											if (F12[i]<= 33.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 114119.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 1794.0) {
											if (F4[i]<= 8.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F1[i]<= 6.0) {
										if (F8[i]<= 1.5) {
											if (F10[i]<= 10596.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										Class[1]++;
									}
								}
							} else {
								if (F7[i]<= 3.5) {
									if (F10[i]<= 5095.5) {
										if (F12[i]<= 34.5) {
											if (F1[i]<= 3.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 63404.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 6.5) {
											if (F0[i]<= 70.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 68.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= 7073.5) {
										if (F12[i]<= 57.5) {
											if (F5[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 9.5) {
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
							if (F11[i]<= 1794.5) {
								if (F2[i]<= 29921.5) {
									if (F1[i]<= 3.5) {
										if (F6[i]<= 8.5) {
											Class[1]++;
										} else {
											if (F0[i]<= 64.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[0]++;
									}
								} else {
									if (F3[i]<= 12.5) {
										if (F12[i]<= 49.5) {
											if (F12[i]<= 39.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 53.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 37.5) {
											if (F6[i]<= 7.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 21.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F1[i]<= 6.0) {
									if (F12[i]<= 59.5) {
										if (F4[i]<= 5.0) {
											Class[0]++;
										} else {
											if (F2[i]<= 283455.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
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
					if (F9[i]<= 1.5) {
						if (F12[i]<= 41.0) {
							if (F6[i]<= 12.5) {
								if (F13[i]<= 27.0) {
									if (F11[i]<= 2218.0) {
										if (F1[i]<= 6.5) {
											if (F0[i]<= 38.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 6.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F6[i]<= 2.0) {
											Class[0]++;
										} else {
											if (F6[i]<= 6.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 231194.5) {
										if (F7[i]<= 3.0) {
											if (F3[i]<= 10.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										Class[0]++;
									}
								}
							} else {
								if (F12[i]<= 37.5) {
									Class[0]++;
								} else {
									if (F2[i]<= 207835.0) {
										Class[0]++;
									} else {
										if (F0[i]<= 61.0) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								}
							}
						} else {
							if (F4[i]<= 10.5) {
								if (F0[i]<= 47.5) {
									if (F3[i]<= 15.5) {
										if (F10[i]<= 4792.0) {
											if (F7[i]<= 2.5) {
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
									if (F10[i]<= 6739.5) {
										if (F2[i]<= 115445.0) {
											if (F12[i]<= 66.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 5.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										Class[1]++;
									}
								}
							} else {
								if (F0[i]<= 31.0) {
									Class[0]++;
								} else {
									if (F4[i]<= 11.5) {
										if (F5[i]<= 4.0) {
											if (F2[i]<= 50331.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 1222.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F0[i]<= 36.0) {
											if (F12[i]<= 53.0) {
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
						if (F11[i]<= 2341.0) {
							if (F10[i]<= 8028.5) {
								if (F12[i]<= 49.5) {
									if (F7[i]<= 3.5) {
										if (F7[i]<= 2.0) {
											if (F4[i]<= 11.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 9.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F3[i]<= 2.5) {
											if (F0[i]<= 50.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 6.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F6[i]<= 2.5) {
										if (F5[i]<= 4.5) {
											if (F2[i]<= 180680.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= 3.5) {
											if (F1[i]<= 5.5) {
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
						} else {
							if (F3[i]<= 7.5) {
								if (F6[i]<= 9.0) {
									if (F4[i]<= 9.5) {
										Class[1]++;
									} else {
										if (F7[i]<= 4.5) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
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
				if (F5[i]<= 1.5) {
					if (F10[i]<= 6739.5) {
						if (F3[i]<= 7.0) {
							if (F7[i]<= 2.5) {
								if (F12[i]<= 51.0) {
									if (F6[i]<= 6.5) {
										if (F8[i]<= 1.5) {
											if (F9[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 18.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 1.5) {
											Class[0]++;
										} else {
											if (F12[i]<= 42.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F0[i]<= 34.5) {
										if (F2[i]<= 157168.0) {
											if (F11[i]<= 782.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F6[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= 339879.5) {
											if (F6[i]<= 3.0) {
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
								if (F6[i]<= 3.0) {
									Class[0]++;
								} else {
									if (F2[i]<= 265184.5) {
										if (F8[i]<= 1.5) {
											if (F6[i]<= 6.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F12[i]<= 79.5) {
											if (F1[i]<= 4.0) {
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
							if (F0[i]<= 31.5) {
								Class[0]++;
							} else {
								if (F0[i]<= 52.0) {
									if (F13[i]<= 1.5) {
										if (F11[i]<= 782.0) {
											if (F2[i]<= 94370.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F0[i]<= 38.0) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F6[i]<= 3.0) {
										Class[1]++;
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
					if (F5[i]<= 2.5) {
						if (F11[i]<= 1794.0) {
							if (F12[i]<= 31.0) {
								if (F10[i]<= 7227.5) {
									if (F0[i]<= 47.5) {
										if (F12[i]<= 29.0) {
											if (F12[i]<= 21.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 35.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F3[i]<= 2.5) {
											if (F2[i]<= 173835.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 10.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									Class[1]++;
								}
							} else {
								if (F4[i]<= 13.5) {
									if (F7[i]<= 5.0) {
										if (F13[i]<= 1.5) {
											if (F12[i]<= 42.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 4843.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F6[i]<= 2.5) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F0[i]<= 57.5) {
										if (F6[i]<= 4.5) {
											if (F0[i]<= 37.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 1551.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F3[i]<= 7.0) {
											if (F6[i]<= 3.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 1.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F8[i]<= 1.5) {
								if (F6[i]<= 8.5) {
									if (F13[i]<= 1.5) {
										if (F11[i]<= 1989.5) {
											if (F1[i]<= 3.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 342979.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
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
						if (F12[i]<= 47.5) {
							if (F3[i]<= 7.0) {
								if (F12[i]<= 6.0) {
									if (F0[i]<= 74.0) {
										Class[1]++;
									} else {
										Class[0]++;
									}
								} else {
									if (F12[i]<= 33.5) {
										if (F10[i]<= 3570.5) {
											if (F7[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F10[i]<= 4668.5) {
											if (F11[i]<= 2116.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 7076.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F10[i]<= 3715.0) {
									if (F9[i]<= 1.5) {
										if (F2[i]<= 96336.0) {
											if (F5[i]<= 6.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= 222072.5) {
											if (F12[i]<= 36.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= 10.5) {
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
							if (F9[i]<= 1.5) {
								if (F10[i]<= 6081.5) {
									if (F3[i]<= 2.5) {
										if (F1[i]<= 2.5) {
											if (F6[i]<= 3.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 5.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F6[i]<= 5.0) {
											if (F12[i]<= 49.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 47.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									Class[1]++;
								}
							} else {
								if (F13[i]<= 3.0) {
									if (F1[i]<= 4.5) {
										if (F0[i]<= 50.5) {
											if (F2[i]<= 115649.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F3[i]<= 10.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 4.5) {
											Class[0]++;
										} else {
											if (F2[i]<= 118434.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F12[i]<= 55.0) {
										if (F13[i]<= 14.0) {
											Class[0]++;
										} else {
											if (F13[i]<= 19.5) {
												Class[1]++;
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
					}
				}
			}
		}

		if (F12[i]<= 43.5) {
			if (F0[i]<= 28.5) {
				if (F10[i]<= 5119.0) {
					if (F3[i]<= 1.5) {
						if (F7[i]<= 1.5) {
							Class[0]++;
						} else {
							if (F5[i]<= 1.5) {
								if (F13[i]<= 1.5) {
									if (F12[i]<= 39.5) {
										Class[0]++;
									} else {
										if (F6[i]<= 4.5) {
											if (F9[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									Class[0]++;
								}
							} else {
								if (F2[i]<= 105144.0) {
									if (F2[i]<= 54530.5) {
										Class[1]++;
									} else {
										if (F6[i]<= 5.5) {
											Class[0]++;
										} else {
											if (F8[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F0[i]<= 25.5) {
										if (F2[i]<= 169133.0) {
											if (F2[i]<= 166161.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F6[i]<= 5.5) {
											if (F12[i]<= 40.5) {
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
						if (F5[i]<= 1.5) {
							if (F7[i]<= 2.5) {
								if (F4[i]<= 9.5) {
									Class[0]++;
								} else {
									if (F1[i]<= 2.5) {
										if (F8[i]<= 2.5) {
											Class[0]++;
										} else {
											if (F3[i]<= 5.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= 23723.0) {
											if (F4[i]<= 10.5) {
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
								if (F6[i]<= 5.5) {
									if (F12[i]<= 31.5) {
										Class[0]++;
									} else {
										if (F6[i]<= 4.5) {
											Class[0]++;
										} else {
											if (F12[i]<= 32.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									Class[0]++;
								}
							}
						} else {
							if (F7[i]<= 3.5) {
								if (F7[i]<= 1.5) {
									if (F4[i]<= 9.5) {
										Class[0]++;
									} else {
										if (F6[i]<= 5.5) {
											if (F4[i]<= 10.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F4[i]<= 13.0) {
										if (F6[i]<= 2.5) {
											if (F4[i]<= 9.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 31.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F0[i]<= 24.5) {
											Class[1]++;
										} else {
											if (F10[i]<= 2506.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F5[i]<= 2.5) {
									if (F2[i]<= 162486.0) {
										if (F4[i]<= 8.5) {
											Class[0]++;
										} else {
											if (F6[i]<= 7.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[0]++;
									}
								} else {
									if (F6[i]<= 10.5) {
										Class[0]++;
									} else {
										if (F12[i]<= 38.5) {
											Class[0]++;
										} else {
											if (F2[i]<= 274008.0) {
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
					if (F12[i]<= 26.0) {
						Class[0]++;
					} else {
						if (F9[i]<= 1.5) {
							if (F4[i]<= 9.5) {
								if (F5[i]<= 1.5) {
									Class[0]++;
								} else {
									Class[1]++;
								}
							} else {
								Class[1]++;
							}
						} else {
							if (F4[i]<= 9.5) {
								if (F1[i]<= 4.0) {
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
			} else {
				if (F7[i]<= 3.5) {
					if (F4[i]<= 12.5) {
						if (F6[i]<= 4.5) {
							if (F7[i]<= 1.5) {
								if (F10[i]<= 8028.5) {
									if (F4[i]<= 5.5) {
										if (F3[i]<= 7.0) {
											if (F6[i]<= 2.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 38.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 20997.0) {
											Class[1]++;
										} else {
											if (F13[i]<= 29.0) {
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
								if (F10[i]<= 5095.5) {
									if (F4[i]<= 8.5) {
										if (F12[i]<= 23.5) {
											if (F12[i]<= 21.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 32.5) {
											if (F9[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 23519.5) {
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
							if (F10[i]<= 5095.5) {
								if (F11[i]<= 1794.5) {
									if (F4[i]<= 9.5) {
										if (F4[i]<= 7.5) {
											if (F6[i]<= 5.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 39.5) {
											if (F0[i]<= 29.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F4[i]<= 9.5) {
										if (F0[i]<= 51.5) {
											if (F2[i]<= 110277.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 1989.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= 2.5) {
											if (F0[i]<= 35.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							} else {
								if (F0[i]<= 70.0) {
									if (F1[i]<= 2.5) {
										if (F7[i]<= 2.5) {
											if (F10[i]<= 9590.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F10[i]<= 10543.0) {
											Class[1]++;
										} else {
											if (F0[i]<= 64.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									Class[0]++;
								}
							}
						}
					} else {
						if (F12[i]<= 32.5) {
							if (F7[i]<= 2.5) {
								if (F7[i]<= 1.5) {
									if (F4[i]<= 14.5) {
										if (F10[i]<= 4718.5) {
											if (F5[i]<= 3.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 140665.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F3[i]<= 10.5) {
											if (F1[i]<= 2.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F1[i]<= 1.5) {
										Class[0]++;
									} else {
										if (F13[i]<= 5.5) {
											if (F0[i]<= 74.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 52.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F2[i]<= 385805.5) {
									if (F2[i]<= 54608.0) {
										if (F1[i]<= 2.5) {
											Class[0]++;
										} else {
											if (F3[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F13[i]<= 3.5) {
											if (F12[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F6[i]<= 7.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									Class[0]++;
								}
							}
						} else {
							if (F6[i]<= 4.5) {
								if (F3[i]<= 7.0) {
									if (F7[i]<= 1.5) {
										if (F10[i]<= 7731.5) {
											if (F6[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F0[i]<= 37.5) {
											if (F13[i]<= 25.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 1666.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F10[i]<= 1551.5) {
										if (F6[i]<= 3.0) {
											if (F2[i]<= 186113.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 30.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										Class[1]++;
									}
								}
							} else {
								if (F11[i]<= 1794.0) {
									if (F7[i]<= 1.5) {
										if (F1[i]<= 4.0) {
											if (F8[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 51.5) {
											if (F6[i]<= 5.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 67809.0) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								}
							}
						}
					}
				} else {
					if (F3[i]<= 1.5) {
						if (F10[i]<= 4006.0) {
							if (F2[i]<= 38703.5) {
								if (F1[i]<= 3.5) {
									Class[0]++;
								} else {
									Class[1]++;
								}
							} else {
								if (F8[i]<= 1.5) {
									if (F10[i]<= 457.0) {
										if (F5[i]<= 3.5) {
											if (F0[i]<= 48.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										Class[0]++;
									}
								} else {
									if (F13[i]<= 2.0) {
										if (F0[i]<= 45.0) {
											Class[0]++;
										} else {
											if (F6[i]<= 5.0) {
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
							if (F10[i]<= 5316.5) {
								Class[1]++;
							} else {
								if (F12[i]<= 37.5) {
									if (F10[i]<= 15798.0) {
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
						if (F0[i]<= 40.5) {
							if (F10[i]<= 7073.5) {
								if (F4[i]<= 10.5) {
									if (F11[i]<= 2248.0) {
										if (F9[i]<= 1.5) {
											if (F0[i]<= 36.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F12[i]<= 41.0) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F2[i]<= 425633.5) {
										if (F0[i]<= 30.5) {
											if (F4[i]<= 13.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 33.5) {
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
								if (F6[i]<= 2.5) {
									if (F10[i]<= 16339.5) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								} else {
									Class[1]++;
								}
							}
						} else {
							if (F2[i]<= 25271.5) {
								Class[1]++;
							} else {
								if (F11[i]<= 2232.0) {
									if (F10[i]<= 4180.5) {
										if (F4[i]<= 13.0) {
											if (F8[i]<= 4.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 36.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 200082.5) {
											if (F10[i]<= 6897.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F3[i]<= 7.5) {
										Class[1]++;
									} else {
										if (F3[i]<= 9.5) {
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
			if (F0[i]<= 30.5) {
				if (F3[i]<= 1.5) {
					if (F0[i]<= 24.5) {
						if (F9[i]<= 1.5) {
							if (F5[i]<= 1.5) {
								if (F6[i]<= 6.5) {
									Class[0]++;
								} else {
									if (F0[i]<= 22.5) {
										Class[1]++;
									} else {
										Class[0]++;
									}
								}
							} else {
								if (F6[i]<= 5.0) {
									Class[0]++;
								} else {
									if (F2[i]<= 170070.5) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								}
							}
						} else {
							Class[0]++;
						}
					} else {
						if (F10[i]<= 7268.5) {
							if (F7[i]<= 1.5) {
								if (F0[i]<= 27.5) {
									if (F9[i]<= 1.5) {
										if (F5[i]<= 2.5) {
											if (F6[i]<= 5.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										Class[0]++;
									}
								} else {
									if (F13[i]<= 3.0) {
										if (F6[i]<= 4.5) {
											if (F11[i]<= 1924.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[0]++;
									}
								}
							} else {
								if (F2[i]<= 358793.0) {
									if (F12[i]<= 44.5) {
										Class[0]++;
									} else {
										if (F0[i]<= 27.5) {
											if (F5[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 1794.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F9[i]<= 1.5) {
										if (F12[i]<= 56.5) {
											if (F13[i]<= 14.0) {
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
							Class[1]++;
						}
					}
				} else {
					if (F10[i]<= 5095.5) {
						if (F6[i]<= 12.5) {
							if (F5[i]<= 1.5) {
								if (F3[i]<= 10.5) {
									if (F1[i]<= 2.5) {
										if (F0[i]<= 26.5) {
											Class[0]++;
										} else {
											if (F1[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F3[i]<= 3.5) {
											if (F12[i]<= 62.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 29.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F3[i]<= 11.5) {
										if (F12[i]<= 52.5) {
											if (F13[i]<= 9.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 3.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[0]++;
									}
								}
							} else {
								if (F4[i]<= 13.0) {
									if (F11[i]<= 1794.5) {
										if (F13[i]<= 18.0) {
											if (F5[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 4.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 46.5) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F9[i]<= 1.5) {
										if (F3[i]<= 7.0) {
											if (F8[i]<= 2.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 169746.5) {
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
							if (F5[i]<= 1.5) {
								if (F7[i]<= 2.5) {
									if (F11[i]<= 782.0) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								} else {
									Class[0]++;
								}
							} else {
								if (F2[i]<= 262964.5) {
									if (F12[i]<= 50.5) {
										if (F3[i]<= 6.5) {
											Class[0]++;
										} else {
											if (F2[i]<= 198236.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
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
						Class[1]++;
					}
				}
			} else {
				if (F4[i]<= 12.5) {
					if (F10[i]<= 5095.5) {
						if (F7[i]<= 1.5) {
							if (F2[i]<= 350999.0) {
								if (F5[i]<= 1.5) {
									if (F11[i]<= 2187.5) {
										if (F6[i]<= 12.0) {
											if (F12[i]<= 54.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 7.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F8[i]<= 3.5) {
										if (F3[i]<= 5.5) {
											if (F11[i]<= 2212.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 51.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 49.0) {
											if (F3[i]<= 5.5) {
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
								if (F4[i]<= 9.5) {
									if (F2[i]<= 353381.5) {
										Class[1]++;
									} else {
										Class[0]++;
									}
								} else {
									if (F2[i]<= 457730.0) {
										if (F5[i]<= 2.5) {
											if (F3[i]<= 6.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 11.0) {
												Class[1]++;
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
							if (F9[i]<= 1.5) {
								if (F7[i]<= 3.0) {
									if (F4[i]<= 8.5) {
										if (F4[i]<= 4.5) {
											if (F10[i]<= 4164.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 46.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 61.0) {
											if (F1[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 71820.0) {
										Class[0]++;
									} else {
										if (F5[i]<= 1.5) {
											if (F6[i]<= 6.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 5.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 3.5) {
									if (F6[i]<= 4.5) {
										if (F1[i]<= 4.5) {
											if (F0[i]<= 39.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F12[i]<= 65.0) {
											if (F13[i]<= 8.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F12[i]<= 90.0) {
										if (F3[i]<= 2.5) {
											if (F12[i]<= 51.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= 4.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 10.0) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								}
							}
						}
					} else {
						if (F7[i]<= 1.5) {
							if (F9[i]<= 1.5) {
								if (F10[i]<= 7731.5) {
									Class[0]++;
								} else {
									if (F4[i]<= 9.5) {
										if (F6[i]<= 5.0) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										Class[1]++;
									}
								}
							} else {
								if (F6[i]<= 3.5) {
									if (F2[i]<= 159097.5) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								} else {
									Class[1]++;
								}
							}
						} else {
							if (F6[i]<= 1.5) {
								if (F7[i]<= 4.0) {
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
					if (F3[i]<= 7.0) {
						if (F7[i]<= 1.5) {
							if (F1[i]<= 2.5) {
								if (F3[i]<= 2.5) {
									if (F5[i]<= 2.0) {
										if (F13[i]<= 3.0) {
											if (F10[i]<= 9250.0) {
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
								} else {
									if (F5[i]<= 3.5) {
										if (F6[i]<= 1.5) {
											Class[1]++;
										} else {
											if (F0[i]<= 50.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[0]++;
									}
								}
							} else {
								if (F4[i]<= 13.5) {
									if (F11[i]<= 1577.0) {
										if (F11[i]<= 782.0) {
											if (F1[i]<= 4.5) {
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
								} else {
									if (F10[i]<= 4718.5) {
										if (F6[i]<= 10.0) {
											if (F1[i]<= 3.5) {
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
							if (F10[i]<= 6897.5) {
								if (F5[i]<= 2.5) {
									if (F5[i]<= 1.5) {
										if (F4[i]<= 13.5) {
											if (F0[i]<= 32.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F1[i]<= 2.5) {
											if (F1[i]<= 1.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 742.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F11[i]<= 488.0) {
										if (F0[i]<= 34.5) {
											if (F3[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F9[i]<= 1.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 2270.0) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								}
							} else {
								if (F1[i]<= 2.5) {
									if (F3[i]<= 2.5) {
										if (F2[i]<= 167734.5) {
											if (F2[i]<= 91436.5) {
												Class[1]++;
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
									Class[1]++;
								}
							}
						}
					} else {
						if (F10[i]<= 5063.5) {
							if (F7[i]<= 3.5) {
								if (F10[i]<= 543.0) {
									if (F11[i]<= 782.0) {
										if (F12[i]<= 58.5) {
											if (F6[i]<= 6.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 5.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 45.5) {
											if (F3[i]<= 10.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									Class[0]++;
								}
							} else {
								if (F2[i]<= 54689.0) {
									if (F12[i]<= 55.0) {
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
				}
			}
		}

		if (F10[i]<= 5119.0) {
			if (F0[i]<= 30.5) {
				if (F0[i]<= 25.5) {
					if (F2[i]<= 353711.5) {
						if (F12[i]<= 47.5) {
							if (F6[i]<= 8.5) {
								if (F1[i]<= 6.0) {
									if (F0[i]<= 24.5) {
										if (F7[i]<= 3.5) {
											if (F4[i]<= 13.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 2231.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F9[i]<= 1.5) {
											if (F5[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= 3.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= 1.5) {
										Class[0]++;
									} else {
										if (F2[i]<= 151705.5) {
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
							if (F5[i]<= 1.5) {
								if (F2[i]<= 323268.0) {
									if (F3[i]<= 6.5) {
										Class[0]++;
									} else {
										if (F7[i]<= 2.5) {
											if (F13[i]<= 3.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F2[i]<= 324392.0) {
										Class[1]++;
									} else {
										Class[0]++;
									}
								}
							} else {
								if (F2[i]<= 241443.5) {
									if (F13[i]<= 18.5) {
										if (F0[i]<= 23.5) {
											Class[0]++;
										} else {
											if (F1[i]<= 1.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
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
						if (F12[i]<= 43.0) {
							if (F10[i]<= 2639.5) {
								if (F4[i]<= 12.5) {
									if (F12[i]<= 39.0) {
										Class[0]++;
									} else {
										if (F5[i]<= 1.5) {
											Class[0]++;
										} else {
											if (F6[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F1[i]<= 4.0) {
										if (F0[i]<= 24.5) {
											Class[0]++;
										} else {
											if (F12[i]<= 39.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[0]++;
									}
								}
							} else {
								if (F7[i]<= 2.0) {
									Class[0]++;
								} else {
									Class[1]++;
								}
							}
						} else {
							if (F5[i]<= 1.5) {
								Class[0]++;
							} else {
								if (F4[i]<= 9.0) {
									Class[0]++;
								} else {
									if (F7[i]<= 1.5) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								}
							}
						}
					}
				} else {
					if (F9[i]<= 1.5) {
						if (F7[i]<= 3.5) {
							if (F1[i]<= 6.5) {
								if (F4[i]<= 12.5) {
									if (F7[i]<= 1.5) {
										if (F0[i]<= 28.5) {
											if (F5[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 372936.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F6[i]<= 12.5) {
											if (F0[i]<= 26.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F11[i]<= 742.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F5[i]<= 1.5) {
										if (F12[i]<= 53.5) {
											if (F3[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 57.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 168122.5) {
											if (F0[i]<= 27.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 32.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F12[i]<= 67.5) {
									if (F6[i]<= 4.5) {
										if (F0[i]<= 26.5) {
											Class[0]++;
										} else {
											if (F2[i]<= 266948.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 202081.5) {
											Class[0]++;
										} else {
											if (F6[i]<= 6.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									Class[0]++;
								}
							}
						} else {
							if (F12[i]<= 78.5) {
								if (F6[i]<= 6.5) {
									Class[0]++;
								} else {
									if (F0[i]<= 27.5) {
										Class[0]++;
									} else {
										if (F5[i]<= 3.5) {
											if (F4[i]<= 12.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= 4.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F4[i]<= 6.5) {
									Class[0]++;
								} else {
									if (F1[i]<= 2.5) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								}
							}
						}
					} else {
						if (F5[i]<= 1.5) {
							if (F6[i]<= 12.5) {
								if (F11[i]<= 1534.0) {
									if (F4[i]<= 9.5) {
										Class[0]++;
									} else {
										if (F2[i]<= 137457.0) {
											Class[0]++;
										} else {
											if (F12[i]<= 40.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 187395.0) {
										Class[0]++;
									} else {
										if (F12[i]<= 41.0) {
											if (F2[i]<= 293692.0) {
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
								if (F0[i]<= 29.5) {
									Class[0]++;
								} else {
									Class[1]++;
								}
							}
						} else {
							if (F6[i]<= 4.5) {
								if (F8[i]<= 2.5) {
									if (F12[i]<= 44.0) {
										if (F7[i]<= 2.0) {
											Class[0]++;
										} else {
											if (F5[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F7[i]<= 2.0) {
											Class[0]++;
										} else {
											if (F6[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									Class[0]++;
								}
							} else {
								if (F3[i]<= 1.5) {
									if (F13[i]<= 16.0) {
										if (F8[i]<= 1.5) {
											if (F2[i]<= 79328.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										Class[0]++;
									}
								} else {
									if (F3[i]<= 6.5) {
										if (F12[i]<= 70.0) {
											if (F10[i]<= 4225.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 3.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F5[i]<= 2.5) {
											if (F4[i]<= 9.5) {
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
				if (F9[i]<= 1.5) {
					if (F7[i]<= 1.5) {
						if (F11[i]<= 2231.5) {
							if (F12[i]<= 44.5) {
								if (F4[i]<= 14.5) {
									if (F12[i]<= 31.0) {
										if (F12[i]<= 29.0) {
											Class[0]++;
										} else {
											if (F5[i]<= 2.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 4718.5) {
											if (F8[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F13[i]<= 4.5) {
										if (F0[i]<= 52.5) {
											Class[1]++;
										} else {
											if (F0[i]<= 69.5) {
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
								if (F3[i]<= 9.5) {
									if (F6[i]<= 4.5) {
										if (F2[i]<= 214357.5) {
											if (F1[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 65.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 55576.5) {
											if (F12[i]<= 72.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F6[i]<= 12.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F3[i]<= 11.5) {
										if (F13[i]<= 16.5) {
											if (F5[i]<= 2.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F5[i]<= 3.5) {
											if (F0[i]<= 35.5) {
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
						} else {
							if (F0[i]<= 35.5) {
								if (F2[i]<= 119709.5) {
									Class[0]++;
								} else {
									if (F4[i]<= 7.5) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								}
							} else {
								if (F8[i]<= 1.5) {
									if (F11[i]<= 2365.5) {
										if (F12[i]<= 52.5) {
											if (F3[i]<= 1.5) {
												Class[1]++;
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
									if (F4[i]<= 6.0) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								}
							}
						}
					} else {
						if (F6[i]<= 4.5) {
							if (F7[i]<= 3.0) {
								if (F4[i]<= 12.5) {
									if (F12[i]<= 33.5) {
										if (F0[i]<= 49.0) {
											if (F3[i]<= 4.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F4[i]<= 7.5) {
											if (F13[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 1145.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= 4447.0) {
										if (F11[i]<= 1782.5) {
											if (F12[i]<= 31.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F3[i]<= 2.5) {
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
								if (F0[i]<= 47.5) {
									if (F0[i]<= 36.5) {
										if (F7[i]<= 5.5) {
											if (F2[i]<= 139929.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 166588.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 13.5) {
											if (F5[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 2.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F12[i]<= 43.5) {
										if (F3[i]<= 4.5) {
											if (F0[i]<= 48.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 214865.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 6.5) {
											if (F2[i]<= 141884.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							}
						} else {
							if (F12[i]<= 37.5) {
								if (F7[i]<= 3.0) {
									if (F11[i]<= 1811.0) {
										if (F2[i]<= 535013.0) {
											if (F2[i]<= 288362.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= 1.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 2063.0) {
											Class[1]++;
										} else {
											if (F2[i]<= 119015.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F1[i]<= 4.0) {
										if (F4[i]<= 13.5) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										if (F10[i]<= 2467.0) {
											if (F0[i]<= 73.0) {
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
								if (F3[i]<= 1.5) {
									if (F7[i]<= 3.0) {
										if (F11[i]<= 742.5) {
											if (F2[i]<= 121540.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F6[i]<= 6.5) {
											if (F1[i]<= 2.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F7[i]<= 3.0) {
										if (F11[i]<= 1782.5) {
											if (F3[i]<= 8.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 9.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 2119.0) {
											if (F5[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 8.0) {
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
					if (F5[i]<= 2.5) {
						if (F4[i]<= 9.5) {
							if (F5[i]<= 1.5) {
								Class[0]++;
							} else {
								if (F12[i]<= 27.5) {
									if (F13[i]<= 1.5) {
										if (F7[i]<= 3.5) {
											if (F2[i]<= 196958.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										Class[0]++;
									}
								} else {
									if (F7[i]<= 3.5) {
										if (F6[i]<= 2.5) {
											if (F1[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 5.5) {
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
							if (F5[i]<= 1.5) {
								if (F4[i]<= 14.5) {
									if (F12[i]<= 42.5) {
										if (F12[i]<= 37.5) {
											if (F4[i]<= 13.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 12.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 44.0) {
											if (F11[i]<= 782.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F6[i]<= 12.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F0[i]<= 32.5) {
										Class[0]++;
									} else {
										if (F2[i]<= 200440.5) {
											if (F1[i]<= 6.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 50.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F12[i]<= 85.0) {
									if (F6[i]<= 4.5) {
										if (F2[i]<= 182151.0) {
											if (F7[i]<= 3.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 3.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 1757.5) {
											if (F1[i]<= 2.5) {
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
						}
					} else {
						if (F12[i]<= 49.5) {
							if (F6[i]<= 4.5) {
								if (F6[i]<= 3.5) {
									if (F10[i]<= 4718.5) {
										if (F13[i]<= 1.5) {
											if (F11[i]<= 1999.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F10[i]<= 4718.5) {
										if (F7[i]<= 5.5) {
											if (F3[i]<= 9.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										Class[1]++;
									}
								}
							} else {
								if (F12[i]<= 34.5) {
									if (F1[i]<= 5.5) {
										Class[0]++;
									} else {
										if (F5[i]<= 6.5) {
											Class[0]++;
										} else {
											if (F7[i]<= 3.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= 4394.0) {
										if (F0[i]<= 55.5) {
											if (F12[i]<= 41.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 169542.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 11.5) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								}
							}
						} else {
							if (F4[i]<= 10.5) {
								if (F0[i]<= 50.5) {
									if (F10[i]<= 4668.5) {
										if (F3[i]<= 5.5) {
											Class[0]++;
										} else {
											if (F5[i]<= 4.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F4[i]<= 8.0) {
										if (F0[i]<= 59.5) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									} else {
										if (F4[i]<= 9.5) {
											if (F6[i]<= 7.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 3.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F8[i]<= 1.5) {
									if (F6[i]<= 3.0) {
										if (F1[i]<= 3.5) {
											if (F0[i]<= 56.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F1[i]<= 4.5) {
											if (F12[i]<= 62.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 2850.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
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
		} else {
			if (F4[i]<= 9.5) {
				if (F7[i]<= 3.5) {
					if (F0[i]<= 70.0) {
						if (F7[i]<= 1.5) {
							if (F0[i]<= 40.5) {
								if (F10[i]<= 7731.5) {
									Class[0]++;
								} else {
									Class[1]++;
								}
							} else {
								Class[1]++;
							}
						} else {
							if (F10[i]<= 9976.0) {
								Class[1]++;
							} else {
								if (F9[i]<= 1.5) {
									if (F3[i]<= 5.5) {
										Class[1]++;
									} else {
										if (F0[i]<= 61.0) {
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
						if (F0[i]<= 73.0) {
							if (F4[i]<= 6.5) {
								Class[1]++;
							} else {
								Class[0]++;
							}
						} else {
							Class[1]++;
						}
					}
				} else {
					if (F12[i]<= 36.5) {
						if (F9[i]<= 1.5) {
							if (F13[i]<= 15.0) {
								Class[0]++;
							} else {
								Class[1]++;
							}
						} else {
							Class[0]++;
						}
					} else {
						if (F1[i]<= 2.5) {
							Class[1]++;
						} else {
							if (F8[i]<= 1.5) {
								if (F3[i]<= 2.5) {
									if (F2[i]<= 207814.5) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								} else {
									Class[0]++;
								}
							} else {
								if (F8[i]<= 3.0) {
									if (F0[i]<= 46.0) {
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
				if (F7[i]<= 3.5) {
					if (F7[i]<= 1.5) {
						if (F6[i]<= 1.5) {
							if (F10[i]<= 7731.5) {
								Class[0]++;
							} else {
								Class[1]++;
							}
						} else {
							if (F0[i]<= 49.5) {
								if (F2[i]<= 234126.5) {
									Class[1]++;
								} else {
									if (F10[i]<= 7731.5) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								}
							} else {
								if (F12[i]<= 41.5) {
									if (F10[i]<= 10466.5) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								} else {
									if (F4[i]<= 13.5) {
										Class[1]++;
									} else {
										if (F4[i]<= 14.5) {
											if (F9[i]<= 1.5) {
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
						if (F2[i]<= 108118.5) {
							if (F9[i]<= 1.5) {
								if (F12[i]<= 43.5) {
									Class[1]++;
								} else {
									if (F4[i]<= 12.0) {
										if (F4[i]<= 10.5) {
											if (F0[i]<= 60.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 6.5) {
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
								Class[1]++;
							}
						} else {
							if (F1[i]<= 2.5) {
								if (F1[i]<= 1.5) {
									Class[1]++;
								} else {
									if (F10[i]<= 9976.0) {
										Class[1]++;
									} else {
										if (F6[i]<= 8.0) {
											if (F6[i]<= 5.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									}
								}
							} else {
								if (F6[i]<= 2.5) {
									if (F0[i]<= 62.5) {
										Class[1]++;
									} else {
										if (F0[i]<= 64.5) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								} else {
									Class[1]++;
								}
							}
						}
					}
				} else {
					if (F8[i]<= 1.5) {
						if (F10[i]<= 7073.5) {
							if (F2[i]<= 153527.0) {
								if (F10[i]<= 5316.5) {
									Class[1]++;
								} else {
									Class[0]++;
								}
							} else {
								Class[0]++;
							}
						} else {
							Class[1]++;
						}
					} else {
						if (F4[i]<= 11.5) {
							Class[0]++;
						} else {
							if (F8[i]<= 2.5) {
								if (F10[i]<= 6963.5) {
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

		if (F10[i]<= 5095.5) {
			if (F3[i]<= 1.5) {
				if (F9[i]<= 1.5) {
					if (F0[i]<= 29.5) {
						if (F5[i]<= 1.5) {
							if (F12[i]<= 62.0) {
								if (F7[i]<= 2.5) {
									if (F1[i]<= 6.5) {
										if (F0[i]<= 28.5) {
											if (F13[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 5.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[1]++;
									}
								} else {
									Class[0]++;
								}
							} else {
								if (F13[i]<= 7.5) {
									if (F12[i]<= 67.5) {
										Class[0]++;
									} else {
										if (F7[i]<= 2.5) {
											if (F6[i]<= 3.0) {
												Class[1]++;
											} else {
												Class[0]++;
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
							if (F0[i]<= 26.5) {
								if (F2[i]<= 348398.5) {
									if (F12[i]<= 44.0) {
										if (F0[i]<= 25.5) {
											Class[0]++;
										} else {
											if (F7[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 1414.5) {
											if (F13[i]<= 3.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F2[i]<= 414555.0) {
										Class[1]++;
									} else {
										Class[0]++;
									}
								}
							} else {
								if (F12[i]<= 35.0) {
									Class[0]++;
								} else {
									if (F12[i]<= 41.5) {
										if (F6[i]<= 9.0) {
											if (F10[i]<= 4058.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F11[i]<= 1794.0) {
											if (F2[i]<= 248350.5) {
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
					} else {
						if (F11[i]<= 1783.0) {
							if (F12[i]<= 34.0) {
								if (F0[i]<= 45.5) {
									Class[0]++;
								} else {
									if (F2[i]<= 105221.0) {
										if (F7[i]<= 1.5) {
											if (F5[i]<= 3.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 102649.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 1.5) {
											Class[0]++;
										} else {
											if (F12[i]<= 9.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F5[i]<= 1.5) {
									if (F12[i]<= 52.5) {
										if (F1[i]<= 3.5) {
											if (F0[i]<= 42.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 108322.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 43.5) {
											if (F12[i]<= 62.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 1662.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= 2.5) {
										if (F8[i]<= 4.5) {
											if (F13[i]<= 3.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F10[i]<= 4056.0) {
											if (F7[i]<= 4.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= 1.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F0[i]<= 31.5) {
								if (F12[i]<= 57.5) {
									if (F11[i]<= 1889.0) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								} else {
									Class[0]++;
								}
							} else {
								if (F7[i]<= 1.5) {
									if (F5[i]<= 2.0) {
										Class[0]++;
									} else {
										if (F1[i]<= 2.0) {
											Class[0]++;
										} else {
											if (F0[i]<= 42.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F6[i]<= 11.5) {
										if (F11[i]<= 1989.5) {
											Class[1]++;
										} else {
											if (F12[i]<= 32.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= 130197.0) {
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
					if (F5[i]<= 1.5) {
						if (F12[i]<= 49.0) {
							if (F2[i]<= 194676.5) {
								if (F13[i]<= 13.0) {
									if (F10[i]<= 4230.5) {
										if (F2[i]<= 133946.0) {
											Class[0]++;
										} else {
											if (F1[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 44.0) {
											if (F1[i]<= 4.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F6[i]<= 4.5) {
										if (F7[i]<= 2.5) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									} else {
										Class[0]++;
									}
								}
							} else {
								Class[0]++;
							}
						} else {
							if (F0[i]<= 30.5) {
								if (F12[i]<= 57.5) {
									Class[0]++;
								} else {
									if (F2[i]<= 291215.0) {
										Class[0]++;
									} else {
										if (F1[i]<= 3.5) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								}
							} else {
								if (F0[i]<= 35.5) {
									if (F12[i]<= 55.0) {
										if (F0[i]<= 34.0) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F12[i]<= 51.0) {
										if (F8[i]<= 2.5) {
											if (F8[i]<= 1.5) {
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
							}
						}
					} else {
						if (F12[i]<= 44.5) {
							if (F0[i]<= 52.5) {
								if (F6[i]<= 1.5) {
									if (F7[i]<= 2.0) {
										Class[0]++;
									} else {
										if (F2[i]<= 208100.0) {
											if (F5[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F7[i]<= 3.5) {
										if (F6[i]<= 11.5) {
											if (F11[i]<= 1779.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 21.5) {
											if (F8[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 2.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 3.5) {
									if (F13[i]<= 5.5) {
										if (F0[i]<= 56.5) {
											if (F1[i]<= 2.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 6.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 71.5) {
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
							if (F8[i]<= 1.5) {
								if (F5[i]<= 2.5) {
									if (F12[i]<= 57.5) {
										if (F0[i]<= 44.5) {
											if (F13[i]<= 7.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 51.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F1[i]<= 4.0) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F11[i]<= 938.0) {
										if (F5[i]<= 3.5) {
											if (F0[i]<= 32.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 5.5) {
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
								if (F12[i]<= 45.5) {
									if (F2[i]<= 198037.5) {
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
				if (F7[i]<= 3.5) {
					if (F5[i]<= 1.5) {
						if (F10[i]<= 4718.5) {
							if (F11[i]<= 2391.5) {
								if (F6[i]<= 4.5) {
									if (F3[i]<= 9.5) {
										if (F4[i]<= 13.0) {
											if (F1[i]<= 6.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 338568.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 65.5) {
											if (F4[i]<= 11.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F9[i]<= 1.5) {
										if (F0[i]<= 27.5) {
											if (F3[i]<= 8.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 42.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 15.0) {
											if (F6[i]<= 12.5) {
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
								Class[1]++;
							}
						} else {
							if (F2[i]<= 119099.0) {
								Class[0]++;
							} else {
								Class[1]++;
							}
						}
					} else {
						if (F6[i]<= 4.5) {
							if (F4[i]<= 13.0) {
								if (F1[i]<= 6.0) {
									if (F5[i]<= 2.5) {
										if (F2[i]<= 406478.0) {
											if (F4[i]<= 7.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 52.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 6.5) {
											if (F9[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F12[i]<= 62.5) {
										if (F2[i]<= 201775.5) {
											if (F13[i]<= 13.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 3.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 45.5) {
											if (F12[i]<= 79.0) {
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
								if (F4[i]<= 14.5) {
									if (F11[i]<= 1794.0) {
										if (F5[i]<= 2.5) {
											if (F10[i]<= 4699.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 62217.5) {
											if (F5[i]<= 2.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 126389.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F2[i]<= 91330.5) {
										if (F2[i]<= 52361.5) {
											if (F2[i]<= 34772.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 42.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 22.5) {
											if (F2[i]<= 229683.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F5[i]<= 2.5) {
								if (F13[i]<= 5.5) {
									if (F4[i]<= 9.5) {
										if (F4[i]<= 8.5) {
											if (F1[i]<= 6.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 39.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 1782.5) {
											if (F12[i]<= 33.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 10.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F2[i]<= 30877.0) {
										Class[1]++;
									} else {
										if (F11[i]<= 1760.0) {
											if (F3[i]<= 8.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= 7.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F4[i]<= 13.0) {
									if (F12[i]<= 41.0) {
										if (F7[i]<= 2.5) {
											if (F12[i]<= 35.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 227308.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= 108201.0) {
											if (F0[i]<= 39.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F0[i]<= 51.5) {
										if (F8[i]<= 2.5) {
											if (F12[i]<= 37.5) {
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
							}
						}
					}
				} else {
					if (F10[i]<= 4668.5) {
						if (F4[i]<= 13.0) {
							if (F0[i]<= 39.5) {
								if (F4[i]<= 11.5) {
									if (F11[i]<= 2248.0) {
										if (F5[i]<= 1.5) {
											if (F6[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 4136.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= 157021.0) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F9[i]<= 1.5) {
										if (F5[i]<= 2.5) {
											Class[0]++;
										} else {
											if (F8[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 29.5) {
											if (F12[i]<= 38.5) {
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
								if (F12[i]<= 49.5) {
									if (F4[i]<= 9.5) {
										if (F6[i]<= 3.5) {
											if (F11[i]<= 1924.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 41.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F6[i]<= 7.5) {
											if (F5[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F3[i]<= 5.5) {
										if (F0[i]<= 51.0) {
											if (F3[i]<= 3.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 67695.0) {
											Class[0]++;
										} else {
											if (F11[i]<= 2310.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F5[i]<= 2.5) {
								if (F1[i]<= 3.5) {
									if (F0[i]<= 33.5) {
										Class[0]++;
									} else {
										if (F3[i]<= 10.5) {
											if (F4[i]<= 15.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									Class[0]++;
								}
							} else {
								if (F9[i]<= 1.5) {
									if (F12[i]<= 43.5) {
										if (F6[i]<= 3.0) {
											if (F2[i]<= 256876.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F0[i]<= 39.5) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F2[i]<= 289108.5) {
										if (F13[i]<= 6.0) {
											if (F8[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F2[i]<= 299783.5) {
											Class[1]++;
										} else {
											if (F5[i]<= 4.0) {
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
						Class[1]++;
					}
				}
			}
		} else {
			if (F9[i]<= 1.5) {
				if (F6[i]<= 7.5) {
					if (F10[i]<= 7073.5) {
						if (F0[i]<= 26.0) {
							Class[0]++;
						} else {
							if (F7[i]<= 3.0) {
								Class[1]++;
							} else {
								Class[0]++;
							}
						}
					} else {
						if (F1[i]<= 2.5) {
							if (F3[i]<= 3.0) {
								if (F2[i]<= 156429.0) {
									if (F12[i]<= 57.5) {
										if (F10[i]<= 10543.0) {
											Class[1]++;
										} else {
											if (F0[i]<= 79.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
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
							Class[1]++;
						}
					}
				} else {
					if (F5[i]<= 2.5) {
						if (F4[i]<= 2.5) {
							Class[0]++;
						} else {
							if (F7[i]<= 4.5) {
								if (F12[i]<= 25.0) {
									if (F2[i]<= 233796.5) {
										if (F2[i]<= 149245.5) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F2[i]<= 92427.0) {
										if (F12[i]<= 54.0) {
											Class[1]++;
										} else {
											if (F0[i]<= 59.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 13.5) {
											Class[1]++;
										} else {
											if (F10[i]<= 33217.0) {
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
					} else {
						if (F2[i]<= 192281.5) {
							Class[1]++;
						} else {
							if (F13[i]<= 3.0) {
								Class[0]++;
							} else {
								Class[1]++;
							}
						}
					}
				}
			} else {
				if (F10[i]<= 7073.5) {
					if (F5[i]<= 2.5) {
						if (F3[i]<= 7.0) {
							if (F10[i]<= 5769.0) {
								Class[1]++;
							} else {
								Class[0]++;
							}
						} else {
							Class[0]++;
						}
					} else {
						Class[0]++;
					}
				} else {
					if (F6[i]<= 4.5) {
						if (F2[i]<= 211425.5) {
							Class[1]++;
						} else {
							if (F4[i]<= 10.5) {
								if (F10[i]<= 12795.0) {
									if (F12[i]<= 37.5) {
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
						if (F6[i]<= 5.5) {
							if (F0[i]<= 29.5) {
								Class[0]++;
							} else {
								Class[1]++;
							}
						} else {
							if (F12[i]<= 33.5) {
								if (F3[i]<= 9.5) {
									Class[1]++;
								} else {
									Class[0]++;
								}
							} else {
								if (F0[i]<= 59.0) {
									Class[1]++;
								} else {
									if (F6[i]<= 7.5) {
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

		if (F9[i]<= 1.5) {
			if (F7[i]<= 3.0) {
				if (F8[i]<= 1.5) {
					if (F12[i]<= 41.5) {
						if (F4[i]<= 12.5) {
							if (F7[i]<= 1.5) {
								if (F10[i]<= 4718.5) {
									if (F2[i]<= 23608.0) {
										if (F10[i]<= 1101.0) {
											if (F12[i]<= 35.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F12[i]<= 37.5) {
											if (F0[i]<= 69.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 112672.0) {
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
								if (F4[i]<= 8.5) {
									if (F10[i]<= 5095.5) {
										if (F0[i]<= 34.5) {
											if (F12[i]<= 35.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 31.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F0[i]<= 35.5) {
										if (F12[i]<= 37.5) {
											if (F4[i]<= 9.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 26.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 34.5) {
											if (F2[i]<= 86026.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 5095.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							}
						} else {
							if (F7[i]<= 1.5) {
								if (F6[i]<= 4.5) {
									if (F4[i]<= 14.5) {
										if (F0[i]<= 31.5) {
											if (F10[i]<= 7585.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 16.5) {
											if (F13[i]<= 3.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 7.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F13[i]<= 5.5) {
										if (F10[i]<= 6739.5) {
											if (F6[i]<= 11.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F2[i]<= 325895.0) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								}
							} else {
								if (F11[i]<= 1666.5) {
									if (F1[i]<= 6.5) {
										if (F1[i]<= 5.5) {
											if (F0[i]<= 28.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 629.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 3649.0) {
											if (F3[i]<= 7.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F0[i]<= 34.5) {
										if (F0[i]<= 33.5) {
											Class[1]++;
										} else {
											if (F11[i]<= 1949.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 1894.5) {
											Class[1]++;
										} else {
											if (F1[i]<= 3.5) {
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
						if (F0[i]<= 35.5) {
							if (F10[i]<= 5095.5) {
								if (F11[i]<= 1881.5) {
									if (F3[i]<= 1.5) {
										if (F1[i]<= 3.5) {
											if (F1[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 48.5) {
											if (F2[i]<= 445231.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F11[i]<= 1989.0) {
										Class[1]++;
									} else {
										if (F6[i]<= 3.0) {
											Class[1]++;
										} else {
											if (F1[i]<= 4.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F4[i]<= 9.5) {
									if (F7[i]<= 1.5) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								} else {
									Class[1]++;
								}
							}
						} else {
							if (F4[i]<= 12.5) {
								if (F10[i]<= 5095.5) {
									if (F6[i]<= 2.5) {
										if (F1[i]<= 2.5) {
											if (F0[i]<= 45.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F7[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 1.5) {
											if (F11[i]<= 2129.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F6[i]<= 7.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F10[i]<= 7032.5) {
										if (F6[i]<= 8.5) {
											Class[1]++;
										} else {
											if (F0[i]<= 59.5) {
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
								if (F10[i]<= 5095.5) {
									if (F10[i]<= 1114.0) {
										if (F12[i]<= 65.5) {
											if (F6[i]<= 6.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 14.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F0[i]<= 54.5) {
											if (F7[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F4[i]<= 13.5) {
										if (F5[i]<= 2.5) {
											if (F10[i]<= 11122.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 57.5) {
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
						}
					}
				} else {
					if (F4[i]<= 10.5) {
						if (F12[i]<= 49.5) {
							if (F10[i]<= 7073.5) {
								if (F12[i]<= 39.0) {
									if (F5[i]<= 2.5) {
										if (F12[i]<= 29.0) {
											Class[0]++;
										} else {
											if (F1[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[0]++;
									}
								} else {
									if (F5[i]<= 1.5) {
										if (F13[i]<= 2.0) {
											if (F4[i]<= 9.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F10[i]<= 5095.5) {
											if (F1[i]<= 1.5) {
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
								Class[1]++;
							}
						} else {
							if (F7[i]<= 1.5) {
								if (F10[i]<= 4601.5) {
									if (F2[i]<= 163551.0) {
										Class[0]++;
									} else {
										if (F11[i]<= 1279.5) {
											if (F2[i]<= 168952.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									Class[1]++;
								}
							} else {
								if (F8[i]<= 3.5) {
									if (F0[i]<= 53.5) {
										if (F2[i]<= 311166.0) {
											if (F2[i]<= 144109.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 50.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 59.0) {
											if (F4[i]<= 4.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F3[i]<= 4.0) {
										Class[0]++;
									} else {
										if (F10[i]<= 3649.0) {
											if (F0[i]<= 29.0) {
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
						if (F7[i]<= 1.5) {
							if (F4[i]<= 14.5) {
								if (F12[i]<= 44.5) {
									if (F4[i]<= 12.5) {
										if (F5[i]<= 2.0) {
											if (F12[i]<= 38.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F10[i]<= 6775.0) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F1[i]<= 2.5) {
										if (F0[i]<= 44.0) {
											Class[1]++;
										} else {
											if (F13[i]<= 15.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F8[i]<= 2.5) {
											if (F2[i]<= 273686.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 782.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F13[i]<= 2.5) {
									Class[0]++;
								} else {
									if (F1[i]<= 2.0) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								}
							}
						} else {
							if (F10[i]<= 6155.5) {
								if (F12[i]<= 31.0) {
									Class[0]++;
								} else {
									if (F6[i]<= 4.5) {
										if (F4[i]<= 14.5) {
											if (F11[i]<= 1686.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 3.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F0[i]<= 55.0) {
											if (F2[i]<= 255823.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 6.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
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
				if (F10[i]<= 4899.5) {
					if (F5[i]<= 1.5) {
						if (F0[i]<= 27.5) {
							if (F4[i]<= 12.5) {
								if (F7[i]<= 4.5) {
									if (F2[i]<= 128186.0) {
										if (F2[i]<= 127385.5) {
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
							} else {
								if (F13[i]<= 2.5) {
									if (F7[i]<= 4.5) {
										Class[0]++;
									} else {
										if (F7[i]<= 5.5) {
											if (F6[i]<= 2.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									Class[0]++;
								}
							}
						} else {
							if (F2[i]<= 161466.0) {
								if (F1[i]<= 6.5) {
									if (F6[i]<= 7.5) {
										if (F13[i]<= 3.0) {
											if (F12[i]<= 38.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 14.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										Class[0]++;
									}
								} else {
									if (F4[i]<= 12.5) {
										Class[0]++;
									} else {
										if (F0[i]<= 43.5) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								}
							} else {
								if (F12[i]<= 55.0) {
									Class[0]++;
								} else {
									if (F0[i]<= 33.5) {
										Class[0]++;
									} else {
										if (F7[i]<= 4.5) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								}
							}
						}
					} else {
						if (F6[i]<= 2.5) {
							if (F0[i]<= 38.5) {
								if (F12[i]<= 44.5) {
									Class[0]++;
								} else {
									if (F2[i]<= 177684.5) {
										if (F10[i]<= 2193.0) {
											if (F2[i]<= 148371.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										Class[0]++;
									}
								}
							} else {
								if (F3[i]<= 3.0) {
									if (F4[i]<= 11.0) {
										if (F12[i]<= 47.5) {
											Class[0]++;
										} else {
											if (F2[i]<= 117942.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F1[i]<= 2.5) {
											Class[0]++;
										} else {
											if (F2[i]<= 106774.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F11[i]<= 782.0) {
										if (F13[i]<= 6.5) {
											if (F0[i]<= 43.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										Class[1]++;
									}
								}
							}
						} else {
							if (F3[i]<= 1.5) {
								if (F0[i]<= 39.5) {
									if (F0[i]<= 27.5) {
										if (F5[i]<= 2.5) {
											if (F2[i]<= 164883.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										Class[0]++;
									}
								} else {
									if (F13[i]<= 2.5) {
										if (F7[i]<= 5.5) {
											if (F12[i]<= 44.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										Class[0]++;
									}
								}
							} else {
								if (F7[i]<= 5.5) {
									if (F12[i]<= 7.0) {
										Class[1]++;
									} else {
										if (F11[i]<= 2180.0) {
											if (F10[i]<= 457.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 125033.0) {
												Class[1]++;
											} else {
												Class[0]++;
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
					if (F3[i]<= 11.5) {
						if (F12[i]<= 80.0) {
							if (F10[i]<= 7073.5) {
								if (F8[i]<= 1.5) {
									if (F4[i]<= 8.0) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								} else {
									Class[0]++;
								}
							} else {
								if (F0[i]<= 22.0) {
									Class[0]++;
								} else {
									Class[1]++;
								}
							}
						} else {
							Class[0]++;
						}
					} else {
						Class[0]++;
					}
				}
			}
		} else {
			if (F10[i]<= 7073.5) {
				if (F6[i]<= 4.5) {
					if (F6[i]<= 1.5) {
						if (F10[i]<= 3040.0) {
							if (F7[i]<= 3.5) {
								if (F11[i]<= 2377.0) {
									if (F7[i]<= 2.0) {
										if (F3[i]<= 2.5) {
											if (F2[i]<= 29673.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 3.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 35.5) {
											if (F13[i]<= 4.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									Class[1]++;
								}
							} else {
								if (F2[i]<= 176714.5) {
									Class[0]++;
								} else {
									if (F12[i]<= 52.5) {
										if (F2[i]<= 176833.0) {
											Class[1]++;
										} else {
											if (F0[i]<= 64.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 57.5) {
											if (F4[i]<= 10.5) {
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
						} else {
							if (F1[i]<= 4.0) {
								if (F5[i]<= 1.5) {
									Class[0]++;
								} else {
									if (F5[i]<= 2.5) {
										if (F2[i]<= 158276.0) {
											if (F4[i]<= 11.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= 4.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F1[i]<= 2.0) {
											Class[0]++;
										} else {
											if (F0[i]<= 41.5) {
												Class[0]++;
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
					} else {
						if (F4[i]<= 12.5) {
							if (F2[i]<= 921776.5) {
								if (F11[i]<= 1881.5) {
									if (F8[i]<= 1.5) {
										if (F12[i]<= 22.5) {
											if (F3[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 33.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 65.0) {
											if (F12[i]<= 6.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 77.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= 2.5) {
										Class[1]++;
									} else {
										Class[0]++;
									}
								}
							} else {
								Class[1]++;
							}
						} else {
							if (F12[i]<= 45.5) {
								if (F11[i]<= 1881.5) {
									if (F5[i]<= 1.5) {
										if (F0[i]<= 33.5) {
											Class[0]++;
										} else {
											if (F11[i]<= 690.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 36.5) {
											if (F10[i]<= 3570.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F1[i]<= 2.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= 5.0) {
										if (F2[i]<= 342124.0) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									} else {
										Class[0]++;
									}
								}
							} else {
								if (F0[i]<= 27.5) {
									if (F1[i]<= 4.0) {
										if (F3[i]<= 10.5) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										if (F0[i]<= 25.0) {
											Class[0]++;
										} else {
											if (F12[i]<= 57.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F1[i]<= 4.5) {
										if (F11[i]<= 782.0) {
											if (F7[i]<= 2.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F0[i]<= 39.5) {
											if (F0[i]<= 35.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F8[i]<= 3.0) {
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
					if (F5[i]<= 1.5) {
						if (F4[i]<= 15.5) {
							if (F12[i]<= 40.5) {
								if (F0[i]<= 28.5) {
									Class[0]++;
								} else {
									if (F4[i]<= 9.5) {
										Class[0]++;
									} else {
										if (F1[i]<= 3.5) {
											Class[0]++;
										} else {
											if (F12[i]<= 35.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F12[i]<= 41.5) {
									Class[1]++;
								} else {
									if (F10[i]<= 3875.5) {
										if (F3[i]<= 1.5) {
											if (F12[i]<= 44.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										Class[1]++;
									}
								}
							}
						} else {
							Class[1]++;
						}
					} else {
						if (F5[i]<= 2.5) {
							if (F4[i]<= 9.5) {
								if (F11[i]<= 1794.0) {
									if (F4[i]<= 5.5) {
										if (F13[i]<= 9.5) {
											Class[0]++;
										} else {
											if (F13[i]<= 12.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 29.5) {
											if (F13[i]<= 4.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 7.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F6[i]<= 9.0) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								}
							} else {
								if (F3[i]<= 2.5) {
									if (F13[i]<= 6.5) {
										if (F12[i]<= 44.0) {
											if (F13[i]<= 3.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 1551.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										Class[0]++;
									}
								} else {
									if (F2[i]<= 378775.5) {
										if (F12[i]<= 31.0) {
											Class[0]++;
										} else {
											if (F7[i]<= 3.5) {
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
							if (F6[i]<= 7.5) {
								if (F12[i]<= 49.5) {
									if (F4[i]<= 10.5) {
										if (F5[i]<= 5.5) {
											if (F2[i]<= 180484.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 31965.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 33.5) {
											Class[0]++;
										} else {
											if (F0[i]<= 45.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 279370.5) {
										if (F12[i]<= 51.0) {
											if (F0[i]<= 34.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 45.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[0]++;
									}
								}
							} else {
								if (F3[i]<= 1.5) {
									if (F12[i]<= 32.0) {
										Class[0]++;
									} else {
										if (F5[i]<= 6.0) {
											Class[0]++;
										} else {
											if (F6[i]<= 11.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F12[i]<= 49.5) {
										if (F6[i]<= 10.5) {
											Class[0]++;
										} else {
											if (F5[i]<= 6.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 11.5) {
											if (F7[i]<= 3.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 58.0) {
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
				if (F3[i]<= 12.0) {
					if (F4[i]<= 10.5) {
						if (F2[i]<= 35447.5) {
							if (F2[i]<= 21413.5) {
								Class[1]++;
							} else {
								Class[0]++;
							}
						} else {
							if (F10[i]<= 29665.5) {
								if (F5[i]<= 4.0) {
									Class[1]++;
								} else {
									if (F7[i]<= 3.0) {
										Class[1]++;
									} else {
										Class[0]++;
									}
								}
							} else {
								if (F0[i]<= 20.0) {
									Class[0]++;
								} else {
									Class[1]++;
								}
							}
						}
					} else {
						Class[1]++;
					}
				} else {
					Class[0]++;
				}
			}
		}

		if (F5[i]<= 1.5) {
			if (F0[i]<= 30.5) {
				if (F9[i]<= 1.5) {
					if (F0[i]<= 25.5) {
						if (F4[i]<= 10.5) {
							if (F2[i]<= 107351.5) {
								if (F10[i]<= 8470.5) {
									Class[0]++;
								} else {
									Class[1]++;
								}
							} else {
								Class[0]++;
							}
						} else {
							if (F1[i]<= 1.5) {
								if (F10[i]<= 5260.0) {
									Class[0]++;
								} else {
									Class[1]++;
								}
							} else {
								if (F12[i]<= 49.0) {
									if (F12[i]<= 34.0) {
										Class[0]++;
									} else {
										if (F0[i]<= 24.5) {
											if (F0[i]<= 23.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 2.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F6[i]<= 6.5) {
										if (F2[i]<= 208864.0) {
											Class[0]++;
										} else {
											if (F4[i]<= 12.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F6[i]<= 9.5) {
											if (F12[i]<= 52.5) {
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
						if (F3[i]<= 1.5) {
							if (F12[i]<= 67.5) {
								if (F11[i]<= 2067.0) {
									if (F12[i]<= 43.0) {
										if (F12[i]<= 39.0) {
											Class[0]++;
										} else {
											if (F8[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= 7731.5) {
											if (F2[i]<= 297187.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F11[i]<= 2298.5) {
										Class[1]++;
									} else {
										Class[0]++;
									}
								}
							} else {
								Class[1]++;
							}
						} else {
							if (F12[i]<= 53.5) {
								if (F2[i]<= 161466.0) {
									if (F3[i]<= 4.5) {
										Class[0]++;
									} else {
										if (F4[i]<= 10.5) {
											if (F2[i]<= 149726.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F8[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F0[i]<= 29.5) {
										Class[0]++;
									} else {
										if (F1[i]<= 2.5) {
											if (F4[i]<= 8.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 412546.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F13[i]<= 28.0) {
									if (F3[i]<= 7.5) {
										if (F0[i]<= 28.5) {
											if (F12[i]<= 67.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F3[i]<= 10.5) {
											Class[0]++;
										} else {
											if (F4[i]<= 8.5) {
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
				} else {
					if (F3[i]<= 1.5) {
						if (F2[i]<= 190180.0) {
							if (F11[i]<= 2067.0) {
								if (F2[i]<= 190062.0) {
									if (F8[i]<= 1.5) {
										if (F10[i]<= 6739.5) {
											if (F1[i]<= 3.5) {
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
								} else {
									Class[1]++;
								}
							} else {
								Class[1]++;
							}
						} else {
							if (F6[i]<= 12.5) {
								Class[0]++;
							} else {
								if (F6[i]<= 14.0) {
									if (F1[i]<= 3.5) {
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
						if (F7[i]<= 2.5) {
							if (F4[i]<= 13.0) {
								if (F10[i]<= 7310.5) {
									if (F3[i]<= 5.5) {
										Class[0]++;
									} else {
										if (F13[i]<= 2.0) {
											if (F0[i]<= 28.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									Class[1]++;
								}
							} else {
								if (F1[i]<= 3.5) {
									if (F0[i]<= 26.5) {
										Class[0]++;
									} else {
										if (F4[i]<= 15.5) {
											if (F3[i]<= 7.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
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
				if (F6[i]<= 4.5) {
					if (F4[i]<= 14.5) {
						if (F7[i]<= 2.5) {
							if (F11[i]<= 2391.5) {
								if (F2[i]<= 395863.5) {
									if (F1[i]<= 1.5) {
										Class[0]++;
									} else {
										if (F13[i]<= 9.5) {
											if (F10[i]<= 7731.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F8[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F12[i]<= 55.0) {
										if (F12[i]<= 39.0) {
											Class[1]++;
										} else {
											if (F2[i]<= 398134.0) {
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
								Class[1]++;
							}
						} else {
							if (F10[i]<= 8684.5) {
								if (F12[i]<= 46.5) {
									if (F12[i]<= 39.0) {
										Class[0]++;
									} else {
										if (F2[i]<= 325460.0) {
											if (F6[i]<= 3.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F6[i]<= 1.5) {
										Class[1]++;
									} else {
										if (F3[i]<= 1.5) {
											if (F0[i]<= 34.0) {
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
						if (F0[i]<= 54.5) {
							if (F2[i]<= 131613.0) {
								if (F10[i]<= 7042.0) {
									if (F0[i]<= 37.0) {
										if (F12[i]<= 47.5) {
											Class[0]++;
										} else {
											if (F12[i]<= 55.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 113411.0) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								} else {
									Class[1]++;
								}
							} else {
								if (F2[i]<= 238599.5) {
									if (F12[i]<= 55.0) {
										if (F2[i]<= 210070.5) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									} else {
										if (F0[i]<= 32.5) {
											Class[0]++;
										} else {
											if (F1[i]<= 3.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									Class[1]++;
								}
							}
						} else {
							if (F10[i]<= 2393.5) {
								if (F7[i]<= 3.5) {
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
					if (F12[i]<= 42.5) {
						if (F10[i]<= 7731.5) {
							if (F7[i]<= 2.5) {
								if (F6[i]<= 12.5) {
									if (F0[i]<= 39.5) {
										if (F0[i]<= 33.5) {
											if (F2[i]<= 346976.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F4[i]<= 10.5) {
											if (F0[i]<= 40.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= 7.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F0[i]<= 37.0) {
										Class[0]++;
									} else {
										if (F11[i]<= 1222.0) {
											if (F0[i]<= 39.5) {
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
								if (F6[i]<= 6.5) {
									if (F3[i]<= 1.5) {
										if (F13[i]<= 3.0) {
											if (F8[i]<= 1.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										Class[0]++;
									}
								} else {
									Class[0]++;
								}
							}
						} else {
							Class[1]++;
						}
					} else {
						if (F12[i]<= 43.5) {
							Class[1]++;
						} else {
							if (F2[i]<= 172628.5) {
								if (F10[i]<= 6515.0) {
									if (F3[i]<= 1.5) {
										if (F2[i]<= 119620.5) {
											if (F6[i]<= 6.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F7[i]<= 4.5) {
											if (F11[i]<= 2114.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 70299.5) {
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
								if (F12[i]<= 58.0) {
									if (F2[i]<= 178149.0) {
										Class[1]++;
									} else {
										if (F10[i]<= 8164.0) {
											if (F13[i]<= 5.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F7[i]<= 2.5) {
										if (F4[i]<= 10.5) {
											if (F2[i]<= 362457.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F3[i]<= 7.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= 266926.5) {
											if (F2[i]<= 224238.5) {
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
			if (F3[i]<= 1.5) {
				if (F5[i]<= 2.5) {
					if (F11[i]<= 1748.5) {
						if (F10[i]<= 5095.5) {
							if (F12[i]<= 31.0) {
								if (F6[i]<= 1.5) {
									if (F12[i]<= 11.0) {
										Class[0]++;
									} else {
										if (F2[i]<= 264883.0) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F7[i]<= 2.5) {
										if (F12[i]<= 22.5) {
											if (F1[i]<= 4.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 7.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F13[i]<= 6.5) {
											if (F0[i]<= 49.0) {
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
								if (F8[i]<= 2.5) {
									if (F8[i]<= 1.5) {
										if (F1[i]<= 2.5) {
											if (F7[i]<= 3.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 25.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F7[i]<= 2.5) {
											if (F1[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 295131.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F1[i]<= 3.5) {
										if (F8[i]<= 4.5) {
											if (F2[i]<= 146045.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F13[i]<= 25.5) {
											if (F13[i]<= 6.0) {
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
						} else {
							if (F1[i]<= 5.5) {
								Class[1]++;
							} else {
								if (F2[i]<= 211570.0) {
									Class[1]++;
								} else {
									if (F0[i]<= 60.0) {
										Class[1]++;
									} else {
										if (F10[i]<= 8686.0) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								}
							}
						}
					} else {
						if (F7[i]<= 2.5) {
							if (F0[i]<= 44.5) {
								if (F1[i]<= 4.0) {
									Class[1]++;
								} else {
									if (F2[i]<= 117833.0) {
										if (F13[i]<= 11.5) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										Class[1]++;
									}
								}
							} else {
								if (F12[i]<= 57.5) {
									if (F1[i]<= 3.5) {
										if (F12[i]<= 52.5) {
											if (F1[i]<= 2.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 1944.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F2[i]<= 100762.0) {
											Class[0]++;
										} else {
											if (F2[i]<= 170211.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									Class[1]++;
								}
							}
						} else {
							Class[1]++;
						}
					}
				} else {
					if (F9[i]<= 1.5) {
						if (F2[i]<= 346710.0) {
							if (F10[i]<= 7073.5) {
								if (F1[i]<= 2.5) {
									if (F7[i]<= 5.5) {
										if (F0[i]<= 43.5) {
											if (F1[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F11[i]<= 326.5) {
										if (F1[i]<= 4.5) {
											if (F10[i]<= 5642.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 3.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 53.5) {
											if (F6[i]<= 5.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 58.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								Class[1]++;
							}
						} else {
							Class[0]++;
						}
					} else {
						if (F1[i]<= 3.5) {
							if (F5[i]<= 3.5) {
								if (F10[i]<= 3508.0) {
									if (F12[i]<= 47.0) {
										if (F10[i]<= 457.0) {
											if (F12[i]<= 33.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F7[i]<= 2.5) {
											if (F2[i]<= 193042.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 4.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									Class[1]++;
								}
							} else {
								if (F13[i]<= 15.0) {
									if (F1[i]<= 2.5) {
										Class[0]++;
									} else {
										if (F0[i]<= 30.5) {
											if (F7[i]<= 2.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F13[i]<= 13.0) {
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
							if (F12[i]<= 18.0) {
								if (F5[i]<= 6.0) {
									Class[0]++;
								} else {
									if (F0[i]<= 57.0) {
										Class[0]++;
									} else {
										if (F12[i]<= 11.0) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								}
							} else {
								if (F2[i]<= 221377.5) {
									if (F1[i]<= 4.5) {
										if (F0[i]<= 46.5) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									} else {
										if (F0[i]<= 48.5) {
											Class[0]++;
										} else {
											if (F7[i]<= 3.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F2[i]<= 224673.5) {
										Class[1]++;
									} else {
										if (F10[i]<= 4307.0) {
											if (F2[i]<= 404219.5) {
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
				if (F7[i]<= 3.5) {
					if (F7[i]<= 1.5) {
						if (F6[i]<= 4.5) {
							if (F12[i]<= 44.5) {
								if (F10[i]<= 7731.5) {
									if (F11[i]<= 2382.5) {
										if (F3[i]<= 9.5) {
											if (F1[i]<= 3.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 15.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[1]++;
									}
								} else {
									Class[1]++;
								}
							} else {
								if (F1[i]<= 6.0) {
									if (F8[i]<= 2.5) {
										if (F11[i]<= 2269.5) {
											if (F2[i]<= 151753.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F8[i]<= 3.5) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F4[i]<= 12.5) {
										if (F2[i]<= 164355.0) {
											Class[0]++;
										} else {
											if (F12[i]<= 69.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= 13914.0) {
											if (F6[i]<= 3.0) {
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
						} else {
							if (F4[i]<= 13.0) {
								if (F11[i]<= 2391.5) {
									if (F3[i]<= 8.5) {
										if (F12[i]<= 41.0) {
											if (F10[i]<= 4718.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 2129.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F3[i]<= 15.5) {
											Class[0]++;
										} else {
											if (F12[i]<= 68.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F4[i]<= 8.0) {
										if (F2[i]<= 124915.5) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										Class[1]++;
									}
								}
							} else {
								if (F10[i]<= 2393.5) {
									if (F3[i]<= 7.0) {
										if (F0[i]<= 54.0) {
											if (F2[i]<= 184772.5) {
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
								} else {
									Class[1]++;
								}
							}
						}
					} else {
						if (F4[i]<= 13.0) {
							if (F11[i]<= 1782.5) {
								if (F10[i]<= 5095.5) {
									if (F4[i]<= 8.5) {
										if (F3[i]<= 12.5) {
											if (F1[i]<= 6.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 36.5) {
											if (F4[i]<= 9.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 59.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F3[i]<= 7.5) {
										if (F1[i]<= 2.5) {
											if (F9[i]<= 1.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F2[i]<= 377976.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F12[i]<= 57.5) {
											if (F8[i]<= 1.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F4[i]<= 9.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F12[i]<= 49.0) {
									if (F2[i]<= 104923.0) {
										if (F11[i]<= 1989.5) {
											if (F12[i]<= 44.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F8[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F4[i]<= 7.5) {
											if (F8[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 1989.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F11[i]<= 2009.5) {
										Class[1]++;
									} else {
										if (F11[i]<= 2364.5) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								}
							}
						} else {
							if (F0[i]<= 30.5) {
								if (F3[i]<= 10.5) {
									if (F12[i]<= 32.5) {
										if (F9[i]<= 1.5) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										if (F2[i]<= 312198.0) {
											if (F2[i]<= 168812.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F12[i]<= 57.5) {
										if (F1[i]<= 6.0) {
											if (F0[i]<= 27.0) {
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
								if (F12[i]<= 26.5) {
									if (F10[i]<= 5674.5) {
										if (F0[i]<= 38.0) {
											Class[0]++;
										} else {
											if (F11[i]<= 988.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F1[i]<= 1.5) {
										if (F9[i]<= 1.5) {
											if (F0[i]<= 37.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F10[i]<= 5095.5) {
											if (F11[i]<= 1666.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F6[i]<= 8.5) {
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
					if (F10[i]<= 7073.5) {
						if (F9[i]<= 1.5) {
							if (F12[i]<= 41.0) {
								if (F10[i]<= 3947.5) {
									if (F1[i]<= 3.5) {
										if (F12[i]<= 6.5) {
											Class[1]++;
										} else {
											if (F2[i]<= 59114.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 74.5) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F1[i]<= 3.5) {
										if (F8[i]<= 1.5) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									} else {
										Class[1]++;
									}
								}
							} else {
								if (F4[i]<= 11.5) {
									if (F2[i]<= 354958.5) {
										if (F0[i]<= 55.5) {
											if (F0[i]<= 47.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= 7.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F6[i]<= 9.5) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F2[i]<= 350205.5) {
										if (F3[i]<= 10.5) {
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
							if (F11[i]<= 2248.0) {
								if (F12[i]<= 43.5) {
									if (F10[i]<= 4668.5) {
										if (F12[i]<= 34.0) {
											if (F2[i]<= 113951.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 37.5) {
											if (F1[i]<= 4.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F10[i]<= 3411.5) {
										if (F3[i]<= 4.5) {
											if (F5[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F3[i]<= 7.5) {
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
								if (F12[i]<= 42.5) {
									Class[1]++;
								} else {
									Class[0]++;
								}
							}
						}
					} else {
						if (F13[i]<= 3.5) {
							if (F0[i]<= 34.5) {
								if (F12[i]<= 37.5) {
									Class[0]++;
								} else {
									Class[1]++;
								}
							} else {
								Class[1]++;
							}
						} else {
							if (F2[i]<= 212829.5) {
								Class[0]++;
							} else {
								Class[1]++;
							}
						}
					}
				}
			}
		}

		if (F0[i]<= 30.5) {
			if (F7[i]<= 3.5) {
				if (F10[i]<= 5095.5) {
					if (F3[i]<= 1.5) {
						if (F7[i]<= 1.5) {
							if (F0[i]<= 26.5) {
								Class[0]++;
							} else {
								if (F12[i]<= 67.5) {
									if (F1[i]<= 2.5) {
										if (F0[i]<= 27.5) {
											Class[0]++;
										} else {
											if (F6[i]<= 5.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F11[i]<= 1534.0) {
											if (F12[i]<= 44.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 2.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F2[i]<= 98191.5) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								}
							}
						} else {
							if (F12[i]<= 33.5) {
								if (F1[i]<= 4.5) {
									if (F2[i]<= 186268.5) {
										if (F2[i]<= 102673.5) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										Class[0]++;
									}
								} else {
									if (F12[i]<= 26.5) {
										Class[1]++;
									} else {
										Class[0]++;
									}
								}
							} else {
								if (F8[i]<= 1.5) {
									if (F2[i]<= 132221.0) {
										if (F12[i]<= 47.5) {
											if (F6[i]<= 3.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F11[i]<= 943.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F11[i]<= 1794.0) {
											if (F6[i]<= 10.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F8[i]<= 2.5) {
										if (F12[i]<= 46.5) {
											Class[1]++;
										} else {
											if (F13[i]<= 3.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F6[i]<= 6.5) {
											if (F2[i]<= 315195.5) {
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
					} else {
						if (F7[i]<= 1.5) {
							if (F5[i]<= 1.5) {
								if (F4[i]<= 11.5) {
									if (F1[i]<= 2.5) {
										if (F6[i]<= 3.0) {
											if (F9[i]<= 1.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F8[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F3[i]<= 4.0) {
											if (F6[i]<= 7.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 3.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F4[i]<= 13.0) {
										if (F12[i]<= 47.5) {
											if (F6[i]<= 4.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F1[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F9[i]<= 1.5) {
											Class[0]++;
										} else {
											if (F2[i]<= 41654.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F12[i]<= 76.5) {
									if (F2[i]<= 371163.5) {
										if (F5[i]<= 4.5) {
											Class[0]++;
										} else {
											if (F11[i]<= 1279.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 50.0) {
											if (F3[i]<= 5.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									Class[1]++;
								}
							}
						} else {
							if (F11[i]<= 1794.0) {
								if (F0[i]<= 26.5) {
									if (F4[i]<= 9.5) {
										if (F1[i]<= 1.5) {
											if (F12[i]<= 44.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 4164.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F12[i]<= 41.0) {
											if (F5[i]<= 4.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 364122.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F6[i]<= 4.5) {
										if (F4[i]<= 13.0) {
											if (F3[i]<= 7.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 29.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F12[i]<= 53.5) {
											if (F3[i]<= 3.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 67.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F11[i]<= 1894.5) {
									Class[1]++;
								} else {
									if (F6[i]<= 5.5) {
										if (F4[i]<= 13.0) {
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
					if (F6[i]<= 1.5) {
						if (F7[i]<= 1.5) {
							if (F1[i]<= 4.0) {
								if (F0[i]<= 27.0) {
									Class[0]++;
								} else {
									Class[1]++;
								}
							} else {
								Class[0]++;
							}
						} else {
							Class[1]++;
						}
					} else {
						if (F12[i]<= 46.5) {
							Class[1]++;
						} else {
							if (F12[i]<= 49.0) {
								Class[0]++;
							} else {
								Class[1]++;
							}
						}
					}
				}
			} else {
				if (F5[i]<= 6.0) {
					if (F10[i]<= 4243.5) {
						if (F8[i]<= 4.5) {
							if (F3[i]<= 1.5) {
								if (F2[i]<= 408714.0) {
									if (F0[i]<= 26.5) {
										if (F2[i]<= 176888.0) {
											if (F6[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										Class[0]++;
									}
								} else {
									if (F13[i]<= 5.5) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								}
							} else {
								if (F5[i]<= 1.5) {
									if (F12[i]<= 78.5) {
										if (F3[i]<= 5.5) {
											Class[0]++;
										} else {
											if (F12[i]<= 32.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F8[i]<= 2.5) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F9[i]<= 1.5) {
										if (F4[i]<= 9.5) {
											if (F0[i]<= 25.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F5[i]<= 3.5) {
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
							if (F9[i]<= 1.5) {
								if (F13[i]<= 14.0) {
									Class[0]++;
								} else {
									if (F1[i]<= 2.5) {
										Class[1]++;
									} else {
										Class[0]++;
									}
								}
							} else {
								Class[0]++;
							}
						}
					} else {
						if (F6[i]<= 4.5) {
							if (F7[i]<= 4.5) {
								if (F0[i]<= 25.0) {
									Class[0]++;
								} else {
									Class[1]++;
								}
							} else {
								Class[1]++;
							}
						} else {
							if (F13[i]<= 22.0) {
								if (F5[i]<= 3.5) {
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
					if (F3[i]<= 1.5) {
						Class[1]++;
					} else {
						if (F9[i]<= 1.5) {
							Class[0]++;
						} else {
							if (F12[i]<= 33.0) {
								Class[0]++;
							} else {
								Class[1]++;
							}
						}
					}
				}
			}
		} else {
			if (F11[i]<= 1820.5) {
				if (F5[i]<= 2.5) {
					if (F0[i]<= 36.5) {
						if (F5[i]<= 1.5) {
							if (F12[i]<= 41.0) {
								if (F2[i]<= 319250.5) {
									if (F13[i]<= 27.5) {
										if (F7[i]<= 4.5) {
											if (F8[i]<= 4.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F13[i]<= 29.5) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F3[i]<= 9.0) {
										if (F10[i]<= 7172.0) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									} else {
										if (F1[i]<= 2.5) {
											Class[1]++;
										} else {
											if (F3[i]<= 11.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F3[i]<= 1.5) {
									if (F10[i]<= 5795.5) {
										if (F13[i]<= 3.0) {
											if (F9[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F1[i]<= 3.5) {
										if (F10[i]<= 8684.5) {
											if (F2[i]<= 117033.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F12[i]<= 67.5) {
											if (F2[i]<= 164167.5) {
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
						} else {
							if (F4[i]<= 10.5) {
								if (F12[i]<= 48.5) {
									if (F4[i]<= 8.5) {
										if (F3[i]<= 7.0) {
											Class[0]++;
										} else {
											if (F6[i]<= 9.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F0[i]<= 33.5) {
											if (F0[i]<= 31.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 4225.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									}
								} else {
									if (F1[i]<= 4.5) {
										if (F0[i]<= 32.5) {
											if (F2[i]<= 188436.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 2.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F3[i]<= 4.0) {
											if (F2[i]<= 207138.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F6[i]<= 6.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									}
								}
							} else {
								if (F0[i]<= 31.5) {
									if (F2[i]<= 55163.5) {
										Class[0]++;
									} else {
										if (F11[i]<= 870.0) {
											if (F12[i]<= 41.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F3[i]<= 9.0) {
										if (F1[i]<= 3.5) {
											if (F1[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 3649.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F2[i]<= 144969.0) {
											Class[1]++;
										} else {
											if (F6[i]<= 3.0) {
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
						if (F12[i]<= 44.5) {
							if (F5[i]<= 1.5) {
								if (F10[i]<= 7731.5) {
									if (F6[i]<= 4.5) {
										if (F1[i]<= 2.5) {
											if (F4[i]<= 14.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 50.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F4[i]<= 15.0) {
											if (F4[i]<= 9.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F6[i]<= 11.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									Class[1]++;
								}
							} else {
								if (F3[i]<= 1.5) {
									if (F13[i]<= 5.5) {
										if (F6[i]<= 6.5) {
											if (F1[i]<= 2.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F8[i]<= 3.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F1[i]<= 3.5) {
											if (F6[i]<= 4.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F9[i]<= 1.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F3[i]<= 11.5) {
										if (F11[i]<= 209.5) {
											if (F10[i]<= 5095.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F12[i]<= 42.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F10[i]<= 5095.5) {
											if (F1[i]<= 3.5) {
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
							if (F6[i]<= 4.5) {
								if (F4[i]<= 11.5) {
									if (F10[i]<= 4147.0) {
										if (F3[i]<= 8.5) {
											if (F5[i]<= 1.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F12[i]<= 87.0) {
										if (F7[i]<= 1.5) {
											if (F10[i]<= 5401.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F10[i]<= 5095.5) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F5[i]<= 1.5) {
											Class[0]++;
										} else {
											if (F0[i]<= 47.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F3[i]<= 8.5) {
									if (F2[i]<= 79974.5) {
										if (F6[i]<= 8.5) {
											if (F6[i]<= 5.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F0[i]<= 58.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F5[i]<= 1.5) {
											if (F7[i]<= 2.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F7[i]<= 2.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F7[i]<= 1.5) {
										if (F3[i]<= 11.5) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									} else {
										if (F3[i]<= 11.5) {
											if (F10[i]<= 6350.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F0[i]<= 42.5) {
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
					if (F4[i]<= 12.5) {
						if (F9[i]<= 1.5) {
							if (F0[i]<= 38.5) {
								if (F2[i]<= 33645.5) {
									if (F12[i]<= 55.0) {
										Class[0]++;
									} else {
										Class[1]++;
									}
								} else {
									if (F7[i]<= 2.5) {
										if (F8[i]<= 1.5) {
											if (F10[i]<= 7731.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F4[i]<= 11.5) {
											if (F2[i]<= 185918.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F12[i]<= 47.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F12[i]<= 47.5) {
									if (F10[i]<= 4718.5) {
										if (F4[i]<= 9.5) {
											if (F0[i]<= 43.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 25.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F3[i]<= 4.0) {
											if (F2[i]<= 439320.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[1]++;
										}
									}
								} else {
									if (F2[i]<= 266204.0) {
										if (F6[i]<= 9.5) {
											if (F2[i]<= 21217.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F0[i]<= 48.5) {
											if (F0[i]<= 45.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F5[i]<= 5.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							}
						} else {
							if (F1[i]<= 3.5) {
								if (F0[i]<= 73.5) {
									if (F7[i]<= 3.5) {
										if (F10[i]<= 8028.5) {
											if (F7[i]<= 2.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											Class[1]++;
										}
									} else {
										if (F0[i]<= 42.5) {
											if (F6[i]<= 12.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F4[i]<= 10.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								} else {
									if (F5[i]<= 5.5) {
										Class[0]++;
									} else {
										if (F1[i]<= 2.5) {
											Class[0]++;
										} else {
											if (F7[i]<= 3.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									}
								}
							} else {
								if (F7[i]<= 5.5) {
									if (F8[i]<= 2.5) {
										if (F2[i]<= 210247.5) {
											if (F12[i]<= 44.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 319240.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[0]++;
									}
								} else {
									if (F4[i]<= 9.5) {
										Class[0]++;
									} else {
										if (F10[i]<= 5121.0) {
											Class[0]++;
										} else {
											Class[1]++;
										}
									}
								}
							}
						}
					} else {
						if (F7[i]<= 3.0) {
							if (F10[i]<= 7073.5) {
								if (F4[i]<= 14.5) {
									if (F12[i]<= 47.0) {
										if (F1[i]<= 1.5) {
											if (F0[i]<= 39.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 11.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										if (F10[i]<= 5818.0) {
											if (F6[i]<= 3.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									if (F6[i]<= 11.5) {
										if (F1[i]<= 4.5) {
											if (F11[i]<= 834.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F10[i]<= 1636.5) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										}
									} else {
										Class[0]++;
									}
								}
							} else {
								Class[1]++;
							}
						} else {
							if (F12[i]<= 43.5) {
								if (F5[i]<= 6.0) {
									if (F10[i]<= 6963.5) {
										if (F4[i]<= 15.5) {
											if (F10[i]<= 3832.0) {
												Class[0]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F2[i]<= 206114.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										Class[1]++;
									}
								} else {
									if (F10[i]<= 2962.5) {
										if (F12[i]<= 33.5) {
											if (F0[i]<= 39.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									} else {
										if (F8[i]<= 1.5) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								}
							} else {
								if (F9[i]<= 1.5) {
									if (F8[i]<= 2.5) {
										if (F6[i]<= 6.5) {
											if (F7[i]<= 4.5) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										} else {
											if (F6[i]<= 10.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										Class[0]++;
									}
								} else {
									if (F10[i]<= 3146.5) {
										if (F6[i]<= 3.0) {
											if (F0[i]<= 43.5) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											if (F13[i]<= 14.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F3[i]<= 2.5) {
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
				if (F7[i]<= 1.5) {
					if (F3[i]<= 9.0) {
						if (F2[i]<= 31329.5) {
							Class[1]++;
						} else {
							if (F11[i]<= 2365.5) {
								if (F11[i]<= 2232.0) {
									Class[0]++;
								} else {
									if (F5[i]<= 2.0) {
										Class[0]++;
									} else {
										if (F2[i]<= 273397.0) {
											Class[1]++;
										} else {
											Class[0]++;
										}
									}
								}
							} else {
								if (F11[i]<= 3253.5) {
									Class[1]++;
								} else {
									Class[0]++;
								}
							}
						}
					} else {
						if (F3[i]<= 11.5) {
							if (F4[i]<= 15.5) {
								if (F0[i]<= 43.0) {
									Class[0]++;
								} else {
									Class[1]++;
								}
							} else {
								Class[1]++;
							}
						} else {
							if (F3[i]<= 12.5) {
								Class[0]++;
							} else {
								if (F11[i]<= 2581.0) {
									Class[1]++;
								} else {
									Class[0]++;
								}
							}
						}
					}
				} else {
					if (F11[i]<= 1978.5) {
						if (F4[i]<= 5.0) {
							if (F12[i]<= 51.5) {
								Class[0]++;
							} else {
								Class[1]++;
							}
						} else {
							if (F12[i]<= 39.0) {
								if (F5[i]<= 2.5) {
									Class[1]++;
								} else {
									Class[0]++;
								}
							} else {
								if (F4[i]<= 11.5) {
									if (F7[i]<= 3.5) {
										if (F11[i]<= 1894.5) {
											Class[1]++;
										} else {
											if (F3[i]<= 7.0) {
												Class[1]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										Class[0]++;
									}
								} else {
									Class[1]++;
								}
							}
						}
					} else {
						if (F4[i]<= 12.5) {
							if (F12[i]<= 39.0) {
								if (F7[i]<= 2.5) {
									if (F0[i]<= 45.5) {
										Class[1]++;
									} else {
										Class[0]++;
									}
								} else {
									if (F1[i]<= 4.5) {
										Class[1]++;
									} else {
										Class[0]++;
									}
								}
							} else {
								if (F3[i]<= 6.5) {
									if (F0[i]<= 48.5) {
										if (F4[i]<= 9.5) {
											Class[0]++;
										} else {
											if (F11[i]<= 2396.0) {
												Class[0]++;
											} else {
												Class[1]++;
											}
										}
									} else {
										if (F6[i]<= 6.5) {
											if (F13[i]<= 6.0) {
												Class[1]++;
											} else {
												Class[0]++;
											}
										} else {
											Class[0]++;
										}
									}
								} else {
									Class[0]++;
								}
							}
						} else {
							if (F2[i]<= 341321.0) {
								if (F11[i]<= 2115.5) {
									Class[0]++;
								} else {
									Class[1]++;
								}
							} else {
								if (F11[i]<= 2377.0) {
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
		int p0 = (Class[0] > Class[1])?0:1;
		int Q0 = (Class[0] > Class[1])?Class[0]:Class[1];
		P[i] = p0;
	}
    return 0;

}

void RF_with_IF_parallel(float *F0,float *F1,float *F2,float *F3,float *F4,float *F5,float *F6,float *F7,float *F8,float *F9,float *F10,float *F11,float *F12,float *F13,float *F14, int *P, const int N)
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
    FILE *file = fopen("assets/datasets/Adult.csv", "r");
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

float *h_0, *h_1, *h_2, *h_3, *h_4, *h_5, *h_6, *h_7, *h_8, *h_9, *h_10, *h_11, *h_12, *h_13, *h_14;
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

h_P = (int *)malloc(nBytes);
    hostRef = (int *)malloc(nBytes);

    printf("[C - Random Forest]: Start Reading Dataset\n");
float* h[15] = { h_0, h_1, h_2, h_3, h_4, h_5, h_6, h_7, h_8, h_9, h_10, h_11, h_12, h_13, h_14};
	readInFile(h);
	printf("[C - Random Forest]: Finished Reading Dataset\n");

    // Obter o tempo inicial
    clock_t start_time = clock();
    // Execução do algoritmo paralelo

    RF_with_IF_parallel( h_0, h_1, h_2, h_3, h_4, h_5, h_6, h_7, h_8, h_9, h_10, h_11, h_12, h_13, h_14, h_P, nElem);
     // Obter o tempo final
    clock_t end_time = clock();
    // Calcular o tempo decorrido em segundos
    elapsed_time = ((float)(end_time - start_time)*1000.0) / ((float)CLOCKS_PER_SEC);
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
    free(h_P);
    free(hostRef);

    return 0;
}
