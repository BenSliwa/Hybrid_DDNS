#ifndef VODAFONE_DL
#define VODAFONE_DL

float vodafone_dl_tree_0(float payload, float rsrp, float rsrq, float sinr, float cqi, float ta, float velocity, float cell, float f)
{
	if(rsrp < -91.5)
	{
		if(rsrq < -10.5)
		{
			if(ta < 6.5)
			{
				if(rsrp < -118.5)
					return 56.7376;
				else
				{
					if(cqi < 9.5)
					{
						if(velocity < 11.625)
						{
							if(velocity < 11.025)
							{
								if(rsrq < -14.5)
									return 32.6697;
								else
								{
									if(cell < 13284104.5)
										return 31.8514;
									else
									{
										if(cell < 13932808)
										{
											if(payload < 0.3)
												return 8.08084;
											else
											{
												if(velocity < 10.355)
												{
													if(payload < 9.5)
													{
														if(cell < 13830151)
														{
															if(ta < 5.5)
															{
																if(velocity < 1.475)
																{
																	if(velocity < 0.615)
																		return 22.9626;
																	else
																		return 24.5399;
																}
																else
																{
																	if(payload < 7.5)
																	{
																		if(rsrp < -99.5)
																		{
																			if(rsrq < -13.5)
																				return 18.0932;
																			else
																				return 19.802;
																		}
																		else
																			return 20.2276;
																	}
																	else
																		return 22.575;
																}
															}
															else
																return 17.1215;
														}
														else
															return 15.0502;
													}
													else
														return 31.9107;
												}
												else
													return 24.6407;
											}
										}
										else
										{
											if(cqi < 6.5)
											{
												if(sinr < -1.5)
													return 11.0913;
												else
													return 8.28157;
											}
											else
											{
												if(rsrp < -99.5)
													return 14.6482;
												else
													return 18.7047;
											}
										}
									}
								}
							}
							else
								return 48.4848;
						}
						else
						{
							if(cell < 13410696)
							{
								if(ta < 3.5)
									return 28.6225;
								else
								{
									if(payload < 5)
									{
										if(f < 1362.55)
										{
											if(sinr < -4.5)
												return 3.7736;
											else
												return 6.72271;
										}
										else
										{
											if(sinr < -2.5)
												return 17.9775;
											else
												return 12.49838;
										}
									}
									else
									{
										if(rsrp < -103.5)
											return 18.8368;
										else
											return 31.3725;
									}
								}
							}
							else
							{
								if(ta < 5.5)
								{
									if(rsrp < -104)
										return 15.456;
									else
										return 10.9498333333;
								}
								else
								{
									if(sinr < 4)
									{
										if(rsrp < -108)
										{
											if(payload < 8)
												return 3.17767;
											else
												return 0.876734;
										}
										else
											return 0.893455;
									}
									else
									{
										if(rsrq < -12.5)
											return 4.8342;
										else
											return 8.79121;
									}
								}
							}
						}
					}
					else
					{
						if(payload < 7.5)
						{
							if(f < 2247.55)
								return 26.6921;
							else
								return 33.9943;
						}
						else
							return 51.4469;
					}
				}
			}
			else
			{
				if(cell < 13044869)
				{
					if(rsrp < -106)
					{
						if(ta < 15)
						{
							if(velocity < 14.945)
							{
								if(cell < 12938251)
								{
									if(rsrp < -107.5)
									{
										if(rsrp < -110)
											return 23.37832;
										else
											return 20.4953;
									}
									else
										return 16.2885;
								}
								else
									return 15.3257;
							}
							else
								return 3.58746;
						}
						else
						{
							if(cqi < 7.5)
							{
								if(velocity < 13.5)
								{
									if(rsrp < -107.5)
									{
										if(payload < 8.5)
										{
											if(sinr < 3)
											{
												if(velocity < 3.93)
													return 17.316;
												else
												{
													if(velocity < 10.57)
													{
														if(velocity < 6.8)
															return 10.8992;
														else
														{
															if(rsrq < -12.5)
																return 5.68182;
															else
																return 7.92082;
														}
													}
													else
														return 11.2547375;
												}
											}
											else
											{
												if(cqi < 6.5)
													return 5.22193;
												else
													return 8.34928;
											}
										}
										else
										{
											if(ta < 25.5)
											{
												if(rsrq < -11.5)
													return 16.7434;
												else
													return 21.1206;
											}
											else
												return 8.18247;
										}
									}
									else
										return 2.21852;
								}
								else
								{
									if(cqi < 6.5)
										return 1.02276;
									else
										return 3.73367;
								}
							}
							else
							{
								if(velocity < 13.285)
								{
									if(payload < 3)
									{
										if(velocity < 8.265)
											return 3.57782;
										else
										{
											if(velocity < 9.365)
												return 10.4235;
											else
											{
												if(velocity < 10.335)
													return 12.4805;
												else
													return 10.5264;
											}
										}
									}
									else
									{
										if(cqi < 10.5)
										{
											if(rsrq < -11.5)
											{
												if(cqi < 8.5)
													return 15.1998;
												else
												{
													if(sinr < 4.5)
														return 24.7219;
													else
														return 17.9843;
												}
											}
											else
											{
												if(rsrp < -109)
													return 23.76;
												else
													return 17.2154;
											}
										}
										else
										{
											if(rsrq < -12.5)
												return 10.3309;
											else
												return 13.8468;
										}
									}
								}
								else
								{
									if(rsrp < -110)
										return 21.1161;
									else
										return 36.8179;
								}
							}
						}
					}
					else
					{
						if(velocity < 15.35)
						{
							if(payload < 8.5)
							{
								if(rsrp < -97.5)
								{
									if(sinr < 7)
									{
										if(payload < 7)
											return 30.59835;
										else
											return 32.8037;
									}
									else
										return 33.4728;
								}
								else
									return 26.7048;
							}
							else
								return 43.2173;
						}
						else
						{
							if(cqi < 7)
								return 3.55557;
							else
								return 21.9608;
						}
					}
				}
				else
				{
					if(rsrq < -12.5)
					{
						if(rsrp < -103.5)
						{
							if(f < 1362.55)
							{
								if(ta < 33)
								{
									if(rsrq < -21)
									{
										if(cqi < 0.5)
											return 9.75907;
										else
											return 8.35073;
									}
									else
									{
										if(rsrp < -104.5)
										{
											if(ta < 20.5)
											{
												if(cell < 13532419)
												{
													if(cqi < 8.5)
													{
														if(sinr < -1.5)
														{
															if(velocity < 14.215)
															{
																if(sinr < -5.5)
																{
																	if(rsrp < -112.5)
																		return 0.363273;
																	else
																		return 3.776363546;
																}
																else
																{
																	if(cqi < 4.5)
																		return 2.20595;
																	else
																		return 0.55009825;
																}
															}
															else
															{
																if(payload < 3.5)
																	return 0.7752290764;
																else
																{
																	if(payload < 4.5)
																	{
																		if(ta < 9)
																			return 3.54021;
																		else
																			return 0.821536;
																	}
																	else
																	{
																		if(velocity < 15.6)
																			return 0.576378;
																		else
																		{
																			if(payload < 7)
																				return 1.1177345714;
																			else
																				return 2.1731266667;
																		}
																	}
																}
															}
														}
														else
														{
															if(ta < 17.5)
															{
																if(rsrq < -13.5)
																{
																	if(payload < 2)
																	{
																		if(payload < 0.3)
																			return 0.1766813333;
																		else
																			return 1.5116668;
																	}
																	else
																	{
																		if(cell < 13404802.5)
																		{
																			if(cqi < 6.5)
																				return 3.60852625;
																			else
																				return 2.2667066667;
																		}
																		else
																			return 1.3646534;
																	}
																}
																else
																{
																	if(payload < 1.5)
																		return 0.972644;
																	else
																	{
																		if(cqi < 6.5)
																			return 3.485026;
																		else
																			return 5.14715;
																	}
																}
															}
															else
															{
																if(sinr < 0.5)
																	return 8.8164;
																else
																	return 7.26612;
															}
														}
													}
													else
													{
														if(velocity < 20.84)
															return 13.0826;
														else
															return 1.85331;
													}
												}
												else
												{
													if(payload < 3)
														return 3.40208;
													else
													{
														if(payload < 6)
															return 8.81057;
														else
															return 11.7799;
													}
												}
											}
											else
											{
												if(payload < 0.3)
												{
													if(sinr < 2)
														return 0.3182733636;
													else
													{
														if(rsrp < -106.5)
															return 3.86475;
														else
															return 0.24143825;
													}
												}
												else
												{
													if(ta < 27)
													{
														if(sinr < -13.5)
															return 6.27943;
														else
														{
															if(payload < 7.5)
															{
																if(rsrq < -19)
																	return 3.72787;
																else
																{
																	if(sinr < -0.5)
																	{
																		if(cell < 13246977.5)
																			return 0.3653962;
																		else
																		{
																			if(ta < 22.5)
																			{
																				if(sinr < -7.5)
																				{
																					if(rsrp < -109)
																						return 7.22674;
																					else
																						return 1.3587;
																				}
																				else
																				{
																					if(cell < 13416322.5)
																						return 0.9740897273;
																					else
																						return 3.58905;
																				}
																			}
																			else
																			{
																				if(cqi < 6.5)
																					return 0.98130488;
																				else
																					return 3.11557;
																			}
																		}
																	}
																	else
																	{
																		if(sinr < 2.5)
																		{
																			if(cqi < 6.5)
																			{
																				if(rsrq < -14)
																					return 0.9734805;
																				else
																					return 3.384245;
																			}
																			else
																			{
																				if(sinr < 1.5)
																				{
																					if(ta < 23.5)
																						return 5.39993;
																					else
																						return 3.97812;
																				}
																				else
																					return 3.89579;
																			}
																		}
																		else
																			return 0.634123;
																	}
																}
															}
															else
															{
																if(payload < 8.5)
																{
																	if(rsrp < -117)
																		return 2.21262;
																	else
																		return 6.13615;
																}
																else
																{
																	if(rsrp < -108)
																		return 2.3384375;
																	else
																		return 1.2925834;
																}
															}
														}
													}
													else
													{
														if(velocity < 34.33)
														{
															if(payload < 5)
																return 4.93599;
															else
																return 6.46465;
														}
														else
															return 2.02224;
													}
												}
											}
										}
										else
										{
											if(velocity < 14.55)
											{
												if(rsrq < -13.5)
													return 21.7244;
												else
													return 2.04221;
											}
											else
											{
												if(ta < 18)
													return 0.5803892857;
												else
												{
													if(velocity < 27.08)
														return 1.1650886667;
													else
														return 7.0713;
												}
											}
										}
									}
								}
								else
								{
									if(rsrp < -106.5)
									{
										if(cell < 13308930)
											return 6.75961;
										else
										{
											if(rsrp < -108.5)
												return 3.32818;
											else
												return 0.658355;
										}
									}
									else
									{
										if(velocity < 30.35)
											return 14.2349;
										else
											return 23.988;
									}
								}
							}
							else
							{
								if(ta < 21.5)
								{
									if(sinr < -5)
										return 3.2237380461;
									else
									{
										if(payload < 3)
											return 11.9048;
										else
										{
											if(payload < 6.5)
											{
												if(payload < 5.5)
													return 18.5701;
												else
													return 20.3735;
											}
											else
												return 13.8614;
										}
									}
								}
								else
								{
									if(rsrp < -109.5)
									{
										if(velocity < 11.07)
											return 2.226386;
										else
											return 4.1675533333;
									}
									else
									{
										if(velocity < 9.855)
											return 0.43908;
										else
										{
											if(rsrp < -108.5)
												return 8.15661;
											else
												return 11.4041;
										}
									}
								}
							}
						}
						else
						{
							if(cell < 13394179)
							{
								if(rsrp < -96.5)
								{
									if(cell < 13324417.5)
									{
										if(velocity < 12.05)
										{
											if(cqi < 9)
											{
												if(velocity < 10.285)
												{
													if(rsrq < -13.5)
														return 2.57459;
													else
														return 0.3621205;
												}
												else
												{
													if(sinr < 3)
														return 5.08906;
													else
														return 6.82594;
												}
											}
											else
												return 11.76264;
										}
										else
											return 21.4938;
									}
									else
									{
										if(payload < 8.5)
											return 23.9252;
										else
											return 28.7081;
									}
								}
								else
								{
									if(payload < 0.75)
										return 19.5122;
									else
									{
										if(payload < 9)
										{
											if(cqi < 8.5)
												return 23.5294;
											else
												return 30.1887;
										}
										else
											return 32.76;
									}
								}
							}
							else
							{
								if(sinr < -9.5)
								{
									if(rsrp < -95.5)
									{
										if(rsrq < -17)
											return 22.0907;
										else
											return 15.3994;
									}
									else
										return 29.0065;
								}
								else
								{
									if(cell < 13527938.5)
									{
										if(sinr < -3.5)
										{
											if(cqi < 7.5)
											{
												if(rsrq < -17.5)
												{
													if(cqi < 2)
														return 1.39126;
													else
														return 4.21054;
												}
												else
													return 1.0278417778;
											}
											else
												return 5.76618;
										}
										else
										{
											if(ta < 15)
											{
												if(cqi < 10.5)
												{
													if(ta < 13.5)
													{
														if(velocity < 35.9)
														{
															if(rsrq < -14.5)
																return 3.17839;
															else
																return 2.344345;
														}
														else
															return 1.566352;
													}
													else
														return 1.0889276667;
												}
												else
												{
													if(ta < 10)
														return 9.52385;
													else
														return 5.7262925;
												}
											}
											else
											{
												if(payload < 2.5)
												{
													if(cqi < 8.5)
													{
														if(payload < 1.25)
														{
															if(rsrp < -98.5)
																return 7.15564;
															else
																return 2.07793;
														}
														else
														{
															if(rsrq < -14.5)
																return 11.5755666667;
															else
																return 19.802;
														}
													}
													else
													{
														if(ta < 19.5)
															return 7.62268;
														else
															return 0.927342;
													}
												}
												else
												{
													if(payload < 3.5)
													{
														if(ta < 28.5)
															return 0.300349;
														else
															return 1.73913;
													}
													else
													{
														if(velocity < 13.635)
															return 0.919106;
														else
														{
															if(rsrp < -94.5)
															{
																if(rsrp < -99)
																{
																	if(ta < 17.5)
																		return 6.76247;
																	else
																	{
																		if(ta < 25.5)
																		{
																			if(cqi < 5.5)
																				return 1.17285;
																			else
																			{
																				if(sinr < 2.5)
																					return 5.34474;
																				else
																					return 4.0605;
																			}
																		}
																		else
																			return 5.5532814286;
																	}
																}
																else
																	return 3.45816;
															}
															else
																return 9.49893;
														}
													}
												}
											}
										}
									}
									else
									{
										if(cqi < 8.5)
										{
											if(velocity < 15.275)
											{
												if(cqi < 6.5)
												{
													if(rsrp < -99.5)
													{
														if(sinr < -3.5)
															return 5.92595;
														else
														{
															if(payload < 0.75)
																return 5.81395;
															else
															{
																if(cqi < 5.5)
																	return 10.7095;
																else
																	return 8.83002;
															}
														}
													}
													else
														return 13.6054;
												}
												else
												{
													if(sinr < -5.5)
														return 9.03827;
													else
													{
														if(cell < 13932802.5)
															return 6.20636;
														else
															return 3.98011;
													}
												}
											}
											else
												return 15.0943;
										}
										else
											return 20.7254;
									}
								}
							}
						}
					}
					else
					{
						if(rsrp < -101.5)
						{
							if(cqi < 9.5)
							{
								if(f < 1362.55)
								{
									if(ta < 28.5)
									{
										if(velocity < 14.445)
										{
											if(ta < 15.5)
											{
												if(ta < 14.5)
												{
													if(cell < 13324674)
													{
														if(sinr < -1)
															return 9.83204;
														else
															return 6.31247;
													}
													else
													{
														if(cell < 13532290)
															return 2.17591;
														else
															return 8.181;
													}
												}
												else
													return 18.7647;
											}
											else
											{
												if(ta < 24.5)
												{
													if(cell < 13405827)
													{
														if(rsrp < -108.5)
															return 5.83516;
														else
														{
															if(rsrp < -104.5)
																return 2.66572;
															else
																return 0.207232;
														}
													}
													else
														return 0.70832475;
												}
												else
													return 8.24742;
											}
										}
										else
										{
											if(payload < 0.75)
												return 0.38565625;
											else
											{
												if(ta < 20)
												{
													if(sinr < 1.5)
														return 1.7041733333;
													else
													{
														if(rsrq < -11.5)
														{
															if(payload < 7)
																return 3.4527833333;
															else
																return 4.99376;
														}
														else
															return 7.21742;
													}
												}
												else
												{
													if(velocity < 26.425)
														return 1.8875085714;
													else
														return 0.5925063333;
												}
											}
										}
									}
									else
										return 17.2414;
								}
								else
								{
									if(rsrp < -113.5)
									{
										if(rsrq < -11.5)
											return 0.9302276667;
										else
										{
											if(sinr < 4)
											{
												if(ta < 63)
												{
													if(sinr < 0.5)
														return 2.20579;
													else
														return 3.80409;
												}
												else
													return 7.70713;
											}
											else
												return 1.76725;
										}
									}
									else
									{
										if(payload < 8.5)
										{
											if(sinr < 3.5)
											{
												if(velocity < 11.78)
												{
													if(sinr < -3.5)
													{
														if(sinr < -7)
															return 3.70071;
														else
															return 15.0650666667;
													}
													else
													{
														if(rsrq < -11.5)
														{
															if(rsrp < -110)
															{
																if(payload < 2)
																	return 4;
																else
																	return 5.77895;
															}
															else
																return 4.03633;
														}
														else
														{
															if(payload < 1.55)
																return 8.1633;
															else
																return 9.77995;
														}
													}
												}
												else
												{
													if(rsrp < -112.5)
														return 20.8673;
													else
													{
														if(velocity < 16.3)
														{
															if(sinr < 1.5)
															{
																if(sinr < -0.5)
																	return 10.65312;
																else
																	return 8.24745;
															}
															else
																return 14.7126;
														}
														else
															return 18.4332;
													}
												}
											}
											else
											{
												if(rsrp < -112.5)
													return 1.92129;
												else
													return 3.20513;
											}
										}
										else
										{
											if(rsrp < -110)
												return 21.4158;
											else
												return 16.1486;
										}
									}
								}
							}
							else
							{
								if(velocity < 13.81)
								{
									if(cqi < 11.5)
									{
										if(payload < 9.5)
										{
											if(sinr < -1)
												return 21.7984;
											else
											{
												if(velocity < 6.275)
												{
													if(cell < 13714186.5)
														return 14.7765;
													else
														return 20.915;
												}
												else
												{
													if(payload < 1.05)
														return 10.3897;
													else
														return 16.6147;
												}
											}
										}
										else
											return 10.3173;
									}
									else
									{
										if(rsrq < -11.5)
											return 5.37634;
										else
											return 0.954658;
									}
								}
								else
									return 35.7942;
							}
						}
						else
						{
							if(velocity < 32.95)
							{
								if(cell < 13211141)
								{
									if(cqi < 7.5)
										return 12.9032;
									else
									{
										if(cqi < 13)
											return 30.6649;
										else
											return 34.097;
									}
								}
								else
								{
									if(ta < 12.5)
									{
										if(rsrq < -11.5)
										{
											if(ta < 8.5)
											{
												if(sinr < -2.5)
												{
													if(rsrp < -99)
														return 20.2532;
													else
														return 16.9402;
												}
												else
												{
													if(sinr < 8.5)
													{
														if(payload < 8)
														{
															if(sinr < 4)
																return 11.73642;
															else
																return 9.90712;
														}
														else
															return 13.7268;
													}
													else
													{
														if(rsrp < -95.5)
															return 15.6556;
														else
															return 21.0843;
													}
												}
											}
											else
											{
												if(cqi < 6)
													return 45.1977;
												else
													return 24.56755;
											}
										}
										else
										{
											if(sinr < 9)
											{
												if(rsrp < -99.5)
												{
													if(sinr < 0)
														return 4.9505;
													else
														return 8.71341;
												}
												else
												{
													if(velocity < 10.225)
													{
														if(payload < 1.75)
															return 12.8617;
														else
															return 20.1511;
													}
													else
													{
														if(rsrp < -97.5)
														{
															if(payload < 3.5)
																return 13.1291;
															else
																return 15.0305;
														}
														else
														{
															if(payload < 2.5)
																return 8.94855;
															else
																return 10.2729;
														}
													}
												}
											}
											else
												return 26.4026;
										}
									}
									else
									{
										if(cell < 13394179)
										{
											if(ta < 19.5)
											{
												if(velocity < 17.93)
												{
													if(ta < 14.5)
													{
														if(rsrp < -96)
															return 17.2043;
														else
															return 6.43541;
													}
													else
														return 16.9851;
												}
												else
												{
													if(rsrp < -97.5)
														return 25.5918;
													else
														return 22.097;
												}
											}
											else
											{
												if(rsrp < -100.5)
												{
													if(velocity < 6.52)
														return 6.38213;
													else
														return 20.1005;
												}
												else
												{
													if(rsrq < -11.5)
														return 1.59144;
													else
													{
														if(rsrp < -97.5)
															return 4.47662;
														else
															return 5.65593;
													}
												}
											}
										}
										else
										{
											if(velocity < 31.275)
											{
												if(cqi < 12.5)
												{
													if(ta < 19)
													{
														if(ta < 13.5)
															return 1.661145;
														else
														{
															if(rsrp < -99)
																return 7.7821;
															else
															{
																if(payload < 5.5)
																{
																	if(velocity < 13.7)
																		return 7.25624;
																	else
																		return 3.904795;
																}
																else
																	return 2.017225;
															}
														}
													}
													else
														return 0.370887;
												}
												else
													return 8.90472;
											}
											else
												return 20.4082;
										}
									}
								}
							}
							else
							{
								if(rsrq < -11.5)
								{
									if(rsrp < -95.5)
										return 1.3146252222;
									else
										return 6.49403;
								}
								else
								{
									if(sinr < -2)
										return 9.59233;
									else
										return 39.2157;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			if(sinr < 13.5)
			{
				if(payload < 1.5)
				{
					if(rsrp < -110.5)
					{
						if(cqi < 8.5)
						{
							if(cqi < 6.5)
							{
								if(cqi < 5.5)
									return 3.85356;
								else
									return 0.8950806;
							}
							else
							{
								if(ta < 35.5)
								{
									if(velocity < 10.06)
										return 5.75542;
									else
										return 7.23327;
								}
								else
								{
									if(rsrp < -112.5)
										return 2.28572;
									else
										return 0.668561;
								}
							}
						}
						else
						{
							if(payload < 0.3)
							{
								if(rsrp < -113)
									return 0.314838;
								else
									return 2.07793;
							}
							else
							{
								if(f < 2247.55)
								{
									if(rsrq < -8.5)
										return 18.7354;
									else
									{
										if(payload < 0.75)
											return 10.2302;
										else
											return 6.01956;
									}
								}
								else
									return 2.72294;
							}
						}
					}
					else
					{
						if(rsrp < -109.5)
						{
							if(payload < 0.3)
								return 50.0002;
							else
							{
								if(sinr < 2.5)
								{
									if(sinr < 1)
									{
										if(velocity < 2.765)
											return 16.7715;
										else
											return 14.0351;
									}
									else
										return 23.3918;
								}
								else
								{
									if(rsrq < -8.5)
									{
										if(cell < 12937097)
											return 12.5;
										else
											return 15.25196;
									}
									else
										return 23.6686;
								}
							}
						}
						else
						{
							if(cell < 13215112)
							{
								if(payload < 0.75)
								{
									if(ta < 6.5)
									{
										if(cell < 13175308.5)
										{
											if(rsrp < -99.5)
												return 25.4777;
											else
												return 22.8572;
										}
										else
											return 13.3334;
									}
									else
									{
										if(f < 1362.55)
										{
											if(cell < 13098881.5)
												return 3.25204;
											else
											{
												if(rsrp < -99)
													return 12.9033;
												else
													return 9.19544;
											}
										}
										else
										{
											if(cqi < 14.5)
											{
												if(cell < 13067401)
												{
													if(velocity < 12.94)
													{
														if(velocity < 12.54)
														{
															if(sinr < 6)
																return 13.1148;
															else
																return 6.664364;
														}
														else
															return 15.2091;
													}
													else
														return 0.172726;
												}
												else
												{
													if(velocity < 10.33)
													{
														if(sinr < 6)
															return 17.7778;
														else
															return 16.1943;
													}
													else
														return 12.9033;
												}
											}
											else
											{
												if(rsrq < -7.5)
												{
													if(ta < 44)
													{
														if(payload < 0.3)
															return 20.5129;
														else
															return 16.3265;
													}
													else
														return 21.0526;
												}
												else
												{
													if(payload < 0.3)
														return 9.09094;
													else
														return 13.4228;
												}
											}
										}
									}
								}
								else
								{
									if(ta < 43.5)
									{
										if(rsrq < -9.5)
										{
											if(sinr < 5.5)
											{
												if(sinr < 4)
												{
													if(cell < 12914565.5)
														return 22.5989;
													else
													{
														if(rsrp < -95.5)
															return 13.0933;
														else
															return 17.2414;
													}
												}
												else
													return 7.93651;
											}
											else
												return 28.5714;
										}
										else
										{
											if(ta < 8.5)
												return 27.5862;
											else
											{
												if(sinr < 8.5)
												{
													if(rsrp < -108.5)
														return 17.094;
													else
													{
														if(ta < 15)
														{
															if(rsrp < -104)
																return 23.9521;
															else
																return 20;
														}
														else
														{
															if(rsrp < -107.5)
																return 20.6718;
															else
																return 16.8067;
														}
													}
												}
												else
												{
													if(rsrq < -8.5)
														return 21.3904;
													else
													{
														if(velocity < 6.62)
															return 21.164;
														else
															return 26.1438;
													}
												}
											}
										}
									}
									else
									{
										if(rsrp < -101.5)
											return 30.1887;
										else
											return 36.3636;
									}
								}
							}
							else
							{
								if(velocity < 14.4)
								{
									if(cqi < 7.5)
									{
										if(velocity < 14.145)
										{
											if(rsrp < -100.5)
											{
												if(sinr < 6)
												{
													if(ta < 13.5)
														return 7.47666;
													else
														return 5.06331;
												}
												else
													return 1.858435;
											}
											else
											{
												if(sinr < -0.5)
													return 11.7647;
												else
												{
													if(sinr < 3)
													{
														if(rsrq < -9.5)
															return 10.6667;
														else
															return 8.49257;
													}
													else
													{
														if(ta < 5)
															return 3.68834;
														else
															return 8.55431125;
													}
												}
											}
										}
										else
											return 21.6216;
									}
									else
									{
										if(rsrp < -102.5)
										{
											if(sinr < -1)
												return 7.76702;
											else
												return 4.7059;
										}
										else
										{
											if(velocity < 14.11)
											{
												if(cqi < 8.5)
													return 26.10175;
												else
												{
													if(cell < 13399561.5)
														return 20.1900166667;
													else
													{
														if(rsrq < -7.5)
														{
															if(payload < 0.75)
																return 15.625;
															else
																return 12.987;
														}
														else
															return 7.38007;
													}
												}
											}
											else
												return 1.86741;
										}
									}
								}
								else
								{
									if(velocity < 24.195)
									{
										if(rsrp < -97)
										{
											if(velocity < 16.68)
											{
												if(rsrp < -104)
													return 0.257236;
												else
												{
													if(cell < 13411714)
													{
														if(rsrq < -8.5)
															return 12.1581;
														else
															return 6.5574;
													}
													else
													{
														if(cell < 13474691)
														{
															if(payload < 0.3)
																return 4.25534;
															else
															{
																if(sinr < 8)
																{
																	if(payload < 0.75)
																		return 8.14664;
																	else
																		return 10.7383;
																}
																else
																	return 5.49073;
															}
														}
														else
															return 4.68591;
													}
												}
											}
											else
											{
												if(rsrp < -101.5)
													return 8.266045;
												else
													return 10.3359;
											}
										}
										else
										{
											if(rsrp < -94)
												return 14.8148;
											else
												return 18.8679;
										}
									}
									else
									{
										if(ta < 27)
										{
											if(cqi < 7.5)
											{
												if(cell < 13406338)
													return 2.26565;
												else
													return 3.96255;
											}
											else
												return 1.25313;
										}
										else
										{
											if(sinr < 2)
												return 7.14288;
											else
												return 5.16796;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if(ta < 11.5)
					{
						if(rsrp < -109.5)
						{
							if(rsrq < -8.5)
							{
								if(cqi < 8)
								{
									if(velocity < 14.505)
										return 11.7380666667;
									else
										return 14.3369;
								}
								else
									return 7.61107;
							}
							else
							{
								if(cqi < 9)
									return 15.5110333333;
								else
									return 20.5656;
							}
						}
						else
						{
							if(cell < 13394829)
							{
								if(cell < 13175301.5)
								{
									if(sinr < 0.5)
									{
										if(rsrp < -93.5)
											return 35.1097;
										else
											return 47.0193;
									}
									else
									{
										if(rsrq < -7.5)
										{
											if(rsrp < -97.5)
											{
												if(ta < 8)
												{
													if(payload < 7.5)
														return 21.751;
													else
														return 25.9235;
												}
												else
												{
													if(payload < 6)
														return 7.46037;
													else
													{
														if(cqi < 10)
															return 11.4304;
														else
															return 15.1831;
													}
												}
											}
											else
											{
												if(rsrq < -9.5)
												{
													if(rsrp < -95)
														return 17.2043;
													else
														return 22.2443;
												}
												else
												{
													if(sinr < 3.5)
														return 36.9686;
													else
													{
														if(rsrp < -95)
															return 26.5047;
														else
														{
															if(sinr < 6.5)
															{
																if(ta < 9)
																	return 24.6154;
																else
																	return 27.9525;
															}
															else
																return 22.0791;
														}
													}
												}
											}
										}
										else
										{
											if(rsrp < -97.5)
												return 33.3684666667;
											else
												return 36.9515;
										}
									}
								}
								else
								{
									if(cqi < 6.5)
									{
										if(velocity < 15.07)
										{
											if(cqi < 5)
												return 26.6889;
											else
											{
												if(rsrq < -9.5)
													return 53.1814;
												else
												{
													if(rsrp < -101)
													{
														if(rsrp < -107)
															return 48.2291;
														else
															return 51.0204;
													}
													else
														return 46.6739;
												}
											}
										}
										else
											return 12.9492;
									}
									else
									{
										if(cqi < 12.5)
										{
											if(velocity < 1.35)
												return 58.8957;
											else
											{
												if(f < 2247.55)
												{
													if(cqi < 9.5)
													{
														if(sinr < 3.5)
														{
															if(ta < 9.5)
															{
																if(rsrq < -8.5)
																	return 25.3361129032;
																else
																{
																	if(cell < 13394049.5)
																		return 29.1762;
																	else
																		return 31.5582;
																}
															}
															else
																return 32.8446;
														}
														else
														{
															if(payload < 6)
															{
																if(velocity < 11.87)
																	return 46.3097;
																else
																{
																	if(ta < 8)
																	{
																		if(rsrp < -99.5)
																			return 32.888;
																		else
																			return 36.7816;
																	}
																	else
																	{
																		if(payload < 4.5)
																		{
																			if(payload < 3.5)
																				return 30.4569;
																			else
																				return 26.4682;
																		}
																		else
																			return 30.7692;
																	}
																}
															}
															else
																return 52.6811;
														}
													}
													else
													{
														if(velocity < 11.9)
														{
															if(cqi < 11.5)
																return 31.284781457;
															else
																return 29.3578;
														}
														else
															return 25.8046;
													}
												}
												else
												{
													if(velocity < 12.9)
													{
														if(rsrq < -9)
															return 29.903125;
														else
														{
															if(rsrp < -101.5)
																return 42.6099;
															else
															{
																if(payload < 6.5)
																	return 39.604;
																else
																	return 34.9918;
															}
														}
													}
													else
														return 31.7424418605;
												}
											}
										}
										else
											return 49.0196;
									}
								}
							}
							else
							{
								if(sinr < 8.5)
								{
									if(cell < 13473666.5)
									{
										if(payload < 6.5)
										{
											if(sinr < 5.5)
												return 4.8012;
											else
												return 2.9083;
										}
										else
											return 22.7201;
									}
									else
									{
										if(ta < 8.5)
										{
											if(payload < 9.5)
											{
												if(rsrq < -8.5)
												{
													if(cqi < 7.5)
													{
														if(ta < 5.5)
															return 25.74;
														else
														{
															if(payload < 8.5)
															{
																if(cell < 13681160)
																	return 19.5122;
																else
																{
																	if(velocity < 4.985)
																		return 19.3548;
																	else
																		return 21.6655;
																}
															}
															else
															{
																if(rsrq < -9.5)
																	return 18.6047;
																else
																	return 16.609;
															}
														}
													}
													else
														return 26.2834;
												}
												else
													return 33.3333;
											}
											else
											{
												if(cell < 13830151)
													return 47.8755;
												else
												{
													if(rsrq < -9.5)
														return 17.2674;
													else
													{
														if(rsrp < -101.5)
															return 39.5062;
														else
															return 34.5125;
													}
												}
											}
										}
										else
										{
											if(cell < 13532419)
											{
												if(velocity < 14.885)
												{
													if(rsrq < -8)
													{
														if(rsrq < -9.5)
															return 48.048;
														else
															return 55.088;
													}
													else
														return 32.9606;
												}
												else
													return 12.1951;
											}
											else
											{
												if(payload < 5.5)
												{
													if(payload < 4.5)
													{
														if(rsrp < -96.5)
															return 26.7559;
														else
														{
															if(sinr < 5.5)
																return 22.2428;
															else
																return 24.1327;
														}
													}
													else
														return 28.1889;
												}
												else
												{
													if(velocity < 4.095)
													{
														if(payload < 7.5)
															return 35.0219;
														else
															return 37.3614;
													}
													else
														return 36.2812;
												}
											}
										}
									}
								}
								else
								{
									if(f < 1745)
									{
										if(velocity < 13.61)
										{
											if(ta < 8.5)
											{
												if(ta < 7)
													return 13.1148;
												else
													return 29.6426;
											}
											else
												return 13.2013;
										}
										else
										{
											if(velocity < 13.875)
											{
												if(payload < 9.5)
													return 6.665035;
												else
													return 4.78813;
											}
											else
												return 2.45476;
										}
									}
									else
									{
										if(velocity < 23.06)
										{
											if(velocity < 3.07)
											{
												if(sinr < 11)
													return 30.4569;
												else
												{
													if(rsrp < -101.5)
														return 24.1619;
													else
													{
														if(rsrq < -8.5)
															return 24.8062;
														else
															return 26.8156;
													}
												}
											}
											else
											{
												if(rsrp < -99)
													return 18.3627;
												else
													return 29.6426;
											}
										}
										else
											return 4.89796;
									}
								}
							}
						}
					}
					else
					{
						if(cell < 13044869)
						{
							if(rsrp < -107.5)
							{
								if(payload < 9.5)
								{
									if(sinr < 8.5)
									{
										if(sinr < 2.5)
										{
											if(cqi < 6.5)
											{
												if(velocity < 11.935)
												{
													if(velocity < 9.9)
														return 12.1029;
													else
														return 8.18833;
												}
												else
													return 21.9007;
											}
											else
											{
												if(payload < 8)
												{
													if(rsrp < -111)
													{
														if(payload < 5)
															return 14.742;
														else
															return 19.4512;
													}
													else
														return 20.1846285714;
												}
												else
												{
													if(rsrp < -109.5)
														return 25.4148;
													else
														return 26.936;
												}
											}
										}
										else
										{
											if(cqi < 10.5)
											{
												if(velocity < 13.415)
												{
													if(rsrq < -9.5)
													{
														if(sinr < 3.5)
														{
															if(payload < 5.5)
																return 11.4811;
															else
																return 13.1723;
														}
														else
														{
															if(cqi < 6.5)
																return 6.5538;
															else
															{
																if(payload < 6)
																	return 3.60469;
																else
																	return 5.29334;
															}
														}
													}
													else
													{
														if(payload < 6)
															return 16.5517;
														else
															return 11.4213;
													}
												}
												else
												{
													if(ta < 15.5)
														return 24.7423;
													else
													{
														if(rsrp < -110)
															return 10.5611;
														else
															return 15.8346;
													}
												}
											}
											else
											{
												if(payload < 4.5)
												{
													if(sinr < 6)
														return 14.3627;
													else
														return 8.08285;
												}
												else
												{
													if(sinr < 5.5)
													{
														if(rsrp < -109.5)
															return 18.764975;
														else
															return 12.9581;
													}
													else
													{
														if(rsrq < -8.5)
															return 22.1607;
														else
															return 25.7946;
													}
												}
											}
										}
									}
									else
									{
										if(payload < 4.5)
											return 35.9147;
										else
											return 18.6829;
									}
								}
								else
								{
									if(rsrq < -8.5)
									{
										if(rsrp < -110.5)
											return 20.3718;
										else
											return 14.7411;
									}
									else
									{
										if(cqi < 9)
											return 29.304;
										else
											return 25.2924;
									}
								}
							}
							else
							{
								if(sinr < 9.5)
								{
									if(rsrq < -8.5)
									{
										if(sinr < 5.5)
										{
											if(payload < 9)
											{
												if(sinr < -0.5)
													return 25.2632;
												else
												{
													if(velocity < 25.58)
													{
														if(rsrq < -9.5)
															return 18.7354;
														else
															return 15.1596;
													}
													else
														return 13.3407;
												}
											}
											else
												return 4.34735;
										}
										else
										{
											if(payload < 5)
												return 9.25569;
											else
											{
												if(ta < 16.5)
													return 22.4845;
												else
												{
													if(payload < 8.5)
														return 29.9465;
													else
														return 28.643;
												}
											}
										}
									}
									else
									{
										if(cqi < 6.5)
											return 15.7702;
										else
										{
											if(velocity < 13.925)
											{
												if(payload < 9.5)
												{
													if(cqi < 9.5)
													{
														if(rsrq < -7.5)
														{
															if(sinr < 4.5)
																return 26.3158;
															else
																return 22.9659666667;
														}
														else
															return 31.7041;
													}
													else
													{
														if(cqi < 14.5)
														{
															if(rsrp < -106.5)
																return 8.45368;
															else
															{
																if(payload < 8.5)
																	return 11.6831;
																else
																	return 13.7274;
															}
														}
														else
															return 21.9078;
													}
												}
												else
												{
													if(sinr < 4.5)
														return 23.902;
													else
														return 29.0592;
												}
											}
											else
											{
												if(rsrp < -106.5)
													return 27.4207;
												else
													return 31.5706;
											}
										}
									}
								}
								else
								{
									if(ta < 16.5)
									{
										if(rsrp < -104.5)
										{
											if(velocity < 6.82)
											{
												if(payload < 6)
												{
													if(payload < 4)
														return 21.6411;
													else
														return 17.7148;
												}
												else
												{
													if(payload < 8)
														return 33.393;
													else
														return 30.2648;
												}
											}
											else
											{
												if(payload < 5)
													return 35.1262;
												else
													return 38.0199;
											}
										}
										else
										{
											if(payload < 8)
											{
												if(rsrp < -102)
												{
													if(sinr < 11.5)
														return 33.7909;
													else
														return 39.40535;
												}
												else
												{
													if(cqi < 11.5)
													{
														if(payload < 5)
															return 25.1309;
														else
															return 23.8501;
													}
													else
														return 36.6972;
												}
											}
											else
												return 59.5041;
										}
									}
									else
									{
										if(cqi < 9.5)
										{
											if(rsrq < -7)
												return 33.6606;
											else
												return 22.3568;
										}
										else
										{
											if(sinr < 11.5)
											{
												if(rsrq < -7.5)
												{
													if(rsrp < -105.5)
														return 16.00605;
													else
													{
														if(rsrq < -8.5)
															return 32.4826;
														else
															return 35.5292;
													}
												}
												else
												{
													if(velocity < 3.915)
														return 27.0728;
													else
													{
														if(sinr < 10.5)
															return 21.8729;
														else
															return 17.1951;
													}
												}
											}
											else
												return 15.0991;
										}
									}
								}
							}
						}
						else
						{
							if(cqi < 11.5)
							{
								if(ta < 75)
								{
									if(sinr < -0.5)
									{
										if(cell < 13474690.5)
										{
											if(cell < 13405313.5)
											{
												if(rsrp < -107.5)
												{
													if(payload < 8.5)
													{
														if(rsrp < -109.5)
														{
															if(rsrq < -9.5)
															{
																if(payload < 5)
																	return 5.70342;
																else
																	return 7.60766;
															}
															else
																return 3.00019;
														}
														else
															return 13.4822;
													}
													else
														return 23.6998;
												}
												else
												{
													if(cell < 13394179)
													{
														if(sinr < -1.5)
															return 3.15656;
														else
															return 5.07185;
													}
													else
														return 9.125185;
												}
											}
											else
											{
												if(rsrq < -9)
													return 1.5576522;
												else
													return 2.96626;
											}
										}
										else
											return 18.2815;
									}
									else
									{
										if(ta < 66)
										{
											if(velocity < 21.48)
											{
												if(cell < 13323908.5)
												{
													if(sinr < 11)
													{
														if(cell < 13157125)
														{
															if(rsrp < -109.5)
																return 0.8494965;
															else
																return 3.58494;
														}
														else
														{
															if(cqi < 5)
																return 12.954;
															else
															{
																if(rsrp < -102.5)
																	return 9.23254;
																else
																{
																	if(rsrq < -9)
																		return 5.68909;
																	else
																	{
																		if(payload < 5.5)
																			return 8.3717;
																		else
																		{
																			if(payload < 8)
																				return 7.02371;
																			else
																				return 8.43526;
																		}
																	}
																}
															}
														}
													}
													else
														return 25.8983;
												}
												else
												{
													if(f < 2247.55)
													{
														if(sinr < 5.5)
														{
															if(rsrq < -9.5)
															{
																if(ta < 14)
																	return 24.2571;
																else
																{
																	if(velocity < 12.435)
																	{
																		if(ta < 19)
																		{
																			if(sinr < 1.5)
																				return 11.3422;
																			else
																				return 14.2844285714;
																		}
																		else
																		{
																			if(velocity < 0.855)
																				return 17.2755;
																			else
																				return 19.4884;
																		}
																	}
																	else
																	{
																		if(payload < 3.5)
																			return 0.931135;
																		else
																		{
																			if(payload < 6.5)
																				return 16.6754;
																			else
																			{
																				if(rsrp < -105.5)
																					return 1.21768;
																				else
																					return 7.56939;
																			}
																		}
																	}
																}
															}
															else
															{
																if(sinr < 1.5)
																	return 28.2686;
																else
																{
																	if(velocity < 17.425)
																	{
																		if(ta < 13.5)
																		{
																			if(rsrq < -8.5)
																				return 25.7152;
																			else
																				return 23.7741;
																		}
																		else
																		{
																			if(velocity < 0.93)
																			{
																				if(ta < 18.5)
																				{
																					if(ta < 15.5)
																					{
																						if(payload < 3.5)
																							return 16.8776;
																						else
																						{
																							if(payload < 6.5)
																								return 22.7273;
																							else
																								return 21.1921;
																						}
																					}
																					else
																					{
																						if(cqi < 8.5)
																							return 27.2851;
																						else
																						{
																							if(sinr < 3.5)
																								return 31.8725;
																							else
																							{
																								if(rsrq < -8)
																									return 27.3131;
																								else
																									return 30.9392;
																							}
																						}
																					}
																				}
																				else
																				{
																					if(sinr < 4)
																						return 17.2786;
																					else
																						return 13.6612;
																				}
																			}
																			else
																			{
																				if(payload < 9.5)
																				{
																					if(velocity < 6.565)
																					{
																						if(velocity < 4.685)
																							return 11.6467;
																						else
																							return 5.57578;
																					}
																					else
																					{
																						if(sinr < 4.5)
																						{
																							if(payload < 5.5)
																								return 16.8185;
																							else
																								return 14.9165;
																						}
																						else
																						{
																							if(rsrp < -103.5)
																								return 6.74157;
																							else
																							{
																								if(rsrq < -7)
																									return 24.8705;
																								else
																									return 17.4545;
																							}
																						}
																					}
																				}
																				else
																				{
																					if(rsrp < -107)
																						return 17.3837;
																					else
																					{
																						if(rsrp < -98)
																							return 25.5346;
																						else
																							return 20.8062;
																					}
																				}
																			}
																		}
																	}
																	else
																		return 2.57631;
																}
															}
														}
														else
														{
															if(cqi < 10.5)
															{
																if(cell < 13532418.5)
																{
																	if(cqi < 7.5)
																	{
																		if(f < 1362.55)
																		{
																			if(velocity < 15.035)
																			{
																				if(rsrp < -103)
																					return 0.772872;
																				else
																				{
																					if(payload < 5.5)
																						return 6.61157;
																					else
																						return 8.26636;
																				}
																			}
																			else
																				return 14.80852;
																		}
																		else
																			return 22.7273;
																	}
																	else
																	{
																		if(ta < 13.5)
																		{
																			if(velocity < 17)
																				return 26.3244;
																			else
																				return 14.1677;
																		}
																		else
																		{
																			if(ta < 15)
																			{
																				if(payload < 6.5)
																					return 6.83878;
																				else
																					return 8.98876;
																			}
																			else
																			{
																				if(ta < 23)
																				{
																					if(ta < 20.5)
																					{
																						if(payload < 4)
																							return 11.7302;
																						else
																						{
																							if(rsrp < -104)
																								return 16.5494;
																							else
																							{
																								if(cell < 13470467)
																									return 13.7457;
																								else
																									return 12.4572;
																							}
																						}
																					}
																					else
																					{
																						if(velocity < 14.12)
																						{
																							if(rsrp < -102.5)
																							{
																								if(payload < 6)
																									return 14.4144;
																								else
																									return 18.3814;
																							}
																							else
																								return 16.2933;
																						}
																						else
																							return 15.8927;
																					}
																				}
																				else
																					return 11.713;
																			}
																		}
																	}
																}
																else
																	return 3.51093;
															}
															else
															{
																if(ta < 14.5)
																	return 35.2734;
																else
																	return 18.4723666667;
															}
														}
													}
													else
													{
														if(cell < 13393934.5)
														{
															if(rsrp < -110)
																return 0.87859;
															else
																return 4.77644;
														}
														else
														{
															if(velocity < 13.13)
																return 8.94454;
															else
															{
																if(payload < 6.5)
																	return 16.2767;
																else
																	return 21.4541;
															}
														}
													}
												}
											}
											else
											{
												if(sinr < 6.5)
												{
													if(velocity < 28.695)
													{
														if(payload < 5.5)
															return 5.63777;
														else
															return 7.63151;
													}
													else
													{
														if(payload < 9)
															return 9.409;
														else
															return 12.3286;
													}
												}
												else
												{
													if(rsrp < -100)
														return 0.536001;
													else
														return 6.75533;
												}
											}
										}
										else
										{
											if(rsrp < -98)
											{
												if(rsrp < -106)
												{
													if(rsrq < -9)
														return 11.8343;
													else
														return 15.5264;
												}
												else
												{
													if(sinr < 12.5)
													{
														if(velocity < 10.945)
															return 22.2841;
														else
														{
															if(payload < 6)
																return 25.0261;
															else
																return 23.7467;
														}
													}
													else
													{
														if(rsrp < -99.5)
															return 13.6449;
														else
															return 16.632;
													}
												}
											}
											else
											{
												if(payload < 5.5)
													return 36.0902;
												else
													return 33.3333;
											}
										}
									}
								}
								else
								{
									if(cqi < 10)
										return 1.2672891667;
									else
										return 4.18751;
								}
							}
							else
							{
								if(cell < 13405441.5)
								{
									if(rsrp < -105.5)
										return 15.2497;
									else
									{
										if(rsrq < -8.5)
											return 39.5257;
										else
										{
											if(rsrq < -5.5)
											{
												if(payload < 3.5)
												{
													if(sinr < 9.5)
														return 35.2423;
													else
														return 22.2017;
												}
												else
												{
													if(velocity < 32.34)
													{
														if(sinr < 10)
														{
															if(velocity < 12.755)
															{
																if(rsrq < -7.5)
																	return 24.7391;
																else
																	return 22.75784;
															}
															else
																return 26.1051;
														}
														else
															return 21.6642375;
													}
													else
														return 13.2231;
												}
											}
											else
												return 11.8151;
										}
									}
								}
								else
								{
									if(velocity < 30.89)
									{
										if(rsrp < -100)
											return 7.93651;
										else
										{
											if(rsrp < -95)
												return 14.6681;
											else
												return 10.6484;
										}
									}
									else
										return 1.19781;
								}
							}
						}
					}
				}
			}
			else
			{
				if(payload < 4.5)
				{
					if(cqi < 10.5)
					{
						if(sinr < 15.5)
						{
							if(velocity < 4.16)
								return 8.00003;
							else
							{
								if(velocity < 12.785)
								{
									if(rsrp < -101.5)
										return 30.6513;
									else
										return 27.8746;
								}
								else
								{
									if(rsrp < -103.5)
										return 18.5185;
									else
									{
										if(rsrp < -101)
											return 23.9521;
										else
											return 19.9803333333;
									}
								}
							}
						}
						else
						{
							if(velocity < 24.05)
							{
								if(rsrp < -105.5)
								{
									if(rsrp < -107.5)
										return 15.2091;
									else
										return 1.35616;
								}
								else
								{
									if(sinr < 23.5)
									{
										if(payload < 0.75)
											return 21.5054;
										else
											return 22.9002;
									}
									else
									{
										if(cqi < 3.5)
											return 19.5122;
										else
										{
											if(payload < 2.05)
												return 14.0351;
											else
												return 12.0527;
										}
									}
								}
							}
							else
								return 0.31746;
						}
					}
					else
					{
						if(ta < 18)
						{
							if(velocity < 12.305)
							{
								if(velocity < 8.32)
								{
									if(cell < 13532424.5)
									{
										if(velocity < 7.97)
										{
											if(payload < 0.75)
											{
												if(rsrq < -9)
													return 32.2581;
												else
												{
													if(sinr < 16.5)
														return 23.2558;
													else
													{
														if(sinr < 21.5)
															return 18.6916;
														else
															return 22.2222;
													}
												}
											}
											else
											{
												if(rsrp < -101)
												{
													if(rsrp < -107)
														return 19.4489;
													else
													{
														if(payload < 3)
															return 30.1318;
														else
															return 26.354275;
													}
												}
												else
												{
													if(rsrq < -7.5)
														return 29.6296;
													else
													{
														if(cqi < 14.5)
															return 40.404;
														else
															return 42.1053;
													}
												}
											}
										}
										else
											return 45.4545;
									}
									else
										return 15.444;
								}
								else
								{
									if(sinr < 14.5)
										return 29.484;
									else
									{
										if(rsrp < -108.5)
											return 20.8333;
										else
											return 13.5051;
									}
								}
							}
							else
							{
								if(ta < 11.5)
								{
									if(payload < 2.5)
										return 38.5542;
									else
									{
										if(velocity < 12.975)
											return 42.6099;
										else
										{
											if(sinr < 19.5)
												return 47.4308;
											else
												return 45.3686;
										}
									}
								}
								else
								{
									if(rsrp < -105.5)
										return 17.66;
									else
									{
										if(ta < 16.5)
										{
											if(rsrq < -8)
												return 27.972;
											else
												return 21.0804;
										}
										else
											return 36.65525;
									}
								}
							}
						}
						else
						{
							if(rsrq < -5.5)
							{
								if(ta < 21)
									return 9.53516;
								else
									return 10.9375;
							}
							else
								return 7.33948;
						}
					}
				}
				else
				{
					if(sinr < 25.5)
					{
						if(rsrp < -99.5)
						{
							if(sinr < 18.5)
							{
								if(ta < 44)
								{
									if(ta < 16.5)
									{
										if(cqi < 12.5)
										{
											if(rsrp < -102)
											{
												if(cqi < 10.5)
													return 51.2164;
												else
												{
													if(payload < 6.5)
														return 42.9185;
													else
														return 45.2035;
												}
											}
											else
											{
												if(rsrq < -7)
													return 38.0409;
												else
													return 40.201;
											}
										}
										else
											return 28.6944;
									}
									else
									{
										if(rsrp < -102.5)
										{
											if(cqi < 12.5)
												return 23.2491;
											else
												return 28.4192;
										}
										else
										{
											if(payload < 8)
												return 36.34;
											else
												return 31.8722;
										}
									}
								}
								else
									return 9.29152;
							}
							else
							{
								if(rsrq < -7.5)
								{
									if(f < 2247.55)
										return 19.8441;
									else
										return 5.64687;
								}
								else
								{
									if(rsrq < -6.5)
										return 32.36415;
									else
										return 41.3223;
								}
							}
						}
						else
						{
							if(rsrq < -7.5)
							{
								if(cqi < 11)
								{
									if(sinr < 19)
										return 14.8392;
									else
										return 19.5462;
								}
								else
									return 42.1369;
							}
							else
							{
								if(velocity < 3.205)
								{
									if(rsrq < -6.5)
									{
										if(cell < 13100294)
										{
											if(payload < 5.5)
												return 62.7943;
											else
												return 65.0407;
										}
										else
											return 74.1886;
									}
									else
									{
										if(cell < 13463310)
										{
											if(payload < 8.5)
											{
												if(cell < 12937097)
												{
													if(payload < 7.5)
													{
														if(rsrp < -95)
															return 53.2826;
														else
															return 55.9441;
													}
													else
														return 45.911;
												}
												else
													return 58.8776;
											}
											else
											{
												if(cqi < 6.5)
													return 56.1798;
												else
												{
													if(cell < 13230731)
														return 61.384375;
													else
														return 63.0418;
												}
											}
										}
										else
											return 45.3686;
									}
								}
								else
								{
									if(f < 2247.55)
									{
										if(velocity < 11.755)
										{
											if(rsrq < -6.5)
											{
												if(payload < 8)
													return 58.9474;
												else
													return 46.1835;
											}
											else
												return 41.05285;
										}
										else
										{
											if(cell < 13469442.5)
											{
												if(sinr < 15)
												{
													if(cqi < 11.5)
														return 24.3902;
													else
														return 35.9753;
												}
												else
												{
													if(rsrq < -5.5)
													{
														if(cqi < 10)
															return 21.3832;
														else
															return 20.0501;
													}
													else
														return 25.0391;
												}
											}
											else
												return 9.03138;
										}
									}
									else
									{
										if(velocity < 12.33)
											return 68.8172;
										else
										{
											if(payload < 7.5)
												return 48.401;
											else
											{
												if(cqi < 13.5)
													return 43.8356;
												else
													return 41.6938;
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if(ta < 70)
						{
							if(velocity < 11.485)
							{
								if(payload < 6.5)
									return 34.8837;
								else
								{
									if(cqi < 11.5)
										return 18.7479;
									else
										return 22.5352;
								}
							}
							else
							{
								if(payload < 9.5)
								{
									if(velocity < 13.105)
										return 34.5988;
									else
										return 42.2961;
								}
								else
									return 21.0084;
							}
						}
						else
							return 15.6098;
					}
				}
			}
		}
	}
	else
	{
		if(payload < 1.5)
		{
			if(sinr < 17.5)
			{
				if(velocity < 16.475)
				{
					if(sinr < 6.5)
					{
						if(cqi < 7.5)
						{
							if(velocity < 2.48)
								return 29.1971;
							else
							{
								if(sinr < -4)
									return 13.5594;
								else
								{
									if(velocity < 5.83)
										return 21.8579;
									else
										return 18.018;
								}
							}
						}
						else
						{
							if(rsrq < -8.5)
							{
								if(velocity < 10.115)
								{
									if(rsrp < -87.5)
										return 14.4928;
									else
										return 11.1111;
								}
								else
								{
									if(rsrq < -10)
										return 3.16207;
									else
									{
										if(rsrp < -87)
											return 6.1414133333;
										else
											return 8.29876;
									}
								}
							}
							else
							{
								if(payload < 0.3)
								{
									if(velocity < 13.79)
									{
										if(cqi < 9.5)
											return 17.3914;
										else
											return 14.2858;
									}
									else
									{
										if(rsrp < -85.5)
											return 9.63859;
										else
											return 12.7049333333;
									}
								}
								else
								{
									if(ta < 7.5)
										return 22.0994;
									else
										return 24.7678;
								}
							}
						}
					}
					else
					{
						if(payload < 0.75)
						{
							if(sinr < 7.5)
								return 27.027;
							else
							{
								if(rsrp < -83)
								{
									if(rsrp < -84.5)
									{
										if(payload < 0.3)
										{
											if(ta < 12)
											{
												if(rsrq < -9)
													return 10.8109;
												else
													return 13.5594;
											}
											else
											{
												if(ta < 14.5)
													return 9.75613;
												else
													return 7.5485333333;
											}
										}
										else
										{
											if(rsrp < -85.5)
											{
												if(rsrp < -90)
													return 14.7601;
												else
													return 17.1073333333;
											}
											else
												return 14.0845;
										}
									}
									else
										return 7.40744;
								}
								else
								{
									if(cell < 13284741)
									{
										if(rsrp < -70)
										{
											if(rsrp < -79)
												return 9.87658;
											else
												return 11.9048;
										}
										else
											return 14.2858;
									}
									else
									{
										if(f < 1745)
										{
											if(velocity < 5.545)
												return 15.748;
											else
												return 19.269372973;
										}
										else
										{
											if(cqi < 11)
												return 18.018;
											else
												return 15.1515;
										}
									}
								}
							}
						}
						else
						{
							if(cqi < 5)
								return 15.9681;
							else
							{
								if(cell < 13468556)
								{
									if(velocity < 3.495)
									{
										if(cqi < 13)
										{
											if(cqi < 11)
											{
												if(cqi < 9.5)
													return 30.6513;
												else
													return 27.1186;
											}
											else
												return 34.7826;
										}
										else
											return 23.0548;
									}
									else
									{
										if(velocity < 14.255)
										{
											if(rsrq < -6.5)
											{
												if(velocity < 8.39)
													return 25.641;
												else
												{
													if(rsrp < -90)
														return 21.0526;
													else
														return 22.4723;
												}
											}
											else
											{
												if(cell < 12998017.5)
												{
													if(ta < 5.5)
														return 29.0909;
													else
														return 32.3887;
												}
												else
												{
													if(rsrq < -5.5)
														return 28.9855;
													else
														return 24.5399;
												}
											}
										}
										else
											return 29.6296;
									}
								}
								else
								{
									if(ta < 6)
									{
										if(rsrq < -7.5)
											return 44.9438;
										else
										{
											if(velocity < 10.99)
												return 38.835;
											else
												return 36.1991;
										}
									}
									else
										return 28.9855;
								}
							}
						}
					}
				}
				else
				{
					if(ta < 16)
					{
						if(rsrp < -83.5)
						{
							if(cell < 13405314)
							{
								if(velocity < 25.71)
									return 8.51067;
								else
									return 6.1274733333;
							}
							else
							{
								if(sinr < 6.5)
									return 0.793654;
								else
								{
									if(rsrp < -87.5)
										return 4.5887233333;
									else
										return 3.41588;
								}
							}
						}
						else
							return 10.202725;
					}
					else
						return 19.2308;
				}
			}
			else
			{
				if(rsrp < -74)
				{
					if(velocity < 10.92)
					{
						if(sinr < 28.5)
						{
							if(payload < 0.75)
							{
								if(sinr < 18.5)
								{
									if(rsrp < -84.5)
										return 26.8456;
									else
									{
										if(cqi < 13.5)
										{
											if(rsrq < -7.5)
												return 36.036;
											else
												return 29.8507;
										}
										else
											return 33.8983;
									}
								}
								else
								{
									if(sinr < 25.5)
									{
										if(cell < 12938245.5)
											return 26.1438;
										else
										{
											if(rsrp < -83)
											{
												if(cqi < 11)
													return 20.3046;
												else
													return 26.8456;
											}
											else
											{
												if(sinr < 23.5)
												{
													if(cqi < 14)
													{
														if(cqi < 10.5)
															return 17.094;
														else
															return 19.25454;
													}
													else
													{
														if(ta < 4.5)
															return 19.7044;
														else
															return 23.3918;
													}
												}
												else
												{
													if(payload < 0.3)
														return 22.8572;
													else
														return 24.5399;
												}
											}
										}
									}
									else
									{
										if(ta < 4)
										{
											if(sinr < 27)
												return 34.4828;
											else
												return 29.6296;
										}
										else
										{
											if(payload < 0.3)
												return 21.0527;
											else
												return 23.9521;
										}
									}
								}
							}
							else
							{
								if(rsrp < -79)
								{
									if(rsrp < -84)
										return 27.3038;
									else
										return 28.9855;
								}
								else
								{
									if(ta < 3.5)
										return 47.9042;
									else
									{
										if(rsrp < -76)
											return 36.8734;
										else
											return 29.7398;
									}
								}
							}
						}
						else
						{
							if(rsrp < -83)
								return 53.3335;
							else
								return 61.5387;
						}
					}
					else
					{
						if(rsrq < -6.5)
						{
							if(sinr < 21.5)
							{
								if(cell < 13410689.5)
								{
									if(sinr < 20)
										return 10.2434;
									else
										return 7.40744;
								}
								else
									return 3.57462;
							}
							else
							{
								if(rsrq < -9.5)
									return 22.3464;
								else
								{
									if(rsrp < -80.5)
										return 26.4901;
									else
										return 29.7398;
								}
							}
						}
						else
						{
							if(rsrp < -87.5)
								return 34.188;
							else
							{
								if(sinr < 22.5)
								{
									if(sinr < 19.5)
										return 25.0001;
									else
									{
										if(rsrp < -83.5)
										{
											if(sinr < 21.5)
												return 8.7146;
											else
												return 11.4286;
										}
										else
										{
											if(rsrp < -82)
												return 17.6211;
											else
												return 15.3847;
										}
									}
								}
								else
								{
									if(rsrp < -78)
									{
										if(velocity < 14.36)
											return 22.90966;
										else
										{
											if(payload < 0.75)
												return 19.6078;
											else
												return 21.4477;
										}
									}
									else
										return 25.974;
								}
							}
						}
					}
				}
				else
				{
					if(velocity < 18.22)
					{
						if(payload < 0.3)
						{
							if(sinr < 23.5)
								return 6.1092;
							else
								return 9.19544;
						}
						else
						{
							if(f < 1362.55)
							{
								if(rsrq < -7.5)
								{
									if(rsrp < -71.5)
										return 23.2558;
									else
										return 19.9005;
								}
								else
								{
									if(cell < 13183874.5)
									{
										if(sinr < 20)
										{
											if(ta < 2.5)
												return 31.4961;
											else
												return 27.6817;
										}
										else
										{
											if(sinr < 24.5)
												return 21.6216;
											else
												return 24.0964;
										}
									}
									else
										return 36.3694645161;
								}
							}
							else
							{
								if(payload < 0.75)
									return 28.169;
								else
								{
									if(ta < 5.5)
										return 46.5116;
									else
										return 33.4728;
								}
							}
						}
					}
					else
					{
						if(rsrq < -5.5)
							return 160.001;
						else
						{
							if(velocity < 23.665)
								return 8.24745;
							else
								return 26.7559;
						}
					}
				}
			}
		}
		else
		{
			if(cell < 13394190)
			{
				if(ta < 12)
				{
					if(velocity < 9.28)
					{
						if(payload < 5.5)
						{
							if(rsrp < -90.5)
							{
								if(payload < 3)
									return 18.412;
								else
									return 22.4561;
							}
							else
							{
								if(rsrp < -58)
								{
									if(velocity < 8.44)
									{
										if(cqi < 11.5)
										{
											if(cell < 13074437.5)
											{
												if(payload < 3.5)
												{
													if(sinr < 17.5)
													{
														if(payload < 2.5)
															return 26.8456;
														else
															return 31.4548;
													}
													else
													{
														if(rsrp < -84)
															return 40.201;
														else
														{
															if(payload < 2.5)
																return 36.6972;
															else
																return 39.3443;
														}
													}
												}
												else
													return 52.8926;
											}
											else
											{
												if(rsrp < -85.5)
												{
													if(payload < 3.5)
														return 34.2612;
													else
														return 44.1989;
												}
												else
												{
													if(sinr < 19)
														return 54.90872;
													else
													{
														if(cell < 13284741)
															return 41.9948;
														else
															return 48.6322;
													}
												}
											}
										}
										else
										{
											if(ta < 4.5)
											{
												if(rsrp < -75)
												{
													if(velocity < 1.785)
													{
														if(cell < 13183873.5)
														{
															if(sinr < 29.5)
															{
																if(rsrq < -7.5)
																	return 66.1157;
																else
																{
																	if(payload < 3)
																		return 63.4921;
																	else
																		return 47.976;
																}
															}
															else
																return 43.5967;
														}
														else
														{
															if(payload < 2.5)
																return 57.1429;
															else
															{
																if(rsrq < -4.5)
																{
																	if(cell < 13394183)
																		return 72.3084333333;
																	else
																		return 68.7679;
																}
																else
																	return 63.8978;
															}
														}
													}
													else
													{
														if(cqi < 13.5)
															return 54.8885;
														else
															return 45.7143;
													}
												}
												else
												{
													if(rsrq < -6)
														return 41.0678;
													else
													{
														if(payload < 3)
														{
															if(sinr < 27)
															{
																if(rsrp < -72.5)
																	return 50;
																else
																	return 48.3384;
															}
															else
																return 41.5584;
														}
														else
														{
															if(payload < 4.5)
																return 56.1404;
															else
																return 62.0155;
														}
													}
												}
											}
											else
											{
												if(rsrp < -70)
												{
													if(velocity < 6.815)
													{
														if(rsrp < -82)
														{
															if(rsrq < -9.5)
																return 53.0973;
															else
															{
																if(velocity < 3.275)
																	return 39.5387;
																else
																	return 40.9417;
															}
														}
														else
															return 37.8698;
													}
													else
														return 52.2023;
												}
												else
													return 64.3863;
											}
										}
									}
									else
									{
										if(rsrq < -8.5)
											return 50.3145;
										else
										{
											if(velocity < 9.135)
											{
												if(rsrp < -69)
													return 74.21175;
												else
													return 63.1579;
											}
											else
												return 51.8639;
										}
									}
								}
								else
									return 26.5957;
							}
						}
						else
						{
							if(sinr < 13.5)
							{
								if(payload < 8.5)
								{
									if(cqi < 11.5)
									{
										if(sinr < 10.5)
										{
											if(ta < 8.5)
											{
												if(cqi < 10)
													return 51.7241;
												else
													return 48.6322;
											}
											else
												return 40.3277;
										}
										else
											return 62.7451;
									}
									else
									{
										if(sinr < 10)
										{
											if(rsrq < -9.5)
												return 30.0188;
											else
												return 33.3333;
										}
										else
										{
											if(payload < 7.5)
											{
												if(rsrq < -8)
													return 38.2775;
												else
													return 57.4359;
											}
											else
												return 27.1532;
										}
									}
								}
								else
								{
									if(sinr < 7.5)
									{
										if(rsrp < -84.5)
											return 51.8471;
										else
											return 47.2813;
									}
									else
									{
										if(cqi < 11)
										{
											if(payload < 9.5)
												return 79.7342;
											else
												return 68.2012;
										}
										else
										{
											if(rsrp < -88.5)
												return 53.3333;
											else
												return 58.2053;
										}
									}
								}
							}
							else
							{
								if(velocity < 3.955)
								{
									if(rsrp < -77.5)
									{
										if(rsrp < -83.5)
										{
											if(cqi < 13.5)
											{
												if(rsrq < -8)
													return 54.3689;
												else
												{
													if(sinr < 20.5)
														return 79.558;
													else
													{
														if(sinr < 22.5)
															return 56.1896;
														else
															return 62.0967;
													}
												}
											}
											else
												return 83.4783;
										}
										else
										{
											if(rsrp < -80.5)
											{
												if(cell < 13394183)
													return 72.1443;
												else
													return 90.4685;
											}
											else
											{
												if(payload < 9.5)
													return 97.8261;
												else
													return 109.589;
											}
										}
									}
									else
									{
										if(cqi < 14)
										{
											if(rsrp < -72.5)
											{
												if(cqi < 11.5)
													return 55.2147;
												else
												{
													if(rsrp < -76.5)
													{
														if(payload < 7.5)
															return 72.7273;
														else
															return 69.0399;
													}
													else
														return 68.3761;
												}
											}
											else
												return 71.5159;
										}
										else
										{
											if(rsrp < -65.5)
											{
												if(cell < 13284104.5)
												{
													if(payload < 7.5)
														return 71.7489;
													else
														return 68.7023;
												}
												else
												{
													if(payload < 8)
														return 62.9921;
													else
														return 66.9145;
												}
											}
											else
												return 45.864;
										}
									}
								}
								else
								{
									if(rsrq < -6.5)
									{
										if(payload < 6.5)
											return 36.8664;
										else
										{
											if(ta < 8.5)
											{
												if(ta < 5)
													return 54.2741;
												else
													return 52.6811;
											}
											else
												return 50.2828;
										}
									}
									else
									{
										if(velocity < 8.105)
										{
											if(cell < 13394061.5)
											{
												if(cell < 13020555)
												{
													if(rsrp < -87)
														return 68.7961;
													else
														return 71.31424;
												}
												else
												{
													if(ta < 7.5)
														return 65.3981;
													else
														return 58.3942;
												}
											}
											else
												return 79.0514;
										}
										else
										{
											if(velocity < 8.17)
												return 41.0858;
											else
											{
												if(rsrp < -87)
													return 58.8235;
												else
												{
													if(rsrq < -5.5)
														return 63.4202;
													else
														return 65.9341;
												}
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if(rsrq < -7.5)
						{
							if(cell < 13394178)
							{
								if(sinr < -3.5)
								{
									if(sinr < -6)
										return 14.824;
									else
										return 22.4719;
								}
								else
								{
									if(rsrp < -86.5)
									{
										if(payload < 9.5)
										{
											if(payload < 8.5)
											{
												if(cell < 13175301.5)
												{
													if(ta < 5.5)
														return 31.5956;
													else
													{
														if(velocity < 12.78)
															return 36.0614;
														else
															return 34.4456;
													}
												}
												else
												{
													if(sinr < 6.5)
													{
														if(ta < 4.5)
															return 35.0263;
														else
															return 33.5289;
													}
													else
													{
														if(cell < 13284613.5)
															return 45.2617;
														else
															return 43.214;
													}
												}
											}
											else
												return 51.9106;
										}
										else
										{
											if(cqi < 13.5)
											{
												if(cqi < 11)
												{
													if(rsrp < -89)
														return 32.3756;
													else
														return 26.5869;
												}
												else
													return 28.2386;
											}
											else
												return 37.8788;
										}
									}
									else
									{
										if(rsrq < -10.5)
										{
											if(cell < 13284104.5)
											{
												if(cell < 13175302)
												{
													if(cqi < 8.5)
														return 51.7613;
													else
														return 45.977;
												}
												else
													return 58.5774;
											}
											else
												return 36.7816;
										}
										else
										{
											if(rsrq < -8.5)
											{
												if(rsrp < -73.5)
												{
													if(rsrp < -82)
														return 32.4374;
													else
														return 40.59195;
												}
												else
												{
													if(sinr < 1)
														return 24.2319;
													else
													{
														if(rsrp < -70.5)
														{
															if(rsrp < -72)
																return 30.0752;
															else
																return 32.3363;
														}
														else
															return 36.8098;
													}
												}
											}
											else
											{
												if(sinr < 12.5)
													return 24.7966;
												else
												{
													if(rsrp < -83.5)
													{
														if(sinr < 13.5)
															return 41.9287;
														else
															return 35.4296;
													}
													else
													{
														if(payload < 7.5)
														{
															if(rsrp < -74)
																return 42.9338;
															else
																return 44.9438;
														}
														else
															return 47.5248;
													}
												}
											}
										}
									}
								}
							}
							else
							{
								if(velocity < 11.96)
									return 82.1566;
								else
								{
									if(cqi < 9.5)
										return 53.5714;
									else
										return 40.6321;
								}
							}
						}
						else
						{
							if(sinr < 16.5)
							{
								if(rsrp < -81.5)
								{
									if(cqi < 10.5)
									{
										if(sinr < 13.5)
										{
											if(rsrp < -88)
												return 36.0902;
											else
											{
												if(cqi < 9)
													return 29.7524333333;
												else
													return 26.393;
											}
										}
										else
										{
											if(payload < 4)
												return 15.0094;
											else
												return 27.0118;
										}
									}
									else
									{
										if(velocity < 10.73)
											return 56.338;
										else
										{
											if(cell < 13393413)
											{
												if(velocity < 12.175)
													return 36.584925;
												else
													return 43.956;
											}
											else
											{
												if(velocity < 12.56)
													return 77.2201;
												else
												{
													if(cqi < 13.5)
													{
														if(rsrp < -87.5)
															return 42.4403;
														else
														{
															if(cell < 13394050.5)
																return 38.7722;
															else
															{
																if(rsrp < -85.5)
																	return 35.6461;
																else
																	return 34.1672;
															}
														}
													}
													else
													{
														if(rsrp < -88.5)
															return 48.7805;
														else
															return 57.3888;
													}
												}
											}
										}
									}
								}
								else
								{
									if(rsrp < -76.5)
									{
										if(cell < 13394050.5)
										{
											if(payload < 6.5)
											{
												if(rsrq < -6.5)
													return 71.8563;
												else
													return 78.0488;
											}
											else
												return 46.8619;
										}
										else
										{
											if(cqi < 9)
												return 42.0039;
											else
											{
												if(payload < 9)
													return 64.9087;
												else
													return 53.7634;
											}
										}
									}
									else
									{
										if(sinr < 15)
										{
											if(sinr < 3.5)
												return 53.1561;
											else
											{
												if(cell < 13074433.5)
													return 50.74;
												else
												{
													if(ta < 4.5)
														return 42.1607;
													else
													{
														if(payload < 7.5)
															return 31.5706;
														else
															return 25.1493;
													}
												}
											}
										}
										else
											return 64.6651;
									}
								}
							}
							else
							{
								if(ta < 8)
								{
									if(rsrq < -6.5)
									{
										if(sinr < 20.5)
											return 59.6897;
										else
										{
											if(sinr < 25.5)
											{
												if(velocity < 13.425)
													return 43.956;
												else
													return 46.7836;
											}
											else
											{
												if(sinr < 29.5)
													return 39.04025;
												else
													return 35.6877;
											}
										}
									}
									else
									{
										if(cell < 13020549)
										{
											if(cqi < 12.5)
												return 39.5795;
											else
												return 33.553;
										}
										else
										{
											if(payload < 7)
											{
												if(payload < 5.5)
												{
													if(ta < 3.5)
														return 37.5147;
													else
													{
														if(f < 2247.55)
														{
															if(payload < 3.5)
															{
																if(rsrp < -80.5)
																	return 48.3384;
																else
																	return 53.03925;
															}
															else
															{
																if(sinr < 30.5)
																{
																	if(rsrp < -75.5)
																	{
																		if(rsrp < -79.5)
																			return 61.2792;
																		else
																			return 68.4932;
																	}
																	else
																		return 52.8926;
																}
																else
																{
																	if(sinr < 38)
																		return 54.6510333333;
																	else
																		return 51.9481;
																}
															}
														}
														else
															return 67.5105;
													}
												}
												else
													return 46.2428;
											}
											else
											{
												if(cqi < 6)
													return 60.251;
												else
												{
													if(velocity < 12.515)
													{
														if(rsrq < -5.5)
															return 73.4619;
														else
														{
															if(rsrp < -75.5)
																return 65.7895;
															else
																return 74.5573;
														}
													}
													else
													{
														if(rsrq < -5.5)
															return 67.1563;
														else
															return 63.4921;
													}
												}
											}
										}
									}
								}
								else
								{
									if(rsrq < -5.5)
									{
										if(sinr < 24)
										{
											if(payload < 4)
												return 61.3027;
											else
											{
												if(velocity < 13.34)
												{
													if(payload < 8.5)
													{
														if(payload < 7)
															return 77.1704;
														else
															return 73.903;
													}
													else
														return 81.7253;
												}
												else
													return 68.0272;
											}
										}
										else
										{
											if(f < 2247.55)
											{
												if(payload < 9)
													return 54.62;
												else
													return 57.7617;
											}
											else
												return 42.4628;
										}
									}
									else
										return 44.8598;
								}
							}
						}
					}
				}
				else
				{
					if(velocity < 24.17)
					{
						if(cell < 13134721)
						{
							if(rsrq < -5.5)
							{
								if(cqi < 11.5)
								{
									if(cqi < 10.5)
										return 43.75;
									else
										return 27.7778;
								}
								else
								{
									if(rsrp < -84.5)
										return 54.9451;
									else
									{
										if(payload < 5)
											return 51.1727;
										else
										{
											if(sinr < 24)
												return 36.1757;
											else
											{
												if(payload < 8.5)
													return 48.0274;
												else
													return 45.8979;
											}
										}
									}
								}
							}
							else
							{
								if(velocity < 23.905)
								{
									if(sinr < 35.5)
									{
										if(cqi < 11.5)
										{
											if(rsrp < -82.5)
												return 33.5196;
											else
												return 31.068;
										}
										else
										{
											if(rsrp < -77.5)
												return 27.1493;
											else
												return 29.45;
										}
									}
									else
										return 41.8848;
								}
								else
									return 66.482;
							}
						}
						else
						{
							if(payload < 7.5)
							{
								if(velocity < 15.795)
								{
									if(f < 1362.55)
									{
										if(rsrp < -87.5)
											return 29.9252;
										else
											return 28.4024;
									}
									else
									{
										if(sinr < 9)
										{
											if(sinr < 2.5)
												return 16.5631;
											else
												return 20.4529;
										}
										else
										{
											if(sinr < 13.5)
												return 14.4665;
											else
												return 19.2154;
										}
									}
								}
								else
									return 3.25592;
							}
							else
							{
								if(payload < 8.5)
								{
									if(ta < 15.5)
									{
										if(ta < 13.5)
										{
											if(rsrq < -10.5)
												return 35.6546;
											else
											{
												if(rsrq < -7)
													return 43.7756;
												else
													return 41.4508;
											}
										}
										else
											return 37.3178;
									}
									else
										return 28.6353;
								}
								else
									return 22.1743;
							}
						}
					}
					else
					{
						if(rsrp < -82.5)
						{
							if(rsrq < -6.5)
							{
								if(rsrq < -10.5)
									return 12.8077;
								else
									return 17.4104;
							}
							else
							{
								if(payload < 6.5)
								{
									if(cqi < 11)
										return 19.9833;
									else
										return 15.3399;
								}
								else
								{
									if(sinr < 16)
										return 29.67495;
									else
									{
										if(payload < 9.5)
											return 22.8412;
										else
											return 29.1333;
									}
								}
							}
						}
						else
						{
							if(cqi < 14.5)
								return 26.8007;
							else
							{
								if(rsrp < -74)
									return 28.4951;
								else
									return 37.9147;
							}
						}
					}
				}
			}
			else
			{
				if(sinr < 6.5)
				{
					if(velocity < 34.255)
					{
						if(cell < 13411718.5)
						{
							if(rsrp < -85.5)
							{
								if(ta < 12.5)
								{
									if(cqi < 12)
									{
										if(sinr < 0.5)
											return 19.0749;
										else
											return 20.3046;
									}
									else
										return 23.7301;
								}
								else
								{
									if(rsrq < -9.5)
										return 28.3688;
									else
										return 30.7692;
								}
							}
							else
							{
								if(f < 1362.55)
									return 14.9743;
								else
								{
									if(velocity < 14.015)
									{
										if(rsrq < -7)
											return 30.7397;
										else
											return 38.3234;
									}
									else
										return 48.9896;
								}
							}
						}
						else
						{
							if(rsrp < -90.5)
								return 7.622715;
							else
							{
								if(ta < 19)
								{
									if(ta < 4.5)
									{
										if(cqi < 10.5)
										{
											if(sinr < 3.5)
												return 11.9166;
											else
												return 16.444;
										}
										else
										{
											if(velocity < 11.905)
												return 26.21335;
											else
												return 18.711725;
										}
									}
									else
									{
										if(cqi < 11.5)
										{
											if(ta < 8.5)
												return 28.0206;
											else
											{
												if(sinr < 2)
													return 29.0276;
												else
												{
													if(rsrp < -88.5)
														return 17.4027;
													else
														return 19.0779;
												}
											}
										}
										else
											return 34.5572;
									}
								}
								else
									return 13.566675;
							}
						}
					}
					else
					{
						if(payload < 5)
						{
							if(rsrp < -85)
								return 25.9319;
							else
								return 5.7971;
						}
						else
						{
							if(rsrq < -8)
								return 5.75126;
							else
							{
								if(payload < 8.5)
									return 8.09819;
								else
									return 6.63656;
							}
						}
					}
				}
				else
				{
					if(f < 1362.55)
					{
						if(payload < 7.5)
						{
							if(cqi < 9.5)
							{
								if(rsrq < -7.5)
								{
									if(sinr < 18.5)
									{
										if(rsrp < -85.5)
											return 33.9133;
										else
										{
											if(payload < 4)
											{
												if(cqi < 8.5)
												{
													if(rsrp < -79.5)
														return 15.2091;
													else
														return 12.6783;
												}
												else
												{
													if(sinr < 13.5)
														return 18.8679;
													else
														return 21.9479;
												}
											}
											else
												return 24.9221;
										}
									}
									else
										return 6.94444;
								}
								else
								{
									if(rsrq < -6.5)
										return 7.63541;
									else
										return 2.29932;
								}
							}
							else
							{
								if(sinr < 23.5)
								{
									if(rsrq < -11)
									{
										if(sinr < 10.5)
											return 14.0633;
										else
											return 6.62252;
									}
									else
									{
										if(velocity < 2.445)
										{
											if(sinr < 17.5)
											{
												if(sinr < 11.5)
													return 34.7323;
												else
													return 31.8725;
											}
											else
												return 39.5062;
										}
										else
										{
											if(ta < 7.5)
											{
												if(cqi < 13.5)
												{
													if(ta < 3.5)
														return 13.4945;
													else
													{
														if(rsrp < -78.5)
														{
															if(ta < 4.5)
															{
																if(velocity < 9.06)
																{
																	if(sinr < 13)
																		return 24.3309;
																	else
																		return 27.3785;
																}
																else
																	return 15.8207;
															}
															else
															{
																if(velocity < 15.615)
																	return 32.2906;
																else
																{
																	if(payload < 4)
																		return 26.8456;
																	else
																	{
																		if(payload < 5.5)
																			return 24.0385;
																		else
																			return 26.0728;
																	}
																}
															}
														}
														else
															return 34.5253;
													}
												}
												else
												{
													if(rsrq < -7.5)
														return 28.42806;
													else
														return 27.2882;
												}
											}
											else
											{
												if(rsrp < -90)
													return 51.5575;
												else
												{
													if(payload < 6)
														return 22.5098;
													else
														return 35.488;
												}
											}
										}
									}
								}
								else
									return 47.3373;
							}
						}
						else
						{
							if(rsrq < -6.5)
							{
								if(sinr < 11.5)
								{
									if(rsrp < -90)
										return 45.6853;
									else
										return 48.2396666667;
								}
								else
								{
									if(payload < 9.5)
									{
										if(rsrp < -79.5)
										{
											if(velocity < 6.675)
												return 33.9463;
											else
												return 36.1809;
										}
										else
										{
											if(sinr < 13.5)
												return 37.6028;
											else
											{
												if(payload < 8.5)
													return 44.9123;
												else
													return 43.088;
											}
										}
									}
									else
									{
										if(sinr < 17)
											return 27.0453;
										else
											return 32.0899;
									}
								}
							}
							else
							{
								if(sinr < 14)
									return 32.2581;
								else
								{
									if(sinr < 15.5)
										return 15.0338;
									else
									{
										if(ta < 6)
											return 17.2166;
										else
											return 21.06014;
									}
								}
							}
						}
					}
					else
					{
						if(sinr < 30)
						{
							if(rsrq < -7.5)
							{
								if(cqi < 13.5)
								{
									if(velocity < 14.675)
									{
										if(cqi < 10.5)
											return 33.67;
										else
										{
											if(rsrq < -8.5)
												return 26.2870666667;
											else
												return 27.8192;
										}
									}
									else
										return 18.773;
								}
								else
									return 47.0653;
							}
							else
							{
								if(rsrp < -78.5)
								{
									if(sinr < 14.5)
									{
										if(sinr < 11.5)
										{
											if(rsrp < -82)
											{
												if(rsrq < -6.5)
													return 51.8339875989;
												else
													return 63.2411;
											}
											else
											{
												if(sinr < 9)
													return 44.2804;
												else
													return 37.9404;
											}
										}
										else
											return 62.5815;
									}
									else
									{
										if(rsrp < -81.5)
										{
											if(velocity < 10.965)
											{
												if(cell < 13530893.5)
													return 32.5203;
												else
													return 46.34325;
											}
											else
											{
												if(ta < 5)
												{
													if(payload < 4.5)
														return 24.024;
													else
														return 50.7246;
												}
												else
													return 29.1793;
											}
										}
										else
										{
											if(ta < 3)
												return 58.8235;
											else
												return 42.7807;
										}
									}
								}
								else
								{
									if(payload < 5.5)
										return 60.8365;
									else
										return 58.6387;
								}
							}
						}
						else
							return 79.1209;
					}
				}
			}
		}
	}
}

float vodafone_dl_tree_1(float payload, float rsrp, float rsrq, float sinr, float cqi, float ta, float velocity, float cell, float f)
{
	if(rsrp < -92.5)
	{
		if(f < 1362.55)
		{
			if(cqi < 6.5)
			{
				if(ta < 12.5)
				{
					if(rsrq < -14.5)
					{
						if(ta < 8)
						{
							if(rsrq < -16.5)
								return 15.456;
							else
							{
								if(cell < 13400833.5)
									return 15.3994;
								else
								{
									if(cqi < 5)
										return 3.923202;
									else
										return 1.80244;
								}
							}
						}
						else
							return 0.5463435;
					}
					else
					{
						if(cell < 13215109)
						{
							if(sinr < 1.5)
							{
								if(payload < 5)
								{
									if(ta < 10.5)
									{
										if(cell < 13098881.5)
											return 4.16668;
										else
											return 12.9032;
									}
									else
										return 13.0293;
								}
								else
									return 24.9027;
							}
							else
								return 44.082125;
						}
						else
						{
							if(velocity < 33.775)
							{
								if(velocity < 13.585)
								{
									if(rsrp < -99.5)
									{
										if(sinr < 0.5)
										{
											if(velocity < 7.72)
											{
												if(rsrp < -102.5)
													return 10.2302;
												else
												{
													if(payload < 1.25)
													{
														if(ta < 6.5)
															return 8.28157;
														else
															return 5.81395;
													}
													else
														return 8.83002;
												}
											}
											else
											{
												if(payload < 7)
												{
													if(velocity < 10.525)
														return 4.9505;
													else
														return 6.508005;
												}
												else
													return 2.20595;
											}
										}
										else
										{
											if(sinr < 1.5)
												return 15.2091;
											else
												return 24.1021474354;
										}
									}
									else
									{
										if(velocity < 11.75)
										{
											if(velocity < 0.615)
												return 11.572;
											else
											{
												if(payload < 2.5)
												{
													if(payload < 1.5)
													{
														if(velocity < 3.14)
															return 24.5399;
														else
														{
															if(rsrp < -96.5)
																return 17.8174;
															else
																return 19.5122;
														}
													}
													else
														return 35.7942;
												}
												else
												{
													if(sinr < -1.5)
														return 21.3144;
													else
													{
														if(velocity < 11.07)
														{
															if(rsrq < -11.5)
																return 11.3933;
															else
																return 13.1291;
														}
														else
															return 16.609;
													}
												}
											}
										}
										else
										{
											if(rsrq < -11.5)
												return 45.1977;
											else
												return 10.8109;
										}
									}
								}
								else
								{
									if(rsrp < -103.5)
									{
										if(payload < 3.5)
											return 0.4469166667;
										else
											return 1.98437;
									}
									else
									{
										if(rsrp < -101.5)
											return 35.5556;
										else
										{
											if(velocity < 15.685)
											{
												if(cell < 13681154)
												{
													if(velocity < 14.425)
														return 6.15985;
													else
														return 3.9177636478;
												}
												else
												{
													if(rsrp < -99.5)
														return 11.0193;
													else
														return 13.6054;
												}
											}
											else
												return 15.2490273385;
										}
									}
								}
							}
							else
								return 39.2157;
						}
					}
				}
				else
				{
					if(payload < 9.5)
					{
						if(cell < 13081345.5)
						{
							if(rsrp < -103.5)
								return 26.0799;
							else
							{
								if(payload < 8.5)
								{
									if(payload < 4.5)
										return 13.0933;
									else
										return 15.2745;
								}
								else
									return 11.7743;
							}
						}
						else
						{
							if(rsrp < -103.5)
							{
								if(rsrq < -21)
								{
									if(sinr < -14.5)
										return 8.35073;
									else
										return 10.5621;
								}
								else
								{
									if(payload < 5.5)
									{
										if(sinr < -13.5)
										{
											if(rsrp < -116)
												return 1.82632;
											else
												return 6.27943;
										}
										else
										{
											if(payload < 0.75)
											{
												if(velocity < 4.27)
												{
													if(velocity < 0.495)
														return 0.6893166667;
													else
														return 3.86475;
												}
												else
												{
													if(cell < 13320706.5)
														return 0.0594531429;
													else
													{
														if(rsrp < -109.5)
															return 0.4911403234;
														else
														{
															if(payload < 0.3)
																return 0.898509;
															else
															{
																if(sinr < -5.5)
																	return 0.577201;
																else
																	return 2.296465;
															}
														}
													}
												}
											}
											else
											{
												if(cqi < 5.5)
												{
													if(velocity < 27.805)
													{
														if(cell < 13404802.5)
														{
															if(sinr < -9)
																return 3.61664;
															else
																return 0.7264339167;
														}
														else
														{
															if(ta < 22.5)
															{
																if(rsrp < -112.5)
																	return 1.31796;
																else
																{
																	if(payload < 1.5)
																	{
																		if(sinr < -7.5)
																			return 7.22674;
																		else
																			return 4.49438;
																	}
																	else
																	{
																		if(cqi < 3.5)
																			return 1.52652;
																		else
																			return 3.40208;
																	}
																}
															}
															else
															{
																if(cqi < 2)
																{
																	if(velocity < 22.185)
																		return 3.72787;
																	else
																		return 1.79937;
																}
																else
																	return 1.2092271667;
															}
														}
													}
													else
														return 0.6784912222;
												}
												else
												{
													if(velocity < 10.6)
														return 0.8664165;
													else
													{
														if(ta < 13.5)
														{
															if(sinr < -1.5)
																return 9.83204;
															else
																return 3.60967;
														}
														else
														{
															if(sinr < -0.5)
															{
																if(rsrp < -109.5)
																	return 0.450121;
																else
																	return 1.59906;
															}
															else
																return 2.79141125;
														}
													}
												}
											}
										}
									}
									else
									{
										if(velocity < 2.935)
										{
											if(rsrp < -110.5)
											{
												if(ta < 20.5)
													return 11.7799;
												else
													return 2.72634;
											}
											else
												return 3.9078306952;
										}
										else
										{
											if(velocity < 15.875)
											{
												if(rsrp < -108.5)
												{
													if(sinr < -8.5)
														return 0.7077804286;
													else
													{
														if(rsrp < -110.5)
															return 1.5455171429;
														else
														{
															if(velocity < 14.745)
																return 1.44984;
															else
																return 6.13615;
														}
													}
												}
												else
												{
													if(payload < 8)
														return 3.1097814286;
													else
														return 1.7262;
												}
											}
											else
											{
												if(cqi < 5.5)
												{
													if(rsrp < -104.5)
													{
														if(rsrq < -17)
															return 0.497203;
														else
														{
															if(rsrp < -106)
																return 2.757025;
															else
																return 0.744821;
														}
													}
													else
														return 7.0713;
												}
												else
												{
													if(cell < 13404931)
													{
														if(rsrq < -13.5)
															return 3.91675;
														else
															return 5.9828;
													}
													else
													{
														if(rsrq < -15)
															return 6.46465;
														else
															return 11.6861;
													}
												}
											}
										}
									}
								}
							}
							else
							{
								if(cqi < 2)
									return 19.0153;
								else
								{
									if(rsrq < -10.5)
									{
										if(ta < 23.5)
										{
											if(payload < 0.3)
											{
												if(rsrp < -102.5)
													return 1.49254;
												else
													return 0.13851675;
											}
											else
											{
												if(rsrp < -99.5)
												{
													if(sinr < -0.5)
													{
														if(rsrq < -15.5)
															return 0.8167773333;
														else
														{
															if(cqi < 5.5)
															{
																if(cell < 13394179)
																	return 5.44218;
																else
																	return 0.436443;
															}
															else
																return 5.99997;
														}
													}
													else
													{
														if(velocity < 12.9)
															return 10.7095;
														else
														{
															if(velocity < 13.915)
																return 3.26557;
															else
															{
																if(velocity < 15.895)
																{
																	if(velocity < 14.12)
																		return 5.34474;
																	else
																		return 7.33544125;
																}
																else
																{
																	if(velocity < 18.905)
																		return 5.7211;
																	else
																		return 4.0605;
																}
															}
														}
													}
												}
												else
												{
													if(cell < 13470339)
													{
														if(rsrq < -14.5)
															return 3.00271;
														else
														{
															if(ta < 22.5)
																return 1.838362;
															else
																return 0.516067;
														}
													}
													else
														return 7.84621;
												}
											}
										}
										else
										{
											if(rsrq < -13.5)
											{
												if(velocity < 13.915)
													return 21.4938;
												else
												{
													if(sinr < -1)
														return 2.07793;
													else
													{
														if(payload < 5.5)
															return 12.2231;
														else
															return 3.76353;
													}
												}
											}
											else
												return 5.6592625;
										}
									}
									else
									{
										if(rsrq < -9.5)
										{
											if(sinr < 7)
											{
												if(ta < 22.5)
													return 15.1286;
												else
													return 12.954;
											}
											else
												return 8.26636;
										}
										else
										{
											if(rsrp < -95.5)
												return 8.9736766667;
											else
												return 5.88238;
										}
									}
								}
							}
						}
					}
					else
					{
						if(rsrq < -12.5)
						{
							if(cqi < 5.5)
							{
								if(rsrp < -98)
								{
									if(sinr < -0.5)
										return 8.18247;
									else
										return 1.65741;
								}
								else
									return 32.76;
							}
							else
							{
								if(cell < 13473793.5)
								{
									if(rsrp < -104.5)
									{
										if(ta < 19)
										{
											if(rsrq < -13.5)
												return 0.9128015;
											else
												return 2.14196;
										}
										else
											return 2.53598;
									}
									else
									{
										if(sinr < -1)
											return 5.2482133333;
										else
											return 8.75082;
									}
								}
								else
									return 15.543;
							}
						}
						else
						{
							if(cell < 13320450)
								return 2.5511;
							else
								return 26.9088;
						}
					}
				}
			}
			else
			{
				if(cell < 13394306)
				{
					if(rsrq < -8.5)
					{
						if(payload < 2.5)
						{
							if(ta < 11)
							{
								if(rsrp < -109)
									return 0.96864;
								else
								{
									if(rsrp < -94)
									{
										if(velocity < 4.35)
										{
											if(payload < 1.5)
											{
												if(sinr < 5.5)
													return 26.0722;
												else
													return 28.5714;
											}
											else
												return 17.2043;
										}
										else
										{
											if(velocity < 12.46)
											{
												if(velocity < 11.7)
												{
													if(payload < 0.55)
														return 12.9033;
													else
														return 17.2414;
												}
												else
													return 3.25204;
											}
											else
												return 26.2295;
										}
									}
									else
										return 35.7872200073;
								}
							}
							else
							{
								if(rsrp < -98)
								{
									if(rsrp < -107.5)
										return 0.566527;
									else
									{
										if(ta < 24)
										{
											if(cqi < 11)
											{
												if(cqi < 8.5)
												{
													if(sinr < -5)
														return 3.24149;
													else
														return 5.244495;
												}
												else
												{
													if(payload < 0.3)
														return 4.66486;
													else
													{
														if(rsrp < -103)
															return 9.01917;
														else
															return 11.5942;
													}
												}
											}
											else
												return 0.750751;
										}
										else
											return 8.24742;
									}
								}
								else
								{
									if(payload < 0.55)
										return 6.72271;
									else
										return 17.2043;
								}
							}
						}
						else
						{
							if(rsrp < -105.5)
							{
								if(rsrp < -107.5)
									return 15.3846;
								else
								{
									if(cqi < 10)
									{
										if(payload < 8.5)
											return 2.99225;
										else
											return 1.23516;
									}
									else
										return 6.04002;
								}
							}
							else
							{
								if(sinr < -0.5)
								{
									if(cell < 13211137.5)
									{
										if(sinr < -2)
										{
											if(velocity < 8.865)
											{
												if(payload < 6.5)
													return 22.2717;
												else
													return 23.5294;
											}
											else
												return 26.7048;
										}
										else
											return 34.9091;
									}
									else
									{
										if(ta < 11)
										{
											if(rsrp < -98.5)
												return 25.5954;
											else
												return 18.8679;
										}
										else
											return 4.628755;
									}
								}
								else
								{
									if(ta < 9.5)
									{
										if(ta < 8.5)
										{
											if(rsrq < -10.5)
											{
												if(payload < 7)
												{
													if(ta < 7.5)
													{
														if(sinr < 0.5)
															return 40.6091;
														else
															return 35.9835333333;
													}
													else
														return 30.5732;
												}
												else
													return 48.4848;
											}
											else
											{
												if(velocity < 10.4)
												{
													if(cell < 13175557)
														return 21.061350895;
													else
														return 25;
												}
												else
												{
													if(sinr < 6)
														return 36.9686;
													else
														return 31.7618;
												}
											}
										}
										else
										{
											if(sinr < 2.5)
												return 39.3314;
											else
											{
												if(payload < 7)
													return 46.3097;
												else
													return 51.2492;
											}
										}
									}
									else
									{
										if(payload < 6.5)
										{
											if(velocity < 27.835)
											{
												if(velocity < 13.42)
												{
													if(rsrp < -95)
														return 20.6725666667;
													else
														return 22.0791;
												}
												else
												{
													if(sinr < 4)
														return 22.6886;
													else
													{
														if(rsrq < -10)
															return 25.5918;
														else
															return 27.5862;
													}
												}
											}
											else
												return 13.3407;
										}
										else
										{
											if(cell < 13208193.5)
											{
												if(rsrq < -10.5)
													return 36.7605;
												else
													return 44.4994;
											}
											else
											{
												if(sinr < 9)
												{
													if(rsrp < -97.5)
														return 25.7152;
													else
													{
														if(payload < 8.5)
															return 32.8446;
														else
															return 35.2734;
													}
												}
												else
													return 20.5233;
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if(ta < 10.5)
						{
							if(rsrp < -97.5)
								return 74.1886;
							else
							{
								if(rsrq < -7.5)
									return 50;
								else
								{
									if(payload < 1.25)
										return 21.6216;
									else
									{
										if(cqi < 10)
										{
											if(payload < 5)
											{
												if(cqi < 8)
													return 31.5582;
												else
													return 38.5078;
											}
											else
												return 38.7097;
										}
										else
											return 32.31525;
									}
								}
							}
						}
						else
						{
							if(rsrp < -98.5)
								return 8.3717;
							else
							{
								if(rsrp < -94)
								{
									if(velocity < 17.52)
										return 24.3902;
									else
										return 43.1558;
								}
								else
									return 26.6156666667;
							}
						}
					}
				}
				else
				{
					if(rsrp < -98.5)
					{
						if(payload < 0.3)
						{
							if(rsrq < -9.5)
							{
								if(sinr < 2)
								{
									if(rsrq < -10.5)
									{
										if(cell < 13725314.5)
											return 0.050839;
										else
											return 3.98011;
									}
									else
									{
										if(sinr < -2)
											return 7.14288;
										else
											return 10.6667;
									}
								}
								else
									return 0.111362;
							}
							else
								return 160.001;
						}
						else
						{
							if(cell < 13681410)
							{
								if(ta < 29)
								{
									if(rsrp < -100.5)
									{
										if(velocity < 30.345)
										{
											if(cell < 13470467)
											{
												if(rsrp < -103.5)
												{
													if(cqi < 8.5)
													{
														if(sinr < 2.5)
														{
															if(rsrp < -108.5)
															{
																if(rsrq < -14.5)
																	return 3.97812;
																else
																{
																	if(velocity < 19.755)
																	{
																		if(rsrq < -12)
																			return 0.70701;
																		else
																			return 1.80294;
																	}
																	else
																		return 3.11557;
																}
															}
															else
															{
																if(sinr < -7)
																	return 0.709954;
																else
																{
																	if(rsrp < -104.5)
																	{
																		if(ta < 23.5)
																		{
																			if(payload < 7.5)
																			{
																				if(ta < 13.5)
																					return 2.99569;
																				else
																					return 4.2722666667;
																			}
																			else
																				return 3.022495;
																		}
																		else
																			return 2.33964;
																	}
																	else
																		return 2.04221;
																}
															}
														}
														else
															return 0.852736;
													}
													else
													{
														if(cell < 13415298.5)
														{
															if(rsrp < -105)
																return 13.0826;
															else
																return 8.79121;
														}
														else
															return 1.85571775;
													}
												}
												else
												{
													if(sinr < 10.5)
													{
														if(payload < 5)
														{
															if(ta < 15)
															{
																if(rsrq < -9)
																	return 1.6262066667;
																else
																	return 2.713812;
															}
															else
															{
																if(rsrq < -14)
																	return 0.807918;
																else
																	return 7.62268;
															}
														}
														else
														{
															if(ta < 9.5)
																return 14.7996;
															else
																return 5.946652;
														}
													}
													else
													{
														if(rsrq < -7.5)
															return 7.93651;
														else
															return 6.61157;
													}
												}
											}
											else
											{
												if(payload < 2)
													return 2.1726037163;
												else
												{
													if(payload < 3.5)
														return 18.7647;
													else
													{
														if(velocity < 19.19)
															return 7.72356;
														else
															return 4.99376;
													}
												}
											}
										}
										else
										{
											if(ta < 13.5)
												return 1.7868016667;
											else
												return 0.90277925;
										}
									}
									else
									{
										if(velocity < 13.985)
										{
											if(ta < 6.5)
											{
												if(payload < 1.5)
													return 3.68834;
												else
													return 6.28437;
											}
											else
												return 1.67745;
										}
										else
										{
											if(ta < 19.5)
											{
												if(velocity < 30.025)
												{
													if(cqi < 10)
													{
														if(rsrp < -99.5)
															return 9.48804;
														else
															return 7.63151;
													}
													else
														return 3.13529;
												}
												else
													return 0.842631;
											}
											else
											{
												if(payload < 1.5)
												{
													if(rsrp < -99.5)
														return 5.49073;
													else
														return 10.7383;
												}
												else
												{
													if(sinr < 6.5)
													{
														if(payload < 4)
															return 19.802;
														else
															return 15.1181;
													}
													else
														return 13.7457;
												}
											}
										}
									}
								}
								else
								{
									if(rsrp < -103.5)
									{
										if(payload < 4.5)
											return 17.2414;
										else
											return 15.6032;
									}
									else
									{
										if(payload < 3.5)
										{
											if(cqi < 9)
												return 1.73913;
											else
												return 7.52115;
										}
										else
											return 13.2231;
									}
								}
							}
							else
							{
								if(rsrp < -100.5)
									return 8.1038904064;
								else
								{
									if(rsrp < -99.5)
									{
										if(velocity < 5.75)
											return 14.3410666667;
										else
											return 15.9204;
									}
									else
									{
										if(velocity < 5.61)
											return 18.7047;
										else
											return 16.8168;
									}
								}
							}
						}
					}
					else
					{
						if(ta < 12.5)
						{
							if(cell < 13532162.5)
							{
								if(cqi < 9.5)
								{
									if(velocity < 27.595)
									{
										if(rsrq < -11.5)
										{
											if(cell < 13532161.5)
											{
												if(sinr < 10.5)
												{
													if(payload < 5.5)
														return 19.4293;
													else
														return 15.6556;
												}
												else
													return 21.0843;
											}
											else
												return 24.4837333333;
										}
										else
										{
											if(payload < 1.75)
												return 12.42195;
											else
											{
												if(sinr < 9)
												{
													if(sinr < 5.5)
													{
														if(payload < 5.5)
															return 20.6186;
														else
														{
															if(payload < 9)
																return 16.7891;
															else
																return 18.2815;
														}
													}
													else
													{
														if(payload < 7)
															return 21.4938;
														else
															return 22.7201;
													}
												}
												else
												{
													if(payload < 5.5)
														return 14.1677;
													else
														return 16.9671;
												}
											}
										}
									}
									else
										return 1.34262;
								}
								else
								{
									if(rsrp < -94.5)
									{
										if(payload < 2.5)
										{
											if(payload < 0.75)
												return 7.38007;
											else
												return 8.94855;
										}
										else
										{
											if(ta < 6.5)
												return 4.7979325;
											else
												return 7.0457;
										}
									}
									else
									{
										if(ta < 6.5)
											return 13.1148;
										else
										{
											if(sinr < 6)
												return 20.7254;
											else
												return 17.9775;
										}
									}
								}
							}
							else
							{
								if(velocity < 15.345)
								{
									if(cqi < 8.5)
									{
										if(rsrp < -97.5)
											return 37.3614;
										else
										{
											if(velocity < 9.83)
											{
												if(rsrq < -9.5)
													return 26.8194908828;
												else
												{
													if(cqi < 7.5)
														return 22.2428;
													else
														return 25.974;
												}
											}
											else
											{
												if(ta < 6.5)
													return 26.2834;
												else
													return 19.3601910197;
											}
										}
									}
									else
									{
										if(velocity < 10.285)
										{
											if(velocity < 4.83)
												return 30.5157467079;
											else
												return 17.6712;
										}
										else
										{
											if(rsrq < -8.5)
											{
												if(cqi < 10.5)
												{
													if(rsrp < -96)
														return 48.048;
													else
														return 55.088;
												}
												else
													return 25.8435;
											}
											else
												return 18.7793;
										}
									}
								}
								else
									return 5.16129;
							}
						}
						else
						{
							if(ta < 33.5)
							{
								if(ta < 15.5)
								{
									if(rsrq < -12.5)
										return 5.97461;
									else
										return 1.832682;
								}
								else
								{
									if(rsrq < -8.5)
									{
										if(velocity < 37.48)
										{
											if(rsrq < -13.5)
											{
												if(payload < 7)
												{
													if(ta < 22.5)
														return 3.96334;
													else
														return 0.796654;
												}
												else
													return 0.691342;
											}
											else
											{
												if(cell < 13470467)
												{
													if(ta < 32.5)
													{
														if(sinr < 8)
														{
															if(rsrp < -96.5)
																return 11.713;
															else
																return 9.1904033333;
														}
														else
														{
															if(payload < 2.75)
																return 5.16796;
															else
																return 8.40649;
														}
													}
													else
														return 13.4003;
												}
												else
												{
													if(cell < 13528195)
														return 15.4291;
													else
														return 12.987;
												}
											}
										}
										else
											return 24.3439;
									}
									else
									{
										if(sinr < 5.5)
										{
											if(cqi < 8.5)
												return 14.35975;
											else
											{
												if(cqi < 9.5)
												{
													if(payload < 6)
														return 24.3531;
													else
														return 20.8062;
												}
												else
												{
													if(ta < 21.5)
														return 14.6681;
													else
														return 17.4545;
												}
											}
										}
										else
										{
											if(rsrq < -6.5)
											{
												if(payload < 4)
												{
													if(sinr < 13)
													{
														if(velocity < 16.69)
															return 14.8148;
														else
															return 12.7592;
													}
													else
													{
														if(rsrp < -94.5)
															return 19.6078;
														else
															return 18.1818;
													}
												}
												else
												{
													if(velocity < 13.03)
														return 5.66653;
													else
													{
														if(rsrp < -94)
														{
															if(sinr < 9.5)
																return 12.38004;
															else
																return 14.6982;
														}
														else
															return 10.6484;
													}
												}
											}
											else
											{
												if(ta < 28)
													return 10.4167;
												else
													return 6.75533;
											}
										}
									}
								}
							}
							else
							{
								if(payload < 9.5)
									return 41.0959;
								else
									return 11.0619;
							}
						}
					}
				}
			}
		}
		else
		{
			if(rsrp < -107.5)
			{
				if(rsrp < -109.5)
				{
					if(ta < 23.5)
					{
						if(payload < 0.3)
						{
							if(sinr < -0.5)
							{
								if(cqi < 8)
									return 0.503757953;
								else
									return 4.96896;
							}
							else
							{
								if(velocity < 11.705)
								{
									if(sinr < 5.5)
									{
										if(cqi < 8.5)
										{
											if(velocity < 9.43)
											{
												if(cell < 13099786)
													return 0.290488;
												else
													return 5.47947;
											}
											else
											{
												if(cqi < 7.5)
													return 7.92082;
												else
													return 10.5264;
											}
										}
										else
											return 2.07793;
									}
									else
										return 14.5455;
								}
								else
								{
									if(cqi < 7)
										return 8.24745;
									else
									{
										if(cell < 12854793.5)
											return 1.02696;
										else
											return 4.10588;
									}
								}
							}
						}
						else
						{
							if(cqi < 3.5)
							{
								if(rsrp < -117.5)
									return 56.7376;
								else
								{
									if(ta < 16)
										return 6.85225;
									else
										return 1.7486265;
								}
							}
							else
							{
								if(payload < 6.5)
								{
									if(rsrp < -113.5)
									{
										if(sinr < -4.5)
										{
											if(cell < 13099785)
												return 5.68182;
											else
												return 3.6405;
										}
										else
										{
											if(sinr < -1.5)
											{
												if(rsrq < -13)
													return 18.5701;
												else
													return 12.1894666667;
											}
											else
											{
												if(velocity < 11.65)
												{
													if(payload < 4.5)
													{
														if(velocity < 8.325)
															return 11.2249666667;
														else
															return 14.0598;
													}
													else
														return 8.18833;
												}
												else
												{
													if(cqi < 10.5)
													{
														if(cell < 13392905.5)
														{
															if(velocity < 13.23)
																return 3.80409;
															else
																return 6.90846;
														}
														else
														{
															if(rsrp < -117)
																return 3.85356;
															else
															{
																if(sinr < -0.5)
																	return 4.08789;
																else
																	return 2.642015;
															}
														}
													}
													else
														return 16.6147;
												}
											}
										}
									}
									else
									{
										if(rsrq < -7)
										{
											if(ta < 8)
											{
												if(payload < 2.5)
													return 34.2612;
												else
													return 25.2632;
											}
											else
											{
												if(rsrq < -10.5)
												{
													if(velocity < 4.545)
													{
														if(cqi < 9.5)
														{
															if(rsrp < -112.5)
																return 17.316;
															else
															{
																if(ta < 19)
																{
																	if(rsrp < -110.5)
																	{
																		if(cqi < 7)
																		{
																			if(payload < 3.5)
																				return 17.2538;
																			else
																				return 15.4664;
																		}
																		else
																			return 11.61052;
																	}
																	else
																		return 10.568;
																}
																else
																	return 5.77895;
															}
														}
														else
															return 23.5988;
													}
													else
													{
														if(ta < 17.5)
														{
															if(payload < 4.5)
															{
																if(sinr < -7.5)
																	return 3.73367;
																else
																{
																	if(velocity < 9.095)
																		return 5.57906;
																	else
																	{
																		if(ta < 16.5)
																		{
																			if(rsrq < -12.5)
																				return 11.9048;
																			else
																			{
																				if(rsrp < -111.5)
																					return 3.01512;
																				else
																					return 9.77995;
																			}
																		}
																		else
																		{
																			if(cqi < 9.5)
																				return 11.0933833333;
																			else
																				return 13.8468;
																		}
																	}
																}
															}
															else
																return 15.3965;
														}
														else
														{
															if(rsrp < -110.5)
																return 6.64866;
															else
																return 5.37634;
														}
													}
												}
												else
												{
													if(sinr < 2.5)
													{
														if(cqi < 6.5)
														{
															if(payload < 0.75)
																return 14.0351;
															else
															{
																if(payload < 2.5)
																	return 16.7715;
																else
																	return 15.4515;
															}
														}
														else
														{
															if(velocity < 2.27)
															{
																if(payload < 3)
																	return 16.8776;
																else
																	return 19.4884;
															}
															else
																return 23.47436;
														}
													}
													else
													{
														if(cqi < 6.5)
														{
															if(sinr < 7.5)
															{
																if(rsrp < -110.5)
																	return 13.8456;
																else
																	return 18.9573;
															}
															else
																return 23.4261;
														}
														else
														{
															if(rsrq < -8.5)
															{
																if(cqi < 7.5)
																{
																	if(velocity < 11.095)
																		return 18.7793;
																	else
																	{
																		if(rsrp < -110.5)
																		{
																			if(rsrq < -9.5)
																				return 7.23327;
																			else
																				return 10.5611;
																		}
																		else
																		{
																			if(velocity < 12.36)
																				return 16.5517;
																			else
																				return 15.1803;
																		}
																	}
																}
																else
																{
																	if(ta < 16.5)
																	{
																		if(cqi < 10)
																		{
																			if(cqi < 8.5)
																				return 24.7423;
																			else
																			{
																				if(payload < 5.5)
																				{
																					if(payload < 2.75)
																						return 15.625;
																					else
																						return 31.8725;
																				}
																				else
																					return 6.41026;
																			}
																		}
																		else
																			return 6.74157;
																	}
																	else
																	{
																		if(payload < 4.5)
																			return 15.9363;
																		else
																			return 11.4811;
																	}
																}
															}
															else
															{
																if(velocity < 5.31)
																{
																	if(payload < 3)
																		return 2.72944;
																	else
																		return 6.83878;
																}
																else
																{
																	if(sinr < 8)
																	{
																		if(cqi < 8.5)
																			return 0.87859;
																		else
																		{
																			if(rsrp < -110.5)
																				return 10.2302;
																			else
																				return 18.4403;
																		}
																	}
																	else
																		return 16.6698;
																}
															}
														}
													}
												}
											}
										}
										else
											return 1.6737066667;
									}
								}
								else
								{
									if(velocity < 13.435)
									{
										if(ta < 16.5)
										{
											if(cqi < 4.5)
												return 26.305;
											else
											{
												if(rsrp < -112.5)
													return 6.1594225;
												else
												{
													if(ta < 12)
													{
														if(rsrp < -111.5)
															return 23.4604;
														else
															return 15.26;
													}
													else
													{
														if(rsrq < -9.5)
														{
															if(ta < 14.5)
																return 6.5538;
															else
															{
																if(payload < 8.5)
																{
																	if(payload < 7.5)
																		return 7.60766;
																	else
																		return 10.3309;
																}
																else
																	return 14.1315;
															}
														}
														else
														{
															if(velocity < 8.73)
															{
																if(sinr < 4)
																	return 5.57578;
																else
																	return 11.6486;
															}
															else
															{
																if(velocity < 12.015)
																	return 25.9846;
																else
																{
																	if(sinr < 6.5)
																	{
																		if(cqi < 9.5)
																			return 14.7411;
																		else
																			return 17.3837;
																	}
																	else
																		return 10.8592;
																}
															}
														}
													}
												}
											}
										}
										else
										{
											if(cqi < 8.5)
											{
												if(sinr < 3.5)
												{
													if(payload < 8.5)
													{
														if(cell < 13099785)
														{
															if(velocity < 10.62)
																return 7.67202;
															else
																return 10.3426;
														}
														else
															return 14.2507;
													}
													else
														return 15.0846666667;
												}
												else
													return 21.4549;
											}
											else
											{
												if(sinr < -1.5)
													return 23.76;
												else
													return 25.3536;
											}
										}
									}
									else
									{
										if(ta < 14)
										{
											if(rsrp < -112)
												return 18.8368;
											else
												return 15.8033;
										}
										else
										{
											if(sinr < 2.5)
											{
												if(rsrp < -112)
												{
													if(rsrq < -10.5)
														return 21.1161;
													else
														return 19.4512;
												}
												else
													return 21.9007;
											}
											else
											{
												if(rsrq < -11.5)
													return 19.3705;
												else
													return 29.12105;
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if(rsrq < -18.5)
							return 17.6796;
						else
						{
							if(rsrq < -9.5)
							{
								if(cqi < 6.5)
								{
									if(rsrq < -10.5)
									{
										if(sinr < -1)
										{
											if(ta < 67.5)
												return 4.35698;
											else
											{
												if(rsrq < -13.5)
													return 4.19727;
												else
													return 10.101;
											}
										}
										else
											return 1.1371545;
									}
									else
										return 8.42697;
								}
								else
								{
									if(rsrp < -112.5)
									{
										if(payload < 8.5)
										{
											if(payload < 0.3)
												return 0.634748;
											else
												return 1.8220037143;
										}
										else
										{
											if(cqi < 7.5)
												return 2.45406;
											else
												return 5.26393;
										}
									}
									else
									{
										if(payload < 4)
											return 2.27855;
										else
											return 8.42359;
									}
								}
							}
							else
							{
								if(payload < 3)
									return 0.1179362;
								else
								{
									if(rsrp < -112.5)
									{
										if(cqi < 10)
										{
											if(payload < 8.5)
												return 2.602025;
											else
												return 0.682193;
										}
										else
											return 4.18751;
									}
									else
										return 0.97354;
								}
							}
						}
					}
				}
				else
				{
					if(sinr < -12.5)
						return 1.5503933333;
					else
					{
						if(rsrq < -9.5)
						{
							if(sinr < 6.5)
							{
								if(velocity < 0.53)
								{
									if(cell < 13392905)
									{
										if(payload < 1.05)
											return 8.1633;
										else
										{
											if(rsrp < -108.5)
											{
												if(rsrq < -12)
													return 13.8614;
												else
													return 15.2283;
											}
											else
											{
												if(cqi < 5.5)
													return 14.8644;
												else
													return 17.00945;
											}
										}
									}
									else
										return 4.03633;
								}
								else
								{
									if(payload < 8.5)
									{
										if(velocity < 14.57)
										{
											if(cqi < 6.5)
											{
												if(ta < 43.5)
												{
													if(rsrq < -11.5)
														return 15.0517;
													else
													{
														if(velocity < 4.985)
															return 19.3548;
														else
															return 21.6769333333;
													}
												}
												else
													return 11.4041;
											}
											else
											{
												if(cell < 12936970)
													return 3.57782;
												else
													return 8.7695966667;
											}
										}
										else
											return 33.3335;
									}
									else
									{
										if(cqi < 6.5)
										{
											if(velocity < 11.005)
												return 31.9107;
											else
												return 15.7765576309;
										}
										else
										{
											if(cell < 13100300.5)
											{
												if(velocity < 3.545)
													return 26.936;
												else
													return 20.80795;
											}
											else
												return 33.7981;
										}
									}
								}
							}
							else
							{
								if(cqi < 6.5)
									return 20.9268;
								else
									return 3.594815;
							}
						}
						else
						{
							if(velocity < 9.74)
							{
								if(rsrp < -108.5)
								{
									if(cell < 13183242.5)
									{
										if(velocity < 8.605)
										{
											if(velocity < 4.65)
												return 20.2212;
											else
												return 17.094;
										}
										else
											return 13.1148;
									}
									else
									{
										if(velocity < 1.005)
											return 22.7273;
										else
										{
											if(cell < 13462796.5)
											{
												if(sinr < 6.5)
													return 5.82189;
												else
													return 8.98876;
											}
											else
												return 17.7778;
										}
									}
								}
								else
								{
									if(rsrq < -7.5)
									{
										if(cqi < 8.5)
										{
											if(rsrq < -8.5)
											{
												if(sinr < 8.5)
													return 23.9521;
												else
													return 29.1616;
											}
											else
												return 22.2222;
										}
										else
										{
											if(payload < 4)
												return 19.4489;
											else
												return 22.19362;
										}
									}
									else
									{
										if(sinr < 12.5)
											return 19.9591333333;
										else
											return 6.89658;
									}
								}
							}
							else
							{
								if(velocity < 12.98)
								{
									if(cell < 13121416.5)
									{
										if(ta < 16.5)
										{
											if(rsrp < -108.5)
											{
												if(payload < 6)
													return 27.8164;
												else
													return 25.7946;
											}
											else
												return 24.2057;
										}
										else
											return 21.0416;
									}
									else
										return 48.2291;
								}
								else
								{
									if(sinr < 0)
									{
										if(cqi < 11.5)
											return 13.4822;
										else
											return 20.4082;
									}
									else
									{
										if(cqi < 5.5)
											return 14.6466;
										else
										{
											if(cell < 13230217)
											{
												if(ta < 43.5)
												{
													if(cqi < 9)
														return 21.751;
													else
													{
														if(velocity < 14.49)
															return 20.6718;
														else
															return 18.6829;
													}
												}
												else
													return 17.3661;
											}
											else
												return 26.287;
										}
									}
								}
							}
						}
					}
				}
			}
			else
			{
				if(sinr < 13.5)
				{
					if(payload < 0.75)
					{
						if(cell < 13469190)
						{
							if(ta < 12)
							{
								if(cqi < 7.5)
								{
									if(rsrq < -6.5)
									{
										if(sinr < 11.5)
											return 13.0737889811;
										else
											return 8.51067;
									}
									else
										return 16.1943;
								}
								else
								{
									if(cell < 13399561)
									{
										if(sinr < 2.5)
											return 25.4777;
										else
										{
											if(sinr < 5.5)
												return 22.8572;
											else
												return 20.9516;
										}
									}
									else
										return 12.4611;
								}
							}
							else
							{
								if(rsrp < -95)
								{
									if(rsrp < -98.5)
									{
										if(payload < 0.3)
										{
											if(cell < 12936970)
											{
												if(velocity < 4.585)
													return 9.09094;
												else
												{
													if(velocity < 12.605)
													{
														if(rsrq < -9.5)
															return 14.2858;
														else
															return 20.5129;
													}
													else
													{
														if(rsrp < -105.5)
															return 12.1213;
														else
															return 10.5264;
													}
												}
											}
											else
											{
												if(velocity < 12.405)
													return 7.64716;
												else
												{
													if(rsrp < -104.5)
														return 8.79124;
													else
														return 10.3897;
												}
											}
										}
										else
										{
											if(ta < 14.5)
												return 22.8571;
											else
											{
												if(rsrp < -106.5)
													return 2.21852;
												else
												{
													if(cqi < 9)
													{
														if(sinr < 4.5)
															return 15.2091;
														else
															return 17.9372;
													}
													else
													{
														if(rsrp < -99.5)
															return 13.4228;
														else
															return 10.3359;
													}
												}
											}
										}
									}
									else
										return 6.8996216667;
								}
								else
								{
									if(sinr < 2.5)
										return 11.7647;
									else
										return 21.0526;
								}
							}
						}
						else
						{
							if(sinr < 3)
							{
								if(rsrp < -100)
									return 2.09314;
								else
								{
									if(payload < 0.3)
										return 10.6667;
									else
										return 15.8263333333;
								}
							}
							else
							{
								if(rsrq < -8)
								{
									if(payload < 0.3)
										return 160.001;
									else
										return 5.16129;
								}
								else
								{
									if(sinr < 8.5)
										return 3.90245;
									else
										return 10.1266;
								}
							}
						}
					}
					else
					{
						if(rsrq < -9.5)
						{
							if(ta < 15)
							{
								if(ta < 8.5)
								{
									if(cell < 13175557)
									{
										if(velocity < 2.28)
										{
											if(rsrp < -94)
												return 24.3244333333;
											else
												return 37.5587;
										}
										else
										{
											if(cqi < 9.5)
											{
												if(payload < 5)
													return 40.6091;
												else
													return 50.8331;
											}
											else
												return 35.9835333333;
										}
									}
									else
									{
										if(cell < 13399560.5)
										{
											if(velocity < 4.915)
											{
												if(payload < 4.5)
													return 20.2276;
												else
													return 17.316;
											}
											else
											{
												if(payload < 7.5)
												{
													if(sinr < 3)
														return 25.2797098187;
													else
														return 26.6921;
												}
												else
													return 22.575;
											}
										}
										else
										{
											if(velocity < 4.63)
											{
												if(f < 2247.55)
													return 17.1215;
												else
												{
													if(cqi < 7)
														return 27.4914;
													else
													{
														if(rsrp < -104)
															return 20.915;
														else
															return 22.9626;
													}
												}
											}
											else
											{
												if(cqi < 10)
												{
													if(velocity < 10.325)
													{
														if(velocity < 10.09)
														{
															if(rsrp < -99)
																return 12.2511;
															else
																return 13.7991;
														}
														else
															return 4.9505;
													}
													else
													{
														if(sinr < -2.5)
														{
															if(payload < 5.5)
																return 17.9775;
															else
																return 19.6981734195;
														}
														else
														{
															if(payload < 4)
																return 6.20636;
															else
																return 13.9963881226;
														}
													}
												}
												else
													return 23.9234;
											}
										}
									}
								}
								else
								{
									if(cqi < 8.5)
									{
										if(sinr < 11.5)
										{
											if(velocity < 8.595)
												return 30.6448666667;
											else
											{
												if(rsrq < -11.5)
													return 22.7273;
												else
												{
													if(payload < 2)
														return 4.21053;
													else
													{
														if(payload < 6)
															return 13.1291;
														else
															return 11.4304;
													}
												}
											}
										}
										else
											return 35.1262;
									}
									else
									{
										if(cqi < 9.5)
											return 48.048;
										else
										{
											if(sinr < 2.5)
												return 16.2885;
											else
											{
												if(sinr < 8.5)
													return 30.2200973386;
												else
													return 33.4728;
											}
										}
									}
								}
							}
							else
							{
								if(cell < 13230089.5)
								{
									if(rsrp < -101.5)
									{
										if(cell < 12936970)
										{
											if(cqi < 10.5)
												return 25.2632;
											else
												return 19.3237;
										}
										else
										{
											if(velocity < 12.755)
											{
												if(rsrp < -104.5)
												{
													if(cqi < 8)
														return 11.8343;
													else
														return 10.3173;
												}
												else
												{
													if(velocity < 10.87)
														return 12.6858;
													else
														return 14.7126;
												}
											}
											else
											{
												if(velocity < 13.14)
												{
													if(rsrp < -104.5)
														return 21.7984;
													else
														return 25.0261;
												}
												else
													return 14.4231;
											}
										}
									}
									else
									{
										if(rsrq < -11.5)
											return 34.097;
										else
											return 26.4354;
									}
								}
								else
								{
									if(payload < 7.5)
									{
										if(rsrp < -98)
											return 13.5758;
										else
											return 16.9851;
									}
									else
									{
										if(payload < 9)
											return 6.80055;
										else
											return 3.27694;
									}
								}
							}
						}
						else
						{
							if(f < 2247.55)
							{
								if(cqi < 9.5)
								{
									if(payload < 3.5)
									{
										if(cell < 12854793.5)
										{
											if(sinr < 7.5)
												return 16.8067;
											else
											{
												if(payload < 2.5)
												{
													if(velocity < 11.265)
														return 23.4949;
													else
														return 26.1438;
												}
												else
													return 33.6606;
											}
										}
										else
										{
											if(velocity < 12.79)
											{
												if(payload < 2.5)
													return 14.2476;
												else
													return 11.6732666667;
											}
											else
											{
												if(rsrq < -7.5)
													return 27.3038;
												else
													return 20.592;
											}
										}
									}
									else
									{
										if(velocity < 14.07)
										{
											if(velocity < 13.515)
											{
												if(rsrp < -94.5)
												{
													if(rsrp < -97)
													{
														if(rsrp < -101.5)
														{
															if(payload < 6.5)
															{
																if(sinr < 10.5)
																{
																	if(payload < 5)
																		return 27.724401643;
																	else
																		return 31.7041;
																}
																else
																	return 38.4615;
															}
															else
															{
																if(velocity < 7.75)
																{
																	if(sinr < 4)
																		return 26.3158;
																	else
																	{
																		if(sinr < 10)
																			return 22.4845;
																		else
																			return 25.8983;
																	}
																}
																else
																{
																	if(payload < 9.5)
																	{
																		if(rsrq < -8.5)
																			return 29.4961;
																		else
																			return 32.1429;
																	}
																	else
																		return 28.643;
																}
															}
														}
														else
														{
															if(sinr < 6.5)
																return 19.5122;
															else
															{
																if(payload < 7)
																	return 22.52915;
																else
																	return 24.3161;
															}
														}
													}
													else
														return 35.1097;
												}
												else
													return 55.088;
											}
											else
											{
												if(payload < 5.5)
													return 56.2588;
												else
												{
													if(rsrp < -101)
														return 32.5866;
													else
														return 35.1906;
												}
											}
										}
										else
										{
											if(rsrp < -101)
												return 12.9492;
											else
											{
												if(rsrp < -99.5)
													return 23.8501;
												else
													return 27.4415879659;
											}
										}
									}
								}
								else
								{
									if(velocity < 14.665)
									{
										if(ta < 16.5)
										{
											if(velocity < 12.23)
											{
												if(velocity < 10.175)
												{
													if(sinr < 9.5)
													{
														if(cqi < 13)
														{
															if(sinr < 7.5)
															{
																if(rsrq < -7.5)
																	return 33.0306;
																else
																	return 29.3578;
															}
															else
																return 17.6712;
														}
														else
														{
															if(rsrp < -106)
																return 32.7065;
															else
																return 30.7861;
														}
													}
													else
													{
														if(cqi < 11.5)
														{
															if(payload < 2.5)
															{
																if(payload < 1.5)
																	return 34.188;
																else
																	return 31.3725;
															}
															else
																return 21.6411;
														}
														else
														{
															if(ta < 11)
																return 20.3132;
															else
																return 18.7463;
														}
													}
												}
												else
												{
													if(sinr < 12.5)
														return 38.9105;
													else
														return 31.2256;
												}
											}
											else
											{
												if(cell < 13147913)
												{
													if(velocity < 13.185)
													{
														if(cqi < 13)
															return 11.6831;
														else
															return 15.1831;
													}
													else
													{
														if(rsrq < -8)
															return 25.1309;
														else
															return 20;
													}
												}
												else
												{
													if(payload < 4)
														return 20.4604;
													else
														return 25.5742140189;
												}
											}
										}
										else
										{
											if(payload < 1.5)
											{
												if(rsrp < -105.5)
													return 21.164;
												else
												{
													if(cqi < 11.5)
														return 30.1887;
													else
														return 36.3636;
												}
											}
											else
											{
												if(velocity < 13.34)
												{
													if(payload < 5.5)
													{
														if(velocity < 11.16)
														{
															if(cqi < 10.5)
																return 17.1951;
															else
																return 14.9741666667;
														}
														else
														{
															if(rsrp < -98.5)
																return 25.5428;
															else
																return 20.4082;
														}
													}
													else
													{
														if(rsrp < -99)
														{
															if(rsrq < -7.5)
															{
																if(ta < 44)
																{
																	if(cqi < 14.5)
																	{
																		if(payload < 7.5)
																			return 18.419;
																		else
																			return 13.7274;
																	}
																	else
																		return 23.902;
																}
																else
																	return 24.7391;
															}
															else
															{
																if(cqi < 14.5)
																{
																	if(velocity < 5.955)
																	{
																		if(payload < 7.5)
																			return 27.0728;
																		else
																			return 29.7275;
																	}
																	else
																		return 23.7467;
																}
																else
																	return 23.1968;
															}
														}
														else
															return 33.3333;
													}
												}
												else
												{
													if(payload < 5.5)
														return 21.8729;
													else
													{
														if(sinr < 10)
														{
															if(payload < 8.5)
																return 15.0447;
															else
															{
																if(cell < 12936970)
																	return 5.70207;
																else
																	return 11.8151;
															}
														}
														else
														{
															if(payload < 8.5)
																return 16.3361;
															else
																return 13.6449;
														}
													}
												}
											}
										}
									}
									else
									{
										if(velocity < 15.105)
										{
											if(sinr < 12.5)
											{
												if(ta < 16.5)
												{
													if(payload < 6.5)
														return 33.7909;
													else
														return 37.5783;
												}
												else
												{
													if(rsrp < -103.5)
														return 31.5706;
													else
														return 35.5292;
												}
											}
											else
												return 24.8447;
										}
										else
										{
											if(rsrq < -7.5)
												return 25.9019;
											else
											{
												if(sinr < 9.5)
													return 18.75;
												else
													return 21.5667;
											}
										}
									}
								}
							}
							else
							{
								if(ta < 15)
								{
									if(cell < 13681160.5)
									{
										if(velocity < 8.365)
										{
											if(payload < 7)
											{
												if(payload < 4.5)
													return 26.6889;
												else
												{
													if(sinr < 10.5)
														return 49.0196;
													else
														return 50.7937;
												}
											}
											else
												return 34.9918;
										}
										else
										{
											if(ta < 5.5)
											{
												if(velocity < 12.48)
													return 39.604;
												else
													return 46.2428;
											}
											else
											{
												if(cqi < 8.5)
													return 24.506010426;
												else
												{
													if(rsrq < -7.5)
														return 40.7596853977;
													else
													{
														if(rsrq < -6.5)
															return 31.37305;
														else
															return 32.523975;
													}
												}
											}
										}
									}
									else
									{
										if(sinr < 7)
										{
											if(rsrp < -101.5)
												return 39.5062;
											else
												return 33.7496342194;
										}
										else
										{
											if(rsrp < -102)
												return 24.1619;
											else
											{
												if(sinr < 12.5)
													return 30.24822;
												else
													return 26.8156;
											}
										}
									}
								}
								else
								{
									if(rsrp < -106)
										return 21.4541;
									else
										return 8.94454;
								}
							}
						}
					}
				}
				else
				{
					if(rsrq < -6.5)
					{
						if(f < 2247.55)
						{
							if(sinr < 16.5)
							{
								if(velocity < 11.955)
								{
									if(sinr < 14.5)
									{
										if(rsrp < -106)
											return 18.8531;
										else
										{
											if(payload < 8)
												return 28.9516;
											else
												return 23.3991666667;
										}
									}
									else
									{
										if(rsrq < -8.5)
											return 31.9858;
										else
										{
											if(sinr < 15.5)
												return 28.6944;
											else
												return 26.6667;
										}
									}
								}
								else
								{
									if(payload < 9)
									{
										if(velocity < 14.585)
										{
											if(payload < 3)
											{
												if(velocity < 12.545)
													return 16.2602;
												else
													return 17.80058;
											}
											else
											{
												if(rsrp < -101)
													return 22.679;
												else
													return 20.7369666667;
											}
										}
										else
										{
											if(rsrp < -105)
												return 17.0213;
											else
												return 36.6972;
										}
									}
									else
										return 9.29152;
								}
							}
							else
							{
								if(rsrp < -97)
								{
									if(cqi < 5.5)
										return 21.5054;
									else
									{
										if(ta < 43)
										{
											if(payload < 3)
											{
												if(rsrq < -10)
													return 32.3887;
												else
												{
													if(payload < 1.5)
														return 27.972;
													else
														return 30.1318;
												}
											}
											else
											{
												if(velocity < 14.385)
												{
													if(velocity < 6.44)
														return 34.8837;
													else
														return 36.55864;
												}
												else
													return 32.1285;
											}
										}
										else
											return 42.2961;
									}
								}
								else
								{
									if(payload < 6.5)
										return 16.4948;
									else
										return 22.5352;
								}
							}
						}
						else
						{
							if(payload < 2.5)
							{
								if(payload < 0.75)
									return 14.2857;
								else
								{
									if(payload < 1.5)
										return 23.1214;
									else
										return 25.2765;
								}
							}
							else
							{
								if(sinr < 15.5)
									return 50.3794666667;
								else
								{
									if(payload < 3.5)
										return 47.4308;
									else
									{
										if(cell < 13612045.5)
											return 32.5998;
										else
											return 27.6817;
									}
								}
							}
						}
					}
					else
					{
						if(payload < 4.5)
						{
							if(sinr < 17.5)
							{
								if(rsrq < -5.5)
									return 15.444;
								else
									return 20.7254;
							}
							else
							{
								if(cell < 13393420)
								{
									if(velocity < 5.785)
										return 40.404;
									else
									{
										if(cqi < 10)
											return 19.8388;
										else
											return 25.3835;
									}
								}
								else
								{
									if(rsrq < -5.5)
									{
										if(sinr < 19)
											return 38.5542;
										else
											return 42.48375;
									}
									else
										return 45.3686;
								}
							}
						}
						else
						{
							if(cell < 13067401)
							{
								if(cqi < 14)
								{
									if(ta < 16.5)
									{
										if(sinr < 19.5)
											return 53.2826;
										else
											return 48.401;
									}
									else
										return 40.8627;
								}
								else
								{
									if(rsrq < -5.5)
									{
										if(velocity < 14.76)
										{
											if(sinr < 16.5)
												return 39.5648;
											else
												return 45.911;
										}
										else
											return 31.7586;
									}
									else
										return 25.0391;
								}
							}
							else
							{
								if(cqi < 13)
								{
									if(rsrp < -100.5)
									{
										if(payload < 6.5)
											return 41.3223;
										else
											return 45.0332333333;
									}
									else
									{
										if(rsrp < -96.5)
										{
											if(cqi < 11.5)
												return 65.7895;
											else
												return 61.4439;
										}
										else
											return 43.8356;
									}
								}
								else
								{
									if(rsrp < -100)
										return 34.5988;
									else
									{
										if(ta < 10)
											return 68.8172;
										else
										{
											if(rsrp < -98.5)
												return 58.8776;
											else
												return 61.6438;
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
	else
	{
		if(payload < 1.5)
		{
			if(cell < 12973575.5)
			{
				if(sinr < 28.5)
				{
					if(payload < 0.3)
					{
						if(sinr < 23)
						{
							if(cqi < 12.5)
							{
								if(velocity < 11.84)
									return 14.5455;
								else
									return 19.5123;
							}
							else
								return 19.5123;
						}
						else
							return 13.3334;
					}
					else
					{
						if(f < 1362.55)
						{
							if(velocity < 2.53)
							{
								if(rsrp < -83)
									return 26.8456;
								else
									return 29.74015;
							}
							else
							{
								if(rsrq < -6.5)
								{
									if(rsrp < -76.5)
									{
										if(payload < 0.75)
											return 32.2581;
										else
										{
											if(cqi < 13.5)
												return 47.9042;
											else
												return 36.3636;
										}
									}
									else
										return 29.7398;
								}
								else
								{
									if(ta < 2.5)
										return 31.4961;
									else
									{
										if(sinr < 16.5)
											return 29.0909;
										else
											return 27.6817;
									}
								}
							}
						}
						else
						{
							if(payload < 0.75)
							{
								if(rsrq < -7.5)
									return 22.2222;
								else
									return 26.67735;
							}
							else
								return 15.2672;
						}
					}
				}
				else
					return 61.5387;
			}
			else
			{
				if(sinr < 24.5)
				{
					if(velocity < 15.995)
					{
						if(payload < 0.3)
						{
							if(ta < 11)
							{
								if(rsrp < -91.5)
								{
									if(ta < 5.5)
										return 6.72271;
									else
										return 9.19544;
								}
								else
								{
									if(ta < 6)
									{
										if(ta < 4.5)
										{
											if(velocity < 13.405)
											{
												if(sinr < 21)
												{
													if(sinr < 16)
														return 13.6051333333;
													else
													{
														if(velocity < 11.61)
															return 19.5123;
														else
															return 15.3847;
													}
												}
												else
													return 10.2564;
											}
											else
											{
												if(rsrp < -80.5)
													return 7.40744;
												else
													return 13.1148;
											}
										}
										else
											return 17.3914;
									}
									else
									{
										if(velocity < 8.915)
										{
											if(cqi < 9.5)
												return 9.87658;
											else
												return 14.6901;
										}
										else
											return 5.71431;
									}
								}
							}
							else
							{
								if(cqi < 11.5)
									return 5.83944;
								else
									return 7.40744;
							}
						}
						else
						{
							if(payload < 0.75)
							{
								if(velocity < 15.525)
								{
									if(sinr < 11.5)
									{
										if(rsrq < -8)
										{
											if(rsrq < -9.5)
											{
												if(rsrp < -89)
													return 14.7601;
												else
													return 11.1111;
											}
											else
												return 6.74536;
										}
										else
										{
											if(f < 1362.55)
												return 14.0845;
											else
												return 22.0994;
										}
									}
									else
									{
										if(cell < 13175307.5)
										{
											if(sinr < 16.5)
											{
												if(rsrp < -75)
													return 11.9048;
												else
													return 17.7778;
											}
											else
												return 9.80392;
										}
										else
										{
											if(cqi < 11.5)
											{
												if(sinr < 15)
												{
													if(rsrp < -83.5)
														return 20.5128;
													else
														return 26.1438;
												}
												else
												{
													if(ta < 4.5)
													{
														if(cqi < 10.5)
														{
															if(rsrq < -8.5)
																return 17.6991;
															else
																return 20.3046;
														}
														else
															return 11.0497;
													}
													else
													{
														if(ta < 6.5)
															return 19.3842;
														else
															return 17.95364;
													}
												}
											}
											else
											{
												if(rsrp < -81.5)
												{
													if(ta < 9)
														return 19.4175;
													else
														return 16.5289;
												}
												else
												{
													if(rsrq < -5.5)
													{
														if(sinr < 20.5)
														{
															if(velocity < 10.325)
																return 27.5862;
															else
																return 29.6296;
														}
														else
														{
															if(rsrp < -80)
																return 23.3918;
															else
																return 27.7778;
														}
													}
													else
														return 22.634275;
												}
											}
										}
									}
								}
								else
									return 34.188;
							}
							else
							{
								if(f < 1362.55)
								{
									if(cqi < 7.5)
										return 18.018;
									else
									{
										if(rsrp < -79.5)
										{
											if(ta < 3.5)
												return 22.409;
											else
											{
												if(velocity < 5.375)
												{
													if(velocity < 0.42)
														return 30.4971;
													else
														return 32.6531;
												}
												else
												{
													if(sinr < 10.5)
													{
														if(cqi < 11.5)
															return 25.7654;
														else
															return 28.777;
													}
													else
													{
														if(sinr < 13)
															return 30.4183;
														else
															return 28.9855;
													}
												}
											}
										}
										else
											return 41.8848;
									}
								}
								else
								{
									if(rsrp < -82.5)
									{
										if(ta < 3.5)
										{
											if(rsrp < -84.5)
												return 8.29876;
											else
												return 13.0293;
										}
										else
										{
											if(rsrp < -88.5)
											{
												if(velocity < 14.755)
												{
													if(sinr < 7.5)
													{
														if(velocity < 14.46)
															return 22.792;
														else
															return 24.7678;
													}
													else
													{
														if(rsrp < -90)
															return 21.0526;
														else
															return 22.5989;
													}
												}
												else
													return 29.6296;
											}
											else
												return 11.8519;
										}
									}
									else
										return 34.3348;
								}
							}
						}
					}
					else
					{
						if(rsrp < -81.5)
						{
							if(cqi < 11.5)
							{
								if(rsrp < -84)
								{
									if(rsrq < -9)
										return 3.789105;
									else
										return 5.327286;
								}
								else
									return 10.40545;
							}
							else
							{
								if(rsrq < -6.5)
								{
									if(rsrq < -7.5)
										return 3.504055;
									else
										return 9.87658;
								}
								else
								{
									if(cqi < 14.5)
									{
										if(payload < 0.75)
											return 17.6211;
										else
											return 19.2308;
									}
									else
										return 11.69335;
								}
							}
						}
						else
						{
							if(cqi < 10)
								return 33.4728;
							else
							{
								if(rsrp < -76)
									return 26.2295;
								else
									return 22.2222;
							}
						}
					}
				}
				else
				{
					if(rsrp < -88)
						return 53.3335;
					else
					{
						if(velocity < 12.945)
						{
							if(rsrq < -6.5)
								return 38.4615;
							else
							{
								if(rsrp < -77.5)
								{
									if(payload < 0.75)
										return 23.2221333333;
									else
										return 27.3038;
								}
								else
								{
									if(rsrp < -72)
									{
										if(rsrp < -76)
										{
											if(payload < 0.75)
												return 24.5399;
											else
												return 37.3832;
										}
										else
											return 29.7398;
									}
									else
										return 32.5203;
								}
							}
						}
						else
						{
							if(rsrp < -73)
							{
								if(payload < 0.75)
									return 19.6078;
								else
								{
									if(cqi < 14)
										return 18.4758;
									else
										return 15.3551;
								}
							}
							else
								return 26.7559;
						}
					}
				}
			}
		}
		else
		{
			if(ta < 11.5)
			{
				if(cell < 13394823)
				{
					if(rsrp < -88.5)
					{
						if(cell < 13393928.5)
						{
							if(sinr < 17.5)
							{
								if(payload < 6.5)
								{
									if(cell < 12938245)
									{
										if(rsrp < -91.5)
											return 32.4324;
										else
											return 42.7807;
									}
									else
									{
										if(velocity < 9.585)
										{
											if(rsrq < -8)
											{
												if(cqi < 11.5)
												{
													if(rsrp < -90)
														return 22.4561;
													else
														return 24.3161;
												}
												else
												{
													if(sinr < 6.5)
														return 30.0188;
													else
														return 33.3333;
												}
											}
											else
											{
												if(payload < 3.5)
													return 10.2367;
												else
													return 14.892;
											}
										}
										else
										{
											if(rsrq < -9)
											{
												if(payload < 2.5)
													return 22.7273;
												else
													return 24.6407;
											}
											else
											{
												if(velocity < 13.64)
												{
													if(cell < 13074433.5)
													{
														if(rsrp < -91.5)
															return 36.9515;
														else
															return 43.956;
													}
													else
														return 36.1994;
												}
												else
												{
													if(ta < 9)
														return 27.0118;
													else
														return 30.7692;
												}
											}
										}
									}
								}
								else
								{
									if(cqi < 7)
										return 47.0193;
									else
									{
										if(f < 1362.55)
										{
											if(payload < 9.5)
											{
												if(payload < 8.5)
												{
													if(rsrp < -90)
														return 43.214;
													else
														return 35.8142;
												}
												else
													return 51.9106;
											}
											else
												return 32.3756;
										}
										else
										{
											if(payload < 7.5)
												return 31.5138;
											else
												return 27.456;
										}
									}
								}
							}
							else
							{
								if(rsrp < -91.5)
									return 41.93146;
								else
								{
									if(sinr < 21.5)
										return 68.7961;
									else
										return 58.8235;
								}
							}
						}
						else
						{
							if(rsrq < -7.5)
							{
								if(ta < 4.5)
									return 35.0263;
								else
									return 33.5289;
							}
							else
							{
								if(sinr < 20.5)
								{
									if(sinr < 17)
										return 48.7805;
									else
										return 58.3942;
								}
								else
								{
									if(rsrq < -5.5)
									{
										if(sinr < 23)
										{
											if(cell < 13394061.5)
											{
												if(rsrq < -6.5)
													return 68.0272;
												else
													return 73.7327;
											}
											else
												return 83.4783;
										}
										else
											return 67.5105;
									}
									else
										return 57.1429;
								}
							}
						}
					}
					else
					{
						if(sinr < 14.5)
						{
							if(velocity < 11.405)
							{
								if(velocity < 11.185)
								{
									if(velocity < 10.57)
									{
										if(velocity < 7.265)
										{
											if(sinr < 6.5)
											{
												if(cqi < 9)
													return 26.8456;
												else
													return 40.37865;
											}
											else
											{
												if(sinr < 7.5)
													return 80;
												else
												{
													if(payload < 5.5)
													{
														if(cell < 13175301.5)
														{
															if(sinr < 10)
																return 33.6134;
															else
																return 31.4548;
														}
														else
														{
															if(velocity < 3.275)
															{
																if(payload < 2.5)
																	return 55.1724;
																else
																	return 53.0973;
															}
															else
																return 40.9417;
														}
													}
													else
													{
														if(ta < 7.5)
														{
															if(cqi < 10)
																return 51.7241;
															else
															{
																if(rsrq < -7.5)
																{
																	if(cell < 13074437.5)
																		return 63.9432;
																	else
																		return 68.3761;
																}
																else
																{
																	if(payload < 6.5)
																		return 62.7451;
																	else
																	{
																		if(rsrq < -6.5)
																			return 57.4359;
																		else
																			return 59.3142;
																	}
																}
															}
														}
														else
														{
															if(velocity < 2.01)
															{
																if(payload < 6.5)
																	return 48.6322;
																else
																	return 62.3608;
															}
															else
																return 27.1532;
														}
													}
												}
											}
										}
										else
										{
											if(sinr < 12.5)
											{
												if(payload < 5)
												{
													if(sinr < 8)
														return 44.0367;
													else
													{
														if(cell < 13183746)
															return 51.8639;
														else
														{
															if(rsrq < -9)
																return 54.4218;
															else
																return 56.338;
														}
													}
												}
												else
												{
													if(cqi < 9.5)
														return 79.7342;
													else
													{
														if(velocity < 9.175)
															return 63.6605;
														else
														{
															if(sinr < 7.5)
																return 71.8563;
															else
																return 69.6517;
														}
													}
												}
											}
											else
												return 35.4296;
										}
									}
									else
									{
										if(ta < 8.5)
										{
											if(velocity < 10.95)
												return 42.1845666667;
											else
												return 28.2386;
										}
										else
											return 24.2319;
									}
								}
								else
									return 82.1566;
							}
							else
							{
								if(velocity < 15.75)
								{
									if(ta < 8.5)
									{
										if(cell < 13175302.5)
										{
											if(rsrq < -8.5)
											{
												if(rsrp < -85)
													return 22.4719;
												else
												{
													if(rsrq < -10.5)
														return 45.977;
													else
													{
														if(rsrp < -74.5)
															return 33.05552;
														else
														{
															if(sinr < 6)
																return 37.6399333333;
															else
																return 40.6091;
														}
													}
												}
											}
											else
											{
												if(payload < 2.5)
													return 14.1844;
												else
												{
													if(rsrp < -83.5)
														return 30.1075;
													else
													{
														if(sinr < 9.5)
															return 25.1493;
														else
															return 27.2727;
													}
												}
											}
										}
										else
										{
											if(sinr < 7.5)
											{
												if(rsrp < -82.5)
													return 51.9481;
												else
													return 78.0488;
											}
											else
											{
												if(cqi < 11)
													return 41.0132333333;
												else
												{
													if(cell < 13394178)
													{
														if(velocity < 13.39)
															return 36.3912;
														else
															return 42.4403;
													}
													else
													{
														if(payload < 5)
															return 32.8317;
														else
															return 35.6461;
													}
												}
											}
										}
									}
									else
									{
										if(cell < 13230725)
										{
											if(payload < 6)
												return 41.9287;
											else
												return 46.8619;
										}
										else
											return 57.3888;
									}
								}
								else
								{
									if(sinr < 5.5)
									{
										if(payload < 7)
											return 67.4536;
										else
											return 53.5714;
									}
									else
									{
										if(payload < 8.5)
											return 39.7727;
										else
											return 53.7634;
									}
								}
							}
						}
						else
						{
							if(cell < 13020555)
							{
								if(ta < 2.5)
								{
									if(velocity < 11.54)
									{
										if(sinr < 25)
										{
											if(velocity < 3.555)
											{
												if(payload < 4.5)
													return 39.3443;
												else
													return 54.115;
											}
											else
											{
												if(cqi < 5.5)
												{
													if(rsrp < -69.5)
														return 59.3081;
													else
														return 63.1579;
												}
												else
												{
													if(payload < 7)
														return 52.8926;
													else
														return 54.2741;
												}
											}
										}
										else
										{
											if(sinr < 29.5)
											{
												if(sinr < 27.5)
												{
													if(rsrq < -6.5)
														return 69.0399;
													else
														return 78.2779;
												}
												else
												{
													if(rsrp < -75)
														return 66.1157;
													else
														return 61.5385;
												}
											}
											else
											{
												if(sinr < 32.5)
													return 43.5967;
												else
													return 62.0155;
											}
										}
									}
									else
										return 39.5795;
								}
								else
								{
									if(cqi < 14)
									{
										if(rsrp < -57.5)
										{
											if(velocity < 14.855)
											{
												if(rsrp < -75.5)
												{
													if(velocity < 11.66)
													{
														if(velocity < 1.15)
														{
															if(rsrp < -78.5)
															{
																if(sinr < 22.5)
																{
																	if(payload < 9)
																	{
																		if(payload < 7.5)
																			return 54.3689;
																		else
																			return 56.1896;
																	}
																	else
																		return 53.3689;
																}
																else
																{
																	if(sinr < 24.5)
																		return 47.976;
																	else
																		return 50.1567;
																}
															}
															else
															{
																if(sinr < 20.5)
																	return 55.2147;
																else
																	return 72.7273;
															}
														}
														else
														{
															if(ta < 9.5)
															{
																if(payload < 9)
																	return 48.3019;
																else
																	return 50.2828;
															}
															else
																return 44.43815;
														}
													}
													else
													{
														if(sinr < 19.5)
															return 42.9338;
														else
														{
															if(sinr < 21)
																return 61.3027;
															else
															{
																if(sinr < 27.5)
																	return 77.1704;
																else
																	return 66.6667;
															}
														}
													}
												}
												else
												{
													if(cqi < 11.5)
														return 39.8506;
													else
													{
														if(payload < 9.5)
														{
															if(rsrq < -5.5)
																return 47.4308;
															else
																return 50;
														}
														else
															return 52.8751;
													}
												}
											}
											else
												return 32.3363;
										}
										else
											return 26.5957;
									}
									else
									{
										if(payload < 4.5)
											return 61.4203;
										else
										{
											if(rsrp < -65.5)
											{
												if(payload < 8.5)
												{
													if(rsrp < -85.5)
														return 42.4628;
													else
													{
														if(velocity < 10.56)
														{
															if(rsrq < -6.5)
																return 41.0678;
															else
																return 45.7143;
														}
														else
															return 33.553;
													}
												}
												else
													return 57.7617;
											}
											else
											{
												if(sinr < 28.5)
													return 37.2787;
												else
													return 35.6877;
											}
										}
									}
								}
							}
							else
							{
								if(payload < 4.5)
								{
									if(velocity < 2.88)
									{
										if(sinr < 19.5)
										{
											if(rsrp < -70)
												return 62.9921;
											else
												return 64.7821333333;
										}
										else
										{
											if(ta < 4.5)
											{
												if(sinr < 23)
													return 62.5;
												else
												{
													if(rsrq < -5.5)
														return 61.5385;
													else
														return 48.3384;
												}
											}
											else
											{
												if(sinr < 25.5)
												{
													if(rsrp < -79)
														return 37.8698;
													else
													{
														if(payload < 3)
															return 41.9948;
														else
															return 40.1506;
													}
												}
												else
													return 52.9801;
											}
										}
									}
									else
									{
										if(sinr < 16.5)
										{
											if(velocity < 10.685)
											{
												if(rsrp < -72.5)
													return 34.2857;
												else
													return 30.888;
											}
											else
												return 38.7722;
										}
										else
										{
											if(ta < 4.5)
											{
												if(f < 2247.55)
												{
													if(sinr < 18.5)
														return 54.8885;
													else
													{
														if(rsrq < -8)
															return 32.4763;
														else
														{
															if(velocity < 9.74)
															{
																if(rsrq < -5.5)
																	return 50.6329;
																else
																	return 53.2151;
															}
															else
															{
																if(payload < 3)
																	return 46.7836;
																else
																{
																	if(rsrp < -81.5)
																		return 37.5147;
																	else
																		return 39.4089;
																}
															}
														}
													}
												}
												else
													return 59.4796;
											}
											else
											{
												if(velocity < 15.05)
												{
													if(velocity < 10.585)
														return 52.8634;
													else
														return 61.0323;
												}
												else
													return 46.5116;
											}
										}
									}
								}
								else
								{
									if(velocity < 7.695)
									{
										if(sinr < 16)
											return 109.589;
										else
										{
											if(cell < 13394183)
											{
												if(payload < 9.5)
												{
													if(payload < 8.5)
													{
														if(cell < 13394049.5)
														{
															if(sinr < 28.5)
															{
																if(velocity < 2.86)
																{
																	if(sinr < 21)
																		return 56.7376;
																	else
																	{
																		if(sinr < 24.5)
																			return 65.5738;
																		else
																			return 62.6133;
																	}
																}
																else
																	return 64.9526;
															}
															else
															{
																if(sinr < 34.5)
																	return 71.7489;
																else
																{
																	if(payload < 7)
																		return 65.8436;
																	else
																		return 64.257;
																}
															}
														}
														else
														{
															if(payload < 5.5)
																return 63.8978;
															else
															{
																if(payload < 6.5)
																	return 84.8057;
																else
																	return 81.1594;
															}
														}
													}
													else
													{
														if(sinr < 20)
														{
															if(rsrp < -81)
																return 79.558;
															else
																return 97.8261;
														}
														else
														{
															if(rsrp < -84.5)
																return 62.3377;
															else
															{
																if(rsrq < -5.5)
																	return 72.09015;
																else
																	return 68.7023;
															}
														}
													}
												}
												else
												{
													if(ta < 6)
														return 52.7009;
													else
														return 71.2378;
												}
											}
											else
											{
												if(sinr < 25.5)
													return 90.4685;
												else
												{
													if(velocity < 3.47)
														return 92.4855;
													else
														return 79.0514;
												}
											}
										}
									}
									else
									{
										if(rsrp < -87.5)
											return 81.8182;
										else
										{
											if(rsrp < -77.5)
											{
												if(velocity < 9.17)
												{
													if(velocity < 8.53)
														return 41.0858;
													else
														return 50.3145;
												}
												else
												{
													if(ta < 5.5)
													{
														if(rsrq < -6.5)
														{
															if(rsrp < -79.5)
																return 62.9716666667;
															else
																return 39.0561;
														}
														else
														{
															if(payload < 8)
																return 71.8563;
															else
																return 73.4619;
														}
													}
													else
													{
														if(sinr < 17)
															return 47.5248;
														else
														{
															if(sinr < 33)
															{
																if(velocity < 11.72)
																	return 64.9351;
																else
																{
																	if(rsrp < -84.5)
																		return 58.1818;
																	else
																		return 60.75335;
																}
															}
															else
															{
																if(sinr < 38)
																	return 55.4785;
																else
																	return 51.9481;
															}
														}
													}
												}
											}
											else
											{
												if(velocity < 13.35)
												{
													if(payload < 8)
														return 68.1025333333;
													else
													{
														if(ta < 4.5)
															return 63.4921;
														else
															return 65.7895;
													}
												}
												else
												{
													if(rsrp < -73.5)
														return 61.5385;
													else
														return 46.2428;
												}
											}
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if(cell < 13400833.5)
					{
						if(payload < 2.5)
							return 5.7971;
						else
						{
							if(cell < 13395457.5)
							{
								if(velocity < 37.855)
								{
									if(payload < 6)
										return 25.9319;
									else
										return 23.7301;
								}
								else
									return 30.303;
							}
							else
							{
								if(rsrp < -81)
								{
									if(sinr < 7.5)
									{
										if(rsrq < -6.5)
											return 19.0749;
										else
											return 15.9151;
									}
									else
									{
										if(velocity < 33.495)
											return 26.0728;
										else
											return 23.714725;
									}
								}
								else
								{
									if(velocity < 30.775)
									{
										if(payload < 4.5)
											return 7.09849;
										else
											return 9.375;
									}
									else
									{
										if(rsrp < -79.5)
											return 21.2033;
										else
										{
											if(sinr < 20.5)
											{
												if(ta < 4.5)
													return 10.1497;
												else
													return 13.0878;
											}
											else
												return 17.2166;
										}
									}
								}
							}
						}
					}
					else
					{
						if(velocity < 12.175)
						{
							if(rsrq < -7.5)
							{
								if(velocity < 11.67)
								{
									if(rsrp < -71.5)
									{
										if(cqi < 10.5)
										{
											if(payload < 9.5)
											{
												if(rsrp < -79)
												{
													if(rsrq < -8.5)
													{
														if(rsrq < -11)
															return 34.0426;
														else
														{
															if(velocity < 9.15)
															{
																if(velocity < 3.695)
																{
																	if(rsrq < -9.5)
																		return 20.7164;
																	else
																		return 18.8679;
																}
																else
																	return 23.2772;
															}
															else
																return 29.1333;
														}
													}
													else
													{
														if(sinr < 10)
															return 28.8418;
														else
														{
															if(payload < 2.5)
																return 31.1284;
															else
																return 34.4333;
														}
													}
												}
												else
													return 12.6783;
											}
											else
											{
												if(rsrq < -9.5)
													return 22.0083;
												else
												{
													if(rsrp < -79)
														return 33.67;
													else
														return 47.6758;
												}
											}
										}
										else
										{
											if(rsrp < -84)
											{
												if(payload < 7.5)
												{
													if(payload < 5)
														return 21.5054;
													else
														return 20.1149;
												}
												else
													return 18.4811;
											}
											else
											{
												if(sinr < 11)
												{
													if(rsrq < -8.5)
													{
														if(cqi < 13)
															return 24.3309;
														else
															return 25.641;
													}
													else
														return 13.4945;
												}
												else
												{
													if(payload < 8.5)
													{
														if(velocity < 5.04)
															return 31.8725;
														else
														{
															if(sinr < 18)
																return 29.02485;
															else
																return 30.303;
														}
													}
													else
														return 25.1572;
												}
											}
										}
									}
									else
									{
										if(rsrp < -70.5)
											return 51.1727;
										else
										{
											if(sinr < 26.5)
												return 27.0453;
											else
												return 24.8062;
										}
									}
								}
								else
								{
									if(payload < 9)
										return 35.8543;
									else
										return 40.7539;
								}
							}
							else
							{
								if(cell < 13406212.5)
								{
									if(payload < 3.5)
										return 39.5062;
									else
									{
										if(payload < 7.5)
											return 9.97258;
										else
											return 32.0899;
									}
								}
								else
								{
									if(rsrp < -81.5)
									{
										if(cqi < 11.5)
										{
											if(velocity < 4.76)
												return 57.7386;
											else
											{
												if(payload < 2.5)
												{
													if(cqi < 10.5)
														return 33.195;
													else
														return 24.024;
												}
												else
												{
													if(cqi < 9.5)
													{
														if(rsrp < -84)
															return 51.8639;
														else
															return 38.3234;
													}
													else
													{
														if(payload < 5.5)
														{
															if(sinr < 12.5)
																return 37.2093;
															else
																return 39.0879;
														}
														else
															return 27.3926666667;
													}
												}
											}
										}
										else
										{
											if(cell < 13530893.5)
											{
												if(payload < 5)
												{
													if(rsrp < -84)
														return 32.5203;
													else
														return 34.8964;
												}
												else
													return 42.7807;
											}
											else
											{
												if(payload < 8)
												{
													if(payload < 5)
													{
														if(ta < 2.5)
															return 46.3097;
														else
														{
															if(sinr < 24.5)
																return 45.7619333333;
															else
																return 44.4444;
														}
													}
													else
														return 56.0748;
												}
												else
													return 33.1675;
											}
										}
									}
									else
									{
										if(rsrp < -71.5)
										{
											if(payload < 4.5)
												return 58.8235;
											else
											{
												if(velocity < 9.675)
												{
													if(rsrq < -6.5)
													{
														if(cell < 13468556)
															return 58.6387;
														else
															return 65.3951;
													}
													else
													{
														if(payload < 5.5)
															return 47.3373;
														else
															return 44.2804;
													}
												}
												else
												{
													if(sinr < 15.5)
													{
														if(rsrp < -77.5)
															return 37.9404;
														else
															return 32.2581;
													}
													else
														return 42.7807;
												}
											}
										}
										else
											return 79.1209;
									}
								}
							}
						}
						else
						{
							if(cell < 13531528.5)
							{
								if(rsrp < -86.5)
								{
									if(cqi < 9.5)
									{
										if(rsrp < -90)
										{
											if(payload < 3.5)
												return 7.35069;
											else
												return 10.2729;
										}
										else
											return 15.3551;
									}
									else
									{
										if(rsrp < -88)
										{
											if(payload < 4.5)
												return 33.9943;
											else
												return 32.0213;
										}
										else
										{
											if(rsrq < -8)
											{
												if(f < 1745)
													return 15.6442;
												else
													return 18.2492;
											}
											else
												return 32.2906;
										}
									}
								}
								else
								{
									if(rsrq < -11.5)
										return 6.62252;
									else
									{
										if(velocity < 13.125)
										{
											if(ta < 4.5)
											{
												if(sinr < 6)
													return 11.9166;
												else
													return 14.7988;
											}
											else
												return 34.5253;
										}
										else
										{
											if(cell < 13530766)
											{
												if(velocity < 14.005)
												{
													if(rsrp < -82.5)
													{
														if(ta < 5.5)
															return 35.6591;
														else
															return 27.9163;
													}
													else
														return 52.9801;
												}
												else
												{
													if(velocity < 14.935)
													{
														if(cell < 13472898)
														{
															if(cqi < 9)
																return 15.2091;
															else
															{
																if(payload < 8)
																	return 18.773;
																else
																	return 20.8454;
															}
														}
														else
															return 27.9595;
													}
													else
													{
														if(velocity < 15.19)
															return 42.6829;
														else
														{
															if(velocity < 15.315)
																return 27.2882;
															else
															{
																if(payload < 5)
																	return 26.8456;
																else
																{
																	if(velocity < 15.41)
																		return 31.355;
																	else
																	{
																		if(sinr < 29.5)
																			return 33.9188;
																		else
																			return 35.538;
																	}
																}
															}
														}
													}
												}
											}
											else
											{
												if(sinr < 5)
													return 18.4829;
												else
												{
													if(payload < 4.5)
														return 63.2411;
													else
														return 50.7246;
												}
											}
										}
									}
								}
							}
							else
								return 55.1724;
						}
					}
				}
			}
			else
			{
				if(sinr < 22.5)
				{
					if(velocity < 0.815)
					{
						if(rsrp < -91.5)
						{
							if(payload < 6.5)
								return 39.604;
							else
								return 60.6061;
						}
						else
						{
							if(rsrp < -85)
								return 22.1743;
							else
								return 34.188;
						}
					}
					else
					{
						if(rsrp < -74.5)
						{
							if(sinr < 8.5)
							{
								if(ta < 14)
								{
									if(velocity < 33.105)
									{
										if(payload < 3.5)
											return 19.4868;
										else
										{
											if(cqi < 11.5)
												return 7.89474;
											else
												return 13.2013;
										}
									}
									else
									{
										if(rsrp < -85)
										{
											if(cqi < 7.5)
												return 30.7811;
											else
											{
												if(rsrp < -87.5)
													return 30.7692;
												else
													return 28.3688;
											}
										}
										else
											return 41.6667;
									}
								}
								else
								{
									if(sinr < -1)
									{
										if(payload < 2.5)
											return 3.003;
										else
										{
											if(rsrp < -91.5)
												return 5.76618;
											else
											{
												if(rsrp < -89)
													return 7.98403;
												else
													return 6.63656;
											}
										}
									}
									else
									{
										if(ta < 15.5)
										{
											if(rsrp < -89.5)
												return 17.4027;
											else
											{
												if(payload < 5.5)
													return 6.26141;
												else
													return 8.09819;
											}
										}
										else
										{
											if(cqi < 9.5)
												return 13.540975;
											else
											{
												if(rsrp < -91)
													return 14.5941;
												else
												{
													if(payload < 7.5)
													{
														if(sinr < 7.5)
															return 19.7543857143;
														else
															return 14.944;
													}
													else
													{
														if(sinr < 3)
															return 12.8077;
														else
															return 15.6517;
													}
												}
											}
										}
									}
								}
							}
							else
							{
								if(rsrp < -81.5)
								{
									if(rsrq < -6.5)
									{
										if(sinr < 12)
										{
											if(sinr < 9.5)
												return 2.70718;
											else
											{
												if(payload < 7.5)
												{
													if(rsrq < -8.5)
													{
														if(rsrp < -89.5)
															return 36.6972;
														else
															return 33.264;
													}
													else
													{
														if(rsrp < -88)
															return 22.4765666667;
														else
															return 14.4665;
													}
												}
												else
												{
													if(cell < 13207685)
														return 54.9451;
													else
													{
														if(cqi < 8.5)
															return 48.5216;
														else
														{
															if(rsrq < -10)
																return 35.6546;
															else
																return 37.3178;
														}
													}
												}
											}
										}
										else
										{
											if(cqi < 6.5)
												return 29.9252;
											else
											{
												if(rsrq < -7.5)
												{
													if(rsrp < -89.5)
														return 14.8392;
													else
														return 13.17;
												}
												else
													return 25.9981;
											}
										}
									}
									else
									{
										if(payload < 6.5)
										{
											if(velocity < 32.645)
											{
												if(rsrp < -86.5)
												{
													if(cqi < 10.5)
														return 28.169;
													else
													{
														if(velocity < 18.495)
														{
															if(sinr < 14.5)
																return 13.6054;
															else
																return 9.82198;
														}
														else
														{
															if(payload < 4.5)
																return 15.4941;
															else
																return 29.7619;
														}
													}
												}
												else
												{
													if(cqi < 11.5)
														return 33.0579;
													else
													{
														if(rsrp < -83.5)
															return 26.7738;
														else
															return 18.5471;
													}
												}
											}
											else
												return 34.2246;
										}
										else
										{
											if(velocity < 22.425)
												return 26.855;
											else
												return 29.9786;
										}
									}
								}
								else
									return 2.29932;
							}
						}
						else
							return 51.1727;
					}
				}
				else
				{
					if(ta < 17.5)
					{
						if(sinr < 24.5)
							return 55.9441;
						else
						{
							if(rsrp < -71)
							{
								if(velocity < 25.84)
								{
									if(velocity < 15.915)
										return 40.404;
									else
									{
										if(sinr < 28)
											return 29.6053;
										else
											return 28.0169;
									}
								}
								else
									return 37.9147;
							}
							else
							{
								if(payload < 6)
									return 35.8343;
								else
									return 41.8848;
							}
						}
					}
					else
					{
						if(payload < 6.5)
							return 66.482;
						else
						{
							if(sinr < 23.5)
								return 36.1757;
							else
								return 48.6241;
						}
					}
				}
			}
		}
	}
}

float vodafone_dl_tree_2(float payload, float rsrp, float rsrq, float sinr, float cqi, float ta, float velocity, float cell, float f)
{
	if(rsrq < -9.5)
	{
		if(cell < 13211393)
		{
			if(cell < 13128322)
			{
				if(ta < 9.5)
				{
					if(cqi < 10.5)
					{
						if(velocity < 14.665)
						{
							if(rsrp < -101)
								return 39.3314;
							else
							{
								if(cqi < 7)
									return 25.9235;
								else
									return 32.3778;
							}
						}
						else
							return 50.0002;
					}
					else
						return 54.3689;
				}
				else
				{
					if(ta < 34.5)
					{
						if(cell < 13044996.5)
						{
							if(payload < 5.5)
							{
								if(sinr < 10.5)
								{
									if(cqi < 3.5)
										return 4.32434;
									else
									{
										if(sinr < -2.5)
										{
											if(rsrq < -10.5)
											{
												if(cqi < 5.5)
													return 14.2858;
												else
												{
													if(sinr < -5.5)
													{
														if(rsrp < -105.5)
															return 5.93619;
														else
															return 3.24149;
													}
													else
														return 1.02276;
												}
											}
											else
											{
												if(rsrp < -110.5)
													return 10.582;
												else
													return 14.0351;
											}
										}
										else
										{
											if(velocity < 2.475)
											{
												if(sinr < 0)
												{
													if(rsrq < -12.5)
														return 17.316;
													else
														return 11.1927;
												}
												else
												{
													if(sinr < 2)
														return 19.6754;
													else
													{
														if(rsrq < -11.5)
															return 24.7219;
														else
															return 11.4811;
													}
												}
											}
											else
											{
												if(rsrq < -13.5)
													return 2.21852;
												else
												{
													if(rsrp < -107)
													{
														if(velocity < 10.095)
														{
															if(velocity < 3.35)
																return 7.93651;
															else
															{
																if(payload < 4.5)
																{
																	if(sinr < 2)
																	{
																		if(cqi < 9.5)
																			return 10.7406333333;
																		else
																			return 3.57782;
																	}
																	else
																	{
																		if(sinr < 6.5)
																			return 14.4982333333;
																		else
																			return 12.4805;
																	}
																}
																else
																	return 23.5294;
															}
														}
														else
														{
															if(rsrq < -12.5)
																return 15.3965;
															else
															{
																if(cqi < 5.5)
																	return 3.97022;
																else
																{
																	if(rsrp < -109.5)
																	{
																		if(rsrp < -111.5)
																		{
																			if(cqi < 7.5)
																				return 7.949565;
																			else
																				return 10.4439;
																		}
																		else
																		{
																			if(rsrp < -110.5)
																				return 10.5264;
																			else
																				return 11.864775;
																		}
																	}
																	else
																		return 8.08285;
																}
															}
														}
													}
													else
													{
														if(velocity < 15.695)
														{
															if(cqi < 5.5)
																return 30.4472;
															else
															{
																if(sinr < 1.5)
																	return 22.8918;
																else
																{
																	if(payload < 3.5)
																	{
																		if(rsrp < -99.5)
																			return 18.9315;
																		else
																			return 17.2414;
																	}
																	else
																		return 22.409;
																}
															}
														}
														else
														{
															if(rsrq < -10.5)
																return 3.55557;
															else
															{
																if(payload < 0.75)
																	return 11.2676;
																else
																	return 13.27885;
															}
														}
													}
												}
											}
										}
									}
								}
								else
								{
									if(rsrp < -90.5)
									{
										if(ta < 15.5)
										{
											if(rsrq < -11)
												return 22.7273;
											else
											{
												if(payload < 2.25)
													return 32.2581;
												else
													return 35.1262;
											}
										}
										else
											return 13.8468;
									}
									else
										return 10.8109;
								}
							}
							else
							{
								if(cell < 12938245)
								{
									if(rsrp < -106.5)
									{
										if(ta < 18)
										{
											if(sinr < 6.5)
											{
												if(velocity < 12.715)
												{
													if(velocity < 10)
													{
														if(rsrq < -13.5)
															return 8.34928;
														else
														{
															if(payload < 6.5)
																return 12.0724;
															else
															{
																if(rsrp < -108.5)
																{
																	if(cqi < 9)
																	{
																		if(payload < 8)
																			return 23.4604;
																		else
																			return 20.9958;
																	}
																	else
																		return 18.86255;
																}
																else
																{
																	if(payload < 9)
																		return 14.3369;
																	else
																		return 17.4303333333;
																}
															}
														}
													}
													else
													{
														if(sinr < 3.5)
														{
															if(cqi < 7.5)
															{
																if(ta < 15.5)
																	return 13.1723;
																else
																	return 10.3426;
															}
															else
															{
																if(payload < 9.5)
																	return 15.0031;
																else
																	return 17.2154;
															}
														}
														else
														{
															if(cqi < 8)
																return 6.5538;
															else
																return 5.29334;
														}
													}
												}
												else
												{
													if(cqi < 9.5)
													{
														if(rsrp < -109.5)
														{
															if(rsrp < -112)
																return 19.4512;
															else
																return 24.25115;
														}
														else
															return 15.8346;
													}
													else
													{
														if(rsrp < -108.5)
															return 19.3705;
														else
															return 16.2885;
													}
												}
											}
											else
											{
												if(cqi < 10)
													return 36.8179;
												else
													return 22.5925;
											}
										}
										else
											return 29.138;
									}
									else
									{
										if(sinr < 3)
											return 25.2632;
										else
										{
											if(velocity < 11.82)
											{
												if(rsrp < -98.5)
													return 27.9163;
												else
													return 26.4354;
											}
											else
											{
												if(cqi < 9)
													return 29.9465;
												else
													return 43.2173;
											}
										}
									}
								}
								else
								{
									if(sinr < 5)
									{
										if(velocity < 23.915)
										{
											if(sinr < -2.5)
											{
												if(cqi < 10.5)
													return 32.8037;
												else
													return 26.7048;
											}
											else
											{
												if(cqi < 7)
													return 24.6791;
												else
													return 21.9608;
											}
										}
										else
											return 12.8077;
									}
									else
										return 32.2029;
								}
							}
						}
						else
							return 37.9147;
					}
					else
					{
						if(cqi < 13.5)
						{
							if(payload < 1.5)
							{
								if(rsrp < -120)
									return 3.868555;
								else
								{
									if(cqi < 9)
										return 2.0044225;
									else
										return 0.7413846667;
								}
							}
							else
							{
								if(velocity < 3.66)
									return 1.4486524;
								else
								{
									if(rsrq < -18.5)
										return 17.6796;
									else
									{
										if(ta < 66.5)
										{
											if(sinr < -8.5)
												return 2.15308;
											else
											{
												if(payload < 8)
												{
													if(rsrp < -111)
														return 8.42359;
													else
														return 6.75961;
												}
												else
												{
													if(cell < 13067273.5)
														return 3.58494;
													else
														return 5.26393;
												}
											}
										}
										else
										{
											if(cell < 13067273.5)
												return 2.40574;
											else
											{
												if(rsrp < -112)
													return 1.92129;
												else
												{
													if(sinr < 0.5)
													{
														if(sinr < -1.5)
														{
															if(velocity < 11.615)
																return 8.15661;
															else
																return 11.0317857143;
														}
														else
															return 5.9828;
													}
													else
													{
														if(f < 1362.55)
															return 26.0799;
														else
														{
															if(rsrq < -11)
															{
																if(payload < 9)
																	return 12.6858;
																else
																	return 10.8934;
															}
															else
															{
																if(payload < 2.5)
																	return 11.8343;
																else
																	return 14.4231;
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
						else
							return 34.097;
					}
				}
			}
			else
			{
				if(cell < 13175298.5)
				{
					if(payload < 5.5)
						return 22.4995;
					else
					{
						if(velocity < 10.155)
						{
							if(sinr < -1)
								return 23.5294;
							else
								return 21.3671;
						}
						else
						{
							if(ta < 7.5)
								return 26.5869;
							else
							{
								if(cqi < 9.5)
									return 30.5732;
								else
									return 32.0687;
							}
						}
					}
				}
				else
				{
					if(rsrp < -89)
					{
						if(sinr < 1.5)
						{
							if(cell < 13175557)
							{
								if(rsrq < -10.5)
								{
									if(cqi < 9)
									{
										if(rsrp < -95.5)
											return 32.26055;
										else
											return 40.6091;
									}
									else
										return 30.8483;
								}
								else
									return 31.5375;
							}
							else
								return 25;
						}
						else
						{
							if(payload < 2)
								return 26.6667;
							else
							{
								if(sinr < 4.5)
								{
									if(sinr < 3.5)
										return 41.25142;
									else
										return 35.7942;
								}
								else
									return 53.1814;
							}
						}
					}
					else
						return 51.7613;
				}
			}
		}
		else
		{
			if(ta < 10.5)
			{
				if(rsrq < -12.5)
				{
					if(rsrp < -102.5)
					{
						if(rsrp < -109.5)
						{
							if(cqi < 6.5)
							{
								if(rsrp < -110.5)
								{
									if(rsrq < -13.5)
									{
										if(rsrq < -14.5)
										{
											if(sinr < -3.5)
												return 0.755831;
											else
												return 2.2575;
										}
										else
											return 2.714203;
									}
									else
										return 0.876734;
								}
								else
									return 0.20197;
							}
							else
							{
								if(ta < 8)
									return 5.62522;
								else
									return 11.9048;
							}
						}
						else
						{
							if(rsrp < -105.5)
							{
								if(sinr < 3.5)
								{
									if(velocity < 13.625)
										return 15.25385;
									else
										return 12.6577666667;
								}
								else
									return 4.8342;
							}
							else
							{
								if(sinr < -0.5)
									return 6.70354;
								else
								{
									if(rsrq < -14.5)
										return 3.17839;
									else
										return 0.4858856667;
								}
							}
						}
					}
					else
					{
						if(ta < 5.5)
						{
							if(rsrq < -13.5)
							{
								if(velocity < 10.77)
									return 18.0932;
								else
									return 4.58243;
							}
							else
							{
								if(sinr < -1)
									return 35.5556;
								else
								{
									if(rsrp < -93.5)
									{
										if(cqi < 9.5)
											return 20.2276;
										else
											return 22.6812;
									}
									else
										return 32.0213;
								}
							}
						}
						else
						{
							if(cqi < 6.5)
							{
								if(cell < 13612034)
								{
									if(payload < 4.75)
										return 19.5122;
									else
										return 28.7081;
								}
								else
								{
									if(velocity < 7.16)
									{
										if(payload < 3.75)
											return 8.28157;
										else
											return 11.0913;
									}
									else
									{
										if(rsrq < -13.5)
											return 13.6054;
										else
											return 15.0943;
									}
								}
							}
							else
							{
								if(cell < 13400069.5)
									return 30.1887;
								else
								{
									if(ta < 6.5)
										return 12.4611;
									else
									{
										if(payload < 0.3)
											return 9.52385;
										else
										{
											if(ta < 7.5)
												return 1.50094;
											else
												return 6.20636;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if(velocity < 7.89)
					{
						if(cell < 13400065.5)
						{
							if(rsrp < -84.5)
							{
								if(f < 1362.55)
									return 51.2492;
								else
								{
									if(payload < 3.5)
										return 34.2857;
									else
									{
										if(cqi < 10)
											return 22.4561;
										else
											return 24.3161;
									}
								}
							}
							else
								return 54.090675;
						}
						else
						{
							if(velocity < 3.945)
							{
								if(sinr < 1.5)
								{
									if(rsrp < -94.5)
									{
										if(cell < 13532162)
											return 12.8617;
										else
											return 9.63859;
									}
									else
									{
										if(payload < 5)
										{
											if(payload < 0.3)
												return 25.8066;
											else
											{
												if(rsrp < -92.5)
													return 19.4293;
												else
													return 21.8579;
											}
										}
										else
											return 11.3933;
									}
								}
								else
								{
									if(cell < 13532162)
									{
										if(rsrp < -95)
										{
											if(payload < 4)
												return 29.1262;
											else
											{
												if(payload < 5.5)
													return 22.6501;
												else
												{
													if(rsrp < -101.5)
														return 27.4914;
													else
													{
														if(rsrp < -100.5)
															return 23.2751;
														else
															return 21.0804;
													}
												}
											}
										}
										else
										{
											if(payload < 5.5)
											{
												if(rsrp < -77)
												{
													if(rsrp < -85.5)
														return 17.32705;
													else
														return 19.1847;
												}
												else
													return 10.2564;
											}
											else
											{
												if(sinr < 8.5)
													return 14.9743;
												else
													return 31.8725;
											}
										}
									}
									else
									{
										if(cqi < 7)
										{
											if(payload < 1.75)
												return 24.5399;
											else
												return 19.3548;
										}
										else
										{
											if(sinr < 7.5)
											{
												if(ta < 7.5)
													return 14.6482;
												else
												{
													if(sinr < 3)
														return 37.3614;
													else
													{
														if(payload < 4.5)
															return 29.5203;
														else
															return 23.4801;
													}
												}
											}
											else
												return 34.53225;
										}
									}
								}
							}
							else
							{
								if(cqi < 8.5)
								{
									if(payload < 9)
									{
										if(sinr < -2)
											return 35.7942;
										else
										{
											if(velocity < 5.7)
											{
												if(ta < 7)
													return 25.74;
												else
													return 28.0702;
											}
											else
												return 22.4686333333;
										}
									}
									else
									{
										if(rsrp < -86.5)
											return 47.8755;
										else
											return 43.4311;
									}
								}
								else
									return 8.08084;
							}
						}
					}
					else
					{
						if(cqi < 3.5)
							return 56.7376;
						else
						{
							if(ta < 9.5)
							{
								if(cell < 13406213)
								{
									if(payload < 0.75)
									{
										if(ta < 6.5)
											return 6.72271;
										else
											return 0.938747;
									}
									else
									{
										if(rsrp < -101.5)
										{
											if(payload < 3)
												return 25.8065;
											else
											{
												if(payload < 6)
													return 11.2062666667;
												else
													return 7.41427;
											}
										}
										else
										{
											if(rsrp < -88)
											{
												if(payload < 3.5)
												{
													if(sinr < 4.5)
														return 20.6186;
													else
													{
														if(rsrq < -10.5)
															return 24.6407;
														else
															return 21.0526;
													}
												}
												else
												{
													if(rsrp < -98.5)
														return 45.1977;
													else
													{
														if(velocity < 14.025)
														{
															if(sinr < 6.5)
															{
																if(rsrp < -94)
																{
																	if(payload < 5.5)
																		return 25.3365;
																	else
																		return 26.6921;
																}
																else
																	return 31.3725;
															}
															else
																return 43.214;
														}
														else
														{
															if(ta < 8)
															{
																if(sinr < -0.5)
																	return 18.8679;
																else
																	return 15.9808;
															}
															else
															{
																if(rsrp < -92.5)
																	return 26.4682;
																else
																	return 23.7301;
															}
														}
													}
												}
											}
											else
											{
												if(cqi < 11.5)
												{
													if(rsrp < -82)
													{
														if(payload < 5.5)
															return 38.0048;
														else
															return 36.1809;
													}
													else
														return 40.7539;
												}
												else
													return 30.303;
											}
										}
									}
								}
								else
								{
									if(ta < 8.5)
									{
										if(sinr < 11.5)
										{
											if(ta < 7.5)
											{
												if(velocity < 14.78)
												{
													if(velocity < 9.705)
													{
														if(rsrq < -10.5)
															return 21.2364571429;
														else
															return 17.2674;
													}
													else
													{
														if(cell < 13830151.5)
														{
															if(rsrq < -10.5)
															{
																if(ta < 5.5)
																{
																	if(cqi < 7)
																		return 10.8109;
																	else
																	{
																		if(rsrp < -82)
																		{
																			if(payload < 7.5)
																				return 16.50555;
																			else
																				return 18.2492;
																		}
																		else
																			return 14.0633;
																	}
																}
																else
																{
																	if(sinr < 1.5)
																		return 4.9505;
																	else
																	{
																		if(rsrq < -11.5)
																			return 9.58798;
																		else
																			return 12.2699;
																	}
																}
															}
															else
															{
																if(cell < 13618181)
																{
																	if(payload < 2.25)
																		return 15.625;
																	else
																		return 13.7991;
																}
																else
																	return 18.014225;
															}
														}
														else
														{
															if(cqi < 7)
																return 15.5994;
															else
																return 25.4237;
														}
													}
												}
												else
												{
													if(rsrq < -11.5)
													{
														if(sinr < 10.5)
															return 15.6556;
														else
															return 21.0843;
													}
													else
													{
														if(velocity < 15.07)
															return 29.6296;
														else
														{
															if(rsrp < -95)
																return 23.9234;
															else
																return 26.4026;
														}
													}
												}
											}
											else
											{
												if(rsrp < -101.5)
													return 2.14133;
												else
													return 10.37135;
											}
										}
										else
										{
											if(rsrq < -11.5)
											{
												if(rsrp < -86)
												{
													if(velocity < 14.265)
														return 15.1147;
													else
														return 13.2231;
												}
												else
													return 22.3464;
											}
											else
											{
												if(rsrq < -10.5)
													return 6.94444;
												else
													return 3.13529;
											}
										}
									}
									else
									{
										if(velocity < 14.63)
										{
											if(payload < 3.5)
											{
												if(payload < 2)
													return 4.21053;
												else
													return 13.1291;
											}
											else
											{
												if(cqi < 6)
													return 20.0501;
												else
													return 28.1889;
											}
										}
										else
											return 48.048;
									}
								}
							}
							else
							{
								if(payload < 3.75)
									return 39.2157;
								else
									return 32.8446;
							}
						}
					}
				}
			}
			else
			{
				if(cqi < 6.5)
				{
					if(payload < 4.5)
					{
						if(rsrq < -12.5)
						{
							if(rsrq < -21)
							{
								if(velocity < 27.285)
									return 8.35073;
								else
									return 9.75907;
							}
							else
							{
								if(cell < 13532291)
								{
									if(ta < 32.5)
									{
										if(velocity < 13.945)
										{
											if(payload < 0.3)
												return 0.2421553636;
											else
											{
												if(rsrp < -102)
												{
													if(rsrq < -15.5)
													{
														if(sinr < -1.5)
															return 0.262962;
														else
															return 2.38735;
													}
													else
														return 1.3069531176;
												}
												else
													return 0.424413;
											}
										}
										else
										{
											if(rsrq < -16.5)
											{
												if(cqi < 1.5)
												{
													if(rsrq < -17.5)
														return 3.222162;
													else
														return 0.517222;
												}
												else
													return 0.4122506111;
											}
											else
											{
												if(cell < 13416323)
												{
													if(velocity < 23.74)
													{
														if(velocity < 18.19)
														{
															if(rsrp < -107.5)
																return 1.2193597143;
															else
															{
																if(cell < 13250945)
																	return 0.297674;
																else
																{
																	if(rsrp < -101.5)
																		return 4.01314;
																	else
																		return 1.80845;
																}
															}
														}
														else
														{
															if(velocity < 21.96)
																return 7.0676;
															else
																return 2.11083;
														}
													}
													else
													{
														if(cqi < 5.5)
															return 0.6506433846;
														else
														{
															if(payload < 0.3)
																return 0.650938;
															else
															{
																if(velocity < 33.625)
																	return 1.13489575;
																else
																	return 2.2840166667;
															}
														}
													}
												}
												else
												{
													if(rsrq < -15.5)
													{
														if(velocity < 15.55)
														{
															if(rsrp < -101)
															{
																if(payload < 2)
																	return 3.58905;
																else
																	return 1.16908;
															}
															else
																return 11.2518;
														}
														else
														{
															if(ta < 24.5)
																return 0.828415;
															else
																return 2.09589;
														}
													}
													else
													{
														if(rsrp < -98.5)
														{
															if(ta < 17)
																return 5.92595;
															else
																return 1.4163055;
														}
														else
															return 5.56328;
													}
												}
											}
										}
									}
									else
										return 9.02425;
								}
								else
								{
									if(sinr < -2.5)
									{
										if(rsrp < -110.5)
											return 8.81057;
										else
											return 3.40208;
									}
									else
										return 10.7095;
								}
							}
						}
						else
						{
							if(f < 1362.55)
							{
								if(velocity < 14.205)
								{
									if(cell < 13324674)
									{
										if(cqi < 4.5)
											return 0.884956;
										else
										{
											if(rsrq < -11.5)
											{
												if(ta < 18)
													return 9.83204;
												else
													return 5.83516;
											}
											else
												return 6.31247;
										}
									}
									else
										return 1.1776946667;
								}
								else
								{
									if(payload < 0.75)
										return 0.8478088333;
									else
									{
										if(rsrp < -97)
											return 3.367;
										else
											return 0.967235;
									}
								}
							}
							else
							{
								if(rsrp < -105)
								{
									if(cqi < 5.5)
									{
										if(sinr < -3.5)
											return 10.568;
										else
										{
											if(rsrp < -112.5)
												return 11.0294;
											else
											{
												if(rsrp < -108.5)
												{
													if(payload < 0.55)
														return 5.47947;
													else
														return 4.03633;
												}
												else
													return 8.1633;
											}
										}
									}
									else
									{
										if(velocity < 4.985)
											return 11.3422;
										else
										{
											if(rsrq < -11.5)
												return 0.7085306667;
											else
												return 2.82511;
										}
									}
								}
								else
									return 18.4332;
							}
						}
					}
					else
					{
						if(cell < 13394179)
						{
							if(cell < 13393922.5)
							{
								if(cell < 13323908.5)
								{
									if(payload < 6.5)
									{
										if(rsrq < -13)
											return 2.08442;
										else
											return 3.603835;
									}
									else
									{
										if(ta < 12.5)
											return 15.2091;
										else
										{
											if(sinr < 2.5)
											{
												if(payload < 8.5)
												{
													if(payload < 7.5)
													{
														if(ta < 24.5)
															return 12.954;
														else
															return 6.01827;
													}
													else
														return 21.7244;
												}
												else
												{
													if(cell < 13250945)
														return 5.68909;
													else
														return 2.88623;
												}
											}
											else
												return 1.65741;
										}
									}
								}
								else
								{
									if(velocity < 0.81)
									{
										if(rsrp < -110)
										{
											if(payload < 7)
												return 13.5191;
											else
											{
												if(rsrq < -11)
													return 21.4158;
												else
													return 14.1315;
											}
										}
										else
											return 25.6904;
									}
									else
									{
										if(velocity < 10.28)
										{
											if(payload < 7.5)
											{
												if(sinr < -3)
												{
													if(cqi < 5.5)
														return 7.60766;
													else
														return 18.5701;
												}
												else
													return 7.37735;
											}
											else
												return 3.70071;
										}
										else
										{
											if(rsrp < -120)
												return 2.21262;
											else
												return 4.08789;
										}
									}
								}
							}
							else
							{
								if(rsrp < -98)
									return 24.2571;
								else
									return 32.76;
							}
						}
						else
						{
							if(velocity < 37.27)
							{
								if(rsrp < -103.5)
								{
									if(sinr < -4.5)
									{
										if(rsrq < -13.5)
										{
											if(rsrp < -108)
												return 2.1372177778;
											else
												return 0.703854;
										}
										else
											return 0.8037105;
									}
									else
									{
										if(rsrq < -15.5)
											return 5.9296925;
										else
										{
											if(velocity < 22.68)
											{
												if(cell < 13404802.5)
												{
													if(velocity < 16.695)
													{
														if(ta < 13.5)
															return 3.8723866667;
														else
														{
															if(rsrp < -106.5)
																return 1.7489;
															else
																return 3.502204;
														}
													}
													else
														return 2.14196;
												}
												else
													return 1.4987675882;
											}
											else
											{
												if(velocity < 23.08)
													return 11.6861;
												else
												{
													if(sinr < 0.5)
														return 3.42173;
													else
														return 0.9386903333;
												}
											}
										}
									}
								}
								else
								{
									if(cell < 13527810.5)
									{
										if(ta < 20.5)
										{
											if(rsrq < -12)
											{
												if(cqi < 5.5)
													return 1.2792565;
												else
												{
													if(rsrp < -98.5)
														return 5.80889;
													else
														return 3.03855;
												}
											}
											else
											{
												if(rsrp < -101)
													return 7.34113;
												else
													return 2.00129;
											}
										}
										else
										{
											if(sinr < 5)
											{
												if(payload < 8)
													return 5.4347225;
												else
													return 3.76353;
											}
											else
												return 8.26636;
										}
									}
									else
										return 12.987;
								}
							}
							else
							{
								if(cqi < 5.5)
								{
									if(rsrp < -96)
										return 19.0153;
									else
										return 29.0065;
								}
								else
									return 0.899775;
							}
						}
					}
				}
				else
				{
					if(ta < 32.5)
					{
						if(f < 2247.55)
						{
							if(velocity < 33.555)
							{
								if(rsrp < -99.5)
								{
									if(cell < 13394179)
									{
										if(cell < 13393414.5)
										{
											if(sinr < -0.5)
											{
												if(sinr < -4.5)
												{
													if(sinr < -9.5)
													{
														if(cqi < 9.5)
															return 3.27694;
														else
															return 1.18046;
													}
													else
													{
														if(rsrp < -110.5)
															return 11.1982;
														else
														{
															if(velocity < 7.69)
																return 7.76702;
															else
																return 9.28074;
														}
													}
												}
												else
												{
													if(velocity < 14.54)
													{
														if(rsrq < -11.5)
														{
															if(rsrq < -13)
																return 2.57459;
															else
																return 0.268887;
														}
														else
														{
															if(f < 1362.55)
																return 4.18566;
															else
																return 6.091485;
														}
													}
													else
														return 0.61397;
												}
											}
											else
											{
												if(cell < 13250945)
												{
													if(ta < 23.5)
													{
														if(payload < 3)
															return 0.7449075;
														else
														{
															if(velocity < 4.62)
																return 2.99225;
															else
																return 1.7539466667;
														}
													}
													else
														return 4.76758;
												}
												else
												{
													if(cqi < 7.5)
													{
														if(ta < 14)
														{
															if(payload < 4.25)
																return 5.08906;
															else
																return 8.71341;
														}
														else
														{
															if(rsrp < -111.5)
																return 4;
															else
																return 5.75542;
														}
													}
													else
													{
														if(rsrq < -11.5)
														{
															if(velocity < 6.66)
															{
																if(rsrq < -12.5)
																	return 13.8614;
																else
																	return 5.77895;
															}
															else
															{
																if(sinr < 3)
																	return 5.37634;
																else
																	return 3.20513;
															}
														}
														else
														{
															if(rsrp < -112.5)
															{
																if(cqi < 8.5)
																	return 20.8673;
																else
																	return 15.088;
															}
															else
															{
																if(ta < 16.5)
																	return 9.77995;
																else
																{
																	if(sinr < 1.5)
																		return 17.6018;
																	else
																		return 15.2881;
																}
															}
														}
													}
												}
											}
										}
										else
											return 23.9252;
									}
									else
									{
										if(sinr < 0.5)
										{
											if(cell < 13470467)
											{
												if(sinr < -3.5)
												{
													if(ta < 18)
														return 0.6188593333;
													else
														return 3.11557;
												}
												else
												{
													if(payload < 4.5)
													{
														if(cell < 13405827)
															return 1.8057766667;
														else
															return 3.97812;
													}
													else
													{
														if(payload < 5.5)
														{
															if(rsrq < -14.5)
																return 8.8164;
															else
																return 6.76247;
														}
														else
														{
															if(rsrp < -109.5)
																return 1.76086;
															else
																return 4.6663733333;
														}
													}
												}
											}
											else
											{
												if(payload < 5.5)
												{
													if(sinr < -1)
														return 7.84317;
													else
														return 18.7647;
												}
												else
													return 8.181;
											}
										}
										else
										{
											if(payload < 0.75)
												return 0.4766219;
											else
											{
												if(cqi < 8.5)
													return 2.4977479412;
												else
												{
													if(velocity < 19.94)
													{
														if(velocity < 14.94)
														{
															if(rsrp < -100.5)
																return 7.62268;
															else
																return 5.64352;
														}
														else
															return 2.840845;
													}
													else
														return 8.83978;
												}
											}
										}
									}
								}
								else
								{
									if(velocity < 19.25)
									{
										if(ta < 12.5)
										{
											if(velocity < 14.825)
											{
												if(cqi < 9.5)
													return 24.56755;
												else
													return 20.43825;
											}
											else
											{
												if(sinr < 8)
													return 8.421645;
												else
													return 14.1677;
											}
										}
										else
										{
											if(sinr < 6.5)
											{
												if(rsrq < -11.5)
												{
													if(cqi < 9.5)
													{
														if(velocity < 14.48)
														{
															if(ta < 16.5)
																return 2.08032;
															else
																return 0.6308936667;
														}
														else
															return 4.3227775;
													}
													else
													{
														if(velocity < 15.18)
														{
															if(ta < 18.5)
															{
																if(sinr < 3)
																	return 7.25624;
																else
																	return 5.97461;
															}
															else
															{
																if(velocity < 14.695)
																	return 1.16619;
																else
																	return 2.95298;
															}
														}
														else
															return 8.905974;
													}
												}
												else
												{
													if(payload < 0.55)
														return 7.33948;
													else
													{
														if(ta < 16.5)
															return 16.9851;
														else
															return 12.987;
													}
												}
											}
											else
											{
												if(f < 1362.55)
												{
													if(velocity < 18.11)
													{
														if(rsrp < -96.5)
															return 19.7477;
														else
														{
															if(payload < 7)
															{
																if(rsrp < -93.5)
																	return 6.72271;
																else
																	return 8.90472;
															}
															else
															{
																if(velocity < 16.025)
																	return 7.90826;
																else
																	return 14.7965;
															}
														}
													}
													else
														return 20.5233;
												}
												else
													return 22.1743;
											}
										}
									}
									else
									{
										if(cell < 13405442)
										{
											if(velocity < 27.42)
											{
												if(velocity < 20.39)
													return 25.5918;
												else
													return 22.6886;
											}
											else
												return 28.3688;
										}
										else
											return 2.70718;
									}
								}
							}
							else
							{
								if(ta < 27)
								{
									if(ta < 18.5)
									{
										if(cell < 13469443)
											return 1.6541626667;
										else
											return 4.16233;
									}
									else
										return 0.5006551667;
								}
								else
								{
									if(payload < 1.75)
										return 5.16796;
									else
										return 7.52115;
								}
							}
						}
						else
						{
							if(ta < 16.5)
								return 33.7981;
							else
								return 20.3735;
						}
					}
					else
					{
						if(velocity < 32.05)
						{
							if(rsrp < -100)
								return 0.658355;
							else
								return 5.76618;
						}
						else
						{
							if(payload < 1.5)
							{
								if(rsrp < -95.5)
									return 9.59233;
								else
									return 13.4003;
							}
							else
							{
								if(sinr < -0.5)
								{
									if(sinr < -5)
										return 28.5459;
									else
									{
										if(velocity < 33.135)
											return 20.4082;
										else
											return 23.988;
									}
								}
								else
									return 15.6032;
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if(rsrq < -7.5)
		{
			if(sinr < 8.5)
			{
				if(payload < 1.5)
				{
					if(sinr < 1.5)
					{
						if(cqi < 7)
						{
							if(rsrp < -105.5)
							{
								if(cqi < 5.5)
									return 4.25534;
								else
									return 0.912678;
							}
							else
								return 8.26195;
						}
						else
						{
							if(rsrp < -109)
							{
								if(sinr < -1.5)
									return 5.49426;
								else
									return 0.053287;
							}
							else
							{
								if(sinr < 0)
								{
									if(payload < 0.75)
									{
										if(payload < 0.3)
											return 20.5129;
										else
											return 14.2538;
									}
									else
									{
										if(rsrq < -8.5)
											return 8.29876;
										else
											return 11.8519;
									}
								}
								else
								{
									if(cqi < 10)
										return 25.974;
									else
										return 20.6718;
								}
							}
						}
					}
					else
					{
						if(rsrp < -110.5)
						{
							if(cell < 13230089.5)
								return 0.8477605;
							else
							{
								if(payload < 0.75)
								{
									if(rsrp < -113.5)
										return 2.72294;
									else
										return 0.698693;
								}
								else
								{
									if(rsrq < -8.5)
										return 18.7354;
									else
										return 2.72944;
								}
							}
						}
						else
						{
							if(cell < 13474691)
							{
								if(cell < 13211141.5)
								{
									if(velocity < 14.41)
									{
										if(sinr < 7.5)
										{
											if(cell < 13175301.5)
											{
												if(cqi < 6.5)
												{
													if(sinr < 4.5)
													{
														if(rsrq < -8.5)
															return 18.9573;
														else
															return 15.2091;
													}
													else
														return 12.5;
												}
												else
												{
													if(sinr < 6.5)
													{
														if(ta < 12.5)
															return 17.094;
														else
														{
															if(cqi < 11)
																return 23.81035;
															else
																return 21.0526;
														}
													}
													else
													{
														if(ta < 16.5)
														{
															if(rsrq < -8.5)
																return 15.1803;
															else
																return 16.98705;
														}
														else
															return 18.7793;
													}
												}
											}
											else
											{
												if(ta < 5)
													return 22.8572;
												else
													return 27.5862;
											}
										}
										else
										{
											if(velocity < 6.25)
												return 12.5;
											else
												return 4.65118;
										}
									}
									else
									{
										if(cell < 12990982)
											return 2.11416;
										else
											return 9.19544;
									}
								}
								else
								{
									if(ta < 10.5)
										return 26.2295;
									else
									{
										if(velocity < 16.06)
										{
											if(cell < 13250945)
												return 9.01917;
											else
											{
												if(ta < 22.5)
												{
													if(ta < 14)
														return 4.7059;
													else
													{
														if(velocity < 12.66)
														{
															if(ta < 18.5)
																return 2.13334;
															else
																return 5.06331;
														}
														else
															return 8.08084;
													}
												}
												else
													return 4.25534;
											}
										}
										else
										{
											if(cqi < 8.5)
												return 7.69231;
											else
												return 10.3359;
										}
									}
								}
							}
							else
							{
								if(rsrq < -8.5)
								{
									if(cqi < 8.5)
										return 160.001;
									else
									{
										if(cqi < 10.5)
											return 31.4961;
										else
											return 5.16129;
									}
								}
								else
								{
									if(cell < 13532419)
									{
										if(velocity < 14.175)
										{
											if(rsrp < -95.5)
												return 21.978;
											else
												return 18.7793;
										}
										else
											return 24.7678;
									}
									else
										return 1.58353;
								}
							}
						}
					}
				}
				else
				{
					if(rsrp < -95.5)
					{
						if(payload < 9.5)
						{
							if(ta < 18)
							{
								if(payload < 8.5)
								{
									if(sinr < -1.5)
									{
										if(rsrp < -97)
											return 7.18348;
										else
											return 9.03614;
									}
									else
									{
										if(sinr < 3.5)
										{
											if(rsrp < -110.5)
											{
												if(cell < 13392905.5)
													return 11.583;
												else
													return 16.8776;
											}
											else
											{
												if(cell < 13462534.5)
												{
													if(ta < 8.5)
														return 48.2291;
													else
													{
														if(ta < 15)
														{
															if(payload < 3.5)
																return 18.1406;
															else
																return 20.4082;
														}
														else
														{
															if(rsrq < -8.5)
																return 31.8725;
															else
															{
																if(payload < 5.5)
																	return 25.2167;
																else
																	return 28.2686;
															}
														}
													}
												}
												else
												{
													if(cell < 13532425)
														return 12.1951;
													else
														return 17.4359;
												}
											}
										}
										else
										{
											if(ta < 14.5)
											{
												if(cqi < 6.5)
												{
													if(f < 1362.55)
													{
														if(sinr < 5.5)
														{
															if(payload < 6)
																return 26.6889;
															else
																return 19.5122;
														}
														else
															return 47.105;
													}
													else
													{
														if(sinr < 4.5)
															return 24.2966666667;
														else
															return 14.6466;
													}
												}
												else
												{
													if(rsrq < -8.5)
													{
														if(cqi < 9.5)
														{
															if(payload < 3.5)
															{
																if(sinr < 4.5)
																{
																	if(rsrp < -97.5)
																		return 7.46037;
																	else
																		return 22.2428;
																}
																else
																	return 25.2632;
															}
															else
															{
																if(velocity < 9.5)
																{
																	if(cell < 13253122)
																		return 20.9333;
																	else
																		return 24.1327;
																}
																else
																{
																	if(payload < 4.5)
																		return 46.3097;
																	else
																	{
																		if(ta < 9)
																			return 21.751;
																		else
																		{
																			if(ta < 13.5)
																				return 27.75885;
																			else
																			{
																				if(rsrp < -109.5)
																					return 25.9846;
																				else
																					return 24.2057;
																			}
																		}
																	}
																}
															}
														}
														else
														{
															if(ta < 11)
																return 15.6326;
															else
																return 22.1607;
														}
													}
													else
													{
														if(cell < 13473666.5)
														{
															if(rsrp < -109.5)
																return 20.5656;
															else
															{
																if(cqi < 9.5)
																{
																	if(cell < 13323909.5)
																		return 7.02371;
																	else
																	{
																		if(payload < 6.5)
																			return 22.7273;
																		else
																			return 16.7891;
																	}
																}
																else
																	return 8.98876;
															}
														}
														else
															return 33.3333;
													}
												}
											}
											else
											{
												if(ta < 16.5)
												{
													if(f < 2247.55)
													{
														if(cqi < 8.5)
														{
															if(rsrp < -103.5)
																return 27.2851;
															else
																return 11.6448;
														}
														else
														{
															if(cqi < 13)
															{
																if(rsrq < -8.5)
																{
																	if(cqi < 10)
																		return 6.41026;
																	else
																		return 12.9581;
																}
																else
																{
																	if(cell < 13392905.5)
																		return 11.6988;
																	else
																	{
																		if(velocity < 9.745)
																			return 18.2659;
																		else
																			return 16.5494;
																	}
																}
															}
															else
																return 25.7946;
														}
													}
													else
													{
														if(rsrq < -8.5)
															return 6.85225;
														else
															return 0.87859;
													}
												}
												else
												{
													if(velocity < 11.87)
													{
														if(sinr < 4.5)
															return 18.419;
														else
														{
															if(payload < 3.5)
																return 23.1111;
															else
																return 21.7106666667;
														}
													}
													else
													{
														if(cell < 13099786)
															return 27.4207;
														else
															return 29.1041;
													}
												}
											}
										}
									}
								}
								else
								{
									if(cqi < 7.5)
									{
										if(velocity < 11.965)
											return 9.21423;
										else
											return 15.4745;
									}
									else
									{
										if(sinr < 4)
										{
											if(sinr < 1)
												return 2.96626;
											else
												return 5.57578;
										}
										else
										{
											if(rsrp < -107)
												return 11.53495;
											else
												return 13.7274;
										}
									}
								}
							}
							else
							{
								if(velocity < 8.715)
								{
									if(cell < 13230089)
										return 24.7391;
									else
									{
										if(velocity < 1.965)
										{
											if(rsrp < -110.5)
											{
												if(cqi < 8)
													return 23.6998;
												else
												{
													if(ta < 20.5)
														return 16.3182;
													else
														return 18.3814;
												}
											}
											else
												return 13.6612;
										}
										else
											return 14.74925;
									}
								}
								else
								{
									if(ta < 78.5)
									{
										if(cqi < 11.5)
										{
											if(ta < 60.5)
											{
												if(ta < 37)
												{
													if(payload < 3)
														return 11.713;
													else
													{
														if(velocity < 24.46)
															return 5.7376;
														else
															return 7.63151;
													}
												}
												else
													return 0.8494965;
											}
											else
												return 13.4822;
										}
										else
										{
											if(payload < 4)
												return 21.4286;
											else
												return 14.6681;
										}
									}
									else
										return 1.32491;
								}
							}
						}
						else
						{
							if(sinr < 0.5)
								return 51.0204;
							else
							{
								if(ta < 25)
								{
									if(sinr < 3)
									{
										if(velocity < 15.155)
										{
											if(ta < 12.5)
												return 22.1852;
											else
												return 23.902;
										}
										else
											return 12.9492;
									}
									else
									{
										if(ta < 15)
										{
											if(velocity < 14.145)
											{
												if(rsrq < -8.5)
													return 37.2439;
												else
												{
													if(sinr < 5.5)
														return 29.1758;
													else
														return 32.5866;
												}
											}
											else
												return 25.6249;
										}
										else
										{
											if(velocity < 11.125)
											{
												if(sinr < 7.5)
												{
													if(cqi < 8.5)
														return 22.4845;
													else
														return 27.3131;
												}
												else
													return 28.643;
											}
											else
												return 17.3837;
										}
									}
								}
								else
									return 12.77168;
							}
						}
					}
					else
					{
						if(ta < 10.5)
						{
							if(cell < 13394185)
							{
								if(rsrp < -85.5)
								{
									if(rsrp < -93)
									{
										if(velocity < 13.785)
										{
											if(sinr < 6.5)
											{
												if(rsrp < -94.5)
													return 24.8139;
												else
													return 27.9525;
											}
											else
												return 22.0791;
										}
										else
											return 50;
									}
									else
									{
										if(cqi < 8.5)
										{
											if(rsrp < -88.5)
											{
												if(rsrp < -90.5)
													return 47.0193;
												else
													return 36.3086;
											}
											else
												return 14.4665;
										}
										else
										{
											if(ta < 6.5)
											{
												if(ta < 4.5)
													return 51.9106;
												else
													return 53.5714;
											}
											else
											{
												if(rsrp < -87.5)
												{
													if(sinr < 5.5)
														return 40.3277;
													else
														return 45.2617;
												}
												else
													return 34.2612;
											}
										}
									}
								}
								else
									return 82.1566;
							}
							else
							{
								if(rsrp < -79)
								{
									if(cell < 13932802.5)
									{
										if(ta < 8.5)
										{
											if(velocity < 14.27)
											{
												if(sinr < 3.5)
												{
													if(ta < 3.5)
													{
														if(rsrq < -8.5)
															return 25.641;
														else
															return 11.9166;
													}
													else
													{
														if(ta < 6)
															return 29.1333;
														else
															return 30.7397;
													}
												}
												else
												{
													if(velocity < 4.83)
														return 8.79282;
													else
													{
														if(rsrp < -87.5)
															return 17.6712;
														else
															return 15.2091;
													}
												}
											}
											else
											{
												if(rsrp < -92)
												{
													if(rsrp < -93.5)
														return 26.2834;
													else
														return 22.7201;
												}
												else
												{
													if(cell < 13530759.5)
														return 28.0998;
													else
													{
														if(payload < 4)
															return 37.4707;
														else
															return 41.9948;
													}
												}
											}
										}
										else
										{
											if(cell < 13532419)
												return 55.088;
											else
												return 35.9102;
										}
									}
									else
										return 16.609;
								}
								else
									return 47.6758;
							}
						}
						else
						{
							if(sinr < 5.5)
							{
								if(sinr < 3)
								{
									if(velocity < 33.965)
									{
										if(ta < 15)
											return 3.76176;
										else
										{
											if(sinr < -1.5)
												return 18.6741;
											else
											{
												if(payload < 3.5)
													return 14.6119;
												else
													return 13.32;
											}
										}
									}
									else
										return 5.75126;
								}
								else
								{
									if(cell < 13527938.5)
									{
										if(rsrp < -94)
											return 23.7741;
										else
											return 20.8062;
									}
									else
									{
										if(payload < 3.5)
											return 19.0779;
										else
											return 13.2013;
									}
								}
							}
							else
							{
								if(payload < 3.5)
								{
									if(cell < 13474690.5)
										return 16.2933;
									else
										return 14.3284;
								}
								else
								{
									if(cqi < 8.5)
										return 15.4341;
									else
									{
										if(rsrp < -93.5)
										{
											if(rsrp < -94.5)
											{
												if(cqi < 9.5)
													return 43.1558;
												else
													return 41.0959;
											}
											else
												return 35.2734;
										}
										else
										{
											if(cell < 13394690)
											{
												if(sinr < 7.5)
													return 20.4529;
												else
													return 25.953;
											}
											else
											{
												if(rsrq < -8.5)
													return 30.7692;
												else
													return 34.5572;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else
			{
				if(payload < 3.5)
				{
					if(rsrp < -103.5)
					{
						if(ta < 10.5)
							return 1.35616;
						else
						{
							if(velocity < 14.415)
							{
								if(payload < 0.3)
								{
									if(cqi < 11)
									{
										if(cqi < 9)
											return 8.00003;
										else
											return 10.5264;
									}
									else
										return 16.0001;
								}
								else
								{
									if(velocity < 10.29)
									{
										if(cqi < 9)
											return 24.8447;
										else
											return 21.3718333333;
									}
									else
									{
										if(rsrp < -106.5)
											return 9.25569;
										else
											return 16.40694;
									}
								}
							}
							else
								return 33.6606;
						}
					}
					else
					{
						if(velocity < 16.105)
						{
							if(cqi < 8.5)
							{
								if(f < 2247.55)
								{
									if(sinr < 9.5)
										return 14.2476;
									else
										return 6.47249;
								}
								else
								{
									if(rsrp < -101)
										return 21.3904;
									else
									{
										if(rsrq < -8.5)
											return 24.8062;
										else
											return 26.8156;
									}
								}
							}
							else
							{
								if(rsrp < -92.5)
								{
									if(cell < 13393928)
									{
										if(rsrp < -100)
										{
											if(velocity < 14.125)
												return 25.1309;
											else
											{
												if(ta < 15.5)
													return 36.2538;
												else
													return 24.8447;
											}
										}
										else
										{
											if(rsrp < -96.5)
												return 36.3636;
											else
												return 34.10076;
										}
									}
									else
									{
										if(sinr < 14.5)
											return 20.3046;
										else
											return 13.1148;
									}
								}
								else
								{
									if(payload < 0.3)
									{
										if(cqi < 10.5)
											return 9.87658;
										else
											return 7.40744;
									}
									else
									{
										if(cell < 13406213.5)
										{
											if(velocity < 12.37)
											{
												if(velocity < 10.545)
												{
													if(cell < 13400065.5)
													{
														if(rsrp < -83.5)
														{
															if(sinr < 21.5)
																return 26.8456;
															else
																return 22.2222;
														}
														else
														{
															if(rsrp < -74.5)
															{
																if(ta < 8.5)
																{
																	if(rsrp < -79)
																		return 36.036;
																	else
																		return 33.6134;
																}
																else
																	return 29.4118;
															}
															else
																return 23.0548;
														}
													}
													else
													{
														if(cqi < 11.5)
														{
															if(payload < 2.5)
															{
																if(sinr < 13)
																	return 18.8679;
																else
																{
																	if(rsrq < -8.5)
																		return 38.835;
																	else
																		return 21.9479;
																}
															}
															else
																return 21.5054;
														}
														else
															return 27.5862;
													}
												}
												else
												{
													if(velocity < 11.185)
														return 11.0497;
													else
														return 19.4175;
												}
											}
											else
											{
												if(ta < 9.5)
												{
													if(rsrp < -85)
														return 35.3982;
													else
														return 30.4183;
												}
												else
													return 22.2017;
											}
										}
										else
										{
											if(payload < 1.5)
											{
												if(rsrp < -79.5)
													return 34.3348;
												else
													return 36.3636;
											}
											else
												return 27.1402666667;
										}
									}
								}
							}
						}
						else
						{
							if(cell < 13404037.5)
							{
								if(payload < 1.5)
									return 27.972;
								else
									return 17.5055;
							}
							else
							{
								if(ta < 14)
									return 3.57462;
								else
									return 5.49073;
							}
						}
					}
				}
				else
				{
					if(rsrp < -90.5)
					{
						if(rsrp < -111.5)
						{
							if(rsrp < -112.5)
								return 4.3483;
							else
								return 5.64687;
						}
						else
						{
							if(cell < 13044869.5)
							{
								if(rsrp < -105.5)
								{
									if(payload < 5.5)
									{
										if(rsrq < -8.5)
											return 35.9147;
										else
										{
											if(payload < 4.5)
												return 26.6667;
											else
												return 31.2256;
										}
									}
									else
									{
										if(cqi < 10)
										{
											if(rsrq < -8.5)
												return 29.1616;
											else
												return 38.4615;
										}
										else
										{
											if(payload < 9)
											{
												if(velocity < 13.79)
													return 20.1239333333;
												else
													return 15.0991;
											}
											else
												return 25.2924;
										}
									}
								}
								else
								{
									if(velocity < 13.605)
									{
										if(velocity < 12.995)
										{
											if(rsrp < -93.5)
											{
												if(f < 1362.55)
													return 21.4765;
												else
												{
													if(rsrq < -8.5)
														return 31.38595;
													else
														return 36.6133;
												}
											}
											else
												return 36.6972;
										}
										else
											return 22.69025;
									}
									else
									{
										if(velocity < 14.875)
										{
											if(payload < 6.5)
												return 39.9002;
											else
												return 37.8096;
										}
										else
											return 33.7909;
									}
								}
							}
							else
							{
								if(cell < 13527939)
								{
									if(sinr < 13.5)
									{
										if(f < 2247.55)
										{
											if(cell < 13400833)
											{
												if(sinr < 9.5)
													return 14.2191;
												else
												{
													if(cell < 13394690)
													{
														if(payload < 8.5)
															return 24.6841;
														else
															return 26.3244;
													}
													else
														return 22.2779;
												}
											}
											else
											{
												if(cqi < 10.5)
												{
													if(ta < 21.5)
													{
														if(rsrq < -8.5)
															return 15.4291;
														else
															return 16.9671;
													}
													else
														return 18.9026;
												}
												else
												{
													if(cqi < 13)
														return 8.57858;
													else
														return 13.1148;
												}
											}
										}
										else
										{
											if(rsrp < -99.5)
												return 34.9918;
											else
												return 31.4806;
										}
									}
									else
									{
										if(sinr < 15.5)
											return 9.29152;
										else
										{
											if(cqi < 13.5)
												return 15.0960666667;
											else
												return 19.8441;
										}
									}
								}
								else
								{
									if(sinr < 11.5)
										return 30.4569;
									else
									{
										if(payload < 6.5)
											return 27.6817;
										else
											return 25.8435;
									}
								}
							}
						}
					}
					else
					{
						if(f < 1362.55)
						{
							if(sinr < 17.5)
							{
								if(cell < 13394818)
								{
									if(cqi < 10.5)
									{
										if(ta < 9.5)
										{
											if(ta < 7.5)
												return 40.6047754448;
											else
											{
												if(sinr < 13.5)
													return 44.1989;
												else
													return 47.5248;
											}
										}
										else
										{
											if(payload < 7.5)
												return 40.4332;
											else
												return 35.8142;
										}
									}
									else
									{
										if(rsrp < -87.5)
										{
											if(payload < 6.5)
												return 40.9417;
											else
												return 43.7756;
										}
										else
										{
											if(ta < 5.5)
											{
												if(payload < 8.5)
													return 61.127;
												else
													return 63.9432;
											}
											else
											{
												if(rsrp < -84.5)
													return 58.2053;
												else
													return 48.6322;
											}
										}
									}
								}
								else
								{
									if(cqi < 10.5)
									{
										if(payload < 6.5)
										{
											if(rsrp < -84.5)
												return 33.264;
											else
											{
												if(velocity < 5.87)
													return 27.3785;
												else
													return 25.6892333333;
											}
										}
										else
											return 34.38055;
									}
									else
									{
										if(cqi < 13.5)
										{
											if(rsrp < -82.5)
												return 20.1149;
											else
											{
												if(payload < 7)
													return 13.4945;
												else
													return 14.9184;
											}
										}
										else
										{
											if(payload < 6.5)
												return 26.9542;
											else
												return 35.8543;
										}
									}
								}
							}
							else
							{
								if(cqi < 11.5)
								{
									if(rsrp < -83.5)
										return 81.8182;
									else
										return 52.9801;
								}
								else
								{
									if(sinr < 25.5)
									{
										if(rsrp < -80.5)
											return 52.2023;
										else
										{
											if(payload < 6.5)
												return 44.9438;
											else
												return 43.088;
										}
									}
									else
									{
										if(rsrp < -75)
											return 66.1157;
										else
											return 56.0224;
									}
								}
							}
						}
						else
						{
							if(velocity < 7.53)
							{
								if(sinr < 15)
								{
									if(payload < 5.5)
										return 40.9417;
									else
										return 33.3333;
								}
								else
								{
									if(payload < 4.5)
										return 52.2023;
									else
										return 47.619;
								}
							}
							else
							{
								if(ta < 12.5)
								{
									if(sinr < 14.5)
									{
										if(velocity < 11.515)
											return 38.1316;
										else
											return 41.5562723404;
									}
									else
									{
										if(sinr < 29.5)
										{
											if(ta < 4.5)
											{
												if(rsrp < -85)
													return 31.5956;
												else
													return 33.67;
											}
											else
											{
												if(payload < 8.5)
													return 29.3501;
												else
													return 26.8456;
											}
										}
										else
											return 18.4811;
									}
								}
								else
								{
									if(payload < 7.5)
									{
										if(rsrp < -88)
											return 23.0263;
										else
											return 14.4665;
									}
									else
										return 15.7287;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			if(sinr < 15.5)
			{
				if(velocity < 15.94)
				{
					if(ta < 16.5)
					{
						if(cell < 13175305.5)
						{
							if(velocity < 13.665)
							{
								if(ta < 8.5)
								{
									if(cqi < 10.5)
									{
										if(rsrp < -84.5)
										{
											if(rsrp < -86.5)
												return 15.2672;
											else
												return 19.9572;
										}
										else
										{
											if(rsrp < -82.5)
											{
												if(velocity < 9.75)
													return 26.8456;
												else
												{
													if(rsrp < -83.5)
														return 30.1075;
													else
														return 27.2727;
												}
											}
											else
												return 38.2775;
										}
									}
									else
									{
										if(payload < 1.5)
										{
											if(rsrp < -79)
												return 32.3887;
											else
											{
												if(rsrq < -6.5)
												{
													if(cell < 13175301.5)
														return 14.2858;
													else
														return 17.7778;
												}
												else
													return 11.9048;
											}
										}
										else
										{
											if(velocity < 2.305)
											{
												if(rsrp < -82.5)
												{
													if(rsrq < -6.5)
														return 31.4548;
													else
													{
														if(payload < 4)
															return 65.7534;
														else
														{
															if(cell < 12985224.5)
																return 40.4296;
															else
																return 42.9185;
														}
													}
												}
												else
												{
													if(cqi < 11.5)
													{
														if(sinr < 9)
															return 62.3608;
														else
														{
															if(rsrp < -78)
																return 62.7451;
															else
																return 55.1724;
														}
													}
													else
													{
														if(sinr < 13.5)
															return 57.4359;
														else
														{
															if(payload < 5.5)
																return 64.3863;
															else
																return 85.2359;
														}
													}
												}
											}
											else
											{
												if(velocity < 6.615)
													return 27.1532;
												else
												{
													if(rsrq < -6)
														return 51.8639;
													else
														return 42.4268;
												}
											}
										}
									}
								}
								else
								{
									if(velocity < 12.285)
									{
										if(payload < 1.5)
										{
											if(sinr < 9.5)
												return 16.1943;
											else
												return 27.47638;
										}
										else
										{
											if(rsrp < -105.5)
											{
												if(cell < 13020554.5)
												{
													if(ta < 15)
													{
														if(rsrp < -106.5)
															return 25.5265;
														else
															return 30.2648;
													}
													else
													{
														if(rsrp < -107.5)
															return 20.1258;
														else
															return 29.0592;
													}
												}
												else
													return 18.8531;
											}
											else
											{
												if(cqi < 13.5)
												{
													if(payload < 7.5)
													{
														if(rsrp < -95)
															return 53.2826;
														else
														{
															if(rsrp < -91.5)
																return 36.9515;
															else
																return 43.956;
														}
													}
													else
													{
														if(cqi < 10.5)
															return 33.609675;
														else
														{
															if(rsrp < -99)
																return 44.6927;
															else
																return 32.2418;
														}
													}
												}
												else
												{
													if(payload < 4)
														return 29.484;
													else
													{
														if(rsrp < -104)
															return 17.7148;
														else
															return 38.9105;
													}
												}
											}
										}
									}
									else
									{
										if(payload < 5)
										{
											if(payload < 2.05)
												return 19.5123;
											else
												return 21.0804;
										}
										else
											return 43.3213;
									}
								}
							}
							else
							{
								if(rsrp < -95)
									return 133.334;
								else
								{
									if(cqi < 12.5)
										return 26.393;
									else
										return 46.8619;
								}
							}
						}
						else
						{
							if(payload < 1.5)
							{
								if(rsrp < -104.5)
									return 29.1971;
								else
								{
									if(f < 1362.55)
									{
										if(velocity < 12.33)
										{
											if(rsrp < -84.5)
											{
												if(cell < 13400193)
													return 20.5128;
												else
												{
													if(rsrp < -89.5)
														return 17.094;
													else
														return 13.5594;
												}
											}
											else
												return 26.3158;
										}
										else
										{
											if(velocity < 12.905)
												return 41.8848;
											else
											{
												if(velocity < 14.08)
												{
													if(payload < 0.75)
														return 26.1438;
													else
														return 28.88125;
												}
												else
												{
													if(velocity < 14.21)
														return 19.4175;
													else
														return 21.9348684211;
												}
											}
										}
									}
									else
									{
										if(payload < 0.3)
										{
											if(ta < 5.5)
											{
												if(f < 2247.55)
												{
													if(rsrp < -74.5)
													{
														if(sinr < -1)
															return 12.7049333333;
														else
															return 14.2858;
													}
													else
														return 10.8109;
												}
												else
													return 17.3914;
											}
											else
											{
												if(rsrp < -102.5)
													return 3.90245;
												else
												{
													if(cqi < 11)
													{
														if(sinr < 11.5)
															return 5.71431;
														else
															return 8.51067;
													}
													else
													{
														if(ta < 15)
															return 9.941365;
														else
															return 7.40744;
													}
												}
											}
										}
										else
										{
											if(ta < 10.5)
											{
												if(cqi < 9.5)
												{
													if(rsrp < -85.5)
														return 22.792;
													else
														return 26.1438;
												}
												else
												{
													if(f < 2247.55)
													{
														if(cqi < 12.5)
															return 20.0434;
														else
															return 22.2317208955;
													}
													else
													{
														if(payload < 0.75)
															return 22.4719;
														else
															return 13.9373;
													}
												}
											}
											else
											{
												if(rsrp < -92)
													return 10.0756;
												else
													return 16.5289;
											}
										}
									}
								}
							}
							else
							{
								if(rsrp < -85.5)
								{
									if(velocity < 7.995)
									{
										if(cqi < 8.5)
											return 79.7342;
										else
										{
											if(sinr < 8)
											{
												if(rsrp < -104)
												{
													if(velocity < 0.38)
													{
														if(ta < 15)
															return 19.8758;
														else
															return 30.9392;
													}
													else
														return 4.77644;
												}
												else
												{
													if(sinr < 1)
														return 33.1675;
													else
														return 29.3578;
												}
											}
											else
											{
												if(velocity < 6.285)
												{
													if(cqi < 9.5)
														return 24.1619;
													else
													{
														if(rsrp < -100.5)
														{
															if(rsrp < -102.5)
																return 45.7143;
															else
																return 49.0196;
														}
														else
														{
															if(cqi < 12.5)
															{
																if(payload < 5.5)
																{
																	if(cell < 13399560)
																		return 41.4508;
																	else
																		return 36.98135;
																}
																else
																	return 42.7807;
															}
															else
																return 28.6944;
														}
													}
												}
												else
												{
													if(ta < 7)
														return 39.0879;
													else
														return 51.13186;
												}
											}
										}
									}
									else
									{
										if(payload < 5.5)
										{
											if(rsrp < -91)
											{
												if(cqi < 11.5)
												{
													if(payload < 4.5)
													{
														if(rsrp < -98.5)
														{
															if(rsrp < -103.5)
																return 26.287;
															else
																return 20.6587;
														}
														else
														{
															if(rsrp < -94.5)
															{
																if(cell < 13393413.5)
																	return 27.3973;
																else
																{
																	if(payload < 2.5)
																		return 32.3887;
																	else
																		return 30.4569;
																}
															}
															else
																return 38.5078;
														}
													}
													else
														return 5.66653;
												}
												else
													return 6.28437;
											}
											else
											{
												if(velocity < 10.15)
													return 13.6054;
												else
													return 14.8786;
											}
										}
										else
										{
											if(rsrp < -88.5)
											{
												if(velocity < 13.64)
												{
													if(rsrp < -97.5)
													{
														if(f < 2247.55)
														{
															if(payload < 8)
																return 25.7909666667;
															else
																return 30.6122;
														}
														else
														{
															if(sinr < 11)
																return 31.4961;
															else
																return 30.1091;
														}
													}
													else
													{
														if(payload < 9.5)
														{
															if(cell < 13532419)
															{
																if(cqi < 8)
																	return 38.7097;
																else
																{
																	if(rsrp < -91.5)
																	{
																		if(sinr < 11.5)
																		{
																			if(rsrp < -92.5)
																				return 33.20115;
																			else
																				return 31.5138;
																		}
																		else
																			return 36.6013;
																	}
																	else
																		return 36.5102;
																}
															}
															else
																return 45.6853;
														}
														else
															return 27.3038;
													}
												}
												else
												{
													if(payload < 7.5)
													{
														if(rsrp < -94)
															return 25.3623;
														else
															return 27.104825;
													}
													else
														return 24.3902;
												}
											}
											else
												return 7.45573;
										}
									}
								}
								else
								{
									if(sinr < 10.5)
									{
										if(cell < 13400197.5)
										{
											if(velocity < 3.855)
												return 51.30375;
											else
											{
												if(cqi < 4)
													return 53.1561;
												else
												{
													if(cqi < 8)
														return 78.0488;
													else
													{
														if(velocity < 12.87)
														{
															if(payload < 8.5)
																return 69.6517;
															else
																return 68.2012;
														}
														else
															return 67.4536;
													}
												}
											}
										}
										else
										{
											if(ta < 4.5)
											{
												if(ta < 2.5)
													return 18.4829;
												else
												{
													if(cell < 13468556)
													{
														if(rsrp < -80.5)
															return 48.9896;
														else
															return 58.6387;
													}
													else
													{
														if(payload < 5.5)
															return 63.2411;
														else
															return 65.3951;
													}
												}
											}
											else
											{
												if(rsrp < -83.5)
													return 27.5704;
												else
													return 38.3234;
											}
										}
									}
									else
									{
										if(payload < 9.5)
										{
											if(velocity < 10.555)
											{
												if(rsrq < -6.5)
													return 38.0952;
												else
												{
													if(velocity < 7.235)
														return 59.3142;
													else
														return 56.2502666667;
												}
											}
											else
											{
												if(payload < 8)
												{
													if(velocity < 12.32)
													{
														if(cell < 13393540.5)
														{
															if(rsrp < -82.5)
																return 42.735;
															else
																return 36.3912;
														}
														else
															return 29.5749;
													}
													else
													{
														if(cell < 13400194)
														{
															if(cqi < 9)
																return 41.7755;
															else
															{
																if(velocity < 12.85)
																	return 34.1672;
																else
																{
																	if(payload < 4)
																		return 32.8317;
																	else
																		return 31.5706;
																}
															}
														}
														else
															return 48.9796;
													}
												}
												else
													return 14.739;
											}
										}
										else
											return 109.589;
									}
								}
							}
						}
					}
					else
					{
						if(sinr < 8.5)
						{
							if(payload < 9.5)
							{
								if(payload < 3.5)
								{
									if(rsrp < -109)
										return 4.6243;
									else
									{
										if(velocity < 13.515)
										{
											if(ta < 44.5)
											{
												if(rsrq < -6.5)
												{
													if(sinr < 6.5)
													{
														if(rsrp < -97)
															return 17.9372;
														else
															return 19.2771;
													}
													else
														return 14.944;
												}
												else
													return 13.5135;
											}
											else
												return 7.3235066667;
										}
										else
										{
											if(payload < 2.5)
												return 14.5852;
											else
												return 17.41914;
										}
									}
								}
								else
								{
									if(rsrp < -104.5)
									{
										if(cqi < 9)
										{
											if(rsrp < -107.5)
												return 7.67202;
											else
												return 8.94454;
										}
										else
										{
											if(sinr < 5.5)
											{
												if(rsrp < -107.5)
												{
													if(rsrp < -108.5)
														return 21.0416;
													else
														return 17.7215;
												}
												else
												{
													if(cqi < 11.5)
														return 24.5506;
													else
														return 22.0994;
												}
											}
											else
												return 8.45368;
										}
									}
									else
									{
										if(velocity < 13.905)
										{
											if(rsrq < -6.5)
											{
												if(payload < 5)
													return 28.1442;
												else
												{
													if(velocity < 5.435)
													{
														if(payload < 7.5)
															return 31.7041;
														else
															return 29.7275;
													}
													else
														return 43.75;
												}
											}
											else
											{
												if(sinr < 5.5)
													return 15.6517;
												else
													return 23.1968;
											}
										}
										else
											return 14.5852;
									}
								}
							}
							else
							{
								if(cell < 13299974.5)
									return 11.8151;
								else
									return 3.51093;
							}
						}
						else
						{
							if(sinr < 12.5)
							{
								if(cqi < 8.5)
									return 56.2588;
								else
								{
									if(rsrp < -98.5)
									{
										if(rsrp < -108)
											return 27.8054;
										else
										{
											if(cell < 13230089)
												return 22.267275;
											else
												return 20.1005;
										}
									}
									else
									{
										if(sinr < 9.5)
										{
											if(cqi < 9.5)
												return 26.2664;
											else
												return 33.5196;
										}
										else
										{
											if(sinr < 10.5)
											{
												if(payload < 4.5)
													return 38.0952;
												else
													return 33.3333;
											}
											else
											{
												if(payload < 6)
													return 36.0902;
												else
													return 49.3489;
											}
										}
									}
								}
							}
							else
							{
								if(cell < 13242246.5)
								{
									if(rsrp < -98.5)
									{
										if(sinr < 13.5)
											return 9.61307;
										else
											return 23.6006;
									}
									else
									{
										if(payload < 8.5)
										{
											if(ta < 43.5)
												return 33.0579;
											else
												return 35.9753;
										}
										else
											return 27.1493;
									}
								}
								else
								{
									if(rsrp < -88)
									{
										if(rsrp < -94)
											return 14.6982;
										else
										{
											if(sinr < 14)
												return 10.6484;
											else
												return 7.33948;
										}
									}
									else
										return 25.9981;
								}
							}
						}
					}
				}
				else
				{
					if(sinr < 4.5)
					{
						if(ta < 19.5)
						{
							if(ta < 6)
								return 13.0445;
							else
							{
								if(cell < 13395457.5)
									return 2.26565;
								else
								{
									if(sinr < 0.5)
									{
										if(sinr < -1.5)
											return 6.1053466667;
										else
											return 8.21566;
									}
									else
										return 3.79867;
								}
							}
						}
						else
						{
							if(cell < 13406338)
								return 17.203;
							else
								return 10.3093;
						}
					}
					else
					{
						if(payload < 0.75)
						{
							if(ta < 12.5)
								return 10.202725;
							else
								return 4.80192;
						}
						else
						{
							if(rsrp < -104.5)
								return 1.43123;
							else
							{
								if(cell < 13395457.5)
								{
									if(rsrq < -5.5)
									{
										if(payload < 8.5)
										{
											if(cqi < 14.5)
											{
												if(velocity < 18.47)
												{
													if(rsrp < -98.5)
														return 28.3152333333;
													else
														return 20.9607;
												}
												else
												{
													if(f < 1362.55)
													{
														if(payload < 7.5)
															return 30.0597;
														else
															return 32.0481;
													}
													else
														return 37.3178;
												}
											}
											else
											{
												if(rsrp < -92)
													return 21.7687;
												else
													return 15.1086;
											}
										}
										else
										{
											if(payload < 9.5)
												return 11.7743;
											else
												return 22.5797;
										}
									}
									else
										return 39.7727;
								}
								else
								{
									if(rsrp < -80.5)
									{
										if(cell < 13470339)
										{
											if(sinr < 5.5)
												return 15.9151;
											else
											{
												if(cqi < 10)
												{
													if(rsrp < -94.5)
														return 19.6078;
													else
														return 21.4938;
												}
												else
												{
													if(rsrp < -81.5)
														return 23.4613833333;
													else
														return 26.2295;
												}
											}
										}
										else
										{
											if(rsrp < -95.5)
											{
												if(sinr < 8)
													return 12.4572;
												else
													return 14.2908;
											}
											else
											{
												if(payload < 3.5)
													return 12.7592;
												else
												{
													if(payload < 6)
														return 9.53516;
													else
														return 8.09819;
												}
											}
										}
									}
									else
									{
										if(payload < 4.5)
											return 7.09849;
										else
											return 9.375;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				if(payload < 1.5)
				{
					if(rsrp < -81.5)
					{
						if(cell < 13121419)
						{
							if(payload < 0.3)
							{
								if(rsrp < -85.5)
									return 5.19483;
								else
								{
									if(ta < 8)
										return 7.40744;
									else
										return 11.4286;
								}
							}
							else
							{
								if(sinr < 19.5)
								{
									if(cqi < 13.5)
									{
										if(sinr < 17.5)
										{
											if(rsrp < -102.5)
												return 23.1214;
											else
											{
												if(payload < 0.75)
													return 17.6211;
												else
													return 19.2308;
											}
										}
										else
											return 29.8507;
									}
									else
										return 33.8983;
								}
								else
								{
									if(rsrp < -90)
										return 25.3165;
									else
										return 8.7146;
								}
							}
						}
						else
						{
							if(sinr < 30)
							{
								if(cell < 13394823.5)
								{
									if(sinr < 23)
									{
										if(cell < 13393413)
											return 43.956;
										else
										{
											if(rsrq < -6.5)
											{
												if(sinr < 16.5)
													return 34.7826;
												else
													return 32.6531;
											}
											else
											{
												if(f < 1745)
													return 18.8679;
												else
												{
													if(rsrq < -5.5)
														return 34.188;
													else
														return 27.3973;
												}
											}
										}
									}
									else
									{
										if(cqi < 12.5)
										{
											if(rsrp < -86.5)
												return 20.3046;
											else
												return 23.9521;
										}
										else
											return 27.3038;
									}
								}
								else
								{
									if(payload < 0.75)
									{
										if(ta < 3.5)
											return 22.8572;
										else
										{
											if(f < 1745)
											{
												if(sinr < 23.5)
													return 17.6211;
												else
												{
													if(rsrq < -6.5)
														return 18.1818;
													else
														return 19.6078;
												}
											}
											else
												return 15.444;
										}
									}
									else
										return 25.641;
								}
							}
							else
								return 53.3335;
						}
					}
					else
					{
						if(rsrp < -71.5)
						{
							if(rsrp < -73.5)
							{
								if(cqi < 12.5)
								{
									if(payload < 0.3)
									{
										if(velocity < 3.9)
											return 61.5387;
										else
											return 13.3334;
									}
									else
									{
										if(payload < 0.75)
										{
											if(rsrp < -79.5)
												return 29.6296;
											else
											{
												if(rsrq < -5.5)
													return 22.3464;
												else
													return 18.018;
											}
										}
										else
										{
											if(velocity < 8.335)
												return 47.9042;
											else
											{
												if(sinr < 17)
													return 32.2581;
												else
													return 29.1112166667;
											}
										}
									}
								}
								else
								{
									if(sinr < 23.5)
										return 19.5763333333;
									else
									{
										if(cell < 12998017.5)
										{
											if(velocity < 8.525)
											{
												if(rsrp < -80.5)
													return 34.4828;
												else
													return 36.3636;
											}
											else
												return 29.7398;
										}
										else
										{
											if(cell < 13393540.5)
											{
												if(cqi < 13.5)
													return 18.4758;
												else
													return 21.1843666667;
											}
											else
											{
												if(payload < 0.75)
												{
													if(cqi < 14)
														return 22.8571;
													else
														return 24.5399;
												}
												else
													return 37.3832;
											}
										}
									}
								}
							}
							else
							{
								if(payload < 0.55)
									return 160.001;
								else
									return 33.4728;
							}
						}
						else
						{
							if(payload < 0.3)
							{
								if(sinr < 17.5)
									return 19.5123;
								else
								{
									if(ta < 6.5)
									{
										if(ta < 5)
											return 6.50409;
										else
											return 9.19544;
									}
									else
									{
										if(rsrq < -6)
											return 5.71431;
										else
											return 8.24745;
									}
								}
							}
							else
							{
								if(f < 1362.55)
								{
									if(ta < 6.5)
									{
										if(cqi < 13)
											return 31.4961;
										else
										{
											if(rsrp < -68.5)
												return 24.0964;
											else
												return 27.6817;
										}
									}
									else
										return 22.022;
								}
								else
								{
									if(cqi < 14.5)
										return 46.5116;
									else
										return 32.5203;
								}
							}
						}
					}
				}
				else
				{
					if(ta < 11.5)
					{
						if(cqi < 11.5)
						{
							if(cqi < 9.5)
							{
								if(rsrq < -6.5)
								{
									if(cqi < 6)
									{
										if(sinr < 20)
											return 59.3081;
										else
											return 57.7386;
									}
									else
										return 74.0596428571;
								}
								else
								{
									if(payload < 8.5)
									{
										if(ta < 4.5)
											return 39.3443;
										else
											return 21.3832;
									}
									else
										return 60.251;
								}
							}
							else
							{
								if(cell < 13681421.5)
								{
									if(ta < 5.5)
									{
										if(sinr < 33.5)
										{
											if(cqi < 10.5)
											{
												if(rsrq < -5.5)
												{
													if(ta < 3.5)
														return 39.5795;
													else
														return 33.195;
												}
												else
													return 50.1175;
											}
											else
											{
												if(velocity < 12.17)
												{
													if(velocity < 5.625)
													{
														if(cell < 13393540.5)
														{
															if(rsrq < -6.5)
																return 52.9801;
															else
																return 55.2147;
														}
														else
														{
															if(payload < 6)
																return 48.6322;
															else
																return 52.7009;
														}
													}
													else
													{
														if(rsrq < -6.5)
															return 62.71;
														else
															return 74.0741;
													}
												}
												else
													return 50.7246;
											}
										}
										else
											return 84.8057;
									}
									else
									{
										if(sinr < 18.5)
										{
											if(payload < 5.5)
												return 25.417;
											else
												return 27.9163;
										}
										else
										{
											if(ta < 7.5)
											{
												if(sinr < 21.5)
												{
													if(payload < 3.5)
														return 41.9948;
													else
														return 45.8094666667;
												}
												else
												{
													if(sinr < 23)
														return 29.1793;
													else
														return 40.9207;
												}
											}
											else
											{
												if(ta < 9.5)
												{
													if(sinr < 30)
													{
														if(rsrp < -74.5)
														{
															if(sinr < 19.5)
																return 46.5116;
															else
																return 42.6099;
														}
														else
															return 52.6811;
													}
													else
														return 65.7895;
												}
												else
												{
													if(rsrq < -5.5)
														return 40.1205;
													else
													{
														if(velocity < 5.38)
															return 43.088;
														else
															return 44.8598;
													}
												}
											}
										}
									}
								}
								else
									return 18.7479;
							}
						}
						else
						{
							if(rsrq < -6.5)
							{
								if(rsrp < -89.5)
								{
									if(rsrp < -90.5)
										return 83.4783;
									else
										return 68.0272;
								}
								else
								{
									if(rsrp < -84.5)
									{
										if(sinr < 20)
											return 36.8664;
										else
											return 33.9188;
									}
									else
									{
										if(velocity < 7.28)
										{
											if(rsrp < -79.5)
											{
												if(ta < 3.5)
													return 47.976;
												else
												{
													if(payload < 7)
														return 54.8885;
													else
														return 50.2828;
												}
											}
											else
											{
												if(sinr < 24.5)
												{
													if(cqi < 13.5)
														return 62.82376;
													else
														return 54.6697;
												}
												else
													return 69.0399;
											}
										}
										else
										{
											if(sinr < 26.5)
											{
												if(rsrp < -76.5)
												{
													if(cell < 13183237)
														return 37.1661;
													else
													{
														if(payload < 6.5)
															return 46.43132;
														else
															return 42.7807;
													}
												}
												else
												{
													if(payload < 3)
														return 43.956;
													else
													{
														if(rsrp < -73)
														{
															if(cell < 13183874)
																return 57.7617;
															else
																return 60.4915;
														}
														else
															return 67.3212;
													}
												}
											}
											else
											{
												if(payload < 7)
													return 35.6877;
												else
												{
													if(payload < 9)
														return 39.0244;
													else
														return 37.2787;
												}
											}
										}
									}
								}
							}
							else
							{
								if(velocity < 12.585)
								{
									if(payload < 5.5)
									{
										if(velocity < 9.805)
										{
											if(sinr < 28.5)
											{
												if(ta < 2.5)
													return 78.2779;
												else
												{
													if(payload < 2.5)
													{
														if(rsrp < -70.5)
														{
															if(rsrp < -72.5)
																return 50;
															else
																return 48.3384;
														}
														else
															return 39.5062;
													}
													else
													{
														if(cqi < 13.5)
														{
															if(rsrp < -80.5)
															{
																if(payload < 3.5)
																	return 44.7761;
																else
																	return 37.8698;
															}
															else
															{
																if(sinr < 19.5)
																	return 60.8365;
																else
																	return 63.8978;
															}
														}
														else
														{
															if(velocity < 3.66)
															{
																if(cell < 13393540.5)
																	return 62.5;
																else
																{
																	if(sinr < 19.5)
																		return 71.9101;
																	else
																		return 68.7679;
																}
															}
															else
															{
																if(rsrq < -5.5)
																	return 50.6329;
																else
																	return 53.2151;
															}
														}
													}
												}
											}
											else
											{
												if(cqi < 13)
													return 54.2373;
												else
												{
													if(rsrp < -76.5)
													{
														if(sinr < 30.5)
															return 45.7143;
														else
															return 43.5967;
													}
													else
													{
														if(rsrp < -67)
														{
															if(rsrp < -72.5)
																return 47.7612;
															else
																return 56.1404;
														}
														else
															return 41.5584;
													}
												}
											}
										}
										else
										{
											if(ta < 6.5)
											{
												if(velocity < 11.295)
												{
													if(cell < 13230858.5)
														return 61.3733;
													else
														return 67.5105;
												}
												else
													return 58.3942;
											}
											else
											{
												if(cqi < 13.5)
													return 66.6667;
												else
													return 73.3945;
											}
										}
									}
									else
									{
										if(cqi < 13.5)
										{
											if(sinr < 20)
											{
												if(cell < 13183873.5)
												{
													if(rsrp < -77)
														return 53.3689;
													else
													{
														if(payload < 9.5)
															return 47.4308;
														else
															return 52.8751;
													}
												}
												else
													return 45.6621;
											}
											else
											{
												if(cell < 13020555)
												{
													if(sinr < 21.5)
														return 72.7273;
													else
													{
														if(cell < 12973576)
														{
															if(rsrp < -75.5)
																return 50.1567;
															else
																return 54.115;
														}
														else
															return 58.8235;
													}
												}
												else
												{
													if(cell < 13121417)
														return 74.5573;
													else
													{
														if(cell < 13393928)
															return 65.7435;
														else
															return 62.513725;
													}
												}
											}
										}
										else
										{
											if(rsrp < -77)
											{
												if(cell < 13230852.5)
												{
													if(rsrp < -85.5)
													{
														if(rsrp < -88.5)
															return 68.7961;
														else
															return 65.8436;
													}
													else
														return 81.7253;
												}
												else
												{
													if(rsrp < -80.5)
													{
														if(velocity < 5.395)
														{
															if(payload < 8.5)
																return 90.4685;
															else
																return 92.4855;
														}
														else
															return 79.0514;
													}
													else
														return 97.8261;
												}
											}
											else
											{
												if(payload < 9.5)
												{
													if(rsrp < -75.5)
														return 71.7489;
													else
													{
														if(sinr < 21)
															return 56.7376;
														else
														{
															if(ta < 5)
																return 66.9145;
															else
															{
																if(rsrq < -5.5)
																	return 64.257;
																else
																	return 65.5738;
															}
														}
													}
												}
												else
													return 73.8689;
											}
										}
									}
								}
								else
								{
									if(cell < 13394185)
									{
										if(ta < 9.5)
										{
											if(cell < 12973575)
												return 33.553;
											else
											{
												if(f < 2247.55)
												{
													if(sinr < 21.5)
													{
														if(cqi < 13.5)
															return 44.5682;
														else
															return 46.2428;
													}
													else
													{
														if(payload < 6.5)
														{
															if(velocity < 15.045)
																return 55.90825;
															else
																return 52.8926;
														}
														else
															return 61.5385;
													}
												}
												else
												{
													if(cqi < 14)
													{
														if(rsrp < -86)
															return 48.401;
														else
															return 44.5682;
													}
													else
													{
														if(velocity < 13.02)
															return 41.6938;
														else
														{
															if(sinr < 25)
																return 45.3686;
															else
																return 42.4628;
														}
													}
												}
											}
										}
										else
										{
											if(ta < 10.5)
											{
												if(cqi < 13.5)
												{
													if(payload < 4.5)
														return 61.3027;
													else
														return 64.6651;
												}
												else
													return 55.1724;
											}
											else
												return 54.6875;
										}
									}
									else
									{
										if(sinr < 17.5)
											return 23.4432;
										else
										{
											if(rsrp < -82.5)
											{
												if(payload < 4.5)
													return 38.5542;
												else
												{
													if(velocity < 15.06)
														return 20.8454;
													else
													{
														if(velocity < 15.41)
															return 31.355;
														else
															return 35.9034;
													}
												}
											}
											else
												return 42.6829;
										}
									}
								}
							}
						}
					}
					else
					{
						if(cell < 12914565.5)
						{
							if(cqi < 11.5)
								return 58.9474;
							else
							{
								if(velocity < 3.96)
								{
									if(ta < 16.5)
									{
										if(payload < 4)
											return 39.604;
										else
										{
											if(rsrp < -94.5)
												return 65.0407;
											else
												return 62.7943;
										}
									}
									else
									{
										if(sinr < 26.5)
										{
											if(sinr < 17.5)
												return 60.6061;
											else
											{
												if(rsrp < -93.5)
													return 45.911;
												else
													return 55.9441;
											}
										}
										else
											return 34.8837;
									}
								}
								else
								{
									if(payload < 7)
										return 37.325;
									else
										return 22.5352;
								}
							}
						}
						else
						{
							if(payload < 6.5)
							{
								if(rsrp < -72.5)
								{
									if(rsrp < -81.5)
									{
										if(rsrp < -99.5)
											return 11.1111;
										else
										{
											if(velocity < 28.115)
											{
												if(rsrq < -5.5)
												{
													if(ta < 17)
													{
														if(velocity < 13.815)
															return 19.5271;
														else
															return 16.4948;
													}
													else
														return 15.8025;
												}
												else
												{
													if(payload < 4.5)
														return 18.5471;
													else
													{
														if(ta < 41.5)
															return 28.4024;
														else
															return 25.0391;
													}
												}
											}
											else
											{
												if(ta < 17.5)
													return 26.7738;
												else
												{
													if(rsrp < -88.5)
														return 28.169;
													else
														return 34.2246;
												}
											}
										}
									}
									else
									{
										if(rsrp < -78)
											return 31.068;
										else
											return 28.4951;
									}
								}
								else
								{
									if(velocity < 16.03)
										return 51.1727;
									else
										return 35.8343;
								}
							}
							else
							{
								if(rsrp < -85)
								{
									if(ta < 43)
									{
										if(rsrp < -98)
											return 6.39375;
										else
										{
											if(rsrp < -91.5)
												return 21.0084;
											else
												return 22.8946;
										}
									}
									else
										return 42.2961;
								}
								else
								{
									if(rsrp < -81)
										return 48.0274;
									else
									{
										if(velocity < 20.115)
										{
											if(sinr < 29)
											{
												if(velocity < 6.715)
													return 34.188;
												else
												{
													if(rsrp < -78.5)
														return 36.1757;
													else
														return 40.404;
												}
											}
											else
												return 27.7778;
										}
										else
										{
											if(cqi < 13.5)
											{
												if(sinr < 29.5)
													return 48.823;
												else
													return 45.8979;
											}
											else
												return 41.8848;
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
}

float vodafone_dl_tree_3(float payload, float rsrp, float rsrq, float sinr, float cqi, float ta, float velocity, float cell, float f)
{
	if(rsrp < -91.5)
	{
		if(sinr < 7.5)
		{
			if(cell < 13394312)
			{
				if(rsrp < -103.5)
				{
					if(rsrq < -10.5)
					{
						if(cell < 13020427)
						{
							if(ta < 15)
							{
								if(payload < 0.3)
									return 3.58746;
								else
								{
									if(sinr < 3)
									{
										if(cqi < 8.5)
										{
											if(ta < 12.5)
												return 23.6551833333;
											else
												return 20.4953;
										}
										else
											return 16.2885;
									}
									else
										return 15.3257;
								}
							}
							else
							{
								if(payload < 6.5)
								{
									if(rsrp < -107)
									{
										if(velocity < 2.745)
										{
											if(sinr < -1.5)
												return 17.30045;
											else
												return 11.2293333333;
										}
										else
										{
											if(cqi < 5.5)
											{
												if(rsrp < -112.5)
													return 5.68182;
												else
													return 0.290488;
											}
											else
											{
												if(velocity < 13.455)
												{
													if(sinr < 5)
													{
														if(cqi < 9.5)
														{
															if(cqi < 6.5)
																return 14.0845;
															else
															{
																if(ta < 16.5)
																	return 10.5264;
																else
																{
																	if(sinr < 0)
																		return 10.8409666667;
																	else
																		return 8.092204;
																}
															}
														}
														else
															return 3.57782;
													}
													else
														return 5.22193;
												}
												else
												{
													if(sinr < -4)
														return 3.73367;
													else
													{
														if(sinr < 1)
															return 6.64866;
														else
															return 5.21308;
													}
												}
											}
										}
									}
									else
										return 30.4472;
								}
								else
								{
									if(payload < 9.5)
									{
										if(sinr < -4.5)
											return 21.1206;
										else
										{
											if(rsrp < -114)
												return 14.3113;
											else
											{
												if(rsrq < -11.5)
													return 14.67;
												else
													return 21.1161;
											}
										}
									}
									else
										return 23.76;
								}
							}
						}
						else
						{
							if(ta < 7.5)
								return 32.6697;
							else
							{
								if(cell < 13394055.5)
								{
									if(velocity < 0.495)
									{
										if(ta < 22)
										{
											if(payload < 3)
											{
												if(rsrq < -13)
												{
													if(rsrq < -15.5)
														return 3.6405;
													else
														return 0.814747;
												}
												else
												{
													if(rsrp < -111)
													{
														if(cqi < 6)
															return 5.47947;
														else
															return 4;
													}
													else
													{
														if(rsrp < -109.5)
															return 10.568;
														else
														{
															if(rsrq < -11.5)
																return 4.03633;
															else
																return 8.1633;
														}
													}
												}
											}
											else
											{
												if(cqi < 4.5)
													return 13.1926;
												else
												{
													if(sinr < 3)
													{
														if(payload < 8)
														{
															if(payload < 5.5)
																return 15.4664;
															else
																return 13.8614;
														}
														else
															return 21.4158;
													}
													else
														return 25.6904;
												}
											}
										}
										else
										{
											if(rsrq < -12.5)
											{
												if(cqi < 9)
												{
													if(rsrp < -108.5)
													{
														if(rsrp < -112.5)
															return 2.87998;
														else
															return 0.706614;
													}
													else
														return 5.39993;
												}
												else
													return 0.287254;
											}
											else
											{
												if(cell < 13157125.5)
													return 1.76725;
												else
													return 5.83516;
											}
										}
									}
									else
									{
										if(ta < 65.5)
										{
											if(payload < 4.5)
											{
												if(rsrq < -11.5)
												{
													if(cqi < 4.5)
													{
														if(payload < 0.55)
															return 3.77998;
														else
														{
															if(ta < 27)
															{
																if(ta < 16.5)
																	return 2.7171933333;
																else
																	return 1.019728;
															}
															else
																return 4.93599;
														}
													}
													else
													{
														if(velocity < 2.305)
															return 3.86475;
														else
															return 0.7453982609;
													}
												}
												else
												{
													if(ta < 12.5)
														return 25.8065;
													else
													{
														if(velocity < 13.235)
														{
															if(payload < 2.5)
																return 1.381676;
															else
																return 2.7443036364;
														}
														else
														{
															if(sinr < -2.5)
																return 0.091013;
															else
															{
																if(cqi < 5.5)
																	return 6.90846;
																else
																	return 8.24745;
															}
														}
													}
												}
											}
											else
											{
												if(sinr < -3.5)
												{
													if(rsrp < -117.5)
													{
														if(payload < 6.5)
															return 18.5701;
														else
															return 2.21262;
													}
													else
														return 2.3095542857;
												}
												else
												{
													if(rsrp < -105.5)
													{
														if(sinr < -2)
															return 15.3846;
														else
														{
															if(ta < 14)
																return 15.2091;
															else
															{
																if(rsrq < -12.5)
																{
																	if(ta < 43.5)
																		return 1.588785;
																	else
																		return 3.19598;
																}
																else
																{
																	if(velocity < 14.705)
																		return 5.7704875;
																	else
																		return 8.42359;
																}
															}
														}
													}
													else
														return 21.7244;
												}
											}
										}
										else
										{
											if(sinr < 4.5)
											{
												if(payload < 8.5)
												{
													if(payload < 2.5)
													{
														if(payload < 0.3)
															return 0.7827986667;
														else
														{
															if(velocity < 14.99)
															{
																if(velocity < 11.715)
																	return 2.27855;
																else
																	return 7.70713;
															}
															else
																return 1.6;
														}
													}
													else
													{
														if(velocity < 15.08)
															return 11.1684;
														else
														{
															if(rsrq < -12.5)
																return 5.9828;
															else
																return 2.40574;
														}
													}
												}
												else
													return 21.7984;
											}
											else
											{
												if(cqi < 8)
													return 26.0799;
												else
													return 10.3173;
											}
										}
									}
								}
								else
									return 20.3735;
							}
						}
					}
					else
					{
						if(payload < 3.5)
						{
							if(velocity < 12.94)
							{
								if(ta < 6.5)
									return 25.4777;
								else
								{
									if(cqi < 8.5)
									{
										if(rsrp < -110.5)
										{
											if(payload < 2)
											{
												if(ta < 33)
													return 2.72944;
												else
													return 0.668561;
											}
											else
											{
												if(ta < 19)
												{
													if(cqi < 7.5)
														return 11.583;
													else
														return 14.0598;
												}
												else
													return 5.70342;
											}
										}
										else
										{
											if(sinr < 5.5)
											{
												if(velocity < 6.55)
												{
													if(cell < 13147912.5)
													{
														if(cqi < 6.5)
															return 14.0351;
														else
															return 7.93651;
													}
													else
													{
														if(cell < 13392905)
															return 17.18665;
														else
															return 11.3422;
													}
												}
												else
												{
													if(payload < 1.75)
													{
														if(rsrp < -105.5)
															return 15.1803;
														else
															return 17.9372;
													}
													else
													{
														if(velocity < 12.165)
															return 16.6851;
														else
															return 21.6998;
													}
												}
											}
											else
											{
												if(sinr < 6.5)
													return 22.962625;
												else
												{
													if(ta < 15.5)
														return 15.1803;
													else
														return 18.7793;
												}
											}
										}
									}
									else
									{
										if(sinr < 5.5)
										{
											if(cqi < 10.5)
											{
												if(ta < 14.5)
													return 15.625;
												else
												{
													if(rsrp < -110)
													{
														if(sinr < 4)
															return 10.2302;
														else
															return 2.07793;
													}
													else
													{
														if(rsrp < -108.5)
															return 15.3945;
														else
														{
															if(payload < 0.75)
															{
																if(ta < 70.5)
																	return 7.3594333333;
																else
																	return 8.79124;
															}
															else
																return 9.01917;
														}
													}
												}
											}
											else
											{
												if(velocity < 10.655)
												{
													if(f < 2247.55)
													{
														if(velocity < 4.615)
															return 14.4231;
														else
															return 13.1148;
													}
													else
													{
														if(sinr < 3.5)
															return 13.3334;
														else
															return 17.094;
													}
												}
												else
													return 20.5129;
											}
										}
										else
										{
											if(ta < 16.5)
												return 0.8628265;
											else
												return 6.89658;
										}
									}
								}
							}
							else
							{
								if(ta < 10)
								{
									if(sinr < 3)
										return 0.879121;
									else
										return 50.0002;
								}
								else
								{
									if(rsrp < -107.5)
									{
										if(payload < 0.75)
										{
											if(sinr < 2)
											{
												if(rsrp < -111.5)
													return 2.28572;
												else
													return 4.6243;
											}
											else
												return 0.296389;
										}
										else
										{
											if(rsrp < -109)
											{
												if(payload < 2.5)
												{
													if(rsrq < -8.5)
														return 0.376533;
													else
														return 6.01956;
												}
												else
												{
													if(rsrp < -114.5)
														return 8.42697;
													else
														return 6.74157;
												}
											}
											else
												return 20.6718;
										}
									}
									else
									{
										if(rsrq < -9)
										{
											if(rsrp < -104.5)
												return 14.4231;
											else
												return 18.7354;
										}
										else
										{
											if(rsrp < -105.5)
											{
												if(velocity < 16.065)
													return 16.8067;
												else
													return 8.79124;
											}
											else
												return 2.11416;
										}
									}
								}
							}
						}
						else
						{
							if(ta < 22)
							{
								if(sinr < -2.5)
								{
									if(sinr < -4.5)
									{
										if(sinr < -8.5)
											return 3.27694;
										else
											return 7.60766;
									}
									else
									{
										if(cqi < 5.5)
											return 12.07555;
										else
											return 14.1315;
									}
								}
								else
								{
									if(ta < 12)
									{
										if(cqi < 5)
											return 26.6889;
										else
										{
											if(cell < 13121416.5)
											{
												if(rsrq < -9.5)
													return 37.9147;
												else
													return 27.8164;
											}
											else
												return 48.2291;
										}
									}
									else
									{
										if(rsrp < -108.5)
										{
											if(sinr < 3.5)
											{
												if(payload < 9.5)
												{
													if(rsrp < -111.5)
													{
														if(velocity < 14.65)
														{
															if(cell < 13099785)
															{
																if(velocity < 8.92)
																	return 23.5294;
																else
																	return 19.4512;
															}
															else
																return 14.8089;
														}
														else
															return 29.138;
													}
													else
													{
														if(ta < 16.5)
														{
															if(payload < 7.5)
																return 13.1723;
															else
																return 5.57578;
														}
														else
														{
															if(rsrp < -109.5)
															{
																if(velocity < 11.25)
																{
																	if(rsrq < -7.5)
																	{
																		if(velocity < 8.235)
																		{
																			if(sinr < 2)
																				return 19.6754;
																			else
																			{
																				if(payload < 7)
																				{
																					if(cqi < 8.5)
																						return 17.2786;
																					else
																						return 11.4811;
																				}
																				else
																					return 19.0577;
																			}
																		}
																		else
																			return 15.2478;
																	}
																	else
																		return 7.67202;
																}
																else
																{
																	if(payload < 8)
																		return 21.9007;
																	else
																		return 25.4148;
																}
															}
															else
															{
																if(velocity < 5.655)
																	return 26.936;
																else
																	return 21.0416;
															}
														}
													}
												}
												else
													return 7.29528;
											}
											else
											{
												if(velocity < 0.38)
												{
													if(cell < 13392905)
													{
														if(payload < 7.5)
															return 15.1301666667;
														else
														{
															if(cqi < 8)
																return 20.3718;
															else
																return 18.4767333333;
														}
													}
													else
													{
														if(rsrp < -110.5)
															return 21.4549;
														else
														{
															if(rsrq < -8)
																return 27.3131;
															else
																return 30.9392;
														}
													}
												}
												else
												{
													if(cqi < 9.5)
													{
														if(rsrp < -109.5)
														{
															if(velocity < 14.465)
															{
																if(cqi < 7)
																	return 6.5538;
																else
																{
																	if(velocity < 13.595)
																	{
																		if(sinr < 4.5)
																			return 18.4403;
																		else
																		{
																			if(ta < 14.5)
																				return 14.7411;
																			else
																				return 10.8454666667;
																		}
																	}
																	else
																		return 24.7423;
																}
															}
															else
																return 10.5611;
														}
														else
															return 5.82189;
													}
													else
													{
														if(payload < 9.5)
														{
															if(rsrq < -9)
																return 5.29334;
															else
															{
																if(sinr < 6.5)
																{
																	if(sinr < 5)
																		return 4.77644;
																	else
																		return 6.83878;
																}
																else
																	return 8.98876;
															}
														}
														else
															return 17.3837;
													}
												}
											}
										}
										else
										{
											if(f < 2247.55)
											{
												if(velocity < 14.69)
												{
													if(cqi < 10.5)
													{
														if(payload < 9.5)
														{
															if(rsrp < -107.5)
															{
																if(cqi < 8.5)
																	return 24.2057;
																else
																{
																	if(sinr < 5.5)
																	{
																		if(cell < 13392905.5)
																			return 21.1921;
																		else
																			return 22.7273;
																	}
																	else
																		return 16.5494;
																}
															}
															else
															{
																if(cell < 13099786)
																	return 25.52635;
																else
																{
																	if(payload < 8)
																		return 28.2686;
																	else
																		return 30.4569;
																}
															}
														}
														else
														{
															if(sinr < 6)
																return 20.1258;
															else
																return 22.4845;
														}
													}
													else
													{
														if(rsrp < -105.5)
														{
															if(rsrp < -107.5)
																return 21.0112;
															else
															{
																if(cqi < 14.5)
																{
																	if(sinr < 5.5)
																		return 11.6831;
																	else
																		return 8.45368;
																}
																else
																	return 15.0447;
															}
														}
														else
														{
															if(cqi < 14.5)
															{
																if(cell < 13099786)
																	return 18.419;
																else
																	return 22.0994;
															}
															else
																return 23.902;
														}
													}
												}
												else
												{
													if(rsrp < -106.5)
														return 27.4207;
													else
														return 31.5706;
												}
											}
											else
											{
												if(velocity < 13.13)
													return 8.94454;
												else
												{
													if(rsrp < -106)
														return 21.4541;
													else
														return 16.2767;
												}
											}
										}
									}
								}
							}
							else
							{
								if(velocity < 12.765)
								{
									if(rsrq < -8.5)
									{
										if(payload < 5.5)
											return 4.01808;
										else
											return 6.04002;
									}
									else
										return 15.2497;
								}
								else
								{
									if(ta < 82.5)
									{
										if(f < 1362.55)
											return 2.9549575;
										else
											return 0.8180838;
									}
									else
									{
										if(rsrq < -8.5)
											return 4.18751;
										else
											return 2.20386;
									}
								}
							}
						}
					}
				}
				else
				{
					if(ta < 9.5)
					{
						if(payload < 0.75)
						{
							if(velocity < 14.475)
							{
								if(rsrp < -97.5)
									return 20.3097142857;
								else
								{
									if(payload < 0.3)
										return 22.8572;
									else
										return 21.6216;
								}
							}
							else
								return 9.19544;
						}
						else
						{
							if(payload < 7.5)
							{
								if(cqi < 6.5)
								{
									if(cell < 13394049.5)
									{
										if(payload < 6)
											return 45.1977;
										else
											return 53.1814;
									}
									else
									{
										if(payload < 5)
											return 35.5556;
										else
											return 31.3725;
									}
								}
								else
								{
									if(cqi < 13.5)
									{
										if(payload < 5.5)
										{
											if(rsrq < -8.5)
											{
												if(payload < 4.5)
												{
													if(payload < 1.5)
														return 26.654275;
													else
													{
														if(rsrp < -93)
														{
															if(velocity < 12.27)
																return 24.9052428571;
															else
																return 26.4682;
														}
														else
															return 22.7273;
													}
												}
												else
													return 22.2717;
											}
											else
											{
												if(sinr < 5)
												{
													if(ta < 4.5)
													{
														if(payload < 3)
															return 36.7816;
														else
															return 31.5582;
													}
													else
													{
														if(payload < 4)
															return 29.0764;
														else
															return 24.8139;
													}
												}
												else
												{
													if(ta < 6.5)
														return 33.0306;
													else
													{
														if(rsrp < -97)
															return 29.7398;
														else
															return 32.3887;
													}
												}
											}
										}
										else
										{
											if(velocity < 10.145)
											{
												if(payload < 6.5)
													return 31.8514;
												else
												{
													if(ta < 4.5)
														return 26.6921;
													else
														return 22.6812;
												}
											}
											else
											{
												if(payload < 6.5)
												{
													if(rsrq < -11.5)
														return 41.1664;
													else
														return 35.7942;
												}
												else
													return 52.6811;
											}
										}
									}
									else
									{
										if(ta < 6.5)
											return 37.5587;
										else
											return 41.3081;
									}
								}
							}
							else
							{
								if(f < 2247.55)
								{
									if(cell < 13098881.5)
										return 39.3314;
									else
									{
										if(rsrp < -101)
											return 12.9492;
										else
										{
											if(velocity < 12.185)
											{
												if(rsrp < -92.5)
												{
													if(cqi < 8.5)
													{
														if(sinr < 0.5)
															return 22.8136;
														else
															return 21.4985;
													}
													else
														return 25.5954;
												}
												else
													return 27.456;
											}
											else
												return 18.8679;
										}
									}
								}
								else
									return 42.6099;
							}
						}
					}
					else
					{
						if(payload < 0.75)
						{
							if(rsrq < -7.5)
							{
								if(sinr < -3.5)
									return 19.5122;
								else
								{
									if(cell < 13250945)
									{
										if(ta < 15.5)
											return 3.977435;
										else
											return 1.22508025;
									}
									else
									{
										if(sinr < 3)
										{
											if(velocity < 5.48)
												return 0.987658;
											else
											{
												if(rsrp < -97)
													return 5.2067666667;
												else
													return 7.33948;
											}
										}
										else
										{
											if(velocity < 11.46)
												return 11.5942;
											else
											{
												if(velocity < 12.92)
													return 4.7059;
												else
												{
													if(rsrp < -99.5)
														return 8.08084;
													else
														return 10.3359;
												}
											}
										}
									}
								}
							}
							else
							{
								if(sinr < 5.5)
									return 17.7778;
								else
								{
									if(rsrp < -98)
										return 13.4228;
									else
										return 10.0756;
								}
							}
						}
						else
						{
							if(cqi < 8.5)
							{
								if(cell < 12807947.5)
									return 31.3859;
								else
								{
									if(velocity < 14.7)
									{
										if(payload < 6.5)
										{
											if(cqi < 5.5)
												return 21.4938;
											else
											{
												if(rsrp < -96.5)
												{
													if(cqi < 7.5)
													{
														if(payload < 3)
															return 9.23254;
														else
															return 6.70292;
													}
													else
														return 11.6448;
												}
												else
												{
													if(velocity < 8.325)
														return 20.9333;
													else
														return 13.0293;
												}
											}
										}
										else
										{
											if(payload < 8)
											{
												if(ta < 17.5)
													return 2.57459;
												else
												{
													if(ta < 24.5)
														return 4.18566;
													else
														return 6.01827;
												}
											}
											else
											{
												if(rsrq < -11.5)
													return 20.1005;
												else
												{
													if(rsrq < -9.5)
														return 5.669194;
													else
														return 13.4363;
												}
											}
										}
									}
									else
									{
										if(ta < 14)
										{
											if(payload < 3.5)
												return 30.4569;
											else
											{
												if(payload < 4.5)
												{
													if(rsrp < -96)
														return 21.5054;
													else
														return 23.7741;
												}
												else
												{
													if(payload < 7.5)
														return 24.2571;
													else
														return 25.7152;
												}
											}
										}
										else
										{
											if(rsrq < -10.5)
											{
												if(payload < 5.5)
												{
													if(rsrp < -99.5)
														return 18.4332;
													else
														return 22.0588;
												}
												else
													return 36.7605;
											}
											else
											{
												if(cell < 12915847)
													return 15.7702;
												else
												{
													if(rsrp < -94.5)
														return 13.27885;
													else
														return 11.7743;
												}
											}
										}
									}
								}
							}
							else
							{
								if(payload < 9.5)
								{
									if(ta < 21)
									{
										if(payload < 5.5)
										{
											if(velocity < 16.365)
											{
												if(rsrq < -11.5)
													return 5.86081;
												else
												{
													if(payload < 2.5)
													{
														if(rsrp < -92.5)
															return 17.1559666667;
														else
															return 14.6119;
													}
													else
													{
														if(payload < 4)
															return 22.0791;
														else
															return 27.9525;
													}
												}
											}
											else
												return 30.7692;
										}
										else
										{
											if(cqi < 9.5)
											{
												if(rsrp < -95.5)
												{
													if(payload < 6.5)
														return 34.9091;
													else
														return 32.83642;
												}
												else
													return 44.4994;
											}
											else
											{
												if(rsrp < -102.5)
													return 13.5758;
												else
												{
													if(cell < 13099786)
														return 29.7275;
													else
														return 25.7305666667;
												}
											}
										}
									}
									else
									{
										if(cell < 13157125.5)
										{
											if(rsrq < -9)
												return 19.4766;
											else
											{
												if(rsrq < -7)
													return 24.7391;
												else
													return 23.1968;
											}
										}
										else
											return 4.76758;
									}
								}
								else
								{
									if(ta < 41.5)
										return 8.43526;
									else
										return 11.8151;
								}
							}
						}
					}
				}
			}
			else
			{
				if(ta < 12.5)
				{
					if(cell < 13473160.5)
					{
						if(cell < 13410693.5)
						{
							if(sinr < 4.5)
							{
								if(cqi < 4.5)
								{
									if(ta < 6.5)
										return 3.70499;
									else
										return 15.3994;
								}
								else
								{
									if(payload < 0.3)
										return 25.8066;
									else
									{
										if(cqi < 6.5)
										{
											if(payload < 9.5)
											{
												if(rsrp < -94.5)
												{
													if(rsrq < -12.5)
														return 17.9775;
													else
														return 20.2532;
												}
												else
													return 15.9808;
											}
											else
												return 28.6225;
										}
										else
										{
											if(velocity < 14)
											{
												if(cqi < 7.5)
													return 20.6186;
												else
												{
													if(ta < 6.5)
													{
														if(rsrp < -96)
															return 13.7991;
														else
															return 17.1215;
													}
													else
														return 12.4602333333;
												}
											}
											else
											{
												if(rsrp < -99)
													return 9.48804;
												else
												{
													if(cell < 13400833.5)
														return 10.0819;
													else
														return 12.1581;
												}
											}
										}
									}
								}
							}
							else
							{
								if(rsrq < -10.5)
									return 12.2699;
								else
									return 3.51844;
							}
						}
						else
						{
							if(rsrp < -99.5)
							{
								if(sinr < 1)
								{
									if(cqi < 4.5)
										return 3.17767;
									else
									{
										if(rsrq < -12)
											return 0.4625185;
										else
											return 1.84502;
									}
								}
								else
								{
									if(sinr < 2.5)
									{
										if(rsrq < -14)
											return 3.17839;
										else
											return 5.7653333333;
									}
									else
									{
										if(rsrq < -12.5)
										{
											if(sinr < 4)
												return 1.2307432;
											else
												return 4.8342;
										}
										else
										{
											if(ta < 10)
												return 3.0600016667;
											else
												return 6.46813;
										}
									}
								}
							}
							else
							{
								if(ta < 10)
								{
									if(rsrq < -10)
										return 9.90712;
									else
										return 16.7891;
								}
								else
									return 1.34262;
							}
						}
					}
					else
					{
						if(rsrp < -98.5)
						{
							if(sinr < 2.5)
							{
								if(payload < 5.5)
								{
									if(sinr < -0.5)
									{
										if(rsrp < -99.5)
										{
											if(payload < 1.5)
												return 5.9680525;
											else
											{
												if(ta < 7.5)
												{
													if(rsrq < -14.5)
														return 4.58243;
													else
													{
														if(ta < 6.5)
															return 6.70354;
														else
															return 4.9505;
													}
												}
												else
													return 2.14133;
											}
										}
										else
										{
											if(payload < 0.75)
											{
												if(sinr < -2)
													return 15.0943;
												else
													return 9.63859;
											}
											else
												return 4.21053;
										}
									}
									else
									{
										if(cqi < 5)
											return 8.28157;
										else
										{
											if(rsrq < -11.5)
												return 13.6054;
											else
												return 17.7778;
										}
									}
								}
								else
								{
									if(rsrq < -13.5)
									{
										if(payload < 8)
											return 18.4818;
										else
											return 30.5214;
									}
									else
									{
										if(payload < 8.5)
										{
											if(sinr < -3.5)
												return 9.03827;
											else
											{
												if(rsrq < -10.5)
													return 15.48605;
												else
													return 12.1951;
											}
										}
										else
										{
											if(rsrq < -12.5)
												return 18.7047;
											else
											{
												if(rsrp < -104.5)
													return 15.8873666667;
												else
													return 13.7268;
											}
										}
									}
								}
							}
							else
							{
								if(payload < 1.05)
									return 3.90245;
								else
								{
									if(payload < 5.5)
									{
										if(sinr < 3.5)
											return 20.915;
										else
										{
											if(rsrq < -10.5)
											{
												if(payload < 4)
													return 25.4237;
												else
													return 22.6501;
											}
											else
												return 25.4777;
										}
									}
									else
									{
										if(rsrp < -108)
										{
											if(sinr < 5)
												return 21.6655;
											else
												return 31.9107;
										}
										else
										{
											if(cell < 13681160)
											{
												if(cqi < 7.5)
													return 19.5122;
												else
													return 21.0804;
											}
											else
											{
												if(payload < 8.5)
													return 14.6482;
												else
													return 17.2674;
											}
										}
									}
								}
							}
						}
						else
						{
							if(payload < 6.5)
							{
								if(velocity < 11.88)
								{
									if(rsrp < -95.5)
									{
										if(rsrq < -9.5)
										{
											if(cqi < 6.5)
												return 21.3144;
											else
											{
												if(rsrp < -97.5)
													return 28.23672;
												else
												{
													if(payload < 1.5)
														return 28.0702;
													else
														return 26.5669666667;
												}
											}
										}
										else
										{
											if(ta < 8.5)
											{
												if(rsrq < -8)
													return 15.6326;
												else
													return 13.9373;
											}
											else
											{
												if(sinr < 2.5)
													return 25.974;
												else
												{
													if(payload < 3.5)
														return 22.0662666667;
													else
														return 24.1327;
												}
											}
										}
									}
									else
									{
										if(rsrq < -10.5)
										{
											if(velocity < 1.45)
											{
												if(cell < 13681153)
												{
													if(rsrp < -94.5)
														return 12.8617;
													else
													{
														if(sinr < 1.5)
															return 19.4293;
														else
															return 17.3661;
													}
												}
												else
													return 24.5399;
											}
											else
											{
												if(cell < 13681153.5)
													return 20.7254;
												else
												{
													if(sinr < 2)
														return 11.3933;
													else
														return 8.08084;
												}
											}
										}
										else
										{
											if(sinr < 1.5)
											{
												if(velocity < 6.37)
													return 25.74;
												else
													return 22.8702;
											}
											else
												return 29.5203;
										}
									}
								}
								else
								{
									if(rsrq < -11.5)
									{
										if(velocity < 15.11)
											return 24.56755;
										else
											return 33.9943;
									}
									else
									{
										if(cell < 13681154)
										{
											if(payload < 2)
											{
												if(rsrq < -10)
													return 8.94855;
												else
													return 5.16129;
											}
											else
											{
												if(rsrq < -9.5)
													return 20.0501;
												else
													return 14.3284;
											}
										}
										else
										{
											if(velocity < 12.99)
												return 10.8109;
											else
												return 7.18348;
										}
									}
								}
							}
							else
							{
								if(ta < 5.5)
								{
									if(payload < 9)
										return 51.4469;
									else
										return 47.8755;
								}
								else
								{
									if(rsrp < -94.5)
										return 37.02416;
									else
									{
										if(cell < 13532419)
										{
											if(velocity < 10.495)
											{
												if(cqi < 8)
												{
													if(sinr < 1.5)
														return 18.2815;
													else
														return 22.0083;
												}
												else
													return 32.9606;
											}
											else
												return 55.088;
										}
										else
										{
											if(rsrq < -9.5)
												return 23.4801;
											else
												return 16.609;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if(ta < 33.5)
					{
						if(rsrp < -98.5)
						{
							if(cell < 13527938)
							{
								if(rsrq < -21)
								{
									if(cqi < 0.5)
										return 9.75907;
									else
										return 8.35073;
								}
								else
								{
									if(payload < 0.75)
									{
										if(rsrp < -109.5)
											return 0.3727452143;
										else
										{
											if(rsrq < -15.5)
												return 2.57069;
											else
											{
												if(rsrp < -106.5)
												{
													if(sinr < -0.5)
													{
														if(ta < 17.5)
															return 0.257153;
														else
															return 2.066535;
													}
													else
														return 0.3454353333;
												}
												else
													return 0.6048032105;
											}
										}
									}
									else
									{
										if(sinr < -5.5)
										{
											if(rsrp < -110.5)
											{
												if(ta < 24.5)
													return 0.809123875;
												else
												{
													if(velocity < 21.245)
														return 3.72787;
													else
														return 1.0993165;
												}
											}
											else
											{
												if(cell < 13415298)
												{
													if(ta < 18.5)
														return 0.236131;
													else
													{
														if(sinr < -8.5)
															return 2.85012;
														else
															return 4.49438;
													}
												}
												else
													return 1.3512886316;
											}
										}
										else
										{
											if(rsrq < -13.5)
											{
												if(cell < 13415426.5)
												{
													if(cqi < 5.5)
													{
														if(payload < 3.5)
															return 0.403440875;
														else
														{
															if(sinr < -3)
																return 0.703854;
															else
																return 2.38735;
														}
													}
													else
													{
														if(velocity < 16.64)
														{
															if(ta < 15)
															{
																if(rsrq < -14.5)
																	return 1.7875633333;
																else
																{
																	if(sinr < -1.5)
																		return 4.25193;
																	else
																	{
																		if(ta < 13.5)
																			return 2.4605466667;
																		else
																			return 0.99309;
																	}
																}
															}
															else
															{
																if(ta < 19)
																{
																	if(payload < 9)
																		return 4.0741;
																	else
																		return 5.49526;
																}
																else
																	return 2.53598;
															}
														}
														else
															return 1.100114625;
													}
												}
												else
												{
													if(ta < 26)
													{
														if(payload < 6.5)
														{
															if(payload < 5.5)
															{
																if(velocity < 15.745)
																{
																	if(rsrp < -115.5)
																		return 3.58905;
																	else
																		return 1.4510005;
																}
																else
																{
																	if(cell < 13416323)
																	{
																		if(payload < 3)
																			return 0.966651;
																		else
																			return 2.5083466667;
																	}
																	else
																		return 3.9163725;
																}
															}
															else
																return 1.380744;
														}
														else
														{
															if(velocity < 14.82)
															{
																if(rsrp < -108)
																	return 2.07469;
																else
																	return 3.7144233333;
															}
															else
															{
																if(payload < 7.5)
																	return 11.6861;
																else
																{
																	if(velocity < 29.865)
																		return 6.603725;
																	else
																		return 1.852175;
																}
															}
														}
													}
													else
													{
														if(payload < 5.5)
															return 4.87033;
														else
															return 6.46465;
													}
												}
											}
											else
											{
												if(ta < 25.5)
												{
													if(rsrp < -101.5)
													{
														if(rsrp < -105.5)
														{
															if(ta < 20.5)
															{
																if(payload < 6)
																{
																	if(rsrp < -112.5)
																		return 0.67701;
																	else
																	{
																		if(rsrp < -106.5)
																			return 2.295625;
																		else
																			return 1.13973;
																	}
																}
																else
																{
																	if(payload < 8.5)
																	{
																		if(payload < 7.5)
																			return 5.89846;
																		else
																			return 4.09836;
																	}
																	else
																		return 2.473175;
																}
															}
															else
																return 1.3883903158;
														}
														else
														{
															if(payload < 4.5)
															{
																if(payload < 2.5)
																{
																	if(sinr < 4.5)
																		return 2.7617128571;
																	else
																		return 0.772872;
																}
																else
																	return 1.1026622;
															}
															else
															{
																if(velocity < 18.64)
																{
																	if(sinr < 0.5)
																	{
																		if(sinr < -1.5)
																			return 4.35866;
																		else
																			return 7.34113;
																	}
																	else
																	{
																		if(velocity < 14.61)
																		{
																			if(ta < 17.5)
																				return 3.26557;
																			else
																				return 5.34474;
																		}
																		else
																			return 2.77321;
																	}
																}
																else
																{
																	if(payload < 6)
																		return 3.741115;
																	else
																	{
																		if(rsrq < -11.5)
																			return 4.99376;
																		else
																			return 6.40514;
																	}
																}
															}
														}
													}
													else
													{
														if(velocity < 15.87)
														{
															if(ta < 18)
															{
																if(rsrp < -100.5)
																	return 7.62268;
																else
																{
																	if(rsrq < -12.5)
																		return 5.64352;
																	else
																		return 7.7821;
																}
															}
															else
															{
																if(rsrp < -100)
																	return 15.1286;
																else
																	return 10.7383;
															}
														}
														else
														{
															if(ta < 16.5)
																return 1.5348032;
															else
																return 3.54531;
														}
													}
												}
												else
												{
													if(sinr < 1)
														return 5.5197871429;
													else
														return 7.52115;
												}
											}
										}
									}
								}
							}
							else
							{
								if(velocity < 12.16)
								{
									if(payload < 3.5)
									{
										if(ta < 21)
										{
											if(rsrp < -111.5)
												return 0.979792;
											else
												return 2.545456;
										}
										else
											return 0.295989;
									}
									else
									{
										if(cell < 13532419)
											return 3.3841125;
										else
										{
											if(payload < 8.5)
											{
												if(rsrq < -11)
												{
													if(cqi < 3)
													{
														if(payload < 7.5)
															return 10.5621;
														else
															return 11.7799;
													}
													else
														return 8.81057;
												}
												else
													return 6.85225;
											}
											else
												return 2.37154;
										}
									}
								}
								else
									return 18.7647;
							}
						}
						else
						{
							if(cqi < 8.5)
							{
								if(cell < 13528066.5)
								{
									if(rsrq < -10)
									{
										if(ta < 22.5)
										{
											if(sinr < -7)
											{
												if(cqi < 5)
												{
													if(payload < 6.5)
														return 3.43249;
													else
														return 1.39126;
												}
												else
													return 0.967235;
											}
											else
											{
												if(payload < 4.5)
													return 4.12814;
												else
												{
													if(payload < 7.5)
														return 7.84621;
													else
														return 6.49403;
												}
											}
										}
										else
										{
											if(ta < 23.5)
												return 0.6692826667;
											else
											{
												if(sinr < 0.5)
													return 5.76618;
												else
													return 4.49871;
											}
										}
									}
									else
									{
										if(sinr < 4.5)
										{
											if(ta < 21)
											{
												if(payload < 6.5)
												{
													if(rsrp < -92.5)
													{
														if(sinr < 1.5)
															return 5.6989225;
														else
															return 3.79867;
													}
													else
														return 2.26565;
												}
												else
													return 9.21423;
											}
											else
												return 14.1343;
										}
										else
											return 14.7574;
									}
								}
								else
									return 19.0153;
							}
							else
							{
								if(velocity < 37.48)
								{
									if(rsrp < -95.5)
									{
										if(cell < 13416323)
										{
											if(payload < 6.5)
											{
												if(cqi < 9.5)
													return 4.44259;
												else
													return 7.25624;
											}
											else
											{
												if(rsrq < -11)
													return 1.31974;
												else
													return 2.57631;
											}
										}
										else
										{
											if(velocity < 14.275)
											{
												if(ta < 20)
													return 12.987;
												else
													return 0.300349;
											}
											else
											{
												if(velocity < 14.62)
													return 24.3531;
												else
												{
													if(ta < 22)
														return 14.6681;
													else
														return 12.0789333333;
												}
											}
										}
									}
									else
									{
										if(payload < 0.55)
											return 1.16619;
										else
										{
											if(velocity < 16.745)
											{
												if(rsrq < -12.5)
													return 9.49893;
												else
												{
													if(cell < 13470467)
													{
														if(sinr < 6)
															return 17.06495;
														else
															return 14.7965;
													}
													else
														return 20.8062;
												}
											}
											else
											{
												if(ta < 27.5)
													return 10.3093;
												else
													return 13.4003;
											}
										}
									}
								}
								else
									return 24.3439;
							}
						}
					}
					else
					{
						if(velocity < 31.425)
						{
							if(cqi < 6.5)
							{
								if(velocity < 23.655)
								{
									if(velocity < 16.665)
										return 3.32818;
									else
										return 1.67609;
								}
								else
									return 5.76191;
							}
							else
								return 14.2349;
						}
						else
						{
							if(velocity < 33.125)
							{
								if(payload < 6.5)
									return 28.5459;
								else
									return 41.0959;
							}
							else
							{
								if(rsrp < -100)
								{
									if(ta < 34.5)
										return 23.988;
									else
										return 22.0907;
								}
								else
								{
									if(payload < 3.5)
										return 1.73913;
									else
										return 17.1858;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			if(cell < 13394823)
			{
				if(cqi < 7.5)
				{
					if(cqi < 1.5)
					{
						if(ta < 15)
						{
							if(payload < 2.5)
								return 30.6513;
							else
								return 35.1262;
						}
						else
						{
							if(rsrq < -9.5)
								return 26.4354;
							else
							{
								if(sinr < 18.5)
									return 23.9521;
								else
									return 21.5054;
							}
						}
					}
					else
					{
						if(cell < 13392905.5)
						{
							if(ta < 44.5)
							{
								if(payload < 0.55)
								{
									if(ta < 11.5)
										return 8.51067;
									else
										return 6.89658;
								}
								else
								{
									if(cqi < 3.5)
										return 24.3161;
									else
									{
										if(rsrp < -109.5)
											return 10.8592;
										else
										{
											if(rsrp < -105)
											{
												if(rsrp < -107.5)
													return 15.2091;
												else
													return 28.643;
											}
											else
											{
												if(cell < 13323909)
												{
													if(rsrp < -101)
														return 13.3156;
													else
														return 11.6378333333;
												}
												else
													return 20.592;
											}
										}
									}
								}
							}
							else
								return 4.3483;
						}
						else
						{
							if(rsrp < -98.5)
								return 2.146;
							else
								return 14.8392;
						}
					}
				}
				else
				{
					if(rsrp < -105.5)
					{
						if(velocity < 15.46)
						{
							if(cqi < 8.5)
							{
								if(velocity < 6.845)
								{
									if(payload < 5.5)
									{
										if(sinr < 12)
											return 22.2222;
										else
											return 24.8447;
									}
									else
										return 29.1616;
								}
								else
								{
									if(sinr < 11.5)
									{
										if(velocity < 13.365)
											return 32.1429;
										else
											return 29.9465;
									}
									else
										return 38.4615;
								}
							}
							else
							{
								if(payload < 0.3)
								{
									if(rsrp < -110)
										return 16.0001;
									else
										return 12.5;
								}
								else
								{
									if(cqi < 13.5)
									{
										if(rsrp < -109.5)
										{
											if(velocity < 12.735)
											{
												if(payload < 3.5)
													return 14.4144;
												else
												{
													if(velocity < 12.61)
														return 25.2924;
													else
														return 20.5656;
												}
											}
											else
											{
												if(rsrq < -8.5)
													return 35.9147;
												else
													return 29.1041;
											}
										}
										else
										{
											if(payload < 5.5)
											{
												if(cqi < 9.5)
												{
													if(payload < 2)
														return 17.0213;
													else
														return 33.6606;
												}
												else
												{
													if(ta < 44)
														return 18.73031;
													else
														return 21.4286;
												}
											}
											else
											{
												if(ta < 16.5)
												{
													if(rsrq < -9)
														return 6.80055;
													else
														return 9.98129;
												}
												else
												{
													if(sinr < 8.5)
														return 11.4213;
													else
													{
														if(rsrp < -108)
															return 20.2212;
														else
															return 15.0991;
													}
												}
											}
										}
									}
									else
									{
										if(velocity < 4.395)
										{
											if(sinr < 12.5)
												return 32.7065;
											else
												return 26.6667;
										}
										else
										{
											if(payload < 3)
												return 21.019;
											else
											{
												if(velocity < 8.55)
													return 18.7463;
												else
												{
													if(rsrq < -7.5)
														return 31.2256;
													else
														return 27.8054;
												}
											}
										}
									}
								}
							}
						}
						else
						{
							if(rsrp < -113)
								return 2.72294;
							else
								return 1.43123;
						}
					}
					else
					{
						if(rsrq < -7.5)
						{
							if(rsrq < -8.5)
							{
								if(payload < 0.75)
								{
									if(payload < 0.3)
										return 6.72271;
									else
										return 11.2676;
								}
								else
								{
									if(sinr < 11.5)
									{
										if(sinr < 9.5)
										{
											if(ta < 43.5)
											{
												if(rsrq < -10.5)
												{
													if(ta < 6.5)
														return 24.6407;
													else
														return 30.1887;
												}
												else
													return 31.3611;
											}
											else
												return 22.2841;
										}
										else
										{
											if(velocity < 12.915)
											{
												if(cell < 12914565.5)
												{
													if(rsrp < -102.5)
														return 43.2173;
													else
														return 59.5041;
												}
												else
												{
													if(velocity < 11.72)
													{
														if(cell < 13230598)
															return 36.4748;
														else
															return 34.0426;
													}
													else
														return 39.5257;
												}
											}
											else
											{
												if(rsrp < -103)
													return 32.4826;
												else
												{
													if(rsrq < -9.5)
														return 31.7618;
													else
														return 25.1309;
												}
											}
										}
									}
									else
									{
										if(cell < 12985097.5)
										{
											if(cqi < 13)
											{
												if(payload < 3.5)
													return 32.4324;
												else
												{
													if(rsrp < -102.5)
													{
														if(sinr < 15)
														{
															if(sinr < 13)
																return 27.9163;
															else
																return 29.2581;
														}
														else
															return 22.679;
													}
													else
														return 29.56285;
												}
											}
											else
												return 33.4728;
										}
										else
										{
											if(rsrp < -99)
												return 11.4695;
											else
												return 15.6098;
										}
									}
								}
							}
							else
							{
								if(rsrp < -103.5)
								{
									if(velocity < 14.57)
									{
										if(sinr < 9)
										{
											if(cqi < 9)
												return 23.4949;
											else
												return 13.7274;
										}
										else
										{
											if(rsrp < -104.5)
											{
												if(sinr < 12)
													return 10.5264;
												else
													return 8.00003;
											}
											else
											{
												if(sinr < 21.5)
													return 18.5185;
												else
													return 14.0351;
											}
										}
									}
									else
										return 37.5783;
								}
								else
								{
									if(ta < 17.5)
									{
										if(f < 1362.55)
										{
											if(cqi < 10)
												return 43.1558;
											else
												return 50;
										}
										else
										{
											if(sinr < 10.5)
											{
												if(payload < 2.5)
													return 14.2476;
												else
												{
													if(cqi < 13.5)
													{
														if(payload < 7)
															return 20.3132;
														else
															return 25.4676;
													}
													else
														return 22.2017;
												}
											}
											else
											{
												if(velocity < 12.825)
												{
													if(sinr < 20.5)
													{
														if(cqi < 10.5)
														{
															if(ta < 11)
																return 23.4742;
															else
																return 24.666;
														}
														else
														{
															if(payload < 5.05)
																return 13.1148;
															else
																return 15.1831;
														}
													}
													else
													{
														if(velocity < 5.06)
															return 22.2222;
														else
															return 42.1369;
													}
												}
												else
												{
													if(velocity < 14.785)
													{
														if(sinr < 12)
															return 35.1906;
														else
														{
															if(payload < 8.5)
																return 36.386775;
															else
																return 38.0409;
														}
													}
													else
													{
														if(rsrp < -100.5)
															return 33.7909;
														else
															return 31.4806;
													}
												}
											}
										}
									}
									else
									{
										if(payload < 1.25)
											return 6.06061;
										else
										{
											if(velocity < 13.08)
											{
												if(cqi < 14)
												{
													if(ta < 44.5)
														return 21.4765;
													else
													{
														if(payload < 5)
															return 20.4082;
														else
															return 16.632;
													}
												}
												else
													return 25.5428;
											}
											else
												return 9.29152;
										}
									}
								}
							}
						}
						else
						{
							if(payload < 6.5)
							{
								if(cqi < 14.5)
								{
									if(velocity < 12.5)
									{
										if(cqi < 11.5)
										{
											if(rsrp < -104.5)
											{
												if(payload < 5)
													return 17.1951;
												else
													return 20.1005;
											}
											else
											{
												if(cell < 13394061.5)
												{
													if(sinr < 16)
													{
														if(ta < 12)
														{
															if(payload < 1.5)
																return 27.2109;
															else
															{
																if(sinr < 9)
																	return 36.9515;
																else
																	return 31.42194;
															}
														}
														else
															return 27.8746;
													}
													else
													{
														if(cqi < 10)
															return 19.8388;
														else
															return 25.417;
													}
												}
												else
													return 39.604;
											}
										}
										else
										{
											if(cqi < 12.5)
											{
												if(rsrp < -94.5)
												{
													if(rsrq < -6.5)
														return 65.0407;
													else
														return 61.4439;
												}
												else
												{
													if(sinr < 16)
														return 41.365;
													else
														return 39.604;
												}
											}
											else
											{
												if(f < 2247.55)
												{
													if(rsrp < -92.5)
													{
														if(payload < 2.75)
															return 25.3165;
														else
															return 28.6944;
													}
													else
														return 37.325;
												}
												else
												{
													if(sinr < 22.5)
													{
														if(sinr < 15)
															return 49.0196;
														else
															return 44.7761;
													}
													else
														return 32.5998;
												}
											}
										}
									}
									else
									{
										if(cqi < 8.5)
											return 56.2588;
										else
										{
											if(payload < 0.3)
												return 6.5574;
											else
											{
												if(rsrp < -103.5)
												{
													if(sinr < 14)
													{
														if(sinr < 9.5)
															return 28.1442;
														else
															return 30.1887;
													}
													else
														return 23.1214;
												}
												else
												{
													if(ta < 43.5)
													{
														if(cell < 13392905.5)
														{
															if(velocity < 12.825)
																return 14.733;
															else
															{
																if(velocity < 15.375)
																{
																	if(sinr < 9)
																		return 20;
																	else
																	{
																		if(ta < 10.5)
																			return 19.802;
																		else
																			return 21.47665;
																	}
																}
																else
																{
																	if(payload < 4)
																		return 13.5478;
																	else
																		return 20.9607;
																}
															}
														}
														else
															return 27.4286;
													}
													else
													{
														if(sinr < 11.5)
															return 22.9665;
														else
														{
															if(rsrq < -6.5)
																return 9.61307;
															else
																return 11.1111;
														}
													}
												}
											}
										}
									}
								}
								else
								{
									if(sinr < 13.5)
									{
										if(velocity < 5.345)
											return 17.7148;
										else
										{
											if(rsrp < -94.5)
											{
												if(rsrp < -99.5)
													return 38.9105;
												else
													return 35.2423;
											}
											else
												return 21.7687;
										}
									}
									else
									{
										if(payload < 1.05)
											return 133.334;
										else
										{
											if(velocity < 6.085)
											{
												if(sinr < 25)
												{
													if(payload < 4)
														return 42.1053;
													else
													{
														if(payload < 5.5)
															return 62.7943;
														else
															return 55.9441;
													}
												}
												else
													return 30.1318;
											}
											else
											{
												if(velocity < 13.385)
												{
													if(sinr < 18)
														return 28.9516;
													else
														return 25.0391;
												}
												else
													return 45.3686;
											}
										}
									}
								}
							}
							else
							{
								if(velocity < 8.135)
								{
									if(sinr < 12)
										return 32.2418;
									else
									{
										if(sinr < 15.5)
										{
											if(rsrq < -6.5)
												return 50.27485;
											else
											{
												if(sinr < 14.5)
													return 40.8627;
												else
													return 44.6927;
											}
										}
										else
											return 60.6061;
									}
								}
								else
								{
									if(ta < 70.5)
									{
										if(sinr < 17)
										{
											if(cqi < 13)
											{
												if(velocity < 9.315)
													return 34.188;
												else
												{
													if(sinr < 11.5)
													{
														if(payload < 7.5)
															return 23.8501;
														else
														{
															if(cqi < 10.5)
																return 30.6122;
															else
																return 33.3333;
														}
													}
													else
													{
														if(cqi < 10.5)
															return 23.6223;
														else
															return 20.0501;
													}
												}
											}
											else
											{
												if(cell < 13284614.5)
												{
													if(cell < 13121290)
														return 39.5648;
													else
													{
														if(rsrp < -92.5)
															return 36.6013;
														else
															return 31.5138;
													}
												}
												else
													return 27.3839;
											}
										}
										else
										{
											if(sinr < 28)
											{
												if(sinr < 21.5)
													return 58.9474;
												else
												{
													if(rsrp < -96.5)
														return 41.8945666667;
													else
														return 48.401;
												}
											}
											else
											{
												if(payload < 9)
													return 22.5352;
												else
													return 21.0084;
											}
										}
									}
									else
										return 49.3489;
								}
							}
						}
					}
				}
			}
			else
			{
				if(cell < 13532162.5)
				{
					if(f < 1362.55)
					{
						if(rsrp < -97.5)
						{
							if(ta < 17)
							{
								if(ta < 6.5)
								{
									if(payload < 6)
										return 6.28437;
									else
										return 3.13529;
								}
								else
									return 1.4201364286;
							}
							else
							{
								if(rsrp < -99.5)
								{
									if(cqi < 9)
									{
										if(payload < 0.75)
											return 7.33453;
										else
											return 5.56752;
									}
									else
										return 13.7457;
								}
								else
								{
									if(cqi < 9.5)
										return 19.7477;
									else
									{
										if(payload < 7)
											return 13.2231;
										else
											return 11.0619;
									}
								}
							}
						}
						else
						{
							if(cqi < 10.5)
							{
								if(payload < 9.5)
								{
									if(velocity < 11.525)
									{
										if(cqi < 9)
											return 18.1818;
										else
											return 22.3464;
									}
									else
									{
										if(rsrq < -9.5)
										{
											if(sinr < 9)
											{
												if(payload < 6.5)
													return 10.2729;
												else
													return 8.26636;
											}
											else
											{
												if(payload < 5)
													return 14.1677;
												else
													return 15.6556;
											}
										}
										else
										{
											if(velocity < 16.415)
											{
												if(cqi < 9.5)
												{
													if(ta < 7.5)
														return 20.3046;
													else
													{
														if(payload < 8.5)
															return 16.9671;
														else
															return 18.9026;
													}
												}
												else
													return 15.4291;
											}
											else
											{
												if(sinr < 14.5)
													return 22.7201;
												else
													return 21.3832;
											}
										}
									}
								}
								else
								{
									if(velocity < 17.575)
										return 8.357508;
									else
										return 14.2908;
								}
							}
							else
							{
								if(rsrq < -6.5)
								{
									if(ta < 20.5)
									{
										if(rsrq < -12.5)
											return 9.52385;
										else
										{
											if(rsrp < -94.5)
												return 14.6982;
											else
												return 12.9231;
										}
									}
									else
									{
										if(rsrq < -9.5)
											return 8.90472;
										else
											return 10.6484;
									}
								}
								else
								{
									if(ta < 26)
										return 9.53516;
									else
										return 6.75533;
								}
							}
						}
					}
					else
						return 29.1262;
				}
				else
				{
					if(cqi < 9.5)
					{
						if(sinr < 9.5)
						{
							if(rsrp < -98)
								return 8.9888;
							else
								return 5.66653;
						}
						else
						{
							if(cqi < 7.5)
								return 19.5462;
							else
							{
								if(payload < 4.5)
								{
									if(rsrq < -8.5)
										return 24.8062;
									else
										return 26.8156;
								}
								else
								{
									if(velocity < 4.825)
									{
										if(payload < 8)
											return 30.4569;
										else
											return 24.1619;
									}
									else
										return 30.1091;
								}
							}
						}
					}
					else
					{
						if(sinr < 18)
						{
							if(cqi < 11.5)
							{
								if(payload < 5)
								{
									if(rsrq < -8.5)
										return 31.4961;
									else
										return 27.6817;
								}
								else
								{
									if(sinr < 12.5)
									{
										if(cqi < 10.5)
										{
											if(payload < 8.5)
												return 35.0219;
											else
												return 27.3038;
										}
										else
											return 32.8205;
									}
									else
										return 40.201;
								}
							}
							else
							{
								if(rsrp < -104)
									return 29.1971;
								else
								{
									if(velocity < 4.375)
										return 15.444;
									else
										return 10.1266;
								}
							}
						}
						else
						{
							if(velocity < 14.08)
							{
								if(rsrp < -107.5)
									return 5.64687;
								else
								{
									if(rsrp < -97.5)
										return 42.6099;
									else
										return 45.4545;
								}
							}
							else
							{
								if(rsrp < -98)
									return 48.7805;
								else
									return 43.8356;
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if(sinr < 15.5)
		{
			if(ta < 10.5)
			{
				if(cell < 13394190)
				{
					if(cell < 13393413)
					{
						if(cell < 13175305.5)
						{
							if(rsrp < -63.5)
							{
								if(payload < 0.75)
								{
									if(rsrp < -89.5)
										return 19.5123;
									else
									{
										if(rsrq < -7.5)
											return 9.87658;
										else
										{
											if(cqi < 13.5)
											{
												if(ta < 7.5)
													return 17.7778;
												else
													return 14.8649;
											}
											else
												return 11.9048;
										}
									}
								}
								else
								{
									if(cell < 13175298.5)
									{
										if(rsrp < -69.5)
										{
											if(velocity < 4.22)
											{
												if(rsrq < -8.5)
													return 18.412;
												else
												{
													if(velocity < 0.295)
													{
														if(rsrq < -7.5)
														{
															if(f < 1362.55)
																return 48.6322;
															else
																return 42.7807;
														}
														else
														{
															if(sinr < 11.5)
																return 31.4548;
															else
																return 38.2775;
														}
													}
													else
														return 62.7451;
												}
											}
											else
											{
												if(cqi < 8.5)
												{
													if(ta < 5.5)
														return 32.3596;
													else
													{
														if(payload < 2.5)
															return 10.2367;
														else
															return 14.824;
													}
												}
												else
												{
													if(velocity < 10.695)
													{
														if(rsrp < -86.5)
															return 14.892;
														else
														{
															if(sinr < 13.5)
																return 24.7966;
															else
																return 32.3887;
														}
													}
													else
													{
														if(velocity < 12.98)
														{
															if(cell < 12973569.5)
															{
																if(rsrp < -90)
																	return 43.956;
																else
																	return 40.52115;
															}
															else
																return 51.9106;
														}
														else
														{
															if(payload < 3.5)
															{
																if(ta < 5)
																	return 36.8098;
																else
																	return 45.977;
															}
															else
															{
																if(rsrp < -80)
																	return 26.4576333333;
																else
																	return 33.2295;
															}
														}
													}
												}
											}
										}
										else
										{
											if(rsrq < -6.5)
												return 24.59886;
											else
												return 29.0909;
										}
									}
									else
									{
										if(payload < 5.5)
										{
											if(payload < 3)
												return 55.1724;
											else
											{
												if(rsrp < -88.5)
													return 45.2617;
												else
													return 40.8137;
											}
										}
										else
										{
											if(payload < 6.5)
												return 68.3761;
											else
											{
												if(payload < 8)
													return 57.4359;
												else
													return 51.7613;
											}
										}
									}
								}
							}
							else
							{
								if(rsrq < -6.5)
									return 62.3608;
								else
									return 64.3863;
							}
						}
						else
						{
							if(f < 2247.55)
							{
								if(rsrp < -71.5)
								{
									if(payload < 2)
									{
										if(rsrq < -5.5)
										{
											if(sinr < 9)
											{
												if(payload < 0.3)
												{
													if(velocity < 11.885)
														return 14.6901;
													else
														return 13.3371;
												}
												else
													return 11.1111;
											}
											else
											{
												if(cqi < 6.5)
													return 15.9681;
												else
													return 19.4175;
											}
										}
										else
											return 10.8109;
									}
									else
									{
										if(sinr < 9.5)
										{
											if(rsrp < -87)
											{
												if(cqi < 12.5)
												{
													if(payload < 5)
														return 22.4561;
													else
														return 24.3161;
												}
												else
													return 30.0188;
											}
											else
												return 36.7816;
										}
										else
										{
											if(velocity < 11.42)
											{
												if(cqi < 10.5)
													return 42.735;
												else
												{
													if(velocity < 4.355)
														return 41.4508;
													else
														return 38.2775;
												}
											}
											else
												return 36.2908666667;
										}
									}
								}
								else
									return 59.3142;
							}
							else
								return 79.7342;
						}
					}
					else
					{
						if(velocity < 11.72)
						{
							if(velocity < 5.995)
							{
								if(payload < 3.5)
								{
									if(cqi < 11.5)
									{
										if(rsrp < -84.5)
											return 20.5128;
										else
											return 29.4118;
									}
									else
										return 9.19544;
								}
								else
								{
									if(cqi < 10.5)
										return 51.30375;
									else
										return 53.3333;
								}
							}
							else
							{
								if(payload < 5.5)
								{
									if(velocity < 7.98)
										return 54.4218;
									else
										return 44.1989;
								}
								else
								{
									if(rsrq < -6.5)
									{
										if(cell < 13394178)
										{
											if(rsrq < -7.5)
												return 63.6605;
											else
											{
												if(sinr < 7.5)
													return 71.8563;
												else
												{
													if(ta < 4.5)
														return 68.2012;
													else
														return 69.6517;
												}
											}
										}
										else
											return 82.1566;
									}
									else
										return 42.2323;
								}
							}
						}
						else
						{
							if(cell < 13394184)
							{
								if(sinr < 13.5)
								{
									if(rsrq < -8.5)
									{
										if(rsrp < -85.5)
										{
											if(rsrp < -89)
												return 43.214;
											else
												return 53.5714;
										}
										else
											return 38.0048;
									}
									else
									{
										if(payload < 9.5)
										{
											if(velocity < 12.705)
											{
												if(payload < 7.5)
												{
													if(cqi < 8.5)
														return 29.5749;
													else
														return 33.688475;
												}
												else
													return 36.9302;
											}
											else
											{
												if(payload < 5.5)
													return 42.2741;
												else
												{
													if(payload < 8)
													{
														if(rsrp < -83)
															return 35.6461;
														else
															return 39.7727;
													}
													else
														return 40.6321;
												}
											}
										}
										else
											return 53.7634;
									}
								}
								else
								{
									if(ta < 7.5)
									{
										if(rsrq < -5.5)
										{
											if(rsrp < -84)
												return 28.9855;
											else
												return 32.8317;
										}
										else
										{
											if(sinr < 14.5)
												return 19.4175;
											else
												return 22.4719;
										}
									}
									else
										return 47.5248;
								}
							}
							else
								return 48.7805;
						}
					}
				}
				else
				{
					if(payload < 0.75)
					{
						if(velocity < 8.97)
						{
							if(sinr < 13)
								return 15.4187;
							else
								return 13.5594;
						}
						else
						{
							if(cell < 13400833.5)
							{
								if(sinr < 11)
									return 5.7703333333;
								else
									return 10;
							}
							else
							{
								if(rsrp < -86.5)
									return 6.74536;
								else
								{
									if(rsrp < -84)
										return 14.0845;
									else
										return 12.5;
								}
							}
						}
					}
					else
					{
						if(rsrq < -9.5)
						{
							if(cell < 13530766)
							{
								if(sinr < 11)
								{
									if(velocity < 7.33)
									{
										if(rsrp < -78.5)
										{
											if(sinr < 9)
												return 20.7164;
											else
												return 19.1847;
										}
										else
											return 14.9743;
									}
									else
									{
										if(ta < 7)
										{
											if(sinr < 8.5)
												return 32.0213;
											else
												return 29.6296;
										}
										else
											return 23.7301;
									}
								}
								else
									return 6.62252;
							}
							else
							{
								if(velocity < 13.865)
								{
									if(payload < 7.5)
										return 14.0633;
									else
										return 18.2492;
								}
								else
									return 7.35069;
							}
						}
						else
						{
							if(cell < 13400833.5)
							{
								if(rsrp < -83)
								{
									if(cqi < 7.5)
									{
										if(cell < 13395457.5)
											return 25.9319;
										else
											return 15.9151;
									}
									else
									{
										if(rsrp < -90)
											return 19.0749;
										else
										{
											if(payload < 4.5)
												return 30.0752;
											else
											{
												if(rsrq < -7.5)
													return 35.488;
												else
													return 39.768;
											}
										}
									}
								}
								else
								{
									if(sinr < 13)
									{
										if(ta < 5.5)
											return 23.166;
										else
										{
											if(payload < 4)
												return 5.7971;
											else
												return 9.375;
										}
									}
									else
									{
										if(payload < 3)
											return 26.2295;
										else
											return 24.0385;
									}
								}
							}
							else
							{
								if(payload < 1.5)
								{
									if(cqi < 11.5)
									{
										if(ta < 4.5)
										{
											if(sinr < 1)
												return 8.29876;
											else
												return 13.0293;
										}
										else
										{
											if(ta < 7)
												return 29.1971;
											else
												return 24.7678;
										}
									}
									else
									{
										if(velocity < 10.125)
											return 28.9855;
										else
										{
											if(rsrp < -81.5)
												return 38.835;
											else
												return 36.1991;
										}
									}
								}
								else
								{
									if(rsrq < -7.5)
									{
										if(cqi < 14.5)
										{
											if(cqi < 11.5)
											{
												if(payload < 9.5)
												{
													if(velocity < 4.095)
													{
														if(payload < 3.5)
															return 12.6783;
														else
															return 20.3046;
													}
													else
													{
														if(sinr < 11.5)
														{
															if(rsrp < -86.5)
															{
																if(payload < 5)
																{
																	if(sinr < -1.5)
																		return 37.4707;
																	else
																		return 27.0728;
																}
																else
																	return 28.8418;
															}
															else
															{
																if(velocity < 11.68)
																	return 24.0968333333;
																else
																	return 19.0593;
															}
														}
														else
														{
															if(sinr < 13.5)
																return 34.96175;
															else
																return 44.9123;
														}
													}
												}
												else
												{
													if(rsrp < -79.5)
														return 28.0998;
													else
														return 47.6758;
												}
											}
											else
											{
												if(payload < 4.5)
													return 34.7323;
												else
												{
													if(rsrp < -72.5)
													{
														if(rsrp < -77)
															return 15.8967;
														else
															return 13.4945;
													}
													else
														return 27.0453;
												}
											}
										}
										else
										{
											if(rsrq < -8.5)
											{
												if(cell < 13468551.5)
													return 35.8543;
												else
													return 25.641;
											}
											else
											{
												if(sinr < 10.5)
													return 46.5116;
												else
													return 44.0098;
											}
										}
									}
									else
									{
										if(ta < 2.5)
										{
											if(payload < 7.5)
												return 18.4829;
											else
												return 26.7857;
										}
										else
										{
											if(sinr < 14.5)
											{
												if(rsrq < -6.5)
												{
													if(cqi < 9.5)
													{
														if(cell < 13532419)
														{
															if(ta < 7)
																return 51.8639;
															else
																return 55.1724;
														}
														else
															return 45.6853;
													}
													else
													{
														if(rsrp < -83.5)
														{
															if(cqi < 13.5)
															{
																if(rsrp < -85.5)
																{
																	if(rsrp < -87.5)
																	{
																		if(velocity < 4.35)
																			return 42.7807;
																		else
																			return 39.0879;
																	}
																	else
																	{
																		if(cqi < 11.5)
																			return 37.0573333333;
																		else
																			return 33.1675;
																	}
																}
																else
																{
																	if(sinr < 5.5)
																		return 27.5704;
																	else
																		return 16.444;
																}
															}
															else
																return 14.4862;
														}
														else
														{
															if(sinr < 13.5)
															{
																if(cqi < 13.5)
																{
																	if(payload < 9.5)
																	{
																		if(rsrp < -79.5)
																			return 65.3951;
																		else
																			return 58.6387;
																	}
																	else
																		return 48.9896;
																}
																else
																{
																	if(velocity < 6.64)
																		return 62.5815;
																	else
																	{
																		if(velocity < 12.07)
																			return 37.8278666667;
																		else
																			return 48.9796;
																	}
																}
															}
															else
																return 34.8964;
														}
													}
												}
												else
												{
													if(cqi < 9)
														return 38.3234;
													else
													{
														if(velocity < 9.12)
															return 44.2804;
														else
														{
															if(rsrp < -83)
																return 63.2411;
															else
																return 56.0748;
														}
													}
												}
											}
											else
											{
												if(velocity < 10.865)
													return 38.0952;
												else
													return 15.0338;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else
			{
				if(payload < 6.5)
				{
					if(payload < 0.3)
					{
						if(cell < 13458182.5)
						{
							if(rsrp < -89)
								return 9.75613;
							else
								return 7.61908;
						}
						else
							return 0.793654;
					}
					else
					{
						if(rsrp < -88.5)
						{
							if(ta < 14)
							{
								if(velocity < 26.105)
								{
									if(cell < 13463042.5)
										return 9.66022;
									else
										return 7.89474;
								}
								else
									return 5.75126;
							}
							else
							{
								if(cell < 13528066.5)
								{
									if(f < 1362.55)
									{
										if(velocity < 29.95)
										{
											if(sinr < 9)
											{
												if(cell < 13219842)
													return 11.9581;
												else
													return 13.419775;
											}
											else
												return 17.5055;
										}
										else
											return 4.80192;
									}
									else
										return 27.2109;
								}
								else
									return 29.0276;
							}
						}
						else
						{
							if(cqi < 9.5)
							{
								if(sinr < 7)
								{
									if(payload < 2.5)
										return 21.978;
									else
										return 28.3688;
								}
								else
								{
									if(payload < 2.5)
										return 33.0579;
									else
									{
										if(rsrq < -8.5)
											return 33.264;
										else
											return 29.9252;
									}
								}
							}
							else
							{
								if(ta < 14)
								{
									if(rsrq < -9.5)
										return 20.3046;
									else
									{
										if(rsrq < -7.5)
											return 30.7692;
										else
											return 28.777;
									}
								}
								else
								{
									if(velocity < 21.695)
									{
										if(payload < 2)
											return 11.8519;
										else
											return 14.944;
									}
									else
										return 6.26141;
								}
							}
						}
					}
				}
				else
				{
					if(cell < 13405442)
					{
						if(f < 1362.55)
						{
							if(cqi < 13.5)
							{
								if(cell < 13208194)
								{
									if(velocity < 13.12)
										return 43.75;
									else
									{
										if(ta < 17.5)
											return 27.1493;
										else
										{
											if(sinr < 6.5)
											{
												if(rsrq < -10)
													return 12.8077;
												else
													return 17.2202;
											}
											else
												return 29.3713;
										}
									}
								}
								else
								{
									if(ta < 12.5)
									{
										if(sinr < 7)
											return 30.7811;
										else
											return 22.5797;
									}
									else
									{
										if(rsrq < -10.5)
											return 35.6546;
										else
										{
											if(rsrq < -7.5)
												return 48.5216;
											else
												return 41.6667;
										}
									}
								}
							}
							else
								return 54.9451;
						}
						else
						{
							if(cell < 13392905.5)
								return 37.3178;
							else
							{
								if(ta < 16.5)
								{
									if(payload < 9.5)
									{
										if(rsrp < -88.5)
											return 22.8559;
										else
											return 20.4529;
									}
									else
										return 13.3824;
								}
								else
									return 14.4665;
							}
						}
					}
					else
					{
						if(ta < 14)
							return 2.5712266667;
						else
						{
							if(velocity < 34)
							{
								if(sinr < 8.5)
								{
									if(velocity < 22.205)
									{
										if(payload < 9)
											return 15.6517;
										else
											return 13.9983;
									}
									else
										return 17.4027;
								}
								else
									return 25.9981;
							}
							else
								return 6.63656;
						}
					}
				}
			}
		}
		else
		{
			if(velocity < 6.985)
			{
				if(payload < 3.5)
				{
					if(rsrp < -87.5)
					{
						if(rsrq < -5.5)
						{
							if(sinr < 27)
								return 68.7679;
							else
								return 53.3335;
						}
						else
							return 57.1429;
					}
					else
					{
						if(payload < 1.5)
						{
							if(payload < 0.75)
							{
								if(cqi < 11.5)
								{
									if(cell < 13183873.5)
										return 26.8456;
									else
									{
										if(sinr < 22)
										{
											if(velocity < 2.455)
												return 17.39655;
											else
												return 18.8679;
										}
										else
											return 22.8572;
									}
								}
								else
								{
									if(rsrq < -8.5)
										return 36.036;
									else
									{
										if(rsrq < -4.5)
										{
											if(sinr < 25.5)
											{
												if(sinr < 20)
												{
													if(rsrq < -7)
														return 26.8456;
													else
														return 29.8507;
												}
												else
												{
													if(ta < 3)
														return 19.5123;
													else
													{
														if(rsrp < -75.5)
														{
															if(f < 1362.55)
																return 24.1572;
															else
																return 26.1438;
														}
														else
														{
															if(rsrp < -70.5)
																return 23.1214;
															else
																return 21.6216;
														}
													}
												}
											}
											else
												return 34.4828;
										}
										else
											return 32.5203;
									}
								}
							}
							else
							{
								if(velocity < 1.69)
								{
									if(cell < 13394049.5)
									{
										if(ta < 2.5)
											return 30.4183;
										else
											return 33.4832333333;
									}
									else
										return 34.7826;
								}
								else
									return 36.3636;
							}
						}
						else
						{
							if(cqi < 13)
							{
								if(rsrq < -6.5)
								{
									if(payload < 2.5)
									{
										if(rsrq < -7.5)
										{
											if(sinr < 17.5)
												return 21.9479;
											else
												return 31.1284;
										}
										else
											return 32.5203;
									}
									else
										return 34.3349;
								}
								else
								{
									if(rsrq < -5.5)
									{
										if(cqi < 6)
											return 39.3443;
										else
											return 41.9948;
									}
									else
										return 48.6322;
								}
							}
							else
							{
								if(rsrp < -70)
								{
									if(payload < 2.5)
										return 48.22296;
									else
										return 62.74605;
								}
								else
								{
									if(sinr < 25.5)
										return 39.5062;
									else
										return 41.5584;
								}
							}
						}
					}
				}
				else
				{
					if(ta < 11)
					{
						if(cqi < 13.5)
						{
							if(rsrq < -8.5)
							{
								if(payload < 8.5)
									return 54.3689;
								else
									return 25.1572;
							}
							else
							{
								if(rsrp < -61.5)
								{
									if(cqi < 10.5)
									{
										if(cell < 13463298.5)
										{
											if(rsrp < -85)
												return 74.1427;
											else
												return 79.558;
										}
										else
											return 57.7386;
									}
									else
									{
										if(sinr < 22.5)
										{
											if(f < 2247.55)
											{
												if(velocity < 0.58)
												{
													if(rsrp < -76.5)
													{
														if(sinr < 21)
														{
															if(payload < 9.5)
																return 55.2147;
															else
																return 53.2019;
														}
														else
														{
															if(cell < 13183873.5)
																return 56.1896;
															else
																return 37.8698;
														}
													}
													else
													{
														if(rsrq < -5.5)
														{
															if(rsrp < -73)
																return 76.3723;
															else
																return 60.8365;
														}
														else
															return 54.115;
													}
												}
												else
												{
													if(payload < 7)
														return 62.3782;
													else
														return 71.2378;
												}
											}
											else
											{
												if(rsrq < -5.5)
													return 73.7327;
												else
													return 58.3942;
											}
										}
										else
										{
											if(payload < 6.5)
											{
												if(rsrp < -81)
													return 54.8885;
												else
												{
													if(payload < 5.5)
														return 63.8978;
													else
														return 59.7758;
												}
											}
											else
											{
												if(rsrq < -6.5)
													return 81.1594;
												else
													return 71.79595;
											}
										}
									}
								}
								else
									return 26.5957;
							}
						}
						else
						{
							if(cell < 13393540.5)
							{
								if(rsrp < -68)
								{
									if(cell < 13284104.5)
									{
										if(sinr < 34.5)
										{
											if(sinr < 26.5)
												return 68.7023;
											else
											{
												if(rsrp < -77.5)
													return 66.1157;
												else
												{
													if(rsrp < -76.5)
														return 78.2779;
													else
														return 71.7489;
												}
											}
										}
										else
											return 64.257;
									}
									else
									{
										if(rsrp < -71)
										{
											if(payload < 5.5)
												return 61.5385;
											else
												return 62.9921;
										}
										else
											return 56.1404;
									}
								}
								else
									return 41.0678;
							}
							else
							{
								if(sinr < 23.5)
								{
									if(payload < 8.5)
									{
										if(cell < 13394183)
										{
											if(payload < 5.5)
												return 71.9101;
											else
												return 78.4314;
										}
										else
											return 83.1790666667;
									}
									else
										return 97.8261;
								}
								else
								{
									if(payload < 8.5)
										return 90.4685;
									else
										return 92.4855;
								}
							}
						}
					}
					else
						return 34.188;
				}
			}
			else
			{
				if(payload < 1.5)
				{
					if(rsrp < -77.5)
					{
						if(cell < 13393420)
						{
							if(sinr < 32.5)
							{
								if(ta < 7.5)
								{
									if(cell < 12973569.5)
										return 33.8983;
									else
									{
										if(velocity < 8.14)
											return 13.3334;
										else
										{
											if(cqi < 14.5)
											{
												if(sinr < 24.5)
													return 25.0001;
												else
													return 22.9885;
											}
											else
												return 19.7044;
										}
									}
								}
								else
								{
									if(sinr < 23)
									{
										if(payload < 0.75)
										{
											if(ta < 12)
											{
												if(sinr < 16.5)
													return 14.5455;
												else
												{
													if(ta < 8.5)
														return 9.80392;
													else
														return 11.11975;
												}
											}
											else
											{
												if(sinr < 20.5)
													return 5.19483;
												else
												{
													if(cell < 13207685.5)
														return 8.7146;
													else
														return 7.40744;
												}
											}
										}
										else
											return 19.2308;
									}
									else
										return 29.6296;
								}
							}
							else
								return 32.7869;
						}
						else
						{
							if(rsrq < -7.5)
							{
								if(velocity < 13.435)
									return 34.3348;
								else
									return 22.3464;
							}
							else
							{
								if(rsrp < -87.5)
									return 34.188;
								else
								{
									if(ta < 3.5)
										return 15.2681;
									else
									{
										if(velocity < 14.36)
										{
											if(ta < 4.5)
											{
												if(cqi < 13.5)
													return 29.6296;
												else
													return 27.58755;
											}
											else
											{
												if(payload < 0.75)
													return 22.8571;
												else
												{
													if(ta < 7)
														return 25.641;
													else
														return 27.3038;
												}
											}
										}
										else
										{
											if(payload < 0.3)
												return 9.87658;
											else
											{
												if(rsrp < -84.5)
													return 19.6078;
												else
													return 15.3551;
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if(cqi < 14.5)
						{
							if(payload < 0.3)
							{
								if(rsrp < -69)
								{
									if(rsrq < -6.5)
										return 19.5123;
									else
										return 21.0527;
								}
								else
									return 8.721445;
							}
							else
							{
								if(cqi < 10)
								{
									if(ta < 5.5)
										return 29.7398;
									else
										return 33.4728;
								}
								else
								{
									if(cqi < 11.5)
									{
										if(ta < 11)
											return 19.9005;
										else
											return 22.2222;
									}
									else
									{
										if(velocity < 19.815)
										{
											if(ta < 3.5)
											{
												if(velocity < 12.605)
													return 23.2558;
												else
													return 27.6817;
											}
											else
											{
												if(rsrp < -75.5)
													return 29.7398;
												else
												{
													if(cqi < 13)
														return 27.5862;
													else
														return 25.974;
												}
											}
										}
										else
											return 18.4758;
									}
								}
							}
						}
						else
						{
							if(velocity < 15.18)
							{
								if(ta < 3)
									return 24.0964;
								else
								{
									if(rsrp < -69)
										return 36.3636;
									else
										return 38.4615;
								}
							}
							else
								return 160.001;
						}
					}
				}
				else
				{
					if(velocity < 14.56)
					{
						if(sinr < 16.5)
						{
							if(velocity < 8.195)
								return 71.0059;
							else
							{
								if(payload < 6.5)
								{
									if(f < 1362.55)
									{
										if(payload < 3.5)
										{
											if(rsrq < -6.5)
												return 30.888;
											else
												return 38.7722;
										}
										else
										{
											if(rsrq < -8)
												return 40.5748;
											else
												return 37.1661;
										}
									}
									else
									{
										if(f < 2247.55)
										{
											if(ta < 4)
												return 36.8664;
											else
											{
												if(payload < 5.5)
													return 26.0078;
												else
													return 19.2154;
											}
										}
										else
											return 24.024;
									}
								}
								else
								{
									if(cqi < 10.5)
									{
										if(payload < 9.5)
											return 35.9364333333;
										else
											return 33.67;
									}
									else
									{
										if(cqi < 11.5)
										{
											if(cell < 13252232)
												return 61.127;
											else
												return 50.7246;
										}
										else
											return 63.4202;
									}
								}
							}
						}
						else
						{
							if(cell < 13400199)
							{
								if(ta < 8)
								{
									if(payload < 7.5)
									{
										if(rsrp < -63.5)
										{
											if(cqi < 11.5)
											{
												if(rsrp < -83.5)
												{
													if(rsrp < -87)
														return 31.5956;
													else
														return 51.0204;
												}
												else
												{
													if(rsrq < -8.5)
														return 54.8885;
													else
													{
														if(cqi < 10.5)
														{
															if(rsrq < -5.5)
																return 52.8926;
															else
																return 63.1579;
														}
														else
															return 74.23928;
													}
												}
											}
											else
											{
												if(cell < 13394178)
												{
													if(sinr < 26.5)
													{
														if(rsrq < -5.5)
														{
															if(velocity < 7.715)
																return 50.6329;
															else
															{
																if(velocity < 11.69)
																{
																	if(cell < 13393540.5)
																	{
																		if(rsrq < -8)
																			return 32.4763;
																		else
																		{
																			if(payload < 6.5)
																				return 39.1737;
																			else
																				return 41.0858;
																		}
																	}
																	else
																		return 50.3145;
																}
																else
																{
																	if(velocity < 13.94)
																		return 44.54868;
																	else
																		return 46.7836;
																}
															}
														}
														else
														{
															if(sinr < 23.5)
															{
																if(sinr < 20.5)
																	return 71.8563;
																else
																{
																	if(ta < 4.5)
																		return 46.2428;
																	else
																	{
																		if(payload < 4.5)
																		{
																			if(payload < 2.5)
																				return 48.3384;
																			else
																				return 52.8634;
																		}
																		else
																			return 58.1818;
																	}
																}
															}
															else
																return 37.5147;
														}
													}
													else
													{
														if(rsrq < -5.5)
														{
															if(rsrp < -74.5)
																return 68.4932;
															else
																return 61.4203;
														}
														else
														{
															if(sinr < 29)
																return 53.2151;
															else
																return 56.338;
														}
													}
												}
												else
												{
													if(sinr < 21.5)
														return 60.4915;
													else
														return 67.5105;
												}
											}
										}
										else
											return 35.6877;
									}
									else
									{
										if(rsrp < -89)
										{
											if(payload < 9)
												return 40.9207;
											else
												return 58.8235;
										}
										else
										{
											if(cell < 13020549)
											{
												if(payload < 9.5)
													return 47.86635;
												else
													return 54.2741;
											}
											else
											{
												if(rsrp < -86.5)
													return 81.8182;
												else
												{
													if(cell < 13121417)
														return 74.5573;
													else
													{
														if(rsrp < -77.5)
														{
															if(payload < 9.5)
															{
																if(ta < 3.5)
																	return 63.1025;
																else
																	return 67.1563;
															}
															else
																return 73.4619;
														}
														else
														{
															if(payload < 9)
																return 61.5385;
															else
																return 63.4921;
														}
													}
												}
											}
										}
									}
								}
								else
								{
									if(ta < 13.5)
									{
										if(rsrp < -84.5)
										{
											if(velocity < 11.405)
											{
												if(cell < 13183745.5)
													return 81.7253;
												else
													return 73.903;
											}
											else
											{
												if(velocity < 14.205)
												{
													if(payload < 6.5)
														return 66.6667;
													else
														return 68.0272;
												}
												else
													return 61.3027;
											}
										}
										else
										{
											if(rsrq < -5.5)
											{
												if(velocity < 13.78)
													return 53.9326;
												else
													return 57.7617;
											}
											else
											{
												if(cqi < 11.5)
													return 44.8598;
												else
													return 52.8751;
											}
										}
									}
									else
									{
										if(rsrp < -78.5)
											return 36.1757;
										else
											return 40.404;
									}
								}
							}
							else
							{
								if(cell < 13473032)
								{
									if(cell < 13410693)
									{
										if(sinr < 29.5)
										{
											if(cell < 13406212.5)
												return 32.0899;
											else
												return 26.8456;
										}
										else
											return 24.8062;
									}
									else
										return 15.1147;
								}
								else
								{
									if(ta < 2.5)
									{
										if(rsrp < -81.5)
											return 46.3097;
										else
											return 58.8235;
									}
									else
									{
										if(cqi < 13.5)
											return 46.3768;
										else
										{
											if(sinr < 21.5)
												return 42.7807;
											else
												return 44.4444;
										}
									}
								}
							}
						}
					}
					else
					{
						if(rsrp < -77.5)
						{
							if(cqi < 9.5)
								return 6.94444;
							else
							{
								if(ta < 4)
									return 59.4796;
								else
								{
									if(velocity < 22.005)
									{
										if(cell < 13394057)
										{
											if(sinr < 33.5)
											{
												if(rsrp < -83)
												{
													if(cell < 12973575)
														return 40.04;
													else
													{
														if(rsrq < -7)
															return 43.7756;
														else
															return 42.4628;
													}
												}
												else
													return 48.0274;
											}
											else
												return 51.9481;
										}
										else
										{
											if(velocity < 14.935)
											{
												if(rsrp < -84.5)
													return 20.8454;
												else
													return 27.8192;
											}
											else
											{
												if(sinr < 25.5)
												{
													if(payload < 6.5)
													{
														if(velocity < 15.47)
															return 29.1793;
														else
															return 26.8456;
													}
													else
													{
														if(rsrp < -83)
														{
															if(sinr < 24.5)
																return 33.9188;
															else
																return 31.355;
														}
														else
															return 39.4922;
													}
												}
												else
													return 42.4504;
											}
										}
									}
									else
									{
										if(velocity < 33.585)
										{
											if(cqi < 11.5)
												return 28.65115;
											else
											{
												if(velocity < 28.115)
												{
													if(sinr < 20)
														return 18.5471;
													else
														return 15.8025;
												}
												else
												{
													if(payload < 6.5)
														return 26.7738;
													else
													{
														if(cqi < 13)
															return 21.2033;
														else
															return 22.9706666667;
													}
												}
											}
										}
										else
											return 34.2246;
									}
								}
							}
						}
						else
						{
							if(ta < 17.5)
							{
								if(velocity < 17.075)
								{
									if(rsrq < -6.5)
										return 37.2787;
									else
									{
										if(cell < 13393541.5)
										{
											if(payload < 6)
											{
												if(sinr < 20.5)
													return 51.1727;
												else
													return 52.8926;
											}
											else
												return 55.1724;
										}
										else
											return 46.5116;
									}
								}
								else
								{
									if(cqi < 13.5)
									{
										if(rsrp < -73)
											return 13.2177;
										else
											return 27.7778;
									}
									else
									{
										if(ta < 16.5)
											return 56.0224;
										else
										{
											if(sinr < 35.5)
											{
												if(rsrq < -5.5)
												{
													if(rsrp < -71.5)
														return 37.9147;
													else
														return 35.8343;
												}
												else
													return 29.0502;
											}
											else
												return 41.8848;
										}
									}
								}
							}
							else
							{
								if(rsrp < -74.5)
									return 48.823;
								else
									return 66.5024666667;
							}
						}
					}
				}
			}
		}
	}
}

float vodafone_dl_tree_4(float payload, float rsrp, float rsrq, float sinr, float cqi, float ta, float velocity, float cell, float f)
{
	if(sinr < 9.5)
	{
		if(rsrq < -11.5)
		{
			if(rsrp < -102.5)
			{
				if(payload < 1.5)
				{
					if(sinr < 4.5)
					{
						if(cell < 13784072)
						{
							if(f < 1362.55)
							{
								if(cqi < 1.5)
								{
									if(rsrq < -16.5)
									{
										if(payload < 0.75)
											return 6.27943;
										else
											return 3.72787;
									}
									else
										return 0.6538315;
								}
								else
								{
									if(rsrp < -107.5)
									{
										if(sinr < -1.5)
											return 0.4279710816;
										else
										{
											if(payload < 0.75)
												return 0.59428125;
											else
											{
												if(rsrq < -14)
													return 3.97812;
												else
													return 0.5970485;
											}
										}
									}
									else
									{
										if(sinr < -6.5)
										{
											if(cqi < 5.5)
												return 4.06538;
											else
												return 1.3587;
										}
										else
											return 1.1921952632;
									}
								}
							}
							else
							{
								if(cqi < 5.5)
								{
									if(velocity < 3.775)
										return 10.568;
									else
										return 0.6581986667;
								}
								else
								{
									if(sinr < -0.5)
										return 0.573952875;
									else
									{
										if(rsrp < -114)
											return 1.6899;
										else
											return 3.0311014286;
									}
								}
							}
						}
						else
							return 11.9048;
					}
					else
					{
						if(rsrq < -12.5)
							return 0.287254;
						else
							return 15.3257;
					}
				}
				else
				{
					if(ta < 21.5)
					{
						if(cell < 13393414)
						{
							if(ta < 7.5)
							{
								if(rsrp < -105.5)
									return 32.6697;
								else
								{
									if(rsrp < -104)
										return 48.4848;
									else
										return 41.1664;
								}
							}
							else
							{
								if(sinr < 0.5)
								{
									if(rsrq < -14.5)
									{
										if(ta < 15.5)
											return 23.3236;
										else
											return 18.5701;
									}
									else
									{
										if(rsrp < -112.5)
										{
											if(rsrp < -117)
												return 10.3426;
											else
											{
												if(rsrq < -13)
													return 5.828495;
												else
													return 3.91078;
											}
										}
										else
										{
											if(payload < 8.5)
											{
												if(velocity < 4.42)
												{
													if(rsrp < -109.5)
													{
														if(payload < 3.5)
															return 17.2538;
														else
															return 15.4664;
													}
													else
														return 14.60065;
												}
												else
												{
													if(cqi < 3)
														return 11.8081;
													else
													{
														if(payload < 2.5)
															return 11.486;
														else
														{
															if(rsrq < -13.5)
																return 3.38648;
															else
															{
																if(ta < 16.5)
																	return 9.9983266667;
																else
																	return 6.292425;
															}
														}
													}
												}
											}
											else
											{
												if(payload < 9.5)
													return 21.4158;
												else
													return 16.7434;
											}
										}
									}
								}
								else
								{
									if(rsrp < -112.5)
										return 11.782;
									else
									{
										if(ta < 17.5)
										{
											if(ta < 11.5)
											{
												if(f < 1362.55)
													return 24.9027;
												else
													return 23.4604;
											}
											else
											{
												if(cqi < 8.5)
												{
													if(ta < 15.5)
													{
														if(rsrq < -13.5)
															return 15.2091;
														else
															return 20.4953;
													}
													else
														return 14.5438;
												}
												else
												{
													if(velocity < 13.93)
													{
														if(rsrq < -12.5)
															return 24.7219;
														else
															return 23.09565;
													}
													else
														return 19.3705;
												}
											}
										}
										else
										{
											if(cqi < 7.5)
												return 25.6904;
											else
											{
												if(payload < 6.5)
													return 5.577645;
												else
													return 13.8614;
											}
										}
									}
								}
							}
						}
						else
						{
							if(f < 1745)
							{
								if(rsrq < -12.5)
								{
									if(cell < 13527810.5)
									{
										if(sinr < -4.5)
										{
											if(velocity < 13.715)
												return 1.9628171429;
											else
											{
												if(ta < 11)
													return 0.6332712;
												else
													return 1.441574;
											}
										}
										else
										{
											if(cqi < 3.5)
											{
												if(payload < 4.5)
													return 10.2302;
												else
													return 3.35683;
											}
											else
											{
												if(velocity < 13.84)
												{
													if(sinr < 2.5)
														return 1.8953416364;
													else
														return 0.893455;
												}
												else
												{
													if(velocity < 16.685)
													{
														if(cqi < 8)
														{
															if(payload < 8.5)
															{
																if(cell < 13469442.5)
																{
																	if(rsrp < -108.5)
																		return 5.62522;
																	else
																		return 4.24044;
																}
																else
																	return 7.26612;
															}
															else
															{
																if(rsrq < -14.5)
																	return 0.576378;
																else
																	return 2.34206;
															}
														}
														else
															return 13.0826;
													}
													else
													{
														if(ta < 16.5)
														{
															if(velocity < 34.09)
																return 1.556809;
															else
																return 2.586;
														}
														else
														{
															if(rsrq < -14)
															{
																if(payload < 7.5)
																	return 8.8164;
																else
																	return 5.31032;
															}
															else
																return 0.597565;
														}
													}
												}
											}
										}
									}
									else
									{
										if(payload < 8.5)
										{
											if(ta < 10.5)
												return 6.70354;
											else
											{
												if(rsrq < -14.5)
												{
													if(payload < 5.5)
														return 8.81057;
													else
														return 10.5621;
												}
												else
													return 12.081675;
											}
										}
										else
											return 3.13398;
									}
								}
								else
								{
									if(cqi < 6.5)
									{
										if(rsrp < -109)
											return 5.89846;
										else
										{
											if(ta < 13.5)
												return 1.8856508589;
											else
												return 3.35923;
										}
									}
									else
									{
										if(payload < 3.5)
											return 18.7647;
										else
										{
											if(ta < 15.5)
											{
												if(ta < 10.5)
													return 10.7853;
												else
													return 8.181;
											}
											else
												return 4.99376;
										}
									}
								}
							}
							else
							{
								if(cqi < 5)
									return 2.8030966667;
								else
								{
									if(rsrq < -13.5)
									{
										if(sinr < -0.5)
											return 18.8368;
										else
											return 20.3735;
									}
									else
										return 15.0517;
								}
							}
						}
					}
					else
					{
						if(sinr < 0.5)
						{
							if(cell < 13164161.5)
							{
								if(sinr < -10.5)
									return 2.15308;
								else
								{
									if(rsrq < -12.5)
									{
										if(velocity < 24.14)
											return 8.176005;
										else
											return 5.9828;
									}
									else
										return 10.51685;
								}
							}
							else
							{
								if(velocity < 8.36)
								{
									if(ta < 25)
									{
										if(cqi < 5)
											return 2.63764;
										else
											return 1.154587;
									}
									else
										return 6.01827;
								}
								else
								{
									if(cell < 13415426.5)
									{
										if(ta < 27)
											return 0.9890717143;
										else
											return 4.93599;
									}
									else
									{
										if(ta < 26)
										{
											if(ta < 22.5)
											{
												if(velocity < 26.19)
												{
													if(payload < 3.5)
														return 1.24214;
													else
													{
														if(sinr < -2.5)
															return 1.93533;
														else
															return 3.42173;
													}
												}
												else
													return 7.0713;
											}
											else
											{
												if(cqi < 6.5)
												{
													if(velocity < 29.85)
													{
														if(rsrq < -15.5)
														{
															if(payload < 5.5)
															{
																if(ta < 24)
																	return 1.16908;
																else
																	return 2.33536;
															}
															else
																return 6.13615;
														}
														else
															return 1.5000352727;
													}
													else
														return 0.497203;
												}
												else
													return 0.514445;
											}
										}
										else
										{
											if(velocity < 21.855)
											{
												if(payload < 6)
													return 1.67609;
												else
													return 3.32818;
											}
											else
												return 6.19397;
										}
									}
								}
							}
						}
						else
						{
							if(cell < 13406338)
							{
								if(velocity < 8.69)
								{
									if(rsrq < -12.5)
										return 3.051288;
									else
										return 5.26393;
								}
								else
								{
									if(rsrp < -106.5)
									{
										if(velocity < 27.34)
										{
											if(sinr < 3.5)
												return 0.97092325;
											else
												return 2.40574;
										}
										else
											return 9.02425;
									}
									else
									{
										if(cqi < 5.5)
											return 21.6091;
										else
										{
											if(ta < 29)
											{
												if(payload < 6.5)
													return 6.10998;
												else
													return 9.04466;
											}
											else
											{
												if(cqi < 9)
												{
													if(rsrp < -105)
														return 17.2414;
													else
														return 14.7126;
												}
												else
												{
													if(rsrq < -12.5)
														return 12.6858;
													else
														return 10.3173;
												}
											}
										}
									}
								}
							}
							else
								return 0.5814776667;
						}
					}
				}
			}
			else
			{
				if(f < 1362.55)
				{
					if(ta < 18.5)
					{
						if(payload < 3.5)
						{
							if(rsrq < -12.5)
							{
								if(cell < 13532290.5)
								{
									if(sinr < 3.5)
									{
										if(ta < 12.5)
										{
											if(cell < 13473666)
											{
												if(sinr < 1.5)
													return 0.987658;
												else
												{
													if(sinr < 2.5)
														return 5.08906;
													else
														return 1.50094;
												}
											}
											else
												return 5.92595;
										}
										else
										{
											if(ta < 15)
											{
												if(payload < 1.5)
													return 0.8683115;
												else
												{
													if(ta < 13.5)
														return 2.9314766667;
													else
														return 1.80845;
												}
											}
											else
												return 3.5645066667;
										}
									}
									else
									{
										if(rsrp < -97.5)
											return 11.5942;
										else
											return 5.97461;
									}
								}
								else
								{
									if(cqi < 6.5)
									{
										if(rsrp < -99.5)
										{
											if(rsrp < -101)
												return 10.7095;
											else
											{
												if(cqi < 4.5)
													return 8.28157;
												else
													return 5.81395;
											}
										}
										else
											return 14.34985;
									}
									else
									{
										if(cell < 13932802.5)
											return 6.20636;
										else
											return 3.98011;
									}
								}
							}
							else
							{
								if(cell < 13473666)
								{
									if(velocity < 10.365)
										return 18.018;
									else
									{
										if(rsrp < -98.5)
											return 3.63658;
										else
										{
											if(rsrp < -90)
												return 7.25624;
											else
												return 5.88238;
										}
									}
								}
								else
								{
									if(rsrp < -97.5)
										return 9.63859;
									else
										return 24.36086;
								}
							}
						}
						else
						{
							if(cell < 13394306)
							{
								if(velocity < 1.86)
									return 2.57459;
								else
								{
									if(rsrp < -95.5)
									{
										if(rsrq < -12.5)
										{
											if(payload < 5)
												return 35.5556;
											else
											{
												if(rsrp < -101)
													return 28.7081;
												else
												{
													if(rsrp < -98.5)
														return 34.9091;
													else
														return 32.335567474;
												}
											}
										}
										else
											return 45.1977;
									}
									else
									{
										if(velocity < 13.535)
										{
											if(cell < 13394050)
											{
												if(velocity < 8.865)
													return 23.5294;
												else
													return 26.7728;
											}
											else
												return 31.3725;
										}
										else
										{
											if(rsrp < -92)
												return 5.86081;
											else
											{
												if(payload < 8.5)
												{
													if(rsrp < -87.5)
														return 12.8077;
													else
														return 22.4719;
												}
												else
													return 31.5098;
											}
										}
									}
								}
							}
							else
							{
								if(cqi < 5.5)
								{
									if(sinr < -5)
										return 7.84621;
									else
									{
										if(payload < 8)
											return 18.6596333333;
										else
										{
											if(sinr < -1)
												return 30.5214;
											else
												return 28.6225;
										}
									}
								}
								else
								{
									if(velocity < 37.29)
									{
										if(velocity < 25.99)
										{
											if(payload < 6.5)
											{
												if(sinr < -0.5)
													return 24.819;
												else
													return 21.178;
											}
											else
											{
												if(payload < 9.5)
												{
													if(cell < 13404802.5)
													{
														if(rsrq < -12.5)
															return 5.64352;
														else
															return 7.7821;
													}
													else
													{
														if(velocity < 5.14)
														{
															if(cqi < 6.5)
																return 11.0913;
															else
																return 9.03827;
														}
														else
														{
															if(sinr < 5.5)
															{
																if(payload < 8.5)
																	return 16.9402;
																else
																	return 14.7996;
															}
															else
															{
																if(sinr < 8.5)
																	return 9.85357;
																else
																	return 14.0633;
															}
														}
													}
												}
												else
												{
													if(cqi < 6.5)
													{
														if(rsrq < -13.5)
															return 11.0193;
														else
															return 15.543;
													}
													else
													{
														if(rsrp < -99.5)
															return 13.7268;
														else
															return 18.7047;
													}
												}
											}
										}
										else
											return 1.34262;
									}
									else
										return 24.3439;
								}
							}
						}
					}
					else
					{
						if(ta < 34.5)
						{
							if(payload < 0.3)
							{
								if(ta < 27.5)
									return 0.5749495714;
								else
									return 2.07793;
							}
							else
							{
								if(sinr < -7)
									return 0.56305225;
								else
								{
									if(payload < 2.5)
									{
										if(payload < 0.75)
											return 7.15564;
										else
										{
											if(cqi < 8.5)
												return 11.73745;
											else
												return 13.4003;
										}
									}
									else
									{
										if(rsrp < -97.5)
										{
											if(cell < 13321217)
											{
												if(payload < 9.5)
													return 20.1005;
												else
													return 8.75082;
											}
											else
											{
												if(velocity < 13.635)
													return 0.919106;
												else
												{
													if(cqi < 8)
													{
														if(rsrq < -13.5)
														{
															if(cell < 13405442)
																return 1.73913;
															else
																return 4.26567;
														}
														else
															return 5.2367114286;
													}
													else
													{
														if(payload < 4.5)
															return 7.52115;
														else
															return 15.1181;
													}
												}
											}
										}
										else
										{
											if(sinr < -2.5)
												return 5.76618;
											else
											{
												if(sinr < 6.5)
													return 0.8076462;
												else
													return 4.49871;
											}
										}
									}
								}
							}
						}
						else
							return 29.0065;
					}
				}
				else
				{
					if(f < 2247.55)
					{
						if(cell < 13392905)
						{
							if(ta < 5.5)
							{
								if(payload < 5.5)
								{
									if(rsrq < -13.5)
										return 17.316;
									else
										return 20.2276;
								}
								else
								{
									if(rsrq < -12.5)
										return 22.6458;
									else
										return 24.3161;
								}
							}
							else
							{
								if(velocity < 11.89)
									return 30.841325;
								else
									return 23.4776;
							}
						}
						else
						{
							if(velocity < 14.68)
								return 11.361254;
							else
							{
								if(cell < 13611526)
									return 18.4332;
								else
									return 16.01725;
							}
						}
					}
					else
					{
						if(cell < 13531528.5)
						{
							if(payload < 4.5)
								return 33.9943;
							else
								return 32.0159572327;
						}
						else
							return 11.2818683333;
					}
				}
			}
		}
		else
		{
			if(ta < 11.5)
			{
				if(cell < 13394823)
				{
					if(payload < 0.75)
					{
						if(velocity < 14.72)
						{
							if(ta < 7.5)
							{
								if(rsrp < -110)
									return 0.879121;
								else
								{
									if(cell < 13393540.5)
									{
										if(cqi < 10.5)
										{
											if(ta < 5.5)
											{
												if(payload < 0.3)
													return 13.4112;
												else
													return 11.1111;
											}
											else
											{
												if(velocity < 13.125)
													return 12.9033;
												else
													return 9.19544;
											}
										}
										else
										{
											if(payload < 0.3)
												return 13.5715;
											else
												return 22.0994;
										}
									}
									else
										return 21.6216;
								}
							}
							else
							{
								if(cqi < 8)
									return 0.257236;
								else
									return 3.19206;
							}
						}
						else
						{
							if(cqi < 9)
								return 50.0002;
							else
								return 2.72294;
						}
					}
					else
					{
						if(cell < 13394178)
						{
							if(velocity < 4.66)
							{
								if(rsrp < -75.5)
								{
									if(payload < 4.5)
									{
										if(rsrp < -87.5)
										{
											if(cqi < 9.5)
											{
												if(payload < 3)
												{
													if(rsrq < -8)
														return 17.2043;
													else
														return 15.2672;
												}
												else
													return 26.6889;
											}
											else
											{
												if(cqi < 13.5)
												{
													if(cqi < 11.5)
														return 28.5714;
													else
														return 26.6667;
												}
												else
													return 37.5587;
											}
										}
										else
										{
											if(rsrp < -85.5)
												return 34.2612;
											else
												return 30.6513;
										}
									}
									else
									{
										if(rsrp < -96.5)
										{
											if(sinr < 8)
											{
												if(cqi < 10)
												{
													if(cqi < 7.5)
														return 53.1814;
													else
														return 51.2492;
												}
												else
													return 58.8957;
											}
											else
												return 49.0196;
										}
										else
										{
											if(ta < 6.5)
											{
												if(rsrp < -93)
													return 29.1758;
												else
													return 33.3333;
											}
											else
											{
												if(rsrq < -10)
													return 20.9729;
												else
												{
													if(sinr < 5.5)
													{
														if(velocity < 0.44)
														{
															if(ta < 8.5)
																return 40.4296;
															else
																return 35.1097;
														}
														else
															return 47.1765;
													}
													else
														return 27.9525;
												}
											}
										}
									}
								}
								else
								{
									if(rsrp < -65)
										return 80;
									else
										return 62.3608;
								}
							}
							else
							{
								if(rsrp < -94.5)
								{
									if(velocity < 14.24)
									{
										if(payload < 5.5)
										{
											if(cell < 13044996.5)
											{
												if(sinr < 1)
													return 13.0293;
												else
												{
													if(payload < 3)
													{
														if(cqi < 9.5)
															return 14.2476;
														else
															return 17.18244;
													}
													else
														return 22.409;
												}
											}
											else
											{
												if(rsrp < -109.5)
												{
													if(payload < 2.5)
														return 34.2612;
													else
													{
														if(rsrq < -8.5)
															return 25.2632;
														else
															return 20.5656;
													}
												}
												else
												{
													if(ta < 4.5)
														return 36.7816;
													else
													{
														if(cqi < 10.5)
														{
															if(sinr < 4.5)
															{
																if(velocity < 13.45)
																{
																	if(rsrp < -105.5)
																		return 27.5862;
																	else
																		return 25.816375;
																}
																else
																	return 24.8139;
															}
															else
															{
																if(rsrp < -106.5)
																	return 27.8164;
																else
																	return 32.888;
															}
														}
														else
															return 31.43206;
													}
												}
											}
										}
										else
										{
											if(sinr < -2)
												return 15.3846;
											else
											{
												if(cqi < 6.5)
												{
													if(rsrp < -111.5)
														return 37.9147;
													else
													{
														if(sinr < 0.5)
															return 51.0204;
														else
															return 47.66705;
													}
												}
												else
												{
													if(velocity < 10.04)
													{
														if(cqi < 11.5)
															return 26.2016;
														else
														{
															if(rsrq < -9)
																return 26.6921;
															else
																return 29.3578;
														}
													}
													else
													{
														if(rsrp < -105)
														{
															if(rsrp < -108.5)
																return 15.8033;
															else
																return 25.5265;
														}
														else
														{
															if(payload < 7.5)
															{
																if(ta < 6.5)
																	return 25.8247;
																else
																{
																	if(sinr < 3.5)
																		return 32.8446;
																	else
																	{
																		if(rsrp < -100)
																			return 35.7942;
																		else
																			return 38.7097;
																	}
																}
															}
															else
															{
																if(payload < 9)
																	return 42.6099;
																else
																	return 39.3314;
															}
														}
													}
												}
											}
										}
									}
									else
									{
										if(rsrp < -104)
										{
											if(payload < 7.5)
											{
												if(cqi < 4.5)
													return 14.6466;
												else
													return 12.0482;
											}
											else
												return 7.61107;
										}
										else
										{
											if(payload < 6.5)
											{
												if(sinr < 5)
													return 29.3758;
												else
													return 26.4682;
											}
											else
												return 11.4304;
										}
									}
								}
								else
								{
									if(cell < 12938245)
										return 14.824;
									else
									{
										if(rsrq < -6.5)
										{
											if(velocity < 14.085)
											{
												if(payload < 5.5)
												{
													if(rsrp < -89.5)
													{
														if(velocity < 9.655)
														{
															if(f < 2247.55)
															{
																if(cell < 13392904.5)
																{
																	if(sinr < 4.5)
																		return 22.4561;
																	else
																		return 24.6028;
																}
																else
																	return 33.0306;
															}
															else
																return 10.2367;
														}
														else
														{
															if(cell < 13284101)
																return 36.95834;
															else
															{
																if(payload < 4)
																{
																	if(rsrp < -93)
																		return 28.777;
																	else
																		return 24.6407;
																}
																else
																	return 33.5289;
															}
														}
													}
													else
													{
														if(ta < 3)
															return 26.8456;
														else
														{
															if(payload < 3.5)
																return 36.3086;
															else
															{
																if(rsrp < -87)
																	return 45.2617;
																else
																	return 36.7816;
															}
														}
													}
												}
												else
												{
													if(rsrq < -8.5)
													{
														if(payload < 8.5)
														{
															if(ta < 8)
															{
																if(sinr < 6)
																	return 34.4456;
																else
																	return 27.456;
															}
															else
																return 43.214;
														}
														else
															return 51.7613;
													}
													else
													{
														if(rsrp < -90)
														{
															if(cqi < 13)
															{
																if(cell < 13183745.5)
																	return 43.3213;
																else
																	return 50;
															}
															else
																return 31.5138;
														}
														else
														{
															if(cell < 13074446)
																return 51.8471;
															else
															{
																if(ta < 7)
																	return 79.7342;
																else
																	return 71.8563;
															}
														}
													}
												}
											}
											else
											{
												if(payload < 6.5)
												{
													if(velocity < 14.525)
													{
														if(velocity < 14.165)
															return 31.5582;
														else
														{
															if(rsrq < -7.5)
																return 14.1844;
															else
																return 22.792;
														}
													}
													else
													{
														if(velocity < 16.75)
														{
															if(ta < 5.5)
															{
																if(velocity < 14.93)
																{
																	if(payload < 4)
																		return 36.8098;
																	else
																		return 35.0263;
																}
																else
																	return 30.0752;
															}
															else
																return 45.977;
														}
														else
														{
															if(rsrp < -92.5)
																return 25.953;
															else
																return 30.7692;
														}
													}
												}
												else
												{
													if(rsrp < -87.5)
														return 14.4665;
													else
													{
														if(payload < 9.5)
															return 32.3596;
														else
														{
															if(rsrp < -75.5)
																return 26.5869;
															else
																return 25.1493;
														}
													}
												}
											}
										}
										else
										{
											if(ta < 3.5)
												return 78.0488;
											else
											{
												if(cell < 13121416.5)
													return 46.8619;
												else
													return 42.042475;
											}
										}
									}
								}
							}
						}
						else
						{
							if(cqi < 10.5)
							{
								if(sinr < 5.5)
									return 53.259925;
								else
								{
									if(rsrp < -92)
										return 46.2428;
									else
										return 40.2024;
								}
							}
							else
								return 67.4536;
						}
					}
				}
				else
				{
					if(ta < 7.5)
					{
						if(ta < 6.5)
						{
							if(rsrp < -79.5)
							{
								if(payload < 9.5)
								{
									if(rsrq < -6.5)
									{
										if(velocity < 15.45)
										{
											if(payload < 4.5)
											{
												if(ta < 3.5)
												{
													if(rsrp < -94.5)
														return 17.8174;
													else
													{
														if(rsrp < -85)
														{
															if(velocity < 12.49)
																return 14.4862;
															else
															{
																if(payload < 0.75)
																	return 6.74536;
																else
																	return 7.824725;
															}
														}
														else
														{
															if(payload < 1.5)
																return 13.0293;
															else
																return 16.444;
														}
													}
												}
												else
												{
													if(cqi < 5.5)
														return 25.8066;
													else
													{
														if(cqi < 6.5)
															return 19.3548;
														else
														{
															if(cell < 13680519.5)
															{
																if(rsrq < -10.5)
																	return 20.6186;
																else
																{
																	if(cell < 13468427.5)
																	{
																		if(cqi < 7.5)
																			return 12.1581;
																		else
																		{
																			if(velocity < 14.495)
																			{
																				if(sinr < 2)
																					return 15.625;
																				else
																				{
																					if(payload < 3)
																						return 15.2091;
																					else
																						return 13.7991;
																				}
																			}
																			else
																				return 12.5;
																		}
																	}
																	else
																	{
																		if(payload < 2.05)
																			return 17.3914;
																		else
																			return 19.6319;
																	}
																}
															}
															else
															{
																if(rsrq < -7.5)
																	return 8.53482;
																else
																	return 13.9373;
															}
														}
													}
												}
											}
											else
											{
												if(rsrq < -8.5)
												{
													if(rsrp < -97.5)
													{
														if(velocity < 5.04)
														{
															if(ta < 5.5)
															{
																if(sinr < 3.5)
																	return 27.4914;
																else
																{
																	if(cqi < 8.5)
																		return 22.6501;
																	else
																		return 21.0804;
																}
															}
															else
																return 14.6482;
														}
														else
														{
															if(sinr < -2.5)
																return 7.18348;
															else
															{
																if(payload < 6.5)
																	return 9.48804;
																else
																{
																	if(rsrp < -105)
																		return 15.0502;
																	else
																		return 16.8168;
																}
															}
														}
													}
													else
													{
														if(sinr < 1)
														{
															if(velocity < 11.905)
																return 25.9511666667;
															else
															{
																if(sinr < -0.5)
																	return 18.2492;
																else
																	return 26.2834;
															}
														}
														else
														{
															if(rsrp < -87)
																return 16.609;
															else
																return 20.7164;
														}
													}
												}
												else
												{
													if(rsrp < -96.5)
														return 17.094;
													else
													{
														if(sinr < 2.5)
															return 11.9166;
														else
															return 8.79282;
													}
												}
											}
										}
										else
											return 37.4707;
									}
									else
									{
										if(cqi < 10)
											return 39.768;
										else
										{
											if(payload < 7.5)
												return 23.166;
											else
												return 26.7857;
										}
									}
								}
								else
								{
									if(rsrp < -102)
										return 2.04473;
									else
									{
										if(f < 1745)
											return 47.8755;
										else
										{
											if(velocity < 6.425)
												return 34.5125;
											else
												return 33.1675;
										}
									}
								}
							}
							else
							{
								if(payload < 9)
								{
									if(sinr < 7.5)
									{
										if(cqi < 11)
											return 18.773;
										else
										{
											if(payload < 7.5)
												return 13.0445;
											else
												return 14.9743;
										}
									}
									else
										return 44.2804;
								}
								else
									return 47.6758;
							}
						}
						else
						{
							if(cqi < 7.5)
								return 17.1186666667;
							else
							{
								if(f < 1362.55)
								{
									if(payload < 2.5)
									{
										if(rsrp < -88.5)
											return 10.0819;
										else
											return 5.7971;
									}
									else
										return 2.64248;
								}
								else
									return 12.5648;
							}
						}
					}
					else
					{
						if(velocity < 16.63)
						{
							if(payload < 8.5)
							{
								if(cqi < 9.5)
								{
									if(rsrq < -9.5)
									{
										if(velocity < 14.265)
										{
											if(velocity < 10.02)
											{
												if(cqi < 7)
												{
													if(payload < 3.5)
													{
														if(sinr < -1)
															return 35.7942;
														else
															return 43.956;
													}
													else
														return 60.1504;
												}
												else
												{
													if(rsrp < -95.5)
													{
														if(cell < 13532419)
															return 28.1694;
														else
															return 26.7559;
													}
													else
													{
														if(payload < 5)
															return 17.3661;
														else
															return 23.4801;
													}
												}
											}
											else
											{
												if(sinr < 0)
													return 28.1889;
												else
												{
													if(payload < 3.5)
													{
														if(payload < 1.55)
															return 10.6667;
														else
															return 13.1291;
													}
													else
														return 20.0501;
												}
											}
										}
										else
											return 48.048;
									}
									else
									{
										if(rsrp < -98)
										{
											if(sinr < 3)
												return 12.1951;
											else
												return 19.5122;
										}
										else
										{
											if(rsrq < -8)
											{
												if(sinr < 2.5)
													return 25.974;
												else
													return 22.2428;
											}
											else
												return 32.9606;
										}
									}
								}
								else
								{
									if(velocity < 3.855)
									{
										if(sinr < 6)
											return 29.5203;
										else
											return 35.0219;
									}
									else
									{
										if(cqi < 11.5)
										{
											if(payload < 0.3)
												return 9.63859;
											else
											{
												if(payload < 2.25)
												{
													if(velocity < 10.705)
														return 21.978;
													else
														return 18.8236;
												}
												else
												{
													if(ta < 8.5)
														return 15.6326;
													else
														return 13.2013;
												}
											}
										}
										else
										{
											if(payload < 4)
											{
												if(rsrp < -85.5)
													return 27.027;
												else
													return 28.9855;
											}
											else
												return 17.6712;
										}
									}
								}
							}
							else
							{
								if(velocity < 14.51)
								{
									if(velocity < 10.525)
									{
										if(rsrq < -8.5)
											return 22.0083;
										else
											return 27.3038;
									}
									else
										return 35.9102;
								}
								else
									return 55.1724;
							}
						}
						else
						{
							if(ta < 10.5)
							{
								if(rsrq < -9.5)
									return 10.2729;
								else
								{
									if(velocity < 37.855)
									{
										if(rsrp < -90.5)
											return 22.7201;
										else
											return 25.9319;
									}
									else
										return 30.303;
								}
							}
							else
								return 6.00064;
						}
					}
				}
			}
			else
			{
				if(cell < 13044869)
				{
					if(payload < 6.5)
					{
						if(payload < 0.3)
						{
							if(ta < 15)
								return 1.02696;
							else
							{
								if(sinr < -1)
								{
									if(rsrp < -105.5)
										return 20.5129;
									else
										return 14.2858;
								}
								else
								{
									if(velocity < 11.57)
									{
										if(rsrq < -7.5)
										{
											if(sinr < 4.5)
											{
												if(velocity < 10.765)
													return 7.92082;
												else
													return 10.5264;
											}
											else
											{
												if(velocity < 3.27)
													return 12.5;
												else
													return 14.5455;
											}
										}
										else
											return 9.09094;
									}
									else
										return 6.89658;
								}
							}
						}
						else
						{
							if(cqi < 8.5)
							{
								if(cqi < 7.5)
								{
									if(rsrq < -7.5)
									{
										if(payload < 5.5)
										{
											if(rsrp < -111.5)
												return 23.5294;
											else
											{
												if(ta < 14.5)
													return 22.7015;
												else
												{
													if(velocity < 13.05)
													{
														if(rsrp < -105.5)
														{
															if(velocity < 2.765)
																return 19.6754;
															else
															{
																if(sinr < -0.5)
																	return 14.0351;
																else
																{
																	if(rsrq < -9.5)
																		return 21.6998;
																	else
																	{
																		if(payload < 1.75)
																			return 15.2091;
																		else
																			return 16.5517;
																	}
																}
															}
														}
														else
															return 22.5989;
													}
													else
													{
														if(rsrp < -107.5)
															return 3.60469;
														else
														{
															if(rsrp < -96.5)
															{
																if(rsrq < -9.5)
																	return 22.0588;
																else
																	return 16.8067;
															}
															else
																return 13.3407;
														}
													}
												}
											}
										}
										else
										{
											if(velocity < 13.825)
												return 12.6376;
											else
												return 10.5611;
										}
									}
									else
										return 31.7041;
								}
								else
								{
									if(rsrp < -111)
										return 10.4439;
									else
									{
										if(sinr < 8.5)
										{
											if(velocity < 10.51)
											{
												if(payload < 3.5)
													return 23.469125;
												else
													return 22.2222;
											}
											else
												return 17.9372;
										}
										else
											return 26.1438;
									}
								}
							}
							else
							{
								if(rsrq < -9.5)
								{
									if(payload < 1.25)
										return 0.172726;
									else
									{
										if(sinr < 2.5)
										{
											if(velocity < 14.82)
												return 10.582;
											else
												return 5.21308;
										}
										else
										{
											if(velocity < 11.93)
											{
												if(sinr < 3.5)
													return 11.4811;
												else
												{
													if(payload < 3)
														return 12.4805;
													else
														return 14.3627;
												}
											}
											else
												return 8.08285;
										}
									}
								}
								else
								{
									if(ta < 16.5)
										return 21.9078;
									else
									{
										if(rsrq < -7.5)
										{
											if(rsrq < -8.5)
											{
												if(rsrp < -109.5)
													return 14.742;
												else
													return 9.25569;
											}
											else
											{
												if(payload < 0.75)
													return 16.3265;
												else
												{
													if(cqi < 13)
														return 20.6718;
													else
														return 18.419;
												}
											}
										}
										else
											return 8.45368;
									}
								}
							}
						}
					}
					else
					{
						if(rsrp < -103.5)
						{
							if(velocity < 1.19)
							{
								if(rsrp < -109.5)
									return 18.6674;
								else
								{
									if(ta < 15)
										return 32.7065;
									else
									{
										if(payload < 9.5)
											return 26.47085;
										else
											return 29.0592;
									}
								}
							}
							else
							{
								if(rsrp < -106.5)
								{
									if(cqi < 6.5)
										return 7.29528;
									else
									{
										if(rsrp < -107.5)
										{
											if(rsrp < -114)
												return 14.3113;
											else
											{
												if(rsrq < -8.5)
												{
													if(rsrq < -9.5)
													{
														if(velocity < 12.715)
														{
															if(velocity < 9.16)
															{
																if(rsrp < -110)
																	return 19.0577;
																else
																	return 21.1206;
															}
															else
															{
																if(payload < 9.5)
																	return 5.29334;
																else
																	return 17.2154;
															}
														}
														else
														{
															if(rsrp < -111.5)
															{
																if(cqi < 8)
																	return 19.4512;
																else
																	return 21.1161;
															}
															else
																return 23.76;
														}
													}
													else
													{
														if(cqi < 10)
														{
															if(payload < 8.5)
																return 24.2057;
															else
																return 25.4148;
														}
														else
															return 21.0112;
													}
												}
												else
												{
													if(velocity < 6.725)
														return 20.2212;
													else
														return 11.14025;
												}
											}
										}
										else
										{
											if(ta < 15.5)
												return 16.2885;
											else
											{
												if(cqi < 14.5)
												{
													if(rsrq < -10)
														return 36.8179;
													else
													{
														if(sinr < 5.5)
															return 24.5506;
														else
															return 28.2355666667;
													}
												}
												else
													return 15.0447;
											}
										}
									}
								}
								else
								{
									if(sinr < 8.5)
									{
										if(payload < 8.5)
											return 11.6831;
										else
											return 13.7274;
									}
									else
										return 5.70207;
								}
							}
						}
						else
						{
							if(cqi < 7.5)
							{
								if(velocity < 15.905)
									return 11.3983;
								else
								{
									if(rsrq < -8)
										return 15.2745;
									else
										return 17.2202;
								}
							}
							else
							{
								if(ta < 17.5)
								{
									if(rsrp < -86.5)
									{
										if(ta < 15.5)
											return 32.5866;
										else
											return 29.8112;
									}
									else
										return 33.5196;
								}
								else
								{
									if(velocity < 10.505)
										return 32.1371;
									else
										return 43.9998;
								}
							}
						}
					}
				}
				else
				{
					if(rsrp < -100.5)
					{
						if(cell < 13405313.5)
						{
							if(rsrp < -111.5)
							{
								if(ta < 35.5)
								{
									if(sinr < 1.5)
									{
										if(velocity < 8.27)
										{
											if(payload < 5.5)
												return 5.70342;
											else
												return 14.2507;
										}
										else
										{
											if(payload < 6.5)
											{
												if(velocity < 13.085)
													return 2.53995;
												else
													return 4.16509;
											}
											else
												return 6.22084;
										}
									}
									else
									{
										if(rsrp < -113.5)
											return 14.0598;
										else
											return 5.47947;
									}
								}
								else
								{
									if(rsrp < -118.5)
										return 8.42697;
									else
									{
										if(rsrq < -10.5)
										{
											if(ta < 62.5)
												return 8.42359;
											else
											{
												if(sinr < 0)
												{
													if(velocity < 13.265)
														return 7.70713;
													else
														return 0.954658;
												}
												else
													return 1.7220725;
											}
										}
										else
										{
											if(ta < 84.5)
											{
												if(rsrp < -112.5)
												{
													if(ta < 82.5)
													{
														if(rsrp < -114)
															return 0.3456855;
														else
														{
															if(rsrq < -9.5)
																return 2.28572;
															else
																return 0.682193;
														}
													}
													else
													{
														if(cqi < 10)
															return 2.20386;
														else
															return 4.18751;
													}
												}
												else
													return 0.6891215;
											}
											else
												return 0.2021975;
										}
									}
								}
							}
							else
							{
								if(cqi < 6.5)
								{
									if(rsrp < -109.5)
									{
										if(payload < 7.5)
										{
											if(velocity < 4.255)
											{
												if(payload < 0.75)
													return 1.08844;
												else
												{
													if(ta < 17.5)
													{
														if(cqi < 5)
															return 13.1926;
														else
															return 11.3422;
													}
													else
													{
														if(payload < 3)
															return 16.7715;
														else
															return 13.7534;
													}
												}
											}
											else
											{
												if(sinr < 0.5)
													return 7.927555;
												else
													return 1.78691;
											}
										}
										else
										{
											if(cqi < 5)
												return 26.305;
											else
												return 21.4549;
										}
									}
									else
									{
										if(cell < 13157125.5)
											return 11.8343;
										else
										{
											if(payload < 1.55)
											{
												if(ta < 21)
													return 2.13334;
												else
													return 0.091013;
											}
											else
											{
												if(payload < 4.5)
													return 6.33569;
												else
												{
													if(sinr < 5.5)
													{
														if(ta < 19)
															return 4.163435;
														else
															return 2.7505533333;
													}
													else
														return 5.82189;
												}
											}
										}
									}
								}
								else
								{
									if(cell < 13067273.5)
									{
										if(rsrq < -7.5)
										{
											if(payload < 5)
												return 6.01956;
											else
												return 3.58494;
										}
										else
											return 1.02704;
									}
									else
									{
										if(payload < 1.5)
										{
											if(cell < 13250945)
											{
												if(ta < 18)
												{
													if(sinr < 5.5)
														return 17.7778;
													else
														return 15.1803;
												}
												else
												{
													if(rsrq < -7.5)
														return 8.905205;
													else
														return 7.15564;
												}
											}
											else
											{
												if(sinr < 3.5)
												{
													if(cell < 13392904.5)
													{
														if(velocity < 9.75)
															return 5.75542;
														else
															return 15.1515;
													}
													else
													{
														if(rsrq < -7.5)
															return 7.36291;
														else
															return 4.6243;
													}
												}
												else
												{
													if(rsrq < -9.5)
														return 1.97267;
													else
													{
														if(rsrq < -8.5)
															return 4.9441733333;
														else
															return 2.72944;
													}
												}
											}
										}
										else
										{
											if(rsrq < -10.5)
											{
												if(payload < 2.5)
													return 1.18046;
												else
												{
													if(rsrp < -108.5)
													{
														if(cell < 13392905)
															return 14.7765;
														else
															return 9.77995;
													}
													else
													{
														if(ta < 19.5)
															return 8.23681;
														else
															return 3.44795;
													}
												}
											}
											else
											{
												if(f < 2247.55)
												{
													if(f < 1362.55)
													{
														if(sinr < -2)
															return 28.5459;
														else
														{
															if(ta < 19.5)
																return 8.1711225;
															else
																return 4.01808;
														}
													}
													else
													{
														if(sinr < -7)
															return 3.27694;
														else
														{
															if(sinr < 1.5)
															{
																if(ta < 20.5)
																{
																	if(rsrp < -109)
																		return 23.6998;
																	else
																	{
																		if(rsrp < -104.5)
																			return 28.2686;
																		else
																			return 25.2167;
																	}
																}
																else
																	return 15.3945;
															}
															else
															{
																if(ta < 14.5)
																{
																	if(rsrp < -107)
																	{
																		if(cqi < 9.5)
																		{
																			if(payload < 3.5)
																				return 19.8758;
																			else
																			{
																				if(payload < 6.5)
																					return 22.7273;
																				else
																					return 25.9846;
																			}
																		}
																		else
																		{
																			if(rsrq < -8.5)
																				return 21.1921;
																			else
																				return 6.83878;
																		}
																	}
																	else
																		return 30.4569;
																}
																else
																{
																	if(ta < 16.5)
																	{
																		if(payload < 5.5)
																		{
																			if(sinr < 5)
																			{
																				if(payload < 3.5)
																					return 16.8776;
																				else
																					return 27.2851;
																			}
																			else
																			{
																				if(cell < 13392905.5)
																					return 11.7302;
																				else
																				{
																					if(payload < 4.5)
																						return 17.9171;
																					else
																						return 16.5494;
																				}
																			}
																		}
																		else
																		{
																			if(velocity < 0.93)
																				return 6.41026;
																			else
																			{
																				if(ta < 15.5)
																				{
																					if(velocity < 7.815)
																						return 11.6486;
																					else
																						return 9.98129;
																				}
																				else
																				{
																					if(payload < 6.5)
																						return 18.4403;
																					else
																					{
																						if(velocity < 13.27)
																							return 13.89745;
																						else
																							return 17.3837;
																					}
																				}
																			}
																		}
																	}
																	else
																	{
																		if(payload < 3.5)
																			return 14.420925;
																		else
																		{
																			if(velocity < 12.845)
																			{
																				if(cell < 13392905)
																				{
																					if(rsrq < -7)
																					{
																						if(rsrp < -109.5)
																							return 18.0138;
																						else
																							return 15.450975;
																					}
																					else
																						return 23.1968;
																				}
																				else
																					return 22.0994;
																			}
																			else
																				return 28.1442;
																		}
																	}
																}
															}
														}
													}
												}
												else
												{
													if(ta < 18)
													{
														if(cqi < 9)
															return 8.94454;
														else
															return 4.77644;
													}
													else
														return 21.4541;
												}
											}
										}
									}
								}
							}
						}
						else
						{
							if(ta < 21.5)
							{
								if(velocity < 11.225)
								{
									if(cell < 13473922.5)
									{
										if(payload < 5.5)
											return 0.772872;
										else
											return 2.96626;
									}
									else
										return 1.281661;
								}
								else
								{
									if(velocity < 23.04)
										return 6.67781;
									else
									{
										if(payload < 7)
										{
											if(rsrp < -104)
											{
												if(velocity < 28.76)
													return 2.43977;
												else
													return 1.0093555;
											}
											else
												return 7.84317;
										}
										else
											return 9.409;
									}
								}
							}
							else
							{
								if(rsrp < -104)
									return 1.2057493684;
								else
									return 4.04449;
							}
						}
					}
					else
					{
						if(velocity < 33.675)
						{
							if(ta < 13.5)
							{
								if(payload < 4.5)
								{
									if(cell < 13463809.5)
									{
										if(sinr < 0.5)
											return 5.07185;
										else
										{
											if(rsrq < -9.5)
											{
												if(sinr < 3)
													return 21.5054;
												else
												{
													if(payload < 2)
														return 17.2043;
													else
														return 20.22785;
												}
											}
											else
											{
												if(cqi < 9.5)
												{
													if(cqi < 8)
														return 23.7741;
													else
														return 18.0587;
												}
												else
													return 30.7692;
											}
										}
									}
									else
									{
										if(velocity < 16.3)
											return 8.94855;
										else
										{
											if(rsrp < -88.5)
											{
												if(rsrq < -8.5)
													return 14.67945;
												else
													return 13.2013;
											}
											else
												return 19.0779;
										}
									}
								}
								else
								{
									if(cqi < 10.5)
									{
										if(cell < 13324418)
											return 8.43526;
										else
										{
											if(rsrp < -95.5)
											{
												if(rsrp < -97.5)
												{
													if(rsrq < -9.5)
													{
														if(cqi < 7)
															return 24.2571;
														else
															return 25.5918;
													}
													else
														return 27.5862;
												}
												else
													return 22.6886;
											}
											else
												return 18.2815;
										}
									}
									else
										return 34.84368;
								}
							}
							else
							{
								if(cqi < 8.5)
								{
									if(cqi < 6.5)
									{
										if(cell < 13212161)
											return 18.6741;
										else
										{
											if(velocity < 17.245)
												return 8.3806375;
											else
												return 2.634325;
										}
									}
									else
									{
										if(rsrq < -8.5)
											return 27.3038;
										else
										{
											if(ta < 22)
											{
												if(payload < 3.5)
													return 11.0144285714;
												else
													return 8.21566;
											}
											else
												return 14.8148;
										}
									}
								}
								else
								{
									if(ta < 29)
									{
										if(velocity < 15.395)
										{
											if(cqi < 12.5)
											{
												if(velocity < 14.23)
												{
													if(rsrp < -95)
														return 5.36688;
													else
													{
														if(rsrp < -87)
														{
															if(payload < 1.5)
																return 11.8519;
															else
															{
																if(velocity < 10.36)
																{
																	if(payload < 2.5)
																		return 13.5135;
																	else
																		return 14.944;
																}
																else
																{
																	if(ta < 23)
																	{
																		if(rsrp < -89.5)
																		{
																			if(payload < 2.5)
																				return 14.6119;
																			else
																				return 16.4731666667;
																		}
																		else
																			return 19.2771;
																	}
																	else
																		return 13.4228;
																}
															}
														}
														else
														{
															if(velocity < 11.31)
																return 15.6517;
															else
																return 26.2664;
														}
													}
												}
												else
												{
													if(velocity < 14.52)
													{
														if(rsrp < -94.5)
															return 24.3531;
														else
															return 16.9851;
													}
													else
													{
														if(payload < 4.5)
														{
															if(payload < 3.5)
																return 18.75;
															else
																return 16.6754;
														}
														else
															return 14.62665;
													}
												}
											}
											else
											{
												if(rsrq < -7.5)
													return 19.8883;
												else
													return 25.3623;
											}
										}
										else
										{
											if(cqi < 9.5)
											{
												if(rsrp < -94.5)
													return 7.769885;
												else
													return 1.25313;
											}
											else
											{
												if(cell < 13470339)
												{
													if(rsrp < -98)
														return 10.3359;
													else
														return 11.713;
												}
												else
													return 17.4027;
											}
										}
									}
									else
									{
										if(sinr < 8.5)
										{
											if(rsrp < -96)
											{
												if(velocity < 12.69)
												{
													if(payload < 6.5)
														return 25.5428;
													else
														return 19.4766;
												}
												else
												{
													if(cqi < 14)
														return 20.4082;
													else
														return 13.34292;
												}
											}
											else
											{
												if(rsrp < -94.5)
													return 41.0959;
												else
													return 21.0526;
											}
										}
										else
											return 35.2423;
									}
								}
							}
						}
						else
						{
							if(velocity < 34.255)
							{
								if(rsrq < -7)
									return 3.43349;
								else
									return 0.793654;
							}
							else
							{
								if(ta < 33)
								{
									if(payload < 1.75)
										return 5.43366;
									else
									{
										if(rsrq < -7.5)
											return 7.98403;
										else
											return 6.63656;
									}
								}
								else
									return 11.0619;
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if(payload < 1.5)
		{
			if(payload < 0.75)
			{
				if(sinr < 12.5)
				{
					if(velocity < 7.89)
					{
						if(rsrq < -9)
							return 14.7601;
						else
							return 16.0041;
					}
					else
					{
						if(sinr < 11.5)
						{
							if(cqi < 14.5)
							{
								if(cqi < 13.5)
								{
									if(velocity < 8.665)
										return 8.33337;
									else
										return 10.05895;
								}
								else
									return 7.3869125;
							}
							else
								return 14.0845;
						}
						else
						{
							if(cqi < 8.5)
								return 10;
							else
								return 6.06061;
						}
					}
				}
				else
				{
					if(cqi < 11.5)
					{
						if(payload < 0.3)
						{
							if(ta < 9.5)
							{
								if(ta < 6.5)
									return 19.5123;
								else
									return 13.1148;
							}
							else
							{
								if(rsrq < -7.5)
								{
									if(sinr < 15.5)
										return 8.00003;
									else
									{
										if(sinr < 22.5)
											return 10.8109;
										else
											return 14.0351;
									}
								}
								else
									return 7.2793757143;
							}
						}
						else
						{
							if(cell < 13098881.5)
							{
								if(velocity < 10.855)
								{
									if(sinr < 18.5)
										return 26.9673666667;
									else
										return 32.2581;
								}
								else
								{
									if(rsrp < -102)
										return 18.5185;
									else
										return 21.8638;
								}
							}
							else
							{
								if(velocity < 14.515)
								{
									if(cqi < 9.5)
									{
										if(velocity < 10.91)
										{
											if(sinr < 19)
												return 20.9516;
											else
											{
												if(sinr < 24.5)
													return 19.5122;
												else
													return 18.1818;
											}
										}
										else
											return 26.1438;
									}
									else
									{
										if(velocity < 10.185)
										{
											if(velocity < 6.925)
											{
												if(rsrp < -84)
													return 17.6991;
												else
													return 18.8679;
											}
											else
												return 20.10255;
										}
										else
										{
											if(rsrq < -8.5)
												return 11.0497;
											else
												return 17.977775;
										}
									}
								}
								else
									return 9.80392;
							}
						}
					}
					else
					{
						if(cell < 12890117.5)
						{
							if(rsrp < -108)
							{
								if(payload < 0.3)
									return 16.0001;
								else
									return 20.8333;
							}
							else
								return 133.334;
						}
						else
						{
							if(cqi < 14.5)
							{
								if(ta < 4.5)
								{
									if(rsrp < -87.5)
										return 34.188;
									else
									{
										if(sinr < 25)
										{
											if(velocity < 10.965)
											{
												if(rsrq < -7)
													return 27.2159;
												else
													return 29.6296;
											}
											else
											{
												if(ta < 3.5)
												{
													if(rsrq < -7)
														return 23.2558;
													else
														return 25.0001;
												}
												else
												{
													if(sinr < 18)
														return 19.4175;
													else
														return 17.6211;
												}
											}
										}
										else
										{
											if(velocity < 2.805)
											{
												if(cqi < 13.5)
												{
													if(rsrp < -79)
														return 34.4828;
													else
														return 29.6296;
												}
												else
													return 28.169;
											}
											else
												return 23.1214;
										}
									}
								}
								else
								{
									if(cqi < 12.5)
										return 14.5455;
									else
									{
										if(ta < 12.5)
										{
											if(payload < 0.3)
												return 21.0527;
											else
												return 22.83262;
										}
										else
											return 25.974;
									}
								}
							}
							else
							{
								if(payload < 0.3)
								{
									if(velocity < 15.395)
									{
										if(rsrp < -70)
											return 6.8757533333;
										else
										{
											if(sinr < 20)
												return 5.71431;
											else
												return 10.2564;
										}
									}
									else
										return 11.4286;
								}
								else
								{
									if(cell < 12973569.5)
									{
										if(rsrp < -75.5)
											return 33.8983;
										else
											return 21.6216;
									}
									else
									{
										if(ta < 6.5)
										{
											if(sinr < 23.5)
											{
												if(f < 2247.55)
												{
													if(velocity < 7.54)
														return 23.2226;
													else
														return 19.7044;
												}
												else
													return 27.3973;
											}
											else
											{
												if(rsrp < -70)
													return 24.3920666667;
												else
													return 32.5203;
											}
										}
										else
										{
											if(cell < 13473672.5)
											{
												if(ta < 43.5)
												{
													if(cell < 13284105)
													{
														if(sinr < 17.5)
															return 11.9048;
														else
															return 8.7146;
													}
													else
													{
														if(rsrp < -87)
														{
															if(rsrp < -97)
																return 14.2857;
															else
																return 16.5289;
														}
														else
														{
															if(velocity < 15.34)
																return 19.6078;
															else
																return 22.3464;
														}
													}
												}
												else
													return 22.2222;
											}
											else
												return 29.1971;
										}
									}
								}
							}
						}
					}
				}
			}
			else
			{
				if(velocity < 11.585)
				{
					if(rsrq < -4.5)
					{
						if(cqi < 9.5)
						{
							if(cqi < 8.5)
							{
								if(rsrq < -11)
									return 22.7273;
								else
									return 19.1847;
							}
							else
							{
								if(cell < 13462533.5)
								{
									if(cell < 13099785)
										return 27.8746;
									else
										return 29.7398;
								}
								else
									return 26.2295;
							}
						}
						else
						{
							if(velocity < 5.965)
							{
								if(ta < 6)
								{
									if(sinr < 27.5)
									{
										if(rsrp < -85)
											return 43.956;
										else
											return 37.83035;
									}
									else
										return 30.4183;
								}
								else
								{
									if(rsrq < -7.5)
									{
										if(rsrq < -8.5)
											return 29.4118;
										else
										{
											if(ta < 12)
												return 23.0548;
											else
												return 21.164;
										}
									}
									else
									{
										if(f < 1362.55)
											return 32.6531;
										else
											return 38.0952;
									}
								}
							}
							else
							{
								if(rsrq < -7.5)
								{
									if(cqi < 11)
									{
										if(sinr < 24)
											return 34.3348;
										else
											return 32.3887;
									}
									else
										return 36.3636;
								}
								else
								{
									if(cqi < 13.5)
									{
										if(ta < 5.5)
										{
											if(rsrq < -5.5)
												return 29.0909;
											else
												return 31.4961;
										}
										else
											return 32.3887;
									}
									else
									{
										if(rsrq < -6.5)
											return 25.641;
										else
											return 27.3038;
									}
								}
							}
						}
					}
					else
					{
						if(sinr < 23)
							return 33.8983;
						else
							return 46.5116;
					}
				}
				else
				{
					if(rsrq < -7.5)
					{
						if(velocity < 16.64)
						{
							if(rsrp < -87.5)
							{
								if(f < 1362.55)
								{
									if(sinr < 17.5)
									{
										if(sinr < 13.5)
											return 5.98161;
										else
											return 1.35616;
									}
									else
										return 13.2231;
								}
								else
								{
									if(ta < 43)
										return 20.4604;
									else
										return 17.0213;
								}
							}
							else
							{
								if(sinr < 12.5)
									return 30.4183;
								else
									return 22.409;
							}
						}
						else
						{
							if(rsrq < -10)
								return 26.4026;
							else
								return 27.972;
						}
					}
					else
					{
						if(rsrp < -73)
						{
							if(rsrp < -83.5)
							{
								if(rsrp < -87.5)
								{
									if(rsrq < -6.5)
									{
										if(sinr < 14)
											return 30.1887;
										else
											return 23.1214;
									}
									else
									{
										if(rsrp < -89)
											return 19.2308;
										else
											return 15.9681;
									}
								}
								else
								{
									if(ta < 13)
									{
										if(cqi < 12)
											return 28.9855;
										else
											return 26.4901;
									}
									else
										return 32.7869;
								}
							}
							else
							{
								if(ta < 12)
									return 15.3551;
								else
								{
									if(rsrp < -77.5)
										return 21.4477;
									else
										return 18.4758;
								}
							}
						}
						else
						{
							if(rsrp < -69)
								return 33.4728;
							else
								return 27.6817;
						}
					}
				}
			}
		}
		else
		{
			if(sinr < 17.5)
			{
				if(velocity < 12.815)
				{
					if(rsrp < -71.5)
					{
						if(ta < 12)
						{
							if(rsrq < -7.5)
							{
								if(cell < 13394184)
								{
									if(velocity < 5.715)
									{
										if(payload < 2.5)
											return 18.412;
										else
										{
											if(ta < 9.5)
											{
												if(ta < 5.5)
													return 63.9432;
												else
												{
													if(cell < 13284610)
														return 48.6322;
													else
														return 53.0973;
												}
											}
											else
											{
												if(sinr < 10.5)
													return 58.2053;
												else
													return 73.9372;
											}
										}
									}
									else
									{
										if(payload < 9)
										{
											if(rsrq < -11)
												return 54.4218;
											else
											{
												if(sinr < 16.5)
												{
													if(sinr < 13.5)
													{
														if(rsrp < -82.5)
															return 41.3365;
														else
															return 38.2318;
													}
													else
													{
														if(ta < 9)
														{
															if(velocity < 7.47)
																return 34.2857;
															else
																return 32.4324;
														}
														else
															return 35.8142;
													}
												}
												else
													return 54.8885;
											}
										}
										else
										{
											if(rsrp < -94)
												return 15.1831;
											else
												return 28.2386;
										}
									}
								}
								else
								{
									if(ta < 4.5)
									{
										if(rsrp < -85.5)
											return 21.2052;
										else
										{
											if(sinr < 11.5)
											{
												if(payload < 6.5)
												{
													if(velocity < 1.395)
														return 18.8679;
													else
														return 24.6265;
												}
												else
													return 15.8967;
											}
											else
											{
												if(rsrp < -81.5)
												{
													if(sinr < 16.5)
													{
														if(payload < 5)
															return 38.835;
														else
															return 35.8543;
													}
													else
														return 21.9479;
												}
												else
												{
													if(cqi < 13)
													{
														if(rsrq < -9.5)
															return 25.1572;
														else
															return 27.3785;
													}
													else
													{
														if(payload < 5.5)
															return 28.6996;
														else
															return 31.8725;
													}
												}
											}
										}
									}
									else
									{
										if(velocity < 10.935)
										{
											if(rsrp < -97)
											{
												if(rsrq < -8.5)
													return 25.1197333333;
												else
													return 18.3627;
											}
											else
											{
												if(payload < 4)
												{
													if(velocity < 0.23)
														return 34.7323;
													else
														return 29.7588666667;
												}
												else
												{
													if(sinr < 16.5)
														return 26.481;
													else
														return 29.3501;
												}
											}
										}
										else
										{
											if(payload < 8.5)
												return 34.5253;
											else
												return 38.1316;
										}
									}
								}
							}
							else
							{
								if(cell < 13681415.5)
								{
									if(rsrp < -86.5)
									{
										if(payload < 7.5)
										{
											if(f < 1362.55)
												return 7.45573;
											else
											{
												if(rsrq < -6.5)
												{
													if(ta < 10.5)
													{
														if(payload < 5.5)
														{
															if(payload < 3.5)
															{
																if(cqi < 10.5)
																	return 33.195;
																else
																	return 31.3725;
															}
															else
																return 28.6944;
														}
														else
														{
															if(rsrp < -98.5)
																return 31.4961;
															else
															{
																if(ta < 4)
																	return 36.73385;
																else
																	return 42.7807;
															}
														}
													}
													else
														return 18.8531;
												}
												else
												{
													if(sinr < 12.5)
														return 50.7937;
													else
													{
														if(ta < 8)
														{
															if(rsrp < -102.5)
																return 42.9185;
															else
																return 40.201;
														}
														else
															return 33.1263;
													}
												}
											}
										}
										else
										{
											if(rsrp < -88.5)
											{
												if(sinr < 12)
												{
													if(cell < 13532419)
													{
														if(rsrp < -91.5)
														{
															if(payload < 8.5)
																return 32.2418;
															else
																return 33.4417;
														}
														else
															return 36.9302;
													}
													else
														return 45.6853;
												}
												else
												{
													if(ta < 10)
													{
														if(rsrq < -6.5)
														{
															if(payload < 9)
																return 49.961;
															else
																return 51.2164;
														}
														else
															return 45.7143;
													}
													else
													{
														if(velocity < 2.64)
														{
															if(rsrp < -98.5)
																return 58.8776;
															else
																return 56.1798;
														}
														else
															return 44.6927;
													}
												}
											}
											else
												return 73.903;
										}
									}
									else
									{
										if(velocity < 10.62)
										{
											if(ta < 5.5)
											{
												if(rsrp < -85)
												{
													if(cqi < 11.5)
													{
														if(sinr < 13.5)
															return 51.8639;
														else
															return 50.1175;
													}
													else
														return 41.4508;
												}
												else
												{
													if(rsrq < -6.5)
													{
														if(payload < 8)
															return 62.8040333333;
														else
															return 65.3951;
													}
													else
													{
														if(cqi < 10.5)
															return 50.8834;
														else
															return 56.0748;
													}
												}
											}
											else
											{
												if(cell < 13175301.5)
													return 27.1532;
												else
												{
													if(ta < 6.5)
														return 38.0952;
													else
														return 46.4217;
												}
											}
										}
										else
										{
											if(rsrp < -84.5)
											{
												if(sinr < 13.5)
													return 29.5749;
												else
													return 77.2201;
											}
											else
											{
												if(rsrp < -78)
												{
													if(payload < 3.5)
														return 27.2727;
													else
													{
														if(rsrp < -83.5)
														{
															if(sinr < 11.5)
																return 34.1672;
															else
																return 30.1075;
														}
														else
														{
															if(cqi < 11)
															{
																if(rsrp < -82)
																	return 42.735;
																else
																	return 39.5795;
															}
															else
															{
																if(payload < 6.5)
																	return 36.6495;
																else
																	return 37.9404;
															}
														}
													}
												}
												else
													return 48.9796;
											}
										}
									}
								}
								else
								{
									if(rsrp < -102)
										return 24.1619;
									else
									{
										if(payload < 9.5)
											return 32.4455666667;
										else
											return 30.1091;
									}
								}
							}
						}
						else
						{
							if(ta < 18)
							{
								if(rsrp < -91)
								{
									if(payload < 9.5)
									{
										if(rsrq < -7.5)
										{
											if(velocity < 6.435)
											{
												if(sinr < 12.5)
												{
													if(payload < 5.5)
														return 21.6411;
													else
														return 18.7463;
												}
												else
												{
													if(ta < 16.5)
														return 26.55105;
													else
														return 23.9521;
												}
											}
											else
											{
												if(velocity < 12.365)
												{
													if(velocity < 12.04)
													{
														if(f < 1362.55)
															return 36.6972;
														else
														{
															if(sinr < 12.5)
																return 27.9163;
															else
															{
																if(velocity < 9.81)
																	return 31.9858;
																else
																{
																	if(rsrp < -104)
																		return 31.2256;
																	else
																		return 29.4961;
																}
															}
														}
													}
													else
													{
														if(payload < 7.5)
															return 38.4615;
														else
															return 43.2173;
													}
												}
												else
													return 24.666;
											}
										}
										else
										{
											if(rsrp < -98.5)
											{
												if(cqi < 9.5)
													return 22.3568;
												else
												{
													if(ta < 15)
													{
														if(payload < 7)
															return 38.9105;
														else
															return 30.2648;
													}
													else
													{
														if(sinr < 12.5)
															return 27.4391;
														else
															return 29.484;
													}
												}
											}
											else
											{
												if(ta < 16.5)
													return 53.2826;
												else
													return 41.11385;
											}
										}
									}
									else
									{
										if(rsrp < -98.5)
											return 23.2491;
										else
											return 60.6061;
									}
								}
								else
								{
									if(ta < 15)
									{
										if(cqi < 14)
											return 13.4939;
										else
											return 9.82198;
									}
									else
										return 23.0263;
								}
							}
							else
							{
								if(rsrq < -8.5)
								{
									if(sinr < 13)
										return 11.4695;
									else
										return 16.795;
								}
								else
								{
									if(cqi < 9.5)
										return 20.1005;
									else
										return 22.6164714286;
								}
							}
						}
					}
					else
					{
						if(ta < 3)
							return 42.1607;
						else
						{
							if(sinr < 13.5)
								return 37.6028;
							else
							{
								if(sinr < 14.5)
								{
									if(payload < 7.5)
										return 85.2359;
									else
										return 59.3142;
								}
								else
								{
									if(rsrq < -5.5)
									{
										if(rsrp < -67)
											return 60.8365;
										else
											return 64.5257;
									}
									else
										return 67.2269;
								}
							}
						}
					}
				}
				else
				{
					if(f < 1362.55)
					{
						if(sinr < 12.5)
						{
							if(cell < 13395457.5)
							{
								if(ta < 25.5)
								{
									if(rsrq < -11.5)
										return 9.3367;
									else
									{
										if(rsrp < -84)
										{
											if(payload < 9)
											{
												if(velocity < 34.08)
												{
													if(cell < 13284738.5)
													{
														if(rsrp < -89.5)
															return 24.7022;
														else
															return 29.3713;
													}
													else
													{
														if(payload < 5.5)
															return 33.264;
														else
															return 35.6461;
													}
												}
												else
													return 48.5216;
											}
											else
											{
												if(velocity < 17.205)
													return 26.3244;
												else
												{
													if(rsrp < -89.5)
														return 20.5233;
													else
														return 22.5797;
												}
											}
										}
										else
											return 58.5774;
									}
								}
								else
									return 6.75533;
							}
							else
							{
								if(rsrp < -96.5)
								{
									if(velocity < 14.29)
									{
										if(sinr < 10.5)
											return 6.7919233333;
										else
											return 4.78813;
									}
									else
									{
										if(ta < 10)
											return 3.13529;
										else
											return 1.13917;
									}
								}
								else
								{
									if(rsrq < -7.5)
									{
										if(payload < 2.5)
										{
											if(rsrq < -10.5)
												return 17.9775;
											else
												return 27.7296;
										}
										else
										{
											if(cqi < 10.5)
											{
												if(velocity < 24.365)
												{
													if(rsrq < -8.5)
														return 18.9026;
													else
														return 15.8927;
												}
												else
													return 26.0728;
											}
											else
											{
												if(cell < 13410689.5)
													return 14.9184;
												else
												{
													if(rsrp < -88)
														return 8.57858;
													else
														return 6.62252;
												}
											}
										}
									}
									else
									{
										if(payload < 8)
										{
											if(payload < 5)
												return 7.36695;
											else
												return 9.375;
										}
										else
											return 14.2908;
									}
								}
							}
						}
						else
						{
							if(velocity < 13.93)
							{
								if(rsrq < -7)
								{
									if(rsrp < -85.5)
									{
										if(cell < 13400066)
											return 29.9252;
										else
											return 35.593875;
									}
									else
									{
										if(payload < 6)
											return 49.3827;
										else
											return 44.0098;
									}
								}
								else
								{
									if(ta < 6.5)
										return 14.739;
									else
										return 31.5706;
								}
							}
							else
							{
								if(cell < 13395457.5)
								{
									if(rsrq < -9)
										return 12.9576;
									else
									{
										if(rsrp < -81.5)
										{
											if(sinr < 16.5)
											{
												if(rsrp < -92.5)
												{
													if(payload < 7.5)
														return 27.3839;
													else
														return 24.3902;
												}
												else
												{
													if(ta < 26)
													{
														if(cqi < 9)
															return 33.0579;
														else
															return 27.404225;
													}
													else
														return 32.0481;
												}
											}
											else
												return 43.7756;
										}
										else
										{
											if(velocity < 17.505)
												return 38.3101;
											else
												return 64.9087;
										}
									}
								}
								else
								{
									if(cell < 13415298)
									{
										if(rsrp < -76)
										{
											if(velocity < 23.19)
												return 15.3286;
											else
											{
												if(payload < 9)
													return 23.6416333333;
												else
													return 21.2033;
											}
										}
										else
											return 13.2177;
									}
									else
									{
										if(sinr < 14.5)
										{
											if(velocity < 21.8)
											{
												if(payload < 5)
													return 19.6078;
												else
												{
													if(ta < 21)
														return 14.6982;
													else
														return 10.6484;
												}
											}
											else
												return 7.93651;
										}
										else
											return 9.157325;
									}
								}
							}
						}
					}
					else
					{
						if(rsrp < -87.5)
						{
							if(ta < 70.5)
							{
								if(velocity < 14.515)
								{
									if(velocity < 14.345)
									{
										if(velocity < 14.09)
										{
											if(payload < 2.5)
												return 15.0094;
											else
											{
												if(rsrq < -7.5)
												{
													if(cqi < 9)
													{
														if(rsrp < -104.5)
														{
															if(payload < 6.5)
																return 35.1262;
															else
																return 32.1429;
														}
														else
															return 29.2581;
													}
													else
													{
														if(velocity < 13.125)
															return 36.6133;
														else
														{
															if(velocity < 13.605)
															{
																if(ta < 16.5)
																	return 25.1309;
																else
																{
																	if(rsrq < -8.5)
																		return 22.679;
																	else
																		return 20.0753;
																}
															}
															else
															{
																if(payload < 7.5)
																	return 32.4826;
																else
																	return 25.4676;
															}
														}
													}
												}
												else
												{
													if(cell < 12854793.5)
														return 56.2588;
													else
													{
														if(cqi < 5.5)
															return 24.3161;
														else
														{
															if(rsrq < -6.5)
																return 31.25;
															else
															{
																if(cqi < 13)
																{
																	if(velocity < 13.035)
																		return 33.3333;
																	else
																		return 36.0902;
																}
																else
																	return 39.5648;
															}
														}
													}
												}
											}
										}
										else
										{
											if(rsrq < -10)
												return 33.4728;
											else
											{
												if(rsrq < -7.5)
													return 15.0991;
												else
													return 22.9665;
											}
										}
									}
									else
										return 47.4308;
								}
								else
								{
									if(ta < 43.5)
									{
										if(velocity < 14.64)
										{
											if(payload < 8.5)
											{
												if(rsrp < -101.5)
													return 19.3237;
												else
													return 22.3386;
											}
											else
												return 14.8392;
										}
										else
										{
											if(cell < 13099785.5)
											{
												if(rsrq < -8.5)
													return 15.676;
												else
												{
													if(payload < 2.5)
													{
														if(sinr < 14.5)
															return 24.8447;
														else
															return 36.6972;
													}
													else
													{
														if(cqi < 9.5)
															return 33.6606;
														else
														{
															if(payload < 7.5)
																return 35.71035;
															else
																return 37.5783;
														}
													}
												}
											}
											else
											{
												if(payload < 2.5)
													return 13.5478;
												else
												{
													if(payload < 7)
													{
														if(sinr < 15.5)
														{
															if(rsrq < -7)
																return 22.2017;
															else
																return 20.86658;
														}
														else
															return 27.4286;
													}
													else
													{
														if(ta < 15)
															return 32.3232;
														else
															return 28.6353;
													}
												}
											}
										}
									}
									else
										return 11.1111;
								}
							}
							else
							{
								if(rsrp < -107)
									return 4.3483;
								else
									return 9.5058866667;
							}
						}
						else
						{
							if(velocity < 17.505)
							{
								if(cqi < 11.5)
								{
									if(payload < 6.5)
										return 43.7885;
									else
										return 53.4045238095;
								}
								else
								{
									if(ta < 5.5)
										return 27.8192;
									else
									{
										if(payload < 5)
											return 32.8317;
										else
											return 35.6461;
									}
								}
							}
							else
								return 64.9087;
						}
					}
				}
			}
			else
			{
				if(velocity < 12.575)
				{
					if(cell < 13394190)
					{
						if(rsrp < -95.5)
						{
							if(rsrq < -7.5)
							{
								if(payload < 4.5)
									return 19.4489;
								else
								{
									if(sinr < 24.5)
										return 13.3156;
									else
										return 15.6098;
								}
							}
							else
							{
								if(cqi < 10)
									return 19.8388;
								else
								{
									if(cell < 12937097)
										return 58.9474;
									else
									{
										if(rsrp < -99.5)
										{
											if(cqi < 13)
												return 25.417;
											else
												return 34.5988;
										}
										else
										{
											if(cqi < 13.5)
												return 61.4439;
											else
												return 42.1053;
										}
									}
								}
							}
						}
						else
						{
							if(rsrq < -6.5)
							{
								if(cell < 13393540.5)
								{
									if(ta < 2.5)
									{
										if(rsrp < -77.5)
											return 36.6972;
										else
										{
											if(sinr < 24.5)
											{
												if(sinr < 20.5)
													return 59.3081;
												else
													return 54.2741;
											}
											else
											{
												if(rsrp < -74.5)
													return 69.0399;
												else
													return 61.5385;
											}
										}
									}
									else
									{
										if(rsrp < -94.5)
											return 65.0407;
										else
										{
											if(rsrq < -7.5)
											{
												if(rsrp < -91)
													return 29.6296;
												else
													return 31.5956;
											}
											else
											{
												if(sinr < 29.5)
												{
													if(velocity < 5.805)
													{
														if(rsrp < -75)
														{
															if(ta < 6)
															{
																if(ta < 4)
																	return 47.976;
																else
																	return 52.9801;
															}
															else
															{
																if(velocity < 2.03)
																	return 40.1674;
																else
																	return 50.2828;
															}
														}
														else
														{
															if(sinr < 20.5)
																return 62.3782;
															else
															{
																if(sinr < 25)
																	return 54.6697;
																else
																{
																	if(velocity < 2.385)
																		return 45.864;
																	else
																		return 52.6811;
																}
															}
														}
													}
													else
													{
														if(sinr < 21.5)
														{
															if(payload < 8.5)
																return 48.3019;
															else
																return 46.1835;
														}
														else
														{
															if(cqi < 13.5)
																return 43.956;
															else
																return 41.0678;
														}
													}
												}
												else
													return 35.6877;
											}
										}
									}
								}
								else
									return 81.1594;
							}
							else
							{
								if(cell < 13393413)
								{
									if(cell < 12973569.5)
									{
										if(rsrp < -57.5)
										{
											if(sinr < 26)
											{
												if(payload < 9)
												{
													if(rsrp < -94)
														return 45.911;
													else
														return 43.088;
												}
												else
													return 52.8751;
											}
											else
												return 66.6667;
										}
										else
											return 26.5957;
									}
									else
									{
										if(rsrp < -86.5)
										{
											if(rsrq < -5.5)
											{
												if(sinr < 22.5)
													return 50.6329;
												else
													return 58.8235;
											}
											else
											{
												if(rsrq < -4.5)
													return 41.6233;
												else
													return 28.4024;
											}
										}
										else
										{
											if(cqi < 10.5)
											{
												if(rsrp < -67)
												{
													if(sinr < 21.5)
														return 52.8926;
													else
														return 39.3443;
												}
												else
													return 63.1579;
											}
											else
											{
												if(payload < 2.5)
												{
													if(sinr < 22.5)
													{
														if(velocity < 4.53)
															return 41.9948;
														else
															return 74.0741;
													}
													else
													{
														if(rsrp < -68)
															return 47.9536;
														else
															return 41.5584;
													}
												}
												else
												{
													if(payload < 9.5)
													{
														if(sinr < 19.5)
														{
															if(payload < 7.5)
															{
																if(rsrp < -67)
																	return 56.7376;
																else
																	return 65.5738;
															}
															else
																return 47.4308;
														}
														else
														{
															if(rsrp < -81.5)
															{
																if(velocity < 5.425)
																{
																	if(payload < 6.5)
																		return 45.7143;
																	else
																		return 56.1896;
																}
																else
																	return 65.88885;
															}
															else
															{
																if(payload < 4.5)
																{
																	if(ta < 2.5)
																		return 43.5967;
																	else
																	{
																		if(cqi < 12.5)
																			return 76.3723;
																		else
																		{
																			if(rsrp < -72)
																				return 52.8634;
																			else
																			{
																				if(payload < 3.5)
																					return 62.5;
																				else
																					return 56.1404;
																			}
																		}
																	}
																}
																else
																{
																	if(rsrp < -76)
																	{
																		if(ta < 2.5)
																			return 78.2779;
																		else
																		{
																			if(rsrq < -5.5)
																			{
																				if(payload < 8)
																					return 72.7273;
																				else
																					return 55.2147;
																			}
																			else
																			{
																				if(velocity < 9.14)
																					return 64.9526;
																				else
																					return 71.8563;
																			}
																		}
																	}
																	else
																	{
																		if(sinr < 23)
																			return 54.115;
																		else
																		{
																			if(rsrp < -70)
																			{
																				if(ta < 6.5)
																				{
																					if(sinr < 34)
																					{
																						if(ta < 5)
																							return 66.9145;
																						else
																							return 68.7023;
																					}
																					else
																						return 64.257;
																				}
																				else
																					return 65.5738;
																			}
																			else
																				return 71.74072;
																		}
																	}
																}
															}
														}
													}
													else
														return 73.9627;
												}
											}
										}
									}
								}
								else
								{
									if(payload < 5.5)
									{
										if(ta < 4.5)
										{
											if(rsrp < -78.5)
											{
												if(rsrp < -89.5)
													return 68.7679;
												else
												{
													if(payload < 3.5)
														return 57.39316;
													else
														return 63.8978;
												}
											}
											else
												return 72.5076;
										}
										else
										{
											if(rsrp < -87.5)
											{
												if(rsrp < -93)
													return 44.7761;
												else
													return 65.2174;
											}
											else
											{
												if(payload < 3.5)
													return 39.5387;
												else
													return 37.8698;
											}
										}
									}
									else
									{
										if(ta < 7)
										{
											if(sinr < 20)
												return 97.8261;
											else
											{
												if(payload < 9.5)
												{
													if(rsrq < -5.5)
														return 72.1443;
													else
													{
														if(cqi < 13)
															return 84.8057;
														else
															return 82.5806;
													}
												}
												else
													return 92.4855;
											}
										}
										else
										{
											if(velocity < 4.695)
											{
												if(payload < 7.5)
													return 73.7327;
												else
													return 79.558;
											}
											else
											{
												if(payload < 9)
													return 68.8172;
												else
													return 64.9351;
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if(rsrp < -83)
						{
							if(sinr < 23)
							{
								if(payload < 3.5)
								{
									if(rsrp < -85)
										return 34.4333;
									else
										return 31.1284;
								}
								else
								{
									if(rsrp < -100)
										return 42.6099;
									else
										return 45.3686;
								}
							}
							else
								return 18.6812;
						}
						else
						{
							if(sinr < 32)
							{
								if(cell < 13400200)
									return 34.188;
								else
								{
									if(payload < 7.5)
									{
										if(cqi < 11)
											return 51.1727;
										else
										{
											if(f < 2247.55)
												return 47.548575;
											else
												return 46.3097;
										}
									}
									else
									{
										if(payload < 9.5)
											return 42.8831333333;
										else
											return 40.7539;
									}
								}
							}
							else
								return 24.8062;
						}
					}
				}
				else
				{
					if(rsrp < -100.5)
					{
						if(sinr < 25.5)
						{
							if(cqi < 7.5)
							{
								if(payload < 7.5)
									return 2.15866;
								else
									return 6.39375;
							}
							else
							{
								if(velocity < 12.99)
									return 5.64687;
								else
								{
									if(rsrp < -110)
										return 13.8468;
									else
									{
										if(cqi < 10.5)
											return 20.6186;
										else
											return 17.66;
									}
								}
							}
						}
						else
							return 42.2961;
					}
					else
					{
						if(cell < 13392904.5)
						{
							if(velocity < 18.285)
							{
								if(rsrp < -88.5)
								{
									if(f < 2247.55)
									{
										if(sinr < 20.5)
										{
											if(rsrp < -95)
												return 32.1285;
											else
												return 37.8788;
										}
										else
											return 25.0391;
									}
									else
										return 48.401;
								}
								else
								{
									if(rsrp < -72)
									{
										if(velocity < 12.745)
										{
											if(rsrp < -77)
												return 77.1704;
											else
												return 63.4921;
										}
										else
										{
											if(ta < 8)
											{
												if(rsrp < -82.5)
												{
													if(cell < 13121417)
													{
														if(payload < 4.5)
															return 56.338;
														else
															return 58.1818;
													}
													else
														return 37.5147;
												}
												else
												{
													if(f < 2247.55)
													{
														if(payload < 8.5)
															return 61.4678;
														else
															return 63.1025;
													}
													else
														return 59.4796;
												}
											}
											else
											{
												if(rsrq < -5.5)
												{
													if(payload < 4)
													{
														if(rsrp < -80)
															return 61.3027;
														else
															return 53.9326;
													}
													else
													{
														if(cell < 13044996.5)
														{
															if(cqi < 13.5)
															{
																if(sinr < 22.5)
																{
																	if(rsrq < -7)
																		return 42.9338;
																	else
																		return 40.04;
																}
																else
																	return 48.0274;
															}
															else
															{
																if(ta < 17.5)
																{
																	if(sinr < 26)
																		return 40.404;
																	else
																		return 42.4628;
																}
																else
																	return 36.1757;
															}
														}
														else
															return 54.6875;
													}
												}
												else
													return 66.5434;
											}
										}
									}
									else
									{
										if(payload < 9)
										{
											if(sinr < 32)
											{
												if(rsrp < -69)
												{
													if(sinr < 28.5)
														return 35.8343;
													else
														return 39.0244;
												}
												else
												{
													if(payload < 3.5)
														return 51.1727;
													else
													{
														if(rsrp < -65.5)
															return 39.8506;
														else
															return 44.9438;
													}
												}
											}
											else
												return 55.1724;
										}
										else
										{
											if(rsrp < -68)
												return 32.3363;
											else
												return 37.2787;
										}
									}
								}
							}
							else
							{
								if(sinr < 21.5)
								{
									if(cqi < 12.5)
										return 23.0548;
									else
										return 18.5471;
								}
								else
								{
									if(ta < 17.5)
									{
										if(velocity < 23.48)
										{
											if(sinr < 36.5)
											{
												if(rsrp < -72.5)
												{
													if(sinr < 23.5)
														return 31.068;
													else
														return 29.6053;
												}
												else
													return 27.7778;
											}
											else
												return 41.8848;
										}
										else
										{
											if(rsrp < -86.5)
												return 22.7344;
											else
											{
												if(rsrp < -73)
													return 26.7930142857;
												else
													return 28.8288;
											}
										}
									}
									else
									{
										if(payload < 6.5)
											return 66.482;
										else
											return 48.823;
									}
								}
							}
						}
						else
						{
							if(f < 2247.55)
							{
								if(velocity < 16.49)
								{
									if(rsrq < -6.5)
									{
										if(ta < 8.5)
											return 26.8456;
										else
										{
											if(payload < 6)
												return 14.733;
											else
												return 19.5462;
										}
									}
									else
									{
										if(cell < 13404674.5)
										{
											if(rsrp < -80)
												return 60.251;
											else
												return 44.5682;
										}
										else
										{
											if(rsrp < -83)
											{
												if(sinr < 30)
												{
													if(rsrp < -85)
														return 27.9163;
													else
														return 31.355;
												}
												else
													return 35.538;
											}
											else
											{
												if(rsrp < -81.5)
													return 39.4922;
												else
													return 42.6829;
											}
										}
									}
								}
								else
								{
									if(sinr < 20)
										return 10.1497;
									else
									{
										if(ta < 6)
											return 17.2166;
										else
											return 21.1958;
									}
								}
							}
							else
							{
								if(sinr < 29)
								{
									if(ta < 8)
									{
										if(sinr < 20)
											return 49.7958;
										else
										{
											if(rsrq < -5.5)
												return 29.1793;
											else
												return 36.6342;
										}
									}
									else
									{
										if(velocity < 15.905)
										{
											if(sinr < 24)
											{
												if(cell < 13463054.5)
													return 45.3686;
												else
													return 43.8356;
											}
											else
												return 41.6938;
										}
										else
											return 48.7805;
									}
								}
								else
									return 65.7895;
							}
						}
					}
				}
			}
		}
	}
}

float vodafone_dl_tree_5(float payload, float rsrp, float rsrq, float sinr, float cqi, float ta, float velocity, float cell, float f)
{
	if(ta < 11.5)
	{
		if(rsrq < -8.5)
		{
			if(rsrp < -98.5)
			{
				if(sinr < -0.5)
				{
					if(cell < 13284105)
						return 32.6697;
					else
					{
						if(f < 1362.55)
						{
							if(ta < 5.5)
							{
								if(cell < 13612161)
									return 35.5556;
								else
								{
									if(rsrq < -13)
									{
										if(rsrq < -15.5)
											return 15.456;
										else
											return 11.0193;
									}
									else
										return 15.9204;
								}
							}
							else
							{
								if(velocity < 11.315)
								{
									if(sinr < -2.5)
									{
										if(cell < 13622658)
										{
											if(sinr < -5.5)
												return 4.02012;
											else
												return 1.9909975;
										}
										else
										{
											if(ta < 6.5)
												return 6.70354;
											else
												return 4.2734837209;
										}
									}
									else
										return 10.3847184483;
								}
								else
								{
									if(sinr < -3.5)
										return 0.6232690909;
									else
									{
										if(rsrp < -100)
										{
											if(velocity < 15.84)
												return 1.5380180573;
											else
												return 3.54021;
										}
										else
											return 4.21053;
									}
								}
							}
						}
						else
						{
							if(ta < 6)
							{
								if(velocity < 15.235)
								{
									if(rsrp < -114)
										return 12.8411;
									else
										return 16.14815625;
								}
								else
									return 18.8368;
							}
							else
								return 3.8886242857;
						}
					}
				}
				else
				{
					if(payload < 1.5)
					{
						if(velocity < 28.265)
						{
							if(velocity < 13.27)
							{
								if(cell < 13612039.5)
								{
									if(rsrp < -100.5)
									{
										if(rsrp < -105.5)
										{
											if(cqi < 8.5)
												return 15.3257;
											else
												return 17.094;
										}
										else
											return 19.802;
									}
									else
										return 26.2295;
								}
								else
									return 8.0803425;
							}
							else
							{
								if(sinr < 0.5)
									return 13.6054;
								else
								{
									if(rsrp < -105.5)
									{
										if(rsrp < -116)
											return 3.85356;
										else
										{
											if(velocity < 15.15)
												return 1.038134;
											else
												return 3.58746;
										}
									}
									else
									{
										if(ta < 6.5)
											return 8.79121;
										else
											return 3.338975;
									}
								}
							}
						}
						else
							return 39.2157;
					}
					else
					{
						if(ta < 7.5)
						{
							if(velocity < 14.42)
							{
								if(velocity < 9.135)
								{
									if(ta < 5.5)
									{
										if(rsrp < -101.5)
											return 27.4914;
										else
										{
											if(rsrq < -10.5)
											{
												if(payload < 6.5)
												{
													if(cqi < 8.5)
													{
														if(cqi < 7)
															return 21.178;
														else
															return 22.6501;
													}
													else
														return 21.0804;
												}
												else
													return 23.2751;
											}
											else
												return 25.4777;
										}
									}
									else
									{
										if(f < 1745)
										{
											if(rsrp < -102)
												return 19.6399;
											else
											{
												if(rsrp < -99.5)
													return 14.09536;
												else
													return 18.7047;
											}
										}
										else
										{
											if(rsrp < -102)
											{
												if(velocity < 7.16)
												{
													if(rsrp < -105.5)
														return 21.1651666667;
													else
														return 19.6399;
												}
												else
													return 17.5226;
											}
											else
												return 24.8062;
										}
									}
								}
								else
								{
									if(velocity < 12.54)
									{
										if(payload < 4.5)
											return 30.8483;
										else
										{
											if(ta < 6.5)
												return 31.9107;
											else
											{
												if(sinr < 2.5)
													return 48.2291;
												else
												{
													if(rsrq < -10.5)
														return 41.1664;
													else
														return 39.5062;
												}
											}
										}
									}
									else
									{
										if(rsrq < -13)
											return 0.893455;
										else
										{
											if(cqi < 9.5)
											{
												if(velocity < 13.71)
												{
													if(sinr < 7)
													{
														if(rsrq < -10.5)
															return 28.6225;
														else
															return 25.2632;
													}
													else
														return 34.2612;
												}
												else
													return 25.89625;
											}
											else
												return 35.7942;
										}
									}
								}
							}
							else
							{
								if(velocity < 14.75)
									return 13.9188;
								else
								{
									if(payload < 4.5)
										return 0.282101;
									else
									{
										if(rsrq < -12)
											return 5.62522;
										else
											return 9.48804;
									}
								}
							}
						}
						else
						{
							if(sinr < 0.5)
							{
								if(ta < 10)
									return 39.3314;
								else
									return 37.9147;
							}
							else
							{
								if(rsrp < -99.5)
								{
									if(rsrp < -112.5)
										return 11.782;
									else
									{
										if(cell < 13299845.5)
										{
											if(rsrq < -9.5)
											{
												if(cqi < 5.5)
													return 24.9027;
												else
													return 22.9347;
											}
											else
												return 27.8164;
										}
										else
										{
											if(velocity < 9.465)
												return 15.0517;
											else
												return 19.5122;
										}
									}
								}
								else
								{
									if(velocity < 13.77)
										return 7.46037;
									else
										return 11.6853;
								}
							}
						}
					}
				}
			}
			else
			{
				if(payload < 0.75)
				{
					if(ta < 3.5)
						return 36.036;
					else
					{
						if(payload < 0.3)
						{
							if(cqi < 9.5)
							{
								if(velocity < 12.005)
								{
									if(cell < 13284737.5)
										return 3.664375;
									else
										return 7.0622425;
								}
								else
								{
									if(rsrp < -94)
										return 10.8109;
									else
										return 9.19544;
								}
							}
							else
							{
								if(velocity < 11.82)
									return 10.7;
								else
									return 13.3334;
							}
						}
						else
						{
							if(rsrq < -9.5)
							{
								if(sinr < 20.5)
								{
									if(ta < 7.5)
									{
										if(sinr < 11)
										{
											if(cell < 13399560.5)
												return 11.1111;
											else
												return 12.4611;
										}
										else
											return 3.41588;
									}
									else
									{
										if(sinr < 6.5)
										{
											if(rsrp < -93.5)
												return 12.8617;
											else
											{
												if(rsrp < -91.5)
													return 18.8679;
												else
													return 21.8579;
											}
										}
										else
											return 14.7601;
									}
								}
								else
									return 22.3464;
							}
							else
							{
								if(rsrp < -90)
								{
									if(rsrp < -95)
										return 25.974;
									else
										return 31.4961;
								}
								else
									return 19.4175;
							}
						}
					}
				}
				else
				{
					if(cell < 13394818.5)
					{
						if(rsrp < -88.5)
						{
							if(velocity < 10.215)
							{
								if(cell < 13175301.5)
								{
									if(cell < 12938245)
									{
										if(payload < 5.5)
										{
											if(sinr < 13)
												return 18.2763;
											else
											{
												if(velocity < 4.59)
													return 29.6296;
												else
													return 32.4324;
											}
										}
										else
											return 47.0193;
									}
									else
									{
										if(cqi < 6.5)
											return 13.0293;
										else
										{
											if(cqi < 9)
											{
												if(rsrq < -10.5)
												{
													if(sinr < -1)
														return 22.52324;
													else
														return 20.9729;
												}
												else
												{
													if(rsrq < -9.5)
														return 17.2043;
													else
														return 20.9333;
												}
											}
											else
											{
												if(cqi < 10.5)
												{
													if(payload < 3.5)
														return 24.6154;
													else
														return 27.9525;
												}
												else
													return 22.0791;
											}
										}
									}
								}
								else
								{
									if(cell < 13284104.5)
									{
										if(cqi < 6.5)
											return 53.1814;
										else
										{
											if(rsrq < -10.5)
											{
												if(payload < 2)
													return 26.6667;
												else
												{
													if(rsrp < -97.5)
														return 41.3081;
													else
														return 31.8514;
												}
											}
											else
												return 37.5587;
										}
									}
									else
									{
										if(payload < 5)
										{
											if(f < 1362.55)
												return 27.4914;
											else
											{
												if(rsrp < -96.5)
													return 20.2276;
												else
												{
													if(rsrq < -11)
														return 25.3365;
													else
													{
														if(payload < 2.5)
															return 21.0526;
														else
															return 22.4561;
													}
												}
											}
										}
										else
										{
											if(cqi < 11.5)
												return 24.3161;
											else
											{
												if(sinr < 7.5)
													return 30.0188;
												else
													return 38.2775;
											}
										}
									}
								}
							}
							else
							{
								if(cqi < 8)
								{
									if(velocity < 13.14)
									{
										if(cell < 13175301.5)
											return 36.9686;
										else
											return 40.6091;
									}
									else
										return 47.105;
								}
								else
								{
									if(rsrp < -93.5)
										return 31.3656;
									else
									{
										if(rsrq < -10.5)
											return 43.214;
										else
										{
											if(payload < 9)
											{
												if(ta < 9.5)
													return 34.1116142857;
												else
													return 35.8142;
											}
											else
												return 32.3756;
										}
									}
								}
							}
						}
						else
						{
							if(cqi < 6.5)
							{
								if(rsrp < -77.5)
									return 22.4719;
								else
									return 24.2319;
							}
							else
							{
								if(payload < 4.5)
								{
									if(rsrq < -10.5)
									{
										if(ta < 6.5)
										{
											if(cell < 13183237)
												return 39.8506;
											else
												return 37.5970666667;
										}
										else
										{
											if(rsrq < -11.5)
												return 54.4218;
											else
												return 45.977;
										}
									}
									else
									{
										if(ta < 8.5)
										{
											if(rsrp < -77)
											{
												if(cqi < 11.5)
													return 34.2857;
												else
													return 38.2318;
											}
											else
												return 33.2295;
										}
										else
											return 29.4118;
									}
								}
								else
								{
									if(rsrp < -81.5)
									{
										if(rsrp < -87.5)
											return 40.9417;
										else
										{
											if(ta < 8.5)
											{
												if(rsrp < -83)
												{
													if(rsrp < -85.5)
														return 54.1030666667;
													else
														return 51.7613;
												}
												else
													return 58.5774;
											}
											else
											{
												if(payload < 7)
													return 73.9372;
												else
													return 58.2053;
											}
										}
									}
									else
									{
										if(ta < 2.5)
											return 38.055;
										else
											return 40.59195;
									}
								}
							}
						}
					}
					else
					{
						if(payload < 9.5)
						{
							if(rsrq < -10.5)
							{
								if(cqi < 7.5)
								{
									if(rsrp < -92.5)
									{
										if(ta < 5.5)
										{
											if(payload < 2.5)
												return 17.9775;
											else
												return 20.6186;
										}
										else
										{
											if(velocity < 0.835)
												return 19.4293;
											else
											{
												if(sinr < 3.5)
													return 11.3933;
												else
													return 12.6995;
											}
										}
									}
									else
										return 7.35069;
								}
								else
								{
									if(ta < 7.5)
									{
										if(payload < 6.5)
										{
											if(rsrp < -93)
											{
												if(payload < 3.5)
												{
													if(sinr < 12.5)
														return 29.1262;
													else
														return 25.2765;
												}
												else
													return 17.1215;
											}
											else
											{
												if(sinr < 9)
												{
													if(payload < 5)
														return 34.01845;
													else
														return 32.0213;
												}
												else
												{
													if(payload < 1.5)
														return 26.4026;
													else
														return 30.303;
												}
											}
										}
										else
										{
											if(velocity < 15.75)
											{
												if(f < 1745)
												{
													if(ta < 5)
														return 14.0633;
													else
														return 9.85357;
												}
												else
													return 18.2492;
											}
											else
												return 21.0843;
										}
									}
									else
									{
										if(sinr < 5.5)
										{
											if(sinr < 3)
												return 17.3661;
											else
												return 28.2686;
										}
										else
										{
											if(cqi < 9.5)
												return 10.09001;
											else
											{
												if(payload < 4)
													return 13.2231;
												else
													return 15.1147;
											}
										}
									}
								}
							}
							else
							{
								if(ta < 7.5)
								{
									if(rsrp < -86.5)
									{
										if(payload < 7)
										{
											if(rsrp < -96)
											{
												if(rsrq < -9.5)
													return 4.8012;
												else
													return 7.18348;
											}
											else
											{
												if(rsrq < -9.5)
													return 15.9808;
												else
												{
													if(cqi < 8.5)
														return 6.47249;
													else
													{
														if(payload < 4)
															return 15.8207;
														else
															return 13.1148;
													}
												}
											}
										}
										else
										{
											if(sinr < 1)
											{
												if(payload < 8.5)
													return 26.2834;
												else
													return 18.6047;
											}
											else
												return 16.609;
										}
									}
									else
									{
										if(rsrp < -73)
										{
											if(rsrp < -77.5)
											{
												if(velocity < 13.235)
												{
													if(rsrp < -84)
													{
														if(sinr < 1)
															return 8.29876;
														else
														{
															if(rsrp < -85.5)
															{
																if(sinr < 11)
																	return 23.6842;
																else
																	return 21.5054;
															}
															else
																return 19.0263;
														}
													}
													else
													{
														if(ta < 4.5)
														{
															if(velocity < 1.05)
																return 20.7164;
															else
															{
																if(cqi < 13)
																{
																	if(sinr < 12)
																		return 24.9221;
																	else
																		return 22.409;
																}
																else
																{
																	if(rsrq < -9.5)
																		return 31.8725;
																	else
																		return 25.641;
																}
															}
														}
														else
														{
															if(velocity < 4.845)
																return 34.7323;
															else
																return 29.1333;
														}
													}
												}
												else
												{
													if(velocity < 13.685)
														return 35.985225;
													else
														return 52.9801;
												}
											}
											else
												return 14.9743;
										}
										else
										{
											if(ta < 3.5)
												return 24.8062;
											else
												return 47.619;
										}
									}
								}
								else
								{
									if(rsrq < -9.5)
									{
										if(ta < 8.5)
										{
											if(rsrp < -97)
												return 43.956;
											else
												return 60.1504;
										}
										else
										{
											if(cqi < 8.5)
											{
												if(cqi < 6)
													return 20.0501;
												else
												{
													if(payload < 6.5)
													{
														if(payload < 3.5)
															return 26.7559;
														else
															return 28.1889;
													}
													else
														return 37.3614;
												}
											}
											else
											{
												if(payload < 4)
													return 48.048;
												else
												{
													if(sinr < 7)
														return 36.2812;
													else
														return 35.0219;
												}
											}
										}
									}
									else
									{
										if(cqi < 11.5)
										{
											if(velocity < 4.475)
											{
												if(sinr < 5.5)
													return 22.2428;
												else
													return 24.1327;
											}
											else
											{
												if(payload < 5.5)
												{
													if(rsrp < -96)
														return 15.6326;
													else
														return 13.2013;
												}
												else
													return 19.5462;
											}
										}
										else
											return 25.8435;
									}
								}
							}
						}
						else
						{
							if(rsrp < -94.5)
							{
								if(velocity < 13.035)
									return 12.5648;
								else
									return 23.9234;
							}
							else
							{
								if(cqi < 8)
								{
									if(sinr < 6)
									{
										if(rsrp < -86.5)
											return 47.8755;
										else
											return 43.4311;
									}
									else
									{
										if(rsrp < -85)
											return 22.0083;
										else
											return 47.6758;
									}
								}
								else
								{
									if(rsrq < -9.5)
									{
										if(rsrp < -79)
											return 40.7539;
										else
											return 25.1572;
									}
									else
										return 27.78625;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			if(cqi < 10.5)
			{
				if(payload < 7.5)
				{
					if(sinr < 21)
					{
						if(payload < 0.75)
						{
							if(payload < 0.3)
							{
								if(rsrp < -91.5)
									return 8.45157;
								else
								{
									if(rsrp < -86.5)
									{
										if(sinr < 1)
											return 15.0944;
										else
											return 17.3914;
									}
									else
									{
										if(sinr < 8)
											return 13.0123333333;
										else
											return 9.87658;
									}
								}
							}
							else
							{
								if(ta < 7)
								{
									if(rsrp < -89)
										return 21.6216;
									else
										return 26.1438;
								}
								else
								{
									if(rsrq < -5.5)
										return 16.25204;
									else
										return 10;
								}
							}
						}
						else
						{
							if(rsrp < -106.5)
							{
								if(f < 2247.55)
									return 18.8531;
								else
								{
									if(payload < 6)
										return 1.43123;
									else
										return 5.64687;
								}
							}
							else
							{
								if(payload < 3.5)
								{
									if(velocity < 13.995)
									{
										if(sinr < -2)
										{
											if(cqi < 7.5)
												return 29.1971;
											else
												return 15.1194666667;
										}
										else
										{
											if(velocity < 13.425)
											{
												if(velocity < 12.99)
												{
													if(rsrp < -80)
													{
														if(cqi < 4)
															return 15.9681;
														else
														{
															if(velocity < 9.69)
															{
																if(velocity < 8.32)
																{
																	if(cqi < 9.5)
																	{
																		if(rsrp < -84.5)
																		{
																			if(rsrp < -90.5)
																				return 27.01325;
																			else
																				return 21.9479;
																		}
																		else
																		{
																			if(sinr < 7)
																				return 26.8456;
																			else
																				return 30.770575;
																		}
																	}
																	else
																	{
																		if(cell < 13680525.5)
																		{
																			if(cell < 13530766)
																			{
																				if(ta < 7)
																				{
																					if(payload < 2)
																						return 38.2775;
																					else
																					{
																						if(rsrp < -88)
																							return 39.0879;
																						else
																							return 36.7534;
																					}
																				}
																				else
																					return 32.6531;
																			}
																			else
																				return 44.9438;
																		}
																		else
																			return 13.9373;
																	}
																}
																else
																{
																	if(payload < 1.5)
																		return 26.2295;
																	else
																		return 16.444;
																}
															}
															else
															{
																if(rsrp < -84.5)
																{
																	if(cqi < 9.5)
																	{
																		if(payload < 1.5)
																		{
																			if(sinr < 9.5)
																				return 29.7398;
																			else
																				return 17.094;
																		}
																		else
																		{
																			if(sinr < 2.5)
																				return 28.777;
																			else
																			{
																				if(sinr < 6)
																					return 36.5451;
																				else
																				{
																					if(cell < 13463170)
																						return 29.5749;
																					else
																						return 33.3333;
																				}
																			}
																		}
																	}
																	else
																	{
																		if(sinr < 12)
																			return 36.9515;
																		else
																			return 33.195;
																	}
																}
																else
																	return 26.79425;
															}
														}
													}
													else
														return 12.6783;
												}
												else
												{
													if(sinr < 12.5)
														return 20.592;
													else
														return 15.0094;
												}
											}
											else
												return 78.0488;
										}
									}
									else
									{
										if(rsrp < -85.5)
										{
											if(rsrp < -89.5)
											{
												if(ta < 7.5)
													return 20.3046;
												else
												{
													if(rsrp < -97.5)
														return 23.1214;
													else
														return 24.7678;
												}
											}
											else
											{
												if(rsrp < -87.5)
													return 30.303;
												else
													return 37.4707;
											}
										}
										else
										{
											if(rsrq < -5.5)
											{
												if(payload < 2.5)
													return 14.1844;
												else
													return 15.9151;
											}
											else
												return 7.09849;
										}
									}
								}
								else
								{
									if(velocity < 36.59)
									{
										if(cell < 13406212.5)
										{
											if(sinr < 8.5)
											{
												if(rsrp < -92.5)
												{
													if(cqi < 9)
													{
														if(rsrp < -105)
															return 26.6889;
														else
														{
															if(payload < 5.5)
																return 32.62204;
															else
																return 35.1097;
														}
													}
													else
														return 25.49194;
												}
												else
												{
													if(rsrq < -7.5)
													{
														if(velocity < 13.72)
															return 33.5289;
														else
															return 35.0263;
													}
													else
													{
														if(velocity < 15.265)
															return 43.3213;
														else
															return 39.769175;
													}
												}
											}
											else
											{
												if(sinr < 15)
												{
													if(cqi < 9.5)
													{
														if(rsrp < -100)
															return 33.1263;
														else
														{
															if(cell < 13394049.5)
															{
																if(rsrp < -90.5)
																{
																	if(ta < 6.5)
																		return 36.0902;
																	else
																		return 38.5078;
																}
																else
																{
																	if(payload < 6)
																	{
																		if(rsrq < -7.5)
																			return 44.1989;
																		else
																			return 42.735;
																	}
																	else
																		return 40.4332;
																}
															}
															else
															{
																if(rsrp < -82)
																{
																	if(cell < 13394183)
																		return 51.7241;
																	else
																		return 46.2428;
																}
																else
																	return 41.7755;
															}
														}
													}
													else
														return 20.3046;
												}
												else
												{
													if(velocity < 12.65)
													{
														if(ta < 2.5)
															return 52.8926;
														else
															return 51.1219333333;
													}
													else
														return 45.9537666667;
												}
											}
										}
										else
										{
											if(ta < 7.5)
											{
												if(payload < 5)
												{
													if(f < 1745)
														return 32.2906;
													else
														return 27.6817;
												}
												else
												{
													if(cell < 13680525.5)
													{
														if(rsrq < -7.5)
														{
															if(sinr < 4)
																return 11.9166;
															else
																return 18.773;
														}
														else
															return 2.0339;
													}
													else
														return 30.4569;
												}
											}
											else
											{
												if(velocity < 14.36)
												{
													if(payload < 6.5)
														return 41.9948;
													else
														return 32.9606;
												}
												else
													return 51.5575;
											}
										}
									}
									else
									{
										if(rsrq < -6.5)
											return 7.63541;
										else
											return 10.1497;
									}
								}
							}
						}
					}
					else
					{
						if(cell < 13284107)
						{
							if(sinr < 23.5)
								return 63.1579;
							else
							{
								if(rsrp < -88)
									return 53.3335;
								else
								{
									if(f < 1745)
									{
										if(payload < 5)
										{
											if(rsrp < -81)
												return 44.8598;
											else
											{
												if(payload < 2.5)
													return 36.6972;
												else
													return 39.3443;
											}
										}
										else
											return 52.6811;
									}
									else
										return 20.3046;
								}
							}
						}
						else
						{
							if(rsrq < -5.5)
								return 22.8572;
							else
								return 29.7398;
						}
					}
				}
				else
				{
					if(sinr < 2.5)
					{
						if(rsrp < -86.5)
						{
							if(sinr < -4)
								return 15.3649;
							else
							{
								if(payload < 9)
									return 17.094;
								else
									return 19.0749;
							}
						}
						else
						{
							if(ta < 5.5)
								return 38.3234;
							else
								return 53.1561;
						}
					}
					else
					{
						if(ta < 6.5)
						{
							if(cell < 13400194)
							{
								if(velocity < 7.325)
								{
									if(rsrq < -6.5)
										return 79.7342;
									else
										return 72.1443;
								}
								else
								{
									if(cell < 13393542)
									{
										if(ta < 4.5)
										{
											if(sinr < 17.5)
											{
												if(sinr < 9.5)
													return 51.8979;
												else
												{
													if(rsrq < -6.5)
														return 26.393;
													else
													{
														if(rsrp < -83.5)
															return 50.1175;
														else
															return 39.5795;
													}
												}
											}
											else
												return 59.3081;
										}
										else
										{
											if(rsrq < -7.5)
												return 23.4742;
											else
												return 30.6122;
										}
									}
									else
									{
										if(velocity < 11.96)
											return 82.1566;
										else
										{
											if(rsrp < -85)
												return 40.6802;
											else
											{
												if(rsrq < -6.5)
													return 53.7634;
												else
													return 60.251;
											}
										}
									}
								}
							}
							else
							{
								if(sinr < 11)
								{
									if(payload < 9.5)
										return 65.3951;
									else
										return 48.9896;
								}
								else
								{
									if(f < 1745)
										return 33.9463;
									else
										return 24.1619;
								}
							}
						}
						else
						{
							if(rsrp < -91.5)
							{
								if(cell < 13020554.5)
								{
									if(rsrq < -7.5)
										return 13.3156;
									else
										return 24.6187;
								}
								else
								{
									if(f < 1362.55)
									{
										if(cqi < 8.5)
											return 16.9671;
										else
										{
											if(payload < 9.5)
												return 22.385875;
											else
												return 27.3038;
										}
									}
									else
									{
										if(rsrp < -104.5)
											return 33.4169;
										else
										{
											if(payload < 9.5)
											{
												if(rsrp < -99.5)
													return 42.6099;
												else
													return 45.3686;
											}
											else
											{
												if(rsrp < -101)
													return 51.2164;
												else
													return 56.1798;
											}
										}
									}
								}
							}
							else
							{
								if(sinr < 13.5)
								{
									if(rsrq < -7.5)
										return 40.3277;
									else
									{
										if(sinr < 7)
											return 55.1724;
										else
											return 45.6853;
									}
								}
								else
								{
									if(sinr < 18.5)
										return 73.903;
									else
									{
										if(rsrq < -6.5)
											return 57.7386;
										else
											return 44.0165;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				if(payload < 1.5)
				{
					if(cell < 12973575.5)
					{
						if(sinr < 28.5)
						{
							if(payload < 0.3)
							{
								if(cqi < 12.5)
									return 13.7374333333;
								else
									return 19.5123;
							}
							else
							{
								if(ta < 9)
								{
									if(sinr < 20.5)
									{
										if(sinr < 18.5)
										{
											if(cell < 12973569.5)
											{
												if(rsrq < -5)
													return 32.3887;
												else
													return 33.8983;
											}
											else
												return 29.8507;
										}
										else
											return 47.9042;
									}
									else
									{
										if(rsrp < -74.5)
										{
											if(velocity < 1.26)
												return 34.4828;
											else
											{
												if(rsrq < -7.5)
													return 29.6296;
												else
													return 26.1438;
											}
										}
										else
											return 23.6761;
									}
								}
								else
								{
									if(payload < 0.75)
										return 21.6216;
									else
										return 29.7398;
								}
							}
						}
						else
						{
							if(payload < 0.55)
								return 61.5387;
							else
								return 30.4183;
						}
					}
					else
					{
						if(payload < 0.3)
						{
							if(sinr < 26)
							{
								if(rsrp < -76)
								{
									if(rsrp < -82.5)
									{
										if(f < 1745)
										{
											if(sinr < 15.5)
												return 6.6358266667;
											else
												return 9.87658;
										}
										else
										{
											if(rsrq < -7)
												return 13.1148;
											else
												return 11.4286;
										}
									}
									else
										return 25.0001;
								}
								else
								{
									if(rsrp < -64.5)
										return 6.1092;
									else
										return 9.19544;
								}
							}
							else
								return 21.0527;
						}
						else
						{
							if(rsrq < -6.5)
							{
								if(sinr < 10.5)
								{
									if(cell < 13531528.5)
									{
										if(cqi < 11.5)
											return 13.0293;
										else
										{
											if(payload < 0.75)
												return 14.0845;
											else
												return 20.0501;
										}
									}
									else
									{
										if(cqi < 11.5)
											return 21.978;
										else
										{
											if(sinr < 7.5)
												return 27.027;
											else
												return 28.9855;
										}
									}
								}
								else
								{
									if(sinr < 26)
									{
										if(cell < 13393540.5)
										{
											if(payload < 0.75)
												return 19.7044;
											else
												return 22.5989;
										}
										else
										{
											if(velocity < 13.475)
											{
												if(velocity < 10.31)
												{
													if(rsrp < -78)
													{
														if(sinr < 16.5)
															return 34.7826;
														else
														{
															if(payload < 0.75)
																return 27.7778;
															else
																return 25.641;
														}
													}
													else
														return 36.3636;
												}
												else
												{
													if(velocity < 10.99)
														return 38.835;
													else
														return 36.1991;
												}
											}
											else
											{
												if(sinr < 19)
													return 32.2581;
												else
													return 26.4901;
											}
										}
									}
									else
										return 38.4615;
								}
							}
							else
							{
								if(rsrp < -71.5)
								{
									if(payload < 0.75)
									{
										if(cell < 13394823.5)
										{
											if(cell < 13394184)
											{
												if(sinr < 20)
												{
													if(velocity < 2.455)
														return 11.9048;
													else
													{
														if(ta < 5.5)
															return 19.1792666667;
														else
														{
															if(sinr < 10.5)
																return 20.5128;
															else
																return 22.86385;
														}
													}
												}
												else
													return 22.9790846154;
											}
											else
											{
												if(velocity < 12.795)
													return 27.3973;
												else
													return 34.188;
											}
										}
										else
										{
											if(sinr < 12)
												return 7.38007;
											else
											{
												if(sinr < 15.5)
													return 29.1971;
												else
												{
													if(sinr < 19.5)
														return 15.29775;
													else
														return 17.6211;
												}
											}
										}
									}
									else
									{
										if(cqi < 11.5)
											return 29.5203;
										else
											return 26.9457;
									}
								}
								else
								{
									if(rsrq < -5)
										return 28.169;
									else
										return 32.5203;
								}
							}
						}
					}
				}
				else
				{
					if(sinr < 13.5)
					{
						if(velocity < 22.4)
						{
							if(rsrp < -101.5)
							{
								if(payload < 6.5)
								{
									if(payload < 5)
										return 2.786745;
									else
										return 0.547227;
								}
								else
									return 25.7235;
							}
							else
							{
								if(rsrp < -92)
								{
									if(ta < 9.5)
									{
										if(rsrq < -7.5)
										{
											if(payload < 7.5)
											{
												if(payload < 6.5)
													return 20.3132;
												else
													return 17.6712;
											}
											else
											{
												if(sinr < 7)
													return 29.1758;
												else
													return 25.4676;
											}
										}
										else
										{
											if(f < 2247.55)
											{
												if(cqi < 13.5)
												{
													if(f < 1362.55)
														return 32.3887;
													else
													{
														if(sinr < 12)
														{
															if(velocity < 8.46)
																return 29.3578;
															else
																return 27.3973;
														}
														else
															return 31.3725;
													}
												}
												else
													return 36.6013;
											}
											else
											{
												if(ta < 7)
												{
													if(velocity < 8.92)
													{
														if(sinr < 7)
															return 34.5125;
														else
															return 32.8205;
													}
													else
														return 39.604;
												}
												else
													return 49.0196;
											}
										}
									}
									else
									{
										if(rsrp < -93.5)
											return 50;
										else
											return 32.2418;
									}
								}
								else
								{
									if(velocity < 10.46)
									{
										if(cell < 13468428)
										{
											if(velocity < 7.98)
											{
												if(rsrp < -67)
												{
													if(rsrq < -7.5)
													{
														if(sinr < 11)
															return 48.6322;
														else
															return 53.3333;
													}
													else
													{
														if(cqi < 11.5)
															return 31.4548;
														else
														{
															if(cell < 13183237)
															{
																if(sinr < 9)
																	return 40.4296;
																else
																	return 65.7534;
															}
															else
															{
																if(payload < 5.5)
																	return 41.4508;
																else
																	return 37.6028;
															}
														}
													}
												}
												else
													return 62.3608;
											}
											else
											{
												if(payload < 5)
												{
													if(rsrp < -87.5)
														return 45.2617;
													else
														return 51.8639;
												}
												else
												{
													if(payload < 6.5)
														return 71.8563;
													else
													{
														if(rsrp < -81.5)
															return 63.6605;
														else
															return 58.6387;
													}
												}
											}
										}
										else
										{
											if(velocity < 9.115)
											{
												if(payload < 8)
												{
													if(cqi < 11.5)
														return 37.2093;
													else
													{
														if(rsrq < -6.5)
															return 42.7807;
														else
															return 44.2804;
													}
												}
												else
													return 33.1675;
											}
											else
												return 32.2581;
										}
									}
									else
									{
										if(payload < 5.5)
										{
											if(rsrp < -85.5)
											{
												if(velocity < 12.02)
												{
													if(sinr < 10.5)
														return 14.4862;
													else
														return 41.9287;
												}
												else
												{
													if(rsrp < -89.5)
													{
														if(rsrp < -90.5)
															return 43.956;
														else
															return 27.7296;
													}
													else
														return 46.5116;
												}
											}
											else
											{
												if(sinr < 8.5)
												{
													if(payload < 3.5)
														return 63.2411;
													else
														return 67.4536;
												}
												else
												{
													if(payload < 3.5)
														return 49.1139666667;
													else
														return 42.1607;
												}
											}
										}
										else
										{
											if(ta < 3.5)
											{
												if(payload < 7.5)
												{
													if(sinr < 6.5)
														return 18.4829;
													else
														return 13.4945;
												}
												else
													return 26.7857;
											}
											else
											{
												if(rsrq < -5.5)
												{
													if(velocity < 13.67)
													{
														if(ta < 6)
														{
															if(payload < 8)
																return 36.3912;
															else
																return 38.1316;
														}
														else
															return 34.1672;
													}
													else
														return 25.1493;
												}
												else
												{
													if(payload < 6.5)
														return 42.5155;
													else
														return 46.8619;
												}
											}
										}
									}
								}
							}
						}
						else
						{
							if(ta < 4.5)
								return 23.166;
							else
							{
								if(payload < 6.5)
								{
									if(sinr < 11.5)
										return 5.34753;
									else
										return 9.375;
								}
								else
									return 13.0445;
							}
						}
					}
					else
					{
						if(rsrp < -83.5)
						{
							if(cell < 13394190)
							{
								if(cell < 13394055.5)
								{
									if(ta < 8.5)
									{
										if(rsrp < -99)
										{
											if(rsrp < -107)
												return 19.8441;
											else
											{
												if(sinr < 16.5)
													return 28.6944;
												else
													return 25.417;
											}
										}
										else
										{
											if(ta < 3.5)
												return 37.5413333333;
											else
											{
												if(cell < 13284105)
												{
													if(rsrq < -7)
													{
														if(rsrp < -89)
														{
															if(rsrp < -90.5)
																return 42.7807;
															else
																return 31.5956;
														}
														else
															return 52.2023;
													}
													else
													{
														if(velocity < 13.2)
														{
															if(velocity < 6.36)
																return 68.7961;
															else
															{
																if(velocity < 11.665)
																{
																	if(payload < 5.5)
																		return 61.4439;
																	else
																		return 65.8436;
																}
																else
																	return 67.1563;
															}
														}
														else
														{
															if(payload < 4)
																return 48.3384;
															else
																return 58.1818;
														}
													}
												}
												else
												{
													if(rsrp < -90)
														return 42.1369;
													else
														return 52.9801;
												}
											}
										}
									}
									else
									{
										if(payload < 8.5)
										{
											if(rsrq < -6.5)
											{
												if(payload < 3.5)
													return 40.201;
												else
													return 32.5998;
											}
											else
											{
												if(sinr < 30.5)
												{
													if(cqi < 13.5)
													{
														if(cell < 13020548.5)
															return 61.3027;
														else
															return 44.7344;
													}
													else
													{
														if(rsrp < -94.5)
														{
															if(rsrp < -98.5)
																return 58.8776;
															else
															{
																if(rsrp < -97)
																	return 42.1053;
																else
																	return 45.3686;
															}
														}
														else
														{
															if(payload < 7.5)
																return 54.6875;
															else
																return 68.8172;
														}
													}
												}
												else
													return 66.2281;
											}
										}
										else
										{
											if(sinr < 28.5)
											{
												if(rsrp < -85.5)
												{
													if(sinr < 22.5)
													{
														if(payload < 9.5)
															return 61.6438;
														else
														{
															if(velocity < 11.67)
																return 64.9351;
															else
																return 68.0272;
														}
													}
													else
														return 62.76016;
												}
												else
													return 81.7253;
											}
											else
												return 34.5988;
										}
									}
								}
								else
								{
									if(payload < 4.5)
									{
										if(payload < 3)
										{
											if(rsrp < -90)
												return 48.7805;
											else
												return 57.1429;
										}
										else
											return 67.5105;
									}
									else
									{
										if(sinr < 16.5)
											return 77.2201;
										else
										{
											if(payload < 7)
												return 83.4783;
											else
											{
												if(rsrp < -86.5)
													return 81.8182;
												else
													return 80.2005;
											}
										}
									}
								}
							}
							else
							{
								if(rsrp < -95)
								{
									if(sinr < 22.5)
									{
										if(sinr < 16.5)
											return 45.7143;
										else
											return 43.4270333333;
									}
									else
										return 48.7805;
								}
								else
								{
									if(ta < 4.5)
									{
										if(payload < 4.5)
											return 32.5203;
										else
										{
											if(rsrp < -85.5)
												return 50.7246;
											else
												return 44.0098;
										}
									}
									else
									{
										if(rsrp < -84.5)
										{
											if(sinr < 25)
											{
												if(cqi < 11.5)
													return 15.3286;
												else
												{
													if(rsrp < -90.5)
														return 45.4545;
													else
													{
														if(rsrp < -87.5)
															return 30.0752;
														else
															return 33.9188;
													}
												}
											}
											else
											{
												if(f < 1745)
													return 20.8454;
												else
													return 18.58782;
											}
										}
										else
										{
											if(payload < 7.5)
											{
												if(sinr < 21)
													return 27.8192;
												else
													return 31.355;
											}
											else
												return 36.6342;
										}
									}
								}
							}
						}
						else
						{
							if(velocity < 14.59)
							{
								if(payload < 2.5)
								{
									if(f < 1362.55)
									{
										if(sinr < 31)
										{
											if(cqi < 13.5)
												return 44.2621;
											else
												return 39.6846521739;
										}
										else
											return 48.6322;
									}
									else
									{
										if(cqi < 11.5)
											return 74.0741;
										else
										{
											if(cell < 13284104.5)
												return 42.7572;
											else
											{
												if(velocity < 8.54)
													return 48.10752;
												else
												{
													if(velocity < 14.2)
														return 44.4959833333;
													else
														return 46.7836;
												}
											}
										}
									}
								}
								else
								{
									if(cell < 13400199)
									{
										if(sinr < 17.5)
										{
											if(cell < 12973569.5)
											{
												if(cqi < 12.5)
													return 64.6651;
												else
													return 50.74;
											}
											else
											{
												if(ta < 6)
												{
													if(payload < 6.5)
													{
														if(sinr < 15.5)
															return 67.2269;
														else
															return 71.458;
													}
													else
													{
														if(velocity < 5.07)
															return 59.3142;
														else
															return 63.81245;
													}
												}
												else
												{
													if(payload < 6.5)
													{
														if(payload < 5)
															return 64.3863;
														else
															return 68.3761;
													}
													else
													{
														if(payload < 8.5)
															return 85.2359;
														else
															return 71.2378;
													}
												}
											}
										}
										else
										{
											if(velocity < 5.57)
											{
												if(rsrp < -64)
												{
													if(cell < 13394183)
													{
														if(rsrp < -79)
														{
															if(rsrq < -6.5)
															{
																if(payload < 8.5)
																{
																	if(payload < 5.5)
																		return 47.976;
																	else
																		return 81.1594;
																}
																else
																{
																	if(rsrp < -81.5)
																		return 52.7009;
																	else
																		return 50.2828;
																}
															}
															else
															{
																if(rsrp < -81.5)
																{
																	if(sinr < 28)
																		return 50.1567;
																	else
																		return 45.7143;
																}
																else
																	return 37.8698;
															}
														}
														else
														{
															if(cqi < 13)
															{
																if(cqi < 11.5)
																{
																	if(rsrp < -73)
																		return 55.2147;
																	else
																		return 71.5198;
																}
																else
																{
																	if(sinr < 20)
																		return 62.3782;
																	else
																	{
																		if(rsrq < -6.5)
																			return 69.0399;
																		else
																			return 76.3723;
																	}
																}
															}
															else
															{
																if(payload < 5)
																{
																	if(sinr < 30)
																	{
																		if(rsrp < -70.5)
																		{
																			if(sinr < 27)
																				return 61.778875;
																			else
																				return 66.1157;
																		}
																		else
																			return 56.1404;
																	}
																	else
																		return 43.5967;
																}
																else
																{
																	if(rsrp < -74.5)
																	{
																		if(rsrp < -75.5)
																			return 71.7489;
																		else
																		{
																			if(payload < 9)
																				return 65.5738;
																			else
																				return 73.8689;
																		}
																	}
																	else
																	{
																		if(payload < 6.5)
																			return 56.7376;
																		else
																		{
																			if(payload < 8)
																				return 62.9921;
																			else
																			{
																				if(sinr < 27.5)
																					return 68.7023;
																				else
																					return 66.9145;
																			}
																		}
																	}
																}
															}
														}
													}
													else
														return 90.4685;
												}
												else
													return 45.864;
											}
											else
											{
												if(velocity < 11.74)
												{
													if(rsrq < -5.5)
													{
														if(velocity < 9.275)
														{
															if(velocity < 8.365)
															{
																if(payload < 4.5)
																	return 54.8885;
																else
																{
																	if(sinr < 24)
																	{
																		if(cell < 13183873.5)
																			return 47.92054;
																		else
																			return 45.6621;
																	}
																	else
																		return 41.0768;
																}
															}
															else
																return 74.3494;
														}
														else
														{
															if(ta < 3.5)
																return 35.6877;
															else
																return 39.2325;
														}
													}
													else
													{
														if(velocity < 7.605)
															return 82.5806;
														else
														{
															if(rsrp < -75)
															{
																if(cqi < 13.5)
																	return 65.8618;
																else
																	return 61.3027;
															}
															else
																return 52.8673;
														}
													}
												}
												else
												{
													if(ta < 3.5)
													{
														if(rsrp < -76)
															return 63.1025;
														else
														{
															if(rsrq < -7.5)
																return 44.9438;
															else
																return 39.0244;
														}
													}
													else
													{
														if(velocity < 12.745)
														{
															if(rsrp < -74.5)
															{
																if(cqi < 13.5)
																	return 77.1704;
																else
																{
																	if(rsrq < -5.5)
																		return 73.4619;
																	else
																		return 71.8563;
																}
															}
															else
																return 67.3212;
														}
														else
														{
															if(payload < 5.5)
															{
																if(payload < 3.5)
																{
																	if(rsrp < -79)
																		return 56.338;
																	else
																		return 53.9326;
																}
																else
																{
																	if(velocity < 13.37)
																		return 68.4932;
																	else
																	{
																		if(sinr < 33)
																			return 61.1314142857;
																		else
																			return 55.4785;
																	}
																}
															}
															else
																return 46.2428;
														}
													}
												}
											}
										}
									}
									else
									{
										if(rsrp < -71.5)
										{
											if(rsrp < -74)
											{
												if(rsrp < -75.5)
												{
													if(sinr < 16.5)
														return 38.0952;
													else
														return 42.7807;
												}
												else
													return 32.0899;
											}
											else
											{
												if(payload < 7)
													return 47.3373;
												else
													return 43.088;
											}
										}
										else
											return 60.040975;
									}
								}
							}
							else
							{
								if(cell < 13394818.5)
								{
									if(rsrq < -6.5)
									{
										if(payload < 2.5)
											return 59.4796;
										else
										{
											if(payload < 6.5)
												return 32.8317;
											else
												return 37.2787;
										}
									}
									else
									{
										if(sinr < 16.5)
											return 64.9087;
										else
										{
											if(sinr < 20.5)
												return 46.5116;
											else
												return 52.8926;
										}
									}
								}
								else
								{
									if(velocity < 23.395)
									{
										if(rsrp < -81.5)
										{
											if(payload < 6.5)
												return 27.1406666667;
											else
											{
												if(cqi < 14.5)
													return 39.4922;
												else
													return 42.3729;
											}
										}
										else
											return 42.6829;
									}
									else
									{
										if(sinr < 19.5)
											return 23.6416333333;
										else
											return 17.2166;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if(cell < 13044869)
		{
			if(cqi < 10.5)
			{
				if(payload < 0.75)
				{
					if(rsrq < -9.5)
					{
						if(velocity < 12.175)
						{
							if(payload < 0.3)
							{
								if(rsrp < -107.5)
								{
									if(velocity < 9.43)
										return 0.290488;
									else
									{
										if(sinr < 2)
											return 7.92082;
										else
											return 10.5264;
									}
								}
								else
									return 14.2858;
							}
							else
								return 2.730005;
						}
						else
						{
							if(f < 1362.55)
								return 3.55557;
							else
								return 0.7394153333;
						}
					}
					else
					{
						if(payload < 0.3)
						{
							if(sinr < 8.5)
								return 1.02696;
							else
							{
								if(rsrq < -7)
								{
									if(velocity < 7.02)
										return 8.00003;
									else
										return 10.5264;
								}
								else
								{
									if(rsrp < -77)
										return 5.19483;
									else
										return 8.24745;
								}
							}
						}
						else
						{
							if(ta < 15)
								return 24.8447;
							else
							{
								if(rsrq < -8)
								{
									if(velocity < 4.685)
										return 18.9573;
									else
										return 12.5;
								}
								else
									return 17.6211;
							}
						}
					}
				}
				else
				{
					if(sinr < 8.5)
					{
						if(cell < 12998017)
						{
							if(rsrq < -11.5)
							{
								if(sinr < 0.5)
								{
									if(payload < 2)
										return 17.316;
									else
									{
										if(rsrp < -109)
										{
											if(rsrp < -114)
												return 10.76765;
											else
											{
												if(payload < 3.5)
													return 3.73367;
												else
												{
													if(sinr < -3)
														return 8.18247;
													else
														return 6.311915;
												}
											}
										}
										else
											return 14.3369;
									}
								}
								else
								{
									if(ta < 15)
										return 20.4953;
									else
									{
										if(payload < 2.5)
											return 5.22193;
										else
										{
											if(rsrp < -109.5)
											{
												if(payload < 5.5)
												{
													if(rsrp < -110.5)
														return 24.7219;
													else
													{
														if(payload < 4.5)
															return 14.0845;
														else
															return 15.3965;
													}
												}
												else
												{
													if(velocity < 6.01)
														return 12.0724;
													else
														return 15.0031;
												}
											}
											else
											{
												if(cqi < 8.5)
													return 9.7612;
												else
													return 17.9843;
											}
										}
									}
								}
							}
							else
							{
								if(rsrp < -109.5)
								{
									if(velocity < 12.765)
									{
										if(payload < 2.5)
										{
											if(rsrq < -10.5)
												return 10.7366;
											else
												return 7.23327;
										}
										else
										{
											if(cqi < 6.5)
											{
												if(payload < 7)
													return 11.7016666667;
												else
													return 7.11291;
											}
											else
											{
												if(sinr < 1)
												{
													if(payload < 7.5)
														return 23.5294;
													else
														return 15.8951;
												}
												else
												{
													if(cqi < 9.5)
													{
														if(payload < 7.5)
														{
															if(rsrp < -110.5)
															{
																if(payload < 5.5)
																	return 11.3026;
																else
																	return 13.1723;
															}
															else
																return 16.5517;
														}
														else
														{
															if(payload < 9.5)
																return 25.4148;
															else
															{
																if(rsrq < -9.5)
																	return 20.3718;
																else
																{
																	if(ta < 15)
																		return 14.7411;
																	else
																		return 10.8592;
																}
															}
														}
													}
													else
														return 5.29334;
												}
											}
										}
									}
									else
									{
										if(velocity < 13.8)
										{
											if(cqi < 7)
												return 21.9007;
											else
												return 24.0874333333;
										}
										else
										{
											if(payload < 6.5)
												return 11.3147666667;
											else
											{
												if(velocity < 14.56)
													return 7.29528;
												else
												{
													if(sinr < 2)
														return 21.1161;
													else
														return 29.138;
												}
											}
										}
									}
								}
								else
								{
									if(velocity < 3.545)
									{
										if(payload < 6.5)
											return 31.7041;
										else
										{
											if(sinr < 6)
											{
												if(sinr < 3)
													return 26.7292666667;
												else
													return 20.1258;
											}
											else
												return 29.0592;
										}
									}
									else
									{
										if(payload < 8.5)
										{
											if(payload < 5)
											{
												if(sinr < 5.5)
												{
													if(velocity < 13.96)
														return 21.9995;
													else
														return 18.7354;
												}
												else
												{
													if(cqi < 7.5)
													{
														if(payload < 2)
															return 16.8067;
														else
															return 3.60469;
													}
													else
													{
														if(payload < 1.5)
															return 20;
														else
															return 23.4949;
													}
												}
											}
											else
											{
												if(velocity < 13.475)
												{
													if(rsrp < -107.5)
														return 24.2057;
													else
													{
														if(rsrp < -106.5)
															return 36.8179;
														else
															return 29.9465;
													}
												}
												else
												{
													if(rsrp < -107.5)
														return 20.9268;
													else
														return 16.2885;
												}
											}
										}
										else
										{
											if(cqi < 8.5)
											{
												if(velocity < 11.265)
												{
													if(payload < 9.5)
														return 21.1206;
													else
														return 22.4845;
												}
												else
													return 15.8346;
											}
											else
											{
												if(payload < 9.5)
												{
													if(cqi < 9.5)
														return 11.4213;
													else
														return 13.7274;
												}
												else
													return 4.34735;
											}
										}
									}
								}
							}
						}
						else
						{
							if(cqi < 8)
							{
								if(velocity < 17.525)
									return 22.0588;
								else
									return 13.217;
							}
							else
							{
								if(rsrp < -90)
								{
									if(payload < 6.5)
										return 34.9091;
									else
										return 44.1247;
								}
								else
								{
									if(ta < 17.5)
										return 19.9833;
									else
									{
										if(velocity < 30.05)
											return 31.5098;
										else
											return 12.8077;
									}
								}
							}
						}
					}
					else
					{
						if(sinr < 18.5)
						{
							if(rsrp < -104)
							{
								if(velocity < 9.98)
								{
									if(rsrp < -105.5)
									{
										if(ta < 15.5)
											return 30.2648;
										else
											return 27.72;
									}
									else
									{
										if(payload < 3.5)
											return 21.6411;
										else
											return 17.1951;
									}
								}
								else
								{
									if(velocity < 12.685)
										return 43.2173;
									else
									{
										if(velocity < 13.47)
										{
											if(payload < 2.5)
												return 26.1438;
											else
											{
												if(rsrp < -105.5)
													return 32.1429;
												else
													return 35.1262;
											}
										}
										else
										{
											if(sinr < 10.5)
												return 56.2588;
											else
											{
												if(rsrp < -106)
													return 33.6606;
												else
													return 37.5783;
											}
										}
									}
								}
							}
							else
							{
								if(rsrq < -9)
									return 12.9576;
								else
								{
									if(cqi < 9.5)
									{
										if(cqi < 8.5)
										{
											if(velocity < 13.565)
												return 22.7015;
											else
											{
												if(velocity < 14.795)
												{
													if(payload < 4)
														return 33.0579;
													else
														return 35.1906;
												}
												else
													return 23.9521;
											}
										}
										else
										{
											if(payload < 4)
												return 17.5055;
											else
												return 22.3568;
										}
									}
									else
									{
										if(velocity < 21.61)
										{
											if(rsrp < -92)
												return 37.037;
											else
												return 33.5196;
										}
										else
										{
											if(payload < 5.5)
												return 28.169;
											else
												return 29.67495;
										}
									}
								}
							}
						}
						else
						{
							if(cqi < 9.5)
							{
								if(rsrq < -7.5)
									return 17.0794;
								else
									return 15.2091;
							}
							else
								return 23.0548;
						}
					}
				}
			}
			else
			{
				if(sinr < 11.5)
				{
					if(rsrp < -103.5)
					{
						if(sinr < 4.5)
						{
							if(velocity < 15.105)
							{
								if(rsrq < -10.5)
								{
									if(payload < 0.55)
										return 12.1213;
									else
									{
										if(rsrp < -109.5)
											return 10.3309;
										else
											return 3.57782;
									}
								}
								else
								{
									if(rsrp < -106.5)
									{
										if(rsrq < -8.5)
										{
											if(rsrp < -109)
												return 19.0577;
											else
												return 15.0447;
										}
										else
											return 20.6981666667;
									}
									else
										return 9.09094;
								}
							}
							else
								return 2.11416;
						}
						else
						{
							if(velocity < 0.66)
							{
								if(payload < 3.75)
									return 22.8571;
								else
								{
									if(cqi < 14.5)
										return 32.7065;
									else
										return 30.7861;
								}
							}
							else
							{
								if(rsrq < -10.5)
								{
									if(payload < 5.05)
										return 33.3335;
									else
										return 22.5925;
								}
								else
								{
									if(rsrq < -9.5)
									{
										if(rsrp < -107.5)
											return 8.08285;
										else
											return 19.3237;
									}
									else
									{
										if(payload < 7.5)
										{
											if(rsrp < -106.5)
											{
												if(payload < 2.55)
													return 13.1148;
												else
												{
													if(velocity < 14.535)
													{
														if(payload < 6.5)
															return 22.03425;
														else
														{
															if(cqi < 13)
																return 24.5506;
															else
																return 27.8054;
														}
													}
													else
														return 18.6829;
												}
											}
											else
												return 32.0266;
										}
										else
										{
											if(cqi < 14.5)
											{
												if(sinr < 5.5)
													return 11.6831;
												else
												{
													if(payload < 9)
													{
														if(velocity < 14.505)
															return 20.32084;
														else
															return 27.4207;
													}
													else
														return 25.2924;
												}
											}
											else
											{
												if(sinr < 10)
													return 5.70207;
												else
													return 15.676;
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if(payload < 0.75)
							return 14.4928;
						else
						{
							if(sinr < -4.5)
								return 26.7048;
							else
							{
								if(rsrq < -7)
								{
									if(ta < 17.5)
									{
										if(ta < 16.5)
											return 34.0556333333;
										else
											return 35.5292;
									}
									else
										return 31.9149;
								}
								else
									return 38.0952;
							}
						}
					}
				}
				else
				{
					if(payload < 4.5)
					{
						if(rsrp < -74)
						{
							if(ta < 17.5)
							{
								if(cqi < 14.5)
								{
									if(velocity < 13.04)
									{
										if(payload < 0.75)
											return 25.3165;
										else
										{
											if(ta < 16.5)
												return 40.004;
											else
												return 36.6133;
										}
									}
									else
									{
										if(velocity < 14.345)
										{
											if(rsrq < -9.5)
												return 13.8468;
											else
											{
												if(rsrp < -88.5)
												{
													if(rsrp < -103.5)
														return 17.66;
													else
														return 21.0804;
												}
												else
													return 24.5399;
											}
										}
										else
										{
											if(rsrp < -91.5)
												return 36.6972;
											else
												return 26.8007;
										}
									}
								}
								else
								{
									if(f < 1362.55)
									{
										if(velocity < 24.845)
											return 8.7146;
										else
										{
											if(payload < 2.5)
												return 21.4477;
											else
												return 15.1086;
										}
									}
									else
									{
										if(rsrq < -7.5)
										{
											if(rsrp < -105)
											{
												if(ta < 16.5)
													return 20.8333;
												else
													return 19.4489;
											}
											else
											{
												if(payload < 1.25)
													return 22.2222;
												else
													return 24.8447;
											}
										}
										else
											return 30.1318;
									}
								}
							}
							else
							{
								if(rsrq < -5.5)
								{
									if(sinr < 27.5)
										return 34.2246;
									else
										return 32.7869;
								}
								else
									return 25.974;
							}
						}
						else
						{
							if(rsrp < -69)
							{
								if(rsrq < -5.5)
								{
									if(payload < 3)
										return 37.9147;
									else
										return 35.8343;
								}
								else
									return 26.7559;
							}
							else
								return 51.1727;
						}
					}
					else
					{
						if(velocity < 2.79)
						{
							if(payload < 9)
							{
								if(cqi < 13.5)
								{
									if(rsrp < -96.5)
										return 53.2826;
									else
										return 65.0407;
								}
								else
								{
									if(rsrp < -93.5)
										return 45.911;
									else
										return 55.9441;
								}
							}
							else
								return 60.6061;
						}
						else
						{
							if(ta < 17.5)
							{
								if(rsrp < -106.5)
									return 15.0991;
								else
								{
									if(velocity < 25.075)
									{
										if(velocity < 21.44)
										{
											if(velocity < 11.67)
											{
												if(cqi < 13)
												{
													if(rsrp < -95)
														return 40.8627;
													else
														return 46.1835;
												}
												else
												{
													if(velocity < 9.305)
														return 37.325;
													else
														return 38.9105;
												}
											}
											else
											{
												if(velocity < 16.985)
												{
													if(rsrp < -101.5)
														return 31.35885;
													else
													{
														if(rsrp < -89)
															return 36.34;
														else
															return 40.404;
													}
												}
												else
												{
													if(payload < 8)
														return 27.7778;
													else
														return 29.6053;
												}
											}
										}
										else
											return 56.0224;
									}
									else
									{
										if(payload < 7)
										{
											if(rsrp < -86.5)
												return 29.7619;
											else
												return 26.7738;
										}
										else
										{
											if(velocity < 30.47)
												return 29.1333;
											else
												return 22.7344;
										}
									}
								}
							}
							else
							{
								if(sinr < 22.5)
									return 66.5434;
								else
								{
									if(payload < 6.5)
										return 66.482;
									else
									{
										if(payload < 8.5)
											return 48.34564;
										else
											return 45.8979;
									}
								}
							}
						}
					}
				}
			}
		}
		else
		{
			if(rsrq < -10.5)
			{
				if(cell < 13394312)
				{
					if(cell < 13393414.5)
					{
						if(payload < 1.5)
						{
							if(rsrp < -102.5)
							{
								if(sinr < -4)
								{
									if(sinr < -7)
										return 1.76992;
									else
										return 0.298352;
								}
								else
								{
									if(rsrp < -106)
									{
										if(rsrq < -11.5)
										{
											if(rsrp < -107.5)
											{
												if(velocity < 5.48)
												{
													if(ta < 19.5)
														return 4.021798;
													else
													{
														if(payload < 0.3)
															return 3.86475;
														else
															return 0.884956;
													}
												}
												else
												{
													if(velocity < 12.91)
													{
														if(sinr < -1.5)
															return 2.27855;
														else
														{
															if(payload < 0.55)
																return 0.3869092;
															else
																return 1.6899;
														}
													}
													else
														return 3.20513;
												}
											}
											else
												return 8.24742;
										}
										else
										{
											if(payload < 0.3)
											{
												if(rsrp < -111)
													return 5.47947;
												else
													return 8.1843375;
											}
											else
											{
												if(cqi < 6.5)
													return 1.6;
												else
												{
													if(rsrp < -116)
														return 1.6835;
													else
														return 7.70713;
												}
											}
										}
									}
									else
										return 0.6009995;
								}
							}
							else
							{
								if(rsrq < -14)
									return 0.987658;
								else
								{
									if(cqi < 6.5)
										return 0.018851;
									else
									{
										if(sinr < -0.5)
											return 8.51067;
										else
											return 10.8715;
									}
								}
							}
						}
						else
						{
							if(ta < 66.5)
							{
								if(ta < 21.5)
								{
									if(rsrq < -12.5)
									{
										if(payload < 4)
										{
											if(rsrp < -103.5)
												return 3.589696;
											else
												return 6.82594;
										}
										else
										{
											if(sinr < 0)
											{
												if(ta < 17)
													return 2.88623;
												else
													return 7.37735;
											}
											else
												return 15.2091;
										}
									}
									else
									{
										if(velocity < 9.935)
										{
											if(cqi < 5.5)
											{
												if(sinr < -4)
													return 21.4158;
												else
													return 11.0294;
											}
											else
											{
												if(sinr < 4)
												{
													if(payload < 3.5)
														return 23.5988;
													else
														return 14.7765;
												}
												else
												{
													if(sinr < 5.5)
														return 25.6904;
													else
														return 20.1511;
												}
											}
										}
										else
										{
											if(velocity < 13.4)
											{
												if(sinr < 0)
												{
													if(payload < 3)
														return 1.18046;
													else
														return 3.772195;
												}
												else
												{
													if(cell < 13392905.5)
													{
														if(rsrq < -11.5)
															return 5.37634;
														else
															return 6.90846;
													}
													else
														return 9.77995;
												}
											}
											else
											{
												if(payload < 2.5)
													return 16.7073;
												else
												{
													if(sinr < -1.5)
														return 10.85666;
													else
													{
														if(rsrp < -97.5)
															return 8.3956766667;
														else
															return 5.86081;
													}
												}
											}
										}
									}
								}
								else
								{
									if(cqi < 5.5)
									{
										if(ta < 23.5)
										{
											if(velocity < 11.88)
											{
												if(sinr < 4.5)
													return 1.7508;
												else
													return 3.77299;
											}
											else
											{
												if(rsrp < -106)
													return 1.39367;
												else
													return 21.7244;
											}
										}
										else
										{
											if(rsrp < -106.5)
												return 6.75961;
											else
												return 21.4938;
										}
									}
									else
									{
										if(rsrp < -105.5)
										{
											if(cell < 13067273.5)
											{
												if(sinr < -2)
													return 2.02814;
												else
													return 0.674309;
											}
											else
											{
												if(payload < 4)
													return 5.97257;
												else
												{
													if(payload < 6.5)
														return 2.05997;
													else
													{
														if(rsrq < -13.5)
															return 2.99225;
														else
															return 4.76555;
													}
												}
											}
										}
										else
										{
											if(rsrp < -103)
											{
												if(payload < 5.5)
													return 5.39993;
												else
													return 3.44795;
											}
											else
											{
												if(cqi < 6.5)
													return 6.1400633333;
												else
													return 4.5736066667;
											}
										}
									}
								}
							}
							else
							{
								if(cqi < 13)
								{
									if(cqi < 10.5)
									{
										if(rsrp < -113)
											return 1.76725;
										else
										{
											if(rsrq < -12.5)
											{
												if(rsrp < -110.5)
													return 11.0855;
												else
												{
													if(sinr < -4.5)
														return 8.15661;
													else
														return 5.9828;
												}
											}
											else
											{
												if(rsrp < -110.5)
													return 26.0799;
												else
												{
													if(velocity < 12.375)
														return 14.7126;
													else
														return 10.570925;
												}
											}
										}
									}
									else
									{
										if(rsrq < -12)
											return 12.6858;
										else
											return 21.7984;
									}
								}
								else
									return 34.097;
							}
						}
					}
					else
					{
						if(payload < 3)
							return 3.61664;
						else
						{
							if(rsrp < -96.5)
							{
								if(payload < 7)
								{
									if(sinr < 2.5)
										return 20.93945;
									else
										return 22.6886;
								}
								else
									return 23.9252;
							}
							else
							{
								if(velocity < 12.615)
									return 26.9088;
								else
								{
									if(rsrq < -13.5)
										return 32.76;
									else
										return 35.6546;
								}
							}
						}
					}
				}
				else
				{
					if(cell < 13470339)
					{
						if(rsrp < -101.5)
						{
							if(ta < 30.5)
							{
								if(sinr < -13.5)
								{
									if(velocity < 30.9)
									{
										if(rsrp < -114)
										{
											if(rsrp < -117)
												return 8.35073;
											else
												return 6.27943;
										}
										else
											return 2.57483;
									}
									else
										return 1.34003;
								}
								else
								{
									if(rsrq < -16.5)
										return 0.5799695238;
									else
									{
										if(velocity < 29.58)
										{
											if(payload < 0.75)
												return 0.6441485263;
											else
											{
												if(velocity < 18.15)
												{
													if(rsrp < -110.5)
													{
														if(rsrp < -116.5)
															return 3.58905;
														else
															return 1.3607489286;
													}
													else
													{
														if(payload < 4.5)
														{
															if(payload < 1.5)
															{
																if(cqi < 5.5)
																	return 4.49438;
																else
																{
																	if(ta < 23.5)
																		return 0.938747;
																	else
																		return 3.97812;
																}
															}
															else
															{
																if(rsrp < -106)
																{
																	if(velocity < 12.64)
																		return 0.6510631429;
																	else
																	{
																		if(rsrp < -108.5)
																			return 0.514445;
																		else
																			return 3.67732;
																	}
																}
																else
																	return 2.0360158333;
															}
														}
														else
														{
															if(payload < 8.5)
															{
																if(rsrp < -105.5)
																{
																	if(rsrp < -109.5)
																		return 6.13615;
																	else
																	{
																		if(rsrp < -108.5)
																			return 1.44984;
																		else
																			return 3.8946036364;
																	}
																}
																else
																	return 2.4014425;
															}
															else
															{
																if(rsrp < -103.5)
																{
																	if(velocity < 14.1)
																	{
																		if(rsrq < -13.5)
																			return 3.68987;
																		else
																			return 2.29627;
																	}
																	else
																		return 1.6045915;
																}
																else
																	return 2.99863;
															}
														}
													}
												}
												else
												{
													if(sinr < 0.5)
													{
														if(sinr < -8.5)
															return 1.3587;
														else
														{
															if(ta < 16)
																return 11.6861;
															else
															{
																if(velocity < 22.06)
																{
																	if(payload < 5)
																		return 7.22674;
																	else
																		return 5.999;
																}
																else
																{
																	if(payload < 6)
																		return 3.3196766667;
																	else
																		return 6.020366;
																}
															}
														}
													}
													else
													{
														if(rsrq < -14.5)
															return 3.89579;
														else
															return 1.4439976667;
													}
												}
											}
										}
										else
										{
											if(ta < 25)
											{
												if(ta < 13.5)
												{
													if(cqi < 9.5)
														return 1.4198112143;
													else
														return 2.64983;
												}
												else
													return 0.8494647083;
											}
											else
												return 6.46465;
										}
									}
								}
							}
							else
							{
								if(rsrq < -13.5)
								{
									if(rsrp < -105.5)
										return 15.6032;
									else
										return 23.988;
								}
								else
								{
									if(payload < 5)
										return 9.02425;
									else
										return 14.2349;
								}
							}
						}
						else
						{
							if(ta < 18)
							{
								if(payload < 2.5)
								{
									if(cell < 13404931)
									{
										if(rsrp < -98.5)
											return 7.62268;
										else
											return 5.97461;
									}
									else
										return 1.20192;
								}
								else
								{
									if(velocity < 16.54)
									{
										if(payload < 9.5)
										{
											if(velocity < 15.745)
												return 5.6986433333;
											else
												return 3.54531;
										}
										else
											return 1.95413;
									}
									else
									{
										if(rsrq < -11.5)
										{
											if(ta < 15)
											{
												if(rsrp < -97.5)
													return 1.1952068889;
												else
												{
													if(rsrq < -21.5)
														return 3.43249;
													else
														return 1.6554327778;
												}
											}
											else
												return 0.835073;
										}
										else
											return 2.70718;
									}
								}
							}
							else
							{
								if(cqi < 1.5)
									return 22.0907;
								else
								{
									if(payload < 1.5)
									{
										if(payload < 0.3)
										{
											if(ta < 27.5)
												return 0.4342005;
											else
												return 2.07793;
										}
										else
										{
											if(cqi < 5)
												return 1.35387;
											else
											{
												if(payload < 0.75)
													return 7.15564;
												else
													return 9.59233;
											}
										}
									}
									else
									{
										if(payload < 2.5)
										{
											if(rsrq < -13.5)
											{
												if(rsrp < -96.5)
													return 19.802;
												else
													return 11.8993333333;
											}
											else
												return 1.57233;
										}
										else
										{
											if(rsrq < -11.5)
											{
												if(cqi < 7.5)
												{
													if(cell < 13416323)
													{
														if(payload < 4)
															return 1.73913;
														else
														{
															if(rsrq < -12.5)
																return 4.9570375;
															else
																return 6.49403;
														}
													}
													else
													{
														if(ta < 22.5)
														{
															if(sinr < 1.5)
																return 2.78782;
															else
																return 5.7211;
														}
														else
															return 0.326744;
													}
												}
												else
												{
													if(velocity < 14.08)
														return 15.1181;
													else
													{
														if(velocity < 15.18)
														{
															if(rsrp < -95.5)
																return 0.300349;
															else
																return 2.95298;
														}
														else
														{
															if(velocity < 24.275)
																return 9.10279;
															else
															{
																if(rsrp < -96.5)
																	return 7.52115;
																else
																	return 5.76618;
															}
														}
													}
												}
											}
											else
												return 20.4082;
										}
									}
								}
							}
						}
					}
					else
					{
						if(sinr < -2.5)
						{
							if(sinr < -10)
								return 8.81057;
							else
							{
								if(rsrp < -106)
								{
									if(payload < 1.25)
										return 0.56764625;
									else
									{
										if(velocity < 16.665)
										{
											if(velocity < 1.05)
												return 3.3127133333;
											else
											{
												if(rsrp < -110)
												{
													if(payload < 5.5)
														return 1.49376;
													else
														return 2.8229275;
												}
												else
													return 3.32818;
											}
										}
										else
											return 1.67609;
									}
								}
								else
								{
									if(rsrp < -100.5)
										return 8.181;
									else
									{
										if(payload < 3)
											return 3.64818;
										else
											return 7.84621;
									}
								}
							}
						}
						else
						{
							if(sinr < 0.5)
							{
								if(rsrp < -99.5)
								{
									if(cell < 13527810.5)
										return 7.84317;
									else
									{
										if(cqi < 6.5)
										{
											if(rsrp < -102)
												return 12.987;
											else
												return 15.543;
										}
										else
											return 18.7647;
									}
								}
								else
								{
									if(rsrp < -97)
										return 19.0153;
									else
										return 24.819;
								}
							}
							else
							{
								if(payload < 1.5)
								{
									if(cell < 13532161.5)
									{
										if(rsrp < -96.5)
											return 2.50627;
										else
											return 4.16233;
									}
									else
									{
										if(sinr < 2)
											return 24.3161;
										else
										{
											if(cqi < 7.5)
												return 10.7095;
											else
												return 8.94855;
										}
									}
								}
								else
								{
									if(rsrp < -107.5)
										return 0.658355;
									else
									{
										if(rsrq < -13.5)
											return 0.720526;
										else
											return 7.26612;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				if(rsrp < -86.5)
				{
					if(payload < 0.75)
					{
						if(sinr < 12.5)
						{
							if(cqi < 14.5)
							{
								if(payload < 0.3)
								{
									if(ta < 47)
									{
										if(velocity < 2.585)
										{
											if(rsrp < -110.5)
											{
												if(rsrq < -9.5)
													return 2.07793;
												else
													return 0.698693;
											}
											else
												return 4.96896;
										}
										else
										{
											if(f < 1362.55)
											{
												if(velocity < 35.365)
												{
													if(rsrq < -7)
													{
														if(sinr < 2)
															return 1.16449;
														else
															return 4.1203254545;
													}
													else
														return 0.793654;
												}
												else
													return 6.13448;
											}
											else
											{
												if(velocity < 12.635)
												{
													if(cqi < 6.5)
														return 2.13334;
													else
													{
														if(sinr < -1.5)
															return 7.76702;
														else
															return 5.7834266667;
													}
												}
												else
												{
													if(ta < 16.5)
														return 7.81148;
													else
														return 4.6243;
												}
											}
										}
									}
									else
										return 0.314838;
								}
								else
								{
									if(cell < 13470339)
									{
										if(cell < 13067401)
											return 6.79063;
										else
										{
											if(ta < 23.5)
											{
												if(rsrp < -110.5)
													return 10.2302;
												else
												{
													if(rsrq < -7)
													{
														if(rsrq < -8.5)
															return 15.4671666667;
														else
															return 14.1343;
													}
													else
														return 17.7778;
												}
											}
											else
												return 8.14664;
										}
									}
									else
									{
										if(rsrp < -92)
											return 1.50093;
										else
											return 4.80192;
									}
								}
							}
							else
							{
								if(rsrq < -7.5)
									return 21.0526;
								else
									return 13.4228;
							}
						}
						else
						{
							if(rsrq < -8)
								return 7.61908;
							else
							{
								if(ta < 46.5)
								{
									if(velocity < 13.25)
									{
										if(ta < 16.5)
											return 16.5289;
										else
											return 18.1818;
									}
									else
										return 10.19651;
								}
								else
									return 22.2222;
							}
						}
					}
					else
					{
						if(rsrp < -101.5)
						{
							if(cqi < 6.5)
							{
								if(cell < 13393670.5)
								{
									if(velocity < 3.86)
									{
										if(cell < 13392905)
										{
											if(rsrp < -106.5)
											{
												if(sinr < 2)
													return 16.7715;
												else
													return 13.8456;
											}
											else
												return 9.23254;
										}
										else
										{
											if(payload < 8.5)
											{
												if(sinr < 0)
													return 26.305;
												else
													return 21.4549;
											}
											else
												return 14.1315;
										}
									}
									else
									{
										if(sinr < 5)
										{
											if(payload < 4.5)
											{
												if(payload < 2.5)
													return 11.8343;
												else
													return 8.42697;
											}
											else
											{
												if(ta < 22)
													return 5.68909;
												else
													return 3.09637;
											}
										}
										else
										{
											if(sinr < 8)
												return 5.82189;
											else
												return 4.3483;
										}
									}
								}
								else
								{
									if(sinr < -4.5)
										return 0.8623065;
									else
									{
										if(rsrp < -109.5)
											return 6.85225;
										else
											return 4.1492133333;
									}
								}
							}
							else
							{
								if(sinr < 19.5)
								{
									if(cell < 13405313.5)
									{
										if(cell < 13067273.5)
										{
											if(sinr < -7)
												return 6.01956;
											else
												return 1.253717;
										}
										else
										{
											if(f < 2247.55)
											{
												if(f < 1362.55)
												{
													if(sinr < -3)
														return 28.5459;
													else
													{
														if(ta < 22.5)
														{
															if(sinr < 6)
																return 9.01917;
															else
																return 7.02371;
														}
														else
														{
															if(rsrp < -105)
																return 6.04002;
															else
																return 4.01808;
														}
													}
												}
												else
												{
													if(rsrq < -7.5)
													{
														if(cqi < 10.5)
														{
															if(rsrp < -107.5)
															{
																if(cell < 13392904.5)
																{
																	if(payload < 7)
																	{
																		if(payload < 4.5)
																			return 14.8907333333;
																		else
																		{
																			if(payload < 5.5)
																				return 17.2786;
																			else
																				return 15.5139;
																		}
																	}
																	else
																	{
																		if(ta < 17)
																			return 25.9846;
																		else
																		{
																			if(cqi < 8.5)
																			{
																				if(rsrq < -8.5)
																					return 13.4822;
																				else
																					return 15.2478;
																			}
																			else
																				return 18.3814;
																		}
																	}
																}
																else
																{
																	if(cqi < 9.5)
																	{
																		if(payload < 5.5)
																		{
																			if(rsrq < -8.5)
																			{
																				if(sinr < 2.5)
																					return 16.8776;
																				else
																				{
																					if(velocity < 6.59)
																						return 31.8725;
																					else
																					{
																						if(payload < 2.5)
																							return 18.7354;
																						else
																							return 15.9363;
																					}
																				}
																			}
																			else
																			{
																				if(ta < 15)
																					return 16.8185;
																				else
																					return 2.72944;
																			}
																		}
																		else
																		{
																			if(velocity < 0.93)
																				return 6.41026;
																			else
																			{
																				if(rsrq < -9.5)
																					return 15.088;
																				else
																				{
																					if(sinr < 3.5)
																						return 5.57578;
																					else
																					{
																						if(velocity < 3.64)
																							return 11.6486;
																						else
																							return 18.4403;
																					}
																				}
																			}
																		}
																	}
																	else
																	{
																		if(rsrp < -110)
																			return 6.83878;
																		else
																			return 8.98876;
																	}
																}
															}
															else
															{
																if(cell < 13392905.5)
																{
																	if(velocity < 13.065)
																	{
																		if(rsrq < -9.5)
																			return 25.0261;
																		else
																			return 16.5276;
																	}
																	else
																	{
																		if(sinr < 9.5)
																			return 13.9297;
																		else
																			return 17.0213;
																	}
																}
																else
																{
																	if(velocity < 11.475)
																	{
																		if(rsrp < -106.5)
																			return 28.2686;
																		else
																			return 30.4569;
																	}
																	else
																		return 25.2167;
																}
															}
														}
														else
														{
															if(velocity < 9.765)
																return 14.8364;
															else
															{
																if(rsrq < -8.5)
																	return 6.785805;
																else
																{
																	if(ta < 43)
																	{
																		if(payload < 3.5)
																			return 7.58294;
																		else
																			return 9.98129;
																	}
																	else
																		return 21.4286;
																}
															}
														}
													}
													else
													{
														if(rsrp < -103.5)
														{
															if(sinr < 4.5)
															{
																if(rsrp < -109)
																	return 30.9392;
																else
																{
																	if(rsrp < -106.5)
																		return 17.7215;
																	else
																		return 22.0994;
																}
															}
															else
															{
																if(cqi < 10.5)
																	return 26.09265;
																else
																{
																	if(payload < 2.5)
																		return 30.1887;
																	else
																		return 26.5781;
																}
															}
														}
														else
															return 11.1111;
													}
												}
											}
											else
											{
												if(sinr < 6)
												{
													if(rsrq < -7.5)
														return 0.87859;
													else
														return 4.77644;
												}
												else
												{
													if(rsrp < -106)
														return 21.4541;
													else
														return 8.94454;
												}
											}
										}
									}
									else
									{
										if(payload < 2.5)
											return 8.2376;
										else
										{
											if(ta < 16)
												return 6.46813;
											else
												return 0.9042806;
										}
									}
								}
								else
									return 0.31746;
							}
						}
						else
						{
							if(cell < 13405313.5)
							{
								if(ta < 29)
								{
									if(payload < 3.5)
									{
										if(cqi < 9.5)
										{
											if(velocity < 14.065)
											{
												if(velocity < 8.885)
													return 11.6875;
												else
													return 8.49257;
											}
											else
											{
												if(payload < 2.5)
													return 2.3786866667;
												else
												{
													if(rsrp < -92.5)
														return 5.07185;
													else
														return 3.76176;
												}
											}
										}
										else
										{
											if(ta < 15.5)
											{
												if(rsrp < -96)
													return 27.972;
												else
												{
													if(rsrq < -9)
														return 20.3046;
													else
														return 22.2017;
												}
											}
											else
												return 11.8519;
										}
									}
									else
									{
										if(rsrp < -98.5)
											return 28.404875;
										else
										{
											if(velocity < 14.67)
											{
												if(f < 1362.55)
												{
													if(rsrp < -93.5)
														return 8.6949166667;
													else
														return 12.0527;
												}
												else
												{
													if(cqi < 13.5)
													{
														if(sinr < 14)
														{
															if(sinr < 2.5)
																return 19.3237;
															else
															{
																if(rsrp < -94)
																{
																	if(cqi < 11.5)
																		return 25.3879;
																	else
																		return 22.3386;
																}
																else
																	return 22.1743;
															}
														}
														else
														{
															if(rsrq < -7.5)
																return 14.8392;
															else
																return 19.94445;
														}
													}
													else
													{
														if(rsrq < -6.5)
														{
															if(sinr < 9)
																return 20.4529;
															else
															{
																if(sinr < 19.5)
																	return 14.6264;
																else
																	return 16.4948;
															}
														}
														else
															return 19.2154;
													}
												}
											}
											else
											{
												if(sinr < 6.5)
												{
													if(velocity < 17.365)
													{
														if(velocity < 15.835)
															return 23.7741;
														else
														{
															if(velocity < 16.58)
																return 25.9019;
															else
																return 27.5862;
														}
													}
													else
													{
														if(velocity < 25.595)
															return 2.57631;
														else
														{
															if(rsrq < -9.5)
																return 28.3688;
															else
																return 18.6741;
														}
													}
												}
												else
												{
													if(sinr < 9)
													{
														if(rsrp < -94.5)
															return 43.1558;
														else
															return 35.2734;
													}
													else
													{
														if(ta < 12.5)
															return 33.264;
														else
														{
															if(rsrq < -6.5)
															{
																if(cell < 13393414.5)
																	return 28.6353;
																else
																{
																	if(payload < 7.5)
																		return 27.3839;
																	else
																	{
																		if(rsrp < -94)
																			return 24.3902;
																		else
																			return 26.3244;
																	}
																}
															}
															else
																return 21.38855;
														}
													}
												}
											}
										}
									}
								}
								else
								{
									if(rsrq < -6.5)
									{
										if(payload < 2.5)
											return 36.3636;
										else
										{
											if(rsrp < -96.5)
											{
												if(velocity < 12.86)
												{
													if(rsrp < -99.5)
														return 25.14095;
													else
													{
														if(rsrq < -9)
															return 19.4766;
														else
															return 16.632;
													}
												}
												else
												{
													if(rsrp < -100.5)
														return 9.5058866667;
													else
														return 13.434;
												}
											}
											else
											{
												if(rsrp < -94.5)
													return 41.0959;
												else
												{
													if(payload < 6)
														return 17.1858;
													else
													{
														if(cqi < 12)
															return 32.0481;
														else
															return 22.2779;
													}
												}
											}
										}
									}
									else
									{
										if(rsrq < -5.5)
										{
											if(ta < 70.5)
											{
												if(velocity < 13.76)
												{
													if(payload < 5.5)
														return 35.2423;
													else
														return 33.3333;
												}
												else
													return 39.5648;
											}
											else
												return 49.3489;
										}
										else
										{
											if(payload < 8)
												return 25.0391;
											else
												return 11.8151;
										}
									}
								}
							}
							else
							{
								if(cell < 13532418.5)
								{
									if(rsrq < -7.5)
									{
										if(rsrq < -9.5)
										{
											if(sinr < 4.5)
												return 16.6754;
											else
											{
												if(cqi < 8.5)
													return 14.64815;
												else
													return 7.9037533333;
											}
										}
										else
										{
											if(cell < 13527938.5)
											{
												if(velocity < 15.355)
												{
													if(ta < 23.5)
													{
														if(sinr < 3.5)
															return 13.32;
														else
															return 15.78838;
													}
													else
													{
														if(rsrp < -95.5)
															return 24.3531;
														else
															return 18.9026;
													}
												}
												else
												{
													if(payload < 2.5)
														return 11.0632;
													else
													{
														if(rsrp < -93.5)
															return 5.63777;
														else
															return 8.281305;
													}
												}
											}
											else
											{
												if(payload < 4.5)
												{
													if(cqi < 12)
													{
														if(rsrp < -91)
															return 14.3284;
														else
															return 19.0779;
													}
													else
														return 13.2013;
												}
												else
												{
													if(sinr < 3.5)
														return 29.0276;
													else
														return 34.5572;
												}
											}
										}
									}
									else
									{
										if(ta < 17)
										{
											if(payload < 1.5)
												return 3.79867;
											else
											{
												if(sinr < 2)
													return 6.63656;
												else
												{
													if(rsrp < -95)
														return 6.61157;
													else
														return 8.09819;
												}
											}
										}
										else
										{
											if(sinr < 14.5)
											{
												if(sinr < 13)
												{
													if(rsrp < -95.5)
														return 12.2619;
													else
													{
														if(rsrp < -93.5)
														{
															if(ta < 23.5)
																return 17.4545;
															else
																return 14.5852;
														}
														else
														{
															if(rsrp < -92.5)
																return 12.7592;
															else
																return 14.1109;
														}
													}
												}
												else
													return 19.6078;
											}
											else
												return 9.28327;
										}
									}
								}
								else
								{
									if(sinr < 8)
										return 3.51093;
									else
										return 5.66653;
								}
							}
						}
					}
				}
				else
				{
					if(cell < 13459586)
					{
						if(ta < 12.5)
							return 34.188;
						else
							return 41.5947333333;
					}
					else
					{
						if(cqi < 8.5)
							return 2.29932;
						else
						{
							if(sinr < 6.5)
								return 15.6517;
							else
							{
								if(ta < 15.5)
									return 28.777;
								else
									return 26.13225;
							}
						}
					}
				}
			}
		}
	}
}

float vodafone_dl_tree_6(float payload, float rsrp, float rsrq, float sinr, float cqi, float ta, float velocity, float cell, float f)
{
	if(sinr < 9.5)
	{
		if(ta < 10.5)
		{
			if(rsrq < -9.5)
			{
				if(cell < 13393413.5)
				{
					if(payload < 0.3)
						return 3.69129;
					else
					{
						if(velocity < 10.905)
						{
							if(rsrp < -88)
							{
								if(rsrq < -14.5)
									return 32.6697;
								else
								{
									if(sinr < 4.5)
									{
										if(velocity < 4.505)
										{
											if(rsrp < -96.5)
											{
												if(cqi < 7)
													return 12.5294666667;
												else
												{
													if(velocity < 1.985)
													{
														if(payload < 1.75)
															return 25.4777;
														else
															return 19.6399;
													}
													else
														return 17.316;
												}
											}
											else
												return 21.8387666667;
										}
										else
										{
											if(sinr < 1.5)
											{
												if(cqi < 9.5)
												{
													if(sinr < -0.5)
													{
														if(rsrp < -96)
															return 31.8514;
														else
														{
															if(payload < 6)
																return 25.3365;
															else
																return 23.5294;
														}
													}
													else
														return 22.575;
												}
												else
													return 32.3756;
											}
											else
											{
												if(f < 1362.55)
												{
													if(payload < 4.5)
														return 17.2414;
													else
														return 21.7613;
												}
												else
												{
													if(sinr < 3.5)
														return 19.802;
													else
														return 22.54614;
												}
											}
										}
									}
									else
									{
										if(cqi < 13.5)
										{
											if(rsrp < -96.5)
											{
												if(rsrq < -11.5)
													return 20.2276;
												else
													return 22.409;
											}
											else
											{
												if(rsrq < -10.5)
													return 26.9298;
												else
													return 28.5714;
											}
										}
										else
											return 37.5587;
									}
								}
							}
							else
								return 36.7816;
						}
						else
						{
							if(cell < 13175298.5)
							{
								if(velocity < 15.465)
								{
									if(sinr < 6)
									{
										if(rsrq < -13)
											return 23.0397;
										else
										{
											if(rsrp < -84.5)
												return 25.9235;
											else
												return 24.2319;
										}
									}
									else
									{
										if(velocity < 12.9)
											return 40.6091;
										else
										{
											if(cell < 13074434)
												return 32.3596;
											else
											{
												if(payload < 6)
													return 22.7273;
												else
													return 26.5869;
											}
										}
									}
								}
								else
									return 45.977;
							}
							else
							{
								if(velocity < 14.425)
								{
									if(ta < 6.5)
									{
										if(sinr < -0.5)
											return 56.7376;
										else
										{
											if(payload < 8.5)
												return 48.4848;
											else
												return 51.7613;
										}
									}
									else
									{
										if(velocity < 12.92)
											return 41.1664;
										else
											return 35.7942;
									}
								}
								else
									return 18.8679;
							}
						}
					}
				}
				else
				{
					if(sinr < 0.5)
					{
						if(rsrp < -103)
						{
							if(cell < 13681154.5)
							{
								if(f < 1745)
								{
									if(rsrp < -109)
									{
										if(ta < 6.5)
										{
											if(rsrq < -12.5)
											{
												if(rsrq < -13.5)
													return 3.17767;
												else
													return 0.876734;
											}
											else
												return 4.37828;
										}
										else
										{
											if(cqi < 4.5)
											{
												if(rsrp < -111.5)
													return 2.320025;
												else
													return 4.02012;
											}
											else
												return 0.808899;
										}
									}
									else
									{
										if(rsrq < -11.5)
										{
											if(rsrp < -107.5)
											{
												if(sinr < -2)
													return 3.54021;
												else
													return 10.7853;
											}
											else
											{
												if(cqi < 3.5)
													return 10.2302;
												else
												{
													if(rsrq < -12.5)
														return 0.234298;
													else
														return 2.0338231507;
												}
											}
										}
										else
											return 15.3846;
									}
								}
								else
								{
									if(cqi < 5)
										return 2.14133;
									else
									{
										if(cqi < 7)
											return 18.8368;
										else
											return 16.1943;
									}
								}
							}
							else
							{
								if(velocity < 13.575)
									return 15.2531;
								else
									return 11.9048;
							}
						}
						else
						{
							if(cell < 13394817.5)
							{
								if(payload < 2.25)
									return 19.5122;
								else
								{
									if(sinr < -3.5)
										return 35.5556;
									else
									{
										if(rsrp < -97.5)
											return 28.7081;
										else
											return 31.3725;
									}
								}
							}
							else
							{
								if(payload < 4)
								{
									if(rsrp < -99.5)
									{
										if(cell < 13618181.5)
											return 12.2511;
										else
										{
											if(payload < 2.5)
											{
												if(cqi < 4.5)
													return 8.28157;
												else
												{
													if(rsrp < -101)
														return 6.20636;
													else
													{
														if(cqi < 5.5)
															return 5.81395;
														else
															return 8.83002;
													}
												}
											}
											else
												return 4.9505;
										}
									}
									else
									{
										if(rsrq < -12.5)
										{
											if(velocity < 15.245)
												return 13.6054;
											else
												return 15.0943;
										}
										else
										{
											if(sinr < -1.5)
											{
												if(payload < 0.55)
													return 5.88238;
												else
													return 17.8174;
											}
											else
											{
												if(payload < 0.55)
													return 9.63859;
												else
													return 4.21053;
											}
										}
									}
								}
								else
								{
									if(cell < 13830145.5)
									{
										if(rsrp < -94)
										{
											if(rsrp < -100.5)
												return 30.5214;
											else
											{
												if(rsrp < -99)
													return 15.9204;
												else
												{
													if(cqi < 9)
													{
														if(rsrp < -96.5)
															return 28.1889;
														else
															return 25.74;
													}
													else
														return 23.9234;
												}
											}
										}
										else
										{
											if(rsrp < -90)
												return 15.9808;
											else
												return 18.2492;
										}
									}
									else
									{
										if(velocity < 5.61)
										{
											if(sinr < -1.5)
											{
												if(cqi < 6.5)
													return 11.0913;
												else
													return 9.03827;
											}
											else
											{
												if(rsrq < -12.5)
													return 18.7047;
												else
													return 13.7268;
											}
										}
										else
										{
											if(payload < 8)
												return 16.8168;
											else
												return 18.6047;
										}
									}
								}
							}
						}
					}
					else
					{
						if(ta < 8.5)
						{
							if(cell < 13473032)
							{
								if(rsrp < -98.5)
								{
									if(rsrp < -105.5)
										return 13.0826;
									else
									{
										if(rsrq < -12.5)
										{
											if(sinr < 2.5)
												return 3.17839;
											else
												return 0.8915205;
										}
										else
										{
											if(payload < 3.5)
											{
												if(payload < 0.75)
													return 8.79121;
												else
													return 3.650584;
											}
											else
											{
												if(rsrp < -100.5)
													return 14.7996;
												else
													return 9.48804;
											}
										}
									}
								}
								else
								{
									if(payload < 2.5)
									{
										if(ta < 5)
											return 6.72271;
										else
										{
											if(rsrp < -94.5)
												return 10.0819;
											else
												return 12.4611;
										}
									}
									else
									{
										if(payload < 7.5)
										{
											if(ta < 5)
												return 20.6884571429;
											else
											{
												if(rsrp < -96)
													return 13.7991;
												else
												{
													if(cqi < 8)
														return 12.2699;
													else
														return 17.1215;
												}
											}
										}
										else
											return 9.85357;
									}
								}
							}
							else
							{
								if(rsrq < -12.5)
									return 51.4469;
								else
								{
									if(velocity < 9.895)
									{
										if(sinr < 4.5)
										{
											if(velocity < 8.89)
											{
												if(cell < 13680519.5)
												{
													if(payload < 4.5)
														return 25.4777;
													else
													{
														if(rsrp < -100.5)
															return 23.0919;
														else
														{
															if(payload < 5.5)
																return 22.6501;
															else
																return 21.0804;
														}
													}
												}
												else
												{
													if(rsrq < -11)
														return 21.178;
													else
													{
														if(velocity < 7.16)
														{
															if(rsrp < -108.5)
																return 21.6655;
															else
																return 19.3548;
														}
														else
															return 17.2674;
													}
												}
											}
											else
												return 28.2686;
										}
										else
										{
											if(ta < 5.5)
												return 47.8755;
											else
												return 31.9107;
										}
									}
									else
									{
										if(velocity < 12.58)
										{
											if(rsrq < -11.5)
												return 14.0633;
											else
												return 10.8109;
										}
										else
										{
											if(ta < 6.5)
												return 25.4237;
											else
											{
												if(rsrp < -100.5)
													return 16.1486;
												else
													return 18.8679;
											}
										}
									}
								}
							}
						}
						else
						{
							if(cell < 13393922.5)
							{
								if(rsrq < -10.5)
								{
									if(payload < 7.5)
										return 45.1977;
									else
										return 51.2492;
								}
								else
									return 32.8446;
							}
							else
							{
								if(cqi < 7.5)
								{
									if(cell < 13463809)
										return 39.2157;
									else
									{
										if(rsrp < -95)
										{
											if(velocity < 12.135)
											{
												if(sinr < 5)
													return 15.0517;
												else
													return 13.1291;
											}
											else
												return 20.0501;
										}
										else
											return 21.91806;
									}
								}
								else
								{
									if(payload < 6.5)
									{
										if(rsrp < -97.5)
											return 48.048;
										else
										{
											if(payload < 5)
											{
												if(rsrp < -94.5)
													return 26.61205;
												else
													return 29.5203;
											}
											else
												return 36.2812;
										}
									}
									else
									{
										if(cqi < 8.5)
											return 37.3614;
										else
										{
											if(sinr < 6)
												return 23.6229571429;
											else
												return 35.0219;
										}
									}
								}
							}
						}
					}
				}
			}
			else
			{
				if(sinr < 2.5)
				{
					if(cell < 13531528.5)
					{
						if(rsrp < -101.5)
							return 51.0204;
						else
						{
							if(payload < 0.55)
							{
								if(rsrp < -93.5)
									return 4.16668;
								else
								{
									if(rsrp < -86)
										return 14.6901;
									else
										return 12.7049333333;
								}
							}
							else
							{
								if(cqi < 7.5)
								{
									if(ta < 2.5)
										return 11.9166;
									else
									{
										if(payload < 7.5)
										{
											if(rsrp < -86)
											{
												if(rsrq < -8.5)
													return 36.9686;
												else
												{
													if(sinr < -0.5)
													{
														if(rsrq < -7.5)
														{
															if(payload < 4.5)
																return 37.4707;
															else
																return 35.1097;
														}
														else
														{
															if(velocity < 25.46)
																return 31.5582;
															else
																return 25.9319;
														}
													}
													else
													{
														if(ta < 6)
															return 27.0728;
														else
															return 28.777;
													}
												}
											}
											else
											{
												if(payload < 4)
													return 29.1971;
												else
													return 19.9572;
											}
										}
										else
											return 38.3234;
									}
								}
								else
								{
									if(ta < 6)
									{
										if(cqi < 8.5)
											return 14.4665;
										else
										{
											if(rsrp < -89.5)
												return 19.0749;
											else
											{
												if(cqi < 11)
													return 28.3966;
												else
													return 33.1675;
											}
										}
									}
									else
									{
										if(cqi < 11)
										{
											if(sinr < -1.5)
												return 15.1194666667;
											else
												return 18.1406;
										}
										else
											return 5.7971;
									}
								}
							}
						}
					}
					else
					{
						if(velocity < 5.98)
						{
							if(sinr < 1.5)
								return 25.974;
							else
								return 17.094;
						}
						else
						{
							if(rsrp < -100)
							{
								if(sinr < -3)
									return 15.3649;
								else
								{
									if(sinr < 0)
										return 2.09314;
									else
										return 7.47666;
								}
							}
							else
							{
								if(payload < 7.5)
									return 12.1951;
								else
								{
									if(rsrp < -96.5)
										return 22.1852;
									else
										return 16.609;
								}
							}
						}
					}
				}
				else
				{
					if(rsrp < -108)
					{
						if(cell < 13393419.5)
						{
							if(cell < 13230216.5)
								return 25.2632;
							else
							{
								if(payload < 7.5)
								{
									if(rsrp < -113.5)
										return 11.583;
									else
										return 14.49175;
								}
								else
									return 7.61107;
							}
						}
						else
							return 3.28825;
					}
					else
					{
						if(cqi < 7.5)
						{
							if(payload < 0.3)
							{
								if(velocity < 14.865)
									return 9.12656;
								else
									return 160.001;
							}
							else
							{
								if(sinr < 4.5)
								{
									if(cqi < 5.5)
										return 26.6889;
									else
										return 21.9322;
								}
								else
								{
									if(ta < 3.5)
									{
										if(cell < 13074438)
											return 44.0367;
										else
											return 78.0488;
									}
									else
									{
										if(velocity < 26.07)
										{
											if(cqi < 6.5)
											{
												if(rsrq < -7)
													return 46.2428;
												else
													return 51.9481;
											}
											else
											{
												if(velocity < 7.64)
													return 47.6758;
												else
												{
													if(rsrp < -98.5)
														return 46.3097;
													else
													{
														if(velocity < 9.29)
															return 23.6842;
														else
														{
															if(sinr < 7.5)
															{
																if(velocity < 14.835)
																{
																	if(velocity < 11.355)
																		return 33.3333;
																	else
																		return 35.20308;
																}
																else
																	return 30.4569;
															}
															else
																return 39.7727;
														}
													}
												}
											}
										}
										else
											return 15.9151;
									}
								}
							}
						}
						else
						{
							if(sinr < 3.5)
							{
								if(rsrq < -5)
								{
									if(velocity < 15.84)
									{
										if(payload < 8.5)
										{
											if(rsrp < -93.5)
												return 29.3758;
											else
												return 40.3277;
										}
										else
										{
											if(rsrp < -88)
												return 51.9106;
											else
												return 53.5714;
										}
									}
									else
										return 67.4536;
								}
								else
									return 13.0445;
							}
							else
							{
								if(cell < 13098881.5)
								{
									if(payload < 1.05)
									{
										if(rsrp < -93.5)
											return 3.25204;
										else
										{
											if(rsrp < -88)
												return 19.5123;
											else
												return 13.1148;
										}
									}
									else
									{
										if(sinr < 8.5)
										{
											if(cqi < 11)
											{
												if(velocity < 13.285)
												{
													if(payload < 7.5)
														return 27.2145666667;
													else
														return 25.5265;
												}
												else
													return 30.0752;
											}
											else
											{
												if(payload < 5.5)
													return 36.8098;
												else
													return 40.4296;
											}
										}
										else
											return 14.2476;
									}
								}
								else
								{
									if(rsrp < -84.5)
									{
										if(payload < 4.5)
										{
											if(rsrp < -102)
												return 3.405375;
											else
											{
												if(payload < 1.5)
												{
													if(rsrq < -8.5)
													{
														if(sinr < 6.5)
														{
															if(cqi < 9.5)
																return 26.2295;
															else
																return 27.4914;
														}
														else
															return 31.4961;
													}
													else
													{
														if(ta < 6.5)
														{
															if(rsrp < -93.5)
																return 13.9373;
															else
																return 17.16835;
														}
														else
														{
															if(cell < 13462534)
															{
																if(rsrp < -96.5)
																	return 20.5128;
																else
																	return 17.1674;
															}
															else
															{
																if(payload < 0.75)
																	return 27.027;
																else
																	return 24.7678;
															}
														}
													}
												}
												else
												{
													if(cell < 13463175.5)
													{
														if(sinr < 7.5)
														{
															if(velocity < 13.3)
															{
																if(rsrq < -8.5)
																	return 24.6154;
																else
																{
																	if(ta < 8.5)
																		return 36.5451;
																	else
																	{
																		if(rsrp < -91.5)
																			return 32.3887;
																		else
																			return 34.2612;
																	}
																}
															}
															else
															{
																if(rsrq < -7.5)
																	return 25.869;
																else
																	return 30.303;
															}
														}
														else
															return 45.2617;
													}
													else
													{
														if(payload < 3)
															return 46.5116;
														else
															return 14.0579;
													}
												}
											}
										}
										else
										{
											if(ta < 4.5)
												return 79.7342;
											else
											{
												if(ta < 7)
												{
													if(cell < 13530766)
													{
														if(payload < 8)
														{
															if(rsrp < -93)
																return 25.5552333333;
															else
															{
																if(f < 2247.55)
																	return 33.3985;
																else
																	return 27.5704;
															}
														}
														else
															return 40.6321;
													}
													else
													{
														if(payload < 9)
															return 51.8639;
														else
															return 34.5125;
													}
												}
												else
												{
													if(sinr < 7.5)
													{
														if(ta < 8.5)
														{
															if(rsrq < -7.5)
															{
																if(rsrp < -94)
																	return 37.2439;
																else
																	return 41.9948;
															}
															else
																return 51.5575;
														}
														else
														{
															if(sinr < 5.5)
																return 52.6811;
															else
																return 58.8957;
														}
													}
													else
													{
														if(cell < 13463042.5)
														{
															if(rsrp < -95)
															{
																if(rsrq < -7.5)
																{
																	if(payload < 7)
																		return 26.5047;
																	else
																		return 34.9918;
																}
																else
																	return 49.0196;
															}
															else
																return 50;
														}
														else
														{
															if(cqi < 11)
																return 27.3038;
															else
																return 17.6712;
														}
													}
												}
											}
										}
									}
									else
									{
										if(payload < 1.5)
										{
											if(rsrp < -79.5)
											{
												if(cqi < 10.5)
													return 30.6513;
												else
													return 28.9855;
											}
											else
												return 41.8848;
										}
										else
										{
											if(velocity < 1.23)
											{
												if(rsrq < -7.5)
													return 80;
												else
													return 62.3608;
											}
											else
											{
												if(payload < 2.5)
													return 63.2411;
												else
												{
													if(velocity < 14.47)
													{
														if(ta < 9)
														{
															if(sinr < 8.5)
															{
																if(rsrp < -81)
																{
																	if(rsrp < -83.5)
																		return 47.2813;
																	else
																		return 48.9896;
																}
																else
																{
																	if(sinr < 7.5)
																		return 42.5155;
																	else
																		return 44.2804;
																}
															}
															else
																return 33.6134;
														}
														else
															return 71.8563;
													}
													else
													{
														if(cqi < 9.5)
															return 39.768;
														else
														{
															if(cqi < 10.5)
																return 18.773;
															else
															{
																if(payload < 8)
																	return 23.166;
																else
																	return 25.1493;
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
					}
				}
			}
		}
		else
		{
			if(cell < 13044869)
			{
				if(payload < 4.5)
				{
					if(ta < 18)
					{
						if(rsrp < -110.5)
						{
							if(velocity < 8.7)
								return 0.290488;
							else
							{
								if(sinr < 6.5)
								{
									if(sinr < -7.5)
										return 3.73367;
									else
									{
										if(rsrp < -114.5)
											return 15.3257;
										else
										{
											if(rsrq < -9.5)
											{
												if(velocity < 9.095)
													return 5.93619;
												else
												{
													if(velocity < 10.57)
													{
														if(sinr < 0)
															return 10.4235;
														else
															return 7.92082;
													}
													else
														return 10.9115888889;
												}
											}
											else
												return 14.742;
										}
									}
								}
								else
									return 1.02696;
							}
						}
						else
						{
							if(rsrp < -108.5)
							{
								if(payload < 3.5)
								{
									if(sinr < 4.5)
									{
										if(cqi < 9.5)
										{
											if(velocity < 1.415)
												return 18.9573;
											else
											{
												if(payload < 1.75)
													return 23.3918;
												else
													return 21.6998;
											}
										}
										else
											return 17.094;
									}
									else
									{
										if(velocity < 10.025)
											return 12.648825;
										else
										{
											if(payload < 2)
												return 18.7793;
											else
												return 16.5517;
										}
									}
								}
								else
								{
									if(rsrq < -9.5)
									{
										if(rsrq < -11)
											return 14.0845;
										else
											return 8.08285;
									}
									else
										return 15.4515;
								}
							}
							else
							{
								if(rsrp < -107.5)
								{
									if(sinr < 6)
										return 0.172726;
									else
										return 3.60469;
								}
								else
								{
									if(velocity < 11.675)
									{
										if(cqi < 12)
										{
											if(rsrp < -102)
											{
												if(payload < 0.3)
													return 14.2858;
												else
													return 2.21852;
											}
											else
												return 4.369242;
										}
										else
										{
											if(payload < 0.3)
												return 9.09094;
											else
											{
												if(cqi < 14.5)
													return 14.4928;
												else
													return 22.8571;
											}
										}
									}
									else
									{
										if(rsrp < -96.5)
										{
											if(cqi < 11)
											{
												if(sinr < 1.5)
													return 23.03825;
												else
												{
													if(rsrp < -105)
													{
														if(rsrp < -106.5)
															return 16.8067;
														else
															return 15.2091;
													}
													else
													{
														if(rsrp < -98.5)
															return 19.05155;
														else
															return 22.0588;
													}
												}
											}
											else
											{
												if(velocity < 12.605)
													return 20.5129;
												else
												{
													if(rsrq < -8.5)
													{
														if(rsrq < -10)
															return 12.1213;
														else
															return 9.25569;
													}
													else
														return 16.3265;
												}
											}
										}
										else
										{
											if(rsrp < -93.5)
												return 13.2582333333;
											else
												return 11.9581;
										}
									}
								}
							}
						}
					}
					else
					{
						if(rsrq < -11.5)
							return 6.64866;
						else
							return 33.3335;
					}
				}
				else
				{
					if(cqi < 5.5)
					{
						if(rsrq < -13.5)
						{
							if(rsrp < -112.5)
								return 5.68182;
							else
								return 8.18247;
						}
						else
						{
							if(payload < 7)
								return 12.1029;
							else
								return 10.3426;
						}
					}
					else
					{
						if(cqi < 7.5)
						{
							if(rsrp < -107.5)
							{
								if(rsrq < -9.5)
								{
									if(rsrp < -112.5)
									{
										if(sinr < 0.5)
											return 23.5294;
										else
											return 19.4512;
									}
									else
									{
										if(sinr < 4.5)
										{
											if(velocity < 14.085)
											{
												if(velocity < 12.48)
												{
													if(sinr < 1.5)
													{
														if(payload < 9.5)
														{
															if(velocity < 3.015)
																return 19.6754;
															else
																return 21.1206;
														}
														else
															return 16.7434;
													}
													else
													{
														if(rsrp < -110)
															return 13.1723;
														else
															return 9.7612;
													}
												}
												else
													return 6.5538;
											}
											else
												return 29.138;
										}
										else
											return 20.6493;
									}
								}
								else
									return 10.68034;
							}
							else
							{
								if(cell < 12807947.5)
								{
									if(payload < 8)
										return 31.7041;
									else
										return 28.643;
								}
								else
								{
									if(payload < 7.5)
									{
										if(sinr < 1.5)
										{
											if(ta < 25.5)
												return 11.3983;
											else
												return 15.7702;
										}
										else
										{
											if(ta < 15.5)
												return 20.9333;
											else
												return 17.2202;
										}
									}
									else
									{
										if(cqi < 6.5)
											return 11.7743;
										else
											return 36.7605;
									}
								}
							}
						}
						else
						{
							if(f < 1362.55)
							{
								if(velocity < 30.055)
								{
									if(payload < 7.5)
									{
										if(rsrq < -8)
										{
											if(payload < 6.5)
												return 31.9361;
											else
												return 26.7048;
										}
										else
										{
											if(sinr < 8)
												return 19.9833;
											else
												return 29.9786;
										}
									}
									else
									{
										if(cqi < 9.5)
										{
											if(payload < 8.5)
												return 32.8037;
											else
												return 44.4994;
										}
										else
										{
											if(rsrp < -86.5)
												return 31.71235;
											else
												return 33.5196;
										}
									}
								}
								else
									return 12.8077;
							}
							else
							{
								if(rsrp < -103.5)
								{
									if(sinr < 6.5)
									{
										if(cqi < 10.5)
										{
											if(sinr < 1.5)
											{
												if(velocity < 13.44)
												{
													if(velocity < 5.355)
														return 26.5225333333;
													else
													{
														if(velocity < 11.285)
															return 17.7738;
														else
														{
															if(payload < 8)
																return 25.2632;
															else
																return 23.76;
														}
													}
												}
												else
													return 16.2885;
											}
											else
											{
												if(sinr < 2.5)
													return 11.3026;
												else
												{
													if(velocity < 11.98)
													{
														if(sinr < 5.5)
														{
															if(rsrq < -11.5)
															{
																if(rsrp < -110.5)
																	return 24.7219;
																else
																	return 15.3965;
															}
															else
															{
																if(ta < 16.5)
																	return 20.1258;
																else
																	return 11.4811;
															}
														}
														else
															return 24.2057;
													}
													else
														return 14.7411;
												}
											}
										}
										else
										{
											if(velocity < 15.13)
											{
												if(payload < 5.5)
													return 21.7876666667;
												else
												{
													if(payload < 8.5)
													{
														if(payload < 7)
															return 8.45368;
														else
														{
															if(velocity < 11.485)
																return 21.0112;
															else
															{
																if(cqi < 13.5)
																	return 11.41266;
																else
																	return 15.0447;
															}
														}
													}
													else
													{
														if(rsrp < -107.5)
															return 18.86255;
														else
															return 23.902;
													}
												}
											}
											else
												return 27.4207;
										}
									}
									else
									{
										if(payload < 7.5)
										{
											if(rsrp < -107.5)
												return 22.2222;
											else
											{
												if(rsrp < -106)
													return 36.8179;
												else
													return 30.7861;
											}
										}
										else
										{
											if(velocity < 0.66)
											{
												if(rsrq < -7.5)
													return 32.7065;
												else
													return 29.0592;
											}
											else
											{
												if(rsrp < -110)
												{
													if(ta < 15.5)
														return 22.5925;
													else
														return 25.2924;
												}
												else
												{
													if(velocity < 6.88)
														return 20.2212;
													else
													{
														if(rsrp < -107)
															return 11.4213;
														else
															return 5.70207;
													}
												}
											}
										}
									}
								}
								else
									return 29.7275;
							}
						}
					}
				}
			}
			else
			{
				if(rsrq < -9.5)
				{
					if(cell < 13394312)
					{
						if(ta < 11.5)
							return 37.9147;
						else
						{
							if(ta < 21.5)
							{
								if(sinr < 1.5)
								{
									if(payload < 4.5)
									{
										if(cell < 13392905)
										{
											if(velocity < 14.41)
											{
												if(velocity < 12.4)
													return 1.15162875;
												else
													return 2.82511;
											}
											else
											{
												if(rsrq < -12)
													return 1.49254;
												else
													return 8.24745;
											}
										}
										else
										{
											if(ta < 15.5)
											{
												if(payload < 0.75)
												{
													if(cqi < 7.5)
													{
														if(sinr < -3.5)
															return 0.505691;
														else
															return 5.44218;
													}
													else
														return 8.0149033333;
												}
												else
												{
													if(cell < 13393414.5)
													{
														if(sinr < -4.5)
															return 18.4332;
														else
															return 10.84484;
													}
													else
														return 3.61664;
												}
											}
											else
											{
												if(sinr < -10.5)
													return 1.5503933333;
												else
												{
													if(rsrq < -11.5)
														return 4;
													else
														return 9.28074;
												}
											}
										}
									}
									else
									{
										if(sinr < -0.5)
										{
											if(velocity < 0.81)
											{
												if(rsrq < -11.5)
												{
													if(sinr < -7)
														return 21.4158;
													else
														return 14.8644;
												}
												else
													return 13.66205;
											}
											else
											{
												if(payload < 7.5)
												{
													if(rsrq < -14.5)
														return 18.5701;
													else
													{
														if(cqi < 6.5)
														{
															if(cqi < 5.5)
																return 7.492505;
															else
																return 4.08789;
														}
														else
															return 11.1982;
													}
												}
												else
													return 2.8458157143;
											}
										}
										else
										{
											if(ta < 12.5)
												return 15.2091;
											else
											{
												if(payload < 7)
													return 20.3735;
												else
													return 23.9252;
											}
										}
									}
								}
								else
								{
									if(rsrq < -10.5)
									{
										if(rsrq < -12.5)
										{
											if(rsrp < -99.5)
												return 6.82594;
											else
												return 11.5942;
										}
										else
										{
											if(cell < 13392904.5)
											{
												if(velocity < 6.66)
													return 25.6904;
												else
												{
													if(payload < 4)
														return 16.6147;
													else
														return 5.37634;
												}
											}
											else
											{
												if(rsrq < -11.5)
												{
													if(payload < 6)
														return 23.5988;
													else
														return 26.9088;
												}
												else
												{
													if(payload < 3)
														return 17.0581666667;
													else
														return 21.5054;
												}
											}
										}
									}
									else
									{
										if(rsrp < -96.5)
										{
											if(velocity < 10.335)
											{
												if(payload < 2.55)
												{
													if(cell < 13392904.5)
														return 5.75542;
													else
														return 2.07793;
												}
												else
												{
													if(payload < 6.5)
														return 13.8456;
													else
														return 6.0595766667;
												}
											}
											else
											{
												if(payload < 3.75)
													return 15.1515;
												else
													return 13.5758;
											}
										}
										else
											return 22.1743;
									}
								}
							}
							else
							{
								if(cqi < 9.5)
								{
									if(rsrq < -19.5)
										return 17.6796;
									else
									{
										if(velocity < 12.305)
										{
											if(velocity < 2.97)
											{
												if(payload < 5)
												{
													if(sinr < 1.5)
														return 6.0174833333;
													else
														return 8.9041666667;
												}
												else
													return 3.01526;
											}
											else
											{
												if(ta < 43)
												{
													if(payload < 3)
														return 0.3073924286;
													else
														return 1.7406371429;
												}
												else
												{
													if(velocity < 12.25)
													{
														if(cqi < 8.5)
														{
															if(ta < 67.5)
															{
																if(payload < 8)
																	return 3.453875;
																else
																	return 5.26393;
															}
															else
															{
																if(velocity < 9.555)
																	return 0.43908;
																else
																	return 2.27855;
															}
														}
														else
															return 8.79124;
													}
													else
														return 1.92129;
												}
											}
										}
										else
										{
											if(ta < 65)
											{
												if(rsrp < -103.5)
												{
													if(sinr < 2.5)
													{
														if(rsrq < -15.5)
															return 4.93599;
														else
														{
															if(velocity < 13.97)
																return 3.09637;
															else
																return 1.4726336667;
														}
													}
													else
													{
														if(velocity < 34.195)
														{
															if(payload < 4)
																return 0.297674;
															else
																return 3.1335266667;
														}
														else
															return 6.10998;
													}
												}
												else
												{
													if(cqi < 5.5)
													{
														if(payload < 6)
															return 21.4938;
														else
															return 12.954;
													}
													else
													{
														if(rsrp < -100.5)
															return 20.1005;
														else
														{
															if(rsrq < -10.5)
															{
																if(rsrq < -12)
																	return 8.75082;
																else
																	return 4.9896675;
															}
															else
															{
																if(sinr < -0.5)
																	return 5.75542;
																else
																	return 1.16449;
															}
														}
													}
												}
											}
											else
											{
												if(payload < 1.5)
												{
													if(rsrq < -13)
														return 4.19727;
													else
														return 1.1244645;
												}
												else
												{
													if(sinr < 4.5)
													{
														if(velocity < 15.64)
														{
															if(ta < 78)
																return 11.31415;
															else
																return 8.42697;
														}
														else
														{
															if(cqi < 7)
																return 6.5006733333;
															else
																return 2.40574;
														}
													}
													else
														return 26.0799;
												}
											}
										}
									}
								}
								else
								{
									if(cqi < 10.5)
									{
										if(velocity < 12.755)
											return 10.3414333333;
										else
										{
											if(rsrp < -104.5)
												return 14.4231;
											else
												return 25.0261;
										}
									}
									else
									{
										if(payload < 5)
											return 0.6387725;
										else
											return 12.6858;
									}
								}
							}
						}
					}
					else
					{
						if(ta < 32.5)
						{
							if(ta < 12.5)
							{
								if(cqi < 8)
								{
									if(rsrp < -103.5)
										return 0.5171734286;
									else
									{
										if(sinr < 0)
										{
											if(rsrq < -13)
												return 5.92595;
											else
												return 8.181;
										}
										else
											return 3.03855;
									}
								}
								else
								{
									if(velocity < 34.945)
									{
										if(sinr < 5)
										{
											if(payload < 4.5)
												return 20.47292;
											else
												return 24.819;
										}
										else
											return 7.89474;
									}
									else
										return 1.34262;
								}
							}
							else
							{
								if(rsrp < -99.5)
								{
									if(rsrq < -21)
									{
										if(payload < 3)
											return 8.35073;
										else
											return 10.2944233333;
									}
									else
									{
										if(velocity < 28.675)
										{
											if(payload < 0.75)
											{
												if(cell < 13470467)
												{
													if(rsrp < -100.5)
													{
														if(sinr < -13)
															return 6.27943;
														else
														{
															if(velocity < 15.53)
																return 0.3216703158;
															else
															{
																if(cell < 13415426.5)
																{
																	if(rsrq < -12.5)
																	{
																		if(rsrq < -14.5)
																			return 2.11083;
																		else
																			return 6.90846;
																	}
																	else
																		return 0.050839;
																}
																else
																	return 0.4483388571;
															}
														}
													}
													else
													{
														if(ta < 17.5)
															return 1.321;
														else
															return 7.15564;
													}
												}
												else
												{
													if(rsrq < -13.5)
														return 0.8056615;
													else
														return 7.84317;
												}
											}
											else
											{
												if(cell < 13470467)
												{
													if(ta < 22.5)
													{
														if(rsrp < -113)
														{
															if(ta < 17)
																return 2.0367466667;
															else
																return 0.7607936;
														}
														else
														{
															if(cell < 13415426.5)
															{
																if(velocity < 19.16)
																{
																	if(payload < 4.5)
																	{
																		if(ta < 15.5)
																		{
																			if(rsrq < -15)
																				return 0.196088;
																			else
																			{
																				if(rsrp < -100.5)
																				{
																					if(rsrq < -12.5)
																						return 2.838374;
																					else
																						return 1.6552902857;
																				}
																				else
																					return 0.436443;
																			}
																		}
																		else
																		{
																			if(velocity < 13.69)
																				return 0.931135;
																			else
																				return 4.2571125;
																		}
																	}
																	else
																	{
																		if(rsrp < -103.5)
																		{
																			if(payload < 8.5)
																			{
																				if(ta < 19)
																					return 3.7907118182;
																				else
																					return 1.45826;
																			}
																			else
																				return 1.9847031667;
																		}
																		else
																		{
																			if(rsrq < -12.5)
																				return 6.0716266667;
																			else
																			{
																				if(sinr < 1)
																					return 4.35866;
																				else
																					return 2.99863;
																			}
																		}
																	}
																}
																else
																{
																	if(ta < 19.5)
																	{
																		if(velocity < 25.03)
																			return 0.664967;
																		else
																			return 5.31032;
																	}
																	else
																	{
																		if(rsrp < -107.5)
																		{
																			if(rsrp < -110)
																			{
																				if(payload < 4)
																					return 7.22674;
																				else
																					return 5.89846;
																			}
																			else
																				return 8.8164;
																		}
																		else
																		{
																			if(payload < 5)
																				return 1.3587;
																			else
																				return 5.999;
																		}
																	}
																}
															}
															else
															{
																if(velocity < 25.385)
																{
																	if(rsrp < -108)
																		return 11.6861;
																	else
																	{
																		if(velocity < 23.5)
																		{
																			if(payload < 5.5)
																				return 3.65876;
																			else
																				return 5.7211;
																		}
																		else
																			return 8.83978;
																	}
																}
																else
																	return 2.19262;
															}
														}
													}
													else
													{
														if(ta < 26)
														{
															if(rsrq < -13.5)
															{
																if(velocity < 14.655)
																	return 1.6203128;
																else
																{
																	if(velocity < 15.325)
																	{
																		if(payload < 6)
																			return 2.01842;
																		else
																		{
																			if(payload < 8.5)
																				return 6.13615;
																			else
																				return 3.76353;
																		}
																	}
																	else
																	{
																		if(sinr < -3)
																			return 2.8639788889;
																		else
																			return 0.67143;
																	}
																}
															}
															else
																return 1.4308933913;
														}
														else
															return 5.3936925;
													}
												}
												else
												{
													if(rsrp < -102.5)
													{
														if(payload < 6.5)
														{
															if(velocity < 13.645)
																return 2.72511;
															else
															{
																if(rsrq < -12)
																	return 7.26612;
																else
																	return 2.43977;
															}
														}
														else
														{
															if(sinr < 0.5)
															{
																if(payload < 8.5)
																	return 12.1822666667;
																else
																	return 3.13398;
															}
															else
															{
																if(rsrq < -11.5)
																	return 4.99376;
																else
																	return 7.21742;
															}
														}
													}
													else
														return 10.7095;
												}
											}
										}
										else
										{
											if(cell < 13405313.5)
											{
												if(rsrp < -105)
													return 2.02224;
												else
													return 7.39506;
											}
											else
											{
												if(rsrq < -11)
												{
													if(ta < 27)
													{
														if(ta < 13.5)
															return 1.6875073333;
														else
															return 0.7003644524;
													}
													else
													{
														if(payload < 5.5)
															return 4.87033;
														else
															return 6.46465;
													}
												}
												else
													return 9.409;
											}
										}
									}
								}
								else
								{
									if(cell < 13470339)
									{
										if(rsrq < -13.5)
										{
											if(sinr < -4)
											{
												if(rsrp < -98.5)
													return 2.78782;
												else
													return 1.193058;
											}
											else
											{
												if(rsrq < -15)
													return 11.2518;
												else
													return 19.802;
											}
										}
										else
										{
											if(rsrp < -98.5)
												return 15.1181;
											else
											{
												if(sinr < 6.5)
												{
													if(cell < 13405442)
													{
														if(velocity < 25.085)
														{
															if(payload < 2)
																return 5.97461;
															else
															{
																if(sinr < 1)
																	return 4.44259;
																else
																	return 1.97547;
															}
														}
														else
															return 6.49403;
													}
													else
													{
														if(ta < 23.5)
															return 0.906696;
														else
															return 2.95298;
													}
												}
												else
												{
													if(rsrq < -10.5)
													{
														if(rsrq < -12)
															return 5.137452;
														else
															return 2.70718;
													}
													else
													{
														if(velocity < 26.325)
															return 8.1469933333;
														else
															return 5.16796;
													}
												}
											}
										}
									}
									else
									{
										if(payload < 6)
										{
											if(rsrq < -13.5)
											{
												if(payload < 1.05)
													return 4.21054;
												else
													return 0.5099495;
											}
											else
											{
												if(sinr < -2)
													return 7.84621;
												else
													return 12.987;
											}
										}
										else
										{
											if(cqi < 5)
												return 19.0153;
											else
												return 24.3439;
										}
									}
								}
							}
						}
						else
						{
							if(velocity < 32.05)
							{
								if(sinr < 0)
								{
									if(rsrq < -14)
									{
										if(payload < 6)
											return 1.67609;
										else
											return 3.32818;
									}
									else
										return 5.764045;
								}
								else
									return 0.658355;
							}
							else
							{
								if(payload < 3)
								{
									if(payload < 1.5)
										return 13.4003;
									else
										return 9.02425;
								}
								else
								{
									if(sinr < -11.5)
										return 22.0907;
									else
										return 28.7762;
								}
							}
						}
					}
				}
				else
				{
					if(rsrp < -111.5)
					{
						if(ta < 23.5)
						{
							if(cell < 13462795.5)
								return 14.2507;
							else
							{
								if(payload < 2.5)
									return 0.979792;
								else
									return 6.85225;
							}
						}
						else
						{
							if(payload < 3)
								return 0.3687285;
							else
							{
								if(ta < 85)
								{
									if(cqi < 10)
									{
										if(payload < 8.5)
											return 2.7347466667;
										else
											return 0.682193;
									}
									else
										return 4.18751;
								}
								else
									return 1.32491;
							}
						}
					}
					else
					{
						if(cell < 13395457.5)
						{
							if(rsrq < -5)
							{
								if(sinr < 2.5)
								{
									if(ta < 21.5)
									{
										if(sinr < -5)
											return 25.9019;
										else
										{
											if(ta < 15.5)
												return 5.6352125;
											else
											{
												if(ta < 20.5)
												{
													if(velocity < 14.68)
													{
														if(sinr < -0.5)
														{
															if(rsrp < -91.5)
																return 11.7647;
															else
															{
																if(payload < 2)
																	return 11.8519;
																else
																	return 16.5631;
															}
														}
														else
														{
															if(payload < 1.5)
																return 16.7715;
															else
																return 14.92985;
														}
													}
													else
														return 25.2167;
												}
												else
												{
													if(rsrp < -108.5)
														return 5.36643;
													else
														return 14.4231;
												}
											}
										}
									}
									else
									{
										if(cqi < 9.5)
										{
											if(cell < 13157125)
												return 1.02704;
											else
												return 2.79274;
										}
										else
											return 6.318925;
									}
								}
								else
								{
									if(payload < 0.75)
									{
										if(payload < 0.3)
										{
											if(sinr < 7)
											{
												if(ta < 16.5)
												{
													if(sinr < 5)
														return 4.7059;
													else
														return 0.698693;
												}
												else
													return 5.83944;
											}
											else
												return 6.5574;
										}
										else
										{
											if(cell < 13230216.5)
											{
												if(rsrp < -97)
												{
													if(ta < 40.5)
														return 16.1943;
													else
														return 13.4228;
												}
												else
													return 21.0526;
											}
											else
												return 10.20575;
										}
									}
									else
									{
										if(rsrp < -108.5)
										{
											if(cell < 13393420)
											{
												if(cell < 13067400.5)
													return 1.0168;
												else
												{
													if(ta < 15.5)
													{
														if(cqi < 8)
															return 25.9846;
														else
														{
															if(cqi < 9.5)
																return 11.6486;
															else
															{
																if(payload < 6.5)
																	return 6.790175;
																else
																	return 8.98876;
															}
														}
													}
													else
													{
														if(velocity < 2.6)
														{
															if(cell < 13392905)
															{
																if(payload < 3.5)
																	return 14.4144;
																else
																{
																	if(cqi < 8.5)
																		return 17.2786;
																	else
																	{
																		if(payload < 6.5)
																			return 16.3182;
																		else
																			return 18.3814;
																	}
																}
															}
															else
															{
																if(ta < 16.5)
																	return 27.2963;
																else
																{
																	if(rsrq < -8.5)
																		return 21.4549;
																	else
																		return 22.7273;
																}
															}
														}
														else
														{
															if(velocity < 14.29)
															{
																if(cqi < 8)
																{
																	if(cqi < 6.5)
																		return 5.82189;
																	else
																		return 2.72944;
																}
																else
																{
																	if(sinr < 3.5)
																		return 5.57578;
																	else
																		return 18.07668;
																}
															}
															else
																return 29.1041;
														}
													}
												}
											}
											else
											{
												if(cqi < 9)
													return 0.87859;
												else
													return 4.77644;
											}
										}
										else
										{
											if(cqi < 6.5)
												return 30.7811;
											else
											{
												if(payload < 9.5)
												{
													if(rsrp < -96.5)
													{
														if(payload < 7.5)
														{
															if(ta < 12.5)
																return 8.3717;
															else
															{
																if(ta < 51.5)
																{
																	if(rsrq < -7.5)
																	{
																		if(sinr < 6.5)
																		{
																			if(rsrq < -8.5)
																				return 27.5862;
																			else
																			{
																				if(sinr < 4.5)
																					return 16.8185;
																				else
																				{
																					if(rsrp < -102.5)
																						return 16.5494;
																					else
																						return 11.6448;
																				}
																			}
																		}
																		else
																		{
																			if(cqi < 14)
																			{
																				if(sinr < 8)
																					return 7.02371;
																				else
																					return 9.98129;
																			}
																			else
																				return 13.2231;
																		}
																	}
																	else
																	{
																		if(velocity < 6.83)
																		{
																			if(payload < 4.5)
																				return 19.8758;
																			else
																				return 17.7215;
																		}
																		else
																		{
																			if(sinr < 6)
																				return 26.287;
																			else
																				return 18.75;
																		}
																	}
																}
																else
																{
																	if(rsrp < -105)
																	{
																		if(payload < 4)
																			return 17.3661;
																		else
																			return 15.2497;
																	}
																	else
																	{
																		if(cqi < 12.5)
																		{
																			if(velocity < 13.305)
																				return 28.1442;
																			else
																				return 26.5781;
																		}
																		else
																			return 20.4082;
																	}
																}
															}
														}
														else
														{
															if(cell < 13392905.5)
															{
																if(rsrp < -101.5)
																	return 22.2542166667;
																else
																	return 24.7391;
															}
															else
															{
																if(sinr < 6.5)
																{
																	if(sinr < 5.5)
																		return 25.3879;
																	else
																		return 27.5981;
																}
																else
																	return 21.4541;
															}
														}
													}
													else
													{
														if(payload < 8)
														{
															if(sinr < 8)
															{
																if(cqi < 8)
																{
																	if(rsrp < -94.5)
																		return 23.7741;
																	else
																		return 27.3038;
																}
																else
																{
																	if(rsrq < -6.5)
																	{
																		if(rsrp < -87.5)
																			return 20.4529;
																		else
																			return 21.978;
																	}
																	else
																		return 18.0587;
																}
															}
															else
																return 35.2423;
														}
														else
															return 41.0959;
													}
												}
												else
												{
													if(cell < 13324418)
														return 8.43526;
													else
													{
														if(rsrp < -98.5)
															return 25.7152;
														else
															return 11.0619;
													}
												}
											}
										}
									}
								}
							}
							else
								return 46.8619;
						}
						else
						{
							if(cell < 13523587)
							{
								if(velocity < 22.6)
								{
									if(sinr < 7.5)
									{
										if(rsrp < -95.5)
										{
											if(payload < 1.5)
												return 10.7383;
											else
												return 12.0789333333;
										}
										else
											return 13.9678333333;
									}
									else
										return 4.25534;
								}
								else
								{
									if(rsrp < -92)
									{
										if(cqi < 7.5)
											return 3.79867;
										else
											return 0.775044;
									}
									else
									{
										if(cqi < 11)
											return 6.006335;
										else
											return 7.8567685714;
									}
								}
							}
							else
							{
								if(sinr < 2.5)
									return 29.0276;
								else
								{
									if(rsrp < -96)
									{
										if(payload < 7.5)
											return 12.4572;
										else
											return 3.51093;
									}
									else
									{
										if(payload < 9)
										{
											if(rsrq < -7.5)
												return 13.9527;
											else
												return 15.22708;
										}
										else
											return 20.8062;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if(rsrq < -7.5)
		{
			if(payload < 2.5)
			{
				if(payload < 0.3)
				{
					if(velocity < 10.83)
					{
						if(rsrq < -9)
							return 10.53365;
						else
							return 13.1148;
					}
					else
					{
						if(rsrp < -91.5)
							return 10.025125;
						else
							return 7.492096;
					}
				}
				else
				{
					if(velocity < 14.78)
					{
						if(sinr < 17.5)
						{
							if(rsrp < -103)
							{
								if(ta < 8)
									return 1.35616;
								else
								{
									if(velocity < 3.835)
										return 24.8447;
									else
									{
										if(cqi < 8)
											return 23.4261;
										else
										{
											if(rsrp < -109)
												return 16.2602;
											else
												return 19.0553;
										}
									}
								}
							}
							else
							{
								if(ta < 12)
								{
									if(cqi < 7.5)
									{
										if(cell < 13154565)
											return 22.7273;
										else
										{
											if(payload < 0.75)
												return 14.7601;
											else
												return 6.47249;
										}
									}
									else
									{
										if(rsrp < -90)
										{
											if(payload < 1.5)
												return 34.0426;
											else
												return 24.8062;
										}
										else
										{
											if(ta < 8)
											{
												if(payload < 0.75)
												{
													if(velocity < 5.67)
													{
														if(rsrp < -80)
															return 17.6991;
														else
															return 15.748;
													}
													else
														return 19.4175;
												}
												else
												{
													if(cqi < 8.5)
														return 19.1847;
													else
													{
														if(velocity < 12.8)
														{
															if(sinr < 15.5)
															{
																if(rsrp < -83)
																	return 18.8679;
																else
																	return 22.7319;
															}
															else
															{
																if(rsrq < -8.5)
																	return 38.835;
																else
																	return 21.9479;
															}
														}
														else
															return 30.4183;
													}
												}
											}
											else
												return 29.4118;
										}
									}
								}
								else
								{
									if(payload < 1.5)
										return 36.8125333333;
									else
										return 24.8447;
								}
							}
						}
						else
						{
							if(velocity < 11.56)
							{
								if(rsrp < -106.5)
									return 20.8333;
								else
								{
									if(f < 1362.55)
									{
										if(ta < 7)
										{
											if(sinr < 18.5)
											{
												if(rsrp < -77.5)
													return 36.036;
												else
													return 27.5862;
											}
											else
											{
												if(rsrp < -80.5)
													return 26.8456;
												else
													return 29.9663;
											}
										}
										else
											return 32.2581;
									}
									else
									{
										if(sinr < 24)
											return 36.3636;
										else
											return 32.3887;
									}
								}
							}
							else
							{
								if(velocity < 14.145)
								{
									if(f < 1362.55)
										return 23.2558;
									else
										return 21.5054;
								}
								else
									return 17.8571;
							}
						}
					}
					else
					{
						if(sinr < 10.5)
						{
							if(payload < 1.5)
								return 26.4026;
							else
								return 17.5055;
						}
						else
						{
							if(velocity < 16.195)
							{
								if(rsrp < -89)
								{
									if(ta < 39)
									{
										if(rsrq < -12.5)
											return 17.9775;
										else
											return 13.2231;
									}
									else
										return 17.0213;
								}
								else
									return 22.3464;
							}
							else
							{
								if(rsrp < -92.5)
								{
									if(rsrp < -101.5)
										return 7.93651;
									else
										return 5.49073;
								}
								else
									return 3.41588;
							}
						}
					}
				}
			}
			else
			{
				if(rsrp < -90.5)
				{
					if(ta < 18)
					{
						if(rsrp < -111)
						{
							if(rsrq < -10)
								return 13.8468;
							else
								return 5.64687;
						}
						else
						{
							if(velocity < 26.665)
							{
								if(velocity < 14.39)
								{
									if(ta < 5.5)
										return 42.1369;
									else
									{
										if(cqi < 11.5)
										{
											if(payload < 9.5)
											{
												if(payload < 3.5)
												{
													if(rsrp < -98)
													{
														if(rsrp < -103)
															return 21.6411;
														else
														{
															if(rsrq < -8.5)
																return 25.1309;
															else
																return 26.8156;
														}
													}
													else
													{
														if(rsrp < -94)
															return 29.1262;
														else
															return 32.4324;
													}
												}
												else
												{
													if(payload < 5)
													{
														if(ta < 11)
															return 29.6296;
														else
														{
															if(rsrp < -102.5)
																return 35.1262;
															else
																return 36.6133;
														}
													}
													else
													{
														if(cqi < 7.5)
														{
															if(cqi < 4)
																return 26.4354;
															else
																return 19.5462;
														}
														else
														{
															if(velocity < 13.125)
															{
																if(sinr < 14.5)
																{
																	if(velocity < 12.46)
																		return 29.652675;
																	else
																		return 24.7022;
																}
																else
																	return 31.9858;
															}
															else
															{
																if(velocity < 13.77)
																	return 35.6546;
																else
																	return 31.7618;
															}
														}
													}
												}
											}
											else
												return 23.4742;
										}
										else
										{
											if(rsrq < -8.5)
											{
												if(payload < 8)
												{
													if(payload < 5.5)
														return 36.6972;
													else
														return 32.4826;
												}
												else
													return 25.8435;
											}
											else
											{
												if(payload < 5.5)
												{
													if(payload < 4.5)
														return 23.9521;
													else
														return 31.2256;
												}
												else
												{
													if(velocity < 13.79)
													{
														if(cqi < 13.5)
															return 20.17046;
														else
														{
															if(ta < 7.5)
																return 19.8441;
															else
															{
																if(rsrp < -103)
																	return 18.7463;
																else
																	return 15.1831;
															}
														}
													}
													else
														return 25.4676;
												}
											}
										}
									}
								}
								else
								{
									if(ta < 12.5)
									{
										if(rsrp < -98)
											return 2.90024;
										else
										{
											if(sinr < 10.5)
											{
												if(payload < 5)
													return 14.1677;
												else
													return 15.6556;
											}
											else
												return 20.69445;
										}
									}
									else
									{
										if(rsrp < -99)
										{
											if(rsrp < -105.5)
											{
												if(rsrq < -8.5)
													return 15.676;
												else
												{
													if(payload < 5)
														return 33.6606;
													else
														return 16.3361;
												}
											}
											else
											{
												if(velocity < 14.755)
													return 36.0122666667;
												else
													return 37.5783;
											}
										}
										else
										{
											if(cqi < 7.5)
												return 14.8392;
											else
											{
												if(velocity < 17.205)
												{
													if(payload < 9)
														return 22.2245166667;
													else
														return 26.3244;
												}
												else
													return 20.5233;
											}
										}
									}
								}
							}
							else
								return 1.3108466667;
						}
					}
					else
					{
						if(sinr < 12.5)
						{
							if(ta < 20.5)
								return 15.4291;
							else
							{
								if(rsrq < -8.5)
								{
									if(payload < 9.5)
										return 8.7960066667;
									else
										return 11.4695;
								}
								else
									return 4.3483;
							}
						}
						else
						{
							if(cqi < 10.5)
								return 16.7135;
							else
							{
								if(velocity < 12.585)
									return 15.6098;
								else
									return 13.6449;
							}
						}
					}
				}
				else
				{
					if(velocity < 5.3)
					{
						if(cell < 13400065.5)
						{
							if(ta < 12)
							{
								if(rsrp < -88.5)
									return 53.3333;
								else
								{
									if(cqi < 12.5)
									{
										if(sinr < 10.5)
										{
											if(rsrq < -9.5)
												return 53.0973;
											else
												return 58.2053;
										}
										else
											return 73.9372;
									}
									else
									{
										if(ta < 4.5)
											return 66.1157;
										else
											return 68.3761;
									}
								}
							}
							else
								return 13.3824;
						}
						else
						{
							if(sinr < 17.5)
							{
								if(ta < 5)
								{
									if(cqi < 13)
									{
										if(payload < 4)
											return 21.5054;
										else
											return 24.74405;
									}
									else
										return 31.8725;
								}
								else
									return 34.7323;
							}
							else
							{
								if(cqi < 12.5)
									return 51.1727;
								else
									return 47.619;
							}
						}
					}
					else
					{
						if(rsrq < -12.5)
							return 6.62252;
						else
						{
							if(cell < 13395457.5)
							{
								if(rsrp < -86.5)
								{
									if(cell < 13392904.5)
									{
										if(rsrp < -89.5)
										{
											if(sinr < 23)
												return 37.8788;
											else
												return 31.5956;
										}
										else
										{
											if(payload < 7.5)
											{
												if(ta < 5.5)
													return 38.2775;
												else
													return 40.6027;
											}
											else
												return 35.8142;
										}
									}
									else
									{
										if(ta < 14.5)
										{
											if(ta < 12.5)
											{
												if(rsrq < -8.5)
													return 33.264;
												else
													return 30.0752;
											}
											else
											{
												if(rsrp < -88.5)
													return 48.5216;
												else
													return 43.7756;
											}
										}
										else
										{
											if(payload < 7.5)
											{
												if(rsrp < -88)
													return 23.0263;
												else
													return 14.4665;
											}
											else
												return 15.7287;
										}
									}
								}
								else
								{
									if(cell < 13175301.5)
									{
										if(velocity < 9.67)
											return 61.127;
										else
										{
											if(velocity < 11.06)
												return 24.7966;
											else
											{
												if(payload < 8)
												{
													if(sinr < 12)
														return 38.2318;
													else
													{
														if(rsrq < -9.5)
															return 39.8506;
														else
														{
															if(rsrp < -74)
																return 42.43125;
															else
																return 44.9438;
														}
													}
												}
												else
													return 32.3363;
											}
										}
									}
									else
									{
										if(sinr < 19.5)
										{
											if(cell < 13284613.5)
												return 58.5774;
											else
											{
												if(payload < 4.5)
													return 54.7329333333;
												else
												{
													if(rsrp < -79.5)
														return 50.3145;
													else
														return 47.5248;
												}
											}
										}
										else
											return 32.4763;
									}
								}
							}
							else
							{
								if(velocity < 7.185)
									return 15.8967;
								else
								{
									if(rsrq < -8.5)
									{
										if(rsrq < -11)
										{
											if(payload < 6)
												return 26.0078;
											else
												return 15.1147;
										}
										else
										{
											if(rsrp < -68.5)
											{
												if(velocity < 8.475)
													return 24.9221;
												else
												{
													if(ta < 7)
													{
														if(rsrp < -79.5)
														{
															if(payload < 9.5)
																return 36.0176;
															else
																return 40.7539;
														}
														else
														{
															if(payload < 7.5)
																return 52.9801;
															else
																return 44.9123;
														}
													}
													else
														return 26.8456;
												}
											}
											else
												return 24.8062;
										}
									}
									else
									{
										if(sinr < 11.5)
										{
											if(ta < 4.5)
											{
												if(cqi < 11.5)
													return 14.9184;
												else
													return 13.4945;
											}
											else
											{
												if(payload < 7.5)
													return 26.9542;
												else
													return 38.1316;
											}
										}
										else
										{
											if(rsrp < -84.5)
												return 44.0098;
											else
											{
												if(velocity < 8.64)
													return 29.3501;
												else
												{
													if(velocity < 24.035)
														return 27.43225;
													else
														return 26.0728;
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
		}
		else
		{
			if(rsrp < -86.5)
			{
				if(f < 1362.55)
				{
					if(payload < 7)
					{
						if(sinr < 24.5)
						{
							if(cqi < 8.5)
							{
								if(rsrp < -98)
									return 0.31746;
								else
									return 12.0527;
							}
							else
							{
								if(cqi < 10.5)
								{
									if(payload < 5)
									{
										if(ta < 7)
											return 28.9855;
										else
										{
											if(payload < 0.75)
											{
												if(rsrp < -88)
													return 15.444;
												else
													return 5.19483;
											}
											else
											{
												if(payload < 3.5)
												{
													if(sinr < 12.5)
														return 27.2109;
													else
														return 19.6078;
												}
												else
													return 28.169;
											}
										}
									}
									else
										return 2.0339;
								}
								else
								{
									if(velocity < 8.255)
										return 45.4545;
									else
									{
										if(ta < 8.5)
										{
											if(velocity < 15.09)
												return 7.2352833333;
											else
												return 9.87658;
										}
										else
										{
											if(ta < 21)
											{
												if(payload < 4.5)
												{
													if(velocity < 18.345)
													{
														if(rsrq < -5.5)
															return 13.3233333333;
														else
															return 14.5455;
													}
													else
													{
														if(velocity < 27.93)
															return 9.12488;
														else
															return 15.1086;
													}
												}
												else
												{
													if(ta < 13.5)
														return 14.892;
													else
													{
														if(ta < 18)
															return 29.7619;
														else
															return 22.5098;
													}
												}
											}
											else
											{
												if(ta < 28)
													return 10.4167;
												else
													return 6.75533;
											}
										}
									}
								}
							}
						}
						else
						{
							if(rsrp < -89)
								return 65.2174;
							else
								return 28.4024;
						}
					}
					else
					{
						if(ta < 11)
						{
							if(rsrp < -88.5)
							{
								if(velocity < 13.115)
								{
									if(payload < 8.5)
									{
										if(rsrp < -91)
										{
											if(rsrp < -92.5)
												return 32.2418;
											else
												return 34.188;
										}
										else
											return 36.9302;
									}
									else
									{
										if(ta < 8.5)
											return 33.4417;
										else
											return 45.6853;
									}
								}
								else
								{
									if(payload < 8.5)
										return 40.9207;
									else
									{
										if(sinr < 12)
											return 4.78813;
										else
											return 15.3551;
									}
								}
							}
							else
							{
								if(cqi < 6)
									return 57.7386;
								else
									return 73.903;
							}
						}
						else
						{
							if(rsrp < -93)
							{
								if(cell < 13405571)
								{
									if(payload < 8.5)
										return 24.3902;
									else
										return 6.39375;
								}
								else
								{
									if(cqi < 9)
										return 9.03138;
									else
										return 13.7457;
								}
							}
							else
							{
								if(rsrp < -90)
									return 32.0481;
								else
									return 29.2523;
							}
						}
					}
				}
				else
				{
					if(rsrp < -107.5)
					{
						if(sinr < 22)
						{
							if(payload < 2.55)
								return 6.89658;
							else
								return 1.794945;
						}
						else
							return 15.2091;
					}
					else
					{
						if(sinr < 13.5)
						{
							if(payload < 0.75)
							{
								if(rsrp < -99)
									return 19.802;
								else
								{
									if(ta < 15)
										return 9.75613;
									else
										return 7.40744;
								}
							}
							else
							{
								if(ta < 70.5)
								{
									if(velocity < 13.825)
									{
										if(cell < 13394061.5)
										{
											if(cqi < 5)
											{
												if(rsrp < -94.5)
													return 24.3161;
												else
													return 15.9681;
											}
											else
											{
												if(payload < 5.5)
												{
													if(payload < 4.5)
													{
														if(rsrp < -104.5)
															return 17.1951;
														else
														{
															if(velocity < 7.555)
																return 38.0952;
															else
															{
																if(payload < 3)
																{
																	if(sinr < 12)
																	{
																		if(payload < 1.5)
																			return 30.1887;
																		else
																			return 27.3973;
																	}
																	else
																		return 31.3725;
																}
																else
																	return 33.1263;
															}
														}
													}
													else
													{
														if(rsrp < -99.5)
															return 56.2588;
														else
															return 41.365;
													}
												}
												else
												{
													if(ta < 15.5)
													{
														if(sinr < 12)
														{
															if(rsrq < -6.5)
																return 30.659475;
															else
																return 33.4169;
														}
														else
															return 36.6013;
													}
													else
													{
														if(rsrp < -98)
														{
															if(rsrp < -106)
																return 27.0728;
															else
															{
																if(cqi < 9.5)
																	return 22.3568;
																else
																	return 23.7467;
															}
														}
														else
															return 33.3333;
													}
												}
											}
										}
										else
										{
											if(cqi < 9.5)
											{
												if(velocity < 4.825)
													return 24.1619;
												else
													return 30.1091;
											}
											else
											{
												if(rsrp < -101.5)
													return 50.7937;
												else
												{
													if(ta < 5.5)
													{
														if(rsrq < -6.5)
															return 42.7807;
														else
															return 39.604;
													}
													else
														return 33.0857155251;
												}
											}
										}
									}
									else
									{
										if(rsrp < -91.5)
										{
											if(ta < 9)
												return 4.89796;
											else
											{
												if(f < 2247.55)
												{
													if(payload < 3)
														return 13.5478;
													else
													{
														if(payload < 6.5)
															return 21.4993666667;
														else
															return 23.8501;
													}
												}
												else
													return 32.3232;
											}
										}
										else
											return 37.3178;
									}
								}
								else
									return 9.61307;
							}
						}
						else
						{
							if(payload < 0.3)
							{
								if(rsrp < -98)
									return 133.334;
								else
									return 7.40744;
							}
							else
							{
								if(payload < 2.5)
								{
									if(rsrq < -5.5)
									{
										if(cell < 13532430.5)
										{
											if(cell < 13394061.5)
											{
												if(sinr < 22.5)
												{
													if(cell < 13121417)
													{
														if(ta < 15.5)
														{
															if(cqi < 9.5)
															{
																if(rsrp < -101.5)
																	return 30.6513;
																else
																	return 27.8746;
															}
															else
																return 23.2222;
														}
														else
														{
															if(velocity < 13.425)
																return 17.6211;
															else
															{
																if(rsrp < -99)
																	return 23.9521;
																else
																	return 22.2222;
															}
														}
													}
													else
													{
														if(rsrq < -6.5)
														{
															if(rsrp < -95.5)
																return 20.6186;
															else
																return 22.5989;
														}
														else
														{
															if(payload < 1.25)
																return 18.6916;
															else
																return 15.0094;
														}
													}
												}
												else
												{
													if(cqi < 14.5)
														return 40.404;
													else
													{
														if(rsrp < -96)
															return 30.1318;
														else
															return 27.3038;
													}
												}
											}
											else
											{
												if(cell < 13400202.5)
													return 48.7805;
												else
												{
													if(velocity < 8.49)
													{
														if(rsrq < -6.5)
															return 25.641;
														else
															return 29.1971;
													}
													else
														return 33.195;
												}
											}
										}
										else
											return 15.444;
									}
									else
									{
										if(payload < 1.25)
											return 29.6296;
										else
										{
											if(ta < 5.5)
												return 57.1429;
											else
												return 48.3384;
										}
									}
								}
								else
								{
									if(ta < 12)
									{
										if(ta < 4.5)
										{
											if(sinr < 17.5)
												return 36.8664;
											else
											{
												if(velocity < 2.72)
												{
													if(payload < 4.5)
														return 68.7679;
													else
													{
														if(payload < 8)
															return 83.4783;
														else
															return 92.4855;
													}
												}
												else
												{
													if(f < 2247.55)
														return 50.6329;
													else
													{
														if(cqi < 13.5)
															return 58.8235;
														else
														{
															if(rsrp < -90)
																return 68.7961;
															else
																return 67.5105;
														}
													}
												}
											}
										}
										else
										{
											if(payload < 9.5)
											{
												if(velocity < 12.285)
												{
													if(rsrp < -100)
													{
														if(rsrq < -6.5)
															return 49.961;
														else
														{
															if(rsrp < -102)
															{
																if(rsrp < -104)
																	return 42.9185;
																else
																	return 41.3223;
															}
															else
																return 34.5988;
														}
													}
													else
													{
														if(velocity < 10.425)
														{
															if(rsrp < -97.5)
															{
																if(rsrp < -98.5)
																	return 58.8776;
																else
																	return 61.6438;
															}
															else
															{
																if(ta < 5.5)
																	return 52.9801;
																else
																{
																	if(cell < 13463048.5)
																	{
																		if(rsrp < -91)
																		{
																			if(ta < 8.5)
																				return 41.6233;
																			else
																				return 39.9501;
																		}
																		else
																			return 44.9859;
																	}
																	else
																		return 45.4052742009;
																}
															}
														}
														else
														{
															if(rsrp < -95.5)
																return 61.4439;
															else
																return 68.8172;
														}
													}
												}
												else
												{
													if(cell < 13284742.5)
														return 27.0118;
													else
													{
														if(sinr < 24.5)
														{
															if(sinr < 19.5)
															{
																if(payload < 6.5)
																	return 46.0299;
																else
																	return 43.8356;
															}
															else
															{
																if(rsrp < -96.5)
																	return 42.6099;
																else
																	return 40.9207;
															}
														}
														else
															return 48.7805;
													}
												}
											}
											else
											{
												if(velocity < 10.69)
												{
													if(rsrq < -6)
														return 51.2164;
													else
													{
														if(rsrp < -93)
															return 56.1798;
														else
															return 58.3942;
													}
												}
												else
													return 68.0272;
											}
										}
									}
									else
									{
										if(velocity < 2.79)
										{
											if(sinr < 21)
											{
												if(ta < 16.5)
													return 39.604;
												else
												{
													if(rsrp < -93.5)
														return 45.911;
													else
														return 60.6061;
												}
											}
											else
											{
												if(rsrp < -93)
												{
													if(rsrp < -94.5)
														return 65.0407;
													else
														return 62.7943;
												}
												else
													return 55.9441;
											}
										}
										else
										{
											if(velocity < 11.675)
											{
												if(sinr < 25)
												{
													if(velocity < 10.67)
													{
														if(rsrq < -6.5)
															return 23.2491;
														else
														{
															if(payload < 7.5)
																return 37.325;
															else
																return 40.8627;
														}
													}
													else
														return 58.9474;
												}
												else
													return 22.5352;
											}
											else
											{
												if(cell < 13230089.5)
												{
													if(payload < 6.5)
													{
														if(velocity < 12.645)
															return 29.1290666667;
														else
														{
															if(rsrp < -97)
																return 21.0804;
															else
																return 25.0391;
														}
													}
													else
													{
														if(rsrp < -101.5)
															return 31.7586;
														else
														{
															if(rsrq < -6.5)
																return 42.2961;
															else
																return 39.5648;
														}
													}
												}
												else
												{
													if(rsrq < -6.5)
													{
														if(sinr < 17.5)
															return 20.0501;
														else
															return 14.733;
													}
													else
													{
														if(payload < 3.5)
															return 27.4286;
														else
														{
															if(velocity < 14.47)
																return 19.2154;
															else
																return 20.8197333333;
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
				}
			}
			else
			{
				if(payload < 1.5)
				{
					if(sinr < 31.5)
					{
						if(cell < 13044996.5)
						{
							if(payload < 0.3)
							{
								if(rsrp < -75)
								{
									if(ta < 2.5)
									{
										if(sinr < 25.5)
											return 19.5123;
										else
											return 61.5387;
									}
									else
									{
										if(cqi < 13.5)
											return 13.3334;
										else
											return 11.4286;
									}
								}
								else
									return 160.001;
							}
							else
							{
								if(rsrp < -79)
								{
									if(cell < 12938245.5)
									{
										if(payload < 0.75)
											return 26.1438;
										else
										{
											if(ta < 8.5)
												return 32.3887;
											else
												return 28.9855;
										}
									}
									else
									{
										if(rsrp < -81)
											return 38.2775;
										else
											return 36.3636;
									}
								}
								else
								{
									if(payload < 0.75)
									{
										if(cqi < 13)
											return 22.2843;
										else
										{
											if(rsrq < -6)
												return 24.0964;
											else
												return 25.974;
										}
									}
									else
									{
										if(rsrq < -6.5)
											return 29.7398;
										else
										{
											if(sinr < 16.5)
												return 29.0909;
											else
												return 27.3731;
										}
									}
								}
							}
						}
						else
						{
							if(sinr < 27)
							{
								if(rsrp < -71.5)
								{
									if(rsrp < -83.5)
									{
										if(ta < 7.5)
										{
											if(sinr < 11.5)
												return 5.71431;
											else
												return 7.40744;
										}
										else
										{
											if(rsrq < -6.5)
												return 26.40295;
											else
											{
												if(rsrp < -85)
													return 19.6078;
												else
													return 22.8571;
											}
										}
									}
									else
									{
										if(sinr < 11.5)
										{
											if(rsrp < -81.5)
												return 38.835;
											else
												return 36.1991;
										}
										else
										{
											if(ta < 3.5)
												return 15.2292333333;
											else
											{
												if(payload < 0.75)
												{
													if(cell < 13394185)
													{
														if(rsrq < -6.5)
														{
															if(cqi < 13.5)
																return 17.7778;
															else
																return 19.7044;
														}
														else
														{
															if(velocity < 7.75)
															{
																if(velocity < 2.455)
																{
																	if(rsrp < -77.5)
																		return 22.8571;
																	else
																		return 24.5399;
																}
																else
																	return 18.8679;
															}
															else
															{
																if(sinr < 16.5)
																{
																	if(rsrp < -81.5)
																		return 19.4175;
																	else
																		return 26.1438;
																}
																else
																	return 29.6296;
															}
														}
													}
													else
													{
														if(sinr < 15.5)
															return 10;
														else
															return 17.35755;
													}
												}
												else
												{
													if(rsrp < -74.5)
													{
														if(rsrp < -79.5)
															return 34.7826;
														else
															return 37.3832;
													}
													else
														return 33.4728;
												}
											}
										}
									}
								}
								else
								{
									if(rsrq < -6.5)
										return 19.5123;
									else
									{
										if(rsrp < -65.5)
											return 6.50409;
										else
											return 9.19544;
									}
								}
							}
							else
							{
								if(rsrp < -76)
								{
									if(rsrq < -5.5)
										return 15.3551;
									else
										return 22.9885;
								}
								else
								{
									if(payload < 0.75)
										return 38.4615;
									else
										return 46.5116;
								}
							}
						}
					}
					else
					{
						if(cqi < 14.5)
						{
							if(cqi < 13.5)
								return 18.4758;
							else
								return 28.169;
						}
						else
							return 7.40744;
					}
				}
				else
				{
					if(velocity < 13.995)
					{
						if(payload < 5.5)
						{
							if(cell < 13400194)
							{
								if(cell < 13394049.5)
								{
									if(cqi < 10.5)
									{
										if(velocity < 11.885)
										{
											if(sinr < 23.5)
											{
												if(payload < 4)
													return 63.1579;
												else
													return 51.0204;
											}
											else
											{
												if(sinr < 32)
												{
													if(cqi < 5.5)
														return 39.3443;
													else
														return 36.6972;
												}
												else
													return 44.8598;
											}
										}
										else
											return 31.5706;
									}
									else
									{
										if(rsrp < -66.5)
										{
											if(velocity < 13.325)
											{
												if(payload < 4.5)
												{
													if(rsrp < -67.5)
													{
														if(velocity < 9.74)
														{
															if(sinr < 28.5)
															{
																if(cell < 13175305.5)
																{
																	if(sinr < 20)
																	{
																		if(cqi < 11.5)
																		{
																			if(rsrp < -80)
																				return 51.8639;
																			else
																				return 55.1724;
																		}
																		else
																		{
																			if(rsrp < -82)
																				return 65.7534;
																			else
																				return 62.93515;
																		}
																	}
																	else
																	{
																		if(rsrp < -75)
																		{
																			if(sinr < 22)
																			{
																				if(cqi < 13)
																					return 41.9948;
																				else
																					return 40.1506;
																			}
																			else
																				return 47.976;
																		}
																		else
																		{
																			if(sinr < 26.5)
																			{
																				if(sinr < 24)
																					return 54.6697;
																				else
																					return 50;
																			}
																			else
																				return 61.5385;
																		}
																	}
																}
																else
																{
																	if(payload < 2.5)
																		return 74.0741;
																	else
																	{
																		if(sinr < 27)
																			return 61.778875;
																		else
																			return 53.2151;
																	}
																}
															}
															else
															{
																if(ta < 3)
																	return 43.5967;
																else
																	return 47.7612;
															}
														}
														else
														{
															if(cell < 13121416.5)
															{
																if(rsrp < -79)
																	return 56.338;
																else
																	return 53.9326;
															}
															else
															{
																if(cell < 13284104.5)
																{
																	if(ta < 4)
																		return 42.1607;
																	else
																		return 43.956;
																}
																else
																	return 39.09055;
															}
														}
													}
													else
														return 73.3945;
												}
												else
												{
													if(velocity < 12.91)
													{
														if(ta < 6.5)
															return 45.7143;
														else
															return 57.3888;
													}
													else
														return 68.4932;
												}
											}
											else
												return 37.5147;
										}
										else
										{
											if(velocity < 3.35)
												return 64.3863;
											else
											{
												if(rsrp < -63)
													return 41.0678;
												else
													return 30.888;
											}
										}
									}
								}
								else
								{
									if(sinr < 13.5)
										return 29.5749;
									else
									{
										if(rsrp < -83)
											return 77.2201;
										else
										{
											if(ta < 4.5)
											{
												if(payload < 4.5)
												{
													if(rsrp < -79)
														return 62.9921;
													else
														return 71.9101;
												}
												else
													return 63.8978;
											}
											else
											{
												if(sinr < 20.5)
													return 60.4915;
												else
													return 37.8698;
											}
										}
									}
								}
							}
							else
							{
								if(sinr < 20)
								{
									if(cqi < 13.5)
									{
										if(rsrp < -81.5)
											return 46.3097;
										else
											return 58.8235;
									}
									else
										return 48.9796;
								}
								else
								{
									if(rsrp < -83.5)
										return 32.5203;
									else
									{
										if(rsrp < -75.5)
											return 44.4444;
										else
											return 39.5062;
									}
								}
							}
						}
						else
						{
							if(f < 1362.55)
							{
								if(payload < 7.5)
								{
									if(rsrp < -63.5)
									{
										if(cqi < 10.5)
											return 52.2026;
										else
										{
											if(ta < 3.5)
											{
												if(sinr < 16.5)
													return 62.7451;
												else
												{
													if(sinr < 22.5)
														return 54.115;
													else
														return 47.6663;
												}
											}
											else
											{
												if(cell < 13394178)
												{
													if(ta < 4.5)
													{
														if(payload < 6.5)
															return 84.8057;
														else
														{
															if(sinr < 22)
																return 78.4314;
															else
																return 81.1594;
														}
													}
													else
													{
														if(cell < 13284741)
														{
															if(velocity < 12.77)
															{
																if(payload < 6.5)
																	return 70.0870293333;
																else
																	return 75.9692333333;
															}
															else
																return 64.6651;
														}
														else
														{
															if(rsrp < -84.5)
																return 69.6517;
															else
																return 63.1834666667;
														}
													}
												}
												else
													return 34.1672;
											}
										}
									}
									else
									{
										if(rsrp < -61.5)
											return 35.6877;
										else
											return 45.864;
									}
								}
								else
								{
									if(rsrp < -83.5)
									{
										if(cqi < 9.5)
											return 50.8834;
										else
										{
											if(payload < 9.5)
											{
												if(sinr < 18.5)
													return 81.7253;
												else
													return 79.558;
											}
											else
												return 64.9351;
										}
									}
									else
									{
										if(cell < 13400193)
										{
											if(velocity < 2.59)
											{
												if(ta < 4.5)
												{
													if(sinr < 23)
													{
														if(rsrp < -78.5)
															return 53.1462333333;
														else
															return 55.2147;
													}
													else
														return 50.1567;
												}
												else
												{
													if(payload < 8.5)
														return 65.5738;
													else
														return 71.69105;
												}
											}
											else
											{
												if(rsrp < -76)
												{
													if(sinr < 15)
														return 27.1532;
													else
													{
														if(cqi < 11)
															return 39.5795;
														else
														{
															if(ta < 11)
															{
																if(payload < 9)
																	return 48.3019;
																else
																	return 45.6621;
															}
															else
																return 40.404;
														}
													}
												}
												else
													return 59.3081;
											}
										}
										else
										{
											if(velocity < 11.405)
											{
												if(cqi < 13.5)
													return 32.174;
												else
													return 37.7669333333;
											}
											else
												return 14.739;
										}
									}
								}
							}
							else
							{
								if(sinr < 21.5)
								{
									if(sinr < 20.5)
									{
										if(rsrp < -78.5)
										{
											if(cqi < 11.5)
											{
												if(payload < 8.5)
													return 67.1563;
												else
													return 65.3951;
											}
											else
											{
												if(payload < 6.5)
												{
													if(cqi < 13.5)
														return 56.0748;
													else
														return 62.5815;
												}
												else
												{
													if(velocity < 10.74)
														return 42.7807;
													else
													{
														if(rsrq < -6.5)
															return 37.9404;
														else
															return 34.1672;
													}
												}
											}
										}
										else
										{
											if(payload < 7.5)
											{
												if(sinr < 13.5)
													return 57.4359;
												else
												{
													if(rsrq < -6)
														return 85.2359;
													else
													{
														if(rsrp < -76)
															return 71.8563;
														else
															return 56.7376;
													}
												}
											}
											else
												return 59.3142;
										}
									}
									else
									{
										if(velocity < 6.805)
											return 34.188;
										else
											return 46.2428;
									}
								}
								else
								{
									if(f < 2247.55)
									{
										if(rsrq < -6.5)
										{
											if(velocity < 6.89)
												return 79.1209;
											else
												return 63.1025;
										}
										else
										{
											if(velocity < 13.825)
											{
												if(sinr < 24.5)
												{
													if(payload < 9)
														return 65.8411454291;
													else
														return 73.4619;
												}
												else
												{
													if(cqi < 12.5)
													{
														if(rsrp < -74.5)
															return 64.9526;
														else
															return 59.7758;
													}
													else
													{
														if(cqi < 14)
															return 72.0721;
														else
														{
															if(cell < 13230216)
															{
																if(rsrp < -78.5)
																	return 65.8436;
																else
																	return 64.257;
															}
															else
															{
																if(sinr < 26)
																	return 63.4921;
																else
																{
																	if(rsrp < -74)
																		return 61.5385;
																	else
																		return 62.9921;
																}
															}
														}
													}
												}
											}
											else
												return 54.6875;
										}
									}
									else
									{
										if(payload < 7.5)
											return 90.4685;
										else
										{
											if(rsrq < -5.5)
												return 79.0514;
											else
												return 65.5738;
										}
									}
								}
							}
						}
					}
					else
					{
						if(cell < 13394185)
						{
							if(velocity < 24.795)
							{
								if(sinr < 16.5)
								{
									if(rsrp < -81.5)
									{
										if(payload < 5.5)
											return 33.0579;
										else
											return 26.6451;
									}
									else
									{
										if(velocity < 17.155)
											return 32.8317;
										else
											return 64.9087;
									}
								}
								else
								{
									if(cell < 13207684.5)
									{
										if(rsrq < -4.5)
										{
											if(rsrp < -69)
											{
												if(rsrp < -77)
												{
													if(cqi < 10.5)
														return 40.04;
													else
													{
														if(velocity < 14.285)
															return 36.1757;
														else
														{
															if(cqi < 13)
																return 31.068;
															else
																return 33.553;
														}
													}
												}
												else
												{
													if(sinr < 34)
													{
														if(rsrp < -71)
															return 27.7778;
														else
															return 35.8343;
													}
													else
													{
														if(sinr < 37.5)
														{
															if(rsrp < -72)
																return 45.8979;
															else
																return 55.1724;
														}
														else
															return 41.8848;
													}
												}
											}
											else
											{
												if(rsrq < -5.5)
													return 51.1727;
												else
													return 66.482;
											}
										}
										else
											return 28.8288;
									}
									else
									{
										if(cqi < 11.5)
										{
											if(rsrq < -6.5)
												return 80.2005;
											else
												return 60.251;
										}
										else
										{
											if(payload < 3)
											{
												if(velocity < 14.2)
													return 44.5682;
												else
													return 46.7836;
											}
											else
												return 52.8926;
										}
									}
								}
							}
							else
							{
								if(rsrq < -5.5)
									return 48.823;
								else
								{
									if(sinr < 20.5)
										return 18.5471;
									else
									{
										if(sinr < 26.5)
											return 26.7738;
										else
											return 28.4951;
									}
								}
							}
						}
						else
						{
							if(ta < 6)
							{
								if(payload < 5.5)
									return 7.09849;
								else
									return 13.2177;
							}
							else
							{
								if(velocity < 23.865)
								{
									if(cqi < 11.5)
									{
										if(f < 1745)
											return 15.3286;
										else
											return 29.1793;
									}
									else
									{
										if(cqi < 14.5)
										{
											if(sinr < 25.5)
												return 39.4922;
											else
												return 42.6829;
										}
										else
										{
											if(velocity < 15.31)
												return 26.8581666667;
											else
											{
												if(rsrp < -83.5)
												{
													if(rsrp < -85)
														return 33.9188;
													else
														return 35.538;
												}
												else
													return 42.3729;
											}
										}
									}
								}
								else
									return 23.74085;
							}
						}
					}
				}
			}
		}
	}
}

float vodafone_dl_tree_7(float payload, float rsrp, float rsrq, float sinr, float cqi, float ta, float velocity, float cell, float f)
{
	if(rsrp < -92.5)
	{
		if(rsrq < -11.5)
		{
			if(f < 1362.55)
			{
				if(rsrp < -99.5)
				{
					if(cell < 13211141)
					{
						if(cqi < 4.5)
						{
							if(sinr < -5)
								return 1.49598;
							else
								return 8.18247;
						}
						else
						{
							if(ta < 9)
							{
								if(rsrq < -13.5)
									return 32.6697;
								else
									return 41.1664;
							}
							else
							{
								if(payload < 7)
									return 5.9828;
								else
									return 25.4913;
							}
						}
					}
					else
					{
						if(cell < 13683330)
						{
							if(sinr < -4.5)
							{
								if(cell < 13532419)
								{
									if(rsrq < -20.5)
										return 9.75907;
									else
									{
										if(ta < 28)
										{
											if(ta < 5)
												return 3.7736;
											else
											{
												if(sinr < -10.5)
												{
													if(cqi < 1.5)
													{
														if(rsrp < -109)
															return 2.3253266667;
														else
															return 0.5183301429;
													}
													else
														return 0.3057163333;
												}
												else
												{
													if(velocity < 23.51)
													{
														if(rsrp < -106.5)
														{
															if(payload < 6.5)
															{
																if(velocity < 19.765)
																	return 0.7405244567;
																else
																	return 3.11557;
															}
															else
															{
																if(sinr < -6.5)
																	return 2.7740047562;
																else
																	return 0.876734;
															}
														}
														else
														{
															if(rsrp < -104)
															{
																if(payload < 0.75)
																	return 2.92592;
																else
																	return 3.90922;
															}
															else
																return 1.8647;
														}
													}
													else
														return 0.8545773158;
												}
											}
										}
										else
											return 4.93599;
									}
								}
								else
								{
									if(sinr < -9)
										return 8.81057;
									else
									{
										if(rsrp < -110.5)
											return 1.93265;
										else
											return 0.295989;
									}
								}
							}
							else
							{
								if(ta < 26.5)
								{
									if(cell < 13527938)
									{
										if(payload < 3.5)
										{
											if(velocity < 37.255)
											{
												if(payload < 0.3)
												{
													if(rsrp < -108.5)
														return 0.225616;
													else
													{
														if(cqi < 8.5)
														{
															if(cell < 13246977.5)
															{
																if(rsrp < -105.5)
																	return 3.86475;
																else
																	return 1.49254;
															}
															else
															{
																if(ta < 22.5)
																	return 2.11083;
																else
																	return 0.41960625;
															}
														}
														else
															return 0.287254;
													}
												}
												else
												{
													if(rsrp < -100.5)
													{
														if(rsrp < -105.5)
														{
															if(rsrp < -107.5)
															{
																if(rsrq < -14.5)
																{
																	if(rsrp < -110.5)
																		return 0.966651;
																	else
																		return 3.97812;
																}
																else
																{
																	if(velocity < 5.4)
																	{
																		if(cqi < 7)
																		{
																			if(ta < 23.5)
																				return 5.83516;
																			else
																				return 1.188277;
																		}
																		else
																			return 0.3731;
																	}
																	else
																		return 0.7196444;
																}
															}
															else
															{
																if(cell < 13324417.5)
																{
																	if(cqi < 5)
																		return 3.38648;
																	else
																	{
																		if(payload < 2)
																			return 8.24742;
																		else
																			return 9.83204;
																	}
																}
																else
																{
																	if(payload < 2.5)
																	{
																		if(ta < 8)
																			return 13.0826;
																		else
																		{
																			if(ta < 15.5)
																			{
																				if(sinr < -1.5)
																					return 0.75308225;
																				else
																				{
																					if(payload < 1.25)
																						return 1.97628;
																					else
																						return 3.67732;
																				}
																			}
																			else
																				return 6.90846;
																		}
																	}
																	else
																		return 0.597565;
																}
															}
														}
														else
														{
															if(cell < 13324674)
																return 0.632029;
															else
															{
																if(ta < 7.5)
																	return 0.58681075;
																else
																{
																	if(velocity < 16.115)
																	{
																		if(velocity < 15.42)
																		{
																			if(rsrq < -14.5)
																				return 1.65245675;
																			else
																				return 2.7858766667;
																		}
																		else
																			return 1.025029;
																	}
																	else
																	{
																		if(velocity < 22.495)
																			return 3.737298;
																		else
																			return 0.421852;
																	}
																}
															}
														}
													}
													else
													{
														if(ta < 13.5)
														{
															if(sinr < 3)
																return 5.08906;
															else
																return 6.82594;
														}
														else
															return 0.436443;
													}
												}
											}
											else
												return 6.10998;
										}
										else
										{
											if(cell < 13394178.5)
											{
												if(payload < 7.5)
												{
													if(rsrp < -106)
													{
														if(rsrp < -109.5)
															return 0.6980833333;
														else
															return 2.2009;
													}
													else
													{
														if(sinr < -0.5)
														{
															if(cqi < 4)
																return 10.2302;
															else
															{
																if(cell < 13250945)
																	return 6.01827;
																else
																	return 2.57459;
															}
														}
														else
															return 21.4938;
													}
												}
												else
												{
													if(cqi < 7.5)
													{
														if(rsrp < -104.5)
														{
															if(velocity < 9.765)
																return 2.88623;
															else
																return 15.2091;
														}
														else
														{
															if(velocity < 8.955)
															{
																if(rsrp < -102)
																	return 7.41427;
																else
																	return 1.65741;
															}
															else
															{
																if(ta < 16)
																	return 28.7081;
																else
																{
																	if(sinr < 0.5)
																		return 20.1005;
																	else
																		return 21.7244;
																}
															}
														}
													}
													else
														return 1.23516;
												}
											}
											else
											{
												if(velocity < 29.865)
												{
													if(ta < 22.5)
													{
														if(velocity < 14.63)
														{
															if(ta < 13.5)
																return 1.4522526;
															else
															{
																if(rsrq < -14)
																	return 2.53598;
																else
																{
																	if(cell < 13405827)
																	{
																		if(payload < 7)
																			return 3.6848925;
																		else
																			return 2.04221;
																	}
																	else
																		return 5.34474;
																}
															}
														}
														else
														{
															if(payload < 6.5)
															{
																if(rsrq < -15.5)
																	return 0.268622;
																else
																{
																	if(rsrp < -100.5)
																	{
																		if(ta < 10)
																			return 4.690015;
																		else
																			return 3.3693444444;
																	}
																	else
																		return 5.764995;
																}
															}
															else
															{
																if(payload < 7.5)
																{
																	if(rsrq < -13)
																		return 11.6861;
																	else
																	{
																		if(rsrp < -101.5)
																			return 5.9573;
																		else
																			return 7.7821;
																	}
																}
																else
																{
																	if(ta < 14.5)
																		return 2.99863;
																	else
																	{
																		if(rsrp < -105)
																		{
																			if(velocity < 17.4)
																				return 4.0741;
																			else
																				return 1.45826;
																		}
																		else
																		{
																			if(ta < 20.5)
																				return 5.198275;
																			else
																				return 7.0713;
																		}
																	}
																}
															}
														}
													}
													else
													{
														if(rsrp < -101)
														{
															if(velocity < 15.19)
															{
																if(velocity < 14.6)
																	return 2.0391285714;
																else
																	return 3.76353;
															}
															else
																return 1.176806;
														}
														else
															return 0.919106;
													}
												}
												else
												{
													if(cell < 13415426.5)
														return 0.7622424;
													else
														return 2.094996;
												}
											}
										}
									}
									else
									{
										if(ta < 14.5)
										{
											if(payload < 0.55)
												return 5.92595;
											else
												return 2.2454162062;
										}
										else
										{
											if(cell < 13532290)
											{
												if(payload < 6.5)
													return 18.7647;
												else
													return 15.543;
											}
											else
												return 11.0663;
										}
									}
								}
								else
								{
									if(payload < 3.5)
									{
										if(rsrp < -107.5)
										{
											if(ta < 32.5)
												return 2.02224;
											else
												return 9.02425;
										}
										else
										{
											if(rsrp < -105.5)
												return 17.2414;
											else
												return 23.988;
										}
									}
									else
									{
										if(velocity < 21.78)
											return 3.32818;
										else
										{
											if(rsrp < -104.5)
												return 9.04466;
											else
												return 5.4431725;
										}
									}
								}
							}
						}
						else
						{
							if(payload < 8.5)
							{
								if(velocity < 11.47)
								{
									if(ta < 5.5)
										return 4.58243;
									else
									{
										if(cqi < 2.5)
											return 10.5621;
										else
											return 8.6078575;
									}
								}
								else
									return 15.9204;
							}
							else
							{
								if(payload < 9.5)
									return 30.5214;
								else
									return 13.7268;
							}
						}
					}
				}
				else
				{
					if(velocity < 37.345)
					{
						if(ta < 8.5)
						{
							if(ta < 6.5)
							{
								if(rsrq < -12.5)
									return 31.8514;
								else
									return 21.178;
							}
							else
							{
								if(rsrp < -97.5)
								{
									if(payload < 1.5)
										return 13.8731925843;
									else
										return 9.90712;
								}
								else
								{
									if(ta < 7.5)
									{
										if(velocity < 8.89)
											return 11.3933;
										else
										{
											if(rsrp < -95)
												return 15.5702;
											else
												return 17.9775;
										}
									}
									else
									{
										if(payload < 6.5)
											return 22.2717;
										else
											return 23.5294;
									}
								}
							}
						}
						else
						{
							if(cell < 13527938.5)
							{
								if(rsrp < -94.5)
								{
									if(cqi < 7.5)
									{
										if(payload < 9.5)
										{
											if(payload < 4.5)
											{
												if(velocity < 10.92)
													return 3.24149;
												else
													return 1.2329115385;
											}
											else
											{
												if(sinr < -5.5)
													return 7.84621;
												else
												{
													if(ta < 23.5)
														return 1.716806;
													else
														return 4.49871;
												}
											}
										}
										else
											return 6.49403;
									}
									else
									{
										if(cell < 13138689)
											return 21.9608;
										else
										{
											if(cqi < 8.5)
											{
												if(sinr < 2)
													return 0.691342;
												else
													return 19.7839;
											}
											else
											{
												if(velocity < 14.08)
												{
													if(rsrq < -14)
														return 0.987658;
													else
													{
														if(velocity < 12.1)
															return 11.5942;
														else
															return 15.1181;
													}
												}
												else
												{
													if(rsrp < -95.5)
														return 1.2228798;
													else
														return 2.95298;
												}
											}
										}
									}
								}
								else
								{
									if(velocity < 13.3)
										return 26.9088;
									else
									{
										if(sinr < 1.5)
										{
											if(cqi < 8.5)
												return 11.2518;
											else
												return 13.4003;
										}
										else
										{
											if(cqi < 13.5)
											{
												if(velocity < 15.36)
													return 1.56016;
												else
												{
													if(rsrq < -14)
														return 1.34262;
													else
														return 9.49893;
												}
											}
											else
												return 8.90472;
										}
									}
								}
							}
							else
							{
								if(payload < 0.75)
									return 11.621995;
								else
									return 24.3161;
							}
						}
					}
					else
					{
						if(cqi < 3)
							return 19.0153;
						else
							return 29.0065;
					}
				}
			}
			else
			{
				if(sinr < -10)
					return 33.7981;
				else
				{
					if(rsrp < -111.5)
					{
						if(ta < 15.5)
						{
							if(payload < 8.5)
							{
								if(rsrq < -12.5)
								{
									if(payload < 4)
										return 11.9048;
									else
										return 3.46749;
								}
								else
									return 15.39605;
							}
							else
								return 18.8368;
						}
						else
						{
							if(cell < 12936969.5)
							{
								if(payload < 1.5)
									return 17.316;
								else
								{
									if(velocity < 10.66)
									{
										if(velocity < 5.615)
										{
											if(rsrq < -13)
												return 8.34928;
											else
												return 11.1927;
										}
										else
										{
											if(payload < 4.5)
												return 3.97022;
											else
												return 5.68182;
										}
									}
									else
									{
										if(rsrq < -12.5)
											return 11.3226571429;
										else
											return 13.8468;
									}
								}
							}
							else
							{
								if(rsrq < -20)
									return 17.6796;
								else
								{
									if(payload < 3.5)
									{
										if(rsrp < -120.5)
											return 4.19727;
										else
										{
											if(rsrp < -112.5)
												return 1.1656781577;
											else
												return 3.602565;
										}
									}
									else
									{
										if(sinr < -1.5)
										{
											if(rsrp < -113)
											{
												if(sinr < -5)
													return 4.76555;
												else
													return 7.37735;
											}
											else
												return 11.1982;
										}
										else
										{
											if(rsrq < -12.5)
												return 2.9853133333;
											else
												return 4.4799033333;
										}
									}
								}
							}
						}
					}
					else
					{
						if(rsrp < -101.5)
						{
							if(sinr < 0.5)
							{
								if(payload < 2.5)
								{
									if(f < 2247.55)
									{
										if(cell < 13230090)
										{
											if(payload < 0.55)
												return 0.43908;
											else
											{
												if(rsrp < -109.5)
													return 2.27855;
												else
													return 3.57782;
											}
										}
										else
										{
											if(sinr < -3.5)
												return 10.568;
											else
												return 3.7590924785;
										}
									}
									else
										return 15.728607037;
								}
								else
								{
									if(ta < 16)
										return 24.695508;
									else
									{
										if(rsrq < -13)
										{
											if(sinr < -8.5)
												return 3.13398;
											else
												return 9.780355;
										}
										else
										{
											if(velocity < 6.945)
											{
												if(rsrp < -109)
													return 17.2538;
												else
													return 14.3369;
											}
											else
												return 10.9327;
										}
									}
								}
							}
							else
							{
								if(f < 2247.55)
								{
									if(rsrq < -13.5)
										return 2.21852;
									else
									{
										if(ta < 15)
										{
											if(payload < 3.25)
												return 19.802;
											else
											{
												if(rsrp < -107)
													return 22.5925;
												else
													return 41.1664;
											}
										}
										else
										{
											if(rsrq < -12.5)
											{
												if(payload < 3)
													return 5.22193;
												else
												{
													if(ta < 19)
													{
														if(rsrp < -110.5)
															return 24.7219;
														else
														{
															if(payload < 5.5)
																return 15.3965;
															else
															{
																if(velocity < 12.835)
																	return 17.9843;
																else
																	return 19.3705;
															}
														}
													}
													else
														return 13.4695333333;
												}
											}
											else
											{
												if(cell < 13230089)
												{
													if(cqi < 9)
													{
														if(payload < 7)
															return 12.0724;
														else
															return 14.7126;
													}
													else
														return 10.3535;
												}
												else
													return 5.37634;
											}
										}
									}
								}
								else
								{
									if(velocity < 11.625)
									{
										if(rsrq < -13)
											return 20.3735;
										else
										{
											if(payload < 5.5)
												return 20.915;
											else
												return 22.5423;
										}
									}
									else
										return 41.1664;
								}
							}
						}
						else
						{
							if(cqi < 13)
							{
								if(rsrp < -99.5)
								{
									if(rsrp < -100.5)
										return 17.316;
									else
										return 11.9905666667;
								}
								else
								{
									if(rsrq < -13.5)
										return 12.6562816054;
									else
									{
										if(payload < 3)
										{
											if(sinr < 5)
												return 16.3422782571;
											else
												return 22.7273;
										}
										else
										{
											if(sinr < -1.5)
												return 31.8514;
											else
											{
												if(payload < 6)
													return 25.3365;
												else
													return 22.575;
											}
										}
									}
								}
							}
							else
								return 34.097;
						}
					}
				}
			}
		}
		else
		{
			if(ta < 11.5)
			{
				if(rsrp < -105.5)
				{
					if(velocity < 14.545)
					{
						if(rsrp < -118.5)
							return 56.7376;
						else
						{
							if(cell < 13284105)
							{
								if(sinr < 3)
								{
									if(rsrp < -108)
									{
										if(velocity < 11.575)
											return 48.2291;
										else
											return 37.9147;
									}
									else
										return 27.5862;
								}
								else
								{
									if(cqi < 9)
									{
										if(rsrq < -8.5)
											return 21.751;
										else
											return 26.1077;
									}
									else
									{
										if(payload < 0.75)
											return 23.2558;
										else
										{
											if(sinr < 6)
												return 17.094;
											else
											{
												if(cqi < 10.5)
													return 18.8531;
												else
													return 20.0846;
											}
										}
									}
								}
							}
							else
							{
								if(rsrp < -107.5)
								{
									if(velocity < 6.415)
									{
										if(rsrp < -110)
											return 16.2602;
										else
											return 19.3548;
									}
									else
									{
										if(cell < 13393928)
										{
											if(velocity < 13.925)
												return 15.3846;
											else
												return 12.0482;
										}
										else
										{
											if(rsrq < -10)
												return 15.0502;
											else
											{
												if(payload < 0.3)
													return 7.47666;
												else
												{
													if(rsrp < -115)
														return 3.85356;
													else
														return 5.64687;
												}
											}
										}
									}
								}
								else
								{
									if(velocity < 12.25)
									{
										if(rsrp < -106.5)
											return 17.094;
										else
											return 14.2857;
									}
									else
										return 39.5062;
								}
							}
						}
					}
					else
					{
						if(cell < 13393413.5)
						{
							if(rsrp < -110)
							{
								if(payload < 5.25)
									return 0.879121;
								else
									return 7.61107;
							}
							else
								return 14.6466;
						}
						else
						{
							if(cqi < 5.5)
							{
								if(rsrp < -108.5)
									return 16.1486;
								else
									return 2.04473;
							}
							else
							{
								if(payload < 2.55)
									return 0.257236;
								else
									return 1.6737066667;
							}
						}
					}
				}
				else
				{
					if(sinr < 13.5)
					{
						if(ta < 7.5)
						{
							if(velocity < 13.61)
							{
								if(cqi < 6.5)
								{
									if(payload < 3.5)
									{
										if(payload < 2)
										{
											if(payload < 0.55)
												return 25.8066;
											else
												return 17.8174;
										}
										else
											return 4.9505;
									}
									else
									{
										if(sinr < 3.5)
											return 16.609;
										else
										{
											if(cell < 13284747)
												return 53.1814;
											else
											{
												if(payload < 7)
													return 46.2428;
												else
													return 47.8755;
											}
										}
									}
								}
								else
								{
									if(payload < 0.75)
									{
										if(ta < 5.5)
										{
											if(cell < 13175308.5)
												return 22.8572;
											else
											{
												if(payload < 0.3)
													return 13.3334;
												else
													return 15.625;
											}
										}
										else
										{
											if(cqi < 7.5)
												return 8.797548;
											else
												return 3.90245;
										}
									}
									else
									{
										if(cqi < 12.5)
										{
											if(rsrp < -101.5)
											{
												if(cqi < 11.5)
												{
													if(sinr < 5.5)
													{
														if(payload < 3.5)
															return 31.5375;
														else
															return 32.888;
													}
													else
														return 25.0031;
												}
												else
												{
													if(rsrq < -9)
														return 19.6399;
													else
													{
														if(rsrp < -102.5)
															return 2.9083;
														else
															return 0.547227;
													}
												}
											}
											else
											{
												if(rsrq < -6.5)
												{
													if(cell < 13400193)
													{
														if(velocity < 5.89)
														{
															if(sinr < 7.5)
															{
																if(sinr < 2.5)
																	return 24.6988;
																else
																{
																	if(rsrp < -95.5)
																		return 29.1758;
																	else
																		return 26.6667;
																}
															}
															else
																return 20.3132;
														}
														else
														{
															if(cqi < 8.5)
															{
																if(payload < 2.5)
																	return 36.7816;
																else
																	return 40.6091;
															}
															else
															{
																if(payload < 7.5)
																{
																	if(ta < 6.5)
																	{
																		if(payload < 3)
																			return 20.0501;
																		else
																		{
																			if(rsrp < -96.5)
																				return 26.309;
																			else
																				return 24.8139;
																		}
																	}
																	else
																		return 30.29405;
																}
																else
																	return 29.6714;
															}
														}
													}
													else
													{
														if(sinr < 8.5)
														{
															if(ta < 5.5)
															{
																if(ta < 3.5)
																	return 26.4725;
																else
																{
																	if(rsrp < -99.5)
																		return 22.9626;
																	else
																	{
																		if(cqi < 7.5)
																			return 20.6186;
																		else
																			return 16.8168;
																	}
																}
															}
															else
															{
																if(rsrp < -96.5)
																	return 14.1282;
																else
																{
																	if(rsrq < -10.5)
																		return 17.1215;
																	else
																		return 18.6047;
																}
															}
														}
														else
														{
															if(velocity < 6.07)
															{
																if(sinr < 11.5)
																	return 30.4569;
																else
																{
																	if(rsrq < -8.5)
																		return 24.8062;
																	else
																		return 26.8156;
																}
															}
															else
																return 17.094;
														}
													}
												}
												else
													return 39.604;
											}
										}
										else
										{
											if(velocity < 9.865)
											{
												if(rsrp < -97)
													return 41.3081;
												else
												{
													if(cell < 13502731.5)
														return 36.84065;
													else
														return 34.5125;
												}
											}
											else
											{
												if(cell < 13400200)
													return 31.25;
												else
													return 13.1148;
											}
										}
									}
								}
							}
							else
							{
								if(rsrp < -102.5)
								{
									if(rsrp < -104)
										return 51.0204;
									else
										return 35.7942;
								}
								else
								{
									if(cqi < 9.5)
									{
										if(cqi < 6.5)
										{
											if(cell < 13612802)
											{
												if(ta < 6.5)
													return 12.9492;
												else
													return 15.9808;
											}
											else
												return 7.18348;
										}
										else
										{
											if(rsrq < -10)
											{
												if(payload < 7.5)
													return 9.48804;
												else
													return 18.8679;
											}
											else
											{
												if(sinr < 8.5)
												{
													if(cqi < 8.5)
													{
														if(rsrp < -93.5)
															return 26.0071333333;
														else
															return 31.5582;
													}
													else
														return 21.4938;
												}
												else
												{
													if(payload < 4.5)
														return 20.3046;
													else
														return 2.0339;
												}
											}
										}
									}
									else
									{
										if(sinr < 10.5)
										{
											if(sinr < 6)
												return 10.0819;
											else
												return 6.93896;
										}
										else
										{
											if(rsrp < -98)
												return 3.13529;
											else
												return 4.8155875;
										}
									}
								}
							}
						}
						else
						{
							if(velocity < 15.045)
							{
								if(cell < 13044996.5)
								{
									if(velocity < 5.125)
									{
										if(payload < 5.5)
										{
											if(rsrq < -9.5)
												return 28.5714;
											else
											{
												if(payload < 2)
													return 27.2109;
												else
													return 22.0791;
											}
										}
										else
											return 32.2418;
									}
									else
									{
										if(cqi < 8.5)
										{
											if(rsrp < -100)
											{
												if(ta < 9.5)
													return 39.3314;
												else
												{
													if(rsrq < -10.5)
														return 4.32434;
													else
													{
														if(payload < 6)
															return 22.409;
														else
															return 24.3161;
													}
												}
											}
											else
											{
												if(velocity < 6.845)
													return 4.16668;
												else
												{
													if(cqi < 7)
													{
														if(rsrq < -9.5)
															return 11.4304;
														else
															return 13.0293;
													}
													else
													{
														if(payload < 2.5)
															return 14.2476;
														else
															return 18.1406;
													}
												}
											}
										}
										else
											return 3.25204;
									}
								}
								else
								{
									if(rsrp < -97.5)
									{
										if(sinr < 4.5)
										{
											if(payload < 0.75)
												return 2.09314;
											else
											{
												if(cqi < 8.5)
												{
													if(velocity < 4.385)
														return 37.3614;
													else
													{
														if(payload < 3)
															return 26.12375;
														else
														{
															if(cqi < 7.5)
															{
																if(payload < 4.5)
																	return 20.0501;
																else
																{
																	if(rsrp < -98.5)
																	{
																		if(rsrp < -99.5)
																			return 19.5122;
																		else
																			return 22.1852;
																	}
																	else
																		return 28.1889;
																}
															}
															else
																return 12.1951;
														}
													}
												}
												else
												{
													if(rsrq < -9.5)
													{
														if(ta < 8.5)
															return 28.2686;
														else
															return 48.048;
													}
													else
													{
														if(payload < 6)
															return 29.3758;
														else
															return 25.5954;
													}
												}
											}
										}
										else
										{
											if(cqi < 6.5)
												return 13.1291;
											else
											{
												if(payload < 3.5)
													return 30.4569;
												else
												{
													if(ta < 10)
													{
														if(cell < 13463048.5)
														{
															if(payload < 6)
																return 46.3097;
															else
																return 42.6099;
														}
														else
															return 50.7937;
													}
													else
														return 33.4169;
												}
											}
										}
									}
									else
									{
										if(payload < 4.5)
										{
											if(velocity < 10.345)
											{
												if(sinr < 7.5)
												{
													if(cell < 13532419)
													{
														if(payload < 2.5)
														{
															if(rsrq < -8.5)
															{
																if(ta < 8.5)
																	return 24.6154;
																else
																	return 27.4914;
															}
															else
															{
																if(cqi < 9.5)
																	return 17.1674;
																else
																	return 21.978;
															}
														}
														else
															return 17.3661;
													}
													else
													{
														if(cqi < 7.5)
														{
															if(payload < 3.5)
																return 22.2428;
															else
																return 24.1327;
														}
														else
															return 25.974;
													}
												}
												else
												{
													if(rsrq < -8)
														return 31.4961;
													else
														return 26.2295;
												}
											}
											else
											{
												if(cqi < 10)
													return 34.0426;
												else
													return 32.3887;
											}
										}
										else
										{
											if(payload < 5.5)
												return 60.1504;
											else
											{
												if(sinr < 4.5)
												{
													if(cqi < 7.5)
														return 21.7613;
													else
													{
														if(cell < 13532419)
														{
															if(cqi < 8.5)
																return 37.2439;
															else
															{
																if(payload < 6.5)
																	return 30.5732;
																else
																	return 32.8446;
															}
														}
														else
															return 23.4801;
													}
												}
												else
												{
													if(ta < 8.5)
													{
														if(sinr < 11.5)
														{
															if(payload < 8.5)
																return 31.7618;
															else
																return 33.4417;
														}
														else
															return 25.8435;
													}
													else
													{
														if(payload < 8)
														{
															if(rsrp < -93.5)
															{
																if(rsrp < -96.5)
																	return 38.7097;
																else
																{
																	if(rsrp < -95)
																		return 47.105;
																	else
																		return 50;
																}
															}
															else
															{
																if(sinr < 7.5)
																	return 32.9606;
																else
																	return 35.0219;
															}
														}
														else
														{
															if(velocity < 11.825)
															{
																if(rsrp < -95.5)
																	return 51.2492;
																else
																	return 55.088;
															}
															else
																return 35.9102;
														}
													}
												}
											}
										}
									}
								}
							}
							else
							{
								if(velocity < 15.395)
									return 160.001;
								else
								{
									if(cqi < 10)
									{
										if(sinr < 4.5)
											return 39.2157;
										else
											return 22.7201;
									}
									else
										return 5.16129;
								}
							}
						}
					}
					else
					{
						if(rsrp < -98.5)
						{
							if(payload < 0.75)
							{
								if(payload < 0.3)
									return 13.1148;
								else
									return 15.444;
							}
							else
							{
								if(cqi < 9.5)
								{
									if(rsrq < -6.5)
									{
										if(rsrq < -7.5)
											return 13.3156;
										else
											return 20.6186;
									}
									else
										return 30.6513;
								}
								else
								{
									if(rsrp < -99.5)
									{
										if(ta < 6.5)
											return 28.6944;
										else
										{
											if(velocity < 13.58)
											{
												if(cell < 13463054.5)
												{
													if(payload < 4.5)
														return 25.417;
													else
													{
														if(payload < 7)
															return 42.9185;
														else
															return 34.5988;
													}
												}
												else
												{
													if(rsrp < -102.5)
													{
														if(rsrp < -103.5)
															return 45.7143;
														else
															return 42.6099;
													}
													else
													{
														if(ta < 8)
															return 40.201;
														else
															return 38.5542;
													}
												}
											}
											else
											{
												if(payload < 4.5)
													return 47.4308;
												else
													return 48.7805;
											}
										}
									}
									else
										return 58.8776;
								}
							}
						}
						else
						{
							if(rsrq < -6.5)
							{
								if(sinr < 18.5)
								{
									if(f < 2247.55)
										return 23.4742;
									else
										return 27.6817;
								}
								else
									return 19.14705;
							}
							else
							{
								if(payload < 9.5)
								{
									if(payload < 4.5)
									{
										if(payload < 3.5)
										{
											if(velocity < 5.02)
												return 42.7604333333;
											else
												return 44.7761;
										}
										else
											return 39.9501;
									}
									else
									{
										if(rsrp < -94)
										{
											if(ta < 6.5)
												return 61.4439;
											else
											{
												if(payload < 7.5)
													return 48.401;
												else
												{
													if(cqi < 13.5)
													{
														if(cqi < 11)
															return 45.3686;
														else
															return 43.8356;
													}
													else
														return 41.6938;
												}
											}
										}
										else
											return 68.8172;
									}
								}
								else
								{
									if(rsrp < -97)
										return 56.1798;
									else
										return 63.0418;
								}
							}
						}
					}
				}
			}
			else
			{
				if(cell < 13044869)
				{
					if(sinr < 10.5)
					{
						if(velocity < 13.79)
						{
							if(velocity < 12.695)
							{
								if(payload < 0.3)
								{
									if(sinr < -1)
									{
										if(sinr < -3.5)
											return 14.2858;
										else
											return 20.5129;
									}
									else
									{
										if(velocity < 6.965)
										{
											if(cqi < 14.5)
											{
												if(velocity < 3.27)
													return 12.5;
												else
													return 14.5455;
											}
											else
												return 9.09094;
										}
										else
										{
											if(sinr < 2)
												return 0.290488;
											else
											{
												if(sinr < 5)
													return 10.5264;
												else
												{
													if(rsrp < -105.5)
														return 1.02696;
													else
														return 4.65118;
												}
											}
										}
									}
								}
								else
								{
									if(rsrp < -109.5)
									{
										if(ta < 16.5)
										{
											if(payload < 7)
											{
												if(rsrp < -112.5)
													return 23.5294;
												else
												{
													if(rsrp < -111)
														return 7.23327;
													else
													{
														if(rsrq < -10)
															return 11.9225;
														else
														{
															if(velocity < 4.685)
																return 18.9573;
															else
															{
																if(sinr < 3)
																	return 15.4515;
																else
																	return 12.5;
															}
														}
													}
												}
											}
											else
											{
												if(rsrp < -111.5)
													return 6.5538;
												else
												{
													if(rsrq < -8.5)
														return 14.7411;
													else
														return 10.8592;
												}
											}
										}
										else
										{
											if(payload < 7.5)
											{
												if(payload < 1.5)
												{
													if(velocity < 6.75)
														return 23.5763333333;
													else
														return 18.7793;
												}
												else
												{
													if(rsrq < -8)
													{
														if(rsrq < -9.5)
														{
															if(velocity < 9.365)
																return 11.2155833333;
															else
																return 12.4805;
														}
														else
														{
															if(cqi < 5.5)
																return 12.1029;
															else
																return 16.5517;
														}
													}
													else
														return 22.5352;
												}
											}
											else
											{
												if(rsrp < -112)
													return 15.8951;
												else
												{
													if(velocity < 6.21)
														return 29.304;
													else
														return 25.3842;
												}
											}
										}
									}
									else
									{
										if(rsrp < -104)
										{
											if(velocity < 12.445)
											{
												if(cqi < 7.5)
												{
													if(ta < 16.5)
													{
														if(rsrq < -9.5)
															return 21.6998;
														else
															return 23.9521;
													}
													else
													{
														if(sinr < 5)
															return 30.4472;
														else
															return 28.643;
													}
												}
												else
												{
													if(velocity < 12.28)
													{
														if(payload < 6.5)
														{
															if(cqi < 11.5)
															{
																if(payload < 5.5)
																{
																	if(rsrq < -7.5)
																		return 22.19145;
																	else
																		return 17.9372;
																}
																else
																	return 27.0728;
															}
															else
															{
																if(cqi < 14.5)
																{
																	if(rsrq < -7.5)
																	{
																		if(payload < 5)
																			return 14.3627;
																		else
																			return 18.419;
																	}
																	else
																		return 8.45368;
																}
																else
																{
																	if(sinr < 9.5)
																	{
																		if(payload < 0.75)
																			return 22.8571;
																		else
																			return 21.4466;
																	}
																	else
																		return 17.7148;
																}
															}
														}
														else
														{
															if(ta < 15)
															{
																if(rsrp < -106)
																	return 32.7065;
																else
																	return 30.7861;
															}
															else
															{
																if(velocity < 10.695)
																{
																	if(cqi < 10.5)
																	{
																		if(velocity < 8.145)
																		{
																			if(ta < 16.5)
																			{
																				if(sinr < 6)
																					return 20.1258;
																				else
																				{
																					if(rsrq < -8)
																						return 22.4845;
																					else
																						return 29.0592;
																				}
																			}
																			else
																				return 26.6259;
																		}
																		else
																			return 17.7738;
																	}
																	else
																	{
																		if(cqi < 12)
																		{
																			if(sinr < 5)
																				return 12.9581;
																			else
																				return 21.0112;
																		}
																		else
																		{
																			if(velocity < 3.205)
																				return 20.2212;
																			else
																				return 18.7463;
																		}
																	}
																}
																else
																{
																	if(rsrp < -107)
																		return 25.7946;
																	else
																		return 23.902;
																}
															}
														}
													}
													else
														return 11.4213;
												}
											}
											else
												return 11.6831;
										}
										else
										{
											if(rsrp < -102.5)
												return 31.7041;
											else
												return 29.7275;
										}
									}
								}
							}
							else
							{
								if(ta < 15.5)
								{
									if(cqi < 12.5)
										return 15.9287;
									else
										return 20.4082;
								}
								else
								{
									if(sinr < 4.5)
									{
										if(velocity < 13.18)
											return 23.17945;
										else
											return 25.2632;
									}
									else
									{
										if(rsrp < -106.5)
											return 36.3663;
										else
										{
											if(velocity < 13.275)
												return 26.1438;
											else
											{
												if(f < 1362.55)
													return 31.9361;
												else
												{
													if(velocity < 13.365)
														return 32.1429;
													else
														return 29.9465;
												}
											}
										}
									}
								}
							}
						}
						else
						{
							if(payload < 6.5)
							{
								if(sinr < 5)
								{
									if(payload < 1.5)
										return 1.6776;
									else
									{
										if(f < 1362.55)
											return 13.3407;
										else
										{
											if(velocity < 15.48)
												return 10.57155;
											else
												return 5.21308;
										}
									}
								}
								else
								{
									if(rsrq < -7.5)
									{
										if(velocity < 14.555)
										{
											if(ta < 16.5)
												return 16.8067;
											else
											{
												if(velocity < 14.075)
													return 10.99248;
												else
													return 8.8647433333;
											}
										}
										else
											return 18.6829;
									}
									else
									{
										if(rsrp < -101)
											return 21.8729;
										else
											return 20;
									}
								}
							}
							else
							{
								if(velocity < 14.145)
									return 7.29528;
								else
								{
									if(rsrp < -103.5)
									{
										if(velocity < 15.78)
										{
											if(rsrp < -110)
											{
												if(cqi < 7.5)
													return 29.138;
												else
													return 21.1161;
											}
											else
											{
												if(sinr < 6.5)
													return 24.5506;
												else
													return 20.9268;
											}
										}
										else
										{
											if(payload < 8.5)
												return 14.3113;
											else
												return 15.8346;
										}
									}
									else
										return 15.67106;
								}
							}
						}
					}
					else
					{
						if(rsrq < -7.5)
						{
							if(rsrp < -105.5)
							{
								if(velocity < 12.63)
								{
									if(payload < 0.3)
										return 16.0001;
									else
									{
										if(ta < 16.5)
										{
											if(sinr < 14.5)
												return 31.2256;
											else
											{
												if(payload < 2.25)
													return 24.8447;
												else
													return 26.6667;
											}
										}
										else
											return 23.9521;
									}
								}
								else
								{
									if(payload < 7.5)
									{
										if(cqi < 11)
											return 17.0794;
										else
											return 15.5939;
									}
									else
									{
										if(payload < 8.5)
											return 20.0753;
										else
											return 15.676;
									}
								}
							}
							else
							{
								if(payload < 1.75)
								{
									if(rsrp < -102)
										return 14.0351;
									else
										return 21.5054;
								}
								else
								{
									if(ta < 15)
									{
										if(rsrp < -101)
										{
											if(rsrp < -102.5)
											{
												if(rsrp < -104)
													return 35.1262;
												else
													return 33.7909;
											}
											else
												return 36.2538;
										}
										else
										{
											if(velocity < 12.305)
												return 59.5041;
											else
												return 35.1906;
										}
									}
									else
									{
										if(velocity < 13.605)
										{
											if(cqi < 11.5)
											{
												if(rsrp < -100.5)
												{
													if(cqi < 9.5)
														return 29.4961;
													else
														return 25.1309;
												}
												else
												{
													if(payload < 6)
														return 36.6133;
													else
														return 26.4354;
												}
											}
											else
												return 21.4765;
										}
										else
										{
											if(rsrq < -8.5)
											{
												if(rsrp < -104.5)
													return 32.4826;
												else
													return 29.2581;
											}
											else
											{
												if(ta < 16.5)
												{
													if(payload < 7)
														return 39.9002;
													else
														return 38.0409;
												}
												else
													return 35.7994666667;
											}
										}
									}
								}
							}
						}
						else
						{
							if(velocity < 13.665)
							{
								if(ta < 15)
								{
									if(payload < 6)
									{
										if(cqi < 12)
											return 27.8746;
										else
											return 38.9105;
									}
									else
										return 58.9474;
								}
								else
								{
									if(velocity < 12.15)
									{
										if(sinr < 12)
											return 17.1951;
										else
										{
											if(sinr < 26)
											{
												if(rsrp < -96.5)
												{
													if(payload < 4.5)
														return 29.484;
													else
														return 27.8948;
												}
												else
												{
													if(rsrq < -6.5)
														return 46.1835;
													else
														return 41.365;
												}
											}
											else
												return 22.5352;
										}
									}
									else
									{
										if(rsrp < -100)
											return 17.6211;
										else
										{
											if(cqi < 10)
												return 22.3568;
											else
												return 21.0804;
										}
									}
								}
							}
							else
							{
								if(sinr < 15)
								{
									if(rsrp < -102.5)
										return 133.334;
									else
										return 23.8501;
								}
								else
								{
									if(payload < 4.5)
										return 17.66;
									else
										return 31.94355;
								}
							}
						}
					}
				}
				else
				{
					if(rsrq < -9.5)
					{
						if(payload < 0.75)
						{
							if(sinr < -0.5)
							{
								if(cqi < 6.5)
									return 5.75542;
								else
									return 7.61505;
							}
							else
							{
								if(rsrp < -107.5)
								{
									if(cell < 13067273.5)
										return 0.4262016667;
									else
									{
										if(rsrp < -110.5)
										{
											if(payload < 0.3)
											{
												if(cell < 13392904.5)
												{
													if(cell < 13230089)
														return 2.28572;
													else
														return 5.75542;
												}
												else
													return 2.07793;
											}
											else
												return 1.534735;
										}
										else
										{
											if(sinr < 1.5)
												return 8.519345;
											else
												return 15.1515;
										}
									}
								}
								else
								{
									if(cqi < 10)
										return 0.7801072857;
									else
										return 5.16796;
								}
							}
						}
						else
						{
							if(payload < 5.5)
							{
								if(rsrp < -102)
								{
									if(rsrq < -10.5)
									{
										if(f < 1362.55)
										{
											if(sinr < 0.5)
												return 6.31247;
											else
												return 2.1659185714;
										}
										else
										{
											if(rsrp < -113.5)
												return 2.0318633333;
											else
											{
												if(payload < 2.5)
													return 1.18046;
												else
												{
													if(payload < 4.5)
													{
														if(payload < 3.5)
															return 10.404675;
														else
															return 2.82511;
													}
													else
													{
														if(cqi < 7)
															return 13.1926;
														else
															return 14.7765;
													}
												}
											}
										}
									}
									else
									{
										if(sinr < -4.5)
											return 28.5459;
										else
										{
											if(sinr < 4.5)
											{
												if(rsrp < -112)
												{
													if(rsrp < -117)
														return 8.42697;
													else
														return 5.70342;
												}
												else
												{
													if(f < 1362.55)
														return 9.23254;
													else
													{
														if(velocity < 13.075)
														{
															if(velocity < 12.64)
															{
																if(velocity < 6.185)
																{
																	if(cqi < 8.5)
																		return 17.6018;
																	else
																		return 16.6900833333;
																}
																else
																	return 11.8343;
															}
															else
																return 25.0261;
														}
														else
															return 14.4231;
													}
												}
											}
											else
											{
												if(payload < 3.5)
													return 0.772872;
												else
													return 2.90782;
											}
										}
									}
								}
								else
								{
									if(ta < 14.5)
									{
										if(velocity < 18.81)
										{
											if(sinr < 3)
												return 21.5054;
											else
											{
												if(payload < 2)
													return 17.2043;
												else
													return 20.1511;
											}
										}
										else
										{
											if(sinr < 4)
												return 22.6886;
											else
												return 25.5918;
										}
									}
									else
									{
										if(velocity < 23.92)
										{
											if(cqi < 7)
												return 15.1286;
											else
												return 16.7786333333;
										}
										else
											return 20.4082;
									}
								}
							}
							else
							{
								if(ta < 66.5)
								{
									if(cqi < 7.5)
									{
										if(payload < 6.5)
										{
											if(rsrp < -106)
												return 3.09637;
											else
												return 0.744821;
										}
										else
										{
											if(ta < 23.5)
											{
												if(f < 1362.55)
												{
													if(cqi < 4.5)
														return 12.954;
													else
													{
														if(velocity < 19.64)
														{
															if(rsrp < -109.5)
																return 1.65971;
															else
															{
																if(rsrp < -99.5)
																{
																	if(sinr < -1.5)
																		return 4.27216;
																	else
																	{
																		if(payload < 9)
																		{
																			if(velocity < 7.84)
																				return 4.09836;
																			else
																				return 7.34113;
																		}
																		else
																			return 5.68909;
																	}
																}
																else
																	return 2.00129;
															}
														}
														else
															return 7.21742;
													}
												}
												else
												{
													if(rsrp < -113.5)
														return 6.22084;
													else
													{
														if(cqi < 5.5)
															return 7.60766;
														else
															return 14.1315;
													}
												}
											}
											else
											{
												if(velocity < 14.435)
												{
													if(rsrp < -101)
														return 2.5511;
													else
														return 5.65593;
												}
												else
													return 1.6880633333;
											}
										}
									}
									else
									{
										if(velocity < 14.23)
										{
											if(ta < 15)
												return 30.4569;
											else
											{
												if(rsrp < -109.5)
													return 20.8673;
												else
												{
													if(payload < 8.5)
														return 6.80055;
													else
														return 3.44795;
												}
											}
										}
										else
										{
											if(rsrp < -110.5)
												return 8.42359;
											else
											{
												if(payload < 9.5)
												{
													if(cell < 13241349.5)
														return 3.58494;
													else
														return 1.0868336667;
												}
												else
													return 7.90826;
											}
										}
									}
								}
								else
								{
									if(payload < 8.5)
										return 19.4766;
									else
										return 21.7984;
								}
							}
						}
					}
					else
					{
						if(cqi < 10.5)
						{
							if(payload < 1.5)
							{
								if(sinr < 24)
								{
									if(velocity < 24.195)
									{
										if(cell < 13067273.5)
											return 0.053287;
										else
										{
											if(velocity < 11.025)
											{
												if(rsrq < -7.5)
												{
													if(sinr < 5.5)
													{
														if(payload < 0.75)
															return 15.625;
														else
															return 2.72944;
													}
													else
														return 0.9936386667;
												}
												else
												{
													if(rsrp < -99)
														return 7.15564;
													else
														return 11.7647;
												}
											}
											else
											{
												if(rsrq < -8.5)
												{
													if(rsrp < -105)
														return 18.7354;
													else
														return 10.3359;
												}
												else
												{
													if(rsrp < -97.5)
													{
														if(cell < 13230090)
															return 17.0213;
														else
														{
															if(ta < 23)
															{
																if(rsrq < -7.5)
																{
																	if(velocity < 16.7)
																	{
																		if(payload < 0.3)
																			return 8.08084;
																		else
																			return 10.5689333333;
																	}
																	else
																		return 8.241775;
																}
																else
																	return 4.6243;
															}
															else
																return 4.25534;
														}
													}
													else
														return 14.8148;
												}
											}
										}
									}
									else
									{
										if(cell < 13416322.5)
											return 0.31746;
										else
										{
											if(payload < 0.75)
												return 1.25313;
											else
												return 3.88061;
										}
									}
								}
								else
									return 18.1818;
							}
							else
							{
								if(cell < 13067273.5)
								{
									if(sinr < 8.5)
										return 0.8539085;
									else
										return 4.3483;
								}
								else
								{
									if(cell < 13405319.5)
									{
										if(velocity < 14.49)
										{
											if(velocity < 0.38)
											{
												if(rsrp < -104.5)
												{
													if(payload < 4.5)
													{
														if(rsrp < -110)
														{
															if(rsrq < -8.5)
																return 16.73775;
															else
																return 14.4144;
														}
														else
														{
															if(rsrq < -7.5)
																return 22.7273;
															else
																return 19.8758;
														}
													}
													else
													{
														if(ta < 16.5)
														{
															if(payload < 7.5)
															{
																if(sinr < 4.5)
																{
																	if(cqi < 8.5)
																		return 27.2851;
																	else
																		return 31.31252;
																}
																else
																	return 22.7273;
															}
															else
															{
																if(rsrp < -107.5)
																	return 21.1921;
																else
																	return 25.8983;
															}
														}
														else
														{
															if(payload < 7.5)
															{
																if(rsrp < -106.5)
																{
																	if(cqi < 7)
																		return 13.6612;
																	else
																		return 17.4262333333;
																}
																else
																	return 20.1005;
															}
															else
															{
																if(cqi < 6.5)
																	return 21.4549;
																else
																	return 23.6998;
															}
														}
													}
												}
												else
												{
													if(cqi < 7.5)
														return 12.0527;
													else
														return 4.01808;
												}
											}
											else
											{
												if(cqi < 6.5)
												{
													if(rsrp < -111)
														return 14.2507;
													else
													{
														if(ta < 21.5)
															return 5.36643;
														else
															return 2.79274;
													}
												}
												else
												{
													if(cell < 13161220.5)
													{
														if(sinr < 5)
															return 13.4516;
														else
														{
															if(velocity < 12.12)
															{
																if(payload < 8.5)
																	return 25.9846;
																else
																	return 23.7467;
															}
															else
															{
																if(ta < 70.5)
																{
																	if(rsrp < -103.5)
																		return 28.1442;
																	else
																		return 22.9665;
																}
																else
																	return 16.7406666667;
															}
														}
													}
													else
													{
														if(sinr < 2.5)
															return 28.2686;
														else
														{
															if(payload < 4.5)
															{
																if(velocity < 12.835)
																{
																	if(sinr < 10.5)
																		return 11.6448;
																	else
																	{
																		if(rsrp < -100.5)
																			return 16.2602;
																		else
																			return 19.8388;
																	}
																}
																else
																	return 26.287;
															}
															else
															{
																if(ta < 14.5)
																{
																	if(payload < 8)
																		return 7.219336;
																	else
																		return 8.43526;
																}
																else
																{
																	if(cell < 13393420)
																	{
																		if(ta < 15.5)
																			return 11.6486;
																		else
																		{
																			if(sinr < 4.5)
																				return 18.4403;
																			else
																				return 16.96655;
																		}
																	}
																	else
																	{
																		if(ta < 16.5)
																			return 4.77644;
																		else
																			return 8.94454;
																	}
																}
															}
														}
													}
												}
											}
										}
										else
										{
											if(rsrq < -8.5)
											{
												if(payload < 9.5)
												{
													if(ta < 15)
														return 2.57631;
													else
														return 9.03614;
												}
												else
													return 25.7152;
											}
											else
											{
												if(payload < 6)
												{
													if(rsrq < -7.5)
														return 25.2167;
													else
													{
														if(sinr < 10.5)
															return 17.2459;
														else
															return 20.7254;
													}
												}
												else
												{
													if(velocity < 19.035)
													{
														if(sinr < 12)
														{
															if(payload < 9)
																return 27.5981;
															else
																return 26.3244;
														}
														else
															return 24.3902;
													}
													else
													{
														if(sinr < 10)
															return 43.1558;
														else
															return 32.3232;
													}
												}
											}
										}
									}
									else
									{
										if(rsrp < -95.5)
										{
											if(cqi < 9.5)
											{
												if(velocity < 13.985)
												{
													if(payload < 8.5)
														return 1.3302;
													else
														return 3.238595;
												}
												else
												{
													if(sinr < 3.5)
													{
														if(sinr < 2)
															return 5.63777;
														else
															return 1.0777;
													}
													else
														return 7.29153;
												}
											}
											else
											{
												if(payload < 7)
													return 15.4291;
												else
													return 13.7457;
											}
										}
										else
										{
											if(velocity < 15.165)
												return 15.65545;
											else
												return 19.1376666667;
										}
									}
								}
							}
						}
						else
						{
							if(rsrp < -102)
							{
								if(sinr < 7.5)
								{
									if(velocity < 6.185)
										return 14.4231;
									else
										return 6.6035444444;
								}
								else
								{
									if(velocity < 14.585)
									{
										if(velocity < 11.505)
										{
											if(rsrp < -106.5)
												return 17.9171;
											else
												return 22.2841;
										}
										else
										{
											if(cqi < 11.5)
												return 29.6464;
											else
												return 21.4286;
										}
									}
									else
										return 11.1111;
								}
							}
							else
							{
								if(rsrq < -8.5)
								{
									if(rsrp < -98.5)
									{
										if(rsrp < -100)
											return 39.5257;
										else
											return 36.3636;
									}
									else
									{
										if(rsrp < -95)
										{
											if(sinr < 8)
												return 25.3879;
											else
											{
												if(cqi < 13.5)
													return 15.6098;
												else
													return 20.4604;
											}
										}
										else
											return 35.2734;
									}
								}
								else
								{
									if(cell < 13394690)
									{
										if(rsrq < -5.5)
										{
											if(payload < 2.5)
											{
												if(rsrq < -7.5)
													return 6.06061;
												else
												{
													if(sinr < 13)
														return 13.4853;
													else
														return 22.2222;
												}
											}
											else
											{
												if(payload < 9.5)
												{
													if(payload < 8.5)
													{
														if(rsrp < -94)
														{
															if(cell < 13230089.5)
															{
																if(sinr < 8.5)
																	return 25.2749;
																else
																{
																	if(payload < 5.5)
																		return 35.66625;
																	else
																		return 33.3333;
																}
															}
															else
															{
																if(cqi < 13)
																{
																	if(sinr < 0.5)
																		return 25.9019;
																	else
																	{
																		if(cqi < 11.5)
																		{
																			if(payload < 5.5)
																				return 18.75;
																			else
																				return 20.0501;
																		}
																		else
																		{
																			if(rsrp < -97.5)
																				return 20.9607;
																			else
																				return 22.3386;
																		}
																	}
																}
																else
																{
																	if(cqi < 14.5)
																		return 28.0512;
																	else
																		return 25.3623;
																}
															}
														}
														else
														{
															if(ta < 14.5)
																return 27.3839;
															else
															{
																if(rsrq < -6.5)
																	return 16.4948;
																else
																	return 21.7687;
															}
														}
													}
													else
														return 49.3489;
												}
												else
												{
													if(rsrq < -7)
														return 9.29152;
													else
													{
														if(ta < 43)
															return 21.0084;
														else
															return 39.5648;
													}
												}
											}
										}
										else
											return 11.8151;
									}
									else
									{
										if(rsrq < -6.5)
										{
											if(rsrp < -94)
											{
												if(ta < 27)
													return 14.6781333333;
												else
													return 13.2231;
											}
											else
												return 10.6484;
										}
										else
										{
											if(velocity < 28.94)
												return 9.53516;
											else
												return 6.75533;
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
	else
	{
		if(payload < 1.5)
		{
			if(sinr < 15.5)
			{
				if(payload < 0.75)
				{
					if(rsrq < -7.5)
					{
						if(cell < 13531528.5)
						{
							if(cqi < 11)
							{
								if(sinr < 9.5)
								{
									if(rsrq < -11.5)
										return 6.72271;
									else
										return 3.762226;
								}
								else
									return 9.87658;
							}
							else
							{
								if(velocity < 13.645)
								{
									if(cqi < 13)
										return 9.19544;
									else
										return 13.9131;
								}
								else
								{
									if(velocity < 15.46)
										return 7.18222;
									else
										return 9.01726;
								}
							}
						}
						else
						{
							if(sinr < 6.5)
								return 18.8679;
							else
								return 14.7601;
						}
					}
					else
					{
						if(cell < 13532162)
						{
							if(ta < 14.5)
							{
								if(payload < 0.3)
								{
									if(sinr < 9)
									{
										if(ta < 9.5)
										{
											if(cell < 13531399.5)
											{
												if(sinr < 2.5)
												{
													if(ta < 4.5)
														return 13.9226;
													else
														return 12.5;
												}
												else
												{
													if(sinr < 4.5)
														return 17.3914;
													else
														return 13.1148;
												}
											}
											else
												return 9.63859;
										}
										else
											return 19.5123;
									}
									else
									{
										if(velocity < 5.37)
										{
											if(rsrq < -6)
												return 13.9226;
											else
												return 10.8109;
										}
										else
										{
											if(ta < 10.5)
											{
												if(rsrq < -6.5)
													return 7.40744;
												else
													return 5.71431;
											}
											else
												return 9.75613;
										}
									}
								}
								else
								{
									if(cell < 13394818.5)
									{
										if(rsrp < -88.5)
											return 15.444;
										else
										{
											if(ta < 10.5)
											{
												if(cqi < 12.5)
													return 19.96515;
												else
													return 22.28565;
											}
											else
												return 16.5289;
										}
									}
									else
									{
										if(sinr < 11)
											return 14.0845;
										else
											return 10;
									}
								}
							}
							else
							{
								if(rsrq < -6)
									return 4.80192;
								else
									return 7.33948;
							}
						}
						else
							return 27.027;
					}
				}
				else
				{
					if(sinr < 0)
					{
						if(cqi < 9)
							return 15.2672;
						else
							return 8.29876;
					}
					else
					{
						if(cqi < 14.5)
						{
							if(cqi < 8.5)
								return 19.1847;
							else
							{
								if(cell < 13394049.5)
								{
									if(rsrp < -81)
										return 26.3158;
									else
									{
										if(rsrq < -6.5)
											return 23.0548;
										else
											return 24.5399;
									}
								}
								else
								{
									if(cell < 13469190.5)
									{
										if(sinr < 8.5)
											return 30.6513;
										else
											return 29.2002;
									}
									else
									{
										if(rsrp < -88.5)
											return 24.7678;
										else
											return 28.88125;
									}
								}
							}
						}
						else
						{
							if(rsrp < -81.5)
								return 38.835;
							else
								return 36.1991;
						}
					}
				}
			}
			else
			{
				if(ta < 16.5)
				{
					if(velocity < 15.775)
					{
						if(payload < 0.75)
						{
							if(ta < 3.5)
							{
								if(rsrp < -80.5)
								{
									if(cqi < 11.5)
										return 26.8456;
									else
									{
										if(sinr < 22)
											return 36.036;
										else
											return 34.4828;
									}
								}
								else
								{
									if(sinr < 28.5)
									{
										if(rsrq < -7.5)
											return 29.6296;
										else
										{
											if(cqi < 14)
											{
												if(rsrp < -79)
													return 13.3334;
												else
												{
													if(rsrq < -6.5)
														return 19.5123;
													else
														return 22.3464;
												}
											}
											else
												return 24.0964;
										}
									}
									else
										return 61.5387;
								}
							}
							else
							{
								if(cqi < 11.5)
								{
									if(rsrq < -7.5)
									{
										if(ta < 7.5)
										{
											if(velocity < 10.185)
											{
												if(rsrp < -78.5)
													return 17.6991;
												else
													return 19.9005;
											}
											else
											{
												if(rsrp < -81.5)
													return 17.8571;
												else
													return 11.0497;
											}
										}
										else
											return 10.30741;
									}
									else
									{
										if(payload < 0.3)
											return 19.5123;
										else
											return 23.9521;
									}
								}
								else
								{
									if(rsrp < -64)
									{
										if(velocity < 15.195)
										{
											if(payload < 0.3)
											{
												if(cqi < 14.5)
												{
													if(sinr < 21.5)
														return 14.5455;
													else
														return 21.0527;
												}
												else
													return 6.8052066667;
											}
											else
											{
												if(sinr < 18.5)
												{
													if(rsrp < -78)
														return 33.8983;
													else
														return 27.5862;
												}
												else
												{
													if(cqi < 14.5)
													{
														if(sinr < 24.5)
															return 29.6296;
														else
														{
															if(rsrq < -5.5)
																return 28.169;
															else
																return 22.988875;
														}
													}
													else
													{
														if(ta < 6.5)
														{
															if(cell < 13394183)
																return 23.6843666667;
															else
																return 27.3973;
														}
														else
														{
															if(ta < 9.5)
																return 19.1497;
															else
																return 22.080625;
														}
													}
												}
											}
										}
										else
											return 7.40744;
									}
									else
										return 38.4615;
								}
							}
						}
						else
						{
							if(rsrp < -87)
								return 43.956;
							else
							{
								if(f < 1362.55)
								{
									if(sinr < 18.5)
									{
										if(cell < 12973569.5)
											return 33.8983;
										else
										{
											if(velocity < 3.51)
											{
												if(sinr < 16.5)
													return 34.7826;
												else
													return 32.6531;
											}
											else
											{
												if(sinr < 17)
												{
													if(cqi < 11.5)
														return 29.5203;
													else
														return 32.2581;
												}
												else
													return 31.4961;
											}
										}
									}
									else
									{
										if(sinr < 23.5)
											return 27.0859;
										else
										{
											if(velocity < 8.525)
											{
												if(rsrq < -6.5)
													return 36.3636;
												else
													return 30.4183;
											}
											else
												return 29.7398;
										}
									}
								}
								else
								{
									if(cell < 13393541.5)
										return 46.5116;
									else
									{
										if(ta < 4.5)
											return 36.3636;
										else
											return 34.1617416667;
									}
								}
							}
						}
					}
					else
					{
						if(rsrp < -82)
						{
							if(ta < 7.5)
								return 3.57462;
							else
							{
								if(rsrp < -85.5)
									return 5.19483;
								else
								{
									if(payload < 0.55)
										return 11.4286;
									else
										return 15.3551;
								}
							}
						}
						else
						{
							if(rsrp < -76.5)
								return 21.4477;
							else
								return 33.4728;
						}
					}
				}
				else
				{
					if(sinr < 19.5)
						return 160.001;
					else
					{
						if(velocity < 24.63)
						{
							if(rsrq < -5.5)
								return 8.7146;
							else
								return 18.4758;
						}
						else
						{
							if(ta < 17.5)
								return 26.7559;
							else
								return 32.7869;
						}
					}
				}
			}
		}
		else
		{
			if(cell < 13394190)
			{
				if(rsrq < -7.5)
				{
					if(rsrp < -84.5)
					{
						if(velocity < 14.01)
						{
							if(ta < 13.5)
							{
								if(velocity < 2.96)
								{
									if(payload < 4.5)
									{
										if(rsrq < -8.5)
										{
											if(sinr < 20)
												return 18.412;
											else
												return 29.6296;
										}
										else
											return 34.2612;
									}
									else
									{
										if(ta < 9.5)
										{
											if(rsrq < -9.5)
												return 54.3689;
											else
											{
												if(ta < 8.5)
													return 42.7807;
												else
													return 47.0193;
											}
										}
										else
											return 73.9372;
									}
								}
								else
								{
									if(f < 1362.55)
									{
										if(cqi < 9.5)
										{
											if(velocity < 12.525)
												return 35.979;
											else
											{
												if(rsrq < -11)
													return 35.6546;
												else
												{
													if(sinr < 7.5)
														return 33.8344666667;
													else
													{
														if(payload < 5)
															return 29.9252;
														else
															return 24.7022;
													}
												}
											}
										}
										else
										{
											if(sinr < 2)
												return 32.3756;
											else
											{
												if(velocity < 11.8)
												{
													if(rsrp < -88.5)
														return 49.7395306122;
													else
														return 52.2023;
												}
												else
												{
													if(ta < 5)
														return 49.3827;
													else
														return 42.3709306122;
												}
											}
										}
									}
									else
									{
										if(sinr < 8.5)
										{
											if(velocity < 10.915)
											{
												if(cell < 13284104.5)
													return 45.2617;
												else
												{
													if(rsrq < -10.5)
														return 24.5325;
													else
													{
														if(sinr < 5.5)
															return 22.4561;
														else
															return 24.5965;
													}
												}
											}
											else
												return 14.824;
										}
										else
										{
											if(cqi < 13)
											{
												if(payload < 9.5)
												{
													if(payload < 5.5)
													{
														if(cell < 13183243)
															return 31.5956;
														else
															return 34.2857;
													}
													else
													{
														if(rsrp < -88)
															return 38.2775;
														else
															return 40.6321;
													}
												}
												else
													return 28.2386;
											}
											else
											{
												if(rsrp < -89)
													return 37.8788;
												else
													return 52.2023;
											}
										}
									}
								}
							}
							else
							{
								if(f < 1362.55)
								{
									if(rsrp < -89.5)
										return 36.6972;
									else
										return 54.9451;
								}
								else
								{
									if(payload < 8.5)
									{
										if(velocity < 11.795)
										{
											if(sinr < 14)
											{
												if(rsrp < -89.5)
													return 19.3237;
												else
												{
													if(sinr < 8.5)
														return 20.4529;
													else
														return 23.0263;
												}
											}
											else
												return 15.7287;
										}
										else
											return 14.4665;
									}
									else
										return 22.1743;
								}
							}
						}
						else
						{
							if(ta < 12)
							{
								if(cell < 13284611)
								{
									if(velocity < 15.565)
									{
										if(rsrp < -86.5)
											return 26.5869;
										else
											return 22.4719;
									}
									else
										return 14.4665;
								}
								else
								{
									if(rsrp < -91.5)
										return 30.7692;
									else
										return 35.0263;
								}
							}
							else
							{
								if(rsrp < -90.5)
								{
									if(velocity < 15.105)
										return 14.72555;
									else
									{
										if(rsrp < -91.5)
											return 22.2017;
										else
											return 18.6741;
									}
								}
								else
								{
									if(f < 1362.55)
									{
										if(rsrq < -12.5)
											return 12.8077;
										else
											return 9.3367;
									}
									else
										return 3.76176;
								}
							}
						}
					}
					else
					{
						if(velocity < 9.165)
						{
							if(cqi < 14)
							{
								if(ta < 7.5)
								{
									if(payload < 7)
									{
										if(payload < 5.5)
										{
											if(sinr < 15)
												return 80;
											else
												return 74.3494;
										}
										else
											return 68.3761;
									}
									else
									{
										if(rsrp < -79.5)
											return 61.127;
										else
											return 54.2741;
									}
								}
								else
								{
									if(payload < 6.5)
										return 53.0973;
									else
										return 47.2813;
								}
							}
							else
							{
								if(ta < 6)
									return 50.3145;
								else
									return 33.6134;
							}
						}
						else
						{
							if(cell < 13393541.5)
							{
								if(ta < 9)
								{
									if(sinr < -1.5)
										return 45.977;
									else
									{
										if(rsrp < -71.5)
										{
											if(payload < 5.5)
											{
												if(rsrp < -83.5)
													return 35.4296;
												else
												{
													if(sinr < 5)
														return 30.0752;
													else
														return 32.7273666667;
												}
											}
											else
												return 40.5748;
										}
										else
										{
											if(cell < 12973569.5)
												return 37.8474666667;
											else
											{
												if(rsrq < -9.5)
													return 39.8506;
												else
													return 44.9438;
											}
										}
									}
								}
								else
								{
									if(rsrq < -9)
									{
										if(ta < 13.5)
										{
											if(cqi < 9)
												return 24.2319;
											else
												return 32.3363;
										}
										else
											return 12.9576;
									}
									else
										return 42.9338;
								}
							}
							else
							{
								if(rsrq < -10)
									return 38.0048;
								else
									return 82.1566;
							}
						}
					}
				}
				else
				{
					if(payload < 8.5)
					{
						if(ta < 13.5)
						{
							if(velocity < 9.875)
							{
								if(f < 2247.55)
								{
									if(cell < 12973569.5)
									{
										if(payload < 6.5)
										{
											if(sinr < 25)
											{
												if(rsrq < -5.5)
													return 14.892;
												else
													return 26.5957;
											}
											else
												return 40.201;
										}
										else
										{
											if(f < 1362.55)
												return 34.188;
											else
												return 40.4296;
										}
									}
									else
									{
										if(sinr < 28.5)
										{
											if(velocity < 8.945)
											{
												if(sinr < 7)
													return 26.8456;
												else
												{
													if(rsrp < -85.5)
													{
														if(rsrp < -87)
															return 50.6329;
														else
															return 41.4508;
													}
													else
													{
														if(sinr < 12)
														{
															if(rsrp < -82.5)
																return 31.4548;
															else
															{
																if(cell < 13175301.5)
																	return 62.649025;
																else
																	return 55.1724;
															}
														}
														else
														{
															if(payload < 2.5)
															{
																if(rsrq < -6.5)
																	return 63.4921;
																else
																{
																	if(ta < 5.5)
																	{
																		if(sinr < 24.5)
																			return 48.3384;
																		else
																			return 50;
																	}
																	else
																		return 41.9948;
																}
															}
															else
															{
																if(ta < 4.5)
																{
																	if(sinr < 22.5)
																	{
																		if(ta < 2.5)
																			return 54.115;
																		else
																		{
																			if(payload < 7.5)
																			{
																				if(cell < 13074438)
																				{
																					if(rsrp < -81)
																						return 65.7534;
																					else
																					{
																						if(sinr < 21.5)
																							return 72.7273;
																						else
																							return 76.3723;
																					}
																				}
																				else
																				{
																					if(payload < 3.5)
																					{
																						if(rsrp < -70.5)
																							return 62.623025;
																						else
																							return 67.2269;
																					}
																					else
																					{
																						if(rsrp < -80.5)
																							return 65.9341;
																						else
																							return 71.9101;
																					}
																				}
																			}
																			else
																			{
																				if(cqi < 13.5)
																					return 56.1896;
																				else
																					return 59.3142;
																			}
																		}
																	}
																	else
																	{
																		if(payload < 6.5)
																		{
																			if(ta < 3.5)
																			{
																				if(payload < 3.5)
																				{
																					if(rsrq < -6)
																						return 61.5385;
																					else
																						return 63.1579;
																				}
																				else
																					return 47.743725;
																			}
																			else
																			{
																				if(payload < 5)
																					return 61.5385;
																				else
																					return 64.9526;
																			}
																		}
																		else
																		{
																			if(payload < 7.5)
																				return 81.1594;
																			else
																				return 69.0399;
																		}
																	}
																}
																else
																{
																	if(rsrq < -6.5)
																	{
																		if(rsrp < -63)
																		{
																			if(rsrp < -75)
																				return 40.1506;
																			else
																			{
																				if(rsrp < -69.5)
																					return 54.6697;
																				else
																					return 57.4359;
																			}
																		}
																		else
																			return 30.888;
																	}
																	else
																	{
																		if(cell < 13394049.5)
																		{
																			if(rsrp < -67)
																			{
																				if(payload < 7)
																				{
																					if(rsrq < -5.5)
																						return 61.8557;
																					else
																						return 56.7376;
																				}
																				else
																					return 65.5738;
																			}
																			else
																				return 65.1779666667;
																		}
																		else
																		{
																			if(rsrp < -80.5)
																				return 37.8698;
																			else
																				return 63.4202;
																		}
																	}
																}
															}
														}
													}
												}
											}
											else
											{
												if(ta < 7)
												{
													if(cell < 13284741.5)
														return 74.0741;
													else
														return 69.6517;
												}
												else
													return 65.2174;
											}
										}
										else
										{
											if(rsrq < -6.5)
												return 36.6972;
											else
											{
												if(payload < 4.5)
												{
													if(ta < 3)
														return 42.6244074713;
													else
													{
														if(rsrq < -5.5)
															return 47.7612;
														else
														{
															if(sinr < 32)
															{
																if(velocity < 4.815)
																	return 56.1404;
																else
																	return 54.2373;
															}
															else
																return 48.6322;
														}
													}
												}
												else
													return 66.6584436782;
											}
										}
									}
								}
								else
								{
									if(sinr < 22.5)
									{
										if(payload < 2.5)
											return 55.8149626087;
										else
										{
											if(ta < 5.5)
												return 68.7773;
											else
												return 53.83918;
										}
									}
									else
									{
										if(velocity < 1.925)
											return 58.3877;
										else
										{
											if(sinr < 23.5)
												return 82.5806;
											else
												return 90.4685;
										}
									}
								}
							}
							else
							{
								if(sinr < 7)
								{
									if(rsrp < -85.5)
									{
										if(payload < 5.5)
											return 51.9481;
										else
											return 43.3213;
									}
									else
									{
										if(sinr < 2.5)
										{
											if(payload < 7.5)
												return 46.8619;
											else
												return 53.1561;
										}
										else
										{
											if(sinr < 5.5)
											{
												if(payload < 5.5)
													return 67.4536;
												else
													return 71.8563;
											}
											else
												return 78.0488;
										}
									}
								}
								else
								{
									if(cqi < 10.5)
									{
										if(cell < 13394050.5)
										{
											if(rsrq < -5.5)
											{
												if(rsrp < -83.5)
												{
													if(ta < 8.5)
													{
														if(payload < 6.5)
															return 27.0118;
														else
															return 30.1075;
													}
													else
														return 36.94085;
												}
												else
												{
													if(payload < 4)
														return 27.2727;
													else
													{
														if(velocity < 12.895)
														{
															if(f < 1362.55)
																return 39.5795;
															else
																return 42.735;
														}
														else
															return 31.5706;
													}
												}
											}
											else
												return 44.8598;
										}
										else
										{
											if(payload < 6.5)
											{
												if(rsrq < -5.5)
													return 41.7755;
												else
													return 45.8015;
											}
											else
												return 40.4615;
										}
									}
									else
									{
										if(ta < 9.5)
										{
											if(rsrp < -81.5)
											{
												if(payload < 6.5)
												{
													if(rsrp < -82.5)
													{
														if(rsrp < -89.5)
														{
															if(rsrq < -5.5)
															{
																if(velocity < 12.075)
																	return 44.9859;
																else
																	return 48.7805;
															}
															else
																return 41.6233;
														}
														else
														{
															if(velocity < 13.145)
															{
																if(velocity < 11.295)
																	return 67.5105;
																else
																{
																	if(velocity < 12.745)
																		return 57.8915;
																	else
																		return 56.338;
																}
															}
															else
															{
																if(ta < 5)
																{
																	if(cqi < 13.5)
																		return 42.4403;
																	else
																		return 37.5147;
																}
																else
																{
																	if(sinr < 22.5)
																		return 48.3384;
																	else
																	{
																		if(velocity < 14.42)
																			return 58.1818;
																		else
																			return 51.9481;
																	}
																}
															}
														}
													}
													else
													{
														if(sinr < 14.5)
															return 36.3912;
														else
															return 38.7722;
													}
												}
												else
												{
													if(rsrp < -89.5)
														return 31.5138;
													else
													{
														if(rsrp < -85.5)
															return 35.6461;
														else
															return 33.553;
													}
												}
											}
											else
											{
												if(velocity < 11.835)
												{
													if(rsrq < -5.5)
													{
														if(sinr < 28)
														{
															if(sinr < 17.5)
																return 40.5577;
															else
																return 39.2325;
														}
														else
															return 35.6877;
													}
													else
													{
														if(cqi < 12.5)
															return 42.1607;
														else
															return 52.8634;
													}
												}
												else
												{
													if(sinr < 23.5)
													{
														if(velocity < 17.525)
														{
															if(cqi < 11.5)
																return 46.5116;
															else
															{
																if(rsrq < -6.5)
																	return 60.4915;
																else
																{
																	if(sinr < 21.5)
																	{
																		if(ta < 6.5)
																		{
																			if(payload < 4)
																				return 44.5682;
																			else
																				return 46.2428;
																		}
																		else
																			return 50.74;
																	}
																	else
																		return 52.8926;
																}
															}
														}
														else
															return 64.9087;
													}
													else
													{
														if(cell < 13230216)
														{
															if(rsrq < -6.5)
																return 39.0244;
															else
															{
																if(payload < 4.5)
																	return 61.4203;
																else
																	return 55.4785;
															}
														}
														else
														{
															if(rsrq < -5.5)
																return 67.7118666667;
															else
																return 61.5385;
														}
													}
												}
											}
										}
										else
										{
											if(velocity < 13.595)
												return 77.1704;
											else
											{
												if(rsrp < -77.5)
													return 61.3027;
												else
													return 55.1724;
											}
										}
									}
								}
							}
						}
						else
						{
							if(rsrp < -65.5)
							{
								if(rsrp < -80.5)
								{
									if(cqi < 7)
									{
										if(sinr < -2)
											return 3.003;
										else
											return 17.2202;
									}
									else
									{
										if(velocity < 26.055)
										{
											if(cell < 13207685.5)
											{
												if(ta < 17.5)
												{
													if(f < 1362.55)
													{
														if(payload < 3)
															return 33.0579;
														else
														{
															if(rsrq < -5.5)
																return 29.7619;
															else
																return 31.068;
														}
													}
													else
													{
														if(velocity < 3.96)
															return 39.604;
														else
															return 37.325;
													}
												}
												else
													return 48.0274;
											}
											else
												return 19.2154;
										}
										else
										{
											if(cqi < 14.5)
											{
												if(rsrq < -5.5)
												{
													if(rsrp < -88)
														return 29.9786;
													else
														return 34.2246;
												}
												else
													return 23.0548;
											}
											else
											{
												if(payload < 3.5)
													return 18.5471;
												else
													return 15.1086;
											}
										}
									}
								}
								else
								{
									if(velocity < 16.03)
									{
										if(velocity < 14.385)
											return 36.1757;
										else
											return 51.1727;
									}
									else
									{
										if(sinr < 26)
											return 48.823;
										else
										{
											if(sinr < 29.5)
											{
												if(velocity < 21.82)
													return 35.8343;
												else
													return 37.9147;
											}
											else
												return 28.42285;
										}
									}
								}
							}
							else
								return 66.482;
						}
					}
					else
					{
						if(ta < 6.5)
						{
							if(velocity < 7.325)
							{
								if(sinr < 15.5)
								{
									if(payload < 9.5)
										return 79.7342;
									else
										return 109.589;
								}
								else
								{
									if(cqi < 12.5)
									{
										if(rsrp < -84.5)
											return 74.1427;
										else
										{
											if(ta < 4.5)
											{
												if(ta < 3.5)
													return 55.2147;
												else
													return 52.7009;
											}
											else
												return 72.1443;
										}
									}
									else
									{
										if(cell < 13230852.5)
											return 68.7023;
										else
										{
											if(payload < 9.5)
												return 97.8261;
											else
											{
												if(rsrp < -86.5)
													return 92.4855;
												else
													return 79.0514;
											}
										}
									}
								}
							}
							else
							{
								if(velocity < 11.605)
								{
									if(ta < 4.5)
									{
										if(ta < 2.5)
											return 59.3081;
										else
										{
											if(rsrp < -88)
												return 58.8235;
											else
											{
												if(rsrp < -79.5)
													return 51.8471;
												else
													return 47.4308;
											}
										}
									}
									else
										return 45.6621;
								}
								else
								{
									if(sinr < 21.5)
										return 60.251;
									else
									{
										if(rsrq < -5.5)
											return 73.4619;
										else
											return 63.4921;
									}
								}
							}
						}
						else
						{
							if(rsrp < -73.5)
							{
								if(sinr < 13)
								{
									if(ta < 12)
										return 46.4217;
									else
										return 33.5196;
								}
								else
								{
									if(rsrp < -82.5)
									{
										if(velocity < 9.595)
										{
											if(sinr < 18.5)
											{
												if(ta < 13)
													return 58.3942;
												else
													return 60.6061;
											}
											else
											{
												if(sinr < 22)
													return 64.9351;
												else
													return 62.3377;
											}
										}
										else
											return 81.7253;
									}
									else
									{
										if(rsrp < -76)
										{
											if(payload < 9.5)
												return 40.404;
											else
												return 50.2828;
										}
										else
										{
											if(sinr < 23.5)
												return 66.5434;
											else
												return 57.7617;
										}
									}
								}
							}
							else
							{
								if(velocity < 11.45)
								{
									if(sinr < 18)
										return 71.2378;
									else
										return 52.8751;
								}
								else
								{
									if(rsrp < -68.5)
										return 29.6053;
									else
										return 25.1493;
								}
							}
						}
					}
				}
			}
			else
			{
				if(ta < 10.5)
				{
					if(velocity < 16.54)
					{
						if(rsrq < -7.5)
						{
							if(ta < 3.5)
							{
								if(rsrp < -78)
								{
									if(rsrq < -8.5)
									{
										if(rsrp < -81)
										{
											if(cqi < 13)
												return 51.4469;
											else
												return 35.8543;
										}
										else
											return 52.9801;
									}
									else
									{
										if(sinr < -1.5)
											return 37.4707;
										else
										{
											if(payload < 6)
												return 27.0728;
											else
												return 33.67;
										}
									}
								}
								else
								{
									if(velocity < 8.78)
									{
										if(sinr < 13.5)
											return 14.9743;
										else
											return 43.088;
									}
									else
									{
										if(sinr < 11)
											return 13.8737;
										else
										{
											if(rsrq < -8.5)
												return 24.8062;
											else
												return 28.6996;
										}
									}
								}
							}
							else
							{
								if(payload < 7.5)
								{
									if(rsrp < -73.5)
									{
										if(payload < 5.5)
										{
											if(velocity < 13.975)
											{
												if(rsrp < -85)
												{
													if(sinr < 14)
													{
														if(rsrq < -10.5)
															return 34.0426;
														else
															return 35.3982;
													}
													else
													{
														if(sinr < 16.5)
															return 21.5054;
														else
															return 34.4333;
													}
												}
												else
												{
													if(payload < 4.5)
													{
														if(rsrp < -81.5)
															return 30.93405;
														else
															return 34.7323;
													}
													else
													{
														if(sinr < 6)
															return 29.1333;
														else
														{
															if(rsrp < -79)
																return 27.3785;
															else
																return 24.9221;
														}
													}
												}
											}
											else
											{
												if(ta < 5.5)
												{
													if(sinr < 7)
														return 19.6319;
													else
														return 15.8207;
												}
												else
													return 27.1402666667;
											}
										}
										else
										{
											if(velocity < 13.76)
											{
												if(cell < 13472904)
												{
													if(sinr < 16.5)
														return 20.3555;
													else
														return 15.1147;
												}
												else
													return 8.79282;
											}
											else
											{
												if(f < 2247.55)
													return 18.773;
												else
												{
													if(sinr < 12.5)
														return 32.0213;
													else
														return 27.8192;
												}
											}
										}
									}
									else
										return 47.619;
								}
								else
								{
									if(rsrp < -76)
									{
										if(payload < 8.5)
										{
											if(rsrp < -86.5)
												return 28.8418;
											else
											{
												if(sinr < 21.5)
													return 14.9184;
												else
													return 18.4811;
											}
										}
										else
										{
											if(velocity < 10.31)
											{
												if(payload < 9.5)
												{
													if(velocity < 4.305)
														return 33.9463;
													else
														return 23.6842;
												}
												else
												{
													if(ta < 6.5)
														return 25.1572;
													else
														return 22.0083;
												}
											}
											else
											{
												if(rsrq < -9)
													return 40.7539;
												else
													return 44.0098;
											}
										}
									}
									else
										return 44.9123;
								}
							}
						}
						else
						{
							if(rsrp < -70.5)
							{
								if(sinr < 6.5)
								{
									if(ta < 6)
									{
										if(payload < 7.5)
										{
											if(rsrp < -81)
												return 16.444;
											else
												return 18.4829;
										}
										else
											return 26.7857;
									}
									else
										return 55.1724;
								}
								else
								{
									if(payload < 4.5)
									{
										if(velocity < 12.005)
										{
											if(velocity < 11.44)
											{
												if(cqi < 11)
												{
													if(velocity < 4.995)
														return 36.7534;
													else
														return 33.195;
												}
												else
												{
													if(rsrq < -6.5)
														return 46.3768;
													else
														return 44.4444;
												}
											}
											else
											{
												if(rsrp < -84)
													return 14.4862;
												else
													return 24.024;
											}
										}
										else
										{
											if(cqi < 11)
												return 32.2906;
											else
											{
												if(payload < 3)
													return 63.2411;
												else
													return 58.8235;
											}
										}
									}
									else
									{
										if(f < 1362.55)
										{
											if(cqi < 9.5)
											{
												if(rsrp < -89.5)
													return 45.6853;
												else
													return 57.7386;
											}
											else
											{
												if(cqi < 11.5)
												{
													if(rsrp < -89)
														return 27.3038;
													else
														return 15.3286;
												}
												else
												{
													if(rsrp < -84.5)
														return 20.8454;
													else
													{
														if(payload < 7.5)
														{
															if(sinr < 25.5)
																return 39.4922;
															else
																return 42.6829;
														}
														else
														{
															if(cqi < 13.5)
																return 32.2581;
															else
															{
																if(rsrq < -6.5)
																	return 37.9310666667;
																else
																	return 35.538;
															}
														}
													}
												}
											}
										}
										else
										{
											if(f < 2247.55)
												return 58.6387;
											else
											{
												if(sinr < 17)
												{
													if(sinr < 12.5)
													{
														if(payload < 7.5)
														{
															if(payload < 6.5)
															{
																if(rsrp < -83.5)
																	return 42.7807;
																else
																	return 44.2804;
															}
															else
																return 37.9404;
														}
														else
															return 51.8639;
													}
													else
													{
														if(velocity < 11.95)
														{
															if(cqi < 13.5)
																return 56.0748;
															else
																return 62.5815;
														}
														else
															return 50.7246;
													}
												}
												else
												{
													if(rsrq < -5.5)
													{
														if(cell < 13462542.5)
															return 46.0299;
														else
															return 42.7807;
													}
													else
														return 36.6342;
												}
											}
										}
									}
								}
							}
							else
							{
								if(rsrp < -69.5)
								{
									if(rsrq < -6.5)
										return 79.1209;
									else
										return 60.8365;
								}
								else
									return 59.7758;
							}
						}
					}
					else
					{
						if(payload < 5.5)
						{
							if(velocity < 36.865)
							{
								if(cell < 13405314)
								{
									if(payload < 2.5)
										return 5.7971;
									else
										return 7.50118;
								}
								else
									return 10.2729;
							}
							else
							{
								if(rsrq < -6.5)
									return 22.7434;
								else
									return 10.1497;
							}
						}
						else
						{
							if(rsrq < -7)
							{
								if(velocity < 35.71)
								{
									if(rsrp < -86)
										return 23.7301;
									else
										return 26.0728;
								}
								else
									return 35.488;
							}
							else
							{
								if(rsrp < -81)
								{
									if(sinr < 7.5)
										return 39.768;
									else
									{
										if(cqi < 12)
											return 15.3551;
										else
											return 23.166;
									}
								}
								else
								{
									if(payload < 9)
									{
										if(rsrq < -5.5)
											return 9.375;
										else
											return 13.1022333333;
									}
									else
										return 21.2033;
								}
							}
						}
					}
				}
				else
				{
					if(payload < 3.5)
					{
						if(cqi < 8.5)
							return 0.299373;
						else
						{
							if(cell < 13523587)
							{
								if(sinr < 0.5)
									return 7.98403;
								else
									return 6.26141;
							}
							else
							{
								if(rsrq < -8)
									return 19.0779;
								else
								{
									if(payload < 2.5)
										return 13.5135;
									else
										return 14.944;
								}
							}
						}
					}
					else
					{
						if(velocity < 34.255)
						{
							if(ta < 20.5)
							{
								if(cell < 13459458)
								{
									if(rsrq < -6.5)
									{
										if(rsrp < -87.5)
											return 30.7692;
										else
										{
											if(cqi < 7.5)
												return 30.7811;
											else
												return 28.3688;
										}
									}
									else
										return 34.188;
								}
								else
								{
									if(velocity < 12.465)
									{
										if(rsrp < -86.5)
											return 22.4281;
										else
											return 15.6517;
									}
									else
									{
										if(cell < 13523587)
											return 17.4027;
										else
										{
											if(sinr < 7.5)
											{
												if(cell < 13532290)
													return 34.5572;
												else
													return 29.0276;
											}
											else
												return 26.1769666667;
										}
									}
								}
							}
							else
							{
								if(ta < 28.5)
								{
									if(sinr < 7)
										return 13.65915;
									else
										return 8.57858;
								}
								else
									return 32.0481;
							}
						}
						else
						{
							if(cell < 13395457.5)
							{
								if(payload < 9)
									return 48.5216;
								else
									return 22.5797;
							}
							else
							{
								if(rsrq < -15)
									return 1.39126;
								else
								{
									if(rsrp < -89.5)
										return 5.75126;
									else
									{
										if(sinr < 2)
											return 6.63656;
										else
											return 8.09819;
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

float vodafone_dl_tree_8(float payload, float rsrp, float rsrq, float sinr, float cqi, float ta, float velocity, float cell, float f)
{
	if(sinr < 9.5)
	{
		if(sinr < 3.5)
		{
			if(rsrq < -11.5)
			{
				if(cell < 13211141)
				{
					if(rsrp < -106.5)
					{
						if(ta < 13)
							return 23.4604;
						else
						{
							if(cell < 12936970)
							{
								if(payload < 8.5)
								{
									if(velocity < 4.82)
									{
										if(velocity < 1.23)
										{
											if(payload < 3.5)
												return 17.2538;
											else
											{
												if(payload < 5.5)
													return 11.1927;
												else
													return 9.7612;
											}
										}
										else
											return 17.316;
									}
									else
									{
										if(velocity < 10.79)
										{
											if(payload < 4.5)
											{
												if(payload < 0.75)
													return 2.21852;
												else
													return 3.70862;
											}
											else
												return 5.828495;
										}
										else
										{
											if(rsrq < -12.5)
												return 10.3348;
											else
												return 3.73367;
										}
									}
								}
								else
								{
									if(cqi < 7)
										return 16.7434;
									else
										return 15.0031;
								}
							}
							else
							{
								if(payload < 2)
								{
									if(rsrq < -14.5)
										return 3.53984;
									else
										return 2.1090066667;
								}
								else
								{
									if(payload < 4.5)
										return 11.0855;
									else
									{
										if(rsrp < -112.5)
										{
											if(cqi < 7)
												return 4.76555;
											else
												return 3.19598;
										}
										else
										{
											if(payload < 8)
												return 5.9828;
											else
												return 8.15661;
										}
									}
								}
							}
						}
					}
					else
					{
						if(ta < 17.5)
						{
							if(rsrp < -99.5)
							{
								if(cell < 12914565.5)
									return 30.7495;
								else
								{
									if(rsrp < -103)
										return 32.6697;
									else
										return 34.9091;
								}
							}
							else
							{
								if(payload < 4)
									return 12.9032;
								else
								{
									if(sinr < -6.5)
										return 26.7048;
									else
										return 23.5294;
								}
							}
						}
						else
						{
							if(sinr < 1.5)
								return 21.9608;
							else
							{
								if(payload < 4.05)
									return 10.3897;
								else
								{
									if(ta < 44.5)
										return 12.8077;
									else
										return 14.7126;
								}
							}
						}
					}
				}
				else
				{
					if(ta < 5.5)
					{
						if(cell < 13680519.5)
						{
							if(velocity < 11.245)
							{
								if(payload < 6.5)
									return 17.316;
								else
									return 22.575;
							}
							else
							{
								if(payload < 7)
								{
									if(rsrp < -97)
										return 35.5556;
									else
										return 33.9943;
								}
								else
									return 28.6225;
							}
						}
						else
						{
							if(payload < 4.5)
							{
								if(velocity < 4.735)
									return 24.5399;
								else
									return 21.178;
							}
							else
							{
								if(payload < 7.5)
									return 4.58243;
								else
									return 11.0193;
							}
						}
					}
					else
					{
						if(rsrp < -103.5)
						{
							if(f < 1362.55)
							{
								if(ta < 32.5)
								{
									if(rsrq < -20.5)
									{
										if(velocity < 27.285)
											return 8.35073;
										else
											return 9.75907;
									}
									else
									{
										if(payload < 1.5)
										{
											if(rsrq < -16.5)
												return 0.3260880554;
											else
											{
												if(cqi < 7.5)
												{
													if(payload < 0.3)
													{
														if(cell < 13246977.5)
														{
															if(sinr < 2)
																return 0.0424;
															else
																return 3.86475;
														}
														else
															return 0.5710724791;
													}
													else
													{
														if(cell < 13320706.5)
															return 0.62442475;
														else
														{
															if(ta < 17)
															{
																if(cell < 13404802.5)
																{
																	if(rsrq < -15.5)
																		return 2.57069;
																	else
																		return 1.091266;
																}
																else
																	return 0.6382351667;
															}
															else
															{
																if(ta < 27)
																{
																	if(velocity < 17.045)
																		return 4.041715;
																	else
																		return 7.0676;
																}
																else
																	return 2.02224;
															}
														}
													}
												}
												else
												{
													if(sinr < 2)
													{
														if(rsrp < -108)
															return 3.97812;
														else
															return 1.514;
													}
													else
														return 8.24742;
												}
											}
										}
										else
										{
											if(ta < 12.5)
											{
												if(sinr < 0)
												{
													if(payload < 5.5)
													{
														if(rsrp < -107.5)
														{
															if(payload < 4.5)
																return 10.7853;
															else
																return 4.37828;
														}
														else
														{
															if(payload < 4.5)
															{
																if(cell < 13324417.5)
																	return 3.38648;
																else
																{
																	if(rsrq < -12.5)
																		return 0.234298;
																	else
																		return 2.0574375862;
																}
															}
															else
																return 6.70354;
														}
													}
													else
													{
														if(ta < 6.5)
															return 3.17767;
														else
														{
															if(cqi < 4.5)
																return 2.2575;
															else
																return 0.6025864444;
														}
													}
												}
												else
												{
													if(velocity < 14.75)
													{
														if(payload < 5.5)
															return 13.0826;
														else
															return 15.2091;
													}
													else
														return 5.62522;
												}
											}
											else
											{
												if(rsrp < -111.5)
												{
													if(velocity < 30.95)
													{
														if(sinr < -2.5)
															return 2.3159968675;
														else
															return 1.1209669091;
													}
													else
														return 0.497203;
												}
												else
												{
													if(ta < 25.5)
													{
														if(velocity < 3.54)
														{
															if(payload < 7)
															{
																if(sinr < -9.5)
																	return 8.81057;
																else
																{
																	if(velocity < 0.425)
																		return 5.83516;
																	else
																		return 3.06421;
																}
															}
															else
																return 11.7799;
														}
														else
														{
															if(ta < 20)
															{
																if(sinr < -5)
																	return 0.79323125;
																else
																{
																	if(sinr < -3.5)
																		return 5.31032;
																	else
																	{
																		if(payload < 4.5)
																		{
																			if(rsrq < -14.5)
																			{
																				if(rsrp < -106)
																					return 0.5813695;
																				else
																					return 2.138855;
																			}
																			else
																				return 2.48713;
																		}
																		else
																		{
																			if(cell < 13415426.5)
																			{
																				if(cell < 13404930.5)
																				{
																					if(payload < 6.5)
																						return 3.896975;
																					else
																					{
																						if(rsrq < -13.5)
																						{
																							if(rsrp < -105.5)
																								return 3.91675;
																							else
																								return 2.57175875;
																						}
																						else
																							return 1.895555;
																					}
																				}
																				else
																					return 1.13973;
																			}
																			else
																			{
																				if(cqi < 5.5)
																					return 2.37253;
																				else
																					return 11.6861;
																			}
																		}
																	}
																}
															}
															else
															{
																if(cqi < 6.5)
																{
																	if(rsrp < -109.5)
																	{
																		if(rsrq < -15.5)
																			return 6.13615;
																		else
																			return 1.3173063333;
																	}
																	else
																		return 1.097867125;
																}
																else
																{
																	if(velocity < 29.945)
																	{
																		if(rsrq < -13.5)
																			return 3.597775;
																		else
																		{
																			if(sinr < 1.5)
																				return 2.3582066667;
																			else
																				return 1.111136;
																		}
																	}
																	else
																		return 0.44082;
																}
															}
														}
													}
													else
													{
														if(rsrp < -107)
															return 4.93599;
														else
															return 9.04466;
													}
												}
											}
										}
									}
								}
								else
								{
									if(rsrp < -107)
									{
										if(rsrp < -108.5)
										{
											if(sinr < -1)
												return 3.32818;
											else
												return 9.02425;
										}
										else
											return 0.658355;
									}
									else
									{
										if(cqi < 7.5)
											return 23.988;
										else
											return 15.261125;
									}
								}
							}
							else
							{
								if(payload < 1.5)
								{
									if(ta < 15.5)
									{
										if(sinr < -1.5)
										{
											if(rsrp < -109.5)
												return 10.568;
											else
												return 4.03633;
										}
										else
											return 11.9048;
									}
									else
									{
										if(rsrp < -112.5)
										{
											if(velocity < 11.91)
												return 0.260705625;
											else
												return 1.6631212121;
										}
										else
											return 4;
									}
								}
								else
								{
									if(payload < 8.5)
									{
										if(sinr < -6.5)
										{
											if(rsrp < -110.5)
												return 3.6050107692;
											else
												return 1.73536;
										}
										else
										{
											if(cell < 13393547.5)
											{
												if(rsrq < -14.5)
													return 18.5701;
												else
												{
													if(velocity < 0.81)
													{
														if(sinr < -1.5)
															return 15.1654;
														else
															return 13.8614;
													}
													else
													{
														if(rsrp < -108.5)
														{
															if(rsrp < -115)
																return 4.08789;
															else
															{
																if(ta < 19.5)
																	return 5.37634;
																else
																{
																	if(rsrp < -113)
																		return 7.37735;
																	else
																		return 11.1982;
																}
															}
														}
														else
															return 11.8081;
													}
												}
											}
											else
											{
												if(velocity < 13.085)
												{
													if(cqi < 7.5)
														return 15.0517;
													else
														return 20.64425;
												}
												else
													return 2.14133;
											}
										}
									}
									else
										return 21.4158;
								}
							}
						}
						else
						{
							if(payload < 5.5)
							{
								if(ta < 12.5)
								{
									if(ta < 8)
									{
										if(payload < 0.75)
										{
											if(ta < 6.5)
												return 8.28157;
											else
											{
												if(cqi < 8.5)
												{
													if(sinr < -4)
														return 3.98011;
													else
														return 5.81395;
												}
												else
													return 1.50094;
											}
										}
										else
										{
											if(rsrq < -13)
												return 8.83002;
											else
												return 12.2511;
										}
									}
									else
									{
										if(rsrp < -96.5)
										{
											if(ta < 10.5)
											{
												if(velocity < 7.16)
													return 9.63859;
												else
													return 13.6054;
											}
											else
											{
												if(rsrp < -99.5)
													return 5.08906;
												else
													return 0.987658;
											}
										}
										else
											return 19.77405;
									}
								}
								else
								{
									if(velocity < 14.95)
									{
										if(payload < 4.5)
										{
											if(cell < 13532290)
											{
												if(ta < 17.5)
												{
													if(rsrq < -13.5)
													{
														if(payload < 2)
															return 0.436443;
														else
															return 2.15692;
													}
													else
													{
														if(cell < 13463298)
														{
															if(ta < 13.5)
																return 2.68097;
															else
																return 7.3783866667;
														}
														else
															return 2.50627;
													}
												}
												else
													return 0.5471956923;
											}
											else
												return 10.7095;
										}
										else
										{
											if(rsrp < -102.5)
												return 21.4938;
											else
											{
												if(cqi < 5.5)
													return 3.26557;
												else
													return 5.6887866667;
											}
										}
									}
									else
									{
										if(payload < 2.5)
										{
											if(ta < 14)
											{
												if(payload < 0.75)
													return 5.44218;
												else
													return 1.30018;
											}
											else
											{
												if(velocity < 16.44)
												{
													if(velocity < 16.18)
														return 19.802;
													else
														return 18.4332;
												}
												else
												{
													if(payload < 1.05)
													{
														if(rsrp < -96.5)
															return 1.49254;
														else
															return 8.51067;
													}
													else
														return 12.2231;
												}
											}
										}
										else
										{
											if(velocity < 16.14)
												return 6.524075;
											else
											{
												if(velocity < 37.645)
												{
													if(payload < 4.5)
													{
														if(rsrq < -12.5)
														{
															if(ta < 28)
															{
																if(rsrq < -13.5)
																	return 3.5652025;
																else
																{
																	if(rsrp < -99)
																		return 3.54531;
																	else
																		return 1.80845;
																}
															}
															else
																return 1.73913;
														}
														else
															return 1.00129875;
													}
													else
														return 4.465415;
												}
												else
													return 7.52115;
											}
										}
									}
								}
							}
							else
							{
								if(cell < 13394179)
								{
									if(ta < 18)
									{
										if(velocity < 4.5)
											return 2.57459;
										else
										{
											if(rsrq < -13.5)
												return 32.76;
											else
											{
												if(velocity < 14.76)
												{
													if(payload < 9.5)
														return 28.7081;
													else
														return 26.9088;
												}
												else
													return 23.9252;
											}
										}
									}
									else
									{
										if(rsrq < -12.5)
										{
											if(rsrp < -99.5)
												return 1.65741;
											else
												return 8.75082;
										}
										else
											return 20.1005;
									}
								}
								else
								{
									if(sinr < -10.5)
										return 22.0907;
									else
									{
										if(rsrq < -13.5)
										{
											if(ta < 23.5)
												return 1.440697;
											else
												return 3.76353;
										}
										else
										{
											if(ta < 9.5)
											{
												if(velocity < 15.74)
												{
													if(cell < 13932802.5)
														return 16.9402;
													else
													{
														if(payload < 9)
														{
															if(sinr < -4.5)
																return 9.03827;
															else
																return 11.0913;
														}
														else
														{
															if(rsrq < -12.5)
																return 18.7047;
															else
																return 13.7268;
														}
													}
												}
												else
													return 6.04556;
											}
											else
											{
												if(cell < 13527938)
												{
													if(velocity < 14.175)
														return 15.1181;
													else
													{
														if(cell < 13405441.5)
														{
															if(sinr < 1.5)
															{
																if(payload < 8.5)
																	return 7.7821;
																else
																{
																	if(cqi < 5)
																		return 6.49403;
																	else
																		return 5.21716;
																}
															}
															else
																return 2.017225;
														}
														else
														{
															if(payload < 9)
															{
																if(cell < 13415426.5)
																	return 0.376044;
																else
																{
																	if(rsrq < -12.5)
																		return 2.9815033333;
																	else
																		return 4.99376;
																}
															}
															else
																return 5.92329;
														}
													}
												}
												else
													return 15.543;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else
			{
				if(ta < 11.5)
				{
					if(payload < 1.5)
					{
						if(cqi < 5.5)
						{
							if(payload < 0.75)
								return 39.2157;
							else
								return 17.8174;
						}
						else
						{
							if(velocity < 5.775)
							{
								if(payload < 0.3)
									return 13.3334;
								else
								{
									if(rsrq < -7)
									{
										if(cqi < 6.5)
											return 21.8579;
										else
										{
											if(cqi < 7.5)
												return 29.1971;
											else
											{
												if(rsrq < -10.5)
													return 28.0702;
												else
													return 25.72585;
											}
										}
									}
									else
										return 15.2672;
								}
							}
							else
							{
								if(rsrp < -107.5)
								{
									if(cell < 13612039.5)
										return 0.630367;
									else
										return 7.47666;
								}
								else
								{
									if(cqi < 9.5)
									{
										if(ta < 6.5)
										{
											if(rsrp < -90.5)
												return 15.625;
											else
												return 12.8074;
										}
										else
										{
											if(velocity < 12.165)
											{
												if(rsrp < -98.5)
													return 2.09314;
												else
													return 3.49694;
											}
											else
											{
												if(payload < 0.55)
													return 10.6667;
												else
													return 4.21053;
											}
										}
									}
									else
									{
										if(rsrp < -88.5)
										{
											if(payload < 0.3)
												return 14.2858;
											else
											{
												if(sinr < 2.5)
													return 27.5862;
												else
												{
													if(payload < 0.75)
														return 18.8679;
													else
														return 17.2414;
												}
											}
										}
										else
										{
											if(payload < 0.55)
												return 6.25002;
											else
												return 8.29876;
										}
									}
								}
							}
						}
					}
					else
					{
						if(rsrp < -116.5)
							return 56.7376;
						else
						{
							if(cell < 13394824)
							{
								if(rsrp < -93)
								{
									if(ta < 8.5)
									{
										if(rsrp < -108)
										{
											if(rsrp < -113.5)
												return 11.583;
											else
												return 14.3369;
										}
										else
										{
											if(rsrq < -10.5)
											{
												if(ta < 7.5)
												{
													if(rsrp < -97)
														return 30.8483;
													else
														return 40.6091;
												}
												else
													return 30.5732;
											}
											else
											{
												if(payload < 9)
												{
													if(sinr < -1)
														return 31.5375;
													else
													{
														if(cell < 13175553.5)
															return 21.7613;
														else
															return 24.3545714286;
													}
												}
												else
													return 12.9492;
											}
										}
									}
									else
									{
										if(rsrq < -9.5)
										{
											if(cell < 13230725)
											{
												if(velocity < 12.88)
													return 37.9147;
												else
													return 39.3314;
											}
											else
											{
												if(payload < 4.5)
													return 25.8065;
												else
													return 32.8446;
											}
										}
										else
										{
											if(rsrp < -96.5)
											{
												if(rsrp < -98.5)
												{
													if(payload < 6)
														return 29.3758;
													else
														return 25.5954;
												}
												else
													return 18.1406;
											}
											else
												return 35.1097;
										}
									}
								}
								else
								{
									if(velocity < 14.17)
									{
										if(cqi < 8)
										{
											if(sinr < -1.5)
												return 24.2319;
											else
												return 19.9572;
										}
										else
										{
											if(ta < 3.5)
												return 51.9106;
											else
											{
												if(velocity < 13.55)
												{
													if(rsrp < -86.5)
													{
														if(rsrq < -7.5)
															return 40.3277;
														else
															return 43.3213;
													}
													else
														return 36.7816;
												}
												else
													return 30.7397;
											}
										}
									}
									else
									{
										if(sinr < 1.5)
											return 46.2719666667;
										else
											return 53.4329666667;
									}
								}
							}
							else
							{
								if(velocity < 8.44)
								{
									if(ta < 8.5)
									{
										if(payload < 6)
										{
											if(rsrp < -97)
												return 43.956;
											else
												return 60.1504;
										}
										else
										{
											if(sinr < -3.5)
												return 38.3234;
											else
												return 23.2751;
										}
									}
									else
									{
										if(cqi < 8.5)
										{
											if(rsrp < -92.5)
											{
												if(cell < 13532419)
													return 35.7942;
												else
													return 37.3614;
											}
											else
												return 22.8702;
										}
										else
											return 17.3661;
									}
								}
								else
								{
									if(payload < 3.5)
									{
										if(rsrq < -10)
										{
											if(cell < 13622658)
												return 1.84502;
											else
												return 4.9505;
										}
										else
											return 17.7778;
									}
									else
									{
										if(rsrp < -99.5)
										{
											if(sinr < 2)
												return 15.403475;
											else
											{
												if(payload < 8)
													return 9.48804;
												else
													return 2.04473;
											}
										}
										else
										{
											if(sinr < -4.5)
												return 26.3588;
											else
											{
												if(rsrp < -95.5)
												{
													if(rsrq < -10.5)
													{
														if(rsrp < -97.5)
															return 16.8168;
														else
															return 21.3144;
													}
													else
													{
														if(velocity < 12.65)
															return 28.1889;
														else
														{
															if(payload < 7)
																return 20.0501;
															else
															{
																if(rsrq < -9)
																	return 23.9234;
																else
																	return 22.1852;
															}
														}
													}
												}
												else
												{
													if(rsrp < -82)
													{
														if(sinr < 0.5)
														{
															if(rsrq < -9.5)
															{
																if(payload < 6.5)
																	return 15.9808;
																else
																	return 18.42695;
															}
															else
															{
																if(rsrp < -92.5)
																	return 26.2834;
																else
																	return 19.0749;
															}
														}
														else
														{
															if(sinr < 1.5)
																return 12.2407;
															else
																return 16.609;
														}
													}
													else
													{
														if(rsrp < -79)
															return 29.1333;
														else
															return 18.4829;
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
				else
				{
					if(cell < 13044869)
					{
						if(velocity < 4.805)
						{
							if(sinr < 1.5)
							{
								if(rsrp < -105)
								{
									if(velocity < 2.105)
										return 26.3158;
									else
										return 23.5294;
								}
								else
								{
									if(payload < 7.5)
										return 31.7041;
									else
										return 29.7275;
								}
							}
							else
							{
								if(rsrp < -110.5)
									return 11.3621;
								else
									return 23.3918;
							}
						}
						else
						{
							if(payload < 8.5)
							{
								if(velocity < 11.8)
								{
									if(sinr < 2.5)
									{
										if(payload < 6)
										{
											if(rsrq < -10.5)
												return 10.8992;
											else
												return 14.69268;
										}
										else
											return 7.67202;
									}
									else
										return 7.23327;
								}
								else
								{
									if(velocity < 13.75)
									{
										if(cqi < 5.5)
											return 30.4472;
										else
										{
											if(sinr < -2.5)
											{
												if(cqi < 14.5)
													return 12.1213;
												else
													return 20.5129;
											}
											else
											{
												if(sinr < -1.5)
													return 25.2632;
												else
												{
													if(cqi < 6.5)
														return 21.9007;
													else
													{
														if(rsrq < -10.5)
															return 16.2885;
														else
															return 20.0892;
													}
												}
											}
										}
									}
									else
									{
										if(sinr < 1.5)
										{
											if(velocity < 14.94)
												return 11.194225;
											else
											{
												if(rsrq < -10.5)
													return 21.1161;
												else
												{
													if(payload < 5.5)
														return 13.3407;
													else
														return 15.2745;
												}
											}
										}
										else
										{
											if(payload < 5)
												return 22.0588;
											else
												return 17.2202;
										}
									}
								}
							}
							else
							{
								if(ta < 17.5)
								{
									if(velocity < 14.405)
									{
										if(cqi < 10)
										{
											if(cqi < 8)
												return 21.1206;
											else
											{
												if(velocity < 12.67)
													return 25.4148;
												else
													return 23.76;
											}
										}
										else
											return 19.0577;
									}
									else
										return 15.8346;
								}
								else
								{
									if(rsrp < -105)
										return 29.138;
									else
										return 31.9149;
								}
							}
						}
					}
					else
					{
						if(rsrp < -86.5)
						{
							if(payload < 3.5)
							{
								if(velocity < 15.7)
								{
									if(cqi < 9.5)
									{
										if(rsrp < -109.5)
										{
											if(cell < 13393670.5)
											{
												if(payload < 0.75)
												{
													if(rsrp < -114)
														return 7.70713;
													else
													{
														if(cqi < 8)
														{
															if(sinr < 1.5)
															{
																if(cqi < 5.5)
																	return 4.25534;
																else
																	return 1.68708;
															}
															else
																return 5.75542;
														}
														else
														{
															if(ta < 15.5)
																return 4.96896;
															else
															{
																if(rsrp < -110.5)
																	return 10.2302;
																else
																	return 4.6243;
															}
														}
													}
												}
												else
												{
													if(ta < 16.5)
													{
														if(velocity < 11.97)
															return 10.1964333333;
														else
														{
															if(velocity < 12.95)
																return 2.56109;
															else
																return 6.90846;
														}
													}
													else
													{
														if(ta < 20.5)
														{
															if(ta < 18.5)
																return 14.0598;
															else
																return 16.7715;
														}
														else
															return 5.70342;
													}
												}
											}
											else
												return 1.7021005;
										}
										else
										{
											if(cell < 13323908.5)
											{
												if(sinr < 1)
												{
													if(ta < 23.5)
														return 6.033945;
													else
														return 4.76758;
												}
												else
													return 9.23254;
											}
											else
											{
												if(payload < 1.5)
												{
													if(velocity < 6.895)
														return 8.004788;
													else
													{
														if(cqi < 6.5)
															return 8.319605;
														else
														{
															if(cqi < 7.5)
																return 11.7647;
															else
																return 13.3694333333;
														}
													}
												}
												else
												{
													if(payload < 2.5)
														return 17.6018;
													else
														return 15.3945;
												}
											}
										}
									}
									else
									{
										if(payload < 1.5)
											return 7.58294;
										else
										{
											if(rsrp < -91)
												return 14.46086;
											else
												return 16.5631;
										}
									}
								}
								else
								{
									if(sinr < -1.5)
									{
										if(cqi < 6.5)
										{
											if(payload < 0.55)
												return 0.091013;
											else
												return 3.367;
										}
										else
										{
											if(sinr < -7.5)
												return 6.01956;
											else
											{
												if(payload < 0.55)
													return 7.50378875;
												else
												{
													if(payload < 2)
														return 9.59233;
													else
														return 7.98403;
												}
											}
										}
									}
									else
									{
										if(f < 2247.55)
										{
											if(rsrp < -93.5)
											{
												if(ta < 18.5)
													return 0.6571745;
												else
												{
													if(cqi < 7)
														return 0.77781925;
													else
														return 2.43977;
												}
											}
											else
												return 3.7740633333;
										}
										else
											return 8.79124;
									}
								}
							}
							else
							{
								if(payload < 5.5)
								{
									if(cell < 13406338)
									{
										if(rsrp < -110.5)
										{
											if(velocity < 7.16)
											{
												if(ta < 20.5)
												{
													if(sinr < -0.5)
														return 13.1926;
													else
														return 16.3182;
												}
												else
													return 19.4884;
											}
											else
											{
												if(rsrq < -10.5)
													return 2.82511;
												else
													return 15.9363;
											}
										}
										else
										{
											if(cqi < 7.5)
											{
												if(cell < 13285634)
													return 18.6741;
												else
													return 22.2942;
											}
											else
											{
												if(rsrp < -105)
												{
													if(sinr < -2.5)
														return 28.5459;
													else
														return 31.8725;
												}
												else
												{
													if(ta < 25.5)
													{
														if(rsrp < -94.5)
															return 25.2167;
														else
															return 28.3688;
													}
													else
														return 17.1858;
												}
											}
										}
									}
									else
									{
										if(rsrp < -106.5)
											return 1.0777;
										else
											return 5.63777;
									}
								}
								else
								{
									if(f < 1362.55)
									{
										if(cell < 13470339)
										{
											if(rsrp < -107.5)
											{
												if(rsrq < -10.5)
												{
													if(ta < 23.5)
													{
														if(payload < 9)
															return 4.09836;
														else
															return 2.85012;
													}
													else
														return 1.54247;
												}
												else
													return 1.21768;
											}
											else
											{
												if(velocity < 14.78)
												{
													if(sinr < 2.5)
													{
														if(cqi < 5.5)
															return 3.09637;
														else
														{
															if(sinr < -1)
																return 4.18566;
															else
																return 5.864555;
														}
													}
													else
														return 8.71341;
												}
												else
												{
													if(ta < 22)
													{
														if(velocity < 26.805)
															return 5.999;
														else
															return 9.409;
													}
													else
														return 12.954;
												}
											}
										}
										else
										{
											if(rsrq < -7.5)
												return 17.6956333333;
											else
												return 6.63656;
										}
									}
									else
									{
										if(cell < 13067273.5)
											return 1.69444;
										else
										{
											if(rsrp < -111.5)
											{
												if(velocity < 5.495)
													return 14.2507;
												else
												{
													if(cell < 13392905.5)
														return 6.22084;
													else
														return 3.35045;
												}
											}
											else
											{
												if(velocity < 4.335)
												{
													if(rsrp < -107.5)
													{
														if(payload < 8.5)
														{
															if(rsrp < -109.5)
																return 26.305;
															else
																return 21.1921;
														}
														else
														{
															if(rsrq < -9.5)
																return 14.1315;
															else
																return 23.6998;
														}
													}
													else
														return 28.2686;
												}
												else
												{
													if(sinr < 2.5)
													{
														if(sinr < -3.5)
															return 25.9019;
														else
														{
															if(rsrp < -99)
															{
																if(sinr < 0.5)
																	return 13.4822;
																else
																	return 15.2478;
															}
															else
																return 19.3237;
														}
													}
													else
														return 5.57578;
												}
											}
										}
									}
								}
							}
						}
						else
							return 41.4508;
					}
				}
			}
		}
		else
		{
			if(rsrp < -84.5)
			{
				if(velocity < 14.505)
				{
					if(rsrq < -11.5)
					{
						if(payload < 4.5)
						{
							if(rsrp < -94)
							{
								if(ta < 19.5)
								{
									if(rsrq < -12.5)
									{
										if(payload < 0.75)
											return 11.5942;
										else
										{
											if(sinr < 5)
												return 6.400275;
											else
												return 5.22193;
										}
									}
									else
										return 14.0845;
								}
								else
								{
									if(sinr < 7)
										return 0.6669541429;
									else
										return 7.15564;
								}
							}
							else
								return 30.1887;
						}
						else
						{
							if(sinr < 4.5)
							{
								if(rsrp < -108.5)
									return 8.34928;
								else
								{
									if(payload < 7.5)
										return 22.6812;
									else
									{
										if(rsrq < -12.5)
											return 48.4848;
										else
											return 34.097;
									}
								}
							}
							else
							{
								if(rsrp < -91.5)
								{
									if(cell < 12936970)
										return 17.9843;
									else
									{
										if(rsrq < -12.5)
										{
											if(cqi < 10)
											{
												if(cell < 13416194.5)
												{
													if(cqi < 6.5)
														return 4.8342;
													else
														return 2.9548266667;
												}
												else
													return 0.919106;
											}
											else
												return 12.6858;
										}
										else
										{
											if(payload < 7)
												return 25.6904;
											else
												return 9.9695025;
										}
									}
								}
								else
									return 24.3161;
							}
						}
					}
					else
					{
						if(payload < 0.75)
						{
							if(velocity < 11.205)
							{
								if(ta < 15)
								{
									if(payload < 0.3)
									{
										if(rsrp < -93)
											return 8.9888;
										else
											return 13.1148;
									}
									else
									{
										if(cqi < 10)
											return 17.32;
										else
										{
											if(sinr < 6.5)
												return 22.0589333333;
											else
												return 20.5128;
										}
									}
								}
								else
								{
									if(sinr < 4.5)
										return 18.9573;
									else
									{
										if(cqi < 12.5)
										{
											if(velocity < 9.875)
											{
												if(velocity < 4.735)
													return 2.07793;
												else
													return 0.668561;
											}
											else
												return 5.83944;
										}
										else
											return 12.5;
									}
								}
							}
							else
							{
								if(rsrp < -95)
								{
									if(rsrp < -105.5)
									{
										if(rsrp < -108.5)
										{
											if(sinr < 7.5)
												return 1.02696;
											else
												return 3.85356;
										}
										else
											return 7.40744;
									}
									else
									{
										if(cell < 13323909.5)
											return 4.58315;
										else
											return 1.970872;
									}
								}
								else
								{
									if(rsrp < -86)
									{
										if(rsrq < -6.5)
											return 17.3914;
										else
											return 19.5123;
									}
									else
										return 13.3334;
								}
							}
						}
						else
						{
							if(ta < 10.5)
							{
								if(payload < 5.5)
								{
									if(cell < 13532419)
									{
										if(rsrp < -98.5)
										{
											if(sinr < 6.5)
											{
												if(rsrp < -99.5)
												{
													if(rsrq < -8.5)
													{
														if(sinr < 4.5)
															return 22.6501;
														else
															return 25.6670666667;
													}
													else
														return 32.888;
												}
												else
												{
													if(cqi < 7.5)
														return 46.3097;
													else
														return 26.2295;
												}
											}
											else
											{
												if(sinr < 7.5)
													return 3.29832;
												else
													return 22.409;
											}
										}
										else
										{
											if(cqi < 6.5)
												return 46.2428;
											else
											{
												if(cell < 13175301.5)
												{
													if(sinr < 4.5)
														return 10.2367;
													else
													{
														if(cell < 12938245)
															return 14.2476;
														else
														{
															if(rsrq < -8.5)
															{
																if(payload < 1.5)
																	return 28.5714;
																else
																{
																	if(cell < 13098881.5)
																		return 22.0791;
																	else
																	{
																		if(rsrp < -93)
																			return 24.6154;
																		else
																			return 22.7273;
																	}
																}
															}
															else
																return 36.63005;
														}
													}
												}
												else
												{
													if(rsrp < -87.5)
													{
														if(ta < 3)
															return 46.5116;
														else
														{
															if(cell < 13284104.5)
															{
																if(cqi < 13)
																	return 45.2617;
																else
																	return 37.5587;
															}
															else
															{
																if(ta < 5.5)
																{
																	if(velocity < 11.215)
																	{
																		if(ta < 4.5)
																		{
																			if(cqi < 8)
																				return 24.5965;
																			else
																				return 22.4561;
																		}
																		else
																			return 21.0526;
																	}
																	else
																	{
																		if(velocity < 13.085)
																			return 33.5289;
																		else
																			return 24.8139;
																	}
																}
																else
																{
																	if(rsrq < -8.5)
																	{
																		if(payload < 1.5)
																			return 27.4914;
																		else
																		{
																			if(rsrq < -10.5)
																				return 28.2686;
																			else
																				return 29.5203;
																		}
																	}
																	else
																	{
																		if(rsrp < -97.5)
																			return 29.7398;
																		else
																			return 33.0245166667;
																	}
																}
															}
														}
													}
													else
														return 14.4862;
												}
											}
										}
									}
									else
									{
										if(rsrq < -9.5)
										{
											if(payload < 2.5)
												return 26.7559;
											else
												return 19.3548;
										}
										else
										{
											if(sinr < 8)
											{
												if(cqi < 8.5)
													return 24.1327;
												else
													return 13.9373;
											}
											else
												return 13.2013;
										}
									}
								}
								else
								{
									if(rsrq < -9.5)
									{
										if(rsrp < -97.5)
										{
											if(sinr < 6.5)
											{
												if(ta < 6.5)
												{
													if(ta < 4.5)
														return 26.6921;
													else
														return 21.4704666667;
												}
												else
												{
													if(rsrp < -101.5)
														return 35.7942;
													else
														return 25.9235;
												}
											}
											else
											{
												if(cqi < 6.5)
													return 11.4304;
												else
													return 14.6482;
											}
										}
										else
										{
											if(rsrp < -95.5)
											{
												if(rsrq < -10.5)
													return 51.2492;
												else
													return 53.1814;
											}
											else
											{
												if(cqi < 9.5)
												{
													if(rsrq < -10.5)
														return 27.456;
													else
													{
														if(payload < 8.5)
															return 23.4801;
														else
															return 22.0083;
													}
												}
												else
												{
													if(velocity < 10.56)
													{
														if(rsrp < -90.5)
															return 35.8614333333;
														else
															return 30.0188;
													}
													else
														return 43.214;
												}
											}
										}
									}
									else
									{
										if(ta < 8.5)
										{
											if(cqi < 8.5)
											{
												if(sinr < 7.5)
													return 51.8471;
												else
													return 79.7342;
											}
											else
											{
												if(velocity < 13.64)
												{
													if(f < 2247.55)
													{
														if(velocity < 2.23)
														{
															if(rsrp < -88)
																return 33.3333;
															else
																return 40.4296;
														}
														else
														{
															if(sinr < 8.5)
															{
																if(rsrp < -95)
																{
																	if(payload < 7.5)
																		return 26.1815666667;
																	else
																		return 29.2668;
																}
																else
																	return 17.6712;
															}
															else
															{
																if(rsrq < -7.5)
																	return 40.6321;
																else
																	return 31.5138;
															}
														}
													}
													else
													{
														if(sinr < 4.5)
														{
															if(velocity < 2.715)
																return 8.79282;
															else
															{
																if(cqi < 12)
																	return 39.5062;
																else
																	return 34.5125;
															}
														}
														else
														{
															if(cell < 13531528.5)
															{
																if(cqi < 10.5)
																{
																	if(rsrp < -86.5)
																		return 42.41212;
																	else
																		return 51.8639;
																}
																else
																	return 27.5704;
															}
															else
																return 17.6712;
														}
													}
												}
												else
												{
													if(velocity < 14.36)
														return 41.9948;
													else
														return 51.5575;
												}
											}
										}
										else
										{
											if(cqi < 8.5)
											{
												if(rsrp < -101)
													return 25.5265;
												else
													return 35.9102;
											}
											else
											{
												if(rsrq < -8.5)
												{
													if(velocity < 12.4)
														return 55.088;
													else
														return 52.6811;
												}
												else
												{
													if(sinr < 6.5)
														return 63.6605;
													else
														return 58.8957;
												}
											}
										}
									}
								}
							}
							else
							{
								if(f < 1362.55)
								{
									if(rsrq < -9.5)
									{
										if(cqi < 10)
										{
											if(ta < 13.5)
												return 0.772872;
											else
												return 2.456994;
										}
										else
											return 20.1511;
									}
									else
									{
										if(rsrp < -99)
										{
											if(cqi < 7.5)
												return 7.02371;
											else
												return 8.8033466667;
										}
										else
										{
											if(sinr < 8.5)
											{
												if(payload < 2.5)
												{
													if(cqi < 10)
														return 24.3531;
													else
														return 19.2771;
												}
												else
												{
													if(rsrp < -95)
														return 20.9333;
													else
													{
														if(rsrp < -91.5)
															return 16.2933;
														else
															return 13.6146333333;
													}
												}
											}
											else
												return 5.66653;
										}
									}
								}
								else
								{
									if(rsrp < -108.5)
									{
										if(sinr < 8.5)
										{
											if(rsrq < -7.5)
											{
												if(cell < 13393420)
												{
													if(velocity < 10.51)
													{
														if(velocity < 0.93)
														{
															if(ta < 16.5)
																return 6.41026;
															else
															{
																if(cell < 13392905)
																{
																	if(cqi < 7.5)
																		return 13.8456;
																	else
																	{
																		if(rsrp < -109.5)
																			return 18.5244;
																		else
																			return 15.5139;
																	}
																}
																else
																	return 21.8790333333;
															}
														}
														else
														{
															if(velocity < 5.31)
															{
																if(ta < 15.5)
																{
																	if(rsrp < -109.5)
																		return 11.6486;
																	else
																		return 8.98876;
																}
																else
																	return 2.72944;
															}
															else
															{
																if(payload < 8.5)
																{
																	if(cell < 12890123.5)
																		return 12.6397;
																	else
																	{
																		if(payload < 3.5)
																			return 17.094;
																		else
																			return 18.4403;
																	}
																}
																else
																	return 5.29334;
															}
														}
													}
													else
													{
														if(payload < 8.5)
														{
															if(rsrp < -110.5)
															{
																if(ta < 15.5)
																	return 25.1564;
																else
																	return 29.1041;
															}
															else
															{
																if(velocity < 12.445)
																{
																	if(payload < 4)
																		return 18.7793;
																	else
																		return 25.7946;
																}
																else
																{
																	if(cqi < 10.5)
																		return 11.6916;
																	else
																		return 8.08285;
																}
															}
														}
														else
														{
															if(rsrq < -9.5)
																return 6.5538;
															else
															{
																if(ta < 15.5)
																	return 15.2722;
																else
																	return 11.4213;
															}
														}
													}
												}
												else
												{
													if(rsrq < -8.5)
														return 6.85225;
													else
														return 0.87859;
												}
											}
											else
												return 4.77644;
										}
										else
											return 35.9147;
									}
									else
									{
										if(ta < 14.5)
										{
											if(payload < 6)
											{
												if(rsrq < -7.5)
												{
													if(rsrq < -8.5)
														return 23.9521;
													else
														return 22.7015;
												}
												else
													return 19.9379;
											}
											else
											{
												if(rsrp < -99.5)
												{
													if(sinr < 6.5)
													{
														if(cqi < 9)
														{
															if(payload < 9)
																return 24.2057;
															else
																return 25.5346;
														}
														else
															return 30.4569;
													}
													else
													{
														if(payload < 8.5)
															return 30.7861;
														else
															return 32.64655;
													}
												}
												else
												{
													if(velocity < 6.48)
														return 22.1743;
													else
														return 25.3708333333;
												}
											}
										}
										else
										{
											if(rsrp < -100.5)
											{
												if(velocity < 13.225)
												{
													if(velocity < 12.29)
													{
														if(cqi < 8.5)
															return 22.9459833333;
														else
														{
															if(rsrp < -101.5)
															{
																if(rsrq < -7.5)
																{
																	if(ta < 70.5)
																	{
																		if(velocity < 10.77)
																		{
																			if(velocity < 9.27)
																			{
																				if(payload < 7.5)
																				{
																					if(cell < 13099785)
																						return 18.419;
																					else
																						return 17.43315;
																				}
																				else
																					return 13.7274;
																			}
																			else
																				return 22.2841;
																		}
																		else
																			return 13.5758;
																	}
																	else
																		return 15.2497;
																}
																else
																{
																	if(payload < 7.5)
																		return 17.7215;
																	else
																	{
																		if(rsrp < -107.5)
																			return 20.1258;
																		else
																		{
																			if(payload < 9)
																				return 23.1968;
																			else
																				return 29.0592;
																		}
																	}
																}
															}
															else
																return 11.7302;
														}
													}
													else
													{
														if(velocity < 13.165)
														{
															if(cell < 13393547.5)
															{
																if(rsrp < -106.5)
																{
																	if(rsrp < -107.5)
																		return 15.5264;
																	else
																		return 14.2191;
																}
																else
																	return 11.6831;
															}
															else
																return 8.94454;
														}
														else
														{
															if(payload < 9.5)
																return 21.4541;
															else
																return 13.4363;
														}
													}
												}
												else
												{
													if(sinr < 8.5)
													{
														if(payload < 2)
															return 16.8067;
														else
														{
															if(rsrq < -10.5)
																return 36.8179;
															else
															{
																if(ta < 70.5)
																{
																	if(cqi < 9.5)
																	{
																		if(rsrq < -8.5)
																			return 29.9465;
																		else
																			return 28.1442;
																	}
																	else
																	{
																		if(velocity < 14.05)
																			return 26.34522;
																		else
																			return 24.5506;
																	}
																}
																else
																	return 21.4286;
															}
														}
													}
													else
													{
														if(payload < 2)
															return 26.1438;
														else
															return 9.61849;
													}
												}
											}
											else
											{
												if(sinr < 8.5)
												{
													if(sinr < 6.5)
														return 19.4766;
													else
													{
														if(rsrq < -8.5)
															return 27.3038;
														else
															return 25.5428;
													}
												}
												else
													return 35.2423;
											}
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if(rsrp < -98.5)
					{
						if(cqi < 12.5)
						{
							if(cqi < 7.5)
							{
								if(ta < 28.5)
								{
									if(ta < 24)
									{
										if(payload < 8)
										{
											if(rsrp < -110)
												return 10.5611;
											else
											{
												if(payload < 3)
													return 10.7383;
												else
													return 14.9358;
											}
										}
										else
											return 0.5017;
									}
									else
										return 2.90782;
								}
								else
								{
									if(rsrp < -109.5)
										return 26.0799;
									else
										return 17.2829666667;
								}
							}
							else
							{
								if(payload < 9.5)
								{
									if(payload < 0.75)
									{
										if(sinr < 6)
											return 10.3359;
										else
											return 8.79121;
									}
									else
									{
										if(ta < 23)
										{
											if(rsrq < -11)
											{
												if(ta < 17)
												{
													if(cqi < 11)
														return 3.1006657143;
													else
														return 1.20192;
												}
												else
													return 0.597565;
											}
											else
											{
												if(velocity < 16.14)
												{
													if(ta < 15.5)
														return 6.60485;
													else
														return 2.11416;
												}
												else
													return 8.102394;
											}
										}
										else
										{
											if(velocity < 14.765)
												return 0.752833;
											else
											{
												if(rsrp < -113.5)
													return 2.3048;
												else
													return 3.886225;
											}
										}
									}
								}
								else
								{
									if(ta < 9)
										return 7.61107;
									else
									{
										if(ta < 15)
											return 25.7152;
										else
											return 19.3705;
									}
								}
							}
						}
						else
						{
							if(ta < 25.5)
							{
								if(cqi < 14.5)
								{
									if(sinr < 5.5)
										return 31.5706;
									else
										return 27.4207;
								}
								else
									return 15.0447;
							}
							else
								return 13.2231;
						}
					}
					else
					{
						if(cell < 13532162.5)
						{
							if(payload < 0.75)
							{
								if(ta < 6.5)
									return 17.094;
								else
								{
									if(velocity < 24.795)
									{
										if(velocity < 14.795)
											return 9.46133;
										else
										{
											if(ta < 15)
												return 10.0756;
											else
												return 6.5574;
										}
									}
									else
									{
										if(cqi < 13.5)
										{
											if(rsrp < -89)
												return 4.0259816667;
											else
												return 0.793654;
										}
										else
											return 10.2564;
									}
								}
							}
							else
							{
								if(cqi < 10.5)
								{
									if(rsrp < -90)
									{
										if(payload < 5.5)
										{
											if(ta < 16)
											{
												if(cell < 13400066)
												{
													if(ta < 12)
													{
														if(sinr < 5.5)
															return 30.7692;
														else
														{
															if(cqi < 8)
																return 30.4569;
															else
																return 26.2964666667;
														}
													}
													else
													{
														if(payload < 2.5)
															return 17.2043;
														else
														{
															if(rsrq < -8.5)
															{
																if(cqi < 8)
																	return 27.5862;
																else
																	return 25.5918;
															}
															else
																return 23.7741;
														}
													}
												}
												else
												{
													if(payload < 4.5)
													{
														if(cqi < 7.5)
															return 14.3284;
														else
														{
															if(rsrq < -10.5)
																return 9.427835;
															else
																return 4.8012;
														}
													}
													else
														return 21.4938;
												}
											}
											else
											{
												if(cqi < 8.5)
													return 14.5852;
												else
												{
													if(payload < 3)
														return 10.3093;
													else
														return 12.4572;
												}
											}
										}
										else
										{
											if(cell < 13394946)
											{
												if(rsrp < -95)
													return 2.57631;
												else
													return 11.7743;
											}
											else
											{
												if(sinr < 5.5)
												{
													if(payload < 9)
														return 16.7891;
													else
														return 20.8062;
												}
												else
												{
													if(ta < 10)
														return 22.7201;
													else
													{
														if(cqi < 7)
															return 4.49871;
														else
														{
															if(cell < 13474690.5)
															{
																if(cqi < 8.5)
																	return 15.4341;
																else
																	return 12.30192;
															}
															else
																return 7.89474;
														}
													}
												}
											}
										}
									}
									else
									{
										if(sinr < 6.5)
										{
											if(payload < 3.5)
											{
												if(rsrq < -8.5)
													return 20.3046;
												else
													return 21.978;
											}
											else
												return 30.92208;
										}
										else
										{
											if(cell < 13272962)
												return 19.9833;
											else
												return 6.26141;
										}
									}
								}
								else
								{
									if(velocity < 25.835)
									{
										if(cqi < 11.5)
										{
											if(rsrp < -96)
												return 18.75;
											else
												return 35.2734;
										}
										else
										{
											if(cqi < 13)
												return 14.7537;
											else
											{
												if(rsrq < -7)
													return 13.2013;
												else
													return 11.8866;
											}
										}
									}
									else
									{
										if(cell < 13405442)
											return 11.0619;
										else
											return 1.8528666667;
									}
								}
							}
						}
						else
						{
							if(rsrp < -90.5)
							{
								if(payload < 1.5)
									return 24.7678;
								else
									return 48.048;
							}
							else
								return 55.1724;
						}
					}
				}
			}
			else
			{
				if(cqi < 9.5)
				{
					if(f < 1362.55)
					{
						if(rsrp < -70)
						{
							if(cell < 13394818.5)
							{
								if(cell < 13394178)
								{
									if(ta < 6)
									{
										if(sinr < 5.5)
											return 30.0752;
										else
										{
											if(rsrq < -8)
												return 32.3596;
											else
												return 30.6513;
										}
									}
									else
										return 47.2813;
								}
								else
								{
									if(rsrp < -81.5)
										return 82.1566;
									else
									{
										if(rsrq < -5.5)
											return 42.2323;
										else
											return 39.7727;
									}
								}
							}
							else
							{
								if(payload < 8)
								{
									if(rsrq < -8)
										return 20.7164;
									else
										return 15.9151;
								}
								else
									return 43.4311;
							}
						}
						else
							return 80;
					}
					else
					{
						if(payload < 5.5)
						{
							if(rsrp < -73)
								return 78.0488;
							else
								return 80;
						}
						else
							return 54.7205333333;
					}
				}
				else
				{
					if(cqi < 14.5)
					{
						if(payload < 6.5)
						{
							if(payload < 4.5)
								return 36.8098;
							else
								return 44.2804;
						}
						else
						{
							if(cell < 13400836.5)
							{
								if(sinr < 6)
									return 25.1493;
								else
								{
									if(payload < 8)
										return 41.6667;
									else
										return 33.5196;
								}
							}
							else
							{
								if(f < 1362.55)
								{
									if(payload < 7.5)
										return 14.0633;
									else
										return 15.6517;
								}
								else
									return 18.773;
							}
						}
					}
					else
					{
						if(cell < 13353099.5)
						{
							if(rsrp < -70)
								return 33.6134;
							else
								return 42.5155;
						}
						else
							return 63.2411;
					}
				}
			}
		}
	}
	else
	{
		if(rsrp < -90.5)
		{
			if(f < 1362.55)
			{
				if(velocity < 12.685)
				{
					if(rsrp < -97)
						return 74.1886;
					else
					{
						if(velocity < 9.5)
						{
							if(cqi < 8.5)
							{
								if(payload < 0.3)
									return 8.33337;
								else
								{
									if(rsrp < -93.5)
									{
										if(rsrp < -94.5)
											return 19.5122;
										else
											return 18.1818;
									}
									else
									{
										if(cell < 13393794)
											return 12.0527;
										else
											return 14.7601;
									}
								}
							}
							else
							{
								if(velocity < 8.37)
								{
									if(payload < 2)
										return 27.2109;
									else
									{
										if(sinr < 14.5)
											return 32.2418;
										else
											return 43.5613;
									}
								}
								else
								{
									if(cell < 13527939)
										return 22.3464;
									else
										return 26.2295;
								}
							}
						}
						else
						{
							if(velocity < 9.58)
								return 65.2174;
							else
							{
								if(cqi < 11.5)
								{
									if(payload < 4.5)
									{
										if(rsrq < -8)
											return 34.0426;
										else
											return 38.5078;
									}
									else
									{
										if(cell < 13532419)
										{
											if(sinr < 11.5)
												return 33.4417;
											else
												return 43.956;
										}
										else
											return 45.6853;
									}
								}
								else
								{
									if(cell < 13214337)
										return 36.6972;
									else
									{
										if(rsrp < -92.5)
											return 13.1148;
										else
											return 7.40744;
									}
								}
							}
						}
					}
				}
				else
				{
					if(rsrp < -97.5)
					{
						if(ta < 15.5)
						{
							if(rsrp < -98.5)
							{
								if(cell < 13415298)
								{
									if(rsrq < -7.5)
									{
										if(cqi < 10)
											return 1.35616;
										else
											return 2.82189;
									}
									else
										return 0.547227;
								}
								else
									return 1.08053;
							}
							else
							{
								if(ta < 9.5)
									return 7.0457;
								else
									return 1.53692;
							}
						}
						else
						{
							if(sinr < 12)
								return 5.49073;
							else
								return 7.93651;
						}
					}
					else
					{
						if(sinr < 14.5)
						{
							if(payload < 6)
							{
								if(cell < 13405313.5)
								{
									if(rsrp < -92.5)
										return 6.73902;
									else
										return 15.1086;
								}
								else
								{
									if(cqi < 12)
									{
										if(velocity < 16.57)
										{
											if(payload < 3.5)
											{
												if(rsrp < -95.5)
													return 20.3046;
												else
													return 17.9775;
											}
											else
												return 15.4291;
										}
										else
											return 26.4026;
									}
									else
										return 9.3174733333;
								}
							}
							else
							{
								if(cell < 13416194.5)
								{
									if(cell < 13405313.5)
									{
										if(cqi < 8.5)
										{
											if(payload < 9)
												return 24.3902;
											else
												return 20.5233;
										}
										else
										{
											if(payload < 9)
											{
												if(rsrp < -92.5)
													return 27.3839;
												else
													return 32.0481;
											}
											else
											{
												if(ta < 23.5)
													return 26.3244;
												else
													return 22.2779;
											}
										}
									}
									else
										return 21.0843;
								}
								else
								{
									if(ta < 20.5)
										return 14.5624;
									else
									{
										if(ta < 22.5)
											return 8.57858;
										else
											return 10.6484;
									}
								}
							}
						}
						else
						{
							if(cell < 13528195)
							{
								if(rsrp < -92.5)
								{
									if(rsrq < -9.5)
										return 13.2231;
									else
									{
										if(payload < 5.25)
											return 10.4167;
										else
											return 9.03138;
									}
								}
								else
									return 7.0573085714;
							}
							else
								return 19.5462;
						}
					}
				}
			}
			else
			{
				if(rsrp < -106.5)
				{
					if(velocity < 13.865)
					{
						if(sinr < 17.5)
						{
							if(cqi < 9.5)
							{
								if(velocity < 0.81)
								{
									if(payload < 8)
										return 29.1616;
									else
										return 25.8983;
								}
								else
								{
									if(rsrq < -8.5)
										return 24.8447;
									else
										return 23.4261;
								}
							}
							else
							{
								if(payload < 3.5)
								{
									if(rsrq < -7.5)
										return 16.13015;
									else
										return 18.8531;
								}
								else
								{
									if(payload < 5)
										return 23.9521;
									else
										return 27.0728;
								}
							}
						}
						else
						{
							if(cqi < 10.5)
							{
								if(payload < 3.55)
									return 6.89658;
								else
									return 5.64687;
							}
							else
							{
								if(rsrp < -111)
									return 13.8468;
								else
								{
									if(rsrq < -7.5)
										return 19.5806333333;
									else
										return 17.66;
								}
							}
						}
					}
					else
					{
						if(rsrp < -108.5)
						{
							if(sinr < 12)
								return 4.3483;
							else
								return 1.43123;
						}
						else
						{
							if(sinr < 13.5)
							{
								if(payload < 6.5)
									return 15.0991;
								else
									return 16.3361;
							}
							else
								return 17.0213;
						}
					}
				}
				else
				{
					if(rsrq < -7.5)
					{
						if(rsrp < -95)
						{
							if(cell < 12854793.5)
							{
								if(payload < 0.75)
								{
									if(rsrp < -104.5)
									{
										if(sinr < 12)
											return 10.5264;
										else
											return 8.00003;
									}
									else
									{
										if(sinr < 21.5)
											return 18.5185;
										else
											return 14.0351;
									}
								}
								else
								{
									if(velocity < 6.435)
									{
										if(sinr < 14)
										{
											if(payload < 5.5)
												return 21.6411;
											else
												return 18.7463;
										}
										else
											return 26.6667;
									}
									else
									{
										if(rsrp < -105.5)
										{
											if(rsrq < -9)
												return 19.3237;
											else
												return 31.68425;
										}
										else
										{
											if(velocity < 14.005)
											{
												if(payload < 3.5)
												{
													if(velocity < 11.29)
														return 32.3887;
													else
														return 25.1309;
												}
												else
												{
													if(sinr < 10.5)
														return 43.2173;
													else
													{
														if(payload < 5.5)
														{
															if(cqi < 6)
																return 35.1262;
															else
																return 36.6133;
														}
														else
														{
															if(cqi < 13)
															{
																if(sinr < 15)
																{
																	if(cqi < 9.5)
																		return 29.2581;
																	else
																		return 27.9163;
																}
																else
																	return 31.9858;
															}
															else
																return 32.4826;
														}
													}
												}
											}
											else
											{
												if(velocity < 14.89)
												{
													if(ta < 15)
													{
														if(rsrp < -103.5)
															return 33.4728;
														else
														{
															if(payload < 4.5)
																return 36.7759333333;
															else
																return 35.1906;
														}
													}
													else
													{
														if(rsrp < -103.5)
															return 39.9002;
														else
															return 36.6972;
													}
												}
												else
													return 33.7909;
											}
										}
									}
								}
							}
							else
							{
								if(payload < 5.5)
								{
									if(payload < 0.75)
									{
										if(rsrp < -100.5)
											return 21.3904;
										else
											return 13.1148;
									}
									else
									{
										if(rsrp < -100.5)
										{
											if(rsrq < -8.5)
												return 39.5257;
											else
												return 47.4308;
										}
										else
										{
											if(cell < 13230089.5)
												return 36.3636;
											else
											{
												if(velocity < 0.23)
												{
													if(rsrq < -9.5)
														return 25.2765;
													else
														return 26.8156;
												}
												else
													return 28.3567333333;
											}
										}
									}
								}
								else
								{
									if(velocity < 15.85)
									{
										if(cell < 13230089.5)
										{
											if(velocity < 10.855)
												return 11.4695;
											else
											{
												if(velocity < 13.225)
													return 15.4510428571;
												else
													return 13.6449;
											}
										}
										else
										{
											if(ta < 11)
											{
												if(rsrp < -102)
													return 18.3627;
												else
													return 20.3132;
											}
											else
												return 24.666;
										}
									}
									else
										return 31.4806;
								}
							}
						}
						else
						{
							if(sinr < 23.5)
							{
								if(payload < 7.5)
								{
									if(rsrp < -91.5)
									{
										if(rsrq < -8.5)
										{
											if(rsrq < -9.5)
												return 32.4324;
											else
												return 34.188;
										}
										else
											return 42.1369;
									}
									else
										return 42.7807;
								}
								else
									return 26.4354;
							}
							else
								return 22.2222;
						}
					}
					else
					{
						if(ta < 4.5)
						{
							if(rsrp < -92)
							{
								if(payload < 2.55)
									return 13.3334;
								else
								{
									if(payload < 6)
										return 39.604;
									else
										return 36.6013;
								}
							}
							else
							{
								if(sinr < 15)
									return 36.0902;
								else
								{
									if(cell < 13183885.5)
									{
										if(sinr < 21.5)
											return 68.7961;
										else
											return 58.8235;
									}
									else
										return 83.4783;
								}
							}
						}
						else
						{
							if(cell < 13284107)
							{
								if(payload < 0.3)
									return 133.334;
								else
								{
									if(rsrp < -98.5)
									{
										if(velocity < 2.49)
										{
											if(ta < 12.5)
											{
												if(sinr < 15)
												{
													if(ta < 7.5)
														return 42.9185;
													else
														return 49.961;
												}
												else
													return 58.8776;
											}
											else
											{
												if(ta < 15)
												{
													if(payload < 7)
														return 17.7148;
													else
														return 30.2648;
												}
												else
												{
													if(payload < 4)
														return 30.1318;
													else
													{
														if(rsrp < -105.5)
															return 33.393;
														else
															return 34.8837;
													}
												}
											}
										}
										else
										{
											if(payload < 4.5)
											{
												if(cell < 12890123.5)
												{
													if(velocity < 9.89)
														return 17.1951;
													else
													{
														if(payload < 1.25)
															return 17.6211;
														else
														{
															if(cqi < 13)
															{
																if(payload < 3)
																	return 23.9521;
																else
																	return 21.278525;
															}
															else
																return 29.484;
														}
													}
												}
												else
												{
													if(velocity < 13.875)
													{
														if(payload < 0.75)
															return 23.2558;
														else
														{
															if(ta < 8)
																return 25.417;
															else
															{
																if(payload < 2.5)
																	return 30.42;
																else
																	return 33.1263;
															}
														}
													}
													else
														return 11.1111;
												}
											}
											else
											{
												if(ta < 69.5)
												{
													if(sinr < 10.5)
														return 56.2588;
													else
													{
														if(cqi < 10.5)
														{
															if(cell < 12937097)
															{
																if(velocity < 7.385)
																	return 27.72;
																else
																	return 23.5496;
															}
															else
																return 33.4169;
														}
														else
														{
															if(cqi < 13)
																return 42.2961;
															else
															{
																if(payload < 5.5)
																	return 38.9105;
																else
																{
																	if(rsrq < -6.5)
																		return 28.4192;
																	else
																		return 31.7586;
																}
															}
														}
													}
												}
												else
													return 22.9665;
											}
										}
									}
									else
									{
										if(rsrp < -96.5)
										{
											if(velocity < 12.28)
											{
												if(rsrq < -6.5)
													return 58.9474;
												else
												{
													if(payload < 8)
														return 53.2826;
													else
													{
														if(rsrq < -5.5)
															return 61.6438;
														else
															return 56.1798;
													}
												}
											}
											else
												return 49.3489;
										}
										else
										{
											if(cqi < 14.5)
											{
												if(payload < 0.75)
												{
													if(cqi < 7.5)
														return 27.2109;
													else
														return 25.3165;
												}
												else
												{
													if(cell < 12890123.5)
													{
														if(sinr < 27)
														{
															if(rsrq < -6.5)
																return 65.0407;
															else
															{
																if(payload < 7.5)
																	return 37.90265;
																else
																	return 40.8627;
															}
														}
														else
															return 22.5352;
													}
													else
														return 48.401;
												}
											}
											else
											{
												if(payload < 8)
													return 55.9441;
												else
													return 60.6061;
											}
										}
									}
								}
							}
							else
							{
								if(cell < 13393420)
								{
									if(rsrp < -96.5)
									{
										if(payload < 1.05)
											return 8.51067;
										else
										{
											if(cqi < 9.5)
												return 20.34625;
											else
											{
												if(velocity < 17.265)
												{
													if(rsrp < -97.5)
													{
														if(rsrp < -98.5)
															return 28.6738;
														else
															return 30.802275;
													}
													else
														return 27.3973;
												}
												else
													return 20.9607;
											}
										}
									}
									else
									{
										if(sinr < 12)
											return 7.40744;
										else
										{
											if(velocity < 15.11)
											{
												if(payload < 2.55)
													return 7.40744;
												else
												{
													if(rsrp < -94)
														return 20.0501;
													else
														return 16.4948;
												}
											}
											else
											{
												if(sinr < 23)
												{
													if(sinr < 14.5)
														return 21.7687;
													else
														return 27.4286;
												}
												else
													return 21.0084;
											}
										}
									}
								}
								else
								{
									if(payload < 1.5)
									{
										if(cqi < 12)
											return 26.2295;
										else
										{
											if(rsrq < -6.5)
												return 14.2857;
											else
												return 18.6916;
										}
									}
									else
									{
										if(rsrq < -6.5)
										{
											if(velocity < 8.03)
											{
												if(sinr < 11)
													return 32.8205;
												else
												{
													if(payload < 8.5)
														return 18.7479;
													else
														return 24.1619;
												}
											}
											else
											{
												if(cqi < 14)
												{
													if(rsrp < -102.5)
														return 31.4961;
													else
														return 33.10494;
												}
												else
													return 45.4545;
											}
										}
										else
										{
											if(cqi < 9.5)
												return 20.7254;
											else
											{
												if(sinr < 29)
												{
													if(sinr < 13)
														return 50.7937;
													else
													{
														if(velocity < 14.56)
														{
															if(velocity < 12.65)
															{
																if(cqi < 10.5)
																	return 40.201;
																else
																{
																	if(sinr < 17)
																		return 45.7143;
																	else
																	{
																		if(ta < 9.5)
																			return 42.254725;
																		else
																			return 39.9501;
																	}
																}
															}
															else
																return 38.5542;
														}
														else
															return 48.7805;
													}
												}
												else
												{
													if(velocity < 12.93)
														return 34.5988;
													else
														return 65.7895;
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
		}
		else
		{
			if(cell < 13394190)
			{
				if(payload < 1.5)
				{
					if(cell < 13121413)
					{
						if(payload < 0.3)
						{
							if(sinr < 19)
								return 160.001;
							else
							{
								if(sinr < 25.5)
								{
									if(velocity < 8.07)
										return 19.5123;
									else
									{
										if(ta < 12.5)
											return 11.4286;
										else
											return 5.19483;
									}
								}
								else
									return 61.5387;
							}
						}
						else
						{
							if(cell < 12998017.5)
							{
								if(sinr < 26)
								{
									if(sinr < 13)
										return 38.2775;
									else
									{
										if(velocity < 8.505)
										{
											if(velocity < 1.27)
											{
												if(sinr < 18.5)
												{
													if(cqi < 11.5)
														return 26.8456;
													else
													{
														if(rsrp < -82.5)
															return 36.036;
														else
														{
															if(payload < 0.75)
																return 29.8507;
															else
																return 33.8983;
														}
													}
												}
												else
													return 26.8456;
											}
											else
											{
												if(sinr < 17)
													return 32.3887;
												else
												{
													if(cqi < 13.5)
														return 47.9042;
													else
														return 36.3636;
												}
											}
										}
										else
										{
											if(rsrp < -82.5)
												return 33.8983;
											else
												return 28.8444142857;
										}
									}
								}
								else
								{
									if(payload < 0.75)
										return 24.0964;
									else
										return 29.9659666667;
								}
							}
							else
							{
								if(rsrp < -85.5)
								{
									if(ta < 14)
										return 29.6296;
									else
									{
										if(payload < 0.75)
											return 8.7146;
										else
											return 19.2308;
									}
								}
								else
								{
									if(sinr < 32)
									{
										if(cqi < 14.5)
										{
											if(sinr < 21)
												return 24.5399;
											else
												return 25.974;
										}
										else
											return 21.4477;
									}
									else
										return 32.7869;
								}
							}
						}
					}
					else
					{
						if(rsrq < -7.5)
						{
							if(sinr < 12.5)
								return 9.4224866667;
							else
							{
								if(cell < 13284101)
									return 9.80392;
								else
									return 19.4175;
							}
						}
						else
						{
							if(sinr < 14.5)
							{
								if(cqi < 11)
								{
									if(cqi < 5)
										return 15.9681;
									else
										return 26.2298;
								}
								else
								{
									if(velocity < 13.8)
									{
										if(velocity < 6.755)
										{
											if(ta < 6)
												return 10.8109;
											else
												return 14.2858;
										}
										else
											return 7.40744;
									}
									else
										return 19.4175;
								}
							}
							else
							{
								if(sinr < 31)
								{
									if(velocity < 1.545)
									{
										if(sinr < 27)
										{
											if(rsrp < -78.5)
											{
												if(rsrp < -81)
													return 34.7826;
												else
													return 27.1186;
											}
											else
											{
												if(payload < 0.75)
													return 32.5203;
												else
													return 37.3832;
											}
										}
										else
											return 46.5116;
									}
									else
									{
										if(velocity < 16.045)
										{
											if(rsrq < -6.5)
											{
												if(velocity < 7.055)
													return 23.3918;
												else
												{
													if(payload < 0.75)
														return 20.1045333333;
													else
														return 22.5989;
												}
											}
											else
											{
												if(sinr < 17.5)
													return 29.1192;
												else
												{
													if(cell < 13393928)
														return 23.53675;
													else
													{
														if(cqi < 11.5)
															return 18.8679;
														else
														{
															if(cqi < 13.5)
																return 29.6296;
															else
																return 27.327175;
														}
													}
												}
											}
										}
										else
											return 15.3551;
									}
								}
								else
									return 53.3335;
							}
						}
					}
				}
				else
				{
					if(cell < 13393414)
					{
						if(ta < 11.5)
						{
							if(payload < 3.5)
							{
								if(cqi < 11.5)
								{
									if(velocity < 13.93)
									{
										if(velocity < 11.91)
										{
											if(rsrp < -62)
											{
												if(rsrq < -5.5)
												{
													if(cell < 13074437.5)
													{
														if(sinr < 17.5)
															return 31.4548;
														else
															return 39.77265;
													}
													else
													{
														if(sinr < 15.5)
															return 55.1724;
														else
															return 41.9948;
													}
												}
												else
												{
													if(rsrp < -74)
														return 44.8598;
													else
														return 63.1579;
												}
											}
											else
												return 30.888;
										}
										else
											return 15.0094;
									}
									else
										return 59.4796;
								}
								else
								{
									if(cell < 13175301.5)
									{
										if(sinr < 22.5)
										{
											if(sinr < 19)
												return 65.6935333333;
											else
												return 61.3027;
										}
										else
										{
											if(rsrp < -84)
												return 66.6667;
											else
											{
												if(sinr < 26.5)
													return 50;
												else
													return 55.81875;
											}
										}
									}
									else
									{
										if(cqi < 12.5)
										{
											if(rsrq < -8)
												return 32.4763;
											else
											{
												if(rsrp < -77.5)
													return 41.4508;
												else
													return 43.956;
											}
										}
										else
										{
											if(payload < 2.5)
											{
												if(velocity < 7.145)
													return 48.3384;
												else
													return 46.7836;
											}
											else
											{
												if(ta < 4.5)
													return 62.5;
												else
												{
													if(sinr < 22)
														return 52.8634;
													else
														return 54.6697;
												}
											}
										}
									}
								}
							}
							else
							{
								if(rsrq < -6.5)
								{
									if(cell < 13392904.5)
									{
										if(velocity < 8.595)
										{
											if(cell < 13074434)
											{
												if(cqi < 11.5)
												{
													if(ta < 2.5)
														return 54.2741;
													else
													{
														if(cqi < 10)
															return 74.1427;
														else
														{
															if(payload < 7)
																return 74.3494;
															else
																return 63.9432;
														}
													}
												}
												else
												{
													if(rsrq < -7.5)
														return 66.1157;
													else
													{
														if(ta < 9.5)
														{
															if(f < 1362.55)
																return 48.1932666667;
															else
																return 50.2828;
														}
														else
															return 62.3782;
													}
												}
											}
											else
											{
												if(cell < 13175301.5)
												{
													if(sinr < 20)
														return 27.1532;
													else
														return 45.864;
												}
												else
												{
													if(payload < 6.5)
													{
														if(sinr < 12.5)
															return 38.2775;
														else
														{
															if(cqi < 14.5)
															{
																if(payload < 5)
																	return 52.51342;
																else
																	return 68.3761;
															}
															else
																return 40.1506;
														}
													}
													else
													{
														if(sinr < 13.5)
														{
															if(rsrp < -70)
																return 46.4217;
															else
																return 57.4359;
														}
														else
															return 85.2359;
													}
												}
											}
										}
										else
										{
											if(rsrp < -87.5)
											{
												if(payload < 5.5)
													return 31.5956;
												else
													return 36.8664;
											}
											else
											{
												if(velocity < 14.96)
												{
													if(ta < 2.5)
													{
														if(payload < 5.5)
															return 37.1661;
														else
															return 30.1075;
													}
													else
													{
														if(sinr < 26.5)
														{
															if(rsrp < -76.5)
															{
																if(velocity < 13.915)
																{
																	if(cell < 13074434)
																	{
																		if(velocity < 10.41)
																		{
																			if(rsrq < -7.5)
																				return 61.127;
																			else
																				return 51.8639;
																		}
																		else
																			return 42.43125;
																	}
																	else
																	{
																		if(cqi < 9.5)
																			return 42.735;
																		else
																		{
																			if(rsrp < -81.5)
																				return 35.4296;
																			else
																				return 38.64395;
																		}
																	}
																}
																else
																	return 58.5774;
															}
															else
															{
																if(rsrq < -7.5)
																	return 44.9438;
																else
																{
																	if(rsrp < -73)
																		return 57.7617;
																	else
																		return 67.3212;
																}
															}
														}
														else
															return 37.2787;
													}
												}
												else
													return 32.3363;
											}
										}
									}
									else
										return 28.2386;
								}
								else
								{
									if(velocity < 14.095)
									{
										if(rsrp < -88)
											return 14.892;
										else
										{
											if(rsrp < -57.5)
											{
												if(cell < 13020549)
												{
													if(rsrp < -83)
														return 81.7253;
													else
													{
														if(sinr < 20.5)
														{
															if(ta < 8.5)
															{
																if(rsrp < -75.5)
																{
																	if(rsrp < -78.5)
																		return 53.13075;
																	else
																		return 55.2147;
																}
																else
																{
																	if(ta < 5)
																		return 47.4308;
																	else
																}
									}