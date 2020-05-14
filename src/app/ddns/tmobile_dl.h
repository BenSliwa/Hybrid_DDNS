#ifndef TMOBILE_DL
#define TMOBILE_DL

float tmobile_dl_tree_0(float payload, float rsrp, float rsrq, float sinr, float cqi, float ta, float velocity, float cell, float f)
{
	if(payload < 3.5)
	{
		if(rsrp < -88.5)
		{
			if(payload < 1.5)
			{
				if(rsrq < -6.5)
				{
					if(ta < 11.5)
					{
						if(rsrq < -8.5)
						{
							if(rsrp < -97.5)
							{
								if(sinr < -2.5)
								{
									if(rsrq < -10.5)
									{
										if(rsrp < -107)
											return 8.00801;
										else
										{
											if(rsrp < -101.5)
												return 0.72464;
											else
											{
												if(rsrp < -100.5)
													return 3.56983;
												else
													return 4.53001;
											}
										}
									}
									else
									{
										if(velocity < 13.655)
											return 8.94855;
										else
											return 11.5942;
									}
								}
								else
								{
									if(velocity < 14.315)
									{
										if(sinr < -1.5)
											return 0.662252;
										else
										{
											if(velocity < 13.69)
											{
												if(rsrq < -12.5)
												{
													if(ta < 7.5)
														return 4.71698;
													else
														return 6.77969;
												}
												else
												{
													if(sinr < -0.5)
													{
														if(payload < 0.3)
															return 3.50879;
														else
															return 1.91663;
													}
													else
													{
														if(rsrp < -102.5)
														{
															if(rsrq < -10)
																return 3.26532;
															else
																return 2.54248;
														}
														else
														{
															if(sinr < 1)
																return 7.09849;
															else
															{
																if(rsrp < -99.5)
																{
																	if(cqi < 8.5)
																	{
																		if(payload < 0.75)
																		{
																			if(rsrp < -100.5)
																				return 4.46429;
																			else
																				return 5.00002;
																		}
																		else
																		{
																			if(velocity < 0.455)
																				return 6.13027;
																			else
																				return 5.18815;
																		}
																	}
																	else
																	{
																		if(velocity < 11.75)
																			return 4.128135;
																		else
																			return 3.21802;
																	}
																}
																else
																{
																	if(velocity < 3.68)
																		return 4.30109;
																	else
																	{
																		if(cqi < 6.5)
																			return 2.81294;
																		else
																			return 3.852825;
																	}
																}
															}
														}
													}
												}
											}
											else
											{
												if(cell < 29142273)
												{
													if(cell < 28365057)
													{
														if(velocity < 14.07)
															return 7.62631;
														else
														{
															if(payload < 0.75)
																return 3.82409;
															else
																return 2.76625;
														}
													}
													else
													{
														if(payload < 0.3)
															return 10;
														else
															return 9.02935;
													}
												}
												else
													return 2.98954;
											}
										}
									}
									else
									{
										if(ta < 8.5)
										{
											if(rsrp < -106)
												return 1.43062;
											else
											{
												if(sinr < 6)
												{
													if(rsrp < -102)
														return 3.02916;
													else
													{
														if(payload < 0.55)
															return 4.1885;
														else
															return 5.09554;
													}
												}
												else
													return 2.597455;
											}
										}
										else
											return 1.217084;
									}
								}
							}
							else
							{
								if(sinr < 1.5)
								{
									if(rsrp < -93)
									{
										if(velocity < 14.075)
										{
											if(payload < 0.75)
												return 7.28597;
											else
											{
												if(velocity < 11.815)
													return 8.0402;
												else
													return 8.95857;
											}
										}
										else
										{
											if(cell < 31703169.5)
											{
												if(rsrp < -94.5)
													return 3.097105;
												else
													return 4.5403;
											}
											else
												return 5.38358;
										}
									}
									else
									{
										if(ta < 7.5)
										{
											if(velocity < 10.275)
												return 7.88955;
											else
												return 9.4754;
										}
										else
											return 5.51726;
									}
								}
								else
								{
									if(velocity < 10.71)
									{
										if(sinr < 13.5)
										{
											if(rsrp < -92.5)
											{
												if(cqi < 6.5)
													return 5.67378;
												else
													return 3.2023925;
											}
											else
											{
												if(rsrp < -89.5)
												{
													if(cqi < 8.5)
														return 4.8864275;
													else
														return 4.23282;
												}
												else
													return 3.70372;
											}
										}
										else
										{
											if(cell < 27883906.5)
												return 3.9409;
											else
											{
												if(sinr < 14.5)
													return 7.13012;
												else
													return 5.92154;
											}
										}
									}
									else
									{
										if(rsrp < -94)
											return 5.692838;
										else
										{
											if(payload < 0.55)
												return 8.42108;
											else
												return 7.64818;
										}
									}
								}
							}
						}
						else
						{
							if(ta < 6.5)
							{
								if(velocity < 14.965)
								{
									if(payload < 0.75)
									{
										if(sinr < 15.5)
										{
											if(rsrp < -89.5)
											{
												if(sinr < 13.5)
												{
													if(sinr < 3.5)
														return 3.55556;
													else
													{
														if(velocity < 11.675)
														{
															if(rsrq < -7.5)
															{
																if(ta < 4)
																	return 7.15564;
																else
																	return 8.60218;
															}
															else
															{
																if(payload < 0.3)
																	return 3.99252;
																else
																	return 5.2168766667;
															}
														}
														else
														{
															if(rsrp < -91.5)
															{
																if(ta < 3.5)
																{
																	if(rsrp < -99.5)
																		return 7.64818;
																	else
																		return 6.27454;
																}
																else
																{
																	if(sinr < 11)
																		return 8.325822;
																	else
																		return 6.66669;
																}
															}
															else
															{
																if(velocity < 14.49)
																	return 4.4111966667;
																else
																{
																	if(sinr < 9)
																		return 5.51726;
																	else
																		return 6.06063;
																}
															}
														}
													}
												}
												else
												{
													if(f < 2232.5)
													{
														if(cqi < 9.5)
															return 11.5274;
														else
															return 8.09717;
													}
													else
														return 6.54664;
												}
											}
											else
											{
												if(ta < 2)
													return 4.61894;
												else
													return 9.36768;
											}
										}
										else
										{
											if(f < 2232.5)
											{
												if(rsrp < -93)
												{
													if(rsrq < -7.5)
														return 3.15956;
													else
														return 3.92158;
												}
												else
													return 4.8485;
											}
											else
												return 2.62296;
										}
									}
									else
									{
										if(cell < 27376257.5)
										{
											if(sinr < 19.5)
											{
												if(rsrp < -90.5)
													return 6.82012;
												else
												{
													if(cqi < 8.5)
														return 5.22193;
													else
														return 6.59522;
												}
											}
											else
												return 8.58369;
										}
										else
										{
											if(rsrp < -91.5)
											{
												if(sinr < 18.5)
													return 7.44879;
												else
													return 10.596;
											}
											else
											{
												if(velocity < 4.2)
													return 8.78156;
												else
													return 12.0482;
											}
										}
									}
								}
								else
								{
									if(velocity < 31.34)
									{
										if(rsrq < -7.5)
											return 3.38983;
										else
											return 3.876595;
									}
									else
										return 0.850159;
								}
							}
							else
							{
								if(payload < 0.3)
								{
									if(cqi < 14.5)
									{
										if(velocity < 1.115)
										{
											if(cqi < 8.5)
											{
												if(ta < 8.5)
													return 4.941305;
												else
													return 5.55558;
											}
											else
												return 4.1885;
										}
										else
										{
											if(cqi < 12.5)
											{
												if(rsrp < -98.5)
												{
													if(cqi < 9)
														return 3.12501;
													else
														return 3.66974;
												}
												else
												{
													if(cell < 28884738)
													{
														if(velocity < 11.23)
														{
															if(velocity < 8.83)
															{
																if(sinr < 19)
																	return 4.4944;
																else
																	return 3.98011;
															}
															else
																return 3.58746;
														}
														else
														{
															if(sinr < 7.5)
																return 5.22878;
															else
																return 4.67838;
														}
													}
													else
													{
														if(sinr < 7.5)
															return 3.43349;
														else
															return 2.93041;
													}
												}
											}
											else
												return 2.31885;
										}
									}
									else
										return 5.55558;
								}
								else
								{
									if(cqi < 11.5)
									{
										if(cell < 28368385)
										{
											if(velocity < 2.625)
												return 12.0846;
											else
											{
												if(velocity < 14.49)
												{
													if(cell < 28367745)
													{
														if(rsrp < -99.5)
															return 8.3682;
														else
														{
															if(sinr < 13.5)
															{
																if(sinr < 11)
																{
																	if(sinr < 5)
																		return 5.73066;
																	else
																		return 4.10678;
																}
																else
																{
																	if(rsrp < -95.5)
																		return 5.81395;
																	else
																		return 7.87402;
																}
															}
															else
																return 4.08998;
														}
													}
													else
														return 8.11359;
												}
												else
													return 2.7416;
											}
										}
										else
										{
											if(rsrq < -7.5)
												return 6.99301;
											else
											{
												if(payload < 0.75)
													return 3.349102;
												else
												{
													if(cqi < 7.5)
														return 5.6338;
													else
														return 3.27466;
												}
											}
										}
									}
									else
									{
										if(rsrp < -94.5)
											return 11.5942;
										else
										{
											if(sinr < 16.5)
												return 6.19195;
											else
												return 5.18807;
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
							if(rsrq < -9)
								return 38.0954;
							else
								return 6.71141;
						}
						else
						{
							if(sinr < 8.5)
							{
								if(f < 2232.5)
								{
									if(rsrq < -9.5)
									{
										if(velocity < 4.445)
											return 7.70713;
										else
										{
											if(velocity < 14.5)
											{
												if(payload < 0.3)
													return 4.5215625;
												else
												{
													if(ta < 14.5)
													{
														if(velocity < 13.71)
															return 4.15369;
														else
															return 3.52578;
													}
													else
													{
														if(velocity < 14.095)
														{
															if(ta < 19)
																return 1.71013;
															else
																return 2.87257;
														}
														else
															return 2.99177;
													}
												}
											}
											else
											{
												if(rsrp < -97.5)
												{
													if(cell < 29817216.5)
													{
														if(sinr < -1.5)
														{
															if(rsrq < -11.5)
																return 6.65557;
															else
																return 5.997;
														}
														else
															return 7.73694;
													}
													else
													{
														if(rsrq < -11)
															return 9.21659;
														else
															return 7.56144;
													}
												}
												else
													return 0.355241;
											}
										}
									}
									else
									{
										if(ta < 37)
										{
											if(sinr < -3)
												return 2.01816;
											else
											{
												if(velocity < 27.875)
												{
													if(sinr < -0.5)
														return 6.29924;
													else
													{
														if(rsrp < -97.5)
														{
															if(sinr < 1)
																return 8.47458;
															else
															{
																if(sinr < 4.5)
																	return 7.04846;
																else
																	return 7.75194;
															}
														}
														else
														{
															if(sinr < 3)
																return 10.1523;
															else
																return 8.60215;
														}
													}
												}
												else
													return 5.07292;
											}
										}
										else
											return 0.219262;
									}
								}
								else
									return 20.7254;
							}
							else
								return 15.534;
						}
					}
				}
				else
				{
					if(payload < 0.3)
					{
						if(rsrp < -90.5)
						{
							if(sinr < 18.5)
							{
								if(velocity < 13.985)
								{
									if(f < 2232.5)
									{
										if(sinr < 17)
											return 5.83944;
										else
											return 5.16131;
									}
									else
										return 5.03147;
								}
								else
									return 4.23282;
							}
							else
								return 2.73974;
						}
						else
						{
							if(cell < 27977088)
								return 6.06063;
							else
								return 5.36915;
						}
					}
					else
					{
						if(velocity < 1.43)
						{
							if(cell < 28327300.5)
								return 7.40741;
							else
							{
								if(payload < 0.75)
									return 8.65801;
								else
									return 9.66184;
							}
						}
						else
						{
							if(ta < 8.5)
							{
								if(rsrp < -98)
									return 4.17537;
								else
								{
									if(f < 2232.5)
									{
										if(sinr < 22.5)
										{
											if(ta < 3.5)
											{
												if(cqi < 13.5)
												{
													if(payload < 0.75)
														return 6.48298;
													else
														return 6.99913;
												}
												else
													return 7.87402;
											}
											else
											{
												if(cell < 28071170.5)
												{
													if(rsrp < -91)
														return 7.01139;
													else
														return 8.69565;
												}
												else
												{
													if(cell < 28969985)
													{
														if(cqi < 3.5)
															return 9.4451;
														else
															return 10.2696;
													}
													else
													{
														if(cqi < 10.5)
														{
															if(rsrp < -93)
																return 9.63855;
															else
																return 8.81057;
														}
														else
															return 7.7821;
													}
												}
											}
										}
										else
											return 10.3896;
									}
									else
										return 4.58453;
								}
							}
							else
							{
								if(sinr < 7)
								{
									if(sinr < 3.5)
										return 6.38978;
									else
										return 10.7527;
								}
								else
								{
									if(ta < 10.5)
									{
										if(rsrp < -92.5)
											return 5.869564;
										else
										{
											if(sinr < 27)
												return 4.5065733333;
											else
												return 5.53633;
										}
									}
									else
									{
										if(velocity < 23.905)
										{
											if(rsrq < -5.5)
												return 8.08081;
											else
												return 6.80272;
										}
										else
											return 4.49944;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				if(rsrp < -94.5)
				{
					if(ta < 13.5)
					{
						if(velocity < 14.145)
						{
							if(velocity < 3.51)
							{
								if(rsrp < -97)
								{
									if(rsrq < -8.5)
									{
										if(sinr < 4.5)
										{
											if(rsrp < -109)
												return 1.9109;
											else
												return 3.18282;
										}
										else
											return 4.56361;
									}
									else
									{
										if(cqi < 6)
											return 5.75678;
										else
										{
											if(rsrp < -99.5)
												return 5.5325;
											else
											{
												if(sinr < 7.5)
													return 4.28801;
												else
													return 4.78899;
											}
										}
									}
								}
								else
									return 10.084;
							}
							else
							{
								if(ta < 8.5)
								{
									if(cell < 28367746)
									{
										if(rsrp < -105)
										{
											if(rsrp < -106.5)
												return 7.45573;
											else
												return 9.55224;
										}
										else
										{
											if(velocity < 14.025)
											{
												if(rsrp < -96.5)
													return 11.7436;
												else
													return 10.8794;
											}
											else
												return 13.0364;
										}
									}
									else
									{
										if(sinr < 2.5)
										{
											if(rsrp < -98)
												return 11.5774;
											else
												return 7.97246;
										}
										else
										{
											if(sinr < 9)
											{
												if(payload < 2.5)
													return 1.68634;
												else
													return 4.88599;
											}
											else
											{
												if(rsrp < -99)
													return 6.89655;
												else
													return 7.8125;
											}
										}
									}
								}
								else
								{
									if(cqi < 4.5)
										return 13.4831;
									else
									{
										if(sinr < 12)
										{
											if(ta < 9.5)
											{
												if(rsrq < -10.5)
													return 6.23701;
												else
												{
													if(rsrp < -99)
														return 1.80811;
													else
														return 3.29625;
												}
											}
											else
											{
												if(rsrq < -9)
												{
													if(cqi < 5.5)
														return 8.36237;
													else
														return 6.31247;
												}
												else
													return 11.0497;
											}
										}
										else
											return 10.3829;
									}
								}
							}
						}
						else
						{
							if(sinr < 0.5)
							{
								if(cell < 28367745.5)
								{
									if(payload < 2.5)
									{
										if(velocity < 15.4)
											return 3.98605;
										else
											return 4.59781;
									}
									else
										return 6.62069;
								}
								else
								{
									if(rsrp < -101.5)
										return 2.60332;
									else
										return 1.98118;
								}
							}
							else
							{
								if(rsrq < -9.5)
								{
									if(cell < 29142272.5)
									{
										if(cqi < 8.5)
										{
											if(cqi < 7)
												return 8.50159;
											else
												return 7.29483;
										}
										else
											return 5.30152;
									}
									else
										return 12.0664;
								}
								else
								{
									if(velocity < 14.76)
									{
										if(rsrp < -95.5)
											return 3.8666;
										else
											return 3.03663;
									}
									else
									{
										if(f < 2232.5)
										{
											if(rsrp < -107.5)
												return 3.72439;
											else
											{
												if(rsrp < -100.5)
													return 5.49022;
												else
													return 4.9922625;
											}
										}
										else
											return 6.27779;
									}
								}
							}
						}
					}
					else
					{
						if(cell < 32400256.5)
						{
							if(sinr < 9.5)
							{
								if(cqi < 7.5)
								{
									if(ta < 15)
									{
										if(cqi < 6)
											return 15.2575;
										else
											return 6.87876;
									}
									else
									{
										if(payload < 2.5)
										{
											if(cell < 28069763)
											{
												if(velocity < 23.345)
													return 13.104;
												else
													return 9.2539;
											}
											else
											{
												if(sinr < 1.5)
													return 3.35149;
												else
													return 4.43582;
											}
										}
										else
										{
											if(ta < 19.5)
											{
												if(rsrq < -10.5)
													return 2.95676;
												else
												{
													if(velocity < 16.26)
													{
														if(rsrq < -9.5)
															return 4.39802;
														else
															return 6.91643;
													}
													else
													{
														if(rsrp < -98.5)
															return 8.35073;
														else
															return 7.07339;
													}
												}
											}
											else
											{
												if(ta < 39)
												{
													if(rsrq < -10)
														return 2.87081;
													else
														return 0.33306;
												}
												else
													return 4.97616;
											}
										}
									}
								}
								else
								{
									if(rsrp < -104)
										return 11.2835;
									else
									{
										if(sinr < 5.5)
											return 2.7938933333;
										else
										{
											if(rsrp < -100.5)
												return 4.061928;
											else
												return 5.24246;
										}
									}
								}
							}
							else
							{
								if(cqi < 10)
								{
									if(velocity < 33.54)
										return 9.50872;
									else
										return 13.5823;
								}
								else
									return 10.2784;
							}
						}
						else
						{
							if(payload < 2.5)
								return 17.316;
							else
								return 12.5065;
						}
					}
				}
				else
				{
					if(rsrq < -10.5)
					{
						if(ta < 2.5)
							return 1.24079;
						else
						{
							if(payload < 2.5)
							{
								if(sinr < 2.5)
									return 9.630814;
								else
									return 12.4417;
							}
							else
							{
								if(sinr < -1.5)
									return 7.8457;
								else
									return 6.5321775;
							}
						}
					}
					else
					{
						if(cqi < 14.5)
						{
							if(cell < 26385409)
							{
								if(ta < 1.5)
									return 6.89061;
								else
								{
									if(rsrq < -8)
										return 8.47907;
									else
										return 9.4446583333;
								}
							}
							else
							{
								if(cell < 26590850.5)
									return 14.6396;
								else
								{
									if(rsrq < -6.5)
									{
										if(ta < 3.5)
											return 3.57888;
										else
										{
											if(cell < 27535108.5)
											{
												if(cqi < 10.5)
												{
													if(cqi < 9.5)
													{
														if(ta < 9)
															return 11.0599;
														else
															return 8.7146;
													}
													else
														return 15.9521;
												}
												else
													return 6.54397;
											}
											else
											{
												if(cell < 27771012.5)
												{
													if(rsrp < -91)
														return 16.9133;
													else
														return 11.4204;
												}
												else
												{
													if(ta < 7.5)
													{
														if(rsrp < -93.5)
															return 7.08278;
														else
														{
															if(rsrp < -89.5)
															{
																if(velocity < 6.425)
																{
																	if(payload < 2.5)
																		return 9.87045;
																	else
																		return 9.34216;
																}
																else
																{
																	if(sinr < 3.5)
																		return 10.1074;
																	else
																		return 11.0830666667;
																}
															}
															else
																return 7.76448;
														}
													}
													else
													{
														if(velocity < 13.34)
														{
															if(cqi < 8.5)
																return 13.4907;
															else
																return 15.4143;
														}
														else
														{
															if(sinr < 11)
															{
																if(payload < 2.5)
																	return 8.33768;
																else
																	return 10.3761;
															}
															else
																return 12.2982;
														}
													}
												}
											}
										}
									}
									else
									{
										if(velocity < 7.595)
										{
											if(rsrp < -92)
												return 15.0659;
											else
												return 13.17276;
										}
										else
										{
											if(velocity < 9.465)
												return 5.88019;
											else
											{
												if(cqi < 11.5)
												{
													if(ta < 5.5)
														return 9.0978;
													else
													{
														if(cell < 29483522)
															return 10.92225;
														else
															return 9.73828;
													}
												}
												else
												{
													if(ta < 7)
														return 12.6984;
													else
														return 11.6732;
												}
											}
										}
									}
								}
							}
						}
						else
						{
							if(sinr < 24.5)
							{
								if(rsrp < -93)
									return 2.83638;
								else
								{
									if(f < 2232.5)
										return 5.98802;
									else
									{
										if(rsrq < -7.5)
											return 9.12895;
										else
										{
											if(rsrp < -91.5)
												return 8.94855;
											else
												return 7.41713;
										}
									}
								}
							}
							else
							{
								if(ta < 7)
									return 11.5523;
								else
									return 10.5448;
							}
						}
					}
				}
			}
		}
		else
		{
			if(sinr < -3)
				return 0.3382533333;
			else
			{
				if(rsrq < -4.5)
				{
					if(payload < 1.5)
					{
						if(cell < 29483522)
						{
							if(payload < 0.3)
							{
								if(ta < 2.5)
								{
									if(cqi < 7.5)
										return 22.8572;
									else
									{
										if(sinr < 23)
										{
											if(velocity < 13.77)
											{
												if(velocity < 12.605)
												{
													if(sinr < 19)
													{
														if(rsrp < -86.5)
															return 5.00002;
														else
															return 5.46973;
													}
													else
														return 4.65181;
												}
												else
												{
													if(rsrp < -75)
														return 5.92595;
													else
														return 6.72271;
												}
											}
											else
												return 4.79663;
										}
										else
										{
											if(rsrp < -72)
												return 5.48060875;
											else
												return 13.3334;
										}
									}
								}
								else
								{
									if(rsrp < -81.5)
									{
										if(rsrp < -83.5)
										{
											if(cqi < 10.5)
											{
												if(ta < 5.5)
													return 3.09578;
												else
												{
													if(sinr < 21.5)
													{
														if(ta < 7.5)
														{
															if(velocity < 9.275)
																return 6.15387;
															else
																return 5.59443;
														}
														else
														{
															if(cqi < 6.5)
																return 4.71398;
															else
																return 3.39698;
														}
													}
													else
													{
														if(rsrp < -85.5)
															return 5.12822;
														else
															return 6.83763;
													}
												}
											}
											else
											{
												if(ta < 3.5)
													return 8.08084;
												else
												{
													if(velocity < 13.935)
													{
														if(rsrp < -84.5)
														{
															if(ta < 8.5)
															{
																if(f < 2232.5)
																{
																	if(rsrp < -87.5)
																		return 5.06331;
																	else
																		return 4.42856;
																}
																else
																	return 6.01506;
															}
															else
																return 6.83763;
														}
														else
															return 9.52385;
													}
													else
													{
														if(rsrp < -84.5)
															return 4.76192;
														else
															return 4.14509;
													}
												}
											}
										}
										else
										{
											if(sinr < 18.5)
											{
												if(sinr < 14)
													return 10.2564;
												else
													return 8.33337;
											}
											else
											{
												if(ta < 4.5)
													return 5.03147;
												else
												{
													if(cell < 27771139.5)
														return 6.20157;
													else
														return 7.06511;
												}
											}
										}
									}
									else
									{
										if(rsrq < -5.5)
										{
											if(rsrq < -7.5)
												return 2.47679;
											else
											{
												if(rsrp < -73.5)
												{
													if(sinr < 9.5)
														return 5.29803;
													else
													{
														if(ta < 7.5)
														{
															if(rsrp < -76.5)
																return 4.460788;
															else
																return 5.12822;
														}
														else
															return 3.86475;
													}
												}
												else
												{
													if(ta < 8)
													{
														if(sinr < 27.5)
														{
															if(rsrp < -71)
																return 3.05345;
															else
																return 2.55592;
														}
														else
														{
															if(rsrp < -70.5)
																return 3.57144;
															else
																return 4.36483;
														}
													}
													else
														return 4.8193;
												}
											}
										}
										else
										{
											if(cell < 28581506)
											{
												if(sinr < 36.5)
												{
													if(velocity < 15.02)
														return 6.0990533333;
													else
														return 5.212245;
												}
												else
													return 4.96896;
											}
											else
												return 4.32434;
										}
									}
								}
							}
							else
							{
								if(ta < 4.5)
								{
									if(sinr < 24.5)
									{
										if(cell < 27771524)
										{
											if(sinr < 16.5)
											{
												if(cqi < 11.5)
												{
													if(rsrp < -73)
													{
														if(sinr < 11.5)
														{
															if(rsrq < -7.5)
															{
																if(sinr < 6)
																	return 9.88875;
																else
																	return 6.56814;
															}
															else
															{
																if(rsrq < -6.5)
																{
																	if(sinr < 9.5)
																	{
																		if(ta < 3)
																		{
																			if(velocity < 11.645)
																				return 10.3627;
																			else
																				return 9.1954;
																		}
																		else
																			return 10.2041;
																	}
																	else
																		return 10.4575;
																}
																else
																	return 9.28074;
															}
														}
														else
															return 6.36436;
													}
													else
													{
														if(rsrq < -7.5)
															return 11.6279;
														else
															return 14.7059;
													}
												}
												else
												{
													if(ta < 3.5)
													{
														if(ta < 2)
														{
															if(rsrp < -81.5)
																return 7.20721;
															else
																return 9.35673;
														}
														else
														{
															if(rsrq < -6)
																return 5.23218;
															else
																return 6.23053;
														}
													}
													else
													{
														if(sinr < 11.5)
															return 10.6242;
														else
															return 9.17431;
													}
												}
											}
											else
											{
												if(cqi < 10.5)
												{
													if(cqi < 9.5)
														return 18.7354;
													else
														return 15.625;
												}
												else
												{
													if(rsrp < -80)
													{
														if(payload < 0.75)
															return 14.1343;
														else
															return 12.3267;
													}
													else
													{
														if(rsrp < -72.5)
														{
															if(sinr < 17.5)
																return 6.42055;
															else
															{
																if(cqi < 12.5)
																{
																	if(sinr < 19)
																		return 10.7817;
																	else
																		return 9.23788;
																}
																else
																{
																	if(cqi < 14.5)
																		return 7.46269;
																	else
																		return 8.31601;
																}
															}
														}
														else
														{
															if(cell < 26590849.5)
																return 17.9372;
															else
																return 9.38967;
														}
													}
												}
											}
										}
										else
										{
											if(cqi < 10.5)
												return 13.913;
											else
											{
												if(sinr < 20.5)
												{
													if(cell < 28879104.5)
														return 7.16846;
													else
													{
														if(rsrp < -83.5)
														{
															if(payload < 0.75)
																return 6.24025;
															else
																return 5.75954;
														}
														else
															return 5.10204;
													}
												}
												else
												{
													if(velocity < 4.805)
													{
														if(rsrq < -6)
														{
															if(sinr < 23)
																return 7.31261;
															else
																return 8.58369;
														}
														else
															return 10.4849;
													}
													else
													{
														if(rsrq < -5.5)
															return 7.63359;
														else
															return 6.23053;
													}
												}
											}
										}
									}
									else
									{
										if(f < 2232.5)
										{
											if(rsrq < -5.5)
											{
												if(ta < 2)
												{
													if(sinr < 28.5)
														return 10.4712;
													else
														return 9.00901;
												}
												else
												{
													if(rsrp < -79)
														return 6.7587766667;
													else
													{
														if(ta < 3.5)
															return 5.93032;
														else
														{
															if(sinr < 29.5)
																return 8.3682;
															else
																return 9.72053;
														}
													}
												}
											}
											else
											{
												if(sinr < 29)
												{
													if(payload < 0.75)
													{
														if(sinr < 27)
															return 9.80392;
														else
															return 7.84314;
													}
													else
														return 21.1082;
												}
												else
												{
													if(sinr < 39.5)
													{
														if(rsrp < -76.5)
														{
															if(sinr < 30.5)
																return 10.3627;
															else
																return 8.03213;
														}
														else
														{
															if(sinr < 35)
																return 6.56585;
															else
																return 7.72947;
														}
													}
													else
														return 10.7527;
												}
											}
										}
										else
											return 5.94354;
									}
								}
								else
								{
									if(velocity < 34.52)
									{
										if(rsrp < -68.5)
										{
											if(cell < 28068481.5)
											{
												if(cqi < 12.5)
												{
													if(rsrp < -81)
													{
														if(rsrq < -9)
															return 3.15209;
														else
														{
															if(cqi < 8.5)
															{
																if(cqi < 7)
																	return 8.63931;
																else
																	return 9.41176;
															}
															else
															{
																if(sinr < 20.5)
																{
																	if(rsrq < -6.5)
																	{
																		if(rsrp < -85.5)
																			return 7.93651;
																		else
																			return 7.11744;
																	}
																	else
																	{
																		if(velocity < 13.645)
																		{
																			if(rsrp < -83)
																			{
																				if(payload < 0.75)
																					return 7.50469;
																				else
																					return 6.9808;
																			}
																			else
																				return 5.87372;
																		}
																		else
																		{
																			if(cqi < 10.5)
																				return 5.64573;
																			else
																				return 6.26468;
																		}
																	}
																}
																else
																{
																	if(sinr < 27)
																	{
																		if(cqi < 9.5)
																			return 7.25953;
																		else
																		{
																			if(rsrp < -83.5)
																				return 7.4982233333;
																			else
																				return 8.52878;
																		}
																	}
																	else
																		return 8.14664;
																}
															}
														}
													}
													else
													{
														if(velocity < 21.42)
														{
															if(rsrq < -5.5)
																return 4.8932966667;
															else
																return 5.43848;
														}
														else
															return 4.39319;
													}
												}
												else
												{
													if(velocity < 15.075)
													{
														if(rsrp < -85.5)
															return 9.76801;
														else
														{
															if(f < 2232.5)
															{
																if(payload < 0.75)
																{
																	if(rsrp < -71)
																	{
																		if(cqi < 13.5)
																			return 7.1048;
																		else
																			return 6.5404142857;
																	}
																	else
																		return 6.0698;
																}
																else
																	return 8.16327;
															}
															else
															{
																if(rsrp < -79)
																{
																	if(rsrq < -5.5)
																		return 7.57576;
																	else
																		return 6.36943;
																}
																else
																	return 8.938825;
															}
														}
													}
													else
													{
														if(sinr < 34.5)
														{
															if(velocity < 15.67)
																return 12.1766;
															else
															{
																if(payload < 0.75)
																	return 11.4286;
																else
																	return 9.88875;
															}
														}
														else
															return 7.01139;
													}
												}
											}
											else
											{
												if(ta < 6.5)
													return 8.81057;
												else
												{
													if(payload < 0.75)
														return 2.76052;
													else
														return 4.36681;
												}
											}
										}
										else
										{
											if(rsrp < -64.5)
												return 5.39811;
											else
												return 3.72787;
										}
									}
									else
										return 11.3636;
								}
							}
						}
						else
						{
							if(payload < 0.3)
							{
								if(sinr < 20)
								{
									if(ta < 22)
									{
										if(velocity < 13.435)
										{
											if(ta < 4.5)
											{
												if(sinr < 18.5)
													return 5.4422;
												else
													return 4.73375;
											}
											else
											{
												if(sinr < 13)
													return 3.92158;
												else
													return 5.09556;
											}
										}
										else
										{
											if(rsrp < -85)
												return 6.20157;
											else
												return 5.06331;
										}
									}
									else
										return 3.66974;
								}
								else
								{
									if(velocity < 13.65)
									{
										if(rsrp < -86.5)
											return 5.06331;
										else
											return 5.55558;
									}
									else
									{
										if(ta < 14.5)
											return 7.5472;
										else
											return 5.36915;
									}
								}
							}
							else
							{
								if(ta < 9.5)
								{
									if(cell < 29913345.5)
									{
										if(cqi < 3.5)
										{
											if(payload < 0.75)
												return 9.63855;
											else
												return 8.53789;
										}
										else
										{
											if(velocity < 10)
												return 21.164;
											else
											{
												if(ta < 4.5)
													return 14.1343;
												else
												{
													if(velocity < 16.32)
													{
														if(velocity < 14.545)
														{
															if(velocity < 13.65)
															{
																if(rsrp < -83.5)
																{
																	if(rsrq < -5.5)
																		return 12.2888;
																	else
																		return 10.4987;
																}
																else
																	return 7.95229;
															}
															else
															{
																if(rsrq < -5.5)
																	return 12.966;
																else
																	return 12.3457;
															}
														}
														else
														{
															if(rsrp < -80)
															{
																if(sinr < 22.5)
																	return 9.23788;
																else
																	return 9.85222;
															}
															else
																return 7.95229;
														}
													}
													else
														return 13.913;
												}
											}
										}
									}
									else
									{
										if(cqi < 14.5)
										{
											if(velocity < 8.495)
											{
												if(sinr < 21.5)
													return 10.5402;
												else
													return 8.537095;
											}
											else
											{
												if(ta < 1.5)
												{
													if(cqi < 13.5)
													{
														if(rsrq < -5.5)
															return 5.83942;
														else
															return 6.61157;
													}
													else
														return 8.60215;
												}
												else
													return 6.0944766667;
											}
										}
										else
										{
											if(velocity < 32.545)
											{
												if(velocity < 21.775)
													return 11.0345;
												else
													return 10.4031;
											}
											else
												return 8.60215;
										}
									}
								}
								else
								{
									if(velocity < 27.96)
									{
										if(rsrp < -85.5)
											return 7.60456;
										else
											return 8.56531;
									}
									else
									{
										if(sinr < 17.5)
											return 7.3939966667;
										else
											return 7.0922;
									}
								}
							}
						}
					}
					else
					{
						if(payload < 2.5)
						{
							if(velocity < 11.555)
							{
								if(rsrp < -76)
								{
									if(sinr < 24.5)
									{
										if(rsrq < -5.5)
										{
											if(sinr < 10.5)
											{
												if(rsrp < -86.5)
													return 9.78593;
												else
													return 7.21371;
											}
											else
											{
												if(cqi < 11)
													return 10.148595;
												else
												{
													if(cqi < 14)
													{
														if(f < 2232.5)
															return 9.71463;
														else
														{
															if(cell < 26378754.5)
																return 8.97364;
															else
															{
																if(rsrq < -6.5)
																	return 9.00394;
																else
																	return 9.84615;
															}
														}
													}
													else
													{
														if(rsrp < -79.5)
															return 7.30594;
														else
															return 9.86436;
													}
												}
											}
										}
										else
											return 13.6752;
									}
									else
									{
										if(ta < 5.5)
										{
											if(rsrq < -7.5)
												return 10.3761;
											else
												return 9.58658;
										}
										else
											return 13.9983;
									}
								}
								else
									return 14.9393;
							}
							else
							{
								if(sinr < 10.5)
								{
									if(ta < 4.5)
										return 25.5183;
									else
										return 11.0421;
								}
								else
								{
									if(velocity < 33.165)
									{
										if(cqi < 14)
										{
											if(cell < 29652225)
											{
												if(cell < 26590850.5)
												{
													if(rsrp < -76.5)
													{
														if(cqi < 10)
															return 10.5125;
														else
														{
															if(ta < 4)
																return 11.6228;
															else
																return 12.4902;
														}
													}
													else
														return 14.9533;
												}
												else
												{
													if(rsrp < -81)
													{
														if(sinr < 33.5)
														{
															if(ta < 5.5)
															{
																if(cqi < 12.5)
																{
																	if(rsrp < -86.5)
																	{
																		if(sinr < 12.5)
																			return 13.4116;
																		else
																			return 14.07472;
																	}
																	else
																	{
																		if(rsrp < -84.5)
																			return 15.2964;
																		else
																			return 14.64695;
																	}
																}
																else
																{
																	if(ta < 2.5)
																		return 16.178;
																	else
																		return 15.534;
																}
															}
															else
															{
																if(ta < 12.5)
																	return 8.20934;
																else
																{
																	if(rsrq < -7)
																		return 12.2324;
																	else
																		return 14.3369;
																}
															}
														}
														else
															return 9.34579;
													}
													else
													{
														if(f < 2232.5)
														{
															if(rsrp < -75.5)
															{
																if(rsrp < -78.5)
																	return 17.7187;
																else
																	return 21.5054;
															}
															else
																return 15.3404;
														}
														else
															return 13.0293;
													}
												}
											}
											else
											{
												if(rsrp < -83)
													return 10.596;
												else
												{
													if(sinr < 13.5)
														return 8.63931;
													else
														return 9.41176;
												}
											}
										}
										else
										{
											if(rsrq < -7.5)
												return 15.0659;
											else
											{
												if(ta < 5.5)
												{
													if(ta < 4)
													{
														if(rsrp < -71.5)
														{
															if(cell < 27078658)
																return 6.91742;
															else
															{
																if(velocity < 13.375)
																	return 10.5402;
																else
																{
																	if(rsrp < -78)
																	{
																		if(rsrq < -6)
																			return 9.59233;
																		else
																			return 10.1394;
																	}
																	else
																		return 8.42549;
																}
															}
														}
														else
															return 14.3113;
													}
													else
														return 6.18956;
												}
												else
													return 14.0598;
											}
										}
									}
									else
										return 2.81343;
								}
							}
						}
						else
						{
							if(rsrq < -5.5)
							{
								if(sinr < 20)
								{
									if(rsrp < -82.5)
									{
										if(sinr < 9)
										{
											if(velocity < 12.995)
											{
												if(rsrp < -85.5)
													return 8.93189;
												else
												{
													if(rsrp < -84.5)
														return 11.988;
													else
														return 11.1008;
												}
											}
											else
												return 7.01344;
										}
										else
										{
											if(velocity < 21.785)
											{
												if(cqi < 9.5)
												{
													if(ta < 5)
													{
														if(rsrp < -86.5)
															return 13.4907;
														else
															return 12.766;
													}
													else
														return 15.22034;
												}
												else
												{
													if(rsrq < -6.5)
													{
														if(rsrp < -86)
															return 15.2296;
														else
														{
															if(rsrq < -9.5)
																return 13.5823;
															else
																return 12.7592;
														}
													}
													else
													{
														if(f < 2232.5)
															return 12.3199666667;
														else
															return 11.5274;
													}
												}
											}
											else
												return 10.0167;
										}
									}
									else
									{
										if(rsrp < -78.5)
										{
											if(sinr < 13.5)
											{
												if(ta < 3)
													return 16.1454;
												else
												{
													if(cqi < 11.5)
														return 12.8205;
													else
														return 13.5113;
												}
											}
											else
											{
												if(cqi < 11.5)
													return 15.9151;
												else
												{
													if(sinr < 16.5)
														return 22.1198;
													else
														return 21.4095;
												}
											}
										}
										else
										{
											if(cqi < 8.5)
												return 20.4255;
											else
											{
												if(rsrq < -8)
													return 10.5727;
												else
												{
													if(velocity < 6.505)
													{
														if(ta < 4.5)
														{
															if(sinr < 14)
																return 15.2381;
															else
																return 13.3779;
														}
														else
															return 13.6286;
													}
													else
														return 16.1074;
												}
											}
										}
									}
								}
								else
								{
									if(ta < 4)
									{
										if(cqi < 12.5)
										{
											if(cell < 29652226)
											{
												if(sinr < 23)
													return 12.8963;
												else
													return 15.8311;
											}
											else
												return 9.89691;
										}
										else
										{
											if(rsrq < -6.5)
												return 7.12166;
											else
											{
												if(sinr < 21.5)
													return 9.61924;
												else
													return 10.2797;
											}
										}
									}
									else
									{
										if(ta < 6.5)
										{
											if(sinr < 23)
												return 22.409;
											else
												return 14.7149;
										}
										else
										{
											if(sinr < 27.5)
											{
												if(sinr < 24.5)
												{
													if(rsrp < -84.5)
														return 12.8548;
													else
														return 11.98975;
												}
												else
													return 15.8311;
											}
											else
												return 11.6392;
										}
									}
								}
							}
							else
							{
								if(velocity < 16.44)
								{
									if(velocity < 9.075)
										return 21.4669;
									else
									{
										if(ta < 5.5)
										{
											if(velocity < 12.985)
											{
												if(cqi < 14)
													return 10.6242;
												else
													return 13.2140333333;
											}
											else
											{
												if(velocity < 16.06)
												{
													if(sinr < 13.5)
														return 17.48;
													else
														return 15.7868;
												}
												else
													return 14.742;
											}
										}
										else
										{
											if(rsrp < -81.5)
											{
												if(sinr < 21.5)
													return 13.7773;
												else
													return 16.3043;
											}
											else
												return 22.1402;
										}
									}
								}
								else
								{
									if(cqi < 13)
									{
										if(ta < 17)
											return 10.6525;
										else
											return 14.7874;
									}
									else
									{
										if(velocity < 28.125)
										{
											if(rsrp < -81)
												return 25;
											else
												return 22.8354;
										}
										else
											return 19.8347;
									}
								}
							}
						}
					}
				}
				else
				{
					if(sinr < 35.5)
					{
						if(rsrp < -68)
						{
							if(rsrp < -70.5)
							{
								if(payload < 1.5)
								{
									if(rsrp < -73)
										return 9.245825;
									else
										return 6.01504;
								}
								else
								{
									if(rsrp < -78.5)
									{
										if(payload < 2.5)
											return 13.4567;
										else
											return 12.959;
									}
									else
										return 14.67335;
								}
							}
							else
								return 19.802;
						}
						else
						{
							if(payload < 0.55)
								return 5.58666;
							else
							{
								if(payload < 2.5)
								{
									if(payload < 1.5)
										return 10.4302;
									else
										return 11.9671;
								}
								else
									return 13.7852;
							}
						}
					}
					else
						return 22.2223;
				}
			}
		}
	}
	else
	{
		if(sinr < 12.5)
		{
			if(rsrp < -91.5)
			{
				if(payload < 6.5)
				{
					if(rsrp < -98.5)
					{
						if(ta < 8.5)
						{
							if(sinr < 8.5)
							{
								if(velocity < 12.705)
								{
									if(sinr < -1)
										return 2.91457;
									else
									{
										if(cqi < 8.5)
										{
											if(velocity < 9.65)
											{
												if(rsrp < -103)
													return 8.7418733333;
												else
													return 12.7714;
											}
											else
												return 14.218;
										}
										else
										{
											if(rsrp < -103)
												return 7.28332;
											else
												return 4.31965;
										}
									}
								}
								else
								{
									if(rsrp < -100.5)
									{
										if(cqi < 6.5)
											return 8.9748133333;
										else
											return 10.2204;
									}
									else
									{
										if(ta < 7.5)
											return 8.79846;
										else
										{
											if(cqi < 6)
												return 12.5707;
											else
											{
												if(rsrq < -8.5)
													return 14.3756;
												else
													return 15.3374;
											}
										}
									}
								}
							}
							else
							{
								if(sinr < 9.5)
								{
									if(payload < 5.5)
										return 14.9198;
									else
										return 15.7947;
								}
								else
									return 12.551;
							}
						}
						else
						{
							if(ta < 13.5)
							{
								if(sinr < -0.5)
								{
									if(payload < 4.5)
										return 9.86436;
									else
										return 13.7127;
								}
								else
								{
									if(velocity < 9.9)
									{
										if(velocity < 5.375)
											return 2.8868325;
										else
											return 2.22454;
									}
									else
									{
										if(sinr < 2.5)
											return 11.564;
										else
										{
											if(payload < 4.5)
											{
												if(ta < 9.5)
													return 6.71987;
												else
													return 5.46728;
											}
											else
											{
												if(sinr < 5.5)
												{
													if(rsrp < -105.5)
														return 5.96036;
													else
														return 6.92521;
												}
												else
													return 8.20555;
											}
										}
									}
								}
							}
							else
							{
								if(ta < 14.5)
								{
									if(rsrp < -103)
										return 10.6833;
									else
										return 16.5289;
								}
								else
								{
									if(rsrq < -15.5)
										return 9.3222;
									else
									{
										if(velocity < 10.545)
										{
											if(rsrq < -14)
												return 7.52823;
											else
											{
												if(cell < 29817216)
													return 5.16629;
												else
													return 3.53982;
											}
										}
										else
										{
											if(velocity < 30.405)
											{
												if(velocity < 22)
												{
													if(rsrp < -100.5)
													{
														if(payload < 5.5)
															return 9.07647;
														else
															return 6.53862;
													}
													else
													{
														if(sinr < -2.5)
															return 8.69723;
														else
															return 9.19012;
													}
												}
												else
													return 5.09149;
											}
											else
												return 9.21247;
										}
									}
								}
							}
						}
					}
					else
					{
						if(sinr < 10.5)
						{
							if(cell < 26382211.5)
							{
								if(payload < 4.5)
								{
									if(rsrp < -95.5)
										return 5.77201;
									else
									{
										if(velocity < 13.685)
											return 8.67444;
										else
											return 7.13171;
									}
								}
								else
									return 9.28074;
							}
							else
							{
								if(velocity < 32.495)
								{
									if(cqi < 13)
									{
										if(ta < 15.5)
										{
											if(ta < 3)
											{
												if(rsrp < -96)
													return 12.5274;
												else
												{
													if(payload < 5)
														return 8.85445;
													else
														return 7.50469;
												}
											}
											else
											{
												if(sinr < -2.5)
													return 5.39084;
												else
												{
													if(cell < 27142788)
													{
														if(rsrq < -9)
															return 15.9257;
														else
															return 17.3442;
													}
													else
													{
														if(velocity < 2.065)
														{
															if(rsrp < -95)
															{
																if(ta < 8)
																	return 19.2678;
																else
																	return 20.0669;
															}
															else
															{
																if(sinr < 6.5)
																{
																	if(sinr < 2)
																		return 12.3533;
																	else
																		return 13.1687;
																}
																else
																	return 10.5657;
															}
														}
														else
														{
															if(sinr < -0.5)
																return 6.14361;
															else
															{
																if(velocity < 10.845)
																{
																	if(ta < 4.5)
																	{
																		if(cqi < 9.5)
																		{
																			if(velocity < 9.03)
																				return 16.219;
																			else
																				return 11.8308;
																		}
																		else
																			return 12.2026;
																	}
																	else
																	{
																		if(cqi < 5)
																			return 10.2324;
																		else
																		{
																			if(velocity < 9.66)
																				return 11.5815571429;
																			else
																				return 10.3896;
																		}
																	}
																}
																else
																{
																	if(payload < 5.5)
																	{
																		if(rsrq < -7.5)
																		{
																			if(cqi < 7)
																				return 16.10005;
																			else
																			{
																				if(cell < 29391104.5)
																				{
																					if(sinr < 2.5)
																						return 14.2096;
																					else
																						return 15.5545;
																				}
																				else
																					return 12.8676;
																			}
																		}
																		else
																		{
																			if(rsrp < -93.5)
																			{
																				if(cqi < 9.5)
																				{
																					if(sinr < 9.5)
																						return 12.5078;
																					else
																						return 13.3278;
																				}
																				else
																				{
																					if(velocity < 15.165)
																						return 10.3093;
																					else
																						return 11.0619;
																				}
																			}
																			else
																				return 18.0505;
																		}
																	}
																	else
																	{
																		if(cell < 28879745.5)
																			return 18.8828;
																		else
																		{
																			if(rsrp < -97)
																				return 15.5491;
																			else
																				return 16.684;
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
											if(rsrp < -95.5)
												return 11.0701;
											else
											{
												if(rsrq < -8.5)
													return 9.96471;
												else
												{
													if(rsrp < -94)
														return 5.55363;
													else
														return 6.80079;
												}
											}
										}
									}
									else
									{
										if(payload < 5.5)
										{
											if(cell < 28878080.5)
												return 5.42152;
											else
											{
												if(rsrp < -94.5)
													return 6.69456;
												else
													return 7.68197;
											}
										}
										else
										{
											if(rsrq < -6.5)
												return 8.67993;
											else
												return 9.7107;
										}
									}
								}
								else
								{
									if(cell < 30649218.5)
										return 16.7926;
									else
									{
										if(rsrq < -9)
											return 15.4989;
										else
											return 16.0578;
									}
								}
							}
						}
						else
						{
							if(payload < 5.5)
							{
								if(payload < 4.5)
									return 15.6403;
								else
									return 12.7226;
							}
							else
							{
								if(velocity < 12.925)
								{
									if(rsrp < -94)
										return 20.3562;
									else
										return 21.7391;
								}
								else
									return 17.6665;
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
							if(rsrp < -109.5)
							{
								if(cqi < 6.5)
								{
									if(rsrq < -10.5)
										return 13.35;
									else
										return 8.10948;
								}
								else
									return 21.8132;
							}
							else
							{
								if(velocity < 3.275)
									return 5.93057;
								else
								{
									if(velocity < 8.39)
										return 10.6454;
									else
									{
										if(cell < 28369793.5)
										{
											if(cqi < 6.5)
												return 7.61905;
											else
												return 8.7402;
										}
										else
										{
											if(sinr < 0.5)
												return 10.2788;
											else
												return 8.82029;
										}
									}
								}
							}
						}
						else
						{
							if(ta < 19.5)
							{
								if(f < 1384.95)
									return 2.67264;
								else
								{
									if(cell < 26378497.5)
									{
										if(cell < 26377602.5)
											return 14.5778;
										else
											return 9.15631;
									}
									else
									{
										if(ta < 1.5)
										{
											if(cqi < 11)
											{
												if(sinr < 4.5)
													return 7.3791;
												else
													return 8.14747;
											}
											else
												return 12.6183;
										}
										else
										{
											if(rsrq < -8.5)
											{
												if(cqi < 9.5)
												{
													if(velocity < 17.135)
													{
														if(velocity < 16.005)
														{
															if(cqi < 7.5)
															{
																if(velocity < 13.875)
																{
																	if(ta < 16.5)
																	{
																		if(rsrp < -99.5)
																		{
																			if(cqi < 6.5)
																			{
																				if(rsrq < -9.5)
																				{
																					if(cell < 28366720)
																						return 8.9164075;
																					else
																					{
																						if(payload < 9)
																						{
																							if(rsrp < -102.5)
																								return 9.62034;
																							else
																								return 11.0497;
																						}
																						else
																							return 13.66065;
																					}
																				}
																				else
																				{
																					if(ta < 8)
																						return 19.3295;
																					else
																					{
																						if(rsrp < -102.5)
																							return 11.7917;
																						else
																							return 12.4103;
																					}
																				}
																			}
																			else
																				return 7.02371;
																		}
																		else
																		{
																			if(rsrp < -97.5)
																			{
																				if(cell < 28368385)
																				{
																					if(sinr < 4)
																						return 8.56875;
																					else
																					{
																						if(payload < 8)
																							return 15.891;
																						else
																							return 13.5415;
																					}
																				}
																				else
																					return 21.156;
																			}
																			else
																			{
																				if(rsrp < -96.5)
																				{
																					if(sinr < 6.5)
																					{
																						if(payload < 8.5)
																							return 10.3608;
																						else
																							return 9.46634;
																					}
																					else
																						return 12.3839;
																				}
																				else
																				{
																					if(sinr < 1)
																					{
																						if(ta < 8.5)
																							return 15.6671;
																						else
																						{
																							if(rsrq < -10)
																							{
																								if(rsrq < -11.5)
																								{
																									if(payload < 7.5)
																										return 12.684;
																									else
																										return 11.8694;
																								}
																								else
																									return 10.6048;
																							}
																							else
																								return 13.2286;
																						}
																					}
																					else
																					{
																						if(rsrp < -95.5)
																						{
																							if(rsrq < -11)
																								return 16.5387;
																							else
																								return 14.2096;
																						}
																						else
																						{
																							if(rsrq < -9.5)
																							{
																								if(cell < 28879105)
																									return 17.9344;
																								else
																									return 16.8579;
																							}
																							else
																							{
																								if(cqi < 6.5)
																									return 17.208;
																								else
																									return 12.7273;
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																	else
																	{
																		if(rsrp < -98)
																			return 14.6333;
																		else
																			return 22.2017;
																	}
																}
																else
																{
																	if(velocity < 13.89)
																		return 19.656;
																	else
																	{
																		if(rsrq < -10.5)
																		{
																			if(velocity < 14.22)
																				return 14.4029;
																			else
																			{
																				if(payload < 8.5)
																					return 13.4389;
																				else
																					return 12.4902;
																			}
																		}
																		else
																		{
																			if(ta < 9)
																				return 14.9841;
																			else
																				return 20.6879;
																		}
																	}
																}
															}
															else
															{
																if(ta < 8.5)
																{
																	if(cell < 28368385)
																	{
																		if(cell < 28367745)
																		{
																			if(ta < 6.5)
																			{
																				if(cqi < 8.5)
																					return 12.166;
																				else
																					return 13.14055;
																			}
																			else
																				return 11.5274;
																		}
																		else
																			return 20.1342;
																	}
																	else
																	{
																		if(rsrq < -9.5)
																		{
																			if(ta < 6.5)
																			{
																				if(velocity < 14.535)
																					return 9.15183;
																				else
																					return 8.45666;
																			}
																			else
																			{
																				if(rsrp < -94.5)
																					return 10.9364;
																				else
																					return 10.3627;
																			}
																		}
																		else
																			return 6.04483;
																	}
																}
																else
																{
																	if(rsrq < -9.5)
																	{
																		if(velocity < 14.78)
																		{
																			if(rsrp < -94)
																				return 10.59025;
																			else
																				return 14.716;
																		}
																		else
																			return 14.6991;
																	}
																	else
																		return 17.6193;
																}
															}
														}
														else
														{
															if(velocity < 16.74)
															{
																if(rsrp < -98)
																	return 5.35885;
																else
																	return 7.91687;
															}
															else
																return 14.4202;
														}
													}
													else
													{
														if(rsrq < -12)
															return 13.5593;
														else
														{
															if(cqi < 8.5)
															{
																if(ta < 6)
																	return 19.5804;
																else
																{
																	if(ta < 16)
																		return 16.8568571429;
																	else
																		return 18.3533;
																}
															}
															else
																return 14.7407;
														}
													}
												}
												else
												{
													if(velocity < 4.16)
													{
														if(sinr < 5)
															return 12.7206;
														else
															return 11.1398;
													}
													else
													{
														if(cell < 28879105)
														{
															if(rsrp < -99.5)
																return 20.5011;
															else
																return 18.5009;
														}
														else
														{
															if(payload < 9)
																return 17.288;
															else
															{
																if(cqi < 12.5)
																	return 16.3499;
																else
																	return 15.5009;
															}
														}
													}
												}
											}
											else
											{
												if(cqi < 8.5)
												{
													if(rsrp < -99.5)
													{
														if(cqi < 6.5)
														{
															if(rsrp < -101)
																return 14.9477;
															else
																return 20.6034;
														}
														else
														{
															if(rsrp < -102)
																return 21.8043;
															else
															{
																if(sinr < 6.5)
																	return 19.9336;
																else
																	return 21.2515;
															}
														}
													}
													else
													{
														if(cell < 28367745)
															return 20.2817;
														else
														{
															if(ta < 10.5)
															{
																if(velocity < 13.49)
																	return 13.7292;
																else
																	return 15.5844;
															}
															else
																return 16.2602;
														}
													}
												}
												else
												{
													if(velocity < 4.935)
														return 4.54361;
													else
													{
														if(rsrp < -99)
														{
															if(payload < 9.5)
																return 16.5631;
															else
																return 14.7874;
														}
														else
															return 19.0533;
													}
												}
											}
										}
									}
								}
							}
							else
							{
								if(ta < 22)
									return 5.205315;
								else
								{
									if(rsrq < -13.5)
										return 8.73771;
									else
										return 10.5332;
								}
							}
						}
					}
					else
					{
						if(velocity < 8.65)
						{
							if(payload < 8.5)
								return 16.6623;
							else
							{
								if(ta < 8.5)
								{
									if(cell < 28367745)
										return 10.0587;
									else
										return 11.63555;
								}
								else
									return 10.5083;
							}
						}
						else
						{
							if(rsrp < -92.5)
							{
								if(rsrp < -101.5)
									return 10.7643;
								else
								{
									if(payload < 9.5)
									{
										if(cqi < 8.5)
										{
											if(cqi < 7.5)
											{
												if(cqi < 6.5)
													return 18.9969333333;
												else
													return 17.3067;
											}
											else
											{
												if(payload < 7.5)
													return 21.6383;
												else
													return 19.9875;
											}
										}
										else
										{
											if(sinr < 10.5)
											{
												if(rsrp < -97)
													return 14.0421;
												else
													return 8.1064;
											}
											else
											{
												if(ta < 14)
												{
													if(rsrp < -95.5)
														return 18.136;
													else
														return 15.0943;
												}
												else
													return 22.6354;
											}
										}
									}
									else
									{
										if(velocity < 14.84)
										{
											if(cqi < 11.5)
												return 18.0099;
											else
												return 21.6695428571;
										}
										else
										{
											if(rsrp < -95)
												return 26.2037;
											else
												return 23.76;
										}
									}
								}
							}
							else
							{
								if(ta < 7.5)
									return 19.3913;
								else
									return 9.62811;
							}
						}
					}
				}
			}
			else
			{
				if(payload < 5.5)
				{
					if(ta < 1.5)
					{
						if(sinr < 8)
						{
							if(sinr < 5.5)
								return 8.24955;
							else
							{
								if(rsrq < -6.5)
								{
									if(rsrq < -8)
										return 18.8857;
									else
										return 19.5886;
								}
								else
									return 15.0773;
							}
						}
						else
						{
							if(rsrp < -82.5)
								return 26.3505;
							else
								return 22.9753;
						}
					}
					else
					{
						if(sinr < 2.5)
						{
							if(f < 2232.5)
							{
								if(rsrq < -10.5)
									return 12.9502;
								else
								{
									if(rsrp < -88.5)
										return 15.9283;
									else
										return 17.0285;
								}
							}
							else
								return 20.5523;
						}
						else
						{
							if(rsrq < -10.5)
							{
								if(velocity < 1.415)
									return 2.72712;
								else
								{
									if(cqi < 8.5)
										return 10.7066;
									else
										return 7.62195;
								}
							}
							else
							{
								if(velocity < 15.285)
								{
									if(cell < 28367746)
									{
										if(cqi < 7)
										{
											if(velocity < 11.13)
											{
												if(velocity < 10.16)
												{
													if(cell < 28366080.5)
														return 11.1576;
													else
													{
														if(rsrp < -88)
															return 9.18485;
														else
															return 10.6773;
													}
												}
												else
													return 8.86918;
											}
											else
											{
												if(velocity < 13.915)
												{
													if(cqi < 3.5)
														return 14.6252;
													else
														return 15.7582;
												}
												else
													return 11.6754;
											}
										}
										else
										{
											if(velocity < 2.105)
												return 18.9036;
											else
											{
												if(sinr < 3.5)
													return 11.1328;
												else
												{
													if(cell < 26378625.5)
													{
														if(cqi < 9.5)
															return 12.3935;
														else
															return 11.6068;
													}
													else
													{
														if(velocity < 9.58)
														{
															if(sinr < 11)
																return 14.5974666667;
															else
																return 13.7883;
														}
														else
														{
															if(sinr < 10.5)
															{
																if(velocity < 14.85)
																{
																	if(ta < 4.5)
																		return 13.454275;
																	else
																		return 14.45685;
																}
																else
																	return 12.8462;
															}
															else
																return 12.2982;
														}
													}
												}
											}
										}
									}
									else
									{
										if(sinr < 6.5)
											return 20.8469;
										else
										{
											if(cell < 29913345.5)
											{
												if(velocity < 13.47)
												{
													if(rsrp < -84.5)
													{
														if(rsrp < -90.5)
															return 14.6453;
														else
														{
															if(sinr < 11.5)
															{
																if(rsrq < -8.5)
																	return 10.4918;
																else
																	return 11.5921;
															}
															else
																return 12.7755;
														}
													}
													else
														return 6.19315;
												}
												else
												{
													if(velocity < 14.5)
													{
														if(rsrq < -7.5)
															return 16.7997;
														else
															return 15.6326;
													}
													else
														return 20.284;
												}
											}
											else
												return 16.5717;
										}
									}
								}
								else
								{
									if(velocity < 25.16)
									{
										if(ta < 5)
										{
											if(payload < 4.5)
												return 11.976;
											else
												return 10.6695;
										}
										else
										{
											if(sinr < 10.5)
												return 6.925925;
											else
												return 10.0597;
										}
									}
									else
									{
										if(rsrp < -82)
										{
											if(payload < 4.5)
												return 14.2476;
											else
												return 16.129;
										}
										else
											return 13.3612;
									}
								}
							}
						}
					}
				}
				else
				{
					if(f < 1384.95)
					{
						if(cqi < 10.5)
							return 7.47175;
						else
							return 8.09353;
					}
					else
					{
						if(sinr < -1.5)
						{
							if(rsrq < -11.5)
								return 1.47623;
							else
								return 11.8468;
						}
						else
						{
							if(ta < 2.5)
							{
								if(payload < 8.5)
								{
									if(cell < 31720450)
									{
										if(sinr < 9.5)
										{
											if(rsrq < -5.5)
											{
												if(sinr < 3.5)
													return 14.1875;
												else
												{
													if(payload < 6.5)
														return 12.5294;
													else
														return 13.3524;
												}
											}
											else
												return 16.5926;
										}
										else
										{
											if(rsrq < -7.5)
											{
												if(cqi < 12.5)
													return 18.1064;
												else
													return 19.7287;
											}
											else
												return 16.4046;
										}
									}
									else
									{
										if(rsrq < -6.5)
											return 33.8266;
										else
											return 18.9949;
									}
								}
								else
								{
									if(rsrq < -8.5)
										return 38.5356;
									else
									{
										if(f < 2232.5)
										{
											if(rsrq < -6.5)
												return 28.2132;
											else
												return 25.6959;
										}
										else
											return 30.4067;
									}
								}
							}
							else
							{
								if(rsrq < -6.5)
								{
									if(cqi < 12.5)
									{
										if(velocity < 8.335)
										{
											if(ta < 5.5)
											{
												if(velocity < 1.11)
													return 17.6643;
												else
												{
													if(cell < 28345218)
														return 19.8758;
													else
														return 21.5827;
												}
											}
											else
											{
												if(rsrq < -7.5)
												{
													if(payload < 6.5)
													{
														if(sinr < 3)
															return 13.6325;
														else
														{
															if(cqi < 10.5)
															{
																if(rsrp < -90.5)
																	return 9.89283;
																else
																	return 10.3986;
															}
															else
																return 12.2856;
														}
													}
													else
													{
														if(rsrq < -10.5)
															return 17.8571;
														else
														{
															if(ta < 7.5)
															{
																if(cqi < 9)
																	return 12.0346;
																else
																{
																	if(rsrp < -87.5)
																		return 21.6634;
																	else
																		return 13.557;
																}
															}
															else
															{
																if(velocity < 7.045)
																{
																	if(cqi < 7.5)
																	{
																		if(rsrq < -9)
																			return 11.4105;
																		else
																			return 10.6201;
																	}
																	else
																	{
																		if(rsrp < -90.5)
																			return 11.8108;
																		else
																			return 12.93145;
																	}
																}
																else
																{
																	if(payload < 8.5)
																		return 15.3073;
																	else
																		return 14.3113;
																}
															}
														}
													}
												}
												else
												{
													if(velocity < 3.29)
														return 17.8435333333;
													else
														return 16.2791;
												}
											}
										}
										else
										{
											if(velocity < 13.83)
											{
												if(rsrq < -7.5)
												{
													if(velocity < 8.715)
														return 16.8883;
													else
													{
														if(sinr < 4)
															return 20.6746142857;
														else
														{
															if(payload < 6.5)
																return 17.6861;
															else
															{
																if(sinr < 11.5)
																{
																	if(velocity < 12.495)
																	{
																		if(f < 2232.5)
																		{
																			if(cqi < 10.5)
																				return 23.692;
																			else
																				return 23.2172;
																		}
																		else
																			return 24.5587;
																	}
																	else
																		return 25.4574;
																}
																else
																	return 21.4733;
															}
														}
													}
												}
												else
												{
													if(payload < 8.5)
													{
														if(sinr < 10.5)
														{
															if(rsrp < -87)
															{
																if(payload < 7.5)
																	return 10.479;
																else
																	return 11.179;
															}
															else
																return 12.3967;
														}
														else
															return 16.3256333333;
													}
													else
													{
														if(ta < 11.5)
														{
															if(sinr < 7.5)
																return 20.9974;
															else
															{
																if(sinr < 9.5)
																	return 18.2417;
																else
																	return 19.7287;
															}
														}
														else
															return 15.3876;
													}
												}
											}
											else
											{
												if(rsrp < -89.5)
												{
													if(ta < 10.5)
													{
														if(sinr < 5.5)
															return 10.5758;
														else
														{
															if(velocity < 15.535)
																return 10.0016;
															else
															{
																if(sinr < 9.5)
																	return 16.3525;
																else
																	return 13.8648;
															}
														}
													}
													else
														return 18.3908;
												}
												else
												{
													if(velocity < 24.98)
													{
														if(ta < 5.5)
														{
															if(ta < 4.5)
																return 15.3625;
															else
															{
																if(payload < 8.5)
																	return 13.1282;
																else
																{
																	if(rsrp < -85.5)
																		return 15.0849;
																	else
																		return 13.4479;
																}
															}
														}
														else
														{
															if(rsrp < -88)
															{
																if(rsrq < -10)
																	return 16.157;
																else
																	return 15.5729;
															}
															else
															{
																if(payload < 8)
																	return 19.9715;
																else
																	return 19.1388;
															}
														}
													}
													else
													{
														if(velocity < 32.385)
															return 25.9067;
														else
														{
															if(payload < 8.5)
															{
																if(velocity < 34.385)
																	return 17.2352;
																else
																	return 18.9189;
															}
															else
																return 20.8388;
														}
													}
												}
											}
										}
									}
									else
									{
										if(ta < 5)
											return 18.3119;
										else
										{
											if(rsrp < -89)
												return 27.4254;
											else
											{
												if(rsrp < -84.5)
												{
													if(rsrp < -87)
														return 23.1348;
													else
														return 20.4487;
												}
												else
													return 24.4648;
											}
										}
									}
								}
								else
								{
									if(cell < 28366081.5)
									{
										if(f < 2232.5)
										{
											if(payload < 9.5)
											{
												if(velocity < 13.48)
												{
													if(sinr < 7)
													{
														if(rsrp < -87.5)
															return 23.5195;
														else
															return 24.0361;
													}
													else
														return 25.385;
												}
												else
												{
													if(cqi < 10)
														return 28.4318;
													else
														return 27.3038;
												}
											}
											else
												return 16.8244;
										}
										else
										{
											if(payload < 8.5)
											{
												if(sinr < 9.5)
													return 24.4368;
												else
													return 12.4031;
											}
											else
											{
												if(cell < 26839043.5)
													return 18.70235;
												else
													return 20.01;
											}
										}
									}
									else
									{
										if(ta < 5.5)
										{
											if(sinr < 10)
											{
												if(payload < 8)
													return 16.5779;
												else
													return 15.5005;
											}
											else
											{
												if(rsrp < -86.5)
													return 15.491;
												else
													return 16.0643;
											}
										}
										else
										{
											if(ta < 8.5)
											{
												if(velocity < 12.565)
													return 16.2684;
												else
												{
													if(rsrq < -5.5)
														return 20.979;
													else
														return 22.738;
												}
											}
											else
												return 25.4372;
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
				if(payload < 4.5)
				{
					if(ta < 19.5)
					{
						if(cell < 27771907.5)
						{
							if(sinr < 22.5)
							{
								if(ta < 3)
								{
									if(cqi < 11)
										return 13.8648;
									else
									{
										if(cell < 26385409)
											return 18.3066;
										else
										{
											if(rsrp < -81)
												return 18.0485;
											else
												return 19.78246;
										}
									}
								}
								else
								{
									if(velocity < 14.01)
									{
										if(cell < 27771523)
										{
											if(rsrp < -81)
											{
												if(cqi < 7.5)
													return 23.8806;
												else
												{
													if(velocity < 11.645)
													{
														if(rsrp < -90)
															return 14.9743;
														else
														{
															if(cell < 27513732)
															{
																if(cqi < 8.5)
																	return 15.7403;
																else
																	return 16.3348666667;
															}
															else
																return 15.534;
														}
													}
													else
													{
														if(velocity < 13.63)
														{
															if(cqi < 12.5)
																return 13.4737;
															else
																return 14.1468;
														}
														else
															return 16.6061;
													}
												}
											}
											else
												return 20.3046;
										}
										else
										{
											if(rsrp < -91.5)
												return 16.5375;
											else
												return 18.9349;
										}
									}
									else
									{
										if(f < 2232.5)
										{
											if(ta < 18.5)
												return 15.7869;
											else
												return 12.1488;
										}
										else
										{
											if(rsrp < -79.5)
												return 10.7383;
											else
												return 11.5025;
										}
									}
								}
							}
							else
							{
								if(f < 2232.5)
								{
									if(sinr < 28.5)
									{
										if(rsrp < -79.5)
											return 16.8865;
										else
										{
											if(ta < 5)
											{
												if(rsrp < -74.5)
													return 18.3908;
												else
													return 17.6893;
											}
											else
												return 17.1215;
										}
									}
									else
									{
										if(rsrp < -78.5)
											return 20.2532;
										else
											return 21.3333;
									}
								}
								else
									return 24.6723;
							}
						}
						else
						{
							if(velocity < 13.865)
							{
								if(rsrp < -77.5)
								{
									if(velocity < 7.855)
									{
										if(sinr < 16.5)
										{
											if(rsrp < -91)
												return 17.2507;
											else
												return 18.4544;
										}
										else
										{
											if(sinr < 27.5)
											{
												if(cqi < 11.5)
												{
													if(sinr < 20.5)
														return 15.2818;
													else
														return 16.632;
												}
												else
												{
													if(f < 2232.5)
														return 14.3885;
													else
														return 10.5645;
												}
											}
											else
											{
												if(rsrp < -83.5)
													return 16.016;
												else
													return 17.288;
											}
										}
									}
									else
									{
										if(rsrq < -5.5)
										{
											if(velocity < 9.695)
											{
												if(velocity < 8.57)
													return 10.1716;
												else
												{
													if(rsrp < -90.5)
													{
														if(ta < 6)
															return 14.7126;
														else
															return 14.1907;
													}
													else
														return 13.3167;
												}
											}
											else
											{
												if(cell < 29913345.5)
												{
													if(sinr < 27.5)
													{
														if(cell < 29394690.5)
														{
															if(rsrq < -7)
																return 6.30045;
															else
																return 9.06516;
														}
														else
															return 9.7992125;
													}
													else
														return 15.748;
												}
												else
													return 17.7187;
											}
										}
										else
										{
											if(cqi < 11)
												return 16.3182;
											else
												return 12.003;
										}
									}
								}
								else
								{
									if(rsrq < -7.5)
										return 20.6452;
									else
									{
										if(sinr < 28.5)
											return 14.7059;
										else
											return 17.4482;
									}
								}
							}
							else
							{
								if(rsrq < -5.5)
								{
									if(rsrp < -77.5)
									{
										if(sinr < 15)
											return 15.2891;
										else
										{
											if(velocity < 14.105)
												return 19.3822;
											else
											{
												if(cell < 29741056)
													return 18.6047;
												else
													return 17.373275;
											}
										}
									}
									else
									{
										if(sinr < 29)
											return 11.2281;
										else
											return 19.536;
									}
								}
								else
								{
									if(velocity < 20.905)
									{
										if(velocity < 16.28)
										{
											if(velocity < 15.33)
												return 17.1369333333;
											else
												return 15.625;
										}
										else
										{
											if(rsrp < -77)
												return 7.92275;
											else
												return 12.3219;
										}
									}
									else
									{
										if(rsrp < -82)
											return 19.3353;
										else
										{
											if(velocity < 30.45)
												return 14.2602;
											else
											{
												if(sinr < 30.5)
													return 16.7539;
												else
													return 18.4226;
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if(rsrp < -80.5)
							return 8.04222;
						else
							return 3.7296;
					}
				}
				else
				{
					if(sinr < 28.5)
					{
						if(rsrp < -80.5)
						{
							if(velocity < 10.25)
							{
								if(cqi < 6.5)
								{
									if(rsrp < -93.5)
										return 22.0629;
									else
										return 18.9798;
								}
								else
								{
									if(cell < 29913345.5)
									{
										if(rsrq < -9.5)
										{
											if(sinr < 19.5)
												return 22.1361;
											else
												return 16.609;
										}
										else
										{
											if(sinr < 25.5)
											{
												if(sinr < 20)
												{
													if(cqi < 8.5)
													{
														if(payload < 5.5)
															return 13.7493;
														else
														{
															if(rsrq < -7.5)
																return 19.0703;
															else
																return 21.0896;
														}
													}
													else
													{
														if(sinr < 13.5)
														{
															if(cell < 26378754.5)
																return 13.2159;
															else
															{
																if(cqi < 11.5)
																	return 14.9087;
																else
																	return 15.949;
															}
														}
														else
														{
															if(cqi < 13)
															{
																if(velocity < 5.495)
																{
																	if(rsrp < -88.5)
																	{
																		if(cqi < 10.5)
																		{
																			if(payload < 5.5)
																				return 10.1678;
																			else
																				return 11.0803;
																		}
																		else
																			return 12.0391;
																	}
																	else
																	{
																		if(cqi < 11.5)
																			return 14.5402;
																		else
																		{
																			if(f < 2232.5)
																				return 12.8991;
																			else
																				return 11.9154;
																		}
																	}
																}
																else
																	return 14.7874;
															}
															else
															{
																if(velocity < 3.105)
																{
																	if(velocity < 0.91)
																		return 14.8423;
																	else
																	{
																		if(payload < 5.5)
																			return 16.6528;
																		else
																			return 15.7325;
																	}
																}
																else
																	return 13.8648;
															}
														}
													}
												}
												else
												{
													if(cqi < 10.5)
													{
														if(rsrq < -8.5)
															return 11.2391;
														else
															return 15.5794;
													}
													else
													{
														if(cqi < 11.5)
														{
															if(cell < 29394690.5)
															{
																if(rsrq < -6)
																	return 16.2107;
																else
																	return 14.4561;
															}
															else
																return 18.8235;
														}
														else
														{
															if(velocity < 1.795)
															{
																if(rsrp < -90.5)
																	return 21.1921;
																else
																{
																	if(cqi < 13.5)
																		return 19.1673333333;
																	else
																		return 17.192;
																}
															}
															else
															{
																if(cell < 29741056.5)
																{
																	if(sinr < 22)
																		return 16.8599;
																	else
																		return 15.5763;
																}
																else
																	return 18.5271;
															}
														}
													}
												}
											}
											else
											{
												if(ta < 2.5)
												{
													if(payload < 5.5)
														return 12.0301;
													else
														return 13.6684666667;
												}
												else
												{
													if(rsrp < -88.5)
														return 12.3935;
													else
														return 11.8343;
												}
											}
										}
									}
									else
									{
										if(payload < 5.5)
										{
											if(cqi < 9)
												return 14.7384;
											else
												return 19.1388;
										}
										else
											return 19.8675;
									}
								}
							}
							else
							{
								if(sinr < 25.5)
								{
									if(ta < 11.5)
									{
										if(rsrp < -89.5)
										{
											if(ta < 2)
												return 6.86303;
											else
											{
												if(cell < 28879744.5)
												{
													if(rsrp < -92.5)
														return 21.4957;
													else
														return 24.4275;
												}
												else
												{
													if(cell < 29391105.5)
														return 8.54884;
													else
													{
														if(cqi < 9.5)
														{
															if(rsrq < -6.5)
															{
																if(payload < 5.5)
																	return 17.567;
																else
																	return 15.9098;
															}
															else
																return 21.4018;
														}
														else
														{
															if(ta < 9.5)
															{
																if(rsrq < -6.5)
																	return 11.2076;
																else
																	return 13.2538;
															}
															else
																return 17.1674;
														}
													}
												}
											}
										}
										else
										{
											if(rsrp < -86.5)
											{
												if(sinr < 15)
													return 30.7692;
												else
												{
													if(velocity < 24.025)
													{
														if(ta < 3.5)
														{
															if(rsrp < -88.5)
																return 22.9555;
															else
																return 25.7511;
														}
														else
														{
															if(rsrq < -5.5)
															{
																if(ta < 6)
																	return 20.3218;
																else
																	return 22.1239;
															}
															else
																return 17.2563;
														}
													}
													else
														return 15.7429;
												}
											}
											else
											{
												if(rsrp < -83.5)
												{
													if(velocity < 13.41)
													{
														if(rsrq < -5.5)
														{
															if(payload < 5.5)
																return 19.1296;
															else
															{
																if(cqi < 10.5)
																	return 20.592;
																else
																	return 20;
															}
														}
														else
															return 25.0915;
													}
													else
													{
														if(velocity < 24.155)
														{
															if(cell < 27771523.5)
																return 16.6597;
															else
															{
																if(rsrp < -84.5)
																{
																	if(rsrp < -85.5)
																		return 11.7405;
																	else
																		return 12.945;
																}
																else
																{
																	if(sinr < 18)
																		return 13.6674;
																	else
																		return 14.9645;
																}
															}
														}
														else
															return 19.7433;
													}
												}
												else
												{
													if(ta < 2)
													{
														if(rsrp < -82.5)
															return 30.3951;
														else
															return 23.2964;
													}
													else
													{
														if(cqi < 14)
														{
															if(rsrq < -7)
																return 23.5332666667;
															else
															{
																if(ta < 7.5)
																{
																	if(sinr < 13.5)
																		return 19.2678;
																	else
																		return 21.9557666667;
																}
																else
																	return 19.2585;
															}
														}
														else
															return 13.8985;
													}
												}
											}
										}
									}
									else
									{
										if(cqi < 11)
											return 10.1394;
										else
										{
											if(rsrp < -91)
												return 14.8148;
											else
												return 13.3333;
										}
									}
								}
								else
								{
									if(cell < 26378626)
										return 7.58294;
									else
									{
										if(cqi < 12)
										{
											if(payload < 5.5)
												return 15.273;
											else
												return 16.7539;
										}
										else
											return 13.6402;
									}
								}
							}
						}
						else
						{
							if(sinr < 14.5)
							{
								if(cqi < 11)
									return 33.264;
								else
									return 17.1674;
							}
							else
							{
								if(f < 912.45)
									return 13.741;
								else
								{
									if(velocity < 35.115)
									{
										if(rsrp < -71)
										{
											if(cqi < 14.5)
											{
												if(cqi < 13.5)
												{
													if(velocity < 13.215)
													{
														if(cqi < 12.5)
														{
															if(sinr < 15.5)
																return 18.1612;
															else
															{
																if(payload < 5.5)
																	return 15.1343;
																else
																	return 16.1345;
															}
														}
														else
															return 18.2163;
													}
													else
													{
														if(ta < 10)
														{
															if(cell < 27078146.5)
																return 21.1175;
															else
															{
																if(rsrp < -79.5)
																	return 20.0585;
																else
																	return 19.3892;
															}
														}
														else
															return 15.3257;
													}
												}
												else
													return 9.79432;
											}
											else
											{
												if(cell < 28581506.5)
												{
													if(rsrp < -78.5)
													{
														if(rsrp < -79.5)
															return 27.3816;
														else
															return 29.7398;
													}
													else
														return 20.9205;
												}
												else
												{
													if(sinr < 27)
													{
														if(rsrp < -78)
															return 15.829;
														else
														{
															if(rsrq < -4.5)
																return 18.8503666667;
															else
																return 17.9038;
														}
													}
													else
													{
														if(rsrp < -76.5)
															return 26.9058;
														else
															return 18.4829;
													}
												}
											}
										}
										else
											return 22.9639;
									}
									else
										return 29.2398;
								}
							}
						}
					}
					else
					{
						if(ta < 4.5)
						{
							if(f < 2232.5)
							{
								if(rsrq < -4.5)
								{
									if(velocity < 15.74)
									{
										if(cqi < 14)
										{
											if(velocity < 14.37)
											{
												if(rsrp < -79)
													return 19.3783;
												else
													return 18.0587;
											}
											else
												return 24.0964;
										}
										else
										{
											if(rsrp < -68.5)
											{
												if(rsrq < -6.5)
													return 24.4773;
												else
													return 24.9574666667;
											}
											else
											{
												if(rsrq < -6.5)
													return 25.8565;
												else
													return 20.7039;
											}
										}
									}
									else
									{
										if(cqi < 13.5)
											return 22.0751;
										else
										{
											if(rsrp < -76)
												return 17.7253;
											else
												return 18.2565;
										}
									}
								}
								else
								{
									if(cqi < 14.5)
									{
										if(rsrp < -73.5)
											return 20.377;
										else
											return 19.4332;
									}
									else
										return 38.1679;
								}
							}
							else
								return 31.746;
						}
						else
						{
							if(velocity < 15.005)
							{
								if(rsrp < -69)
								{
									if(f < 2232.5)
									{
										if(rsrq < -6.5)
											return 17.9856;
										else
										{
											if(sinr < 35)
											{
												if(payload < 5.5)
													return 14.7601;
												else
													return 13.8129;
											}
											else
												return 15.8888;
										}
									}
									else
									{
										if(rsrp < -90)
											return 17.5362;
										else
											return 19.8923;
									}
								}
								else
									return 22.1607;
							}
							else
							{
								if(ta < 11)
								{
									if(rsrp < -73.5)
										return 25.4507;
									else
										return 22.3568;
								}
								else
								{
									if(rsrq < -5.5)
										return 21.5054;
									else
										return 20.6718;
								}
							}
						}
					}
				}
			}
			else
			{
				if(f < 2232.5)
				{
					if(f < 1384.95)
					{
						if(f < 912.45)
						{
							if(rsrq < -5.5)
								return 10.5204841633;
							else
								return 11.2486;
						}
						else
							return 4.4733516621;
					}
					else
					{
						if(rsrq < -6.5)
						{
							if(rsrp < -80.5)
							{
								if(cell < 29391104.5)
								{
									if(velocity < 31.905)
									{
										if(cqi < 11.5)
										{
											if(ta < 3.5)
											{
												if(rsrp < -102)
													return 16.6286;
												else
													return 30.0328;
											}
											else
											{
												if(payload < 9)
												{
													if(rsrp < -85.5)
														return 16.6050666667;
													else
														return 16.0562;
												}
												else
												{
													if(ta < 6.5)
														return 19.2123;
													else
														return 17.9252;
												}
											}
										}
										else
										{
											if(payload < 8.5)
											{
												if(cqi < 14.5)
												{
													if(payload < 7.5)
													{
														if(cell < 27078274.5)
															return 18.5246;
														else
														{
															if(sinr < 21.5)
																return 21.172;
															else
																return 19.9857;
														}
													}
													else
													{
														if(rsrq < -8.5)
															return 25.4676;
														else
															return 23.469;
													}
												}
												else
													return 28.1974;
											}
											else
											{
												if(rsrp < -86.5)
												{
													if(ta < 14)
														return 16.6278666667;
													else
														return 17.9735;
												}
												else
												{
													if(velocity < 6.875)
														return 14.1143;
													else
													{
														if(cqi < 13.5)
															return 22.8115;
														else
															return 21.3504;
													}
												}
											}
										}
									}
									else
										return 14.2349;
								}
								else
								{
									if(ta < 7.5)
									{
										if(rsrp < -89)
										{
											if(rsrp < -92.5)
											{
												if(cqi < 8.5)
													return 22.4809;
												else
												{
													if(sinr < 16)
													{
														if(sinr < 14)
															return 11.2994;
														else
															return 12.2511;
													}
													else
														return 14.1593;
												}
											}
											else
											{
												if(payload < 7.5)
												{
													if(rsrp < -91)
														return 12.5928;
													else
														return 15.7702;
												}
												else
												{
													if(payload < 8.5)
														return 10.0282;
													else
														return 11.3457;
												}
											}
										}
										else
										{
											if(cqi < 11.5)
											{
												if(rsrp < -87)
													return 23.8024;
												else
												{
													if(payload < 8)
														return 21.18;
													else
														return 22.4649;
												}
											}
											else
											{
												if(rsrq < -8.5)
												{
													if(payload < 9)
														return 18.3066;
													else
														return 17.4749;
												}
												else
												{
													if(velocity < 9.355)
														return 12.6763;
													else
														return 15.2381;
												}
											}
										}
									}
									else
									{
										if(rsrp < -85.5)
											return 25.8398;
										else
											return 24.1875;
									}
								}
							}
							else
							{
								if(cqi < 10.5)
									return 34.7222;
								else
								{
									if(cell < 27078659)
									{
										if(rsrq < -7.5)
										{
											if(rsrp < -76.5)
												return 21.5375;
											else
												return 23.2305;
										}
										else
										{
											if(rsrp < -71)
												return 25.0941;
											else
												return 24.4182;
										}
									}
									else
										return 26.7377666667;
								}
							}
						}
						else
						{
							if(payload < 9.5)
							{
								if(velocity < 14.585)
								{
									if(velocity < 14.545)
									{
										if(ta < 5)
										{
											if(cell < 26385408.5)
											{
												if(cqi < 13.5)
												{
													if(sinr < 20)
													{
														if(rsrq < -5.5)
														{
															if(rsrp < -82)
																return 21.0665;
															else
																return 19.3353;
														}
														else
															return 17.1201;
													}
													else
													{
														if(payload < 8.5)
														{
															if(ta < 1.5)
																return 18.913875;
															else
															{
																if(rsrp < -73.5)
																	return 20.69145;
																else
																{
																	if(rsrp < -71.5)
																		return 22.3375;
																	else
																		return 23.382;
																}
															}
														}
														else
															return 24.4399;
													}
												}
												else
													return 22.8199;
											}
											else
											{
												if(cell < 28069507)
												{
													if(sinr < 26.5)
													{
														if(sinr < 24)
														{
															if(velocity < 3.38)
																return 24.032;
															else
															{
																if(rsrp < -83.5)
																{
																	if(rsrq < -5.5)
																		return 23.0169;
																	else
																		return 27.7136;
																}
																else
																	return 28.9479666667;
															}
														}
														else
															return 33.7756;
													}
													else
													{
														if(rsrp < -73)
														{
															if(rsrp < -76.5)
																return 26.6033;
															else
																return 27.5455;
														}
														else
														{
															if(sinr < 35.5)
															{
																if(payload < 7.5)
																{
																	if(rsrp < -70)
																		return 22.9039;
																	else
																		return 23.4212;
																}
																else
																	return 19.0817;
															}
															else
																return 26.4791;
														}
													}
												}
												else
												{
													if(sinr < 26)
													{
														if(cqi < 10.5)
														{
															if(sinr < 13.5)
																return 19.4057;
															else
															{
																if(payload < 7.5)
																	return 18.3667;
																else
																{
																	if(payload < 8.5)
																		return 27.3621;
																	else
																	{
																		if(rsrp < -85.5)
																			return 19.407;
																		else
																			return 22.7992;
																	}
																}
															}
														}
														else
														{
															if(velocity < 12.31)
															{
																if(velocity < 1.38)
																{
																	if(payload < 8)
																		return 24.491;
																	else
																		return 23.9282;
																}
																else
																{
																	if(rsrp < -80.5)
																	{
																		if(sinr < 21.5)
																			return 38.1471;
																		else
																			return 34.7395;
																	}
																	else
																	{
																		if(cell < 29913345.5)
																			return 22.291;
																		else
																		{
																			if(rsrp < -69.5)
																			{
																				if(payload < 8)
																					return 31.1457;
																				else
																					return 30.1003;
																			}
																			else
																				return 28.8158;
																		}
																	}
																}
															}
															else
															{
																if(rsrp < -80.5)
																	return 20.0645;
																else
																	return 23.5248333333;
															}
														}
													}
													else
													{
														if(payload < 8.5)
														{
															if(cqi < 13.5)
															{
																if(velocity < 2.66)
																	return 20.5589;
																else
																	return 16.9827666667;
															}
															else
															{
																if(rsrp < -79.5)
																	return 24.7104;
																else
																	return 19.18305;
															}
														}
														else
														{
															if(rsrq < -5.5)
															{
																if(sinr < 30)
																	return 20.4895;
																else
																	return 16.9851;
															}
															else
															{
																if(sinr < 29)
																	return 14.8026;
																else
																	return 33.1492;
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
												if(sinr < 22)
													return 16.0137;
												else
													return 18.136;
											}
											else
											{
												if(velocity < 12.135)
												{
													if(rsrq < -5.5)
													{
														if(rsrp < -88)
														{
															if(cell < 27376257)
																return 19.428;
															else
																return 20.1434;
														}
														else
														{
															if(sinr < 29)
															{
																if(payload < 8)
																	return 16.1197;
																else
																	return 14.6163;
															}
															else
															{
																if(sinr < 39)
																	return 19.0931;
																else
																	return 20.2532;
															}
														}
													}
													else
													{
														if(sinr < 22)
														{
															if(cell < 26385409)
																return 21.143;
															else
															{
																if(payload < 8.5)
																	return 25.1572;
																else
																	return 23.976;
															}
														}
														else
														{
															if(ta < 6.5)
																return 18.7299;
															else
															{
																if(payload < 8.5)
																	return 18.3066;
																else
																	return 23.3918;
															}
														}
													}
												}
												else
												{
													if(velocity < 13.035)
														return 26.1818;
													else
													{
														if(payload < 8.5)
														{
															if(velocity < 13.755)
																return 18.5776;
															else
															{
																if(cqi < 13)
																	return 20.5882;
																else
																	return 19.774;
															}
														}
														else
															return 25.7787;
													}
												}
											}
										}
									}
									else
										return 12.522;
								}
								else
								{
									if(rsrp < -70)
									{
										if(ta < 23)
										{
											if(payload < 7.5)
											{
												if(sinr < 19.5)
												{
													if(cqi < 11.5)
														return 14.733;
													else
														return 13.7188;
												}
												else
												{
													if(rsrp < -76.5)
													{
														if(velocity < 20.3)
														{
															if(ta < 4)
																return 26.4151;
															else
																return 25.1799;
														}
														else
														{
															if(rsrq < -5.5)
																return 21.4067;
															else
																return 23.5789;
														}
													}
													else
														return 21.89228;
												}
											}
											else
											{
												if(rsrp < -76)
												{
													if(velocity < 15.265)
													{
														if(payload < 8.5)
															return 35.1262;
														else
														{
															if(cqi < 11.5)
																return 30.4826;
															else
																return 28.0265;
														}
													}
													else
													{
														if(sinr < 17.5)
														{
															if(rsrq < -5.5)
															{
																if(payload < 8.5)
																	return 21.2342;
																else
																	return 19.3861;
															}
															else
																return 25.5898;
														}
														else
														{
															if(sinr < 31)
															{
																if(rsrp < -77.5)
																{
																	if(sinr < 29)
																	{
																		if(velocity < 21.94)
																		{
																			if(rsrq < -5.5)
																				return 26.2104;
																			else
																				return 28.2561;
																		}
																		else
																		{
																			if(rsrq < -5.5)
																			{
																				if(cqi < 13.5)
																				{
																					if(payload < 8.5)
																						return 29.9766;
																					else
																						return 29.2089;
																				}
																				else
																					return 32.016;
																			}
																			else
																			{
																				if(velocity < 31.355)
																					return 28.3437;
																				else
																					return 26.491;
																			}
																		}
																	}
																	else
																		return 19.7836;
																}
																else
																	return 34.2531;
															}
															else
																return 21.9245;
														}
													}
												}
												else
												{
													if(ta < 17)
													{
														if(rsrp < -73)
														{
															if(velocity < 15.1)
															{
																if(rsrq < -5.5)
																	return 25.8377;
																else
																	return 24.8963;
															}
															else
																return 22.9164428571;
														}
														else
															return 29.138;
													}
													else
														return 18.4704;
												}
											}
										}
										else
											return 8.24742;
									}
									else
										return 43.0108;
								}
							}
							else
							{
								if(sinr < 34)
								{
									if(sinr < 16.5)
									{
										if(ta < 3.5)
										{
											if(ta < 2.5)
											{
												if(sinr < 15.5)
												{
													if(cqi < 13)
														return 24.8834;
													else
														return 29.985;
												}
												else
													return 24.1546;
											}
											else
												return 35.1803;
										}
										else
										{
											if(cqi < 7.5)
												return 19.5551;
											else
											{
												if(sinr < 13.5)
												{
													if(rsrq < -5.5)
													{
														if(rsrp < -88.5)
															return 25.9151;
														else
															return 22.792;
													}
													else
														return 26.6489;
												}
												else
												{
													if(rsrp < -82.5)
														return 23.2693;
													else
														return 23.8521;
												}
											}
										}
									}
									else
									{
										if(sinr < 18)
										{
											if(rsrp < -85)
												return 24.3754;
											else
												return 39.0434;
										}
										else
										{
											if(rsrq < -5.5)
											{
												if(cell < 28881153)
												{
													if(ta < 6.5)
													{
														if(rsrp < -85)
															return 21.9118;
														else
														{
															if(sinr < 26.5)
															{
																if(rsrp < -79)
																	return 25.2892;
																else
																	return 24.5399;
															}
															else
																return 27.2201;
														}
													}
													else
													{
														if(velocity < 5.29)
															return 21.75865;
														else
															return 22.5035;
													}
												}
												else
													return 30.4144666667;
											}
											else
											{
												if(rsrp < -83)
													return 41.7755;
												else
												{
													if(ta < 3)
													{
														if(rsrp < -74.5)
															return 25.89;
														else
														{
															if(sinr < 30)
																return 32.7747666667;
															else
																return 34.7373;
														}
													}
													else
													{
														if(rsrq < -4.5)
														{
															if(cqi < 14)
																return 29.347;
															else
																return 26.8366;
														}
														else
															return 24.4424;
													}
												}
											}
										}
									}
								}
								else
								{
									if(sinr < 37)
										return 19.7628;
									else
										return 23.4055;
								}
							}
						}
					}
				}
				else
				{
					if(velocity < 0.495)
					{
						if(payload < 7.5)
						{
							if(cell < 28327300.5)
							{
								if(rsrp < -91.5)
									return 24.1171;
								else
								{
									if(rsrp < -87)
										return 16.5582;
									else
										return 17.4727;
								}
							}
							else
							{
								if(rsrq < -6.5)
									return 13.4454;
								else
									return 15.60345;
							}
						}
						else
						{
							if(cell < 27026308)
							{
								if(cqi < 11.5)
								{
									if(sinr < 19.5)
										return 23.1437;
									else
									{
										if(payload < 9.5)
											return 17.2373;
										else
											return 20.1309;
									}
								}
								else
									return 16.3016;
							}
							else
							{
								if(rsrp < -85)
								{
									if(sinr < 22.5)
									{
										if(payload < 9.5)
										{
											if(sinr < 15)
												return 20.8266;
											else
											{
												if(cqi < 7)
													return 23.8332;
												else
												{
													if(sinr < 21.5)
														return 22.291;
													else
														return 23.3406;
												}
											}
										}
										else
										{
											if(ta < 9.5)
											{
												if(rsrp < -89.5)
													return 27.8843;
												else
													return 34.1443;
											}
											else
												return 17.0612;
										}
									}
									else
										return 17.6913;
								}
								else
									return 15.2701;
							}
						}
					}
					else
					{
						if(ta < 9.5)
						{
							if(sinr < 13.5)
							{
								if(velocity < 8.455)
									return 18.1303;
								else
								{
									if(payload < 8.5)
										return 12.4527;
									else
										return 14.4014;
								}
							}
							else
							{
								if(rsrp < -85.5)
								{
									if(cell < 26817540)
									{
										if(velocity < 11.88)
											return 20.2429;
										else
											return 19.0703;
									}
									else
									{
										if(cqi < 9.5)
											return 20.6053;
										else
										{
											if(sinr < 20)
												return 22.2176333333;
											else
												return 23.3176;
										}
									}
								}
								else
								{
									if(payload < 7.5)
										return 8.87621;
									else
									{
										if(rsrp < -81)
										{
											if(rsrp < -84)
												return 18.6209;
											else
											{
												if(velocity < 7.265)
													return 15.025;
												else
													return 16.028;
											}
										}
										else
										{
											if(rsrp < -76.5)
												return 19.3283;
											else
												return 18.3627333333;
										}
									}
								}
							}
						}
						else
						{
							if(cqi < 10)
							{
								if(sinr < 25)
								{
									if(cell < 28213763.5)
									{
										if(cqi < 7.5)
											return 14.7738;
										else
											return 15.2639;
									}
									else
										return 16.791;
								}
								else
									return 18.4453;
							}
							else
							{
								if(sinr < 29.5)
									return 10.6222;
								else
									return 8.24742;
							}
						}
					}
				}
			}
		}
	}
}

float tmobile_dl_tree_1(float payload, float rsrp, float rsrq, float sinr, float cqi, float ta, float velocity, float cell, float f)
{
	if(payload < 3.5)
	{
		if(rsrp < -92.5)
		{
			if(payload < 1.5)
			{
				if(sinr < 22.5)
				{
					if(velocity < 8.225)
					{
						if(cqi < 5.5)
							return 38.0954;
						else
						{
							if(cell < 28369794)
							{
								if(rsrp < -104.5)
									return 0.662252;
								else
								{
									if(ta < 11.5)
									{
										if(rsrq < -7.5)
										{
											if(ta < 8.5)
											{
												if(cell < 28368385)
													return 6.9178633333;
												else
													return 6.28437;
											}
											else
											{
												if(velocity < 2.51)
													return 6.13027;
												else
												{
													if(sinr < 12.5)
														return 4.4944;
													else
														return 3.65297;
												}
											}
										}
										else
										{
											if(payload < 0.3)
												return 4.1885;
											else
												return 3.27065;
										}
									}
									else
										return 7.5741225;
								}
							}
							else
							{
								if(velocity < 5.555)
								{
									if(rsrp < -98.5)
									{
										if(rsrq < -8.5)
											return 10.4167;
										else
											return 7.75194;
									}
									else
									{
										if(sinr < 10.5)
											return 6.93669;
										else
										{
											if(payload < 0.3)
												return 4.8193;
											else
												return 5.98198;
										}
									}
								}
								else
								{
									if(cell < 29741056.5)
									{
										if(rsrq < -7)
											return 10.2433;
										else
											return 9.63855;
									}
									else
										return 7.12378;
								}
							}
						}
					}
					else
					{
						if(rsrp < -112.5)
							return 0.84122;
						else
						{
							if(f < 2232.5)
							{
								if(cqi < 7.5)
								{
									if(cqi < 5.5)
									{
										if(velocity < 23.295)
										{
											if(cell < 27771906.5)
												return 0.633801;
											else
											{
												if(sinr < -2.5)
												{
													if(velocity < 15.995)
													{
														if(sinr < -3.5)
														{
															if(cqi < 4.5)
																return 2.09604;
															else
																return 2.96296;
														}
														else
															return 3.56983;
													}
													else
														return 4.53001;
												}
												else
												{
													if(payload < 0.3)
													{
														if(rsrp < -104.5)
															return 10;
														else
														{
															if(ta < 5)
															{
																if(sinr < 2.5)
																	return 5.00002;
																else
																	return 4.1885;
															}
															else
																return 6.77969;
														}
													}
													else
													{
														if(velocity < 14.725)
														{
															if(sinr < 1)
															{
																if(cell < 28969984.5)
																	return 6.22084;
																else
																{
																	if(rsrp < -103.5)
																		return 5.38721;
																	else
																		return 4.71698;
																}
															}
															else
															{
																if(ta < 12)
																	return 4.31983;
																else
																{
																	if(velocity < 12.825)
																		return 3.67309;
																	else
																		return 2.99177;
																}
															}
														}
														else
															return 1.57682;
													}
												}
											}
										}
										else
										{
											if(rsrp < -106.5)
												return 8.00801;
											else
												return 6.65557;
										}
									}
									else
									{
										if(ta < 9.5)
										{
											if(cell < 28879744.5)
											{
												if(cell < 28365057.5)
												{
													if(rsrp < -104.5)
													{
														if(payload < 0.55)
														{
															if(ta < 8.5)
															{
																if(ta < 4.5)
																	return 6.01506;
																else
																	return 2.86739;
															}
															else
																return 11.5942;
														}
														else
														{
															if(cqi < 6.5)
																return 1.31105;
															else
																return 7.62631;
														}
													}
													else
													{
														if(rsrq < -8)
														{
															if(payload < 0.75)
																return 4.05268;
															else
																return 3.14837;
														}
														else
															return 1.45455;
													}
												}
												else
												{
													if(velocity < 15.62)
													{
														if(rsrp < -98.5)
														{
															if(rsrp < -100)
																return 8.98895;
															else
																return 10.6101;
														}
														else
														{
															if(velocity < 11.655)
																return 8.0646633333;
															else
															{
																if(velocity < 14.43)
																	return 5.81395;
																else
																	return 7.31261;
															}
														}
													}
													else
														return 5.09554;
												}
											}
											else
											{
												if(payload < 0.55)
													return 8.24745;
												else
													return 2.91809;
											}
										}
										else
										{
											if(payload < 0.3)
											{
												if(velocity < 15.615)
												{
													if(sinr < -4)
														return 4.67838;
													else
													{
														if(rsrq < -9.5)
															return 3.50879;
														else
															return 4.08165;
													}
												}
												else
													return 1.74673;
											}
											else
											{
												if(cell < 28967552.5)
												{
													if(ta < 11.5)
														return 1.91663;
													else
													{
														if(rsrq < -9.5)
														{
															if(payload < 0.75)
															{
																if(cell < 27374849.5)
																	return 7.73694;
																else
																	return 5.997;
															}
															else
															{
																if(rsrp < -100.5)
																	return 4.82218;
																else
																	return 4.15369;
															}
														}
														else
														{
															if(rsrq < -8)
																return 3.91773;
															else
															{
																if(payload < 0.75)
																	return 4.45434;
																else
																	return 5.07292;
															}
														}
													}
												}
												else
												{
													if(velocity < 21.965)
													{
														if(rsrp < -97.5)
															return 8.47458;
														else
															return 10.1523;
													}
													else
														return 6.72269;
												}
											}
										}
									}
								}
								else
								{
									if(cell < 27771908.5)
									{
										if(payload < 0.75)
											return 7.64818;
										else
											return 6.99913;
									}
									else
									{
										if(velocity < 13.685)
										{
											if(cell < 29652225)
											{
												if(cell < 28368385)
												{
													if(velocity < 13.305)
													{
														if(velocity < 11.455)
														{
															if(rsrq < -8)
																return 4.15369;
															else
																return 3.66974;
														}
														else
														{
															if(velocity < 11.595)
																return 5.80131;
															else
															{
																if(payload < 0.55)
																	return 4.3650533333;
																else
																	return 3.01545;
															}
														}
													}
													else
														return 2.57236;
												}
												else
													return 3.0592875;
											}
											else
												return 5.35117;
										}
										else
										{
											if(ta < 6)
											{
												if(payload < 0.3)
													return 3.82777;
												else
												{
													if(rsrp < -93.5)
														return 3.08567;
													else
														return 2.457;
												}
											}
											else
											{
												if(cell < 28368129)
												{
													if(velocity < 14.375)
														return 2.76625;
													else
													{
														if(cqi < 9.5)
															return 11.7474;
														else
															return 7.72201;
													}
												}
												else
												{
													if(sinr < 15.5)
													{
														if(rsrp < -101.5)
															return 2.96152;
														else
														{
															if(cqi < 8.5)
																return 7.75194;
															else
															{
																if(velocity < 16.345)
																	return 3.13727;
																else
																{
																	if(ta < 14)
																		return 5.22878;
																	else
																		return 4.56496;
																}
															}
														}
													}
													else
														return 8.98876;
												}
											}
										}
									}
								}
							}
							else
							{
								if(ta < 12)
								{
									if(sinr < 13.5)
									{
										if(cell < 28348804)
										{
											if(sinr < 1)
												return 8.95857;
											else
											{
												if(velocity < 11.64)
													return 7.87402;
												else
												{
													if(payload < 0.55)
														return 5.12822;
													else
														return 5.66572;
												}
											}
										}
										else
											return 11.5942;
									}
									else
									{
										if(rsrq < -8)
											return 3.9409;
										else
											return 3.2785933333;
									}
								}
								else
									return 20.7254;
							}
						}
					}
				}
				else
				{
					if(payload < 0.55)
						return 9.87658;
					else
						return 10.596;
				}
			}
			else
			{
				if(cell < 32400256.5)
				{
					if(rsrp < -94.5)
					{
						if(payload < 2.5)
						{
							if(rsrq < -6.5)
							{
								if(cqi < 6.5)
								{
									if(sinr < -5)
										return 1.9109;
									else
									{
										if(ta < 6.5)
											return 6.63039;
										else
										{
											if(rsrp < -100.5)
											{
												if(velocity < 24.365)
													return 4.355325;
												else
												{
													if(sinr < 1.5)
														return 5.55556;
													else
														return 4.85437;
												}
											}
											else
												return 3.181628;
										}
									}
								}
								else
								{
									if(ta < 20.5)
									{
										if(ta < 12)
										{
											if(rsrq < -8.5)
											{
												if(velocity < 1.53)
												{
													if(rsrp < -97.5)
														return 4.41136;
													else
														return 7.42804;
												}
												else
												{
													if(cqi < 9.5)
														return 3.4866;
													else
														return 2.86893;
												}
											}
											else
											{
												if(sinr < 6.5)
												{
													if(rsrp < -101.5)
														return 9.55224;
													else
														return 8.24317;
												}
												else
												{
													if(cqi < 9)
														return 4.06194;
													else
													{
														if(sinr < 14.5)
															return 6.91742;
														else
															return 5.5325;
													}
												}
											}
										}
										else
										{
											if(sinr < 0)
												return 12.4611;
											else
												return 6.87876;
										}
									}
									else
										return 4.061928;
								}
							}
							else
							{
								if(cell < 28068481.5)
								{
									if(sinr < 10.5)
										return 13.104;
									else
										return 11.0041;
								}
								else
									return 5.87803;
							}
						}
						else
						{
							if(rsrp < -97.5)
							{
								if(velocity < 2.485)
								{
									if(cqi < 7.5)
									{
										if(sinr < 5.5)
										{
											if(rsrp < -102.5)
												return 3.18598;
											else
												return 4.28801;
										}
										else
											return 5.75678;
									}
									else
										return 8.17996;
								}
								else
								{
									if(rsrq < -9.5)
									{
										if(ta < 8)
										{
											if(rsrp < -100.5)
												return 2.60332;
											else
												return 7.75946;
										}
										else
										{
											if(ta < 15.5)
											{
												if(cell < 28366721)
												{
													if(rsrq < -11.5)
														return 8.36237;
													else
														return 6.3900566667;
												}
												else
												{
													if(ta < 12)
														return 13.4831;
													else
														return 11.2835;
												}
											}
											else
											{
												if(velocity < 16.26)
												{
													if(rsrp < -102.5)
														return 2.87081;
													else
													{
														if(ta < 19)
															return 4.39802;
														else
															return 5.63645;
													}
												}
												else
													return 8.35073;
											}
										}
									}
									else
									{
										if(velocity < 22.805)
										{
											if(cqi < 6.5)
											{
												if(rsrq < -8.5)
													return 15.2575;
												else
												{
													if(ta < 4)
														return 12.6917;
													else
														return 11.69325;
												}
											}
											else
											{
												if(cqi < 9.5)
												{
													if(sinr < 6)
														return 4.8731;
													else
													{
														if(sinr < 13.5)
														{
															if(velocity < 8.99)
																return 9.85222;
															else
															{
																if(rsrq < -8.5)
																	return 11.7474;
																else
																	return 11.0497;
															}
														}
														else
															return 6.22568;
													}
												}
												else
													return 13.0364;
											}
										}
										else
										{
											if(rsrp < -105)
												return 5.35954;
											else
											{
												if(cqi < 10)
													return 9.50872;
												else
													return 10.2784;
											}
										}
									}
								}
							}
							else
							{
								if(ta < 8.5)
								{
									if(rsrq < -7)
									{
										if(cell < 28367746)
										{
											if(sinr < 2)
												return 10.084;
											else
												return 10.8794;
										}
										else
										{
											if(rsrq < -9.5)
											{
												if(velocity < 8.625)
													return 4.88599;
												else
												{
													if(rsrp < -95.5)
														return 7.9174433333;
													else
														return 7.29483;
												}
											}
											else
												return 11.0345;
										}
									}
									else
										return 4.66382;
								}
								else
								{
									if(rsrp < -95.5)
									{
										if(rsrq < -8)
											return 3.0550933333;
										else
											return 4.04381;
									}
									else
									{
										if(ta < 29)
											return 6.27779;
										else
											return 4.97616;
									}
								}
							}
						}
					}
					else
					{
						if(ta < 11.5)
						{
							if(sinr < 3.5)
							{
								if(rsrq < -7.5)
								{
									if(rsrq < -10)
										return 6.716312;
									else
										return 7.14283;
								}
								else
									return 9.47867;
							}
							else
							{
								if(cell < 29655810)
								{
									if(rsrq < -6.5)
									{
										if(ta < 10)
										{
											if(rsrq < -10)
												return 6.19515;
											else
											{
												if(cqi < 13)
												{
													if(rsrq < -8)
														return 10.1095;
													else
														return 8.6627;
												}
												else
													return 7.46269;
											}
										}
										else
											return 2.83638;
									}
									else
									{
										if(cqi < 12.5)
											return 15.0659;
										else
											return 10.5448;
									}
								}
								else
								{
									if(payload < 2.5)
										return 12.4417;
									else
										return 15.3649;
								}
							}
						}
						else
							return 15.4143;
					}
				}
				else
					return 17.316;
			}
		}
		else
		{
			if(ta < 6.5)
			{
				if(payload < 1.5)
				{
					if(payload < 0.3)
					{
						if(cell < 28881153)
						{
							if(sinr < 3.5)
							{
								if(rsrp < -79.5)
									return 0.070194;
								else
									return 3.31951;
							}
							else
							{
								if(rsrq < -4.5)
								{
									if(cqi < 11.5)
									{
										if(rsrq < -6.5)
										{
											if(ta < 1.5)
												return 2.62296;
											else
											{
												if(cqi < 10)
												{
													if(rsrp < -90.5)
													{
														if(velocity < 0.825)
															return 3.88351;
														else
															return 4.8485;
													}
													else
													{
														if(velocity < 8.86)
														{
															if(rsrp < -78)
																return 5.00002;
															else
																return 4.25534;
														}
														else
														{
															if(ta < 4)
																return 6.06063;
															else
																return 5.51726;
														}
													}
												}
												else
													return 8.08084;
											}
										}
										else
										{
											if(rsrp < -72.5)
											{
												if(velocity < 23.57)
												{
													if(ta < 3.5)
														return 7.14288;
													else
													{
														if(sinr < 14.5)
															return 7.69234;
														else
															return 8.33337;
													}
												}
												else
													return 10.2564;
											}
											else
												return 13.3334;
										}
									}
									else
									{
										if(rsrp < -83.5)
										{
											if(rsrp < -84.5)
											{
												if(sinr < 26)
												{
													if(rsrp < -86.5)
														return 6.6116;
													else
														return 6.01506;
												}
												else
												{
													if(velocity < 21.97)
														return 5.5365525;
													else
														return 5.06331;
												}
											}
											else
												return 9.52385;
										}
										else
										{
											if(rsrp < -68)
											{
												if(cell < 27078274.5)
												{
													if(rsrp < -71.5)
													{
														if(rsrq < -7)
															return 6.72271;
														else
														{
															if(cqi < 13)
															{
																if(rsrq < -5.5)
																	return 5.29803;
																else
																	return 4.7935866667;
															}
															else
																return 4.6440685714;
														}
													}
													else
													{
														if(velocity < 8.99)
															return 4.87807;
														else
															return 4.3783266667;
													}
												}
												else
												{
													if(sinr < 22.5)
														return 6.1004575;
													else
													{
														if(rsrq < -5.5)
															return 5.4422;
														else
															return 4.9261883333;
													}
												}
											}
											else
												return 6.31616;
										}
									}
								}
								else
								{
									if(rsrp < -78)
										return 9.09094;
									else
										return 5.4422;
								}
							}
						}
						else
						{
							if(cell < 29913345.5)
							{
								if(rsrq < -7.5)
								{
									if(rsrp < -80.5)
										return 2.47679;
									else
										return 4.73375;
								}
								else
								{
									if(rsrq < -6.5)
									{
										if(ta < 3.5)
											return 5.03147;
										else
											return 6.66669;
									}
									else
									{
										if(cqi < 10.5)
											return 3.29219;
										else
										{
											if(rsrp < -77.5)
												return 4.3716876923;
											else
											{
												if(cell < 29391104.5)
													return 5.79712;
												else
													return 5.12822;
											}
										}
									}
								}
							}
							else
							{
								if(ta < 1.5)
								{
									if(velocity < 23.14)
										return 7.5472;
									else
										return 8.42108;
								}
								else
									return 5.4422;
							}
						}
					}
					else
					{
						if(sinr < 21.5)
						{
							if(velocity < 12.845)
							{
								if(sinr < 6)
								{
									if(velocity < 8.375)
									{
										if(cqi < 7)
											return 6.0423;
										else
											return 7.88955;
									}
									else
									{
										if(rsrq < -6.5)
										{
											if(cqi < 6.5)
											{
												if(payload < 0.75)
													return 10.3627;
												else
												{
													if(rsrq < -8)
														return 9.88875;
													else
														return 9.1954;
												}
											}
											else
												return 12.0482;
										}
										else
											return 6.18238;
									}
								}
								else
								{
									if(cqi < 7.5)
									{
										if(cqi < 5.5)
											return 4.4843;
										else
										{
											if(rsrp < -90)
												return 6.82012;
											else
												return 4.61894;
										}
									}
									else
									{
										if(velocity < 2.11)
										{
											if(cqi < 11.5)
											{
												if(sinr < 11)
													return 14.7059;
												else
												{
													if(payload < 0.75)
														return 11.6279;
													else
														return 7.37327;
												}
											}
											else
											{
												if(cell < 29652225.5)
												{
													if(cell < 28093697.5)
														return 5.23218;
													else
														return 6.26478;
												}
												else
													return 10.5402;
											}
										}
										else
										{
											if(velocity < 11.935)
											{
												if(rsrp < -86)
												{
													if(sinr < 12.5)
													{
														if(rsrq < -7.5)
															return 7.44879;
														else
															return 6.59522;
													}
													else
													{
														if(velocity < 10.825)
														{
															if(rsrq < -6.5)
																return 5.1754833333;
															else
																return 4.58453;
														}
														else
															return 6.10687;
													}
												}
												else
												{
													if(rsrp < -83)
													{
														if(payload < 0.75)
														{
															if(cqi < 12.5)
																return 7.63359;
															else
																return 6.36943;
														}
														else
															return 8.61141;
													}
													else
													{
														if(velocity < 9.8)
														{
															if(rsrp < -78)
																return 5.58356;
															else
																return 6.42055;
														}
														else
														{
															if(sinr < 17)
																return 8.40336;
															else
																return 9.23788;
														}
													}
												}
											}
											else
											{
												if(payload < 0.75)
												{
													if(cell < 29652225.5)
														return 4.505586;
													else
														return 5.48697;
												}
												else
												{
													if(velocity < 12.585)
														return 9.35673;
													else
														return 6.36436;
												}
											}
										}
									}
								}
							}
							else
							{
								if(cell < 29391105)
								{
									if(rsrq < -10.5)
										return 18.7354;
									else
									{
										if(ta < 4.5)
										{
											if(rsrp < -84.5)
											{
												if(cqi < 11.5)
												{
													if(velocity < 12.965)
														return 10.4575;
													else
													{
														if(cqi < 8.5)
															return 11.5274;
														else
														{
															if(rsrq < -5.5)
																return 13.78662;
															else
																return 12.3267;
														}
													}
												}
												else
												{
													if(cqi < 13.5)
														return 10.6242;
													else
													{
														if(rsrp < -88.5)
															return 7.87402;
														else
															return 9.17431;
													}
												}
											}
											else
											{
												if(velocity < 13.675)
												{
													if(payload < 0.75)
														return 8.45666;
													else
														return 9.62696;
												}
												else
												{
													if(f < 1384.95)
														return 2.52207;
													else
													{
														if(cqi < 11.5)
														{
															if(cqi < 5.5)
																return 7.25295;
															else
															{
																if(sinr < 13.5)
																	return 10.2041;
																else
																	return 9.38967;
															}
														}
														else
														{
															if(cqi < 13.5)
																return 6.23053;
															else
																return 8.31601;
														}
													}
												}
											}
										}
										else
										{
											if(velocity < 14.06)
												return 3.83325;
											else
											{
												if(payload < 0.75)
												{
													if(rsrq < -6)
														return 5.45703;
													else
														return 6.70017;
												}
												else
												{
													if(cqi < 9.5)
														return 10.2696;
													else
														return 8.7146;
												}
											}
										}
									}
								}
								else
								{
									if(sinr < 9.5)
									{
										if(rsrq < -7.5)
											return 6.20155;
										else
										{
											if(ta < 2)
												return 5.83942;
											else
												return 4.33369;
										}
									}
									else
									{
										if(payload < 0.75)
										{
											if(cqi < 10.5)
												return 9.36768;
											else
												return 8.5179866667;
										}
										else
											return 6.08828;
									}
								}
							}
						}
						else
						{
							if(velocity < 23.525)
							{
								if(rsrp < -63)
								{
									if(cqi < 12.5)
									{
										if(velocity < 7.36)
										{
											if(rsrq < -6.5)
											{
												if(rsrp < -86.5)
												{
													if(rsrp < -89.5)
														return 6.50407;
													else
														return 5.94354;
												}
												else
													return 7.31261;
											}
											else
											{
												if(sinr < 29.5)
												{
													if(cell < 27811715)
														return 9.3900833333;
													else
														return 8.4702633333;
												}
												else
													return 6.57895;
											}
										}
										else
										{
											if(sinr < 22.5)
											{
												if(cell < 28842626)
												{
													if(rsrq < -5)
														return 17.9372;
													else
														return 19.802;
												}
												else
													return 14.1343;
											}
											else
											{
												if(velocity < 9.16)
													return 21.1082;
												else
												{
													if(cqi < 11.5)
													{
														if(rsrp < -91)
															return 3.92542;
														else
															return 8.58369;
													}
													else
													{
														if(ta < 2.5)
														{
															if(payload < 0.75)
															{
																if(velocity < 14.835)
																	return 9.80392;
																else
																	return 10.3896;
															}
															else
															{
																if(sinr < 26.5)
																	return 18.2648;
																else
																	return 9.00901;
															}
														}
														else
														{
															if(rsrp < -81.5)
																return 11.7994;
															else
																return 7.04225;
														}
													}
												}
											}
										}
									}
									else
									{
										if(velocity < 14.045)
										{
											if(velocity < 6.005)
											{
												if(ta < 3)
													return 10.7575333333;
												else
												{
													if(cqi < 14.5)
													{
														if(velocity < 2.755)
														{
															if(rsrp < -77.5)
																return 7.47664;
															else
																return 6.51466;
														}
														else
															return 9.76801;
													}
													else
													{
														if(sinr < 29.5)
															return 8.3682;
														else
															return 9.56062;
													}
												}
											}
											else
											{
												if(rsrp < -72.5)
												{
													if(velocity < 12.675)
														return 8.03213;
													else
														return 7.46269;
												}
												else
												{
													if(cqi < 14)
														return 7.1048;
													else
													{
														if(sinr < 33)
															return 6.61704;
														else
															return 6.0698;
													}
												}
											}
										}
										else
										{
											if(rsrq < -5.5)
											{
												if(rsrq < -6.5)
													return 7.01139;
												else
													return 8.9672933333;
											}
											else
											{
												if(velocity < 15.355)
													return 12.1766;
												else
												{
													if(payload < 0.75)
														return 8.03213;
													else
													{
														if(rsrp < -76)
															return 10.3627;
														else
														{
															if(rsrp < -68.5)
																return 9.88875;
															else
																return 10.4302;
														}
													}
												}
											}
										}
									}
								}
								else
									return 3.72787;
							}
							else
								return 6.382946;
						}
					}
				}
				else
				{
					if(sinr < 9.5)
					{
						if(ta < 2.5)
						{
							if(rsrp < -87)
								return 15;
							else
								return 16.1074;
						}
						else
						{
							if(rsrq < -8.5)
							{
								if(payload < 2.5)
								{
									if(sinr < 4)
										return 9.6911;
									else
										return 8.6409271429;
								}
								else
								{
									if(rsrp < -90)
										return 6.77966;
									else
									{
										if(rsrp < -87)
											return 7.76448;
										else
											return 7.01344;
									}
								}
							}
							else
							{
								if(velocity < 32.56)
								{
									if(rsrp < -84.5)
									{
										if(ta < 3.5)
											return 3.57888;
										else
										{
											if(rsrq < -7.5)
											{
												if(ta < 4.5)
													return 9.12895;
												else
												{
													if(ta < 5.5)
														return 11.988;
													else
														return 10.1074;
												}
											}
											else
											{
												if(payload < 2.5)
													return 7.16846;
												else
													return 8.93189;
											}
										}
									}
									else
									{
										if(sinr < 2.5)
											return 10.0503;
										else
										{
											if(velocity < 6.68)
												return 11.1008;
											else
											{
												if(payload < 2.5)
													return 13.986;
												else
													return 13.3407;
											}
										}
									}
								}
								else
									return 16.9133;
							}
						}
					}
					else
					{
						if(rsrq < -5.5)
						{
							if(rsrp < -77.5)
							{
								if(cqi < 11.5)
								{
									if(f < 2232.5)
									{
										if(cell < 27771908.5)
										{
											if(payload < 2.5)
											{
												if(sinr < 13.5)
													return 6.89061;
												else
												{
													if(sinr < 15)
														return 14.0969;
													else
													{
														if(sinr < 17)
															return 10.8328;
														else
															return 11.5108;
													}
												}
											}
											else
											{
												if(cell < 27078274.5)
												{
													if(ta < 3.5)
														return 23.976;
													else
														return 22.409;
												}
												else
												{
													if(sinr < 12.5)
														return 21.7786;
													else
													{
														if(rsrp < -80)
														{
															if(rsrp < -82.5)
																return 15.3159;
															else
																return 12.8205;
														}
														else
															return 15.4639;
													}
												}
											}
										}
										else
										{
											if(rsrq < -6.5)
											{
												if(rsrp < -87.5)
													return 15.8311;
												else
												{
													if(payload < 2.5)
													{
														if(sinr < 15)
															return 13.4116;
														else
															return 14.4928;
													}
													else
														return 13.5299571429;
												}
											}
											else
											{
												if(rsrp < -85.5)
													return 10.0167;
												else
												{
													if(rsrp < -82)
														return 11.9947;
													else
														return 12.7085;
												}
											}
										}
									}
									else
									{
										if(sinr < 14)
										{
											if(ta < 3)
											{
												if(rsrq < -7.5)
												{
													if(cqi < 9.5)
													{
														if(payload < 2.5)
															return 11.8519;
														else
															return 12.766;
													}
													else
														return 15.2964;
												}
												else
												{
													if(sinr < 12)
														return 9.50683;
													else
														return 11.0193;
												}
											}
											else
											{
												if(rsrp < -90)
													return 15.9521;
												else
													return 15.2964;
											}
										}
										else
										{
											if(rsrp < -90.5)
											{
												if(cqi < 8)
													return 11.0599;
												else
													return 13.1148;
											}
											else
											{
												if(rsrp < -84.5)
												{
													if(velocity < 14.78)
													{
														if(sinr < 19)
															return 11.5274;
														else
															return 10.43386;
													}
													else
														return 9.19012;
												}
												else
													return 8.62534;
											}
										}
									}
								}
								else
								{
									if(rsrq < -6.5)
									{
										if(f < 2232.5)
										{
											if(velocity < 13.3)
											{
												if(rsrp < -80.5)
												{
													if(ta < 3)
														return 9.2847525;
													else
														return 8.27301;
												}
												else
													return 10.4308;
											}
											else
											{
												if(rsrp < -89)
													return 11.4204;
												else
													return 15.13706;
											}
										}
										else
											return 16.1834;
									}
									else
									{
										if(payload < 2.5)
										{
											if(rsrp < -84.5)
											{
												if(cell < 26382081.5)
													return 9.84615;
												else
												{
													if(sinr < 15.5)
														return 6.91742;
													else
														return 8.06189;
												}
											}
											else
											{
												if(velocity < 13.61)
												{
													if(sinr < 20)
													{
														if(sinr < 15)
															return 9.71463;
														else
															return 11.2518;
													}
													else
													{
														if(cqi < 13.5)
															return 8.47907;
														else
															return 7.30594;
													}
												}
												else
												{
													if(ta < 5)
													{
														if(sinr < 29.5)
															return 10.9141;
														else
															return 9.34579;
													}
													else
														return 12.4902;
												}
											}
										}
										else
										{
											if(ta < 3)
											{
												if(rsrp < -84.5)
													return 12.487;
												else
												{
													if(cqi < 13.5)
														return 11.8402;
													else
														return 10.1523;
												}
											}
											else
											{
												if(cell < 28323715)
												{
													if(rsrp < -87.5)
														return 12.6984;
													else
														return 14.7149;
												}
												else
													return 12.5392;
											}
										}
									}
								}
							}
							else
							{
								if(ta < 0.5)
									return 2.98563;
								else
								{
									if(cqi < 13.5)
									{
										if(cell < 27771907)
										{
											if(rsrp < -73.5)
												return 20.4255;
											else
											{
												if(velocity < 14.64)
												{
													if(cqi < 9.5)
														return 13.0293;
													else
													{
														if(sinr < 17.5)
															return 8.99888;
														else
														{
															if(velocity < 6.56)
																return 13.3779;
															else
																return 10.6619;
														}
													}
												}
												else
													return 7.28376;
											}
										}
										else
											return 21.5054;
									}
									else
									{
										if(velocity < 13.01)
										{
											if(payload < 2.5)
												return 25.5183;
											else
												return 24.4151;
										}
										else
											return 10.1523;
									}
								}
							}
						}
						else
						{
							if(sinr < 28)
							{
								if(payload < 2.5)
								{
									if(cell < 31459329.5)
									{
										if(cell < 27078273.5)
										{
											if(velocity < 12.35)
												return 14.83635;
											else
												return 11.6365;
										}
										else
										{
											if(cqi < 12.5)
											{
												if(cell < 27771523.5)
													return 14.9393;
												else
													return 13.8306;
											}
											else
												return 16.178;
										}
									}
									else
										return 18.2232;
								}
								else
								{
									if(rsrp < -84)
										return 14.742;
									else
									{
										if(sinr < 24)
										{
											if(rsrp < -80)
											{
												if(cell < 28581121.5)
													return 17.48;
												else
													return 15.9468;
											}
											else
												return 21.4669;
										}
										else
										{
											if(velocity < 15.055)
												return 22.1402;
											else
												return 25;
										}
									}
								}
							}
							else
							{
								if(ta < 5)
								{
									if(cell < 29391104.5)
									{
										if(cell < 27771908.5)
										{
											if(velocity < 15.34)
											{
												if(cqi < 14.5)
													return 13.7852;
												else
													return 12.959;
											}
											else
												return 14.3802;
										}
										else
										{
											if(sinr < 36.5)
												return 13.3561666667;
											else
												return 11.6959;
										}
									}
									else
									{
										if(payload < 2.5)
											return 12.4127;
										else
											return 9.86436;
									}
								}
								else
									return 22.8354;
							}
						}
					}
				}
			}
			else
			{
				if(payload < 1.5)
				{
					if(rsrp < -72.5)
					{
						if(payload < 0.3)
						{
							if(ta < 19.5)
							{
								if(velocity < 11.775)
								{
									if(cell < 28367745.5)
									{
										if(sinr < 16.5)
										{
											if(cell < 27697153.5)
											{
												if(rsrp < -90.5)
													return 4.4944;
												else
												{
													if(rsrp < -87.5)
														return 5.1863775;
													else
														return 4.897775;
												}
											}
											else
											{
												if(velocity < 4.92)
												{
													if(sinr < 1.5)
														return 5.51726;
													else
													{
														if(rsrp < -89.5)
														{
															if(sinr < 9.5)
																return 5.29803;
															else
																return 4.44446;
														}
														else
															return 3.70372;
													}
												}
												else
													return 3.52424;
											}
										}
										else
										{
											if(f < 2232.5)
											{
												if(velocity < 8.76)
												{
													if(sinr < 24)
														return 5.12822;
													else
														return 3.98011;
												}
												else
												{
													if(rsrp < -87)
														return 3.58746;
													else
														return 4.23282;
												}
											}
											else
												return 3.33335;
										}
									}
									else
									{
										if(cell < 28879745.5)
										{
											if(rsrq < -6.5)
												return 7.07967;
											else
												return 5.83944;
										}
										else
										{
											if(cell < 29483522)
											{
												if(cqi < 12)
												{
													if(rsrq < -5.5)
														return 2.73974;
													else
														return 4.6243;
												}
												else
													return 6.83763;
											}
											else
												return 5.232355;
										}
									}
								}
								else
								{
									if(rsrq < -8)
									{
										if(sinr < 4)
											return 9.19544;
										else
										{
											if(rsrq < -9.5)
												return 6.6116;
											else
												return 8.42108;
										}
									}
									else
									{
										if(rsrp < -82.5)
										{
											if(velocity < 12.45)
											{
												if(rsrp < -90.5)
													return 4.4944;
												else
												{
													if(ta < 7.5)
														return 6.83763;
													else
														return 6.06063;
												}
											}
											else
											{
												if(f < 2232.5)
												{
													if(sinr < 20.5)
														return 8.08084;
													else
														return 7.30763;
												}
												else
													return 5.59443;
											}
										}
										else
										{
											if(sinr < 15.5)
												return 3.86475;
											else
											{
												if(velocity < 21.17)
													return 4.41991;
												else
													return 4.8372675;
											}
										}
									}
								}
							}
							else
								return 3.33335;
						}
						else
						{
							if(rsrp < -80.5)
							{
								if(rsrq < -8.5)
								{
									if(cell < 27771011.5)
										return 10.0376;
									else
									{
										if(cqi < 12)
										{
											if(cell < 28365059.5)
											{
												if(ta < 7.5)
													return 3.15209;
												else
													return 4.4465;
											}
											else
												return 0.718649;
										}
										else
											return 7.16846;
									}
								}
								else
								{
									if(cqi < 10.5)
									{
										if(sinr < 25.5)
										{
											if(velocity < 25.86)
											{
												if(rsrp < -90.5)
												{
													if(velocity < 5.675)
														return 4.08998;
													else
													{
														if(velocity < 7.465)
															return 9.51249;
														else
														{
															if(payload < 0.75)
																return 8.08081;
															else
															{
																if(rsrq < -5.5)
																	return 6.337075;
																else
																	return 6.80272;
															}
														}
													}
												}
												else
												{
													if(rsrp < -85.5)
													{
														if(ta < 8.5)
														{
															if(velocity < 14.735)
															{
																if(cell < 27977089)
																{
																	if(rsrp < -86.5)
																	{
																		if(rsrp < -88.5)
																			return 8.69565;
																		else
																			return 7.70713;
																	}
																	else
																		return 9.41176;
																}
																else
																{
																	if(rsrp < -86.5)
																		return 12.2888;
																	else
																	{
																		if(sinr < 12.5)
																			return 10.4987;
																		else
																			return 9.63855;
																	}
																}
															}
															else
																return 14.4404;
														}
														else
														{
															if(sinr < 10)
																return 7.51174;
															else
																return 6.34921;
														}
													}
													else
													{
														if(sinr < 17.5)
														{
															if(cqi < 9.5)
															{
																if(rsrq < -5.5)
																	return 8.56531;
																else
																	return 7.69971;
															}
															else
															{
																if(rsrp < -84.5)
																	return 5.64573;
																else
																	return 7.11744;
															}
														}
														else
															return 8.524265;
													}
												}
											}
											else
												return 15.534;
										}
										else
											return 12.8205;
									}
									else
									{
										if(rsrp < -84)
										{
											if(cell < 28883330)
											{
												if(cell < 28070145.5)
												{
													if(rsrp < -88.5)
														return 4.5977;
													else
													{
														if(velocity < 3.765)
															return 6.36943;
														else
														{
															if(cell < 26382082)
																return 7.93651;
															else
																return 7.4037585714;
														}
													}
												}
												else
													return 4.36681;
											}
											else
											{
												if(ta < 8)
													return 7.7821;
												else
													return 8.92857;
											}
										}
										else
										{
											if(rsrp < -81.5)
											{
												if(payload < 0.75)
													return 8.28408;
												else
													return 9.23788;
											}
											else
												return 7.5543;
										}
									}
								}
							}
							else
							{
								if(cell < 27771014)
								{
									if(velocity < 13.48)
									{
										if(sinr < 18.5)
											return 8.63931;
										else
											return 9.73236;
									}
									else
									{
										if(sinr < 24)
										{
											if(sinr < 19.5)
												return 4.51141;
											else
												return 5.02513;
										}
										else
											return 8.88889;
									}
								}
								else
								{
									if(sinr < 16)
										return 21.164;
									else
									{
										if(rsrq < -7)
											return 11.4286;
										else
										{
											if(velocity < 14.695)
												return 12.3457;
											else
											{
												if(cqi < 13.5)
													return 7.95229;
												else
													return 7.0922;
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if(sinr < 25.5)
						{
							if(rsrq < -5.5)
							{
								if(rsrp < -65)
								{
									if(sinr < 16)
										return 3.66974;
									else
										return 2.55592;
								}
								else
									return 5.36915;
							}
							else
							{
								if(rsrp < -69.5)
									return 6.01504;
								else
									return 5.4506;
							}
						}
						else
						{
							if(velocity < 25.98)
							{
								if(payload < 0.55)
								{
									if(rsrp < -71.5)
										return 3.05345;
									else
										return 3.57144;
								}
								else
									return 2.6178;
							}
							else
								return 4.4944;
						}
					}
				}
				else
				{
					if(velocity < 20.17)
					{
						if(rsrq < -9)
						{
							if(rsrq < -10.5)
							{
								if(rsrq < -11.5)
									return 11.976;
								else
									return 9.38967;
							}
							else
								return 13.88433;
						}
						else
						{
							if(payload < 2.5)
							{
								if(velocity < 14.555)
								{
									if(velocity < 0.505)
										return 7.0473233333;
									else
									{
										if(velocity < 10.845)
										{
											if(cqi < 9.5)
												return 10.9589;
											else
											{
												if(sinr < 27.5)
												{
													if(ta < 9.5)
														return 9.922825;
													else
														return 10.3896;
												}
												else
													return 9.73828;
											}
										}
										else
										{
											if(cqi < 13.5)
											{
												if(rsrp < -88.5)
													return 8.33768;
												else
													return 9.13528;
											}
											else
												return 7.32601;
										}
									}
								}
								else
								{
									if(sinr < 18.5)
										return 10.64915;
									else
										return 12.2982;
								}
							}
							else
							{
								if(velocity < 4.255)
								{
									if(cell < 28213763.5)
									{
										if(velocity < 1.085)
										{
											if(f < 2232.5)
											{
												if(rsrp < -72)
												{
													if(rsrp < -82.5)
														return 14.5191;
													else
														return 13.6286;
												}
												else
													return 11.6392;
											}
											else
												return 14.9161;
										}
										else
											return 15.8311;
									}
									else
									{
										if(rsrp < -89.5)
											return 13.2597;
										else
											return 7.46269;
									}
								}
								else
								{
									if(rsrp < -78)
									{
										if(sinr < 5)
											return 7.05467;
										else
										{
											if(velocity < 8.335)
											{
												if(rsrp < -84.5)
													return 11.2202;
												else
													return 11.846;
											}
											else
											{
												if(velocity < 10.315)
													return 13.7773;
												else
													return 12.63215;
											}
										}
									}
									else
										return 8.67365;
								}
							}
						}
					}
					else
					{
						if(sinr < 16.5)
						{
							if(cqi < 9.5)
								return 11.0421;
							else
								return 12.2324;
						}
						else
						{
							if(velocity < 27.19)
								return 21.4095;
							else
							{
								if(sinr < 19.5)
									return 17.7187;
								else
								{
									if(cqi < 13.5)
										return 14.6372333333;
									else
										return 13.3111;
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
		if(cqi < 9.5)
		{
			if(rsrq < -7.5)
			{
				if(rsrp < -100.5)
				{
					if(cell < 28368385)
					{
						if(rsrp < -101.5)
						{
							if(rsrq < -12.5)
								return 3.62784;
							else
							{
								if(rsrq < -11.5)
								{
									if(ta < 8)
									{
										if(payload < 9)
											return 21.8132;
										else
											return 19.656;
									}
									else
									{
										if(payload < 5.5)
											return 7.87789;
										else
											return 13.4389;
									}
								}
								else
								{
									if(ta < 5.5)
									{
										if(velocity < 10.185)
										{
											if(payload < 6.5)
												return 14.9198;
											else
												return 19.025;
										}
										else
										{
											if(payload < 8.5)
												return 9.5139;
											else
												return 14.4202;
										}
									}
									else
									{
										if(payload < 5.5)
										{
											if(rsrp < -106.5)
											{
												if(cqi < 6)
													return 11.9653;
												else
													return 8.76472;
											}
											else
											{
												if(rsrp < -103.5)
												{
													if(velocity < 9.675)
														return 2.784615;
													else
														return 8.0048;
												}
												else
												{
													if(payload < 4.5)
														return 8.97112;
													else
														return 11.564;
												}
											}
										}
										else
										{
											if(velocity < 1.75)
											{
												if(sinr < -1)
												{
													if(sinr < -3.5)
													{
														if(rsrq < -10.5)
															return 13.35;
														else
															return 12.4935;
													}
													else
														return 9.4585;
												}
												else
												{
													if(sinr < 2.5)
														return 8.10948;
													else
													{
														if(sinr < 5.5)
															return 6.2985233333;
														else
															return 4.78813;
													}
												}
											}
											else
											{
												if(rsrp < -108)
													return 21.9914;
												else
												{
													if(velocity < 15.1)
													{
														if(payload < 8.5)
														{
															if(ta < 8.5)
															{
																if(payload < 6.5)
																{
																	if(sinr < 2.5)
																		return 10.5518;
																	else
																		return 9.78394;
																}
																else
																	return 12.0586;
															}
															else
															{
																if(velocity < 14.68)
																	return 10.3778;
																else
																	return 8.92608;
															}
														}
														else
															return 11.65955;
													}
													else
														return 14.6991;
												}
											}
										}
									}
								}
							}
						}
						else
						{
							if(payload < 7)
								return 18.3311;
							else
							{
								if(ta < 9.5)
									return 9.47306;
								else
									return 16.5555;
							}
						}
					}
					else
					{
						if(payload < 7.5)
						{
							if(rsrq < -9.5)
							{
								if(payload < 4.5)
								{
									if(sinr < 3)
										return 6.01165;
									else
										return 4.79832;
								}
								else
								{
									if(cqi < 4)
										return 5.78285;
									else
									{
										if(rsrp < -106.5)
											return 10.6833;
										else
										{
											if(ta < 11)
												return 7.61905;
											else
											{
												if(rsrq < -10.5)
													return 8.940966;
												else
												{
													if(payload < 6.5)
														return 10.6054;
													else
														return 9.62034;
												}
											}
										}
									}
								}
							}
							else
							{
								if(cell < 30851841)
								{
									if(rsrq < -8.5)
										return 5.42594;
									else
										return 5.96036;
								}
								else
									return 5.034635;
							}
						}
						else
						{
							if(sinr < 2)
							{
								if(rsrq < -10.5)
								{
									if(cell < 28969984.5)
										return 10.2788;
									else
									{
										if(sinr < -3)
											return 14.4029;
										else
											return 13.8169;
									}
								}
								else
									return 19.3353;
							}
							else
							{
								if(cell < 29142273)
								{
									if(rsrq < -9.5)
										return 9.12513;
									else
										return 7.02371;
								}
								else
								{
									if(cqi < 5.5)
										return 14.9841;
									else
										return 10.9111;
								}
							}
						}
					}
				}
				else
				{
					if(ta < 23)
					{
						if(f < 2232.5)
						{
							if(sinr < -5)
							{
								if(cqi < 8.5)
								{
									if(rsrq < -12.5)
										return 1.68649;
									else
										return 2.45832;
								}
								else
									return 4.96674;
							}
							else
							{
								if(payload < 5.5)
								{
									if(rsrq < -10.5)
									{
										if(cqi < 5)
											return 0.759503;
										else
										{
											if(cell < 28068480)
												return 7.62195;
											else
											{
												if(sinr < 1.5)
													return 11.5141;
												else
												{
													if(cqi < 7)
													{
														if(rsrp < -94.5)
														{
															if(rsrp < -99)
																return 8.93356;
															else
																return 9.90099;
														}
														else
															return 8.79507;
													}
													else
													{
														if(sinr < 3.5)
															return 9.32401;
														else
															return 10.7066;
													}
												}
											}
										}
									}
									else
									{
										if(ta < 11.5)
										{
											if(cell < 28068097.5)
											{
												if(cqi < 7)
													return 20.0401;
												else
													return 16.7856;
											}
											else
											{
												if(ta < 10.5)
												{
													if(ta < 9.5)
													{
														if(sinr < 19)
														{
															if(rsrq < -9.5)
															{
																if(sinr < 8.5)
																{
																	if(ta < 6)
																		return 11.8671;
																	else
																	{
																		if(sinr < 1.5)
																			return 15.9283;
																		else
																			return 14.2096;
																	}
																}
																else
																{
																	if(rsrp < -95)
																		return 14.1907;
																	else
																		return 15.4381;
																}
															}
															else
															{
																if(rsrp < -87)
																{
																	if(rsrp < -92.5)
																	{
																		if(cqi < 7.5)
																		{
																			if(ta < 7.5)
																			{
																				if(ta < 4.5)
																					return 12.5274;
																				else
																					return 11.8299;
																			}
																			else
																			{
																				if(rsrq < -8.5)
																					return 12.65098;
																				else
																					return 15.3374;
																			}
																		}
																		else
																		{
																			if(payload < 4.5)
																			{
																				if(rsrp < -98.5)
																					return 14.3756;
																				else
																				{
																					if(cell < 28367744.5)
																						return 16.219;
																					else
																						return 15.6709;
																				}
																			}
																			else
																				return 14.0647;
																		}
																	}
																	else
																	{
																		if(cqi < 7)
																			return 11.49905;
																		else
																			return 10.45092;
																	}
																}
																else
																{
																	if(cell < 29139201.5)
																		return 14.4928;
																	else
																		return 16.5717;
																}
															}
														}
														else
														{
															if(payload < 4.5)
																return 10.356;
															else
																return 9.6498;
														}
													}
													else
														return 17.0648;
												}
												else
													return 22.9391;
											}
										}
										else
										{
											if(sinr < 5.5)
											{
												if(payload < 4.5)
													return 5.608424;
												else
													return 12.7796;
											}
											else
											{
												if(cell < 28581122.5)
													return 14.2476;
												else
													return 16.1616;
											}
										}
									}
								}
								else
								{
									if(ta < 7.5)
									{
										if(velocity < 11.31)
										{
											if(rsrp < -98.5)
											{
												if(ta < 6.5)
												{
													if(payload < 8.5)
														return 22.2134;
													else
														return 19.98;
												}
												else
												{
													if(sinr < 9.5)
													{
														if(velocity < 8.635)
														{
															if(payload < 7.5)
																return 15.8268;
															else
																return 19.3295;
														}
														else
															return 13.5415;
													}
													else
													{
														if(rsrq < -8.5)
															return 20.1342;
														else
															return 16.5631;
													}
												}
											}
											else
											{
												if(sinr < 4.5)
												{
													if(rsrq < -8.5)
													{
														if(cqi < 4.5)
														{
															if(rsrq < -10.5)
																return 15.3895;
															else
																return 10.2324;
														}
														else
														{
															if(velocity < 9.93)
															{
																if(sinr < 2.5)
																{
																	if(rsrp < -93.5)
																		return 16.60254;
																	else
																		return 15.9257;
																}
																else
																	return 17.9143;
															}
															else
																return 20.3859;
														}
													}
													else
														return 20.2817;
												}
												else
												{
													if(rsrp < -94.5)
													{
														if(rsrp < -97.5)
															return 6.04483;
														else
														{
															if(cell < 28879106)
																return 12.3839;
															else
																return 13.3907;
														}
													}
													else
													{
														if(rsrp < -93.5)
															return 22.4809;
														else
														{
															if(ta < 3.5)
															{
																if(rsrq < -9.5)
																	return 23.0695;
																else
																	return 18.031325;
															}
															else
															{
																if(rsrp < -87.5)
																{
																	if(payload < 8.5)
																	{
																		if(sinr < 14)
																			return 12.0346;
																		else
																		{
																			if(payload < 7.5)
																				return 14.94085;
																			else
																				return 14.1593;
																		}
																	}
																	else
																		return 10.8893;
																}
																else
																	return 18.3993;
															}
														}
													}
												}
											}
										}
										else
										{
											if(velocity < 25.465)
											{
												if(rsrp < -91.5)
												{
													if(velocity < 14.47)
													{
														if(velocity < 14.225)
														{
															if(sinr < 5.5)
															{
																if(cell < 29568768.5)
																{
																	if(cqi < 5)
																		return 10.3608;
																	else
																	{
																		if(cell < 28967937)
																			return 11.96795;
																		else
																		{
																			if(velocity < 12.78)
																				return 10.3627;
																			else
																				return 10.9364;
																		}
																	}
																}
																else
																{
																	if(sinr < 2.5)
																		return 9.73744;
																	else
																		return 9.19188;
																}
															}
															else
															{
																if(payload < 8.5)
																	return 12.5928;
																else
																	return 13.7292;
															}
														}
														else
														{
															if(rsrp < -98.5)
																return 21.2515;
															else
																return 24.5291;
														}
													}
													else
													{
														if(rsrp < -93.5)
														{
															if(cqi < 5)
															{
																if(velocity < 16.25)
																	return 10.6171;
																else
																	return 12.2431;
															}
															else
															{
																if(cqi < 7)
																	return 5.35885;
																else
																	return 8.45666;
															}
														}
														else
															return 15.5844;
													}
												}
												else
												{
													if(sinr < 18)
													{
														if(ta < 3.5)
															return 12.3818;
														else
														{
															if(rsrp < -90)
																return 14.4372;
															else
															{
																if(velocity < 16.805)
																	return 15.0849;
																else
																	return 16.0387;
															}
														}
													}
													else
													{
														if(sinr < 22.5)
															return 17.9775;
														else
														{
															if(rsrp < -85.5)
																return 20.3218;
															else
																return 19.3783;
														}
													}
												}
											}
											else
											{
												if(rsrp < -94.5)
													return 19.5804;
												else
													return 24.4275;
											}
										}
									}
									else
									{
										if(velocity < 38.1)
										{
											if(cell < 27074690.5)
											{
												if(sinr < 6.5)
												{
													if(rsrp < -90.5)
													{
														if(velocity < 12.405)
														{
															if(rsrq < -11)
																return 9.87306;
															else
															{
																if(payload < 7.5)
																	return 9.15631;
																else
																	return 8.56875;
															}
														}
														else
														{
															if(ta < 10.5)
																return 10.5789;
															else
																return 11.891;
														}
													}
													else
														return 13.124;
												}
												else
												{
													if(payload < 9.5)
														return 14.3113;
													else
														return 14.8148;
												}
											}
											else
											{
												if(velocity < 14.71)
												{
													if(payload < 6.5)
													{
														if(rsrp < -89.5)
														{
															if(cell < 29652224.5)
															{
																if(velocity < 11.835)
																{
																	if(cell < 28366721)
																	{
																		if(rsrp < -90.5)
																			return 9.89283;
																		else
																			return 10.3986;
																	}
																	else
																		return 8.80572;
																}
																else
																{
																	if(rsrp < -98)
																		return 7.26502;
																	else
																		return 5.947435;
																}
															}
															else
															{
																if(cqi < 5.5)
																	return 12.3077;
																else
																	return 10.4735;
															}
														}
														else
														{
															if(cqi < 5)
																return 11.065;
															else
															{
																if(rsrp < -88.5)
																	return 18.1956;
																else
																	return 17.6861;
															}
														}
													}
													else
													{
														if(rsrp < -99)
														{
															if(sinr < -2.5)
																return 14.6333;
															else
															{
																if(rsrq < -10.5)
																	return 8.92558;
																else
																	return 5.58102;
															}
														}
														else
														{
															if(velocity < 12.09)
															{
																if(ta < 9.5)
																{
																	if(velocity < 10.96)
																	{
																		if(rsrp < -90.5)
																		{
																			if(rsrp < -92.5)
																			{
																				if(rsrp < -93.5)
																					return 16.3839;
																				else
																				{
																					if(cell < 29139200)
																						return 13.6685;
																					else
																						return 15.6671;
																				}
																			}
																			else
																			{
																				if(payload < 9.5)
																					return 17.80696;
																				else
																					return 17.208;
																			}
																		}
																		else
																			return 13.52;
																	}
																	else
																		return 9.69697;
																}
																else
																{
																	if(velocity < 10.325)
																	{
																		if(rsrp < -94.5)
																		{
																			if(payload < 9)
																			{
																				if(velocity < 5.445)
																				{
																					if(rsrp < -96.5)
																						return 19.7897;
																					else
																						return 17.9545;
																				}
																				else
																					return 16.2602;
																			}
																			else
																			{
																				if(cqi < 7)
																					return 11.2407;
																				else
																					return 17.5786;
																			}
																		}
																		else
																			return 11.525225;
																	}
																	else
																	{
																		if(velocity < 11.35)
																			return 10.7367333333;
																		else
																			return 9.19658;
																	}
																}
															}
															else
															{
																if(sinr < 0.5)
																{
																	if(rsrp < -92)
																		return 13.2286;
																	else
																		return 13.858;
																}
																else
																{
																	if(payload < 8)
																		return 21.156;
																	else
																		return 22.2017;
																}
															}
														}
													}
												}
												else
												{
													if(velocity < 17.025)
													{
														if(ta < 11)
															return 16.2053;
														else
														{
															if(rsrp < -97)
																return 19.3564;
															else
																return 20.6724;
														}
													}
													else
													{
														if(f < 1384.95)
															return 8.56531;
														else
														{
															if(velocity < 17.2)
																return 10.3981;
															else
															{
																if(velocity < 31.395)
																{
																	if(velocity < 19.08)
																	{
																		if(sinr < 1)
																			return 17.5362;
																		else
																			return 18.3533;
																	}
																	else
																	{
																		if(payload < 7.5)
																			return 16.5289;
																		else
																			return 17.09;
																	}
																}
																else
																{
																	if(sinr < 7)
																	{
																		if(velocity < 32.8)
																			return 13.5593;
																		else
																		{
																			if(sinr < -2.5)
																				return 15.4989;
																			else
																				return 14.4894;
																		}
																	}
																	else
																		return 16.8705;
																}
															}
														}
													}
												}
											}
										}
										else
											return 31.1284;
									}
								}
							}
						}
						else
						{
							if(cell < 26378754.5)
							{
								if(payload < 7.5)
									return 13.6325;
								else
									return 14.79984;
							}
							else
							{
								if(ta < 1.5)
								{
									if(payload < 9)
										return 18.7354;
									else
										return 24.3013;
								}
								else
								{
									if(cqi < 8.5)
									{
										if(cell < 27164291.5)
										{
											if(rsrp < -76.5)
											{
												if(cqi < 5.5)
													return 17.3442;
												else
												{
													if(payload < 8.5)
													{
														if(payload < 5)
														{
															if(rsrq < -8.5)
																return 19.3939;
															else
																return 20.5523;
														}
														else
														{
															if(sinr < 13.5)
															{
																if(cqi < 6.5)
																	return 17.5103;
																else
																	return 19.12706;
															}
															else
																return 16.5582;
														}
													}
													else
													{
														if(sinr < 5.5)
															return 20.7433;
														else
															return 21.29385;
													}
												}
											}
											else
											{
												if(payload < 9.5)
													return 13.8435;
												else
													return 17.9533;
											}
										}
										else
										{
											if(payload < 5.5)
												return 10.4796385971;
											else
											{
												if(cqi < 4.5)
													return 12.4103;
												else
												{
													if(rsrp < -90.5)
													{
														if(rsrp < -96.5)
															return 16.6359;
														else
															return 17.6665;
													}
													else
														return 15.0801;
												}
											}
										}
									}
									else
									{
										if(cell < 26587523)
											return 12.1059;
										else
										{
											if(ta < 2.5)
												return 14.1875;
											else
												return 14.7874;
										}
									}
								}
							}
						}
					}
					else
					{
						if(sinr < 3.5)
						{
							if(cqi < 4.5)
								return 6.8918;
							else
							{
								if(sinr < 0.5)
								{
									if(rsrp < -91.5)
										return 8.69723;
									else
										return 7.47175;
								}
								else
									return 10.5332;
							}
						}
						else
							return 2.31459;
					}
				}
			}
			else
			{
				if(sinr < 12.5)
				{
					if(ta < 7.5)
					{
						if(cqi < 8.5)
						{
							if(payload < 6.5)
							{
								if(rsrp < -99.5)
									return 6.73873;
								else
								{
									if(cell < 26385409)
									{
										if(cell < 26378884)
										{
											if(sinr < 11.5)
											{
												if(payload < 4.5)
													return 16.0401;
												else
												{
													if(payload < 5.5)
														return 18.9036;
													else
														return 17.2105;
												}
											}
											else
												return 11.7561;
										}
										else
										{
											if(payload < 4.5)
												return 8.67444;
											else
												return 14.6252;
										}
									}
									else
									{
										if(sinr < 4.5)
										{
											if(rsrq < -5)
												return 10.6773;
											else
												return 19.9302;
										}
										else
										{
											if(cell < 27771012)
											{
												if(payload < 5.5)
													return 17.6913;
												else
													return 16.4103;
											}
											else
											{
												if(sinr < 8)
													return 19.9203;
												else
													return 21.5476;
											}
										}
									}
								}
							}
							else
							{
								if(cell < 28367105.5)
								{
									if(sinr < 5.5)
									{
										if(sinr < 4)
											return 26.3852;
										else
											return 30.3951;
									}
									else
									{
										if(cqi < 7.5)
										{
											if(cqi < 6.5)
											{
												if(rsrq < -6.5)
												{
													if(payload < 7.5)
														return 23.6887;
													else
														return 20.8699333333;
												}
												else
												{
													if(sinr < 6.5)
														return 27.2772;
													else
														return 25.6959;
												}
											}
											else
												return 31.1419;
										}
										else
										{
											if(payload < 8.5)
												return 12.4031;
											else
											{
												if(velocity < 13.69)
												{
													if(velocity < 5.275)
														return 20.01;
													else
													{
														if(cell < 27078273.5)
															return 26.0586;
														else
															return 25.5864;
													}
												}
												else
												{
													if(payload < 9.5)
														return 19.1388;
													else
														return 19.9154;
												}
											}
										}
									}
								}
								else
								{
									if(velocity < 7.535)
										return 10.0587;
									else
									{
										if(rsrp < -92.5)
										{
											if(ta < 5.5)
												return 18.0099;
											else
											{
												if(rsrp < -95)
													return 23.4212;
												else
													return 21.6383;
											}
										}
										else
										{
											if(ta < 3.5)
											{
												if(ta < 2.5)
													return 16.5926;
												else
													return 11.179;
											}
											else
												return 22.0766;
										}
									}
								}
							}
						}
						else
						{
							if(payload < 8)
							{
								if(ta < 4.5)
								{
									if(velocity < 4.22)
										return 9.70285;
									else
									{
										if(payload < 6.5)
										{
											if(payload < 5.5)
											{
												if(sinr < 8)
												{
													if(payload < 4.5)
														return 15.5491;
													else
														return 14.2349;
												}
												else
													return 17.4064;
											}
											else
											{
												if(velocity < 27.245)
												{
													if(ta < 2)
														return 16.4046;
													else
														return 18.1887;
												}
												else
													return 18.9949;
											}
										}
										else
										{
											if(velocity < 11.41)
												return 14.8227;
											else
												return 13.2543;
										}
									}
								}
								else
								{
									if(sinr < 8.5)
										return 5.80201;
									else
									{
										if(payload < 4.5)
											return 14.469875;
										else
											return 12.5845333333;
									}
								}
							}
							else
							{
								if(rsrq < -6.5)
									return 28.2132;
								else
									return 18.5615;
							}
						}
					}
					else
					{
						if(payload < 6.5)
						{
							if(cqi < 6.5)
							{
								if(velocity < 14.38)
								{
									if(f < 2232.5)
									{
										if(rsrq < -6)
											return 6.2281;
										else
										{
											if(velocity < 11.75)
												return 6.80079;
											else
												return 6.13732;
										}
									}
									else
										return 7.13171;
								}
								else
								{
									if(sinr < 3.5)
										return 12.0573;
									else
										return 12.6622;
								}
							}
							else
							{
								if(cell < 27400067)
								{
									if(velocity < 9.84)
									{
										if(sinr < 11)
											return 14.5085;
										else
											return 13.7883;
									}
									else
										return 12.3951;
								}
								else
								{
									if(payload < 4.5)
										return 13.3278;
									else
									{
										if(ta < 8.5)
											return 17.2352;
										else
											return 18.0505;
									}
								}
							}
						}
						else
						{
							if(cell < 28883331)
							{
								if(velocity < 11.86)
								{
									if(ta < 8.5)
										return 11.7188;
									else
									{
										if(sinr < 6)
										{
											if(rsrp < -88)
												return 19.1094;
											else
												return 16.2785;
										}
										else
										{
											if(ta < 9.5)
											{
												if(rsrp < -99.5)
													return 13.3779;
												else
													return 14.0543;
											}
											else
												return 15.42512;
										}
									}
								}
								else
								{
									if(rsrp < -93.5)
										return 8.1064;
									else
										return 9.62811;
								}
							}
							else
							{
								if(ta < 14)
								{
									if(rsrq < -6.5)
										return 13.1765;
									else
									{
										if(rsrp < -94)
											return 15.273;
										else
										{
											if(rsrp < -89.5)
											{
												if(rsrp < -92.5)
													return 19.1912;
												else
													return 18.082;
											}
											else
												return 22.188;
										}
									}
								}
								else
									return 23.2474;
							}
						}
					}
				}
				else
				{
					if(velocity < 16.565)
					{
						if(payload < 7.5)
						{
							if(ta < 7.5)
							{
								if(sinr < 28.5)
								{
									if(cell < 26382211.5)
									{
										if(ta < 5)
											return 14.767;
										else
										{
											if(rsrq < -6)
												return 12.4527;
											else
												return 11.5025;
										}
									}
									else
									{
										if(payload < 5.5)
										{
											if(sinr < 15)
												return 10.7383;
											else
											{
												if(velocity < 7.655)
												{
													if(sinr < 21.5)
														return 15.89496;
													else
														return 15.0943;
												}
												else
													return 14.9589;
											}
										}
										else
										{
											if(rsrq < -6.5)
											{
												if(cqi < 6.5)
													return 18.9798;
												else
												{
													if(velocity < 15.435)
													{
														if(sinr < 24)
															return 15.9072;
														else
															return 16.6071666667;
													}
													else
														return 17.6535;
												}
											}
											else
											{
												if(ta < 3.5)
													return 18.3667;
												else
													return 19.1388;
											}
										}
									}
								}
								else
									return 31.746;
							}
							else
							{
								if(sinr < 15.5)
								{
									if(rsrp < -96)
										return 5.70207;
									else
									{
										if(cqi < 7.5)
											return 23.8806;
										else
										{
											if(velocity < 10.645)
											{
												if(payload < 5.5)
												{
													if(rsrp < -92)
														return 17.567;
													else
														return 18.4544;
												}
												else
													return 21.0896;
											}
											else
												return 21.4604875;
										}
									}
								}
								else
								{
									if(cell < 29483522)
									{
										if(velocity < 1.35)
											return 15.9412;
										else
										{
											if(payload < 6)
												return 17.5362;
											else
												return 18.4453;
										}
									}
									else
									{
										if(payload < 5.5)
											return 19.3822;
										else
											return 18.2887;
									}
								}
							}
						}
						else
						{
							if(sinr < 16.5)
							{
								if(velocity < 0.865)
									return 22.7992;
								else
								{
									if(ta < 9)
									{
										if(ta < 2.5)
											return 16.6286;
										else
										{
											if(cell < 28879105)
											{
												if(rsrp < -88.5)
													return 18.7518;
												else
												{
													if(rsrq < -6)
														return 18.1303;
													else
														return 18.5854;
												}
											}
											else
												return 19.5551;
										}
									}
									else
									{
										if(sinr < 13.5)
											return 16.791;
										else
											return 15.24735;
									}
								}
							}
							else
							{
								if(rsrp < -95.5)
									return 30.0328;
								else
								{
									if(velocity < 10.52)
									{
										if(rsrp < -88)
										{
											if(f < 2232.5)
												return 18.136;
											else
											{
												if(sinr < 27.5)
													return 20.12895;
												else
													return 20.6053;
											}
										}
										else
										{
											if(sinr < 24)
												return 17.9252;
											else
												return 17.2373;
										}
									}
									else
									{
										if(rsrp < -86)
											return 26.2582;
										else
										{
											if(payload < 9.5)
											{
												if(velocity < 13.7)
													return 20.276;
												else
													return 22.0766;
											}
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
						if(sinr < 28.5)
						{
							if(cqi < 5)
								return 26.2104;
							else
								return 30.7692;
						}
						else
							return 20.377;
					}
				}
			}
		}
		else
		{
			if(rsrp < -90.5)
			{
				if(payload < 6.5)
				{
					if(velocity < 11.545)
					{
						if(payload < 5.5)
						{
							if(velocity < 10.66)
							{
								if(cell < 29479936.5)
								{
									if(rsrp < -92.5)
									{
										if(cqi < 13)
										{
											if(sinr < 14)
											{
												if(rsrp < -93.5)
													return 13.1687;
												else
													return 9.74184;
											}
											else
												return 15.0489;
										}
										else
											return 10.1716;
									}
									else
									{
										if(rsrq < -8.5)
										{
											if(payload < 4.5)
												return 13.3445;
											else
												return 11.2391;
										}
										else
										{
											if(cqi < 13)
												return 15.6403;
											else
												return 14.7126;
										}
									}
								}
								else
								{
									if(cqi < 10.5)
									{
										if(payload < 4.5)
											return 13.1579;
										else
											return 14.3062;
									}
									else
									{
										if(rsrq < -7.5)
											return 19.2678;
										else
											return 15.2818;
									}
								}
							}
							else
							{
								if(rsrp < -93.5)
									return 15.748;
								else
								{
									if(rsrp < -92)
										return 16.5375;
									else
										return 17.3724;
								}
							}
						}
						else
						{
							if(velocity < 7.91)
							{
								if(cqi < 13)
									return 12.1407666667;
								else
									return 8.67993;
							}
							else
								return 20.3562;
						}
					}
					else
					{
						if(sinr < 9.5)
						{
							if(payload < 5.5)
							{
								if(velocity < 33.775)
								{
									if(f < 2232.5)
									{
										if(sinr < 7.5)
										{
											if(ta < 5)
												return 3.95452;
											else
											{
												if(velocity < 13.845)
													return 5.42152;
												else
												{
													if(ta < 9.5)
														return 6.92521;
													else
													{
														if(payload < 4.5)
															return 5.46728;
														else
															return 6.69456;
													}
												}
											}
										}
										else
											return 9.20598;
									}
									else
									{
										if(velocity < 15.165)
											return 10.3093;
										else
											return 11.0619;
									}
								}
								else
									return 16.0578;
							}
							else
							{
								if(sinr < 6)
									return 16.684;
								else
									return 9.22545;
							}
						}
						else
						{
							if(cqi < 13.5)
							{
								if(cqi < 11.5)
								{
									if(payload < 4.5)
										return 14.7943;
									else
									{
										if(sinr < 13.5)
											return 11.2076;
										else
											return 10.5291;
									}
								}
								else
								{
									if(ta < 4.5)
										return 18.3824;
									else
									{
										if(velocity < 14.185)
											return 16.3132;
										else
											return 15.0265333333;
									}
								}
							}
							else
								return 10.0883;
						}
					}
				}
				else
				{
					if(cqi < 11.5)
					{
						if(sinr < 8.5)
						{
							if(rsrp < -93.5)
							{
								if(rsrq < -9.5)
									return 22.1852;
								else
								{
									if(cqi < 10.5)
									{
										if(rsrp < -98.5)
											return 20.5011;
										else
											return 7.73861;
									}
									else
									{
										if(velocity < 14.19)
										{
											if(rsrp < -97.5)
												return 18.5346;
											else
											{
												if(rsrp < -95)
													return 16.6623;
												else
													return 17.835;
											}
										}
										else
											return 14.0421;
									}
								}
							}
							else
							{
								if(sinr < 6)
									return 14.27305;
								else
									return 11.9725;
							}
						}
						else
						{
							if(velocity < 14.115)
							{
								if(rsrp < -91.5)
								{
									if(velocity < 6.665)
										return 17.0612;
									else
									{
										if(payload < 8.5)
											return 15.5604;
										else
											return 15.0943;
									}
								}
								else
								{
									if(rsrq < -6.5)
									{
										if(payload < 7.5)
											return 21.6634;
										else
											return 20.8266;
									}
									else
										return 22.291;
								}
							}
							else
							{
								if(ta < 5.5)
									return 21.4359333333;
								else
								{
									if(cell < 28071554.5)
										return 30.4826;
									else
									{
										if(rsrp < -97.5)
											return 22.5989;
										else
											return 26.2015666667;
									}
								}
							}
						}
					}
					else
					{
						if(ta < 5)
						{
							if(sinr < 9.5)
								return 10.0016;
							else
							{
								if(sinr < 11.5)
									return 12.6183;
								else
								{
									if(rsrp < -100)
										return 11.2994;
									else
										return 10.2258;
								}
							}
						}
						else
						{
							if(velocity < 8.95)
							{
								if(rsrp < -95.5)
								{
									if(cell < 28366721)
										return 10.5083;
									else
										return 11.34605;
								}
								else
								{
									if(ta < 10)
									{
										if(rsrq < -7.5)
										{
											if(ta < 8.5)
											{
												if(payload < 8.5)
													return 19.7195333333;
												else
													return 16.516;
											}
											else
												return 11.6491;
										}
										else
											return 10.0282;
									}
									else
										return 20.1068;
								}
							}
							else
							{
								if(rsrq < -7.5)
								{
									if(velocity < 12.565)
									{
										if(cqi < 13)
											return 16.7785;
										else
										{
											if(sinr < 10)
												return 19.0533;
											else
												return 20.5392;
										}
									}
									else
									{
										if(payload < 7.5)
											return 19.6147;
										else
											return 10.3997;
									}
								}
								else
								{
									if(cqi < 12.5)
										return 23.469;
									else
									{
										if(payload < 7.5)
											return 22.6354;
										else
										{
											if(cell < 28881666)
												return 21.7746;
											else
												return 20.9667333333;
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
				if(payload < 5.5)
				{
					if(rsrp < -76.5)
					{
						if(ta < 6.5)
						{
							if(rsrp < -88.5)
							{
								if(rsrq < -6.5)
									return 26.3374;
								else
									return 19.027975;
							}
							else
							{
								if(velocity < 23.7)
								{
									if(rsrq < -7.5)
									{
										if(velocity < 10.97)
										{
											if(cell < 27888257)
												return 20.9424;
											else
											{
												if(cqi < 13.5)
													return 20.6452;
												else
												{
													if(sinr < 28)
														return 18.7617;
													else
														return 17.288;
												}
											}
										}
										else
										{
											if(cqi < 13)
											{
												if(payload < 4.5)
													return 14.0351;
												else
													return 12.7755;
											}
											else
												return 18.0485;
										}
									}
									else
									{
										if(sinr < 26)
										{
											if(velocity < 14.98)
											{
												if(f < 2232.5)
												{
													if(sinr < 12)
														return 20.284;
													else
													{
														if(cqi < 11.5)
														{
															if(rsrp < -84.5)
																return 19.1388;
															else
															{
																if(rsrp < -82.5)
																	return 9.70285;
																else
																{
																	if(rsrp < -80.5)
																		return 14.4561;
																	else
																		return 13.5044;
																}
															}
														}
														else
														{
															if(velocity < 13.45)
															{
																if(rsrp < -78.5)
																{
																	if(rsrq < -4.5)
																	{
																		if(ta < 1.5)
																			return 15.8227666667;
																		else
																		{
																			if(rsrq < -5.5)
																			{
																				if(sinr < 23.5)
																				{
																					if(payload < 4.5)
																						return 17.7187;
																					else
																					{
																						if(rsrp < -84)
																							return 19.1296;
																						else
																						{
																							if(rsrp < -82)
																								return 18.5271;
																							else
																								return 18.0424;
																						}
																					}
																				}
																				else
																					return 14.3885;
																			}
																			else
																				return 20.3046;
																		}
																	}
																	else
																	{
																		if(ta < 5)
																			return 16.8865;
																		else
																			return 15.534;
																	}
																}
																else
																	return 20.9205;
															}
															else
																return 13.8985;
														}
													}
												}
												else
												{
													if(velocity < 8.25)
													{
														if(velocity < 2.565)
															return 14.2539;
														else
															return 11.9154;
													}
													else
													{
														if(sinr < 22.5)
															return 16.6061;
														else
															return 24.6723;
													}
												}
											}
											else
											{
												if(cqi < 13.5)
												{
													if(velocity < 17.4)
													{
														if(cqi < 12)
															return 11.7405;
														else
															return 12.8462;
													}
													else
													{
														if(rsrp < -83)
														{
															if(payload < 4.5)
																return 16.7189;
															else
																return 14.9645;
														}
														else
															return 19.2678;
													}
												}
												else
													return 9.79432;
											}
										}
										else
										{
											if(cell < 29391104.5)
											{
												if(rsrp < -80.5)
												{
													if(sinr < 30)
														return 7.92275;
													else
														return 10.9379;
												}
												else
													return 12.003;
											}
											else
											{
												if(cell < 29652225.5)
												{
													if(sinr < 27.5)
														return 16.3182;
													else
														return 14.7059;
												}
												else
													return 17.7187;
											}
										}
									}
								}
								else
								{
									if(cqi < 14.5)
									{
										if(velocity < 27.27)
										{
											if(payload < 4.5)
												return 19.3353;
											else
												return 22.792;
										}
										else
										{
											if(sinr < 23)
												return 19.3892;
											else
												return 12.3648;
										}
									}
									else
										return 30.3951;
								}
							}
						}
						else
						{
							if(ta < 27.5)
							{
								if(rsrp < -86.5)
								{
									if(cqi < 10.5)
									{
										if(velocity < 11.415)
											return 11.6026;
										else
										{
											if(velocity < 14.06)
											{
												if(payload < 4.5)
													return 15.6326;
												else
													return 13.9958;
											}
											else
												return 11.6068;
										}
									}
									else
									{
										if(velocity < 10.55)
										{
											if(payload < 4.5)
											{
												if(velocity < 4.535)
													return 10.5645;
												else
													return 13.3167;
											}
											else
											{
												if(cell < 29483522)
													return 18.8235;
												else
												{
													if(cqi < 13.5)
														return 12.8991;
													else
														return 15.5763;
												}
											}
										}
										else
										{
											if(sinr < 20.5)
											{
												if(rsrq < -7)
													return 23.845;
												else
												{
													if(payload < 4.5)
														return 16.8865;
													else
														return 22.1239;
												}
											}
											else
												return 13.4737;
										}
									}
								}
								else
								{
									if(rsrq < -5.5)
									{
										if(cell < 27771523.5)
										{
											if(rsrp < -84.5)
											{
												if(sinr < 16.5)
												{
													if(rsrq < -6.5)
														return 8.94604;
													else
														return 9.40291;
												}
												else
													return 11.96975;
											}
											else
											{
												if(velocity < 12.07)
													return 8.13421;
												else
												{
													if(ta < 12.5)
														return 12.5638;
													else
														return 15.95795;
												}
											}
										}
										else
										{
											if(rsrp < -83.5)
											{
												if(sinr < 11)
													return 2.72712;
												else
													return 6.19315;
											}
											else
											{
												if(velocity < 24.8)
												{
													if(payload < 4.5)
														return 10.0597;
													else
														return 9.37427;
												}
												else
													return 13.3612;
											}
										}
									}
									else
									{
										if(cell < 31548160)
										{
											if(rsrp < -83)
												return 19.1045;
											else
												return 16.8599;
										}
										else
										{
											if(rsrp < -79.5)
												return 14.2602;
											else
												return 15.3257;
										}
									}
								}
							}
							else
								return 3.7296;
						}
					}
					else
					{
						if(f < 1342.5)
						{
							if(rsrq < -7.5)
								return 13.741;
							else
								return 7.31596;
						}
						else
						{
							if(sinr < 27.5)
							{
								if(cqi < 12)
								{
									if(cqi < 10.5)
										return 13.77295;
									else
										return 15.625;
								}
								else
								{
									if(rsrp < -72.5)
									{
										if(rsrp < -73.5)
										{
											if(sinr < 25.5)
											{
												if(payload < 4.5)
													return 18.3066;
												else
													return 18.8947;
											}
											else
												return 17.1215;
										}
										else
											return 19.7531;
									}
									else
									{
										if(ta < 4.5)
											return 17.572675;
										else
											return 13.1417;
									}
								}
							}
							else
							{
								if(rsrp < -75.5)
									return 29.2398;
								else
								{
									if(ta < 1.5)
									{
										if(rsrp < -70)
										{
											if(payload < 4.5)
												return 19.536;
											else
												return 21.8103;
										}
										else
											return 22.0751;
									}
									else
									{
										if(cqi < 13.5)
										{
											if(rsrp < -74)
												return 17.4482;
											else
												return 16.7539;
										}
										else
										{
											if(sinr < 29.5)
												return 16.008;
											else
											{
												if(rsrp < -66.5)
												{
													if(cell < 30649729.5)
													{
														if(ta < 6.5)
														{
															if(ta < 4)
																return 20.7039;
															else
																return 21.3333;
														}
														else
															return 22.1607;
													}
													else
														return 18.4226;
												}
												else
													return 15.8856;
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
					if(cell < 33527556.5)
					{
						if(rsrp < -80.5)
						{
							if(cell < 29913345.5)
							{
								if(f < 1342.5)
								{
									if(sinr < 15)
										return 4.54933;
									else
										return 10.5298;
								}
								else
								{
									if(rsrq < -6.5)
									{
										if(velocity < 8.495)
										{
											if(rsrq < -9)
											{
												if(rsrq < -10.5)
												{
													if(cqi < 10.5)
														return 10.3935;
													else
														return 12.4883;
												}
												else
													return 13.91315;
											}
											else
											{
												if(cell < 29479936.5)
												{
													if(ta < 8.5)
													{
														if(payload < 8.5)
														{
															if(cell < 26382082)
															{
																if(cell < 26378754.5)
																{
																	if(payload < 6.5)
																		return 13.2159;
																	else
																	{
																		if(payload < 7.5)
																			return 16.2791;
																		else
																			return 18.6209;
																	}
																}
																else
																	return 11.8343;
															}
															else
															{
																if(cqi < 14.5)
																{
																	if(velocity < 6.455)
																	{
																		if(cqi < 11.5)
																			return 16.24886;
																		else
																		{
																			if(rsrp < -82.5)
																				return 18.5246;
																			else
																				return 17.192;
																		}
																	}
																	else
																	{
																		if(payload < 7.5)
																			return 21.18;
																		else
																			return 18.3119;
																	}
																}
																else
																	return 24.4773;
															}
														}
														else
														{
															if(sinr < 27.5)
																return 16.4534;
															else
																return 11.3457;
														}
													}
													else
														return 20.4186;
												}
												else
												{
													if(sinr < 18)
													{
														if(rsrp < -85.5)
															return 12.6763;
														else
															return 13.557;
													}
													else
														return 8.33623;
												}
											}
										}
										else
										{
											if(ta < 4.5)
											{
												if(cell < 28879105)
												{
													if(ta < 1.5)
													{
														if(payload < 7)
															return 22.9555;
														else
															return 24.3624;
													}
													else
													{
														if(sinr < 14.5)
														{
															if(rsrp < -88)
																return 16.9531;
															else
															{
																if(velocity < 12.035)
																	return 19.7287;
																else
																	return 20.60355;
															}
														}
														else
														{
															if(sinr < 21)
																return 14.2349;
															else
																return 16.028;
														}
													}
												}
												else
												{
													if(ta < 2.5)
														return 19.7287;
													else
													{
														if(velocity < 11.245)
															return 16.8599;
														else
														{
															if(cqi < 11.5)
															{
																if(payload < 7)
																	return 16.4666;
																else
																	return 15.3625;
															}
															else
																return 13.5705;
														}
													}
												}
											}
											else
											{
												if(cell < 28369793)
												{
													if(rsrq < -7.5)
													{
														if(cqi < 11.5)
														{
															if(payload < 9)
															{
																if(sinr < 10.5)
																{
																	if(cell < 28069763)
																		return 18.2503;
																	else
																		return 19.3504;
																}
																else
																	return 16.7715;
															}
															else
															{
																if(rsrp < -84.5)
																{
																	if(rsrp < -87.5)
																		return 20.2378;
																	else
																		return 19.2123;
																}
																else
																	return 25.9067;
															}
														}
														else
														{
															if(sinr < 17)
															{
																if(f < 2232.5)
																	return 23.1028;
																else
																	return 24.5587;
															}
															else
																return 25.4676;
														}
													}
													else
													{
														if(sinr < 10.5)
														{
															if(ta < 13)
															{
																if(rsrp < -89)
																	return 27.4254;
																else
																{
																	if(payload < 8.5)
																		return 24.4648;
																	else
																		return 23.1348;
																}
															}
															else
																return 20.4487;
														}
														else
															return 29.0381;
													}
												}
												else
												{
													if(rsrp < -84.5)
													{
														if(rsrp < -89.5)
															return 10.5727;
														else
														{
															if(ta < 6.5)
																return 19.9715;
															else
																return 16.6870333333;
														}
													}
													else
														return 23.541;
												}
											}
										}
									}
									else
									{
										if(cell < 26378625.5)
										{
											if(rsrp < -86.5)
												return 36.3843;
											else
												return 14.1772;
										}
										else
										{
											if(sinr < 30.5)
											{
												if(sinr < 26.5)
												{
													if(payload < 6.5)
													{
														if(rsrp < -84.5)
														{
															if(velocity < 13.315)
															{
																if(cqi < 13)
																	return 25.7511;
																else
																{
																	if(cell < 29483522)
																		return 14.8423;
																	else
																		return 15.7325;
																}
															}
															else
															{
																if(sinr < 19.5)
																{
																	if(cell < 27771524)
																		return 13.3333;
																	else
																		return 15.93574;
																}
																else
																	return 12.945;
															}
														}
														else
														{
															if(ta < 6.5)
															{
																if(rsrp < -83.5)
																{
																	if(cqi < 11)
																		return 20.592;
																	else
																		return 19.025;
																}
																else
																{
																	if(velocity < 5.69)
																		return 14.5366;
																	else
																		return 17.7245;
																}
															}
															else
															{
																if(rsrp < -81.5)
																{
																	if(cqi < 13)
																	{
																		if(rsrp < -82.5)
																			return 21.8778;
																		else
																			return 22.738;
																	}
																	else
																		return 24.1085;
																}
																else
																	return 20.3899;
															}
														}
													}
													else
													{
														if(cell < 28881153)
														{
															if(rsrq < -5.5)
															{
																if(sinr < 23.5)
																{
																	if(ta < 17)
																	{
																		if(cqi < 12.5)
																		{
																			if(sinr < 10.5)
																			{
																				if(payload < 9)
																					return 13.6519;
																				else
																					return 16.8244;
																			}
																			else
																			{
																				if(velocity < 27.21)
																				{
																					if(sinr < 14.5)
																					{
																						if(payload < 8.5)
																						{
																							if(ta < 8.5)
																							{
																								if(cqi < 10.5)
																								{
																									if(sinr < 12)
																										return 19.656;
																									else
																										return 20.6452;
																								}
																								else
																									return 22.2134;
																							}
																							else
																								return 17.4727;
																						}
																						else
																						{
																							if(velocity < 6.29)
																							{
																								if(rsrp < -88.5)
																									return 21.9445;
																								else
																									return 23.1437;
																							}
																							else
																								return 19.407;
																						}
																					}
																					else
																					{
																						if(rsrp < -89)
																							return 11.787;
																						else
																						{
																							if(velocity < 14.34)
																							{
																								if(cell < 26842371)
																								{
																									if(cell < 26385408.5)
																									{
																										if(cqi < 11.5)
																											return 19.061825;
																										else
																											return 21.0665;
																									}
																									else
																									{
																										if(ta < 4.5)
																											return 17.8914;
																										else
																											return 18.4864;
																									}
																								}
																								else
																									return 15.025;
																							}
																							else
																							{
																								if(payload < 8.5)
																									return 21.4067;
																								else
																									return 21.9118;
																							}
																						}
																					}
																				}
																				else
																					return 13.7188;
																			}
																		}
																		else
																		{
																			if(velocity < 9.415)
																			{
																				if(cqi < 14.5)
																					return 21.0526;
																				else
																					return 15.38055;
																			}
																			else
																			{
																				if(sinr < 13.5)
																				{
																					if(rsrp < -87.5)
																						return 23.5195;
																					else
																						return 25.22142;
																				}
																				else
																				{
																					if(rsrp < -87.5)
																						return 25.7787;
																					else
																					{
																						if(ta < 3)
																							return 17.5012;
																						else
																						{
																							if(rsrp < -84.5)
																							{
																								if(payload < 7.5)
																									return 21.2928;
																								else
																									return 22.3542;
																							}
																							else
																								return 25.4291;
																						}
																					}
																				}
																			}
																		}
																	}
																	else
																	{
																		if(sinr < 19.5)
																			return 29.2089;
																		else
																			return 12.5786;
																	}
																}
																else
																{
																	if(velocity < 17.425)
																		return 22.5035;
																	else
																		return 32.016;
																}
															}
															else
															{
																if(velocity < 14.25)
																{
																	if(cqi < 10.5)
																		return 24.3754;
																	else
																	{
																		if(sinr < 19.5)
																		{
																			if(velocity < 12.18)
																			{
																				if(sinr < 17.5)
																					return 21.1767666667;
																				else
																					return 20.1448;
																			}
																			else
																				return 14.2248;
																		}
																		else
																		{
																			if(payload < 8)
																			{
																				if(ta < 5.5)
																					return 21.7138;
																				else
																					return 19.774;
																			}
																			else
																				return 24.032;
																		}
																	}
																}
																else
																{
																	if(cqi < 12.5)
																		return 35.1262;
																	else
																	{
																		if(payload < 7.5)
																			return 28.6885;
																		else
																		{
																			if(rsrp < -86.5)
																				return 28.2561;
																			else
																				return 25.5898;
																		}
																	}
																}
															}
														}
														else
														{
															if(rsrp < -88.5)
															{
																if(velocity < 0.495)
																	return 27.8843;
																else
																{
																	if(sinr < 17)
																	{
																		if(velocity < 12.845)
																			return 16.2684;
																		else
																		{
																			if(payload < 7.5)
																				return 20.5882;
																			else
																				return 18.5776;
																		}
																	}
																	else
																	{
																		if(sinr < 22)
																			return 14.733;
																		else
																			return 10.6222;
																	}
																}
															}
															else
															{
																if(cell < 29479936.5)
																{
																	if(rsrp < -86.5)
																		return 24.735;
																	else
																	{
																		if(cell < 29391104.5)
																			return 31.9234;
																		else
																			return 38.1471;
																	}
																}
																else
																{
																	if(sinr < 24)
																	{
																		if(velocity < 10.965)
																		{
																			if(rsrp < -86)
																				return 14.6163;
																			else
																			{
																				if(sinr < 22)
																					return 20.2583;
																				else
																					return 18.3066;
																			}
																		}
																		else
																		{
																			if(payload < 8.5)
																				return 28.0088;
																			else
																				return 23.976;
																		}
																	}
																	else
																	{
																		if(rsrq < -5.5)
																			return 26.1818;
																		else
																			return 41.7755;
																	}
																}
															}
														}
													}
												}
												else
												{
													if(ta < 3)
													{
														if(rsrp < -85.5)
															return 11.0174;
														else
														{
															if(ta < 1.5)
																return 12.522;
															else
																return 13.8249;
														}
													}
													else
													{
														if(cqi < 13)
															return 16.7145;
														else
															return 24.7104;
													}
												}
											}
											else
											{
												if(sinr < 32)
												{
													if(rsrq < -5.5)
														return 34.379;
													else
														return 23.5789;
												}
												else
												{
													if(velocity < 10.225)
													{
														if(payload < 9)
															return 24.015;
														else
															return 19.7628;
													}
													else
													{
														if(payload < 7.5)
															return 24.0964;
														else
															return 23.39865;
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
									if(sinr < 10.5)
										return 18.6989;
									else
									{
										if(rsrq < -8.5)
											return 17.4749;
										else
											return 15.2381;
									}
								}
								else
								{
									if(velocity < 33.795)
									{
										if(ta < 14.5)
										{
											if(ta < 1.5)
											{
												if(payload < 8)
													return 24.948;
												else
													return 24.1546;
											}
											else
											{
												if(cqi < 13)
													return 23.8024;
												else
												{
													if(rsrp < -82.5)
														return 29.985;
													else
														return 29.3686;
												}
											}
										}
										else
											return 20.8388;
									}
									else
									{
										if(payload < 7.5)
											return 33.8266;
										else
										{
											if(payload < 9.5)
											{
												if(cqi < 13.5)
													return 28.2575;
												else
													return 27.5124;
											}
											else
												return 31.4961;
										}
									}
								}
							}
						}
						else
						{
							if(cell < 29913345.5)
							{
								if(f < 2232.5)
								{
									if(ta < 5.5)
									{
										if(payload < 9.5)
										{
											if(sinr < 20)
											{
												if(rsrq < -9.5)
													return 33.264;
												else
												{
													if(cqi < 11.5)
													{
														if(rsrq < -8.5)
															return 21.73765;
														else
															return 18.1064;
													}
													else
													{
														if(cell < 27771907)
														{
															if(sinr < 15.5)
																return 17.1674;
															else
															{
																if(rsrq < -7)
																	return 23.2305;
																else
																{
																	if(sinr < 18)
																		return 29.0777;
																	else
																		return 27.907;
																}
															}
														}
														else
														{
															if(sinr < 17.5)
															{
																if(rsrp < -78.5)
																	return 29.7398;
																else
																	return 23.431;
															}
															else
																return 38.3923;
														}
													}
												}
											}
											else
											{
												if(rsrq < -7.5)
													return 26.4317;
												else
												{
													if(payload < 6.5)
													{
														if(rsrp < -74)
														{
															if(rsrp < -78.5)
															{
																if(sinr < 34)
																	return 17.57812;
																else
																	return 15.8888;
															}
															else
															{
																if(cell < 27771523.5)
																{
																	if(cell < 27078273.5)
																	{
																		if(rsrp < -75.5)
																			return 20.1681;
																		else
																			return 18.2163;
																	}
																	else
																		return 20.0083;
																}
																else
																	return 18.387775;
															}
														}
														else
														{
															if(rsrp < -67)
																return 21.1175;
															else
																return 23.0548;
														}
													}
													else
													{
														if(cqi < 11.5)
														{
															if(payload < 8)
																return 19.1257;
															else
															{
																if(cell < 28581122)
																	return 32.3305;
																else
																	return 38.3387;
															}
														}
														else
														{
															if(cell < 28581507)
															{
																if(rsrp < -76)
																{
																	if(cqi < 12.5)
																	{
																		if(velocity < 14.765)
																			return 25.541;
																		else
																			return 34.2531;
																	}
																	else
																	{
																		if(cell < 27078273.5)
																			return 20.507;
																		else
																			return 26.55625;
																	}
																}
																else
																{
																	if(sinr < 29.5)
																	{
																		if(velocity < 13.325)
																		{
																			if(ta < 1.5)
																				return 20.6778;
																			else
																				return 22.1839;
																		}
																		else
																		{
																			if(sinr < 25.5)
																			{
																				if(velocity < 14.675)
																					return 20.5882;
																				else
																					return 22.9227;
																			}
																			else
																			{
																				if(payload < 8)
																					return 23.4212;
																				else
																					return 28.5375;
																			}
																		}
																	}
																	else
																	{
																		if(payload < 7.5)
																			return 27.5455;
																		else
																			return 26.4791;
																	}
																}
															}
															else
															{
																if(velocity < 9.655)
																{
																	if(rsrq < -5.5)
																	{
																		if(rsrp < -77.5)
																		{
																			if(payload < 8)
																				return 19.0541;
																			else
																			{
																				if(sinr < 27.5)
																					return 22.291;
																				else
																					return 23.2108;
																			}
																		}
																		else
																		{
																			if(rsrp < -75.5)
																				return 17.0290333333;
																			else
																				return 20.4895;
																		}
																	}
																	else
																	{
																		if(rsrp < -77.5)
																			return 20.4007;
																		else
																			return 33.1492;
																	}
																}
																else
																	return 14.8026;
															}
														}
													}
												}
											}
										}
										else
										{
											if(rsrp < -74.5)
											{
												if(cqi < 12.5)
												{
													if(cqi < 10.5)
														return 23.5919;
													else
														return 24.8834;
												}
												else
												{
													if(rsrq < -5.5)
														return 31.9107;
													else
													{
														if(cell < 28581506.5)
															return 28.5714;
														else
															return 26.8366;
													}
												}
											}
											else
											{
												if(velocity < 5.055)
													return 29.347;
												else
												{
													if(sinr < 24.5)
														return 34.7222;
													else
														return 32.4807;
												}
											}
										}
									}
									else
									{
										if(f < 1384.95)
										{
											if(ta < 7.5)
												return 11.2486;
											else
												return 8.09353;
										}
										else
										{
											if(rsrp < -78.5)
											{
												if(ta < 14.5)
												{
													if(sinr < 18)
														return 23.8521;
													else
														return 22.9144;
												}
												else
													return 26.6607666667;
											}
											else
											{
												if(rsrq < -8)
													return 15.9402;
												else
												{
													if(rsrp < -75.5)
														return 27.2201;
													else
													{
														if(rsrq < -6.5)
															return 24.4182;
														else
														{
															if(ta < 7.5)
															{
																if(velocity < 12.135)
																{
																	if(cqi < 10.5)
																		return 16.0137;
																	else
																	{
																		if(sinr < 22)
																			return 25.1572;
																		else
																		{
																			if(payload < 9.5)
																			{
																				if(sinr < 39)
																					return 18.8092333333;
																				else
																					return 20.2532;
																			}
																			else
																				return 21.9058;
																		}
																	}
																}
																else
																{
																	if(sinr < 29.5)
																		return 24.8963;
																	else
																		return 22.1416;
																}
															}
															else
															{
																if(cqi < 14.5)
																	return 18.4704;
																else
																	return 17.9038;
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
									if(ta < 3.5)
									{
										if(cqi < 13.5)
										{
											if(payload < 9)
												return 15.95862;
											else
												return 14.4014;
										}
										else
											return 11.3933;
									}
									else
										return 19.3283;
								}
							}
							else
							{
								if(velocity < 35.055)
								{
									if(ta < 17)
									{
										if(ta < 1.5)
											return 23.1288;
										else
										{
											if(sinr < 26)
											{
												if(velocity < 3.635)
													return 24.369;
												else
												{
													if(rsrq < -5.5)
														return 28.8158;
													else
														return 31.1457;
												}
											}
											else
											{
												if(payload < 9.5)
													return 29.1262;
												else
													return 32.9218;
											}
										}
									}
									else
										return 43.0108;
								}
								else
								{
									if(ta < 8.5)
										return 19.4253;
									else
									{
										if(rsrp < -76)
											return 26.2726;
										else
										{
											if(payload < 8)
												return 23.976;
											else
												return 24.4424;
										}
									}
								}
							}
						}
					}
					else
					{
						if(rsrp < -67)
						{
							if(rsrp < -78)
								return 15.2252;
							else
							{
								if(ta < 14.5)
									return 4.46304;
								else
									return 8.24742;
							}
						}
						else
							return 21.555;
					}
				}
			}
		}
	}
}

float tmobile_dl_tree_2(float payload, float rsrp, float rsrq, float sinr, float cqi, float ta, float velocity, float cell, float f)
{
	if(rsrp < -91.5)
	{
		if(payload < 3.5)
		{
			if(rsrp < -99.5)
			{
				if(cell < 28367745)
				{
					if(sinr < 5)
					{
						if(sinr < -2.5)
						{
							if(velocity < 12.84)
							{
								if(rsrp < -106.5)
									return 4.05885;
								else
									return 2.86739;
							}
							else
							{
								if(ta < 9.5)
								{
									if(ta < 7.5)
									{
										if(rsrp < -107)
											return 8.00801;
										else
											return 8.94855;
									}
									else
										return 11.5942;
								}
								else
								{
									if(cell < 27075203.5)
										return 4.82218;
									else
										return 6.62069;
								}
							}
						}
						else
						{
							if(cqi < 4.5)
							{
								if(velocity < 14.92)
									return 3.98605;
								else
									return 10.984;
							}
							else
							{
								if(sinr < 3.5)
								{
									if(velocity < 8.13)
										return 3.3863933333;
									else
									{
										if(sinr < -1)
											return 6.31247;
										else
										{
											if(sinr < 1)
											{
												if(payload < 0.55)
													return 1.74673;
												else
													return 5.09554;
											}
											else
											{
												if(payload < 0.75)
													return 4.453195;
												else
												{
													if(cqi < 5.5)
														return 4.52659;
													else
														return 5.2055775;
												}
											}
										}
									}
								}
								else
								{
									if(payload < 0.75)
										return 3.82409;
									else
									{
										if(cqi < 5.5)
											return 2.61267;
										else
											return 1.31105;
									}
								}
							}
						}
					}
					else
					{
						if(cqi < 8)
						{
							if(sinr < 8.5)
							{
								if(ta < 4.5)
									return 12.6917;
								else
									return 11.7474;
							}
							else
							{
								if(rsrq < -7)
								{
									if(velocity < 19.16)
									{
										if(ta < 8)
											return 7.45573;
										else
											return 8.3682;
									}
									else
										return 6.01506;
								}
								else
									return 4.17537;
							}
						}
						else
						{
							if(rsrp < -105)
								return 9.55224;
							else
							{
								if(payload < 1.5)
								{
									if(cell < 28068482.5)
										return 2.7416;
									else
									{
										if(sinr < 10)
										{
											if(cqi < 10)
												return 4.25534;
											else
												return 3.66974;
										}
										else
											return 7.72201;
									}
								}
								else
									return 6.91742;
							}
						}
					}
				}
				else
				{
					if(payload < 2.5)
					{
						if(rsrp < -103.5)
						{
							if(payload < 0.75)
							{
								if(payload < 0.3)
									return 2.3758333333;
								else
								{
									if(sinr < -2)
										return 2.96296;
									else
										return 1.050776;
								}
							}
							else
							{
								if(rsrq < -12.5)
									return 1.43062;
								else
								{
									if(velocity < 23.13)
									{
										if(rsrp < -109)
											return 6.22084;
										else
											return 5.38721;
									}
									else
										return 3.72439;
								}
							}
						}
						else
						{
							if(cell < 31272320.5)
							{
								if(cqi < 6.5)
								{
									if(velocity < 16.78)
									{
										if(sinr < 2)
										{
											if(sinr < 0.5)
											{
												if(cell < 29741056.5)
												{
													if(sinr < -3.5)
														return 4.604195;
													else
													{
														if(sinr < -0.5)
														{
															if(payload < 0.3)
																return 6.77969;
															else
																return 5.997;
														}
														else
															return 4.71698;
													}
												}
												else
													return 3.56983;
											}
											else
												return 7.12378;
										}
										else
										{
											if(payload < 1.5)
											{
												if(rsrp < -100.5)
													return 3.2;
												else
													return 4.1885;
											}
											else
											{
												if(velocity < 8.375)
												{
													if(ta < 6.5)
														return 6.78829;
													else
														return 4.56361;
												}
												else
													return 4.43582;
											}
										}
									}
									else
										return 1.98118;
								}
								else
								{
									if(velocity < 16.25)
									{
										if(sinr < 15)
										{
											if(payload < 1.5)
											{
												if(velocity < 13.8)
												{
													if(rsrp < -101.5)
														return 2.58421;
													else
													{
														if(ta < 4.5)
															return 5.35117;
														else
														{
															if(rsrq < -7.5)
															{
																if(rsrp < -100.5)
																	return 4.10258;
																else
																	return 2.99364;
															}
															else
																return 2.59741;
														}
													}
												}
												else
												{
													if(cqi < 9)
														return 1.71013;
													else
														return 2.43754;
												}
											}
											else
												return 4.41136;
										}
										else
										{
											if(sinr < 20.5)
												return 5.5325;
											else
												return 6.13027;
										}
									}
									else
									{
										if(rsrq < -11.5)
											return 4.59772;
										else
											return 6.87876;
									}
								}
							}
							else
							{
								if(cqi < 8)
								{
									if(velocity < 32.05)
										return 6.72269;
									else
										return 7.56144;
								}
								else
								{
									if(velocity < 35.495)
									{
										if(payload < 1.25)
											return 4.49944;
										else
											return 4.0347133333;
									}
									else
										return 2.85714;
								}
							}
						}
					}
					else
					{
						if(rsrq < -6.5)
						{
							if(rsrq < -8)
							{
								if(rsrp < -103)
									return 11.2835;
								else
									return 9.85222;
							}
							else
								return 5.35954;
						}
						else
							return 13.5823;
					}
				}
			}
			else
			{
				if(velocity < 33.475)
				{
					if(cell < 29741056.5)
					{
						if(payload < 1.5)
						{
							if(f < 2232.5)
							{
								if(velocity < 9.625)
								{
									if(sinr < -1)
										return 38.0954;
									else
									{
										if(ta < 5.5)
										{
											if(velocity < 8.16)
											{
												if(rsrq < -9.5)
													return 4.30109;
												else
													return 5.004905;
											}
											else
												return 3.15956;
										}
										else
										{
											if(sinr < 11.5)
											{
												if(rsrq < -7.5)
												{
													if(cell < 28367745)
													{
														if(rsrp < -92.5)
														{
															if(cqi < 7.5)
																return 6.72269;
															else
															{
																if(rsrp < -93.5)
																	return 4.75624;
																else
																	return 3.55556;
															}
														}
														else
															return 7.88955;
													}
													else
													{
														if(cqi < 6.5)
															return 6.20967;
														else
														{
															if(velocity < 7.09)
															{
																if(rsrp < -94)
																{
																	if(sinr < 0.5)
																		return 7.09849;
																	else
																		return 7.740835;
																}
																else
																	return 6.99301;
															}
															else
																return 8.11359;
														}
													}
												}
												else
												{
													if(payload < 0.75)
														return 9.63855;
													else
														return 12.0846;
												}
											}
											else
											{
												if(velocity < 9.03)
												{
													if(payload < 0.75)
													{
														if(velocity < 2.625)
														{
															if(cell < 28967937)
															{
																if(payload < 0.3)
																{
																	if(sinr < 13.5)
																		return 5.4422;
																	else
																		return 6.66669;
																}
																else
																	return 6.93241;
															}
															else
																return 4.8193;
														}
														else
														{
															if(velocity < 8.02)
																return 3.871475;
															else
																return 4.4944;
														}
													}
													else
														return 6.19195;
												}
												else
													return 7.13012;
											}
										}
									}
								}
								else
								{
									if(rsrp < -92.5)
									{
										if(cell < 28881152.5)
										{
											if(cell < 28369793)
											{
												if(ta < 7)
													return 5.80131;
												else
												{
													if(rsrp < -98.5)
														return 6.25978;
													else
													{
														if(cell < 28365057.5)
														{
															if(payload < 0.3)
																return 4.27809;
															else
															{
																if(cell < 27371777)
																{
																	if(rsrp < -96)
																		return 3.52578;
																	else
																		return 4.5403;
																}
																else
																{
																	if(rsrq < -9.5)
																		return 3.14837;
																	else
																		return 2.65076;
																}
															}
														}
														else
														{
															if(sinr < 12)
															{
																if(sinr < 7.5)
																{
																	if(rsrp < -97.5)
																		return 2.99177;
																	else
																	{
																		if(rsrp < -96.5)
																			return 4.45434;
																		else
																			return 3.7546366667;
																	}
																}
																else
																	return 3.3273325;
															}
															else
																return 5.81395;
														}
													}
												}
											}
											else
											{
												if(sinr < 11.5)
												{
													if(rsrq < -9.5)
														return 3.13727;
													else
													{
														if(rsrp < -96.5)
															return 5.22878;
														else
															return 4.67838;
													}
												}
												else
													return 8.65801;
											}
										}
										else
										{
											if(rsrq < -7.5)
											{
												if(ta < 11)
													return 3.0910430769;
												else
													return 2.01816;
											}
											else
												return 4.11422;
										}
									}
									else
									{
										if(payload < 0.3)
											return 4.4072066667;
										else
										{
											if(velocity < 16.7)
											{
												if(ta < 2)
													return 10.3896;
												else
												{
													if(cqi < 9.5)
														return 6.295665;
													else
													{
														if(sinr < 10.5)
															return 8.63931;
														else
															return 7.01139;
													}
												}
											}
											else
												return 3.92542;
										}
									}
								}
							}
							else
							{
								if(rsrp < -93.5)
								{
									if(rsrp < -94.5)
									{
										if(velocity < 7.515)
											return 2.93041;
										else
										{
											if(cqi < 10.5)
											{
												if(sinr < 2)
													return 8.95857;
												else
												{
													if(rsrq < -10)
														return 5.66572;
													else
														return 3.41006;
												}
											}
											else
											{
												if(rsrq < -6.5)
													return 11.5942;
												else
													return 9.66184;
											}
										}
									}
									else
									{
										if(rsrq < -8)
											return 20.7254;
										else
											return 7.87402;
									}
								}
								else
								{
									if(rsrp < -92.5)
									{
										if(rsrq < -8.5)
											return 3.9409;
										else
										{
											if(ta < 9.5)
											{
												if(payload < 0.3)
													return 5.12822;
												else
													return 5.77201;
											}
											else
												return 6.57354;
										}
									}
									else
									{
										if(cqi < 8)
											return 8.26446;
										else
										{
											if(cqi < 10.5)
												return 4.32432;
											else
												return 5.236045;
										}
									}
								}
							}
						}
						else
						{
							if(ta < 15)
							{
								if(ta < 11.5)
								{
									if(rsrp < -92.5)
									{
										if(ta < 4.5)
										{
											if(rsrp < -96)
											{
												if(f < 2232.5)
													return 8.24317;
												else
													return 6.47249;
											}
											else
											{
												if(sinr < 3.5)
													return 6.824;
												else
												{
													if(rsrq < -10.5)
														return 6.19515;
													else
													{
														if(sinr < 6.5)
															return 4.88599;
														else
														{
															if(cqi < 11)
																return 3.94997;
															else
																return 4.66382;
														}
													}
												}
											}
										}
										else
										{
											if(ta < 7.5)
											{
												if(velocity < 14.66)
												{
													if(rsrq < -7.5)
													{
														if(sinr < 18.5)
														{
															if(cqi < 9.5)
															{
																if(velocity < 6.99)
																	return 9.9238375;
																else
																	return 10.8794;
															}
															else
																return 7.42804;
														}
														else
															return 11.6279;
													}
													else
													{
														if(rsrq < -6.5)
															return 11.7417;
														else
															return 11.0041;
													}
												}
												else
												{
													if(velocity < 15.85)
														return 8.50159;
													else
													{
														if(payload < 2.5)
															return 4.5819;
														else
															return 7.6045833333;
													}
												}
											}
											else
											{
												if(f < 2232.5)
												{
													if(rsrq < -9.5)
													{
														if(cell < 28366721)
															return 6.23701;
														else
														{
															if(rsrp < -97)
																return 13.4831;
															else
																return 10.5125;
														}
													}
													else
													{
														if(rsrq < -6.5)
														{
															if(cqi < 12.5)
															{
																if(cell < 28366721)
																{
																	if(payload < 2.5)
																	{
																		if(cqi < 8.5)
																			return 4.06194;
																		else
																			return 6.02183;
																	}
																	else
																	{
																		if(sinr < 3.5)
																			return 7.20288;
																		else
																			return 9.897365;
																	}
																}
																else
																{
																	if(payload < 2.5)
																	{
																		if(sinr < 9)
																			return 3.20906;
																		else
																			return 4.78899;
																	}
																	else
																	{
																		if(ta < 8.5)
																		{
																			if(rsrp < -98.5)
																				return 5.75678;
																			else
																				return 6.22568;
																		}
																		else
																			return 5.09446;
																	}
																}
															}
															else
																return 10.3829;
														}
														else
															return 4.04381;
													}
												}
												else
												{
													if(velocity < 11.635)
													{
														if(velocity < 10.175)
														{
															if(payload < 2.5)
																return 8.6627;
															else
																return 9.47867;
														}
														else
															return 8.36237;
													}
													else
													{
														if(rsrq < -6.5)
														{
															if(sinr < 8.5)
																return 11.0497;
															else
																return 7.46269;
														}
														else
														{
															if(cqi < 14.5)
																return 11.6732;
															else
																return 10.5448;
														}
													}
												}
											}
										}
									}
									else
									{
										if(sinr < 14)
										{
											if(rsrq < -8.5)
												return 15;
											else
											{
												if(cell < 28884739)
												{
													if(sinr < 8.5)
														return 12.945;
													else
														return 11.1266;
												}
												else
												{
													if(sinr < 4)
														return 10.1074;
													else
														return 10.9141;
												}
											}
										}
										else
											return 6.465175;
									}
								}
								else
								{
									if(cell < 28884993.5)
										return 15.4143;
									else
										return 14.742;
								}
							}
							else
							{
								if(payload < 2.5)
								{
									if(sinr < 3.5)
										return 13.104;
									else
									{
										if(rsrq < -7.5)
											return 2.55714;
										else
											return 5.24246;
									}
								}
								else
								{
									if(cell < 28368514)
									{
										if(rsrq < -10.5)
											return 2.95676;
										else
										{
											if(ta < 31.5)
												return 4.39802;
											else
												return 4.97616;
										}
									}
									else
										return 0.33306;
								}
							}
						}
					}
					else
					{
						if(velocity < 17.33)
						{
							if(cqi < 9.5)
							{
								if(payload < 1.5)
								{
									if(ta < 7.5)
										return 3.43349;
									else
									{
										if(rsrq < -11.5)
											return 7.28597;
										else
										{
											if(cell < 32391168)
												return 9.544005;
											else
												return 8.47458;
										}
									}
								}
								else
								{
									if(rsrq < -10)
									{
										if(rsrp < -93.5)
										{
											if(cqi < 5.5)
												return 11.5774;
											else
												return 7.8457;
										}
										else
											return 12.4417;
									}
									else
										return 17.316;
								}
							}
							else
							{
								if(rsrp < -92.5)
									return 15.3649;
								else
								{
									if(cqi < 12)
										return 13.5939;
									else
										return 12.2982;
								}
							}
						}
						else
						{
							if(cqi < 7)
							{
								if(ta < 19.5)
									return 7.07339;
								else
									return 7.56144;
							}
							else
							{
								if(sinr < 5)
								{
									if(rsrp < -95.5)
										return 5.38358;
									else
										return 2.11752;
								}
								else
									return 5.64175;
							}
						}
					}
				}
				else
				{
					if(ta < 26)
						return 16.9133;
					else
					{
						if(rsrp < -96.5)
							return 9.2539;
						else
							return 10.3761;
					}
				}
			}
		}
		else
		{
			if(rsrp < -98.5)
			{
				if(cqi < 2.5)
					return 30.3951;
				else
				{
					if(payload < 6.5)
					{
						if(cqi < 10.5)
						{
							if(ta < 27.5)
							{
								if(velocity < 13.35)
								{
									if(sinr < 8.5)
									{
										if(rsrq < -10.5)
										{
											if(sinr < -0.5)
											{
												if(cqi < 6.5)
												{
													if(velocity < 8.08)
													{
														if(ta < 12.5)
															return 8.80896;
														else
															return 9.3222;
													}
													else
													{
														if(rsrq < -12)
															return 3.53982;
														else
														{
															if(payload < 5.5)
																return 5.78285;
															else
																return 6.53862;
														}
													}
												}
												else
													return 3.62784;
											}
											else
											{
												if(rsrq < -11.5)
													return 15.7869;
												else
													return 9.2256375;
											}
										}
										else
										{
											if(cqi < 6.5)
											{
												if(rsrp < -100.5)
												{
													if(velocity < 9.3)
													{
														if(sinr < -1.5)
															return 4.65008;
														else
														{
															if(rsrp < -103)
																return 2.798645;
															else
																return 2.22454;
														}
													}
													else
														return 4.79832;
												}
												else
													return 7.26502;
											}
											else
											{
												if(payload < 4.5)
												{
													if(rsrp < -104)
														return 8.76472;
													else
													{
														if(velocity < 12.515)
															return 2.9848;
														else
															return 4.31965;
													}
												}
												else
												{
													if(cqi < 9)
													{
														if(sinr < 6)
														{
															if(rsrq < -9.5)
															{
																if(velocity < 9.19)
																	return 10.5518;
																else
																	return 9.19012;
															}
															else
															{
																if(cqi < 7.5)
																	return 12.7714;
																else
																	return 14.218;
															}
														}
														else
															return 8.73045;
													}
													else
														return 7.28332;
												}
											}
										}
									}
									else
									{
										if(sinr < 11.5)
										{
											if(rsrp < -102)
												return 14.9198;
											else
												return 12.551;
										}
										else
											return 7.72574;
									}
								}
								else
								{
									if(rsrp < -101.5)
									{
										if(cell < 29657473)
										{
											if(rsrp < -107.5)
												return 13.7127;
											else
											{
												if(cell < 28068482.5)
												{
													if(rsrp < -106)
														return 7.87789;
													else
														return 6.7293;
												}
												else
												{
													if(payload < 5)
														return 8.97112;
													else
													{
														if(cqi < 7.5)
															return 9.78394;
														else
															return 10.6833;
													}
												}
											}
										}
										else
										{
											if(rsrp < -105.5)
											{
												if(cqi < 9.5)
													return 5.96036;
												else
													return 5.46728;
											}
											else
											{
												if(rsrp < -104)
												{
													if(ta < 14.5)
														return 10.2204;
													else
														return 9.07647;
												}
												else
													return 6.01165;
											}
										}
									}
									else
									{
										if(velocity < 13.85)
										{
											if(rsrp < -100)
												return 18.3276;
											else
												return 14.7943;
										}
										else
										{
											if(ta < 7.5)
											{
												if(rsrp < -100.5)
													return 5.39229;
												else
													return 8.86601;
											}
											else
											{
												if(rsrp < -99.5)
												{
													if(rsrp < -100.5)
														return 10.6054;
													else
														return 8.4063;
												}
												else
												{
													if(cqi < 9.5)
													{
														if(cqi < 6)
															return 12.5707;
														else
														{
															if(sinr < 4.5)
																return 16.5289;
															else
																return 15.3374;
														}
													}
													else
														return 10.1394;
												}
											}
										}
									}
								}
							}
							else
								return 2.6936;
						}
						else
						{
							if(velocity < 31.72)
							{
								if(velocity < 4.86)
									return 12.1243;
								else
								{
									if(cqi < 13)
										return 14.82692;
									else
										return 19.3392;
								}
							}
							else
								return 9.215715;
						}
					}
					else
					{
						if(cqi < 6.5)
						{
							if(sinr < 7.5)
							{
								if(ta < 4)
								{
									if(ta < 1.5)
										return 19.025;
									else
									{
										if(rsrq < -11)
											return 13.8169;
										else
											return 12.2431;
									}
								}
								else
								{
									if(rsrp < -106.5)
									{
										if(cell < 28071554)
										{
											if(sinr < -0.5)
												return 9.4585;
											else
											{
												if(sinr < 3)
													return 5.74163;
												else
													return 6.238025;
											}
										}
										else
										{
											if(rsrq < -8.5)
												return 10.5232;
											else
												return 8.82029;
										}
									}
									else
									{
										if(payload < 7.5)
										{
											if(cell < 30878081)
											{
												if(cell < 27371777)
													return 13.4389;
												else
												{
													if(velocity < 5.535)
														return 10.2302;
													else
													{
														if(velocity < 14.07)
														{
															if(cqi < 5.5)
																return 8.851095;
															else
																return 9.62034;
														}
														else
															return 7.61905;
													}
												}
											}
											else
												return 5.58102;
										}
										else
										{
											if(rsrp < -105.5)
												return 18.1324;
											else
											{
												if(ta < 20)
												{
													if(ta < 8.5)
													{
														if(ta < 7.5)
														{
															if(sinr < 4.5)
															{
																if(cell < 28367744.5)
																	return 11.9092;
																else
																	return 11.0497;
															}
															else
																return 10.6171;
														}
														else
															return 8.74211;
													}
													else
													{
														if(payload < 8.5)
															return 23.0548;
														else
														{
															if(velocity < 10.37)
															{
																if(sinr < -2.5)
																	return 14.6333;
																else
																	return 9.105855;
															}
															else
															{
																if(rsrp < -102)
																{
																	if(payload < 9.5)
																		return 11.7917;
																	else
																		return 13.5044;
																}
																else
																	return 15.5854;
															}
														}
													}
												}
												else
												{
													if(rsrq < -12.5)
														return 10.8401;
													else
													{
														if(rsrq < -9.5)
															return 5.08008;
														else
															return 10.9111;
													}
												}
											}
										}
									}
								}
							}
							else
							{
								if(velocity < 9.02)
									return 20.6034;
								else
								{
									if(rsrp < -100.5)
										return 13.3779;
									else
										return 5.35885;
								}
							}
						}
						else
						{
							if(cqi < 8.5)
							{
								if(velocity < 10.14)
								{
									if(cqi < 7.5)
									{
										if(sinr < 6)
											return 9.47306;
										else
											return 22.5273;
									}
									else
									{
										if(sinr < 6)
										{
											if(cell < 28070145.5)
												return 26.3852;
											else
												return 22.2134;
										}
										else
										{
											if(rsrp < -102.5)
												return 16.6286;
											else
												return 17.4021;
										}
									}
								}
								else
								{
									if(velocity < 11.11)
										return 8.562978;
									else
									{
										if(sinr < 1.5)
										{
											if(ta < 11)
											{
												if(rsrp < -102)
													return 10.3778;
												else
													return 6.93016;
											}
											else
												return 14.38405;
										}
										else
										{
											if(rsrq < -11)
												return 19.656;
											else
											{
												if(cell < 28886401)
												{
													if(payload < 9.5)
													{
														if(velocity < 14.79)
															return 21.2515;
														else
														{
															if(ta < 11)
																return 14.55965;
															else
																return 16.5555;
														}
													}
													else
													{
														if(rsrq < -9)
															return 9.12513;
														else
															return 13.7292;
													}
												}
												else
													return 21.8043;
											}
										}
									}
								}
							}
							else
							{
								if(ta < 8.5)
								{
									if(ta < 7.5)
									{
										if(payload < 9.5)
										{
											if(cqi < 11)
											{
												if(rsrq < -8.5)
													return 20.5011;
												else
												{
													if(rsrp < -100.5)
														return 11.0497;
													else
													{
														if(sinr < 11)
															return 16.5631;
														else
															return 13.9697;
													}
												}
											}
											else
											{
												if(velocity < 14.235)
												{
													if(payload < 8.5)
														return 11.2595;
													else
														return 10.2258;
												}
												else
													return 12.6183;
											}
										}
										else
											return 8.14747;
									}
									else
									{
										if(rsrq < -9.5)
											return 11.5274;
										else
											return 4.54361;
									}
								}
								else
								{
									if(rsrp < -100)
									{
										if(velocity < 12.6)
											return 22.606;
										else
										{
											if(rsrp < -101.5)
											{
												if(sinr < 11.5)
													return 8.44996;
												else
													return 10.7643;
											}
											else
												return 14.7874;
										}
									}
									else
									{
										if(sinr < 7)
											return 14.0421;
										else
										{
											if(payload < 7.5)
												return 22.6354;
											else
												return 23.2474;
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
					if(payload < 6.5)
					{
						if(velocity < 24.745)
						{
							if(cqi < 11.5)
							{
								if(ta < 13.5)
								{
									if(rsrq < -10.5)
									{
										if(cell < 28369153)
										{
											if(payload < 5.5)
											{
												if(payload < 4.5)
													return 11.9626;
												else
													return 9.90099;
											}
											else
												return 15.38215;
										}
										else
										{
											if(ta < 10.5)
											{
												if(rsrp < -93.5)
												{
													if(rsrp < -95.5)
														return 11.5141;
													else
														return 12.3419;
												}
												else
												{
													if(cqi < 7.5)
														return 10.4735;
													else
														return 8.87082;
												}
											}
											else
												return 6.14361;
										}
									}
									else
									{
										if(ta < 2.5)
										{
											if(rsrp < -95.5)
												return 12.5274;
											else
												return 22.1361;
										}
										else
										{
											if(cqi < 10.5)
											{
												if(ta < 9.5)
												{
													if(rsrp < -92.5)
													{
														if(sinr < 2.5)
														{
															if(ta < 5.5)
																return 10.2324;
															else
															{
																if(f < 2232.5)
																{
																	if(payload < 4.5)
																		return 14.2096;
																	else
																		return 16.0009;
																}
																else
																	return 11.3026;
															}
														}
														else
														{
															if(velocity < 8.665)
															{
																if(cqi < 8.5)
																{
																	if(rsrq < -9.5)
																		return 18.3276;
																	else
																		return 20.0669;
																}
																else
																{
																	if(rsrp < -93.5)
																	{
																		if(sinr < 16)
																			return 14.3062;
																		else
																			return 13.1579;
																	}
																	else
																		return 16.219;
																}
															}
															else
															{
																if(cell < 28881152)
																{
																	if(sinr < 4.5)
																		return 15.6709;
																	else
																	{
																		if(sinr < 9.5)
																			return 11.9544333333;
																		else
																			return 12.7226;
																	}
																}
																else
																{
																	if(ta < 6)
																	{
																		if(cell < 29391104.5)
																			return 15.4381;
																		else
																		{
																			if(rsrp < -95.5)
																				return 14.9087;
																			else
																				return 14.0647;
																		}
																	}
																	else
																		return 14.1907;
																}
															}
														}
													}
													else
													{
														if(cell < 29391104.5)
															return 13.1363;
														else
														{
															if(velocity < 4.85)
																return 11.2391;
															else
																return 10.1507333333;
														}
													}
												}
												else
												{
													if(f < 2232.5)
													{
														if(velocity < 11.985)
														{
															if(rsrp < -94)
																return 16.1616;
															else
																return 15.5794;
														}
														else
															return 17.0648;
													}
													else
														return 22.0629;
												}
											}
											else
												return 9.74184;
										}
									}
								}
								else
								{
									if(sinr < 0.5)
										return 5.75126;
									else
									{
										if(payload < 4.5)
											return 5.77201;
										else
										{
											if(rsrq < -8.5)
											{
												if(sinr < 4.5)
													return 8.80572;
												else
													return 9.96471;
											}
											else
												return 12.7796;
										}
									}
								}
							}
							else
							{
								if(rsrp < -93.5)
								{
									if(payload < 4.5)
									{
										if(sinr < 22.5)
											return 14.1468;
										else
											return 15.748;
									}
									else
										return 5.42152;
								}
								else
								{
									if(payload < 4.5)
									{
										if(rsrq < -10.5)
											return 1.43132;
										else
											return 6.30045;
									}
									else
									{
										if(cqi < 13.5)
											return 10.5657;
										else
											return 7.68197;
									}
								}
							}
						}
						else
						{
							if(rsrp < -95.5)
							{
								if(rsrq < -10.5)
									return 15.4989;
								else
									return 16.7926;
							}
							else
								return 20.0401;
						}
					}
					else
					{
						if(ta < 1.5)
						{
							if(cell < 30649729.5)
								return 2.67264;
							else
								return 7.3791;
						}
						else
						{
							if(cell < 27074690.5)
							{
								if(sinr < 3)
								{
									if(rsrq < -11.5)
										return 9.87306;
									else
										return 12.23555;
								}
								else
									return 14.8787142857;
							}
							else
							{
								if(sinr < 5.5)
								{
									if(velocity < 1.045)
									{
										if(rsrp < -95)
										{
											if(rsrp < -97)
												return 19.7897;
											else
												return 20.2817;
										}
										else
										{
											if(rsrp < -93.5)
											{
												if(cqi < 7.5)
													return 16.8579;
												else
												{
													if(sinr < 3.5)
														return 13.2548;
													else
														return 14.3982;
												}
											}
											else
											{
												if(rsrp < -92.5)
													return 15.6671;
												else
													return 17.208;
											}
										}
									}
									else
									{
										if(cell < 28068098)
											return 10.5332;
										else
										{
											if(ta < 2.5)
											{
												if(rsrq < -10)
													return 14.6329;
												else
													return 24.5291;
											}
											else
											{
												if(ta < 12.5)
												{
													if(ta < 7.5)
													{
														if(cell < 29479937)
														{
															if(rsrq < -10.5)
																return 12.4902;
															else
															{
																if(sinr < 4.5)
																{
																	if(rsrq < -9.5)
																		return 17.9143;
																	else
																		return 15.5009;
																}
																else
																	return 13.3907;
															}
														}
														else
														{
															if(cqi < 8.5)
															{
																if(rsrq < -9)
																	return 8.45666;
																else
																	return 9.73744;
															}
															else
																return 10.3627;
														}
													}
													else
													{
														if(payload < 7.5)
														{
															if(rsrp < -93)
																return 16.3839;
															else
																return 18.0006;
														}
														else
														{
															if(velocity < 14.32)
															{
																if(cqi < 7)
																{
																	if(sinr < -1.5)
																		return 10.6048;
																	else
																	{
																		if(cqi < 5.5)
																			return 11.8694;
																		else
																			return 13.2286;
																	}
																}
																else
																{
																	if(rsrp < -95)
																		return 12.7206;
																	else
																		return 14.716;
																}
															}
															else
															{
																if(rsrq < -12)
																	return 13.5593;
																else
																	return 16.2053;
															}
														}
													}
												}
												else
												{
													if(rsrp < -96.5)
													{
														if(ta < 15)
														{
															if(cqi < 6.5)
															{
																if(cell < 29482752.5)
																	return 10.3981;
																else
																	return 16.2602;
															}
															else
															{
																if(rsrq < -10)
																	return 17.5362;
																else
																	return 19.3564;
															}
														}
														else
														{
															if(rsrp < -97.5)
																return 11.2407;
															else
																return 9.358436;
														}
													}
													else
													{
														if(rsrq < -10.5)
															return 22.2017;
														else
														{
															if(cqi < 5.5)
																return 14.2096;
															else
																return 20.6569;
														}
													}
												}
											}
										}
									}
								}
								else
								{
									if(sinr < 14.5)
									{
										if(cell < 28369794)
										{
											if(ta < 14)
											{
												if(rsrp < -96)
													return 21.156;
												else
												{
													if(ta < 6)
														return 13.0263;
													else
														return 16.8793857143;
												}
											}
											else
												return 10.8027;
										}
										else
										{
											if(cell < 29741056)
											{
												if(cqi < 11.5)
												{
													if(rsrp < -96.5)
														return 23.4398;
													else
														return 22.45112;
												}
												else
													return 19.6147;
											}
											else
												return 17.45365;
										}
									}
									else
									{
										if(cell < 29479936.5)
										{
											if(payload < 8)
												return 13.6685;
											else
												return 12.2511;
										}
										else
											return 19.6802;
									}
								}
							}
						}
					}
				}
				else
				{
					if(velocity < 16.765)
					{
						if(sinr < 23.5)
						{
							if(cell < 29483522)
							{
								if(rsrq < -5.5)
								{
									if(ta < 6.5)
									{
										if(velocity < 10.775)
										{
											if(rsrp < -93.5)
												return 16.6419;
											else
											{
												if(payload < 7.5)
													return 10.7623;
												else
													return 10.0587;
											}
										}
										else
										{
											if(cqi < 11.5)
											{
												if(payload < 8.5)
												{
													if(velocity < 12.44)
														return 21.7391;
													else
													{
														if(cqi < 8.5)
															return 17.6535;
														else
														{
															if(payload < 7)
																return 16.4215;
															else
																return 15.5604;
														}
													}
												}
												else
												{
													if(sinr < 10)
														return 26.2037;
													else
													{
														if(rsrp < -95)
														{
															if(rsrp < -96.5)
																return 19.5551;
															else
																return 18.0099;
														}
														else
															return 21.4669;
													}
												}
											}
											else
											{
												if(rsrp < -93)
													return 23.6949;
												else
													return 25.0653;
											}
										}
									}
									else
									{
										if(velocity < 9.05)
										{
											if(payload < 8.5)
											{
												if(rsrp < -94)
													return 16.6623;
												else
													return 13.5916;
											}
											else
											{
												if(rsrp < -97.5)
													return 14.0543;
												else
												{
													if(rsrp < -95.5)
														return 10.5083;
													else
														return 11.7188;
												}
											}
										}
										else
										{
											if(payload < 4.5)
												return 10.0883;
											else
											{
												if(velocity < 12.015)
												{
													if(cell < 28367744.5)
														return 15.9218;
													else
													{
														if(rsrq < -6.5)
														{
															if(cqi < 8)
																return 23.4212;
															else
																return 21.4957;
														}
														else
															return 17.8746333333;
													}
												}
												else
												{
													if(cell < 28366722)
													{
														if(payload < 7.5)
															return 12.48025;
														else
														{
															if(payload < 9)
																return 8.1064;
															else
																return 9.62811;
														}
													}
													else
													{
														if(sinr < 11)
														{
															if(rsrp < -92.5)
																return 21.751;
															else
															{
																if(payload < 6.5)
																	return 18.8828;
																else
																	return 18.082;
															}
														}
														else
														{
															if(rsrp < -95.5)
																return 18.136;
															else
															{
																if(ta < 9.5)
																{
																	if(cqi < 9)
																		return 15.273;
																	else
																		return 13.2538;
																}
																else
																{
																	if(rsrp < -94.5)
																		return 15.0943;
																	else
																	{
																		if(rsrp < -93)
																			return 16.791;
																		else
																			return 16.3132;
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
									if(ta < 7.5)
										return 16.5375;
									else
									{
										if(sinr < 9)
											return 6.80079;
										else
										{
											if(rsrp < -92.5)
												return 12.0391;
											else
											{
												if(payload < 4.5)
													return 9.27805;
												else
													return 10.1678;
											}
										}
									}
								}
							}
							else
							{
								if(ta < 4.5)
									return 15.2818;
								else
								{
									if(rsrp < -92.5)
									{
										if(cell < 29741056)
										{
											if(rsrq < -6.5)
												return 17.2507;
											else
												return 20.1068;
										}
										else
											return 21.5344;
									}
									else
										return 26.1973;
								}
							}
						}
						else
						{
							if(payload < 8.5)
							{
								if(cell < 27891843)
									return 16.5338;
								else
									return 17.5362;
							}
							else
								return 32.3887;
						}
					}
					else
					{
						if(rsrp < -93.5)
						{
							if(cell < 33527553)
							{
								if(sinr < 2)
									return 12.0573;
								else
								{
									if(payload < 6)
									{
										if(payload < 4.5)
											return 13.3278;
										else
										{
											if(cqi < 9.5)
												return 17.6913;
											else
												return 16.0578;
										}
									}
									else
									{
										if(payload < 8.5)
											return 21.374;
										else
											return 23.76;
									}
								}
							}
							else
								return 6.04595;
						}
						else
						{
							if(sinr < 8)
								return 5.80201;
							else
								return 7.50469;
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
			if(payload < 4.5)
			{
				if(payload < 2.5)
				{
					if(payload < 0.3)
					{
						if(cqi < 9.5)
						{
							if(velocity < 31.27)
							{
								if(velocity < 27.17)
								{
									if(cqi < 8.5)
									{
										if(rsrq < -8.5)
										{
											if(rsrp < -89.5)
											{
												if(velocity < 12.26)
												{
													if(cqi < 7.5)
														return 5.504718;
													else
														return 4.93829;
												}
												else
													return 6.6116;
											}
											else
												return 3.70372;
										}
										else
										{
											if(cqi < 7.5)
											{
												if(rsrp < -90.5)
													return 3.88351;
												else
												{
													if(velocity < 14.46)
														return 4.6337866667;
													else
														return 5.51726;
												}
											}
											else
											{
												if(rsrp < -84.5)
													return 5.56853;
												else
													return 4.21054;
											}
										}
									}
									else
									{
										if(rsrq < -7.5)
										{
											if(f < 2232.5)
												return 4.23282;
											else
											{
												if(ta < 2.5)
													return 3.60362;
												else
													return 4.25534;
											}
										}
										else
										{
											if(velocity < 20.39)
												return 6.06063;
											else
												return 3.66974;
										}
									}
								}
								else
									return 0.070194;
							}
							else
								return 10.2564;
						}
						else
						{
							if(ta < 6.5)
							{
								if(ta < 4.5)
									return 8.25096;
								else
									return 7.69234;
							}
							else
							{
								if(rsrp < -90.5)
									return 8.42108;
								else
								{
									if(velocity < 11.395)
									{
										if(sinr < 4.5)
											return 6.29924;
										else
										{
											if(rsrp < -87)
												return 5.06331;
											else
											{
												if(cqi < 10.5)
													return 4.73375;
												else
													return 3.92158;
											}
										}
									}
									else
									{
										if(rsrp < -77)
											return 6.1311;
										else
											return 4.8193;
									}
								}
							}
						}
					}
					else
					{
						if(cell < 33527557.5)
						{
							if(rsrq < -15.5)
								return 0.472283;
							else
							{
								if(rsrp < -71.5)
								{
									if(cell < 28068482.5)
									{
										if(rsrp < -83.5)
										{
											if(rsrp < -90.5)
											{
												if(velocity < 11.685)
													return 4.58453;
												else
													return 6.28437;
											}
											else
											{
												if(cell < 27771524.5)
												{
													if(velocity < 13.78)
													{
														if(rsrq < -9.5)
															return 12.6183;
														else
														{
															if(ta < 2.5)
															{
																if(cell < 26590850)
																{
																	if(f < 2232.5)
																	{
																		if(sinr < 12.5)
																			return 7.20721;
																		else
																		{
																			if(payload < 1.5)
																				return 6.3757825;
																			else
																				return 6.89061;
																		}
																	}
																	else
																	{
																		if(rsrp < -88.5)
																			return 4.72813;
																		else
																			return 6.50407;
																	}
																}
																else
																	return 9.1954;
															}
															else
															{
																if(sinr < 11.5)
																{
																	if(velocity < 9.145)
																	{
																		if(sinr < 6)
																		{
																			if(rsrp < -88.5)
																				return 9.06516;
																			else
																				return 9.78593;
																		}
																		else
																		{
																			if(cell < 26378626)
																				return 7.21371;
																			else
																			{
																				if(payload < 0.75)
																					return 7.50469;
																				else
																					return 8.558474;
																			}
																		}
																	}
																	else
																		return 7.3401;
																}
																else
																	return 9.84615;
															}
														}
													}
													else
													{
														if(rsrp < -84.5)
														{
															if(rsrp < -89.5)
															{
																if(sinr < 11.5)
																	return 13.4003;
																else
																	return 11.4204;
															}
															else
															{
																if(velocity < 14.735)
																	return 9.403875;
																else
																	return 10.66325;
															}
														}
														else
															return 7.16261;
													}
												}
												else
													return 13.6286;
											}
										}
										else
										{
											if(sinr < 11.5)
											{
												if(cqi < 7)
												{
													if(velocity < 18.61)
													{
														if(sinr < 8.5)
															return 9.757855;
														else
															return 10.2041;
													}
													else
														return 9.28074;
												}
												else
												{
													if(cqi < 9.5)
														return 11.0421;
													else
														return 11.4789;
												}
											}
											else
											{
												if(rsrp < -81)
													return 14.8011;
												else
													return 13.5823;
											}
										}
									}
									else
									{
										if(velocity < 14.52)
										{
											if(cqi < 7.5)
											{
												if(rsrq < -8)
												{
													if(sinr < 4.5)
														return 6.0423;
													else
														return 4.59506;
												}
												else
												{
													if(sinr < 10.5)
													{
														if(velocity < 4.2)
															return 8.78156;
														else
															return 12.1284;
													}
													else
													{
														if(rsrp < -79.5)
															return 10.4987;
														else
															return 6.08828;
													}
												}
											}
											else
											{
												if(cqi < 8.5)
													return 4.80424;
												else
												{
													if(sinr < 12.5)
													{
														if(velocity < 14.395)
														{
															if(cqi < 9.5)
															{
																if(cell < 29391105.5)
																{
																	if(payload < 1.5)
																		return 5.43848;
																	else
																		return 8.33768;
																}
																else
																	return 13.4116;
															}
															else
															{
																if(velocity < 11.615)
																{
																	if(ta < 6)
																		return 9.71463;
																	else
																	{
																		if(cqi < 11)
																			return 6.34921;
																		else
																			return 7.281176;
																	}
																}
																else
																{
																	if(payload < 1.25)
																		return 4.56621;
																	else
																		return 6.51997;
																}
															}
														}
														else
															return 4.33369;
													}
													else
													{
														if(rsrp < -86)
															return 3.83325;
														else
															return 5.75954;
													}
												}
											}
										}
										else
										{
											if(velocity < 16.665)
											{
												if(cell < 28369153.5)
													return 14.4404;
												else
												{
													if(payload < 0.75)
													{
														if(sinr < 11)
															return 8.88889;
														else
															return 9.36768;
													}
													else
														return 10.2696;
												}
											}
											else
											{
												if(payload < 0.75)
													return 8.59294;
												else
												{
													if(rsrq < -7.5)
														return 8.76232;
													else
														return 7.3246266667;
												}
											}
										}
									}
								}
								else
								{
									if(sinr < 11)
										return 14.7059;
									else
									{
										if(payload < 0.75)
											return 11.6279;
										else
											return 7.37327;
									}
								}
							}
						}
						else
						{
							if(rsrp < -86.5)
								return 0.94781675;
							else
								return 2.98063;
						}
					}
				}
				else
				{
					if(sinr < 11.5)
					{
						if(f < 1384.95)
							return 7.2299033333;
						else
						{
							if(rsrp < -90.5)
							{
								if(velocity < 12.03)
								{
									if(velocity < 6.89)
									{
										if(cell < 29479936.5)
											return 6.77966;
										else
											return 9.34216;
									}
									else
									{
										if(velocity < 11.31)
										{
											if(cqi < 13)
												return 13.3445;
											else
												return 12.4095;
										}
										else
											return 17.3724;
									}
								}
								else
								{
									if(cqi < 6.5)
										return 6.79406;
									else
									{
										if(velocity < 24.65)
											return 9.35126;
										else
											return 8.24955;
									}
								}
							}
							else
							{
								if(velocity < 17.51)
								{
									if(rsrp < -89.5)
									{
										if(velocity < 6.445)
											return 13.2597;
										else
										{
											if(ta < 5)
												return 14.8561;
											else
												return 15.8340333333;
										}
									}
									else
									{
										if(rsrq < -8.5)
										{
											if(velocity < 14.78)
											{
												if(velocity < 9.19)
												{
													if(payload < 3.5)
														return 10.5727;
													else
														return 11.4123;
												}
												else
												{
													if(payload < 3.5)
														return 7.76448;
													else
														return 8.86918;
												}
											}
											else
												return 11.976;
										}
										else
										{
											if(velocity < 16.04)
											{
												if(cell < 28367105.5)
												{
													if(ta < 1.5)
														return 11.0446;
													else
													{
														if(rsrq < -6.5)
														{
															if(cqi < 9.5)
															{
																if(ta < 4.5)
																{
																	if(cqi < 7.5)
																		return 13.4907;
																	else
																		return 12.6323428571;
																}
																else
																	return 11.0079;
															}
															else
															{
																if(sinr < 6.5)
																	return 14.863;
																else
																	return 13.5109;
															}
														}
														else
														{
															if(f < 2232.5)
															{
																if(rsrp < -83)
																	return 12.5478666667;
																else
																	return 13.363;
															}
															else
															{
																if(rsrp < -81.5)
																	return 15.534;
																else
																	return 12.5638;
															}
														}
													}
												}
												else
												{
													if(rsrq < -6.5)
														return 8.93189;
													else
													{
														if(rsrp < -82.5)
														{
															if(sinr < 5.5)
																return 10.6773;
															else
																return 11.66542;
														}
														else
															return 10.0597;
													}
												}
											}
											else
												return 14.4862;
										}
									}
								}
								else
								{
									if(sinr < 8.5)
									{
										if(payload < 3.5)
											return 10.0503;
										else
											return 8.94604;
									}
									else
										return 13.3612;
								}
							}
						}
					}
					else
					{
						if(velocity < 17.69)
						{
							if(rsrp < -90)
								return 6.98283;
							else
							{
								if(velocity < 15.76)
								{
									if(rsrp < -80.5)
									{
										if(cqi < 13)
										{
											if(rsrp < -85.5)
											{
												if(ta < 2)
													return 11.0193;
												else
												{
													if(cell < 26817540)
														return 14.3756;
													else
														return 15.4645;
												}
											}
											else
											{
												if(cell < 28842242.5)
													return 13.134825;
												else
													return 12.1151;
											}
										}
										else
											return 16.3265;
									}
									else
									{
										if(cell < 26590849.5)
											return 18.2336;
										else
											return 16.1834;
									}
								}
								else
									return 21.7786;
							}
						}
						else
						{
							if(ta < 19.5)
							{
								if(rsrq < -7.5)
									return 14.2476;
								else
									return 12.487;
							}
							else
								return 8.04222;
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
						if(cell < 31720449)
						{
							if(rsrp < -83.5)
							{
								if(velocity < 8.27)
								{
									if(sinr < 7.5)
									{
										if(sinr < 5)
										{
											if(sinr < 2)
												return 13.5875;
											else
												return 9.32401;
										}
										else
											return 17.8571;
									}
									else
									{
										if(cqi < 6.5)
											return 8.79507;
										else
											return 9.89283;
									}
								}
								else
								{
									if(rsrp < -87)
									{
										if(ta < 7.5)
										{
											if(sinr < 12)
												return 16.05625;
											else
												return 20.069;
										}
										else
											return 11.8468;
									}
									else
										return 20.8424;
								}
							}
							else
								return 7.62195;
						}
						else
							return 1.6076425;
					}
					else
					{
						if(cell < 26912771)
						{
							if(rsrq < -5.5)
							{
								if(payload < 7.5)
								{
									if(sinr < 1.5)
									{
										if(velocity < 9.8)
											return 22.2664;
										else
										{
											if(rsrp < -83.5)
												return 15.9299;
											else
												return 18.8679;
										}
									}
									else
									{
										if(ta < 1.5)
										{
											if(payload < 6.5)
											{
												if(rsrp < -84.5)
													return 18.8857;
												else
													return 17.99175;
											}
											else
												return 25.305;
										}
										else
										{
											if(velocity < 11.72)
											{
												if(cqi < 8.5)
												{
													if(ta < 4.5)
														return 19.07205;
													else
													{
														if(rsrp < -89)
														{
															if(sinr < 9.5)
																return 17.2105;
															else
																return 16.4103;
														}
														else
															return 14.5085;
													}
												}
												else
												{
													if(payload < 5.5)
													{
														if(f < 2232.5)
														{
															if(rsrq < -7)
																return 20.9424;
															else
																return 17.4064;
														}
														else
														{
															if(velocity < 6.59)
															{
																if(sinr < 11.5)
																	return 14.7874;
																else
																	return 15.949;
															}
															else
																return 13.0976;
														}
													}
													else
													{
														if(sinr < 6.5)
														{
															if(rsrp < -88)
																return 13.124;
															else
																return 13.712;
														}
														else
														{
															if(cqi < 13.5)
															{
																if(sinr < 9.5)
																	return 14.8227;
																else
																	return 16.19565;
															}
															else
																return 13.2159;
														}
													}
												}
											}
											else
											{
												if(payload < 5.5)
													return 14.17165;
												else
												{
													if(rsrq < -7.5)
														return 10.9825;
													else
														return 11.7561;
												}
											}
										}
									}
								}
								else
								{
									if(cell < 26382081.5)
									{
										if(sinr < 8)
										{
											if(rsrq < -9.5)
												return 23.692;
											else
											{
												if(cell < 26378625.5)
												{
													if(rsrq < -8.5)
														return 15.3073;
													else
													{
														if(rsrp < -90.5)
															return 14.3113;
														else
															return 12.7389;
													}
												}
												else
													return 18.8432;
											}
										}
										else
										{
											if(velocity < 14.075)
											{
												if(cqi < 9.5)
												{
													if(velocity < 1.065)
													{
														if(payload < 8.5)
															return 18.7354;
														else
															return 17.7866;
													}
													else
													{
														if(rsrq < -7.5)
															return 21.1144;
														else
															return 18.7518;
													}
												}
												else
												{
													if(f < 2232.5)
														return 36.3843;
													else
													{
														if(ta < 5)
															return 24.4368;
														else
														{
															if(rsrp < -83.5)
																return 19.656;
															else
																return 20.6452;
														}
													}
												}
											}
											else
												return 12.4031;
										}
									}
									else
									{
										if(velocity < 13.585)
										{
											if(cqi < 10.5)
											{
												if(rsrp < -83.5)
													return 20.7433;
												else
													return 15.9402;
											}
											else
											{
												if(ta < 7.5)
													return 21.5375;
												else
													return 24.5587;
											}
										}
										else
											return 28.2132;
									}
								}
							}
							else
								return 27.3038;
						}
						else
						{
							if(cell < 29394691)
							{
								if(rsrq < -7.5)
								{
									if(rsrp < -83)
									{
										if(ta < 15.5)
										{
											if(rsrp < -89.5)
											{
												if(velocity < 8.195)
												{
													if(payload < 7.5)
													{
														if(rsrp < -90.5)
															return 12.2856;
														else
														{
															if(payload < 6)
																return 11.1328;
															else
																return 10.6201;
														}
													}
													else
													{
														if(rsrp < -90.5)
															return 11.5298;
														else
															return 13.9983;
													}
												}
												else
												{
													if(payload < 8.5)
													{
														if(rsrp < -90.5)
															return 14.4372;
														else
															return 12.8246;
													}
													else
														return 16.9531;
												}
											}
											else
											{
												if(cell < 28067969.5)
													return 10.5904;
												else
												{
													if(ta < 8.5)
													{
														if(rsrq < -9.5)
															return 12.7755;
														else
														{
															if(ta < 4)
																return 16.7997;
															else
															{
																if(rsrp < -88.5)
																{
																	if(velocity < 7.4)
																		return 14.4633;
																	else
																		return 15.5729;
																}
																else
																{
																	if(sinr < 7.5)
																	{
																		if(velocity < 16.2)
																		{
																			if(cqi < 7)
																				return 13.1282;
																			else
																				return 14.4928;
																		}
																		else
																			return 15.0849;
																	}
																	else
																		return 11.6754;
																}
															}
														}
													}
													else
														return 17.6861;
												}
											}
										}
										else
										{
											if(rsrp < -85)
											{
												if(payload < 7)
													return 15.6709;
												else
													return 18.1098;
											}
											else
												return 13.8217;
										}
									}
									else
									{
										if(payload < 7)
											return 18.2899;
										else
											return 21.9378;
									}
								}
								else
								{
									if(payload < 6.5)
									{
										if(cell < 29391104.5)
										{
											if(sinr < 12.5)
											{
												if(rsrq < -5.5)
												{
													if(sinr < 3.5)
														return 12.3967;
													else
													{
														if(sinr < 6)
															return 19.9203;
														else
														{
															if(sinr < 7.5)
																return 14.2349;
															else
															{
																if(velocity < 30.555)
																{
																	if(cqi < 13.5)
																	{
																		if(sinr < 11.5)
																			return 15.996775;
																		else
																			return 16.394825;
																	}
																	else
																		return 15.1688;
																}
																else
																	return 17.2352;
															}
														}
													}
												}
												else
													return 26.3505;
											}
											else
											{
												if(rsrp < -84)
												{
													if(payload < 5.5)
														return 9.40291;
													else
														return 13.2733;
												}
												else
													return 19.2678;
											}
										}
										else
										{
											if(velocity < 11.96)
											{
												if(cqi < 8)
													return 10.4384;
												else
													return 11.2076;
											}
											else
												return 6.13732;
										}
									}
									else
									{
										if(cqi < 6.5)
										{
											if(rsrp < -80)
											{
												if(ta < 5.5)
												{
													if(sinr < 9.5)
													{
														if(velocity < 13.545)
															return 22.0766;
														else
															return 23.5814;
													}
													else
													{
														if(velocity < 8.005)
															return 21.5827;
														else
															return 20.592;
													}
												}
												else
													return 20.8062;
											}
											else
												return 28.4318;
										}
										else
										{
											if(cqi < 13.5)
											{
												if(cell < 28881153)
												{
													if(ta < 5.5)
													{
														if(cell < 27277828.5)
															return 20.8266;
														else
														{
															if(rsrp < -88)
															{
																if(cell < 28071170.5)
																{
																	if(payload < 7.5)
																		return 10.479;
																	else
																		return 10.0016;
																}
																else
																	return 15.5005;
															}
															else
															{
																if(payload < 7.5)
																	return 16.5779;
																else
																{
																	if(velocity < 3.625)
																		return 17.5198;
																	else
																		return 18.3119;
																}
															}
														}
													}
													else
													{
														if(cell < 28071042.5)
														{
															if(rsrp < -88.5)
																return 17.9574;
															else
																return 18.9189;
														}
														else
														{
															if(cqi < 9)
																return 20.979;
															else
																return 19.9715;
														}
													}
												}
												else
												{
													if(cqi < 8)
														return 11.179;
													else
													{
														if(cell < 29391104.5)
															return 15.3625;
														else
															return 13.6464;
													}
												}
											}
											else
											{
												if(sinr < 10.5)
												{
													if(velocity < 15.845)
													{
														if(rsrq < -6.5)
															return 24.4648;
														else
															return 23.5195;
													}
													else
													{
														if(cqi < 14.5)
															return 20.9302;
														else
															return 20.4487;
													}
												}
												else
													return 15.491;
											}
										}
									}
								}
							}
							else
							{
								if(sinr < 6)
								{
									if(cqi < 10.5)
									{
										if(payload < 6.5)
										{
											if(rsrp < -86.5)
												return 18.6989;
											else
												return 17.6082;
										}
										else
										{
											if(rsrq < -6.5)
												return 12.96;
											else
												return 16.2231;
										}
									}
									else
									{
										if(rsrq < -7.5)
											return 15.8259;
										else
											return 12.5294;
									}
								}
								else
								{
									if(ta < 9.5)
									{
										if(rsrq < -8.5)
											return 25.4574;
										else
										{
											if(velocity < 8.15)
											{
												if(rsrq < -7)
													return 21.6634;
												else
													return 25.4372;
											}
											else
											{
												if(payload < 6.5)
												{
													if(sinr < 11.5)
														return 19.5828;
													else
														return 22.756;
												}
												else
												{
													if(cell < 29913345.5)
													{
														if(sinr < 11.5)
															return 16.59832;
														else
															return 21.102;
													}
													else
													{
														if(cqi < 8.5)
															return 19.4057;
														else
															return 20.9561;
													}
												}
											}
										}
									}
									else
									{
										if(cqi < 9.5)
											return 13.1765;
										else
										{
											if(payload < 7)
												return 13.8456;
											else
												return 18.2417;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if(ta < 2.5)
					{
						if(rsrq < -9)
							return 38.5356;
						else
						{
							if(ta < 1.5)
							{
								if(cell < 26587522.5)
									return 19.9154;
								else
								{
									if(sinr < 12.5)
										return 24.404525;
									else
										return 22.2531;
								}
							}
							else
								return 30.4067;
						}
					}
					else
					{
						if(ta < 7.5)
						{
							if(velocity < 8.62)
							{
								if(cell < 29479937)
								{
									if(cqi < 9)
									{
										if(ta < 4)
											return 18.0589666667;
										else
											return 19.8758;
									}
									else
										return 16.8244;
								}
								else
									return 13.557;
							}
							else
							{
								if(sinr < 11.5)
								{
									if(velocity < 11.92)
									{
										if(rsrp < -87.5)
											return 20.9974;
										else
											return 19.7287;
									}
									else
									{
										if(ta < 5.5)
										{
											if(cqi < 10.5)
												return 24.9221;
											else
												return 31.9234;
										}
										else
										{
											if(rsrp < -86)
												return 23.1348;
											else
												return 20.6345;
										}
									}
								}
								else
									return 14.4014;
							}
						}
						else
						{
							if(sinr < 7)
							{
								if(ta < 9)
									return 16.8883;
								else
								{
									if(sinr < 3)
										return 20.8388;
									else
										return 19.319;
								}
							}
							else
							{
								if(cqi < 14)
								{
									if(velocity < 4.425)
										return 25.89;
									else
									{
										if(rsrp < -88)
											return 27.4254;
										else
											return 26.5957;
									}
								}
								else
									return 22.2469;
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
				if(payload < 0.75)
				{
					if(cqi < 7.5)
					{
						if(ta < 4.5)
						{
							if(rsrp < -71)
							{
								if(velocity < 6.585)
									return 5.79712;
								else
									return 11.4943;
							}
							else
								return 22.8572;
						}
						else
						{
							if(cqi < 4)
								return 6.01504;
							else
								return 3.2098866667;
						}
					}
					else
					{
						if(f < 2232.5)
						{
							if(velocity < 10.475)
							{
								if(rsrq < -9)
									return 2.76052;
								else
								{
									if(velocity < 8.97)
									{
										if(payload < 0.3)
										{
											if(cell < 28879745)
											{
												if(velocity < 8.68)
												{
													if(sinr < 26.5)
														return 5.8112266667;
													else
														return 6.34923;
												}
												else
													return 4.87807;
											}
											else
											{
												if(rsrp < -83.5)
												{
													if(rsrp < -87)
														return 5.09556;
													else
														return 5.55558;
												}
												else
												{
													if(cqi < 13.5)
														return 4.26744;
													else
													{
														if(velocity < 1.315)
														{
															if(sinr < 25)
																return 4.41991;
															else
																return 5.12822;
														}
														else
															return 4.4944;
													}
												}
											}
										}
										else
										{
											if(rsrp < -77.5)
											{
												if(velocity < 5.025)
												{
													if(ta < 3)
														return 6.36943;
													else
													{
														if(rsrp < -85.5)
															return 6.26478;
														else
															return 8.38574;
													}
												}
												else
												{
													if(velocity < 8.615)
														return 8.2094975;
													else
														return 7.63359;
												}
											}
											else
											{
												if(rsrp < -69)
													return 6.1901566667;
												else
													return 7.40741;
											}
										}
									}
									else
									{
										if(ta < 9)
										{
											if(payload < 0.3)
											{
												if(cqi < 11.5)
												{
													if(ta < 4.5)
														return 5.4422;
													else
														return 4.79044;
												}
												else
													return 4.4582116667;
											}
											else
											{
												if(velocity < 9.485)
												{
													if(sinr < 19)
														return 6.42055;
													else
														return 8.52878;
												}
												else
												{
													if(rsrp < -76)
														return 6.38978;
													else
														return 5.39811;
												}
											}
										}
										else
											return 3.58746;
									}
								}
							}
							else
							{
								if(payload < 0.3)
								{
									if(rsrq < -6.5)
									{
										if(sinr < 25.5)
											return 5.0311154684;
										else
										{
											if(sinr < 28)
												return 3.05345;
											else
												return 4.6243;
										}
									}
									else
									{
										if(sinr < 24.5)
										{
											if(rsrp < -84)
												return 6.83763;
											else
											{
												if(ta < 6.5)
												{
													if(velocity < 15.395)
													{
														if(velocity < 14.7)
															return 4.57263;
														else
															return 5.16131;
													}
													else
														return 6.77969;
												}
												else
												{
													if(rsrq < -4.5)
														return 4.22192;
													else
														return 4.76192;
												}
											}
										}
										else
										{
											if(cell < 27771523.5)
												return 7.1861733333;
											else
											{
												if(rsrq < -4.5)
												{
													if(velocity < 25.315)
													{
														if(sinr < 26)
															return 6.6116;
														else
														{
															if(cqi < 12.5)
															{
																if(rsrq < -5.5)
																	return 5.4422;
																else
																	return 4.856715;
															}
															else
															{
																if(sinr < 31)
																{
																	if(cell < 28581506.5)
																		return 5.4043;
																	else
																		return 5.79712;
																}
																else
																	return 6.25002;
															}
														}
													}
													else
														return 4.4944;
												}
												else
												{
													if(rsrp < -78)
														return 9.09094;
													else
														return 5.4929433333;
												}
											}
										}
									}
								}
								else
								{
									if(velocity < 14.505)
									{
										if(sinr < 34.5)
										{
											if(cell < 29391104.5)
											{
												if(cqi < 10.5)
												{
													if(rsrp < -83.5)
														return 11.5274;
													else
														return 15.625;
												}
												else
												{
													if(rsrq < -6.5)
														return 11.7994;
													else
													{
														if(cqi < 13.5)
														{
															if(sinr < 23)
															{
																if(rsrq < -5.5)
																	return 8.63931;
																else
																	return 9.23788;
															}
															else
																return 9.80392;
														}
														else
															return 8.23045;
													}
												}
											}
											else
											{
												if(sinr < 21)
												{
													if(sinr < 15)
														return 8.246175;
													else
													{
														if(velocity < 12.885)
														{
															if(cqi < 12)
																return 5.48697;
															else
																return 4.33369;
														}
														else
															return 7.60456;
													}
												}
												else
												{
													if(rsrp < -84)
														return 14.1343;
													else
														return 7.95229;
												}
											}
										}
										else
										{
											if(rsrp < -76.5)
												return 5.29801;
											else
											{
												if(cqi < 12.5)
													return 7.7821;
												else
													return 7.1048;
											}
										}
									}
									else
									{
										if(rsrq < -6.5)
										{
											if(velocity < 25.92)
												return 3.72787;
											else
												return 5.45703;
										}
										else
										{
											if(velocity < 14.655)
												return 4.5977;
											else
											{
												if(velocity < 14.77)
													return 6.70017;
												else
												{
													if(cell < 31548160)
													{
														if(velocity < 15.275)
														{
															if(rsrq < -5.5)
																return 10.4712;
															else
																return 8.31601;
														}
														else
														{
															if(cqi < 10)
																return 7.25953;
															else
																return 7.89056;
														}
													}
													else
													{
														if(rsrq < -5.5)
															return 7.0922;
														else
															return 6.61157;
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
							if(cqi < 10.5)
							{
								if(velocity < 9.93)
								{
									if(ta < 9.5)
										return 2.7782066667;
									else
									{
										if(rsrp < -86.5)
											return 5.19483;
										else
											return 3.33335;
									}
								}
								else
									return 4.59772;
							}
							else
							{
								if(rsrp < -81.5)
								{
									if(ta < 6)
									{
										if(rsrp < -88.5)
											return 6.54664;
										else
											return 5.94872;
									}
									else
									{
										if(sinr < 19.5)
											return 7.93651;
										else
											return 6.9276;
									}
								}
								else
									return 4.2568903604;
							}
						}
					}
				}
				else
				{
					if(cell < 33527556.5)
					{
						if(rsrp < -82.5)
						{
							if(payload < 2.5)
							{
								if(velocity < 16.905)
								{
									if(sinr < 27.5)
									{
										if(ta < 6.5)
										{
											if(cqi < 9.5)
											{
												if(cell < 26817540)
													return 10.36505;
												else
												{
													if(ta < 5)
													{
														if(cell < 29391104.5)
															return 13.9743;
														else
															return 12.8824;
													}
													else
													{
														if(rsrp < -90)
															return 13.1148;
														else
															return 9.4451;
													}
												}
											}
											else
											{
												if(cell < 29652226)
												{
													if(velocity < 14.805)
													{
														if(rsrp < -83.5)
														{
															if(sinr < 21.5)
																return 10.9757428571;
															else
																return 8.8638566667;
														}
														else
														{
															if(payload < 1.5)
																return 13.4454;
															else
																return 14.4928;
														}
													}
													else
													{
														if(ta < 4)
															return 9.391225;
														else
															return 8.762585;
													}
												}
												else
												{
													if(cqi < 11.5)
													{
														if(velocity < 5.58)
															return 7.87789;
														else
															return 6.10687;
													}
													else
													{
														if(cqi < 14.5)
														{
															if(rsrp < -85)
																return 10.5402;
															else
															{
																if(rsrp < -83.5)
																	return 8.90373;
																else
																	return 9.58658;
															}
														}
														else
															return 7.76699;
													}
												}
											}
										}
										else
										{
											if(payload < 1.5)
											{
												if(cell < 28070145.5)
												{
													if(sinr < 16.5)
														return 6.46072;
													else
														return 7.187285;
												}
												else
													return 4.36681;
											}
											else
											{
												if(cell < 27891843)
													return 9.29692;
												else
													return 10.7345666667;
											}
										}
									}
									else
									{
										if(velocity < 12.6)
										{
											if(ta < 3.5)
											{
												if(payload < 1.5)
													return 8.03213;
												else
													return 7.0922;
											}
											else
												return 11.5523;
										}
										else
										{
											if(cqi < 13.5)
											{
												if(rsrq < -6.5)
													return 7.32265;
												else
													return 9.00901;
											}
											else
												return 6.24645;
										}
									}
								}
								else
								{
									if(velocity < 24.545)
									{
										if(sinr < 22.5)
											return 10.1394;
										else
										{
											if(sinr < 23.5)
												return 18.2648;
											else
											{
												if(cqi < 12.5)
													return 14.1029666667;
												else
												{
													if(sinr < 26.5)
														return 13.913;
													else
														return 12.987;
												}
											}
										}
									}
									else
									{
										if(rsrq < -7)
										{
											if(rsrp < -84.5)
												return 15.534;
											else
												return 12.2324;
										}
										else
											return 6.247605;
									}
								}
							}
							else
							{
								if(velocity < 26.155)
								{
									if(rsrp < -88.5)
									{
										if(cqi < 13.5)
										{
											if(rsrq < -8)
												return 14.6879;
											else
												return 13.3854;
										}
										else
										{
											if(rsrp < -89.5)
												return 4.84359;
											else
											{
												if(sinr < 19)
													return 9.1047;
												else
													return 7.46269;
											}
										}
									}
									else
									{
										if(cell < 28071555.5)
										{
											if(sinr < 25.5)
											{
												if(rsrq < -6.5)
												{
													if(rsrp < -85)
														return 22.409;
													else
														return 15.4949;
												}
												else
												{
													if(cell < 26820867)
														return 16.5062;
													else
														return 14.56465;
												}
											}
											else
												return 25;
										}
										else
										{
											if(rsrq < -5.5)
											{
												if(velocity < 13.645)
													return 10.1523;
												else
													return 11.6335;
											}
											else
											{
												if(velocity < 12.835)
													return 13.7773;
												else
													return 14.742;
											}
										}
									}
								}
								else
									return 10.0167;
							}
						}
						else
						{
							if(payload < 1.5)
							{
								if(cell < 26385409)
									return 17.9372;
								else
								{
									if(sinr < 28.5)
									{
										if(rsrq < -9)
											return 18.7354;
										else
										{
											if(rsrq < -6.5)
											{
												if(sinr < 22)
												{
													if(velocity < 6.99)
														return 8.80088;
													else
														return 9.38967;
												}
												else
												{
													if(rsrp < -76.5)
														return 8.16327;
													else
														return 5.93032;
												}
											}
											else
											{
												if(cqi < 12.5)
													return 21.1082;
												else
												{
													if(cqi < 13.5)
														return 12.3457;
													else
													{
														if(cqi < 14.5)
															return 10.5987;
														else
														{
															if(cell < 28842626.5)
																return 12.1766;
															else
																return 11.0345;
														}
													}
												}
											}
										}
									}
									else
									{
										if(f < 1342.5)
											return 5.43848;
										else
										{
											if(rsrp < -67.5)
											{
												if(velocity < 16.92)
												{
													if(velocity < 10.52)
													{
														if(cqi < 14)
														{
															if(rsrp < -72)
																return 6.56585;
															else
																return 7.72947;
														}
														else
														{
															if(sinr < 29.5)
																return 8.340424;
															else
																return 9.56062;
														}
													}
													else
														return 6.61704;
												}
												else
													return 10.3627;
											}
											else
												return 10.7527;
										}
									}
								}
							}
							else
							{
								if(sinr < 14.5)
								{
									if(rsrp < -80.5)
										return 15.9151;
									else
										return 22.1198;
								}
								else
								{
									if(cell < 27535235.5)
									{
										if(cqi < 8)
											return 20.4255;
										else
										{
											if(rsrp < -69.5)
											{
												if(rsrq < -8)
													return 12.1335;
												else
												{
													if(ta < 5)
													{
														if(velocity < 13.425)
														{
															if(velocity < 5.425)
															{
																if(cell < 26590850.5)
																	return 9.61924;
																else
																	return 8.99888;
															}
															else
																return 8.552205;
														}
														else
															return 10.1523;
													}
													else
													{
														if(rsrq < -5.5)
														{
															if(rsrq < -6.5)
																return 11.6392;
															else
																return 12.4902;
														}
														else
															return 8.67365;
													}
												}
											}
											else
											{
												if(rsrp < -67.5)
													return 15.8311;
												else
												{
													if(sinr < 36)
														return 13.7852;
													else
														return 11.1888;
												}
											}
										}
									}
									else
									{
										if(cell < 27771523.5)
										{
											if(sinr < 18)
											{
												if(velocity < 7.37)
													return 14.9393;
												else
													return 17.7778;
											}
											else
											{
												if(ta < 12.5)
													return 22.1402;
												else
													return 21.4095;
											}
										}
										else
										{
											if(velocity < 36.595)
											{
												if(rsrp < -69.5)
												{
													if(cell < 27771908.5)
													{
														if(sinr < 32.5)
														{
															if(rsrp < -73)
															{
																if(sinr < 29.5)
																{
																	if(sinr < 21.5)
																	{
																		if(velocity < 15.105)
																			return 15.4639;
																		else
																		{
																			if(velocity < 16.045)
																				return 14.3885;
																			else
																				return 13.8408;
																		}
																	}
																	else
																	{
																		if(rsrq < -5.5)
																			return 21.5054;
																		else
																			return 17.9171;
																	}
																}
																else
																{
																	if(velocity < 15.34)
																		return 12.959;
																	else
																	{
																		if(velocity < 19.37)
																			return 14.157125;
																		else
																			return 14.8976;
																	}
																}
															}
															else
															{
																if(sinr < 30.5)
																	return 14.3113;
																else
																	return 8.42549;
															}
														}
														else
															return 22.8354;
													}
													else
													{
														if(sinr < 18.5)
														{
															if(rsrq < -5.5)
															{
																if(cqi < 11)
																	return 12.7085;
																else
																	return 16.1074;
															}
															else
																return 21.4669;
														}
														else
														{
															if(rsrq < -5.5)
															{
																if(cell < 29391104.5)
																{
																	if(sinr < 25.5)
																		return 7.12166;
																	else
																	{
																		if(payload < 2.5)
																			return 9.34579;
																		else
																			return 11.8402;
																	}
																}
																else
																{
																	if(payload < 2.5)
																		return 10.5402;
																	else
																		return 12.5392;
																}
															}
															else
															{
																if(ta < 4.5)
																{
																	if(ta < 3)
																		return 13.71045;
																	else
																	{
																		if(cqi < 14)
																		{
																			if(cqi < 12)
																				return 9.86436;
																			else
																				return 10.6242;
																		}
																		else
																			return 13.0719;
																	}
																}
																else
																{
																	if(payload < 2.5)
																		return 13.3111;
																	else
																	{
																		if(sinr < 25)
																		{
																			if(velocity < 15.38)
																				return 16.12555;
																			else
																				return 14.9347;
																		}
																		else
																			return 14.7874;
																	}
																}
															}
														}
													}
												}
												else
												{
													if(ta < 11)
														return 11.9671;
													else
														return 9.55224;
												}
											}
											else
												return 19.8347;
										}
									}
								}
							}
						}
					}
					else
						return 2.801715;
				}
			}
			else
			{
				if(payload < 5.5)
				{
					if(cqi < 14.5)
					{
						if(ta < 23)
						{
							if(sinr < 16.5)
							{
								if(cqi < 12.5)
								{
									if(cell < 29479937)
									{
										if(velocity < 12.215)
										{
											if(rsrp < -89.5)
												return 10.5291;
											else
											{
												if(rsrq < -6.5)
													return 14.767;
												else
													return 15.7403;
											}
										}
										else
										{
											if(rsrp < -86)
											{
												if(velocity < 12.81)
													return 8.54884;
												else
													return 6.44901;
											}
											else
												return 10.84462;
										}
									}
									else
									{
										if(payload < 4.5)
										{
											if(sinr < 15)
												return 15.2891;
											else
											{
												if(rsrp < -88)
													return 18.6047;
												else
													return 15.8494;
											}
										}
										else
										{
											if(cell < 29741057)
												return 12.8991;
											else
												return 14.7384;
										}
									}
								}
								else
								{
									if(velocity < 17.065)
										return 22.1117;
									else
										return 16.7189;
								}
							}
							else
							{
								if(rsrq < -9.5)
									return 9.60615;
								else
								{
									if(rsrp < -84.5)
									{
										if(sinr < 24)
										{
											if(sinr < 22.5)
											{
												if(ta < 8.5)
												{
													if(rsrp < -87.5)
													{
														if(velocity < 14.635)
															return 19.1055625;
														else
														{
															if(cqi < 11.5)
																return 21.6802;
															else
																return 19.059;
														}
													}
													else
													{
														if(sinr < 21.5)
														{
															if(sinr < 20)
															{
																if(rsrp < -86.5)
																	return 16.3348666667;
																else
																	return 15.8103;
															}
															else
															{
																if(rsrp < -86)
																	return 18.3993;
																else
																	return 19.1296;
															}
														}
														else
														{
															if(rsrq < -6.5)
																return 15.2164;
															else
																return 11.7405;
														}
													}
												}
												else
												{
													if(velocity < 0.91)
													{
														if(rsrp < -90)
															return 16.1421;
														else
															return 10.5645;
													}
													else
													{
														if(velocity < 6.46)
														{
															if(payload < 4.5)
																return 15.5415;
															else
																return 16.6528;
														}
														else
														{
															if(rsrp < -90)
																return 17.1674;
															else
																return 20.429;
														}
													}
												}
											}
											else
											{
												if(rsrp < -85.5)
													return 24.6723;
												else
													return 19.1388;
											}
										}
										else
										{
											if(ta < 5)
											{
												if(cell < 28581507)
												{
													if(rsrp < -87)
														return 12.2532333333;
													else
														return 9.23148;
												}
												else
												{
													if(rsrq < -6)
														return 14.9589;
													else
														return 16.3182;
												}
											}
											else
											{
												if(rsrp < -87)
													return 26.3374;
												else
													return 11.7907;
											}
										}
									}
									else
									{
										if(cell < 27535108.5)
										{
											if(rsrp < -80)
												return 9.63391;
											else
											{
												if(ta < 4.5)
												{
													if(rsrp < -74)
														return 19.8265;
													else
														return 16.0772;
												}
												else
												{
													if(velocity < 11.48)
														return 10.9141;
													else
														return 11.5025;
												}
											}
										}
										else
										{
											if(rsrp < -70.5)
											{
												if(sinr < 18)
												{
													if(velocity < 14.295)
														return 13.5044;
													else
														return 19.32385;
												}
												else
												{
													if(rsrq < -5.5)
													{
														if(cell < 28581506.5)
														{
															if(cqi < 11)
																return 11.2281;
															else
																return 9.37427;
														}
														else
														{
															if(ta < 0.5)
																return 11.5942;
															else
															{
																if(rsrp < -81)
																{
																	if(rsrq < -7)
																		return 13.8648;
																	else
																		return 14.3885;
																}
																else
																{
																	if(ta < 3)
																		return 17.1951;
																	else
																		return 17.9856;
																}
															}
														}
													}
													else
													{
														if(rsrp < -80.5)
														{
															if(sinr < 23)
															{
																if(velocity < 11.845)
																	return 15.534;
																else
																	return 14.9645;
															}
															else
																return 14.4561;
														}
														else
														{
															if(cell < 28669953.5)
																return 20.3046;
															else
															{
																if(cqi < 11.5)
																	return 15.625;
																else
																{
																	if(sinr < 29)
																		return 17.7187;
																	else
																		return 16.7539;
																}
															}
														}
													}
												}
											}
											else
												return 22.0751;
										}
									}
								}
							}
						}
						else
							return 3.7296;
					}
					else
					{
						if(sinr < 33.5)
						{
							if(f < 2232.5)
							{
								if(ta < 2.5)
								{
									if(sinr < 23.5)
									{
										if(rsrp < -82.5)
											return 30.3951;
										else
										{
											if(velocity < 13.295)
											{
												if(rsrq < -5.5)
													return 20.9205;
												else
													return 19.7531;
											}
											else
												return 23.2964;
										}
									}
									else
									{
										if(rsrp < -68.5)
										{
											if(sinr < 28.5)
											{
												if(rsrp < -84.5)
													return 19.7433;
												else
												{
													if(payload < 4.5)
														return 17.2912;
													else
														return 15.829;
												}
											}
											else
												return 10.9379;
										}
										else
										{
											if(rsrp < -66.5)
												return 20.7039;
											else
												return 25.8565;
										}
									}
								}
								else
								{
									if(sinr < 28.5)
									{
										if(rsrq < -4.5)
										{
											if(sinr < 27.5)
											{
												if(sinr < 23.5)
												{
													if(sinr < 17)
														return 18.0424;
													else
														return 15.7167;
												}
												else
												{
													if(cell < 28581506)
													{
														if(sinr < 26)
															return 18.3908;
														else
															return 17.1215;
													}
													else
														return 18.8255;
												}
											}
											else
												return 14.7059;
										}
										else
											return 14.2602;
									}
									else
									{
										if(payload < 4.5)
										{
											if(rsrp < -73)
												return 18.4226;
											else
												return 21.3333;
										}
										else
										{
											if(rsrp < -72)
												return 21.5054;
											else
												return 22.1607;
										}
									}
								}
							}
							else
								return 8.13421;
						}
						else
						{
							if(ta < 12)
							{
								if(velocity < 17.025)
									return 15.9182;
								else
									return 19.536;
							}
							else
								return 10.8932;
						}
					}
				}
				else
				{
					if(f < 2232.5)
					{
						if(f < 1384.95)
						{
							if(cell < 27771905.5)
								return 11.2248;
							else
							{
								if(cqi < 13.5)
									return 17.1566398892;
								else
									return 21.555;
							}
						}
						else
						{
							if(rsrp < -83.5)
							{
								if(rsrq < -6.5)
								{
									if(cell < 29391104.5)
									{
										if(rsrq < -7.5)
										{
											if(sinr < 25.5)
											{
												if(ta < 9.5)
												{
													if(cell < 26385409.5)
														return 18.46195;
													else
													{
														if(velocity < 15.04)
														{
															if(ta < 7)
																return 25.4676;
															else
																return 24.9332;
														}
														else
														{
															if(cqi < 11.5)
																return 20.3218;
															else
																return 22.9555;
														}
													}
												}
												else
												{
													if(sinr < 20)
														return 17.9735;
													else
														return 20.2378;
												}
											}
											else
											{
												if(cell < 27378305)
													return 19.2123;
												else
													return 14.6401;
											}
										}
										else
										{
											if(rsrp < -85)
											{
												if(ta < 10)
												{
													if(ta < 2.5)
														return 16.7481;
													else
													{
														if(sinr < 26)
															return 17.9252;
														else
															return 19.9857;
													}
												}
												else
													return 21.3504;
											}
											else
												return 14.2349;
										}
									}
									else
									{
										if(payload < 9.5)
										{
											if(cell < 29479936.5)
											{
												if(velocity < 7.25)
												{
													if(rsrp < -88)
														return 16.2743;
													else
														return 21.18;
												}
												else
												{
													if(payload < 7.5)
														return 16.8599;
													else
														return 11.3457;
												}
											}
											else
											{
												if(rsrp < -85)
													return 12.3818;
												else
													return 8.33623;
											}
										}
										else
										{
											if(rsrq < -7.5)
												return 12.6763;
											else
											{
												if(rsrp < -89.5)
													return 26.1609;
												else
													return 23.8024;
											}
										}
									}
								}
								else
								{
									if(payload < 7.5)
									{
										if(payload < 6.5)
										{
											if(cqi < 14.5)
											{
												if(rsrp < -87.5)
												{
													if(sinr < 18.5)
														return 25.7511;
													else
														return 23.8213;
												}
												else
												{
													if(ta < 1.5)
													{
														if(cqi < 13)
															return 20.5979;
														else
															return 22.9117;
													}
													else
														return 19.8675;
												}
											}
											else
											{
												if(sinr < 19.5)
													return 15.7429;
												else
													return 12.945;
											}
										}
										else
										{
											if(velocity < 15.29)
											{
												if(velocity < 14.215)
												{
													if(velocity < 9.375)
														return 14.1772;
													else
													{
														if(sinr < 17.5)
															return 19.1388;
														else
															return 18.0498333333;
													}
												}
												else
												{
													if(cqi < 12)
														return 23.0169;
													else
														return 26.1927;
												}
											}
											else
											{
												if(rsrp < -87.5)
													return 14.733;
												else
													return 13.7188;
											}
										}
									}
									else
									{
										if(velocity < 24.805)
										{
											if(cell < 29741056)
											{
												if(velocity < 24.065)
												{
													if(cqi < 11.5)
													{
														if(velocity < 13.81)
														{
															if(payload < 8.5)
															{
																if(sinr < 24)
																	return 20.1448;
																else
																	return 16.7145;
															}
															else
															{
																if(payload < 9.5)
																	return 27.7136;
																else
																	return 24.3754;
															}
														}
														else
														{
															if(cqi < 5.5)
																return 26.2104;
															else
																return 30.3426;
														}
													}
													else
													{
														if(ta < 3.5)
														{
															if(sinr < 23)
															{
																if(payload < 8.5)
																	return 21.0665;
																else
																	return 17.5012;
															}
															else
																return 11.0174;
														}
														else
														{
															if(velocity < 13.91)
															{
																if(velocity < 13.035)
																{
																	if(rsrp < -88)
																	{
																		if(cqi < 13.5)
																			return 20.2532;
																		else
																			return 19.428;
																	}
																	else
																	{
																		if(payload < 9.5)
																			return 26.1818;
																		else
																		{
																			if(velocity < 5.41)
																				return 20.2583;
																			else
																				return 23.2693;
																		}
																	}
																}
																else
																	return 18.5776;
															}
															else
															{
																if(payload < 8.5)
																	return 28.2561;
																else
																	return 25.7787;
															}
														}
													}
												}
												else
													return 34.379;
											}
											else
											{
												if(cqi < 13.5)
												{
													if(cqi < 11.5)
													{
														if(ta < 5)
															return 27.3621;
														else
															return 28.0088;
													}
													else
														return 26.5604;
												}
												else
													return 29.985;
											}
										}
										else
										{
											if(rsrq < -5.5)
												return 15.4551231818;
											else
												return 21.9245;
										}
									}
								}
							}
							else
							{
								if(payload < 8.5)
								{
									if(rsrp < -81.5)
									{
										if(payload < 6.5)
										{
											if(rsrq < -8.5)
												return 11.7388;
											else
											{
												if(sinr < 14.5)
													return 21.8778;
												else
												{
													if(rsrp < -82.5)
														return 24.1085;
													else
														return 23.5294;
												}
											}
										}
										else
										{
											if(ta < 5.5)
											{
												if(cell < 27771523.5)
												{
													if(sinr < 23)
													{
														if(payload < 7.5)
															return 28.6885;
														else
															return 35.1262;
													}
													else
														return 33.7756;
												}
												else
													return 23.38365;
											}
											else
											{
												if(cqi < 13)
													return 27.6697;
												else
												{
													if(payload < 7.5)
														return 19.774;
													else
														return 21.143;
												}
											}
										}
									}
									else
									{
										if(rsrq < -6.5)
										{
											if(ta < 3)
											{
												if(rsrp < -76)
												{
													if(sinr < 15)
														return 33.264;
													else
													{
														if(sinr < 19)
															return 29.7398;
														else
															return 26.8908;
													}
												}
												else
													return 23.2305;
											}
											else
											{
												if(payload < 6.5)
												{
													if(cqi < 14.5)
														return 17.192;
													else
														return 13.3333;
												}
												else
												{
													if(velocity < 18.51)
													{
														if(cqi < 14)
															return 24.2740125;
														else
															return 22.5352;
													}
													else
													{
														if(sinr < 26)
															return 28.1974;
														else
															return 26.6667;
													}
												}
											}
										}
										else
										{
											if(payload < 6.5)
											{
												if(rsrp < -75.5)
												{
													if(sinr < 27.5)
													{
														if(cqi < 13.5)
															return 20.0417666667;
														else
														{
															if(cell < 27078658)
																return 20.1681;
															else
															{
																if(sinr < 25.5)
																	return 18.2302;
																else
																	return 17.673;
															}
														}
													}
													else
													{
														if(rsrp < -79.5)
															return 15.8888;
														else
														{
															if(sinr < 28.5)
																return 16.1345;
															else
																return 17.5617666667;
														}
													}
												}
												else
												{
													if(sinr < 21)
														return 27.907;
													else
													{
														if(rsrp < -74.5)
															return 18.06005;
														else
														{
															if(rsrp < -68.5)
															{
																if(rsrp < -69.5)
																{
																	if(sinr < 27)
																		return 22.9336;
																	else
																		return 22.4091;
																}
																else
																	return 24.8576;
															}
															else
																return 19.4332;
														}
													}
												}
											}
											else
											{
												if(cell < 29741057)
												{
													if(rsrp < -69.5)
													{
														if(ta < 12.5)
														{
															if(cqi < 12.5)
															{
																if(cqi < 11.5)
																{
																	if(velocity < 4.39)
																		return 16.0137;
																	else
																		return 19.23812;
																}
																else
																{
																	if(rsrp < -72.5)
																	{
																		if(rsrp < -78.5)
																		{
																			if(rsrp < -80.5)
																			{
																				if(payload < 7.5)
																					return 20.0645;
																				else
																					return 18.4864;
																			}
																			else
																			{
																				if(cell < 27771524)
																				{
																					if(sinr < 22)
																						return 22.9144;
																					else
																						return 23.5901;
																				}
																				else
																					return 19.7836;
																			}
																		}
																		else
																		{
																			if(rsrp < -77.5)
																				return 17.1201;
																			else
																			{
																				if(sinr < 27.5)
																				{
																					if(sinr < 23)
																						return 20.7947;
																					else
																						return 17.1712;
																				}
																				else
																					return 20.5589;
																			}
																		}
																	}
																	else
																	{
																		if(sinr < 20.5)
																			return 22.3196;
																		else
																			return 23.382;
																	}
																}
															}
															else
															{
																if(velocity < 4.875)
																{
																	if(sinr < 34.5)
																		return 18.8294;
																	else
																		return 20.4007;
																}
																else
																{
																	if(rsrp < -78.5)
																	{
																		if(rsrp < -80)
																			return 24.7104;
																		else
																			return 26.6033;
																	}
																	else
																	{
																		if(cqi < 14.5)
																			return 21.89588;
																		else
																		{
																			if(velocity < 14.35)
																			{
																				if(rsrp < -76.5)
																					return 23.431;
																				else
																					return 22.8199;
																			}
																			else
																				return 25.8377;
																		}
																	}
																}
															}
														}
														else
															return 18.4704;
													}
													else
													{
														if(rsrq < -5.5)
															return 23.4212;
														else
														{
															if(ta < 3.5)
																return 26.4791;
															else
																return 25.1572;
														}
													}
												}
												else
												{
													if(cqi < 14)
													{
														if(cqi < 12.5)
															return 28.8158;
														else
															return 26.6002;
													}
													else
													{
														if(velocity < 12.65)
														{
															if(sinr < 19.5)
																return 23.7125;
															else
																return 24.369;
														}
														else
															return 20.3349439394;
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
										if(rsrp < -82.5)
										{
											if(sinr < 22.5)
											{
												if(sinr < 18.5)
													return 28.0265;
												else
													return 23.9282;
											}
											else
												return 31.4961;
										}
										else
										{
											if(sinr < 26.5)
											{
												if(sinr < 15.5)
													return 18.5854;
												else
												{
													if(sinr < 23.5)
													{
														if(cqi < 10.5)
														{
															if(rsrp < -80.5)
																return 25.1370333333;
															else
																return 23.8521;
														}
														else
														{
															if(velocity < 12.97)
															{
																if(rsrq < -7.5)
																	return 17.4749;
																else
																	return 24.0337666667;
															}
															else
																return 29.3686;
														}
													}
													else
													{
														if(ta < 3)
															return 22.291;
														else
														{
															if(rsrp < -78.5)
															{
																if(ta < 5.5)
																	return 26.8366;
																else
																	return 22.5035;
															}
															else
																return 32.3305;
														}
													}
												}
											}
											else
											{
												if(velocity < 7.325)
												{
													if(rsrq < -7.5)
														return 26.4317;
													else
														return 23.2108;
												}
												else
												{
													if(rsrp < -80)
														return 19.7628;
													else
														return 14.8026;
												}
											}
										}
									}
									else
									{
										if(cqi < 13.5)
										{
											if(sinr < 22.5)
											{
												if(rsrp < -73.5)
												{
													if(velocity < 13.265)
													{
														if(rsrp < -75.5)
															return 25.31755;
														else
															return 26.927;
													}
													else
														return 23.5919;
												}
												else
													return 24.4399;
											}
											else
											{
												if(rsrq < -5.5)
												{
													if(ta < 5)
													{
														if(cell < 27888257.5)
															return 35.0723;
														else
															return 38.3387;
													}
													else
														return 27.2201;
												}
												else
												{
													if(ta < 1.5)
													{
														if(cqi < 6.5)
															return 29.1498;
														else
														{
															if(rsrp < -73)
																return 34.2531;
															else
																return 34.7373;
														}
													}
													else
													{
														if(cell < 27888256.5)
															return 20.507;
														else
														{
															if(rsrp < -75.5)
																return 33.1492;
															else
																return 29.347;
														}
													}
												}
											}
										}
										else
										{
											if(rsrq < -5.5)
											{
												if(cell < 29652225.5)
												{
													if(rsrp < -75.5)
														return 16.9851;
													else
														return 20.3319666667;
												}
												else
												{
													if(rsrp < -74)
														return 23.1288;
													else
														return 30.1003;
												}
											}
											else
											{
												if(velocity < 22.89)
												{
													if(ta < 4)
													{
														if(velocity < 14.265)
															return 28.5375;
														else
															return 27.972;
													}
													else
														return 24.8963;
												}
												else
												{
													if(rsrp < -72)
														return 22.8789;
													else
														return 24.4424;
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
						if(cqi < 2.5)
							return 34.1443;
						else
						{
							if(rsrp < -88.5)
							{
								if(cqi < 13.5)
								{
									if(velocity < 0.495)
									{
										if(rsrq < -5.5)
										{
											if(payload < 9.5)
											{
												if(rsrp < -90.5)
													return 23.3406;
												else
													return 23.9544;
											}
											else
												return 27.8843;
										}
										else
										{
											if(payload < 8)
												return 13.9657;
											else
												return 20.015;
										}
									}
									else
									{
										if(ta < 9.5)
										{
											if(sinr < 16.5)
											{
												if(sinr < 14.5)
													return 21.9445;
												else
												{
													if(sinr < 15.5)
														return 11.787;
													else
														return 16.4567;
												}
											}
											else
											{
												if(rsrq < -5.5)
													return 23.04045;
												else
													return 20.6053;
											}
										}
										else
											return 10.6222;
									}
								}
								else
								{
									if(sinr < 22)
									{
										if(sinr < 20)
											return 14.8423;
										else
											return 15.6643;
									}
									else
										return 17.6913;
								}
							}
							else
							{
								if(sinr < 19.5)
								{
									if(payload < 8.5)
									{
										if(payload < 7.5)
											return 17.4727;
										else
											return 16.3016;
									}
									else
									{
										if(velocity < 9.86)
										{
											if(cqi < 9)
											{
												if(ta < 6)
													return 13.8435;
												else
													return 15.2639;
											}
											else
											{
												if(rsrp < -77)
													return 15.1067;
												else
													return 18.316;
											}
										}
										else
											return 14.2725644562;
									}
								}
								else
								{
									if(payload < 6.5)
										return 11.626;
									else
									{
										if(cell < 27142788)
										{
											if(ta < 2.5)
												return 16.028;
											else
											{
												if(payload < 9.5)
												{
													if(rsrp < -86.5)
													{
														if(payload < 7.5)
															return 18.4453;
														else
															return 16.285;
													}
													else
														return 18.5426333333;
												}
												else
													return 20.1309;
											}
										}
										else
										{
											if(sinr < 27)
											{
												if(sinr < 21)
													return 21.7138;
												else
													return 21.1528311229;
											}
											else
												return 19.3283;
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

float tmobile_dl_tree_3(float payload, float rsrp, float rsrq, float sinr, float cqi, float ta, float velocity, float cell, float f)
{
	if(rsrq < -6.5)
	{
		if(rsrp < -88.5)
		{
			if(f < 1384.95)
			{
				if(f < 912.45)
					return 6.0061243749;
				else
				{
					if(payload < 3)
					{
						if(cell < 30946311)
							return 0.58688375;
						else
						{
							if(rsrp < -94.5)
								return 5.64175;
							else
								return 1.1105796667;
						}
					}
					else
					{
						if(cqi < 6.5)
						{
							if(cell < 28068484)
								return 1.7872481045;
							else
								return 2.3230124444;
						}
						else
						{
							if(rsrp < -92.5)
								return 2.67264;
							else
								return 3.12476;
						}
					}
				}
			}
			else
			{
				if(payload < 3.5)
				{
					if(cell < 27771139.5)
					{
						if(payload < 0.75)
						{
							if(payload < 0.3)
							{
								if(sinr < 0.5)
								{
									if(velocity < 15.06)
										return 0.72464;
									else
										return 1.74673;
								}
								else
								{
									if(ta < 5.5)
									{
										if(rsrp < -91.5)
											return 5.12822;
										else
											return 6.06063;
									}
									else
									{
										if(sinr < 11.5)
										{
											if(sinr < 2.5)
												return 5.06331;
											else
												return 5.61468;
										}
										else
										{
											if(rsrq < -7.5)
											{
												if(f < 2232.5)
													return 4.79044;
												else
													return 3.9409;
											}
											else
											{
												if(velocity < 4.49)
													return 4.1885;
												else
													return 3.4625933333;
											}
										}
									}
								}
							}
							else
							{
								if(sinr < 5.5)
								{
									if(ta < 12)
										return 8.26446;
									else
										return 7.73694;
								}
								else
								{
									if(cqi < 8)
									{
										if(f < 2232.5)
											return 6.64685;
										else
										{
											if(sinr < 8)
												return 4.61894;
											else
												return 4.10678;
										}
									}
									else
									{
										if(sinr < 9.5)
											return 8.63931;
										else
										{
											if(sinr < 11.5)
											{
												if(rsrp < -91.5)
													return 5.28402;
												else
													return 6.26959;
											}
											else
											{
												if(rsrp < -92)
													return 7.87402;
												else
												{
													if(cqi < 12)
														return 7.15564;
													else
														return 6.54664;
												}
											}
										}
									}
								}
							}
						}
						else
						{
							if(rsrq < -9.5)
							{
								if(rsrp < -93)
								{
									if(f < 2232.5)
									{
										if(sinr < -0.5)
											return 4.68124;
										else
										{
											if(rsrq < -10.5)
												return 3.52578;
											else
												return 4.25239;
										}
									}
									else
									{
										if(ta < 5.5)
											return 6.824;
										else
										{
											if(rsrq < -11)
												return 8.36237;
											else
												return 8.95857;
										}
									}
								}
								else
									return 9.38967;
							}
							else
							{
								if(cell < 26378754.5)
								{
									if(payload < 1.5)
									{
										if(sinr < 5)
											return 7.04846;
										else
											return 6.439795;
									}
									else
									{
										if(sinr < 6)
											return 9.271915;
										else
											return 6.94746;
									}
								}
								else
								{
									if(rsrq < -7.5)
									{
										if(payload < 1.5)
											return 15.534;
										else
										{
											if(sinr < 4.5)
												return 8.7146;
											else
											{
												if(sinr < 6.5)
													return 16.9133;
												else
												{
													if(rsrq < -8.5)
														return 14.6879;
													else
														return 12.5523;
												}
											}
										}
									}
									else
									{
										if(sinr < 10.5)
										{
											if(cqi < 9.5)
												return 12.0918166667;
											else
											{
												if(rsrp < -91)
													return 15.9521;
												else
													return 13.4003;
											}
										}
										else
										{
											if(sinr < 26.5)
											{
												if(ta < 5)
												{
													if(cqi < 11.5)
													{
														if(sinr < 20.5)
															return 9.380146;
														else
															return 8.58369;
													}
													else
														return 11.4204;
												}
												else
													return 6.82012;
											}
											else
												return 12.8205;
										}
									}
								}
							}
						}
					}
					else
					{
						if(rsrp < -102.5)
						{
							if(sinr < 4.5)
							{
								if(ta < 13.5)
								{
									if(sinr < -3.5)
									{
										if(velocity < 13.465)
										{
											if(cqi < 5.5)
												return 4.05885;
											else
												return 2.86739;
										}
										else
										{
											if(payload < 1.05)
												return 11.5942;
											else
											{
												if(velocity < 21.97)
													return 4.62963;
												else
													return 6.62069;
											}
										}
									}
									else
									{
										if(rsrq < -12.5)
										{
											if(rsrp < -111)
												return 0.84122;
											else
												return 1.43062;
										}
										else
										{
											if(velocity < 12.86)
											{
												if(cqi < 7.5)
												{
													if(ta < 10)
													{
														if(payload < 0.55)
															return 3.26532;
														else
														{
															if(payload < 2)
																return 2.555165;
															else
																return 2.982685;
														}
													}
													else
														return 0.879894;
												}
												else
													return 0.662252;
											}
											else
											{
												if(rsrq < -8.5)
												{
													if(velocity < 13.565)
														return 6.22084;
													else
													{
														if(ta < 11.5)
														{
															if(payload < 2.5)
																return 3.66176;
															else
															{
																if(velocity < 14.675)
																	return 4.52659;
																else
																	return 5.30152;
															}
														}
														else
															return 5.997;
													}
												}
												else
													return 2.47679;
											}
										}
									}
								}
								else
								{
									if(cqi < 6.5)
									{
										if(rsrp < -105.5)
											return 5.38721;
										else
										{
											if(velocity < 14.92)
												return 2.9399225;
											else
												return 1.72302;
										}
									}
									else
										return 11.2835;
								}
							}
							else
							{
								if(sinr < 8)
								{
									if(velocity < 13.995)
									{
										if(rsrq < -8.5)
											return 11.7474;
										else
											return 12.6917;
									}
									else
									{
										if(cell < 28068482.5)
											return 4.8731;
										else
											return 7.62631;
									}
								}
								else
								{
									if(cqi < 9)
										return 1.45455;
									else
										return 3.89864;
								}
							}
						}
						else
						{
							if(payload < 2.5)
							{
								if(cqi < 13)
								{
									if(velocity < 14.955)
									{
										if(cell < 29394691)
										{
											if(sinr < 7.5)
											{
												if(rsrp < -99.5)
												{
													if(cell < 28881153)
													{
														if(cell < 28365057)
															return 1.91663;
														else
														{
															if(sinr < 5.5)
															{
																if(sinr < 0.5)
																{
																	if(cell < 28369793)
																	{
																		if(velocity < 6.27)
																			return 4.41136;
																		else
																			return 3.35149;
																	}
																	else
																	{
																		if(sinr < -3.5)
																			return 4.67838;
																		else
																			return 6.94746;
																	}
																}
																else
																{
																	if(velocity < 13.44)
																	{
																		if(cqi < 10.5)
																		{
																			if(velocity < 5.68)
																				return 5.02513;
																			else
																				return 4.36445;
																		}
																		else
																			return 2.94985;
																	}
																	else
																		return 2.93041;
																}
															}
															else
															{
																if(cqi < 6.5)
																{
																	if(rsrp < -101)
																		return 4.56361;
																	else
																		return 6.78829;
																}
																else
																	return 9.02935;
															}
														}
													}
													else
														return 8.24745;
												}
												else
												{
													if(rsrq < -11.5)
													{
														if(velocity < 9.105)
														{
															if(cell < 28879745.5)
																return 3.03375;
															else
																return 4.30109;
														}
														else
														{
															if(cqi < 6.5)
																return 3.61337;
															else
																return 8.0402;
														}
													}
													else
													{
														if(ta < 6.5)
														{
															if(sinr < 1.5)
															{
																if(rsrp < -94.5)
																	return 10.6101;
																else
																	return 9.6911;
															}
															else
															{
																if(rsrp < -93.5)
																{
																	if(rsrp < -96)
																		return 8.24317;
																	else
																		return 7.1978666667;
																}
																else
																	return 3.55556;
															}
														}
														else
														{
															if(rsrq < -7.5)
															{
																if(rsrq < -8.5)
																{
																	if(cell < 28879745.5)
																	{
																		if(velocity < 13.24)
																		{
																			if(cell < 28366081.5)
																			{
																				if(rsrq < -10.5)
																					return 7.35632;
																				else
																				{
																					if(rsrq < -9.5)
																					{
																						if(sinr < 2.5)
																							return 3.70372;
																						else
																							return 4.86914;
																					}
																					else
																						return 6.29924;
																				}
																			}
																			else
																			{
																				if(payload < 0.3)
																					return 9.19544;
																				else
																				{
																					if(rsrp < -96)
																					{
																						if(rsrq < -9.5)
																						{
																							if(velocity < 4.115)
																								return 7.70713;
																							else
																								return 7.09849;
																						}
																						else
																							return 6.28437;
																					}
																					else
																						return 7.77454;
																				}
																			}
																		}
																		else
																		{
																			if(cqi < 6.5)
																				return 4.59506;
																			else
																				return 2.11696;
																		}
																	}
																	else
																		return 2.86893;
																}
																else
																{
																	if(cqi < 9.5)
																	{
																		if(sinr < 6.5)
																		{
																			if(payload < 1.5)
																				return 11.7474;
																			else
																				return 8.33768;
																		}
																		else
																			return 8.11359;
																	}
																	else
																	{
																		if(payload < 0.3)
																			return 7.07967;
																		else
																			return 5.73066;
																	}
																}
															}
															else
																return 4.4944;
														}
													}
												}
											}
											else
											{
												if(sinr < 22.5)
												{
													if(ta < 6.5)
													{
														if(velocity < 2.82)
														{
															if(rsrp < -92.5)
																return 6.72269;
															else
																return 8.78156;
														}
														else
														{
															if(payload < 1.5)
															{
																if(cqi < 7)
																{
																	if(rsrq < -8.5)
																		return 2.81294;
																	else
																		return 3.92158;
																}
																else
																{
																	if(cell < 28069506.5)
																		return 6.49351;
																	else
																	{
																		if(sinr < 13.5)
																		{
																			if(velocity < 14.475)
																			{
																				if(rsrq < -7.5)
																					return 6.10149;
																				else
																				{
																					if(rsrp < -94)
																						return 4.21054;
																					else
																					{
																						if(sinr < 10.5)
																							return 4.50808;
																						else
																						{
																							if(cell < 28879105)
																								return 5.08259;
																							else
																								return 6.66669;
																						}
																					}
																				}
																			}
																			else
																				return 2.43754;
																		}
																		else
																			return 8.09717;
																	}
																}
															}
															else
															{
																if(rsrq < -8.5)
																	return 8.22199;
																else
																	return 6.89655;
															}
														}
													}
													else
													{
														if(ta < 9.5)
														{
															if(payload < 0.3)
															{
																if(sinr < 10.5)
																{
																	if(ta < 7.5)
																		return 6.6116;
																	else
																	{
																		if(velocity < 5.58)
																			return 5.29803;
																		else
																			return 5.75661;
																	}
																}
																else
																{
																	if(rsrq < -8.5)
																		return 4.10258;
																	else
																		return 3.12501;
																}
															}
															else
															{
																if(cell < 28369793.5)
																{
																	if(ta < 8.5)
																	{
																		if(rsrp < -98)
																			return 5.5325;
																		else
																		{
																			if(rsrq < -10)
																			{
																				if(cqi < 8.5)
																					return 4.14938;
																				else
																					return 4.75624;
																			}
																			else
																				return 3.045494;
																		}
																	}
																	else
																		return 1.80811;
																}
																else
																	return 1.68634;
															}
														}
														else
														{
															if(sinr < 10)
																return 3.66974;
															else
															{
																if(rsrp < -101)
																	return 8.3682;
																else
																	return 7.72201;
															}
														}
													}
												}
												else
												{
													if(payload < 0.55)
														return 4.27809;
													else
														return 12.8824;
												}
											}
										}
										else
										{
											if(rsrp < -95.5)
											{
												if(sinr < 7)
												{
													if(sinr < 5.5)
													{
														if(ta < 8.5)
														{
															if(rsrp < -99.5)
															{
																if(sinr < 3)
																	return 7.0090833333;
																else
																	return 5.35117;
															}
															else
															{
																if(rsrq < -10.5)
																	return 3.16207;
																else
																	return 5.67378;
															}
														}
														else
														{
															if(rsrq < -11)
																return 7.28597;
															else
																return 8.47458;
														}
													}
													else
														return 10.4167;
												}
												else
												{
													if(rsrq < -8.5)
														return 3.149115;
													else
													{
														if(cell < 29483522)
															return 3.41006;
														else
														{
															if(sinr < 9)
																return 7.75194;
															else
																return 4.78899;
														}
													}
												}
											}
											else
											{
												if(payload < 0.3)
												{
													if(velocity < 6.27)
														return 4.8193;
													else
													{
														if(rsrq < -9.5)
															return 4.46929;
														else
															return 3.43349;
													}
												}
												else
												{
													if(rsrp < -91.5)
													{
														if(rsrq < -9.5)
														{
															if(rsrp < -92.5)
																return 12.4417;
															else
																return 13.5939;
														}
														else
														{
															if(velocity < 9.995)
															{
																if(payload < 0.75)
																{
																	if(cell < 29483522)
																		return 5.18807;
																	else
																		return 6.99301;
																}
																else
																{
																	if(ta < 4.5)
																		return 10.596;
																	else
																	{
																		if(velocity < 4.66)
																		{
																			if(sinr < 24)
																				return 9.87045;
																			else
																				return 8.6627;
																		}
																		else
																			return 8.01603;
																	}
																}
															}
															else
															{
																if(f < 2232.5)
																{
																	if(rsrq < -7.5)
																		return 10.1074;
																	else
																		return 8.98876;
																}
																else
																	return 11.5942;
															}
														}
													}
													else
														return 5.743;
												}
											}
										}
									}
									else
									{
										if(rsrp < -96)
										{
											if(rsrp < -99.5)
											{
												if(cqi < 6.5)
												{
													if(velocity < 24.395)
													{
														if(velocity < 16.78)
															return 4.2187671429;
														else
															return 1.98118;
													}
													else
													{
														if(cqi < 5.5)
															return 4.85437;
														else
															return 5.55556;
													}
												}
												else
												{
													if(cell < 28069507)
														return 6.91742;
													else
													{
														if(rsrq < -7.5)
														{
															if(rsrq < -9)
															{
																if(rsrq < -11)
																	return 4.59772;
																else
																	return 5.09554;
															}
															else
																return 6.72269;
														}
														else
															return 4.30686;
													}
												}
											}
											else
											{
												if(rsrq < -8.5)
												{
													if(sinr < 0)
														return 9.63855;
													else
													{
														if(ta < 27.5)
															return 7.5419966667;
														else
															return 5.64175;
													}
												}
												else
													return 5.22878;
											}
										}
										else
										{
											if(cell < 28368128.5)
											{
												if(rsrp < -93.5)
													return 4.5819;
												else
													return 3.92542;
											}
											else
											{
												if(velocity < 16.285)
												{
													if(rsrp < -91.5)
													{
														if(ta < 5.5)
															return 2.457;
														else
															return 3.13727;
													}
													else
														return 3.38983;
												}
												else
													return 2.02532;
											}
										}
									}
								}
								else
								{
									if(sinr < 11.5)
									{
										if(sinr < 10)
										{
											if(rsrp < -91.5)
												return 7.46269;
											else
												return 8.62069;
										}
										else
										{
											if(rsrp < -91.5)
											{
												if(payload < 1.05)
													return 3.82777;
												else
													return 2.83638;
											}
											else
												return 7.16846;
										}
									}
									else
									{
										if(velocity < 6.39)
										{
											if(rsrp < -89.5)
												return 5.55558;
											else
												return 8.27301;
										}
										else
										{
											if(cell < 29655810)
											{
												if(rsrp < -93)
													return 10.2782;
												else
													return 8.94855;
											}
											else
												return 12.2982;
										}
									}
								}
							}
							else
							{
								if(cqi < 9.5)
								{
									if(rsrp < -99.5)
									{
										if(cqi < 5.5)
											return 15.2575;
										else
										{
											if(cell < 30203137.5)
											{
												if(rsrp < -100.5)
													return 9.85222;
												else
													return 12.0664;
											}
											else
											{
												if(rsrp < -101)
													return 5.63645;
												else
													return 8.35073;
											}
										}
									}
									else
									{
										if(ta < 13)
										{
											if(velocity < 12.59)
											{
												if(rsrq < -11.5)
												{
													if(velocity < 3.075)
														return 11.976;
													else
														return 7.831645;
												}
												else
												{
													if(sinr < 7.5)
													{
														if(cell < 29479936.5)
														{
															if(velocity < 9.62)
															{
																if(velocity < 8.71)
																{
																	if(cqi < 5.5)
																		return 5.75678;
																	else
																	{
																		if(cell < 28368385)
																			return 4.28801;
																		else
																			return 5.02497;
																	}
																}
																else
																	return 3.29625;
															}
															else
																return 6.23701;
														}
														else
															return 8.12733;
													}
													else
													{
														if(cell < 29479937)
														{
															if(velocity < 6.675)
																return 6.77966;
															else
																return 6.30603;
														}
														else
															return 8.17996;
													}
												}
											}
											else
											{
												if(velocity < 14.565)
												{
													if(cell < 28366081.5)
														return 7.76448;
													else
													{
														if(velocity < 13.81)
														{
															if(sinr < 5)
																return 13.4869;
															else
																return 11.0497;
														}
														else
															return 10.8794;
													}
												}
												else
												{
													if(velocity < 15.245)
														return 5.01253;
													else
													{
														if(sinr < 3.5)
															return 6.64452;
														else
														{
															if(rsrq < -8.5)
															{
																if(cqi < 7)
																	return 8.50159;
																else
																	return 7.29483;
															}
															else
																return 11.3314;
														}
													}
												}
											}
										}
										else
										{
											if(velocity < 17.02)
											{
												if(sinr < 3.5)
													return 2.9271;
												else
													return 4.39802;
											}
											else
												return 7.07339;
										}
									}
								}
								else
								{
									if(rsrq < -9.5)
										return 10.5125;
									else
									{
										if(rsrp < -94.5)
										{
											if(cqi < 10.5)
												return 13.0364;
											else
												return 11.0345;
										}
										else
											return 15.2762;
									}
								}
							}
						}
					}
				}
				else
				{
					if(sinr < 7.5)
					{
						if(rsrp < -102.5)
						{
							if(sinr < 2.5)
							{
								if(velocity < 0.46)
								{
									if(payload < 7)
									{
										if(cqi < 4.5)
											return 2.40891;
										else
										{
											if(cqi < 5.5)
												return 11.9653;
											else
											{
												if(ta < 9.5)
												{
													if(rsrp < -108.5)
														return 2.91457;
													else
													{
														if(payload < 5.5)
															return 4.19068;
														else
															return 3.62784;
													}
												}
												else
													return 2.66436;
											}
										}
									}
									else
									{
										if(payload < 9)
											return 13.35;
										else
											return 9.4585;
									}
								}
								else
								{
									if(cqi < 5.5)
									{
										if(payload < 8.5)
										{
											if(velocity < 14.475)
											{
												if(payload < 5.5)
												{
													if(payload < 4.5)
														return 6.01165;
													else
														return 3.53982;
												}
												else
												{
													if(velocity < 3.44)
														return 9.3222;
													else
													{
														if(rsrp < -104)
															return 7.596345;
														else
															return 4.8048;
													}
												}
											}
											else
												return 11.564;
										}
										else
										{
											if(rsrp < -103.5)
												return 10.8401;
											else
												return 13.8169;
										}
									}
									else
									{
										if(ta < 6.5)
										{
											if(sinr < -1.5)
												return 21.9023;
											else
												return 19.025;
										}
										else
										{
											if(sinr < -3.5)
												return 14.4029;
											else
											{
												if(payload < 4.5)
													return 15.7869;
												else
												{
													if(velocity < 22.26)
													{
														if(payload < 5.5)
															return 13.7127;
														else
														{
															if(payload < 9.5)
															{
																if(velocity < 14.78)
																{
																	if(sinr < -2.5)
																		return 11.7917;
																	else
																	{
																		if(payload < 8.5)
																			return 10.4822;
																		else
																			return 9.7035;
																	}
																}
																else
																	return 14.6991;
															}
															else
																return 9.28613;
														}
													}
													else
														return 8.9056833333;
												}
											}
										}
									}
								}
							}
							else
							{
								if(cqi < 4.5)
									return 13.5044;
								else
								{
									if(velocity < 6.495)
									{
										if(velocity < 2.315)
										{
											if(sinr < 5.5)
												return 6.238025;
											else
												return 4.78813;
										}
										else
											return 2.96099;
									}
									else
									{
										if(rsrp < -108.5)
											return 14.218;
										else
										{
											if(payload < 4.5)
											{
												if(cell < 28070147.5)
													return 6.71987;
												else
												{
													if(sinr < 3.5)
														return 5.46728;
													else
														return 4.8960433333;
												}
											}
											else
											{
												if(ta < 6.5)
												{
													if(velocity < 11.945)
													{
														if(cqi < 9)
															return 8.73045;
														else
															return 8.14747;
													}
													else
														return 6.9287166667;
												}
												else
												{
													if(cell < 28366081.5)
													{
														if(velocity < 12.525)
														{
															if(payload < 6)
																return 9.8595;
															else
																return 8.7910366667;
														}
														else
															return 6.92521;
													}
													else
													{
														if(rsrp < -103.5)
															return 11.9092;
														else
															return 11.4188;
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
							if(rsrq < -12.5)
							{
								if(sinr < -1)
								{
									if(rsrp < -99)
									{
										if(rsrp < -101.5)
											return 10.2302;
										else
											return 8.73771;
									}
									else
									{
										if(payload < 8.5)
											return 18.0006;
										else
											return 13.5593;
									}
								}
								else
								{
									if(payload < 6.5)
									{
										if(cqi < 5)
											return 0.759503;
										else
											return 2.6936;
									}
									else
										return 10.5803;
								}
							}
							else
							{
								if(payload < 5.5)
								{
									if(rsrp < -101.5)
									{
										if(ta < 8)
											return 8.97112;
										else
											return 2.22454;
									}
									else
									{
										if(cqi < 4.5)
										{
											if(payload < 4.5)
												return 18.3276;
											else
												return 16.0385;
										}
										else
										{
											if(rsrp < -97.5)
											{
												if(cell < 28366721.5)
												{
													if(rsrq < -9.5)
													{
														if(cell < 28365056.5)
															return 9.87657;
														else
															return 8.93356;
													}
													else
														return 12.5707;
												}
												else
												{
													if(velocity < 12.01)
													{
														if(rsrq < -10)
															return 9.07647;
														else
															return 12.7714;
													}
													else
													{
														if(velocity < 13.18)
															return 2.9848;
														else
															return 5.391565;
													}
												}
											}
											else
											{
												if(cell < 26839172.5)
												{
													if(rsrp < -93.5)
													{
														if(rsrp < -95.5)
															return 5.77201;
														else
															return 7.13171;
													}
													else
														return 9.282085;
												}
												else
												{
													if(velocity < 7.005)
													{
														if(sinr < 4.5)
														{
															if(sinr < -1)
																return 12.3533;
															else
															{
																if(rsrq < -11.5)
																	return 10.7066;
																else
																	return 11.32345;
															}
														}
														else
														{
															if(ta < 6)
															{
																if(rsrp < -93.5)
																	return 8.85445;
																else
																	return 7.68197;
															}
															else
															{
																if(rsrq < -11)
																	return 10.2669;
																else
																	return 11.4123;
															}
														}
													}
													else
													{
														if(cqi < 12.5)
														{
															if(cqi < 5.5)
																return 15.7869;
															else
															{
																if(velocity < 32.71)
																{
																	if(payload < 4.5)
																	{
																		if(rsrp < -92.5)
																		{
																			if(cell < 29394690.5)
																			{
																				if(rsrp < -96.5)
																					return 14.2096;
																				else
																					return 16.1903;
																			}
																			else
																				return 11.8125;
																		}
																		else
																		{
																			if(ta < 6)
																				return 13.2404;
																			else
																				return 10.0313;
																		}
																	}
																	else
																	{
																		if(sinr < 6.5)
																		{
																			if(velocity < 24.195)
																			{
																				if(rsrp < -92.5)
																				{
																					if(cqi < 8.5)
																						return 11.3026;
																					else
																					{
																						if(rsrp < -95)
																							return 12.7796;
																						else
																							return 12.2026;
																					}
																				}
																				else
																				{
																					if(sinr < 1.5)
																						return 17.0648;
																					else
																						return 12.8246;
																				}
																			}
																			else
																				return 10.5904;
																		}
																		else
																		{
																			if(ta < 6)
																				return 7.98403;
																			else
																				return 10.3896;
																		}
																	}
																}
																else
																	return 16.7926;
															}
														}
														else
															return 5.42152;
													}
												}
											}
										}
									}
								}
								else
								{
									if(ta < 20.5)
									{
										if(cqi < 12.5)
										{
											if(rsrp < -90.5)
											{
												if(velocity < 34.465)
												{
													if(sinr < -1.5)
													{
														if(velocity < 15.08)
														{
															if(velocity < 9.745)
															{
																if(velocity < 7.955)
																{
																	if(payload < 6.5)
																		return 8.80896;
																	else
																	{
																		if(cqi < 5)
																			return 14.6333;
																		else
																			return 12.557;
																	}
																}
																else
																	return 15.3895;
															}
															else
															{
																if(cqi < 5.5)
																	return 8.92558;
																else
																{
																	if(rsrp < -98.5)
																		return 6.53862;
																	else
																		return 10.6048;
																}
															}
														}
														else
														{
															if(payload < 9)
															{
																if(rsrp < -94)
																	return 15.4989;
																else
																	return 14.395;
															}
															else
																return 17.5362;
														}
													}
													else
													{
														if(cqi < 4.5)
														{
															if(ta < 7.5)
															{
																if(velocity < 16.25)
																	return 10.44615;
																else
																	return 12.2431;
															}
															else
															{
																if(rsrp < -97.5)
																	return 18.8998;
																else
																	return 16.2053;
															}
														}
														else
														{
															if(rsrq < -8.5)
															{
																if(cell < 26381954)
																{
																	if(cell < 26377602.5)
																		return 15.1;
																	else
																	{
																		if(payload < 7)
																			return 9.19012;
																		else
																			return 11.9993625;
																	}
																}
																else
																{
																	if(velocity < 12.095)
																	{
																		if(rsrp < -91.5)
																		{
																			if(velocity < 10.28)
																			{
																				if(cell < 28367105.5)
																				{
																					if(velocity < 7.375)
																					{
																						if(ta < 9)
																						{
																							if(rsrp < -93.5)
																								return 12.7250666667;
																							else
																							{
																								if(sinr < 1.5)
																									return 15.9257;
																								else
																									return 17.208;
																							}
																						}
																						else
																							return 17.9545;
																					}
																					else
																					{
																						if(rsrp < -97.5)
																							return 20.5011;
																						else
																						{
																							if(sinr < 4.5)
																								return 17.9143;
																							else
																								return 18.4672;
																						}
																					}
																				}
																				else
																				{
																					if(velocity < 9.2)
																					{
																						if(cell < 28879746)
																						{
																							if(sinr < 1.5)
																							{
																								if(rsrq < -11)
																									return 19.7897;
																								else
																									return 22.2134;
																							}
																							else
																							{
																								if(cqi < 5.5)
																								{
																									if(rsrq < -10.5)
																										return 16.5387;
																									else
																										return 19.3295;
																								}
																								else
																								{
																									if(cell < 28368385)
																									{
																										if(rsrp < -100)
																											return 11.10376;
																										else
																											return 13.39815;
																									}
																									else
																										return 14.3982;
																								}
																							}
																						}
																						else
																						{
																							if(rsrq < -11)
																								return 11.8694;
																							else
																							{
																								if(rsrp < -93.5)
																									return 13.3907;
																								else
																									return 14.716;
																							}
																						}
																					}
																					else
																					{
																						if(cqi < 6)
																							return 11.2407;
																						else
																							return 9.46634;
																					}
																				}
																			}
																			else
																			{
																				if(rsrp < -96.5)
																					return 9.19423;
																				else
																					return 10.8027;
																			}
																		}
																		else
																			return 20.3859;
																	}
																	else
																	{
																		if(cell < 28367745)
																		{
																			if(sinr < 4)
																			{
																				if(rsrp < -98)
																				{
																					if(payload < 7)
																						return 9.78394;
																					else
																						return 6.93016;
																				}
																				else
																				{
																					if(rsrq < -9.5)
																					{
																						if(velocity < 14.045)
																							return 11.7699;
																						else
																							return 12.4902;
																					}
																					else
																						return 13.2286;
																				}
																			}
																			else
																			{
																				if(rsrp < -96)
																					return 18.5346;
																				else
																					return 19.8388;
																			}
																		}
																		else
																		{
																			if(velocity < 14.415)
																			{
																				if(cqi < 8.5)
																				{
																					if(rsrp < -95.5)
																					{
																						if(rsrq < -9.5)
																						{
																							if(velocity < 13.465)
																							{
																								if(velocity < 12.325)
																									return 21.156;
																								else
																									return 22.08814;
																							}
																							else
																							{
																								if(rsrq < -11)
																									return 19.656;
																								else
																									return 14.2096;
																							}
																						}
																						else
																							return 24.5291;
																					}
																					else
																						return 10.9364;
																				}
																				else
																					return 10.3627;
																			}
																			else
																			{
																				if(rsrq < -10.5)
																				{
																					if(rsrp < -97.5)
																						return 10.3981;
																					else
																						return 14.6329;
																				}
																				else
																				{
																					if(velocity < 14.735)
																					{
																						if(rsrp < -99.5)
																							return 10.6054;
																						else
																							return 15.5491;
																					}
																					else
																					{
																						if(velocity < 17.6)
																						{
																							if(rsrp < -97.5)
																							{
																								if(cqi < 5.5)
																									return 17.5889;
																								else
																									return 18.3533;
																							}
																							else
																								return 20.6879;
																						}
																						else
																						{
																							if(rsrp < -100.5)
																								return 19.3353;
																							else
																							{
																								if(payload < 8)
																									return 14.7407;
																								else
																									return 14.079;
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
																if(ta < 7.5)
																{
																	if(sinr < 2)
																		return 9.73744;
																	else
																	{
																		if(payload < 8.5)
																		{
																			if(rsrq < -7.5)
																				return 9.47306;
																			else
																				return 21.6383;
																		}
																		else
																		{
																			if(cell < 28069506.5)
																				return 26.3852;
																			else
																			{
																				if(ta < 6)
																					return 20.2817;
																				else
																					return 21.2515;
																			}
																		}
																	}
																}
																else
																{
																	if(cqi < 10)
																	{
																		if(cqi < 6.5)
																		{
																			if(payload < 7.5)
																				return 11.0701;
																			else
																			{
																				if(rsrp < -94)
																					return 16.6359;
																				else
																					return 14.48835;
																			}
																		}
																		else
																		{
																			if(sinr < 1.5)
																				return 14.7874;
																			else
																			{
																				if(velocity < 7.015)
																					return 4.54361;
																				else
																				{
																					if(rsrq < -7.5)
																						return 10.5789;
																					else
																						return 9.62811;
																				}
																			}
																		}
																	}
																	else
																	{
																		if(rsrp < -94.5)
																		{
																			if(ta < 9.5)
																				return 14.0421;
																			else
																				return 16.7155;
																		}
																		else
																			return 10.5657;
																	}
																}
															}
														}
													}
												}
												else
													return 7.3791;
											}
											else
											{
												if(sinr < 6.5)
												{
													if(velocity < 1.665)
														return 13.124;
													else
													{
														if(payload < 8.5)
														{
															if(rsrq < -8.5)
																return 17.5103;
															else
															{
																if(cqi < 9)
																	return 19.042;
																else
																	return 18.3908;
															}
														}
														else
														{
															if(sinr < 3)
																return 20.7433;
															else
															{
																if(velocity < 10.13)
																	return 20.9974;
																else
																	return 19.319;
															}
														}
													}
												}
												else
												{
													if(payload < 6.5)
														return 10.3986;
													else
													{
														if(velocity < 13.76)
															return 15.3876;
														else
															return 16.157;
													}
												}
											}
										}
										else
										{
											if(cell < 28881667)
											{
												if(rsrq < -7.5)
													return 22.7596;
												else
													return 21.7746;
											}
											else
												return 21.2485;
										}
									}
									else
									{
										if(ta < 24)
											return 5.08008;
										else
										{
											if(cqi < 8)
											{
												if(payload < 8)
													return 8.69723;
												else
													return 10.75994;
											}
											else
												return 14.4274;
										}
									}
								}
							}
						}
					}
					else
					{
						if(cell < 27771524)
						{
							if(sinr < 14)
							{
								if(velocity < 16.215)
								{
									if(sinr < 8.5)
									{
										if(ta < 4)
											return 24.3013;
										else
											return 17.2105;
									}
									else
									{
										if(velocity < 12.345)
										{
											if(sinr < 12.5)
											{
												if(velocity < 4.85)
												{
													if(rsrq < -7.5)
														return 12.088075;
													else
														return 16.4103;
												}
												else
												{
													if(ta < 4.5)
														return 17.03696;
													else
														return 15.7295;
												}
											}
											else
											{
												if(payload < 7.5)
													return 19.2405;
												else
													return 18.7518;
											}
										}
										else
										{
											if(cell < 26378884)
											{
												if(velocity < 13.625)
													return 11.7561;
												else
												{
													if(velocity < 14.61)
														return 19.9154;
													else
													{
														if(rsrp < -93.5)
															return 14.8148;
														else
															return 16.0401;
													}
												}
											}
											else
											{
												if(payload < 7.5)
													return 12.4527;
												else
													return 10.0016;
											}
										}
									}
								}
								else
								{
									if(cqi < 11.5)
									{
										if(payload < 8.5)
											return 19.5804;
										else
											return 16.8705;
									}
									else
										return 23.6949;
								}
							}
							else
							{
								if(sinr < 24.5)
								{
									if(rsrq < -8.5)
									{
										if(payload < 7.5)
											return 20.0401;
										else
											return 17.9735;
									}
									else
									{
										if(cqi < 6.5)
											return 18.9798;
										else
											return 24.4150666667;
									}
								}
								else
								{
									if(ta < 4.5)
										return 15.273;
									else
										return 16.5338;
								}
							}
						}
						else
						{
							if(ta < 2.5)
							{
								if(velocity < 14.73)
								{
									if(velocity < 13.38)
									{
										if(rsrp < -90.5)
										{
											if(rsrp < -100)
												return 8.55432;
											else
												return 9.35126;
										}
										else
											return 10.4918;
									}
									else
									{
										if(cqi < 8.5)
											return 14.9841;
										else
											return 12.6183;
									}
								}
								else
								{
									if(velocity < 23.45)
										return 9.44634;
									else
									{
										if(rsrp < -94.5)
											return 6.04595;
										else
											return 7.50469;
									}
								}
							}
							else
							{
								if(payload < 9.5)
								{
									if(rsrq < -8.5)
									{
										if(velocity < 13.38)
										{
											if(payload < 8.5)
											{
												if(rsrp < -99.5)
												{
													if(payload < 7.5)
													{
														if(rsrq < -9.5)
															return 17.4021;
														else
														{
															if(cqi < 10)
																return 15.7947;
															else
																return 14.8754;
														}
													}
													else
														return 20.5392;
												}
												else
												{
													if(sinr < 23)
													{
														if(ta < 7.5)
														{
															if(velocity < 12.145)
															{
																if(ta < 4.5)
																{
																	if(sinr < 12.5)
																	{
																		if(cqi < 8)
																			return 12.3839;
																		else
																			return 13.0263;
																	}
																	else
																	{
																		if(velocity < 5.075)
																			return 15.0489;
																		else
																			return 14.0647;
																	}
																}
																else
																{
																	if(cqi < 8.5)
																		return 15.5890666667;
																	else
																	{
																		if(cqi < 9.5)
																			return 14.1593;
																		else
																		{
																			if(rsrq < -9.5)
																				return 14.3062;
																			else
																				return 13.1579;
																		}
																	}
																}
															}
															else
																return 12.9116;
														}
														else
														{
															if(velocity < 9.43)
															{
																if(payload < 5.5)
																{
																	if(rsrp < -90.5)
																		return 8.79507;
																	else
																		return 11.295225;
																}
																else
																{
																	if(ta < 8.5)
																	{
																		if(cqi < 6.5)
																			return 18.1956;
																		else
																		{
																			if(rsrp < -92)
																				return 13.6685;
																			else
																			{
																				if(rsrq < -10.5)
																					return 9.89283;
																				else
																					return 12.2856;
																			}
																		}
																	}
																	else
																		return 11.6491;
																}
															}
															else
															{
																if(velocity < 12.52)
																	return 17.288;
																else
																	return 14.3756;
															}
														}
													}
													else
													{
														if(payload < 4.5)
															return 10.356;
														else
															return 11.2391;
													}
												}
											}
											else
											{
												if(cqi < 8.5)
												{
													if(rsrq < -9.5)
														return 11.4105;
													else
														return 20.1342;
												}
												else
													return 6.04483;
											}
										}
										else
										{
											if(sinr < 10.5)
											{
												if(cqi < 7)
													return 5.35885;
												else
													return 8.82258;
											}
											else
											{
												if(velocity < 16.3)
												{
													if(cell < 28969984)
														return 12.7226;
													else
														return 11.0531;
												}
												else
													return 14.4372;
											}
										}
									}
									else
									{
										if(cell < 32404480.5)
										{
											if(velocity < 21.125)
											{
												if(payload < 5.5)
												{
													if(cell < 29394691)
													{
														if(sinr < 27)
														{
															if(sinr < 12)
															{
																if(ta < 5.5)
																	return 15.6403;
																else
																{
																	if(payload < 4.5)
																		return 11.8299;
																	else
																	{
																		if(ta < 7.5)
																			return 12.551;
																		else
																		{
																			if(rsrq < -7.5)
																				return 15.3374;
																			else
																				return 12.5078;
																		}
																	}
																}
															}
															else
															{
																if(cell < 29391105.5)
																{
																	if(sinr < 24)
																	{
																		if(ta < 8)
																			return 9.95435;
																		else
																			return 7.72574;
																	}
																	else
																		return 6.30045;
																}
																else
																	return 11.2076;
															}
														}
														else
														{
															if(payload < 4.5)
																return 15.748;
															else
																return 14.9589;
														}
													}
													else
														return 13.3241;
												}
												else
												{
													if(velocity < 8.37)
													{
														if(cqi < 6.5)
														{
															if(rsrp < -91.5)
															{
																if(payload < 8)
																	return 20.6034;
																else
																	return 10.0587;
															}
															else
																return 21.5827;
														}
														else
														{
															if(cqi < 7.5)
																return 8.75593;
															else
															{
																if(sinr < 13)
																{
																	if(ta < 5.5)
																		return 9.89895;
																	else
																	{
																		if(cqi < 10.5)
																		{
																			if(ta < 10)
																			{
																				if(rsrq < -7.5)
																					return 11.0497;
																				else
																					return 11.7188;
																			}
																			else
																				return 13.1765;
																		}
																		else
																		{
																			if(rsrq < -7.5)
																				return 12.1243;
																			else
																				return 16.6623;
																		}
																	}
																}
																else
																{
																	if(sinr < 24.5)
																	{
																		if(cqi < 8.5)
																			return 18.3346;
																		else
																		{
																			if(rsrq < -7.5)
																				return 14.7874;
																			else
																				return 15.7702;
																		}
																	}
																	else
																		return 11.3457;
																}
															}
														}
													}
													else
													{
														if(rsrp < -91.5)
														{
															if(cell < 28367744.5)
															{
																if(cqi < 13.5)
																{
																	if(sinr < 17.5)
																	{
																		if(sinr < 8.5)
																			return 13.3779;
																		else
																		{
																			if(sinr < 11)
																				return 16.5975;
																			else
																				return 15.9046;
																		}
																	}
																	else
																		return 10.3997;
																}
																else
																	return 22.606;
															}
															else
															{
																if(rsrp < -96.5)
																	return 16.4215;
																else
																{
																	if(ta < 9.5)
																	{
																		if(payload < 8.5)
																		{
																			if(payload < 6.5)
																			{
																				if(rsrp < -94.5)
																					return 20.3562;
																				else
																					return 21.4957;
																			}
																			else
																			{
																				if(cell < 28369794)
																					return 23.4451;
																				else
																					return 21.374;
																			}
																		}
																		else
																			return 19.3913;
																	}
																	else
																		return 19.6147;
																}
															}
														}
														else
														{
															if(velocity < 12.59)
															{
																if(sinr < 12.5)
																{
																	if(payload < 8)
																		return 19.3504;
																	else
																		return 18.2417;
																}
																else
																	return 23.968;
															}
															else
															{
																if(rsrq < -7.5)
																{
																	if(rsrp < -90.5)
																		return 14.6401;
																	else
																		return 17.9775;
																}
																else
																{
																	if(ta < 3.5)
																	{
																		if(velocity < 13.025)
																			return 13.5008;
																		else
																			return 11.179;
																	}
																	else
																	{
																		if(payload < 6.5)
																			return 16.4666;
																		else
																			return 13.8648;
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
													return 8.44996;
												else
													return 14.8148;
											}
										}
										else
											return 22.6354;
									}
								}
								else
								{
									if(cell < 30425088.5)
									{
										if(rsrp < -94.5)
										{
											if(velocity < 8.3)
											{
												if(rsrq < -8)
													return 16.3499;
												else
													return 11.5523;
											}
											else
											{
												if(rsrq < -7.5)
												{
													if(rsrp < -98.5)
														return 19.98;
													else
													{
														if(cqi < 9.5)
															return 23.4398;
														else
															return 22.1852;
													}
												}
												else
													return 18.0099;
											}
										}
										else
										{
											if(velocity < 9.51)
											{
												if(cqi < 7.5)
													return 25.8398;
												else
													return 18.1118;
											}
											else
											{
												if(velocity < 14.415)
												{
													if(ta < 7.5)
														return 26.3255;
													else
														return 27.4254;
												}
												else
													return 23.76;
											}
										}
									}
									else
										return 10.7643;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			if(payload < 2.5)
			{
				if(payload < 0.3)
				{
					if(rsrp < -87.5)
						return 8.08084;
					else
					{
						if(sinr < 16.5)
						{
							if(rsrp < -79.5)
							{
								if(sinr < 8.5)
								{
									if(cell < 29652225.5)
										return 5.39683;
									else
										return 4.21054;
								}
								else
								{
									if(cell < 28068097.5)
									{
										if(ta < 7.5)
											return 4.31422;
										else
											return 4.8291466667;
									}
									else
										return 3.52424;
								}
							}
							else
							{
								if(rsrp < -77.5)
									return 3.31951;
								else
									return 3.86475;
							}
						}
						else
						{
							if(cqi < 4)
								return 7.61908;
							else
							{
								if(ta < 2)
									return 6.72271;
								else
								{
									if(ta < 4)
										return 3.03031;
									else
									{
										if(cqi < 8)
											return 3.33335;
										else
										{
											if(cqi < 10.5)
												return 6.15387;
											else
											{
												if(rsrq < -7.5)
													return 5.28884;
												else
													return 4.6243;
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
					if(velocity < 11.715)
					{
						if(cqi < 7.5)
						{
							if(ta < 5)
							{
								if(cell < 26587523)
									return 10.102325;
								else
									return 8.80088;
							}
							else
							{
								if(rsrq < -7.5)
									return 7.21371;
								else
								{
									if(rsrp < -85.5)
										return 9.78593;
									else
										return 8.63931;
								}
							}
						}
						else
						{
							if(payload < 1.5)
							{
								if(velocity < 7.875)
								{
									if(ta < 3.5)
									{
										if(sinr < 19)
											return 5.35596;
										else
											return 5.94354;
									}
									else
									{
										if(sinr < 21)
											return 6.2729566667;
										else
										{
											if(rsrp < -81)
												return 7.31261;
											else
												return 8.16327;
										}
									}
								}
								else
								{
									if(velocity < 10.51)
									{
										if(rsrp < -79)
										{
											if(cqi < 11.5)
												return 8.0001366667;
											else
												return 8.61141;
										}
										else
											return 7.16846;
									}
									else
										return 6.2606266667;
								}
							}
							else
							{
								if(rsrp < -84.5)
								{
									if(sinr < 15)
										return 7.16846;
									else
										return 9.00394;
								}
								else
								{
									if(rsrp < -81)
										return 8.90373;
									else
										return 10.3761;
								}
							}
						}
					}
					else
					{
						if(cqi < 13.5)
						{
							if(rsrq < -16.5)
								return 0.472283;
							else
							{
								if(ta < 4.5)
								{
									if(cell < 29652225.5)
									{
										if(sinr < 17.5)
										{
											if(sinr < 16)
											{
												if(cqi < 10.5)
												{
													if(payload < 1.5)
													{
														if(cqi < 8)
															return 9.1954;
														else
															return 10.4575;
													}
													else
													{
														if(cqi < 7)
															return 13.8408;
														else
															return 11.8519;
													}
												}
												else
												{
													if(ta < 3.5)
													{
														if(rsrq < -7.5)
															return 15.2964;
														else
															return 13.51385;
													}
													else
														return 15.534;
												}
											}
											else
												return 18.7354;
										}
										else
										{
											if(rsrp < -75)
											{
												if(rsrp < -82.5)
													return 14.4928;
												else
													return 11.7994;
											}
											else
												return 9.38967;
										}
									}
									else
									{
										if(velocity < 13.525)
										{
											if(velocity < 12.565)
												return 8.63931;
											else
												return 9.41176;
										}
										else
											return 6.08828;
									}
								}
								else
								{
									if(rsrq < -8.5)
									{
										if(cqi < 12)
										{
											if(payload < 0.75)
												return 11.3636;
											else
											{
												if(cqi < 10)
												{
													if(cqi < 8.5)
														return 8.7178733333;
													else
														return 10.0376;
												}
												else
													return 7.17811;
											}
										}
										else
											return 12.6183;
									}
									else
									{
										if(ta < 7)
											return 5.45703;
										else
										{
											if(ta < 13)
											{
												if(velocity < 14.01)
													return 4.62963;
												else
													return 9.41176;
											}
											else
												return 7.11744;
										}
									}
								}
							}
						}
						else
						{
							if(rsrq < -7.5)
							{
								if(rsrp < -83)
								{
									if(payload < 0.75)
										return 6.37959;
									else
										return 7.61905;
								}
								else
									return 15.0659;
							}
							else
							{
								if(rsrp < -87)
									return 8.24742;
								else
								{
									if(cell < 27771395)
										return 5.8665066667;
									else
									{
										if(sinr < 14.5)
											return 5.75954;
										else
											return 6.936225;
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
					if(cqi < 11.5)
					{
						if(cell < 31548161)
						{
							if(payload < 6)
							{
								if(velocity < 6.7)
									return 2.72712;
								else
									return 7.62195;
							}
							else
							{
								if(cell < 28067972.5)
									return 8.56531;
								else
								{
									if(rsrp < -87)
										return 11.8468;
									else
										return 12.4883;
								}
							}
						}
						else
							return 1.528795;
					}
					else
						return 20.8424;
				}
				else
				{
					if(sinr < 10.5)
					{
						if(cell < 33527553)
						{
							if(ta < 12)
							{
								if(velocity < 10.73)
								{
									if(payload < 4.5)
									{
										if(cqi < 10)
										{
											if(cell < 26378754.5)
											{
												if(velocity < 7.82)
													return 11.2202;
												else
													return 12.766;
											}
											else
											{
												if(rsrp < -85)
												{
													if(sinr < 5)
														return 8.86918;
													else
													{
														if(cell < 27833219)
														{
															if(rsrp < -87.5)
																return 9.70285;
															else
																return 11.02625;
														}
														else
															return 8.93189;
													}
												}
												else
													return 11.1008;
											}
										}
										else
										{
											if(cqi < 14.5)
											{
												if(cqi < 13)
												{
													if(rsrp < -78.5)
														return 14.4209;
													else
														return 15.2381;
												}
												else
													return 13.3407;
											}
											else
												return 10.5727;
										}
									}
									else
									{
										if(rsrp < -77)
										{
											if(payload < 9.5)
											{
												if(rsrq < -7.5)
													return 15.1937;
												else
												{
													if(velocity < 3.625)
														return 17.7866;
													else
														return 18.3119;
												}
											}
											else
												return 19.8758;
										}
										else
										{
											if(payload < 6.5)
												return 14.7874;
											else
												return 14.1875;
										}
									}
								}
								else
								{
									if(velocity < 13.21)
									{
										if(rsrp < -80)
										{
											if(rsrp < -82.5)
											{
												if(rsrp < -87.5)
													return 23.1348;
												else
												{
													if(velocity < 11.455)
														return 23.6887;
													else
													{
														if(payload < 8.5)
															return 24.4648;
														else
															return 24.9221;
													}
												}
											}
											else
												return 20.5523;
										}
										else
										{
											if(sinr < 9)
												return 18.1887;
											else
												return 15.9402;
										}
									}
									else
									{
										if(sinr < 5.5)
										{
											if(payload < 4.5)
											{
												if(sinr < 2.5)
												{
													if(rsrp < -84.5)
														return 7.01344;
													else
														return 10.0503;
												}
												else
												{
													if(rsrq < -7.5)
														return 13.6596;
													else
														return 12.8462;
												}
											}
											else
											{
												if(cell < 28365056.5)
												{
													if(velocity < 14.14)
													{
														if(rsrp < -81.5)
															return 20.8213;
														else
															return 18.8679;
													}
													else
													{
														if(ta < 6)
															return 18.2899;
														else
														{
															if(payload < 6.5)
																return 14.5366;
															else
																return 13.858;
														}
													}
												}
												else
												{
													if(payload < 8.5)
														return 12.0755;
													else
													{
														if(rsrp < -85.5)
															return 15.0849;
														else
															return 13.4479;
													}
												}
											}
										}
										else
										{
											if(f < 2232.5)
											{
												if(payload < 7.5)
												{
													if(payload < 4.5)
														return 16.1074;
													else
													{
														if(cqi < 12.5)
															return 18.9189;
														else
															return 19.7287;
													}
												}
												else
												{
													if(rsrp < -82.5)
														return 20.8682;
													else
														return 23.5814;
												}
											}
											else
												return 10.9825;
										}
									}
								}
							}
							else
							{
								if(ta < 18.5)
								{
									if(ta < 14.5)
									{
										if(payload < 7.5)
											return 22.2664;
										else
											return 24.5587;
									}
									else
									{
										if(sinr < 9)
										{
											if(payload < 7)
												return 18.6989;
											else
												return 18.1098;
										}
										else
											return 20.4487;
									}
								}
								else
								{
									if(rsrp < -86)
										return 15.6709;
									else
									{
										if(ta < 23)
										{
											if(rsrp < -84.5)
												return 8.94604;
											else
												return 13.8217;
										}
										else
											return 7.47175;
									}
								}
							}
						}
						else
							return 33.8266;
					}
					else
					{
						if(payload < 5.5)
						{
							if(cell < 26590850.5)
							{
								if(ta < 6.5)
								{
									if(cqi < 11.5)
									{
										if(cqi < 10.5)
										{
											if(sinr < 20.5)
												return 18.9036;
											else
												return 20.2532;
										}
										else
											return 22.409;
									}
									else
									{
										if(velocity < 9.155)
										{
											if(sinr < 15)
											{
												if(sinr < 13.5)
													return 15.949;
												else
													return 18.0424;
											}
											else
												return 15.5844;
										}
										else
											return 12.8963;
									}
								}
								else
								{
									if(cqi < 12.5)
									{
										if(sinr < 24)
											return 12.8548;
										else
											return 15.8311;
									}
									else
										return 11.846;
								}
							}
							else
							{
								if(sinr < 16.5)
								{
									if(ta < 2.5)
									{
										if(rsrp < -82.5)
											return 18.0485;
										else
											return 16.1834;
									}
									else
									{
										if(cqi < 8)
											return 14.9161;
										else
										{
											if(rsrq < -7.5)
											{
												if(rsrq < -9)
													return 12.7755;
												else
												{
													if(cqi < 12.5)
														return 8.04222;
													else
														return 10.0219;
												}
											}
											else
											{
												if(cqi < 13.5)
												{
													if(rsrp < -84.5)
														return 12.8991;
													else
														return 12.2982;
												}
												else
													return 15.1688;
											}
										}
									}
								}
								else
								{
									if(sinr < 17.5)
										return 23.845;
									else
									{
										if(velocity < 14.35)
										{
											if(payload < 3.5)
											{
												if(cell < 29913345)
												{
													if(ta < 4)
														return 13.3779;
													else
													{
														if(rsrp < -85)
															return 13.4831;
														else
															return 15.3159;
													}
												}
												else
													return 9.89691;
											}
											else
											{
												if(sinr < 20.5)
												{
													if(cqi < 11)
														return 16.0772;
													else
														return 13.8648;
												}
												else
												{
													if(rsrq < -8.5)
														return 22.9391;
													else
													{
														if(velocity < 2.21)
														{
															if(sinr < 34.5)
															{
																if(cqi < 11.5)
																	return 19.1388;
																else
																{
																	if(payload < 4.5)
																		return 17.288;
																	else
																		return 17.9856;
																}
															}
															else
																return 16.016;
														}
														else
															return 15.306375;
													}
												}
											}
										}
										else
										{
											if(payload < 3.5)
											{
												if(rsrp < -83)
												{
													if(rsrp < -86)
														return 15.8311;
													else
														return 13.5823;
												}
												else
													return 21.4095;
											}
											else
											{
												if(velocity < 16.245)
													return 9.418815;
												else
												{
													if(velocity < 25.24)
														return 13.97628;
													else
													{
														if(rsrq < -7.5)
															return 12.1488;
														else
															return 11.5942;
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
							if(cell < 29479936.5)
							{
								if(f < 1384.95)
								{
									if(velocity < 20.485)
										return 17.1674;
									else
									{
										if(rsrp < -82.5)
											return 4.54933;
										else
										{
											if(sinr < 15)
												return 11.201;
											else
												return 10.5298;
										}
									}
								}
								else
								{
									if(velocity < 11.765)
									{
										if(sinr < 29)
										{
											if(payload < 6.5)
											{
												if(rsrp < -81.5)
												{
													if(cqi < 9.5)
														return 16.609;
													else
													{
														if(rsrp < -83.5)
															return 11.8343;
														else
															return 13.2159;
													}
												}
												else
												{
													if(cqi < 12.5)
														return 16.2107;
													else
														return 17.192;
												}
											}
											else
											{
												if(cqi < 14)
												{
													if(sinr < 14.5)
													{
														if(rsrq < -8)
														{
															if(rsrp < -82)
																return 23.0695;
															else
																return 21.9378;
														}
														else
														{
															if(payload < 9)
																return 18.1303;
															else
																return 20.4186;
														}
													}
													else
													{
														if(cell < 28093698)
														{
															if(payload < 9.5)
															{
																if(velocity < 6.595)
																{
																	if(rsrp < -87.5)
																		return 15.0943;
																	else
																		return 16.36232;
																}
																else
																{
																	if(rsrp < -86.5)
																		return 16.285;
																	else
																	{
																		if(sinr < 23.5)
																			return 18.5426333333;
																		else
																			return 16.028;
																	}
																}
															}
															else
															{
																if(cell < 26378626)
																	return 17.9252;
																else
																	return 20.1309;
															}
														}
														else
															return 21.18;
													}
												}
												else
													return 22.5352;
											}
										}
										else
											return 24.4379;
									}
									else
									{
										if(cell < 26590850.5)
										{
											if(payload < 7)
											{
												if(cqi < 9)
													return 31.746;
												else
													return 33.264;
											}
											else
											{
												if(velocity < 14.09)
												{
													if(ta < 5.5)
													{
														if(cqi < 11.5)
														{
															if(rsrq < -8)
																return 21.5375;
															else
																return 20.276;
														}
														else
														{
															if(cqi < 12.5)
																return 25.3431;
															else
																return 23.2305;
														}
													}
													else
													{
														if(ta < 6.5)
															return 19.2123;
														else
															return 16.7715;
													}
												}
												else
													return 29.0381;
											}
										}
										else
										{
											if(sinr < 23)
											{
												if(cell < 27771012)
												{
													if(velocity < 31.905)
													{
														if(velocity < 13.465)
														{
															if(rsrp < -76)
																return 20.7093;
															else
																return 14.4014;
														}
														else
															return 21.41185;
													}
													else
														return 14.2349;
												}
												else
												{
													if(ta < 12.5)
													{
														if(rsrp < -87.5)
															return 16.4046;
														else
														{
															if(payload < 9.5)
															{
																if(payload < 7)
																	return 29.7398;
																else
																{
																	if(cqi < 8.5)
																		return 31.1419;
																	else
																	{
																		if(velocity < 19.43)
																			return 26.8908;
																		else
																		{
																			if(payload < 8.5)
																				return 24.3624;
																			else
																				return 25.1309;
																		}
																	}
																}
															}
															else
															{
																if(rsrq < -7.5)
																	return 22.8115;
																else
																	return 22.2531;
															}
														}
													}
													else
													{
														if(payload < 6.5)
															return 13.3333;
														else
														{
															if(rsrq < -8)
																return 21.172;
															else
																return 22.2469;
														}
													}
												}
											}
											else
											{
												if(cqi < 14.5)
												{
													if(rsrp < -80)
													{
														if(cell < 28071171)
															return 16.0562;
														else
														{
															if(ta < 3)
																return 16.7539;
															else
															{
																if(rsrp < -85.5)
																	return 20.3218;
																else
																	return 19.3783;
															}
														}
													}
													else
														return 26.6667;
												}
												else
													return 13.6402;
											}
										}
									}
								}
							}
							else
							{
								if(rsrq < -8.5)
								{
									if(payload < 8.5)
										return 18.3066;
									else
										return 22.4649;
								}
								else
								{
									if(cqi < 13.5)
									{
										if(rsrp < -85.5)
										{
											if(payload < 9.5)
											{
												if(payload < 8.5)
													return 16.3057;
												else
													return 15.2381;
											}
											else
												return 12.6763;
										}
										else
										{
											if(payload < 8)
												return 8.33623;
											else
												return 13.557;
										}
									}
									else
										return 24.948;
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
		if(ta < 4.5)
		{
			if(rsrp < -91.5)
			{
				if(velocity < 14.39)
				{
					if(ta < 1.5)
					{
						if(rsrp < -96)
							return 10.2258;
						else
							return 6.99913;
					}
					else
					{
						if(sinr < 12)
							return 10.7623;
						else
						{
							if(payload < 7)
								return 15.17385;
							else
								return 19.5551;
						}
					}
				}
				else
				{
					if(cqi < 11)
						return 4.064945;
					else
					{
						if(rsrp < -93.5)
						{
							if(payload < 4.5)
								return 4.66382;
							else
								return 6.86303;
						}
						else
						{
							if(ta < 2.5)
							{
								if(cqi < 13.5)
									return 10.3896;
								else
									return 7.87402;
							}
							else
								return 4.23282;
						}
					}
				}
			}
			else
			{
				if(ta < 0.5)
					return 2.98313;
				else
				{
					if(payload < 4.5)
					{
						if(velocity < 15.6)
						{
							if(payload < 2.5)
							{
								if(rsrp < -77.5)
								{
									if(payload < 0.3)
									{
										if(sinr < 18.5)
										{
											if(ta < 3)
												return 4.96896;
											else
											{
												if(rsrp < -85)
													return 6.01506;
												else
													return 9.52385;
											}
										}
										else
										{
											if(ta < 2.5)
											{
												if(cqi < 6.5)
													return 5.79712;
												else
													return 4.74155;
											}
											else
												return 4.4067921429;
										}
									}
									else
									{
										if(sinr < 11.5)
										{
											if(sinr < 5.5)
												return 13.986;
											else
											{
												if(cqi < 14)
													return 9.6561833333;
												else
													return 11.5942;
											}
										}
										else
										{
											if(sinr < 16.5)
											{
												if(rsrp < -79)
												{
													if(rsrp < -90)
														return 4.58453;
													else
													{
														if(f < 2232.5)
														{
															if(velocity < 12.2)
																return 8.40336;
															else
															{
																if(payload < 1.5)
																	return 6.36436;
																else
																	return 6.827206;
															}
														}
														else
														{
															if(ta < 3.5)
																return 9.84615;
															else
															{
																if(payload < 1.5)
																	return 9.17431;
																else
																	return 8.62534;
															}
														}
													}
												}
												else
													return 2.52207;
											}
											else
											{
												if(sinr < 18.5)
												{
													if(payload < 1.5)
														return 14.0605333333;
													else
													{
														if(cqi < 10)
															return 12.7085;
														else
															return 11.5108;
													}
												}
												else
												{
													if(sinr < 27)
													{
														if(velocity < 0.67)
														{
															if(rsrp < -80)
															{
																if(sinr < 20.5)
																	return 11.2518;
																else
																	return 7.47664;
															}
															else
																return 13.6752;
														}
														else
														{
															if(rsrp < -86.5)
																return 14.1343;
															else
															{
																if(velocity < 9.18)
																{
																	if(cqi < 12.5)
																	{
																		if(sinr < 22)
																			return 7.63359;
																		else
																			return 8.3714875;
																	}
																	else
																	{
																		if(payload < 1.25)
																			return 6.36943;
																		else
																			return 7.30594;
																	}
																}
																else
																{
																	if(sinr < 20)
																	{
																		if(cqi < 12.5)
																			return 6.0015;
																		else
																			return 10.9141;
																	}
																	else
																	{
																		if(rsrq < -5.5)
																		{
																			if(payload < 1.5)
																				return 7.04225;
																			else
																				return 8.47907;
																		}
																		else
																		{
																			if(payload < 1.5)
																				return 10.8254;
																			else
																				return 11.6788;
																		}
																	}
																}
															}
														}
													}
													else
														return 6.97341;
												}
											}
										}
									}
								}
								else
								{
									if(rsrp < -75.5)
									{
										if(velocity < 7.36)
										{
											if(payload < 0.75)
												return 9.47867;
											else
												return 8.3682;
										}
										else
										{
											if(cell < 27078658)
												return 14.7194;
											else
											{
												if(ta < 2.5)
													return 17.9171;
												else
													return 21.1082;
											}
										}
									}
									else
									{
										if(payload < 0.3)
										{
											if(velocity < 13.84)
											{
												if(cell < 29652225.5)
												{
													if(rsrp < -74.5)
														return 5.12822;
													else
														return 5.79712;
												}
												else
													return 7.5472;
											}
											else
												return 4.6243;
										}
										else
										{
											if(cell < 27771908.5)
											{
												if(velocity < 4.295)
													return 14.2857;
												else
												{
													if(cqi < 11.5)
													{
														if(rsrp < -71.5)
														{
															if(sinr < 19)
																return 10.7817;
															else
																return 9.23788;
														}
														else
															return 13.0293;
													}
													else
													{
														if(ta < 1.5)
														{
															if(velocity < 10.75)
																return 6.42055;
															else
															{
																if(sinr < 24)
																{
																	if(sinr < 21)
																	{
																		if(sinr < 17)
																			return 9.35673;
																		else
																			return 8.31601;
																	}
																	else
																		return 7.46269;
																}
																else
																{
																	if(payload < 1.25)
																		return 9.80392;
																	else
																		return 8.42549;
																}
															}
														}
														else
														{
															if(cqi < 13.5)
																return 7.72947;
															else
																return 6.61704;
														}
													}
												}
											}
											else
											{
												if(sinr < 31)
												{
													if(velocity < 10.08)
														return 12.4369;
													else
														return 11.3410333333;
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
								if(sinr < 23.5)
								{
									if(cell < 28069506.5)
									{
										if(velocity < 14.68)
										{
											if(rsrq < -5.5)
											{
												if(payload < 3.5)
												{
													if(cell < 27078274.5)
													{
														if(cqi < 14)
															return 10.8406;
														else
														{
															if(sinr < 22)
																return 9.61924;
															else
																return 10.1523;
														}
													}
													else
													{
														if(velocity < 14.405)
															return 13.363;
														else
															return 12.8205;
													}
												}
												else
												{
													if(sinr < 21)
													{
														if(rsrp < -75.5)
														{
															if(cqi < 9.5)
															{
																if(f < 2232.5)
																	return 14.8561;
																else
																	return 15.534;
															}
															else
																return 13.8648;
														}
														else
															return 11.2281;
													}
													else
														return 16.6061;
												}
											}
											else
											{
												if(velocity < 12.75)
													return 19.7531;
												else
												{
													if(sinr < 19)
														return 15.7068;
													else
														return 18.3066;
												}
											}
										}
										else
										{
											if(velocity < 14.825)
												return 23.976;
											else
											{
												if(payload < 3.5)
													return 15.4639;
												else
													return 17.094;
											}
										}
									}
									else
									{
										if(velocity < 4.9)
											return 15.8103;
										else
										{
											if(velocity < 12.5)
											{
												if(cqi < 7.5)
												{
													if(rsrp < -85)
														return 10.6773;
													else
														return 11.7073;
												}
												else
												{
													if(rsrp < -83)
													{
														if(sinr < 15.5)
															return 9.06516;
														else
															return 9.70285;
													}
													else
														return 10.6242;
												}
											}
											else
											{
												if(cell < 29391105.5)
													return 11.6335;
												else
													return 15.9151;
											}
										}
									}
								}
								else
								{
									if(sinr < 28.5)
									{
										if(sinr < 27.5)
										{
											if(cell < 28581506.5)
											{
												if(velocity < 1.87)
													return 16.8865;
												else
												{
													if(velocity < 7.46)
														return 18.3908;
													else
													{
														if(rsrp < -69.5)
															return 17.6893;
														else
															return 17.2228;
													}
												}
											}
											else
											{
												if(cell < 29391104.5)
													return 12.003;
												else
												{
													if(payload < 3.5)
														return 12.5392;
													else
													{
														if(velocity < 6.165)
															return 14.3885;
														else
														{
															if(sinr < 26)
																return 17.3254;
															else
																return 16.3182;
														}
													}
												}
											}
										}
										else
											return 24.4151;
									}
									else
									{
										if(cell < 29652225.5)
										{
											if(sinr < 29.5)
												return 9.86436;
											else
											{
												if(sinr < 38.5)
												{
													if(rsrp < -80)
														return 14.9719;
													else
													{
														if(rsrp < -73.5)
															return 13.0719;
														else
															return 13.713475;
													}
												}
												else
												{
													if(velocity < 6.41)
														return 11.1888;
													else
														return 11.6959;
												}
											}
										}
										else
											return 17.4482;
									}
								}
							}
						}
						else
						{
							if(rsrp < -84.5)
							{
								if(payload < 0.75)
								{
									if(cqi < 12.5)
									{
										if(rsrq < -5.5)
											return 5.83942;
										else
											return 7.84314;
									}
									else
									{
										if(velocity < 21.97)
											return 5.555845;
										else
											return 5.06331;
									}
								}
								else
								{
									if(rsrp < -86.5)
									{
										if(rsrp < -90.5)
											return 8.24955;
										else
										{
											if(payload < 3.5)
											{
												if(sinr < 12.5)
													return 16.178;
												else
													return 14.120825;
											}
											else
												return 19.059;
										}
									}
									else
									{
										if(payload < 1.5)
										{
											if(cqi < 11.5)
												return 12.3267;
											else
												return 10.6242;
										}
										else
											return 12.9155714286;
									}
								}
							}
							else
							{
								if(velocity < 16.06)
								{
									if(payload < 2.5)
										return 21.5054;
									else
										return 17.48;
								}
								else
								{
									if(sinr < 27.5)
									{
										if(payload < 1.5)
										{
											if(cqi < 13.5)
											{
												if(ta < 2.5)
													return 18.2648;
												else
													return 9.28074;
											}
											else
											{
												if(rsrp < -75)
													return 5.4422;
												else
												{
													if(velocity < 23.515)
														return 8.03213;
													else
														return 10.4031;
												}
											}
										}
										else
										{
											if(sinr < 24.5)
											{
												if(cqi < 14.5)
												{
													if(cell < 27771908.5)
														return 19.3353;
													else
													{
														if(cqi < 11)
															return 13.59;
														else
														{
															if(rsrp < -79.5)
															{
																if(velocity < 29.43)
																	return 16.7189;
																else
																	return 17.1951;
															}
															else
																return 19.8347;
														}
													}
												}
												else
												{
													if(velocity < 25.16)
													{
														if(payload < 3)
															return 10.1394;
														else
															return 12.3219;
													}
													else
													{
														if(payload < 3)
															return 18.2232;
														else
															return 15.7869;
													}
												}
											}
											else
												return 25;
										}
									}
									else
									{
										if(rsrq < -4.5)
										{
											if(rsrp < -75)
											{
												if(rsrq < -5.5)
													return 9.34579;
												else
												{
													if(velocity < 19.205)
													{
														if(velocity < 16.795)
															return 6.27451;
														else
															return 7.92275;
													}
													else
														return 10.3627;
												}
											}
											else
												return 14.3113;
										}
										else
											return 5.4422;
									}
								}
							}
						}
					}
					else
					{
						if(rsrq < -4.5)
						{
							if(rsrp < -84.5)
							{
								if(velocity < 0.565)
								{
									if(sinr < 21)
									{
										if(payload < 6.5)
											return 20.5216;
										else
										{
											if(rsrp < -85.5)
											{
												if(ta < 2.5)
													return 27.3621;
												else
												{
													if(cell < 27811715)
													{
														if(sinr < 16.5)
														{
															if(rsrp < -86.5)
																return 23.1437;
															else
																return 24.4368;
														}
														else
															return 21.7138;
													}
													else
														return 24.59116;
												}
											}
											else
												return 26.5604;
										}
									}
									else
									{
										if(sinr < 24)
											return 21.0526;
										else
											return 17.2373;
									}
								}
								else
								{
									if(sinr < 29)
									{
										if(cqi < 14)
										{
											if(cell < 28879105)
											{
												if(ta < 3.5)
												{
													if(payload < 5.5)
													{
														if(velocity < 8.97)
															return 12.0301;
														else
														{
															if(cqi < 10)
																return 17.4064;
															else
															{
																if(cqi < 11.5)
																	return 19.305;
																else
																	return 18.3824;
															}
														}
													}
													else
													{
														if(rsrp < -86.5)
														{
															if(sinr < 25.5)
															{
																if(velocity < 8.825)
																	return 18.5615;
																else
																{
																	if(cqi < 11.5)
																	{
																		if(ta < 1.5)
																			return 20.2429;
																		else
																			return 25.7511;
																	}
																	else
																	{
																		if(rsrp < -87.5)
																		{
																			if(ta < 1.5)
																				return 21.4067;
																			else
																				return 17.8914;
																		}
																		else
																			return 20.6097;
																	}
																}
															}
															else
																return 29.9766;
														}
														else
														{
															if(rsrp < -85.5)
																return 13.7188;
															else
																return 20;
														}
													}
												}
												else
												{
													if(cell < 28069122)
													{
														if(sinr < 8.5)
															return 14.2349;
														else
														{
															if(payload < 7)
																return 30.7692;
															else
															{
																if(rsrp < -89)
																	return 25.5864;
																else
																{
																	if(sinr < 15)
																		return 25.3727;
																	else
																		return 21.9118;
																}
															}
														}
													}
													else
													{
														if(rsrp < -87)
															return 23.8213;
														else
															return 19.407;
													}
												}
											}
											else
											{
												if(cell < 29913345.5)
												{
													if(velocity < 10.76)
														return 13.8249;
													else
														return 8.54884;
												}
												else
												{
													if(rsrq < -5.5)
													{
														if(sinr < 20)
														{
															if(velocity < 5.085)
																return 19.8675;
															else
																return 19.2003;
														}
														else
															return 19.1296;
													}
													else
														return 14.7384;
												}
											}
										}
										else
										{
											if(payload < 5.5)
											{
												if(rsrp < -88.5)
													return 15.0773;
												else
													return 19.7433;
											}
											else
											{
												if(rsrp < -87)
													return 15.61695;
												else
												{
													if(payload < 7)
														return 12.945;
													else
														return 11.0174;
												}
											}
										}
									}
									else
										return 34.379;
								}
							}
							else
							{
								if(payload < 6.5)
								{
									if(sinr < 33)
									{
										if(velocity < 13.635)
										{
											if(velocity < 13.55)
											{
												if(cell < 26385409)
												{
													if(payload < 5.5)
														return 20.9205;
													else
													{
														if(velocity < 12.2)
															return 18.2163;
														else
															return 20.592;
													}
												}
												else
												{
													if(rsrp < -80.5)
													{
														if(rsrp < -82)
															return 18.5271;
														else
															return 14.4561;
													}
													else
													{
														if(rsrp < -79)
															return 20.8605;
														else
														{
															if(payload < 5.5)
															{
																if(rsrp < -72.5)
																	return 18.5357;
																else
																	return 20.7039;
															}
															else
																return 18.2131142857;
														}
													}
												}
											}
											else
												return 13.5044;
										}
										else
										{
											if(velocity < 15.12)
											{
												if(sinr < 28)
												{
													if(ta < 1.5)
													{
														if(rsrp < -79)
															return 23.2964;
														else
														{
															if(rsrp < -68.5)
																return 20.1681;
															else
																return 23.0548;
														}
													}
													else
													{
														if(sinr < 21)
															return 27.907;
														else
															return 27.3816;
													}
												}
												else
													return 29.1793;
											}
											else
											{
												if(sinr < 30.5)
												{
													if(cell < 27771908.5)
													{
														if(payload < 5.5)
														{
															if(ta < 2.5)
																return 21.8103;
															else
															{
																if(velocity < 26.84)
																{
																	if(velocity < 20.065)
																		return 19.2678;
																	else
																		return 21.3561;
																}
																else
																	return 19.3892;
															}
														}
														else
														{
															if(cqi < 11.5)
																return 20.0585;
															else
																return 13.6674;
														}
													}
													else
													{
														if(sinr < 20.5)
															return 22.792;
														else
															return 22.0751;
													}
												}
												else
													return 10.9379;
											}
										}
									}
									else
										return 24.0964;
								}
								else
								{
									if(f < 2232.5)
									{
										if(cell < 26385408.5)
										{
											if(rsrq < -5.5)
											{
												if(payload < 8.5)
												{
													if(cqi < 11.5)
														return 19.2432;
													else
													{
														if(cqi < 13.5)
															return 22.32855;
														else
															return 25.305;
													}
												}
												else
												{
													if(sinr < 12)
														return 26.0586;
													else
													{
														if(velocity < 13.355)
														{
															if(rsrp < -73.5)
															{
																if(ta < 1.5)
																	return 26.927;
																else
																	return 24.8834;
															}
															else
																return 24.4399;
														}
														else
															return 23.5919;
													}
												}
											}
											else
											{
												if(cqi < 14)
												{
													if(rsrp < -77.5)
														return 17.1201;
													else
													{
														if(payload < 8.5)
														{
															if(rsrp < -75.5)
																return 20.7947;
															else
															{
																if(sinr < 22.5)
																	return 18.9956;
																else
																	return 17.2255;
															}
														}
														else
															return 20.507;
													}
												}
												else
												{
													if(rsrp < -74.5)
														return 22.9665;
													else
														return 28.5375;
												}
											}
										}
										else
										{
											if(payload < 9.5)
											{
												if(velocity < 23.34)
												{
													if(ta < 3.5)
													{
														if(sinr < 26)
														{
															if(ta < 1.5)
															{
																if(rsrp < -74.5)
																{
																	if(rsrp < -79)
																		return 37.2285;
																	else
																		return 38.3923;
																}
																else
																	return 30.1003;
															}
															else
															{
																if(payload < 7.5)
																{
																	if(rsrp < -76)
																	{
																		if(sinr < 24)
																		{
																			if(rsrp < -80.5)
																			{
																				if(ta < 2.5)
																					return 27.2772;
																				else
																					return 28.6885;
																			}
																			else
																				return 24.369;
																		}
																		else
																			return 34.7395;
																	}
																	else
																		return 31.1457;
																}
																else
																{
																	if(payload < 8.5)
																	{
																		if(rsrp < -81)
																			return 23.1884;
																		else
																			return 23.7125;
																	}
																	else
																		return 25.6959;
																}
															}
														}
														else
														{
															if(payload < 8.5)
															{
																if(sinr < 27.5)
																	return 19.312;
																else
																{
																	if(cell < 27771908.5)
																	{
																		if(rsrp < -71)
																		{
																			if(rsrp < -74.5)
																				return 25.8377;
																			else
																				return 27.5455;
																		}
																		else
																			return 23.4212;
																	}
																	else
																	{
																		if(payload < 7.5)
																		{
																			if(rsrp < -73.5)
																				return 21.9522;
																			else
																				return 22.9039;
																		}
																		else
																			return 19.7836;
																	}
																}
															}
															else
															{
																if(cqi < 13)
																{
																	if(cqi < 6.5)
																		return 29.1498;
																	else
																		return 34.2531;
																}
																else
																	return 27.972;
															}
														}
													}
													else
													{
														if(velocity < 11.61)
														{
															if(cqi < 13.5)
															{
																if(sinr < 29)
																{
																	if(payload < 8.5)
																	{
																		if(rsrq < -5.5)
																			return 20.5589;
																		else
																		{
																			if(cqi < 11.5)
																				return 22.0559;
																			else
																				return 21.3985;
																		}
																	}
																	else
																		return 18.5854;
																}
																else
																	return 33.1492;
															}
															else
															{
																if(cqi < 14.5)
																	return 16.9851;
																else
																{
																	if(payload < 8.5)
																	{
																		if(payload < 7.5)
																			return 20.4007;
																		else
																			return 17.763;
																	}
																	else
																		return 20.4895;
																}
															}
														}
														else
														{
															if(cqi < 12.5)
																return 20.0645;
															else
															{
																if(velocity < 12.14)
																{
																	if(rsrq < -5.5)
																		return 38.1471;
																	else
																		return 26.6033;
																}
																else
																{
																	if(rsrp < -82.5)
																		return 25.1836;
																	else
																		return 24.7104;
																}
															}
														}
													}
												}
												else
												{
													if(rsrp < -83.5)
														return 17.5012;
													else
													{
														if(cell < 30649731)
														{
															if(cqi < 14.5)
																return 21.8153;
															else
															{
																if(cell < 27771396.5)
																	return 22.8789;
																else
																	return 23.5789;
															}
														}
														else
															return 20.9561;
													}
												}
											}
											else
											{
												if(velocity < 11.22)
												{
													if(rsrp < -83)
														return 29.985;
													else
													{
														if(rsrp < -75)
														{
															if(rsrq < -5.5)
																return 24.1546;
															else
																return 21.9599;
														}
														else
															return 29.347;
													}
												}
												else
												{
													if(ta < 1.5)
													{
														if(sinr < 30)
															return 32.4807;
														else
															return 31.9107;
													}
													else
														return 35.1083;
												}
											}
										}
									}
									else
									{
										if(payload < 8.5)
											return 13.5266;
										else
											return 19.3283;
									}
								}
							}
						}
						else
						{
							if(payload < 5.5)
								return 38.1679;
							else
							{
								if(cell < 27771908.5)
								{
									if(payload < 8.5)
									{
										if(payload < 6.5)
											return 19.4332;
										else
											return 21.2443;
									}
									else
										return 28.5714;
								}
								else
									return 34.7373;
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
				if(ta < 27.5)
				{
					if(cell < 29483522)
					{
						if(cell < 28068481.5)
						{
							if(payload < 1.5)
							{
								if(rsrq < -4.5)
								{
									if(payload < 0.3)
									{
										if(cqi < 11)
										{
											if(rsrp < -86)
												return 5.19483;
											else
											{
												if(rsrq < -5.5)
													return 8.33337;
												else
													return 7.055195;
											}
										}
										else
										{
											if(rsrp < -68)
											{
												if(cell < 26820867.5)
													return 4.493066;
												else
												{
													if(rsrp < -77.5)
														return 5.9195475;
													else
														return 5.066274;
												}
											}
											else
												return 6.25002;
										}
									}
									else
									{
										if(velocity < 27.535)
										{
											if(sinr < 20.5)
											{
												if(cqi < 9)
													return 8.69565;
												else
												{
													if(velocity < 14.82)
													{
														if(cell < 26385409)
														{
															if(cqi < 11)
																return 5.64573;
															else
																return 4.5977;
														}
														else
														{
															if(sinr < 12)
																return 7.4746133333;
															else
															{
																if(rsrp < -84.5)
																	return 6.3829966667;
																else
																	return 6.7937133333;
															}
														}
													}
													else
													{
														if(velocity < 20.87)
														{
															if(rsrq < -5.5)
																return 7.57576;
															else
																return 8.7146;
														}
														else
															return 6.26468;
													}
												}
											}
											else
											{
												if(velocity < 13.125)
												{
													if(rsrp < -71.5)
													{
														if(velocity < 9.305)
															return 9.539075;
														else
														{
															if(rsrp < -80)
																return 8.379615;
															else
																return 8.98876;
														}
													}
													else
														return 6.0698;
												}
												else
												{
													if(sinr < 27.5)
													{
														if(rsrp < -83)
															return 7.37327;
														else
															return 9.084815;
													}
													else
													{
														if(velocity < 14.955)
														{
															if(ta < 6.5)
																return 5.3916566667;
															else
																return 7.7821;
														}
														else
															return 9.88875;
													}
												}
											}
										}
										else
											return 4.39319;
									}
								}
								else
								{
									if(payload < 0.55)
										return 5.59443;
									else
										return 19.802;
								}
							}
							else
							{
								if(cell < 26707330.5)
								{
									if(rsrq < -5.5)
									{
										if(velocity < 12.58)
										{
											if(sinr < 25)
											{
												if(rsrp < -86.5)
													return 16.3516;
												else
												{
													if(velocity < 6.385)
														return 13.6286;
													else
														return 12.3935;
												}
											}
											else
												return 10.9141;
										}
										else
										{
											if(rsrp < -84.5)
											{
												if(sinr < 14)
													return 11.6068;
												else
													return 9.29692;
											}
											else
												return 12.527;
										}
									}
									else
										return 8.67365;
								}
								else
								{
									if(rsrp < -88.5)
									{
										if(sinr < 10.5)
										{
											if(cqi < 7.5)
												return 6.79406;
											else
												return 13.1687;
										}
										else
										{
											if(cqi < 13.5)
											{
												if(payload < 3.5)
												{
													if(rsrp < -91.5)
														return 9.0978;
													else
													{
														if(cell < 27514116)
															return 12.9066;
														else
															return 11.396;
													}
												}
												else
												{
													if(rsrq < -5.5)
													{
														if(cqi < 10.5)
															return 12.8566;
														else
															return 18.9349;
													}
													else
														return 14.9743;
												}
											}
											else
											{
												if(payload < 2.5)
													return 11.0041;
												else
													return 9.1047;
											}
										}
									}
									else
									{
										if(rsrp < -87.5)
											return 23.8806;
										else
										{
											if(f < 1384.95)
												return 7.05779;
											else
											{
												if(sinr < 16.5)
												{
													if(payload < 3)
														return 14.77386;
													else
													{
														if(sinr < 15)
														{
															if(rsrp < -83.5)
																return 13.2396;
															else
																return 10.7383;
														}
														else
															return 8.13421;
													}
												}
												else
												{
													if(rsrp < -86.5)
													{
														if(rsrq < -5.5)
															return 14.3369;
														else
															return 16.3265;
													}
													else
													{
														if(sinr < 22.5)
															return 15.534;
														else
														{
															if(ta < 12.5)
															{
																if(sinr < 23.5)
																	return 24.6723;
																else
																{
																	if(rsrp < -83.5)
																		return 14.7149;
																	else
																	{
																		if(rsrp < -76.5)
																		{
																			if(cell < 27771523)
																				return 22.1402;
																			else
																				return 22.8354;
																		}
																		else
																		{
																			if(rsrp < -72.5)
																				return 17.1215;
																			else
																				return 21.3333;
																		}
																	}
																}
															}
															else
																return 16.8599;
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
							if(velocity < 13.255)
							{
								if(cqi < 10.5)
								{
									if(payload < 2.5)
									{
										if(velocity < 0.49)
										{
											if(rsrp < -93)
												return 5.4422;
											else
												return 2.73974;
										}
										else
										{
											if(velocity < 1.43)
												return 8.65801;
											else
											{
												if(ta < 9.5)
												{
													if(velocity < 10.82)
														return 5.828768;
													else
														return 5.03147;
												}
												else
													return 4.5243066667;
											}
										}
									}
									else
									{
										if(rsrp < -89.5)
											return 13.2597;
										else
										{
											if(rsrp < -86.5)
												return 7.05467;
											else
												return 6.19315;
										}
									}
								}
								else
								{
									if(cell < 28368385)
									{
										if(cqi < 13.5)
										{
											if(rsrp < -86.5)
											{
												if(payload < 0.55)
													return 6.29924;
												else
													return 4.36681;
											}
											else
												return 8.08084;
										}
										else
										{
											if(payload < 1.55)
												return 4.23282;
											else
												return 4.84359;
										}
									}
									else
									{
										if(f < 2232.5)
										{
											if(rsrp < -91.5)
												return 14.7126;
											else
											{
												if(sinr < 21.5)
													return 12.4224;
												else
													return 11.5523;
											}
										}
										else
										{
											if(sinr < 21.5)
											{
												if(sinr < 20)
													return 9.429952;
												else
													return 10.5645;
											}
											else
												return 6.83763;
										}
									}
								}
							}
							else
							{
								if(ta < 5.5)
								{
									if(rsrp < -83)
										return 14.742;
									else
										return 15.9468;
								}
								else
								{
									if(rsrp < -96.5)
										return 6.25978;
									else
									{
										if(velocity < 13.615)
										{
											if(payload < 2.5)
												return 11.0117;
											else
												return 11.6732;
										}
										else
										{
											if(velocity < 15.515)
											{
												if(rsrp < -91.5)
													return 10.0883;
												else
												{
													if(rsrp < -87)
														return 7.32601;
													else
														return 8.81057;
												}
											}
											else
											{
												if(payload < 2)
												{
													if(sinr < 12)
														return 10.2696;
													else
														return 9.4451;
												}
												else
													return 10.637125;
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if(rsrp < -89.5)
						{
							if(rsrp < -90.5)
							{
								if(payload < 3.5)
								{
									if(cqi < 7)
										return 6.6650733333;
									else
									{
										if(rsrp < -93.5)
										{
											if(velocity < 33.54)
											{
												if(cqi < 10.5)
													return 9.534686;
												else
													return 10.7527;
											}
											else
												return 13.5823;
										}
										else
											return 12.4095;
									}
								}
								else
									return 15.2891;
							}
							else
							{
								if(sinr < 11)
									return 5.36915;
								else
								{
									if(velocity < 13.51)
										return 8.81057;
									else
										return 7.7821;
								}
							}
						}
						else
						{
							if(payload < 1.5)
							{
								if(velocity < 9.585)
									return 21.164;
								else
								{
									if(payload < 0.75)
									{
										if(cqi < 11.5)
										{
											if(sinr < 15)
												return 3.92158;
											else
											{
												if(payload < 0.3)
													return 4.76192;
												else
													return 6.01504;
											}
										}
										else
										{
											if(velocity < 14.875)
											{
												if(velocity < 14.005)
													return 7.95229;
												else
													return 8.88889;
											}
											else
											{
												if(payload < 0.3)
													return 4.25534;
												else
													return 7.95229;
											}
										}
									}
									else
									{
										if(velocity < 11.53)
											return 7.69971;
										else
										{
											if(cqi < 3.5)
												return 8.53789;
											else
											{
												if(cqi < 9)
												{
													if(rsrp < -86.5)
														return 12.2888;
													else
														return 10.4987;
												}
												else
												{
													if(rsrq < -5.5)
														return 12.966;
													else
														return 13.913;
												}
											}
										}
									}
								}
							}
							else
							{
								if(rsrp < -87.5)
								{
									if(velocity < 13.87)
									{
										if(velocity < 6.835)
											return 18.4544;
										else
										{
											if(rsrp < -88.5)
												return 15.6326;
											else
												return 16.8865;
										}
									}
									else
									{
										if(sinr < 17.5)
											return 18.6047;
										else
											return 19.3822;
									}
								}
								else
								{
									if(rsrp < -75.5)
									{
										if(sinr < 13.5)
										{
											if(cqi < 9.5)
												return 14.4862;
											else
											{
												if(cqi < 13)
												{
													if(rsrq < -5)
														return 13.3612;
													else
														return 11.6026;
												}
												else
													return 10.0597;
											}
										}
										else
										{
											if(velocity < 21.525)
											{
												if(sinr < 24.5)
												{
													if(ta < 9.5)
													{
														if(ta < 7.5)
														{
															if(velocity < 15.645)
															{
																if(rsrp < -79)
																{
																	if(cqi < 11.5)
																		return 15.8494;
																	else
																		return 16.3043;
																}
																else
																	return 15.625;
															}
															else
																return 14.9347;
														}
														else
															return 17.4863;
													}
													else
														return 13.7773;
												}
												else
													return 19.1045;
											}
											else
											{
												if(velocity < 32.07)
												{
													if(velocity < 28.525)
														return 14.2602;
													else
														return 13.3111;
												}
												else
													return 10.6525;
											}
										}
									}
									else
									{
										if(rsrp < -74)
											return 18.4226;
										else
											return 16.7539;
									}
								}
							}
						}
					}
				}
				else
				{
					if(sinr < 15)
						return 8.56531;
					else
					{
						if(sinr < 23)
						{
							if(rsrq < -4.5)
								return 3.7296;
							else
								return 5.55558;
						}
						else
						{
							if(sinr < 33.5)
								return 2.68301;
							else
								return 4.4944;
						}
					}
				}
			}
			else
			{
				if(cell < 29483522)
				{
					if(payload < 6.5)
					{
						if(sinr < 14.5)
						{
							if(sinr < 13.5)
							{
								if(rsrp < -85.5)
								{
									if(sinr < 5)
									{
										if(rsrq < -5.5)
											return 12.0573;
										else
											return 6.80079;
									}
									else
									{
										if(ta < 14.5)
										{
											if(cqi < 13)
											{
												if(velocity < 12.535)
												{
													if(cqi < 10)
														return 18.0505;
													else
														return 13.8456;
												}
												else
												{
													if(cqi < 8)
														return 12.6622;
													else
													{
														if(rsrp < -87)
															return 14.301;
														else
															return 13.3333;
													}
												}
											}
											else
												return 9.7107;
										}
										else
											return 9.40291;
									}
								}
								else
								{
									if(cqi < 7.5)
										return 24.0361;
									else
									{
										if(cqi < 12.5)
										{
											if(velocity < 18.165)
												return 13.7883;
											else
												return 16.129;
										}
										else
											return 20.5304;
									}
								}
							}
							else
							{
								if(rsrp < -95)
									return 5.70207;
								else
									return 12.0391;
							}
						}
						else
						{
							if(payload < 5.5)
							{
								if(velocity < 14.57)
								{
									if(velocity < 12.445)
									{
										if(rsrq < -5.5)
										{
											if(cell < 28348804)
											{
												if(sinr < 16.5)
													return 11.9154;
												else
												{
													if(ta < 6)
														return 14.5402;
													else
														return 13.9958;
												}
											}
											else
											{
												if(rsrp < -90.5)
												{
													if(velocity < 6.905)
													{
														if(sinr < 19.5)
															return 16.6528;
														else
															return 16.1421;
													}
													else
														return 12.3724;
												}
												else
													return 18.8235;
											}
										}
										else
										{
											if(rsrp < -86.5)
												return 10.1678;
											else
												return 14.7601;
										}
									}
									else
									{
										if(cqi < 10)
											return 21.4018;
										else
										{
											if(f < 2232.5)
												return 15.8856;
											else
											{
												if(ta < 8)
													return 17.2563;
												else
												{
													if(cqi < 11.5)
														return 17.1674;
													else
														return 16.3132;
												}
											}
										}
									}
								}
								else
								{
									if(cqi < 11)
										return 13.2538;
									else
										return 9.37427;
								}
							}
							else
							{
								if(velocity < 10.915)
								{
									if(sinr < 24.5)
									{
										if(cqi < 14)
										{
											if(rsrp < -90.5)
												return 21.1921;
											else
												return 19.0961666667;
										}
										else
											return 14.8423;
									}
									else
									{
										if(cqi < 12)
											return 12.3935;
										else
										{
											if(sinr < 33.5)
											{
												if(cell < 26820867.5)
													return 13.8129;
												else
													return 14.5366;
											}
											else
												return 15.8888;
										}
									}
								}
								else
								{
									if(rsrp < -73.5)
										return 25.1937666667;
									else
										return 22.3568;
								}
							}
						}
					}
					else
					{
						if(velocity < 14.165)
						{
							if(rsrq < -5.5)
							{
								if(cqi < 8.5)
								{
									if(cell < 27142788)
										return 15.2639;
									else
									{
										if(velocity < 6.055)
										{
											if(cell < 27277828.5)
												return 24.1171;
											else
												return 20.01;
										}
										else
											return 15.273;
									}
								}
								else
								{
									if(rsrp < -90.5)
									{
										if(sinr < 21.5)
										{
											if(sinr < 11.5)
											{
												if(payload < 9.5)
													return 20.7672;
												else
													return 21.751;
											}
											else
											{
												if(sinr < 14.5)
												{
													if(rsrp < -94.5)
														return 18.136;
													else
														return 17.0612;
												}
												else
													return 15.44755;
											}
										}
										else
										{
											if(payload < 8.5)
												return 23.3406;
											else
												return 20.2532;
										}
									}
									else
									{
										if(cell < 27142788)
										{
											if(rsrp < -85.5)
											{
												if(ta < 7.5)
													return 19.3316;
												else
												{
													if(cqi < 10)
														return 22.792;
													else
														return 26.5957;
												}
											}
											else
											{
												if(payload < 7.5)
												{
													if(f < 2232.5)
													{
														if(rsrp < -78.5)
															return 16.7364;
														else
															return 16.0137;
													}
													else
														return 17.4727;
												}
												else
												{
													if(ta < 6.5)
														return 27.2201;
													else
													{
														if(velocity < 10.11)
														{
															if(cqi < 12)
																return 16.8244;
															else
															{
																if(cqi < 14.5)
																	return 19.0931;
																else
																{
																	if(sinr < 32.5)
																		return 21.8077;
																	else
																	{
																		if(payload < 9.5)
																			return 20.2532;
																		else
																			return 19.7628;
																	}
																}
															}
														}
														else
														{
															if(rsrp < -81.5)
																return 20.6380666667;
															else
																return 22.5035;
														}
													}
												}
											}
										}
										else
										{
											if(rsrp < -89.5)
											{
												if(payload < 9.5)
												{
													if(payload < 8.5)
													{
														if(ta < 12.5)
															return 24.015;
														else
															return 23.5195;
													}
													else
														return 21.9445;
												}
												else
													return 27.8843;
											}
											else
											{
												if(ta < 8)
												{
													if(payload < 8)
														return 23.3918;
													else
														return 26.2582;
												}
												else
													return 17.6913;
											}
										}
									}
								}
							}
							else
							{
								if(ta < 8.5)
								{
									if(sinr < 20.5)
									{
										if(rsrp < -87.5)
											return 16.4567;
										else
											return 14.1772;
									}
									else
										return 11.2486;
								}
								else
								{
									if(velocity < 3.1)
										return 20.015;
									else
									{
										if(sinr < 23.5)
											return 21.143;
										else
											return 20.6053;
									}
								}
							}
						}
						else
						{
							if(rsrq < -5.5)
							{
								if(ta < 8.5)
								{
									if(cell < 28071554.5)
									{
										if(ta < 6.5)
										{
											if(payload < 8.5)
												return 28.4318;
											else
												return 30.4826;
										}
										else
											return 25.7787;
									}
									else
									{
										if(payload < 8)
											return 16.5779;
										else
										{
											if(rsrp < -88.5)
												return 19.3861;
											else
												return 20.979;
										}
									}
								}
								else
								{
									if(cqi < 14.5)
									{
										if(cqi < 11.5)
											return 16.791;
										else
											return 18.4704;
									}
									else
										return 12.5786;
								}
							}
							else
							{
								if(cell < 27771523.5)
								{
									if(cqi < 12.5)
										return 26.6489;
									else
										return 27.3038;
								}
								else
								{
									if(payload < 8.5)
										return 25.5898;
									else
										return 24.8963;
								}
							}
						}
					}
				}
				else
				{
					if(rsrp < -72.5)
					{
						if(velocity < 11.195)
						{
							if(payload < 9.5)
							{
								if(sinr < 18.5)
								{
									if(payload < 8.5)
									{
										if(ta < 11.5)
										{
											if(payload < 7.5)
												return 19.1912;
											else
												return 20.1068;
										}
										else
											return 18.2887;
									}
									else
										return 22.188;
								}
								else
								{
									if(payload < 8.5)
										return 18.3066;
									else
										return 14.6163;
								}
							}
							else
								return 20.2583;
						}
						else
						{
							if(payload < 7.5)
							{
								if(cell < 29741056)
								{
									if(ta < 7.5)
									{
										if(sinr < 13)
											return 22.738;
										else
										{
											if(rsrp < -82)
												return 22.062375;
											else
											{
												if(velocity < 16.605)
													return 21.9264;
												else
													return 20.1089;
											}
										}
									}
									else
										return 17.9038;
								}
								else
								{
									if(rsrp < -90.5)
									{
										if(cqi < 10.5)
											return 12.87;
										else
											return 16.0578;
									}
									else
									{
										if(rsrp < -74.5)
										{
											if(sinr < 26.5)
											{
												if(rsrp < -80)
												{
													if(cqi < 11.5)
														return 20.5882;
													else
														return 19.2585;
												}
												else
												{
													if(cqi < 13.5)
														return 15.3257;
													else
														return 18.8947;
												}
											}
											else
												return 21.5054;
										}
										else
										{
											if(sinr < 28.5)
												return 23.976;
											else
												return 20.6718;
										}
									}
								}
							}
							else
							{
								if(rsrp < -82)
								{
									if(velocity < 22.11)
									{
										if(ta < 7.5)
										{
											if(velocity < 13.035)
											{
												if(rsrq < -5.5)
													return 26.1818;
												else
													return 23.3918;
											}
											else
												return 18.5776;
										}
										else
										{
											if(rsrp < -89.5)
												return 26.1973;
											else
												return 28.0088;
										}
									}
									else
									{
										if(payload < 8.5)
										{
											if(cqi < 9.5)
												return 23.2474;
											else
												return 22.5989;
										}
										else
											return 15.2252;
									}
								}
								else
								{
									if(velocity < 31.355)
										return 28.3437;
									else
										return 26.4364;
								}
							}
						}
					}
					else
					{
						if(ta < 23)
						{
							if(rsrp < -69)
							{
								if(payload < 9.5)
									return 29.1262;
								else
									return 24.4424;
							}
							else
							{
								if(rsrq < -5.5)
									return 30.4762;
								else
									return 43.0108;
							}
						}
						else
							return 21.555;
					}
				}
			}
		}
	}
}

float tmobile_dl_tree_4(float payload, float rsrp, float rsrq, float sinr, float cqi, float ta, float velocity, float cell, float f)
{
	if(sinr < 12.5)
	{
		if(payload < 3.5)
		{
			if(payload < 2.5)
			{
				if(rsrp < -96.5)
				{
					if(cqi < 7.5)
					{
						if(rsrq < -12.5)
						{
							if(rsrp < -98.5)
							{
								if(velocity < 23.295)
								{
									if(rsrp < -101.5)
									{
										if(rsrp < -103.5)
										{
											if(sinr < -7)
												return 1.9109;
											else
												return 2.9311033333;
										}
										else
										{
											if(sinr < -2)
												return 0.72464;
											else
												return 1.72302;
										}
									}
									else
									{
										if(velocity < 16.43)
										{
											if(cqi < 4.5)
												return 4.623495;
											else
											{
												if(ta < 16.5)
													return 6.77969;
												else
													return 4.67838;
											}
										}
										else
										{
											if(ta < 8)
												return 1.98118;
											else
												return 0.542962;
										}
									}
								}
								else
									return 8.00801;
							}
							else
								return 7.28597;
						}
						else
						{
							if(rsrp < -107.5)
							{
								if(velocity < 13.64)
								{
									if(sinr < 0.5)
										return 6.22084;
									else
										return 3.26532;
								}
								else
								{
									if(sinr < 0)
										return 12.4611;
									else
										return 10;
								}
							}
							else
							{
								if(velocity < 17.875)
								{
									if(sinr < -2.5)
									{
										if(velocity < 15.06)
										{
											if(rsrq < -9.5)
												return 11.5858;
											else
												return 8.94855;
										}
										else
										{
											if(payload < 1.5)
												return 3.2888566667;
											else
												return 4.62963;
										}
									}
									else
									{
										if(velocity < 14.305)
										{
											if(rsrp < -100.5)
											{
												if(sinr < 4.5)
												{
													if(rsrp < -101.5)
													{
														if(cell < 29741056.5)
															return 5.20617;
														else
															return 2.49766;
													}
													else
														return 1.71013;
												}
												else
												{
													if(velocity < 5.91)
														return 4.56361;
													else
													{
														if(ta < 8.5)
														{
															if(cell < 28878080.5)
																return 7.62631;
															else
																return 8.24745;
														}
														else
														{
															if(payload < 0.75)
																return 9.02935;
															else
																return 8.3682;
														}
													}
												}
											}
											else
											{
												if(cqi < 6.5)
												{
													if(rsrq < -9.5)
													{
														if(payload < 0.3)
															return 5.00002;
														else
														{
															if(velocity < 13.08)
															{
																if(rsrp < -99)
																	return 3.35149;
																else
																	return 2.81294;
															}
															else
																return 1.91663;
														}
													}
													else
													{
														if(rsrp < -98.5)
														{
															if(payload < 0.3)
																return 4.08165;
															else
															{
																if(payload < 0.75)
																	return 10.6101;
																else
																	return 6.918375;
															}
														}
														else
														{
															if(cell < 28368385)
																return 3.17334;
															else
															{
																if(payload < 0.75)
																	return 4.45434;
																else
																	return 6.28437;
															}
														}
													}
												}
												else
												{
													if(cell < 28366720)
														return 1.37907;
													else
													{
														if(rsrq < -11)
															return 4.30109;
														else
															return 3.121085;
													}
												}
											}
										}
										else
										{
											if(velocity < 17.51)
											{
												if(rsrp < -103)
													return 1.3588833333;
												else
												{
													if(cell < 28369793.5)
													{
														if(velocity < 15.9)
															return 3.1252725;
														else
															return 1.74673;
													}
													else
														return 4.1452866667;
												}
											}
											else
												return 7.56144;
										}
									}
								}
								else
								{
									if(sinr < -0.5)
										return 10.8108;
									else
									{
										if(rsrq < -9.5)
										{
											if(rsrp < -101.5)
											{
												if(rsrq < -10.5)
													return 6.87876;
												else
													return 7.61994;
											}
											else
												return 4.85437;
										}
										else
										{
											if(payload < 0.75)
											{
												if(payload < 0.3)
													return 6.01506;
												else
													return 6.72269;
											}
											else
												return 5.2338;
										}
									}
								}
							}
						}
					}
					else
					{
						if(ta < 4.5)
						{
							if(rsrp < -98.5)
								return 6.906985;
							else
								return 8.24317;
						}
						else
						{
							if(rsrp < -98.5)
							{
								if(rsrq < -14)
									return 0.84122;
								else
								{
									if(sinr < 9.5)
									{
										if(rsrp < -99.5)
										{
											if(cell < 30851841)
											{
												if(velocity < 1.53)
													return 2.738386;
												else
												{
													if(velocity < 13.325)
													{
														if(cell < 28366080.5)
														{
															if(rsrp < -104)
																return 3.4866;
															else
															{
																if(rsrq < -8.5)
																	return 4.25534;
																else
																	return 3.66974;
															}
														}
														else
															return 4.41991;
													}
													else
													{
														if(velocity < 32.115)
														{
															if(velocity < 23.525)
																return 2.9962433333;
															else
																return 2.47679;
														}
														else
															return 3.42457;
													}
												}
											}
											else
												return 4.1707866667;
										}
										else
										{
											if(sinr < 7)
												return 2.76625;
											else
												return 1.68634;
										}
									}
									else
										return 1.80811;
								}
							}
							else
							{
								if(cqi < 11.5)
								{
									if(velocity < 7.44)
									{
										if(rsrq < -10.5)
											return 7.20723;
										else
											return 7.70713;
									}
									else
									{
										if(rsrq < -9)
											return 5.72153;
										else
											return 5.22878;
									}
								}
								else
									return 2.31885;
							}
						}
					}
				}
				else
				{
					if(payload < 0.75)
					{
						if(rsrp < -95.5)
						{
							if(cqi < 5.5)
								return 38.0954;
							else
							{
								if(rsrq < -6.5)
								{
									if(cell < 28071170)
										return 0.355241;
									else
									{
										if(velocity < 8.455)
											return 5.67378;
										else
										{
											if(rsrq < -10.5)
												return 3.61337;
											else
											{
												if(ta < 4.5)
													return 4.21054;
												else
													return 4.67838;
											}
										}
									}
								}
								else
									return 9.63855;
							}
						}
						else
						{
							if(payload < 0.3)
							{
								if(velocity < 27.96)
								{
									if(sinr < 3.5)
									{
										if(ta < 7.5)
											return 3.269568;
										else
										{
											if(sinr < 1.5)
											{
												if(ta < 11)
													return 5.51726;
												else
													return 4.46929;
											}
											else
												return 3.70372;
										}
									}
									else
									{
										if(ta < 5)
										{
											if(rsrp < -81)
											{
												if(velocity < 13.395)
													return 3.5257625;
												else
													return 4.024725;
											}
											else
												return 5.29803;
										}
										else
										{
											if(velocity < 12.98)
											{
												if(cqi < 6.5)
												{
													if(velocity < 1.165)
														return 8.60218;
													else
														return 4.8485;
												}
												else
												{
													if(ta < 9.5)
													{
														if(f < 2232.5)
														{
															if(rsrp < -87)
															{
																if(rsrp < -93.5)
																	return 3.43349;
																else
																{
																	if(sinr < 7.5)
																	{
																		if(ta < 7)
																			return 3.88351;
																		else
																			return 4.4944;
																	}
																	else
																	{
																		if(sinr < 8.5)
																			return 5.485905;
																		else
																		{
																			if(rsrp < -88.5)
																				return 4.52884;
																			else
																				return 5.06331;
																		}
																	}
																}
															}
															else
																return 3.72291;
														}
														else
															return 2.93041;
													}
													else
														return 5.4157575;
												}
											}
											else
											{
												if(f < 1384.95)
													return 4.8193;
												else
												{
													if(cell < 29741056)
													{
														if(velocity < 14.715)
														{
															if(sinr < 9.5)
																return 5.548128;
															else
																return 6.20157;
														}
														else
															return 6.6116;
													}
													else
														return 8.42108;
												}
											}
										}
									}
								}
								else
									return 0.070194;
							}
							else
							{
								if(cell < 27771523.5)
								{
									if(rsrp < -86.5)
									{
										if(rsrq < -7.5)
											return 4.10678;
										else
										{
											if(sinr < 5.5)
												return 8.26446;
											else
											{
												if(cell < 26378626)
													return 8.69565;
												else
												{
													if(velocity < 15.245)
													{
														if(rsrp < -88.5)
														{
															if(velocity < 13.355)
															{
																if(cqi < 9)
																	return 4.61894;
																else
																	return 5.28402;
															}
															else
																return 6.26959;
														}
														else
														{
															if(rsrp < -87.5)
																return 6.50407;
															else
																return 7.50469;
														}
													}
													else
														return 8.24742;
												}
											}
										}
									}
									else
									{
										if(cqi < 14)
										{
											if(rsrq < -6.5)
											{
												if(cqi < 7)
													return 10.2834;
												else
												{
													if(rsrq < -7.5)
													{
														if(rsrp < -84.5)
															return 12.6183;
														else
															return 11.49575;
													}
													else
														return 14.7059;
												}
											}
											else
												return 6.18238;
										}
										else
											return 5.73888;
									}
								}
								else
								{
									if(rsrp < -85.5)
									{
										if(velocity < 11.355)
										{
											if(cell < 28883331)
											{
												if(sinr < 2.5)
													return 3.6461025;
												else
												{
													if(sinr < 10)
													{
														if(rsrq < -10)
														{
															if(cqi < 8.5)
																return 4.14938;
															else
																return 4.75624;
														}
														else
														{
															if(cqi < 7)
																return 6.0423;
															else
																return 4.73934;
														}
													}
													else
														return 7.16846;
												}
											}
											else
											{
												if(rsrq < -7)
													return 6.99301;
												else
												{
													if(sinr < 11)
													{
														if(rsrq < -5.5)
															return 9.66184;
														else
															return 8.65801;
													}
													else
													{
														if(velocity < 9.295)
															return 6.34921;
														else
															return 8.81057;
													}
												}
											}
										}
										else
										{
											if(sinr < 7.5)
											{
												if(ta < 29.5)
													return 2.0229333333;
												else
													return 0.718649;
											}
											else
											{
												if(rsrq < -6.5)
												{
													if(sinr < 11.5)
													{
														if(rsrp < -92)
															return 3.38409;
														else
															return 4.33369;
													}
													else
														return 6.49351;
												}
												else
													return 5.83942;
											}
										}
									}
									else
									{
										if(rsrq < -8.5)
											return 9.38967;
										else
											return 8.766826;
									}
								}
							}
						}
					}
					else
					{
						if(cqi < 7.5)
						{
							if(velocity < 12.715)
							{
								if(ta < 10.5)
								{
									if(rsrq < -6.5)
									{
										if(cell < 28366081.5)
										{
											if(cell < 26912771)
											{
												if(sinr < 8.5)
												{
													if(cqi < 5)
														return 9.88875;
													else
													{
														if(rsrq < -10)
															return 9.38967;
														else
														{
															if(cell < 26587523)
																return 8.59925;
															else
																return 9.1954;
														}
													}
												}
												else
													return 7.21371;
											}
											else
												return 9.72271;
										}
										else
										{
											if(rsrp < -94.5)
												return 8.01603;
											else
												return 7.08278;
										}
									}
									else
									{
										if(sinr < 6)
											return 13.986;
										else
											return 12.2888;
									}
								}
								else
								{
									if(rsrp < -94)
										return 3.67309;
									else
										return 6.38978;
								}
							}
							else
							{
								if(rsrq < -8.5)
								{
									if(cell < 27283586.5)
									{
										if(rsrp < -90)
											return 5.66572;
										else
											return 7.25295;
									}
									else
									{
										if(cqi < 3.5)
											return 0.472283;
										else
										{
											if(rsrp < -93)
												return 3.0518625;
											else
											{
												if(rsrp < -89)
													return 4.59506;
												else
													return 3.996;
											}
										}
									}
								}
								else
								{
									if(cqi < 6.5)
									{
										if(rsrp < -84)
											return 10.1074;
										else
											return 9.28074;
									}
									else
										return 5.91785;
								}
							}
						}
						else
						{
							if(cell < 28368385)
							{
								if(velocity < 11.79)
								{
									if(rsrp < -89.5)
									{
										if(ta < 7.5)
										{
											if(rsrp < -93.5)
												return 7.42804;
											else
											{
												if(payload < 1.5)
													return 12.0846;
												else
													return 10.9589;
											}
										}
										else
										{
											if(rsrp < -93)
												return 7.40741;
											else
												return 8.8314533333;
										}
									}
									else
									{
										if(rsrp < -84.5)
										{
											if(payload < 1.5)
												return 6.58168;
											else
												return 7.26239;
										}
										else
										{
											if(ta < 3)
												return 7.37327;
											else
												return 8.61141;
										}
									}
								}
								else
								{
									if(velocity < 12.4)
									{
										if(payload < 1.5)
											return 20.7254;
										else
											return 25.5183;
									}
									else
									{
										if(payload < 1.5)
										{
											if(rsrp < -94)
												return 0.219262;
											else
											{
												if(cell < 28069122.5)
												{
													if(ta < 5.5)
														return 10.6242;
													else
													{
														if(rsrq < -8.5)
															return 9.82649;
														else
														{
															if(ta < 10)
																return 5.64573;
															else
																return 7.565395;
														}
													}
												}
												else
													return 14.4404;
											}
										}
										else
										{
											if(velocity < 12.94)
											{
												if(velocity < 12.625)
													return 11.5942;
												else
													return 6.91742;
											}
											else
											{
												if(ta < 1.5)
													return 16.178;
												else
												{
													if(cell < 27026308)
													{
														if(rsrp < -75)
															return 13.5823;
														else
															return 13.0293;
													}
													else
														return 15.9521;
												}
											}
										}
									}
								}
							}
							else
							{
								if(rsrp < -88.5)
								{
									if(velocity < 8.12)
										return 13.5939;
									else
									{
										if(rsrq < -9.5)
										{
											if(rsrp < -92.5)
												return 3.03375;
											else
												return 1.24079;
										}
										else
										{
											if(sinr < 9.5)
											{
												if(rsrp < -92)
													return 7.46269;
												else
													return 8.33768;
											}
											else
											{
												if(velocity < 10.84)
												{
													if(rsrq < -7)
														return 7.44879;
													else
														return 5.88019;
												}
												else
													return 2.875915;
											}
										}
									}
								}
								else
								{
									if(cqi < 10)
										return 5.43848;
									else
									{
										if(sinr < 11.5)
										{
											if(velocity < 13.51)
											{
												if(rsrp < -86)
													return 7.17811;
												else
													return 9.71463;
											}
											else
												return 12.966;
										}
										else
										{
											if(rsrq < -5.5)
												return 6.51997;
											else
												return 7.5543;
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
					if(sinr < 11.5)
					{
						if(rsrp < -98.5)
						{
							if(cell < 28068482.5)
							{
								if(rsrp < -106)
									return 2.77939;
								else
									return 4.52659;
							}
							else
							{
								if(velocity < 4.7)
									return 5.75678;
								else
								{
									if(rsrq < -8.5)
									{
										if(cqi < 7.5)
										{
											if(ta < 11.5)
											{
												if(cell < 29140865.5)
													return 13.4831;
												else
													return 12.0664;
											}
											else
												return 14.742;
										}
										else
										{
											if(rsrp < -103)
												return 11.2835;
											else
												return 13.0364;
										}
									}
									else
									{
										if(velocity < 33.54)
										{
											if(cqi < 7.5)
												return 11.6448;
											else
											{
												if(rsrp < -102)
													return 10.2784;
												else
													return 9.596975;
											}
										}
										else
											return 13.5823;
									}
								}
							}
						}
						else
						{
							if(rsrq < -10.5)
							{
								if(velocity < 3.075)
									return 2.95676;
								else
								{
									if(cell < 28366721.5)
									{
										if(ta < 10)
										{
											if(velocity < 10.775)
												return 6.23701;
											else
												return 6.73426;
										}
										else
											return 8.36237;
									}
									else
									{
										if(cqi < 7.5)
											return 7.821176;
										else
											return 7.29483;
									}
								}
							}
							else
							{
								if(rsrp < -97)
								{
									if(ta < 7.5)
										return 11.7417;
									else
										return 4.32468;
								}
								else
								{
									if(velocity < 4.145)
									{
										if(rsrp < -94.5)
										{
											if(rsrq < -9.5)
												return 10.084;
											else
												return 11.0345;
										}
										else
										{
											if(ta < 10)
												return 10.1095;
											else
												return 15.4143;
										}
									}
									else
									{
										if(rsrp < -91.5)
										{
											if(rsrp < -92.5)
											{
												if(cqi < 8)
												{
													if(sinr < 1.5)
													{
														if(rsrq < -9)
															return 8.12733;
														else
															return 7.20288;
													}
													else
													{
														if(sinr < 6)
														{
															if(rsrq < -9.5)
																return 10.3761;
															else
																return 10.8794;
														}
														else
															return 8.50159;
													}
												}
												else
												{
													if(sinr < 8)
														return 5.01253;
													else
														return 3.94997;
												}
											}
											else
											{
												if(sinr < 7.5)
												{
													if(ta < 3)
														return 15;
													else
														return 12.5523;
												}
												else
												{
													if(sinr < 9.5)
														return 10.9141;
													else
														return 9.0978;
												}
											}
										}
										else
										{
											if(rsrq < -7)
											{
												if(cell < 27833218.5)
													return 9.12895;
												else
												{
													if(sinr < 8)
														return 5.98802;
													else
														return 3.57888;
												}
											}
											else
												return 12.4095;
										}
									}
								}
							}
						}
					}
					else
					{
						if(rsrq < -7.5)
							return 5.66572;
						else
							return 3.8666;
					}
				}
				else
				{
					if(velocity < 13.685)
					{
						if(rsrq < -5.5)
						{
							if(ta < 6.5)
							{
								if(velocity < 11.685)
								{
									if(sinr < 7.5)
									{
										if(rsrp < -84.5)
											return 11.988;
										else
										{
											if(cell < 28879105)
												return 10.968775;
											else
												return 11.7073;
										}
									}
									else
									{
										if(ta < 1.5)
											return 11.0446;
										else
										{
											if(ta < 3)
												return 15.2381;
											else
												return 13.3907;
										}
									}
								}
								else
								{
									if(sinr < 4)
										return 7.76448;
									else
										return 8.64553;
								}
							}
							else
							{
								if(cell < 27888515)
									return 11.2202;
								else
									return 13.4137;
							}
						}
						else
							return 7.05467;
					}
					else
					{
						if(ta < 1.5)
							return 12.487;
						else
						{
							if(rsrq < -5.5)
							{
								if(rsrp < -81.5)
								{
									if(sinr < 4.5)
										return 14.0433;
									else
									{
										if(rsrq < -7.5)
											return 16.1074;
										else
											return 15.3649;
									}
								}
								else
									return 13.5607333333;
							}
							else
								return 17.48;
						}
					}
				}
			}
		}
		else
		{
			if(payload < 6.5)
			{
				if(rsrp < -90.5)
				{
					if(rsrq < -12.5)
					{
						if(rsrp < -98.5)
						{
							if(payload < 4.5)
								return 2.6936;
							else
								return 3.53982;
						}
						else
							return 0.759503;
					}
					else
					{
						if(cell < 28371201.5)
						{
							if(sinr < -2.5)
							{
								if(sinr < -3.5)
								{
									if(cqi < 5.5)
										return 4.75172;
									else
										return 4.19068;
								}
								else
									return 2.0739933333;
							}
							else
							{
								if(sinr < 11.5)
								{
									if(ta < 4.5)
									{
										if(velocity < 13.585)
										{
											if(velocity < 8.81)
											{
												if(rsrp < -99)
													return 14.9198;
												else
												{
													if(velocity < 7.255)
														return 15.6403;
													else
														return 16.219;
												}
											}
											else
											{
												if(payload < 4.5)
												{
													if(rsrp < -98)
														return 10.4987;
													else
														return 13.3445;
												}
												else
												{
													if(rsrq < -9.5)
														return 11.8308;
													else
													{
														if(rsrq < -7.5)
															return 14.218;
														else
															return 15.0773;
													}
												}
											}
										}
										else
										{
											if(rsrp < -96.5)
												return 16.7856;
											else
												return 17.6913;
										}
									}
									else
									{
										if(rsrp < -98.5)
										{
											if(cell < 28368385)
											{
												if(rsrq < -8.5)
												{
													if(velocity < 8.295)
													{
														if(payload < 5.5)
														{
															if(rsrp < -108)
																return 8.76472;
															else
															{
																if(rsrp < -105.5)
																	return 4.65008;
																else
																{
																	if(payload < 4.5)
																		return 2.22454;
																	else
																		return 2.96099;
																}
															}
														}
														else
															return 10.5518;
													}
													else
													{
														if(rsrp < -106.5)
															return 13.7127;
														else
														{
															if(rsrp < -99.5)
															{
																if(cell < 28068482.5)
																	return 6.92521;
																else
																{
																	if(sinr < 6)
																	{
																		if(cqi < 6.5)
																			return 9.8595;
																		else
																			return 10.4685;
																	}
																	else
																		return 8.93356;
																}
															}
															else
															{
																if(payload < 4.5)
																	return 9.86436;
																else
																	return 12.5707;
															}
														}
													}
												}
												else
												{
													if(velocity < 14.985)
													{
														if(payload < 5.5)
															return 11.564;
														else
															return 12.1243;
													}
													else
														return 13.197;
												}
											}
											else
											{
												if(cqi < 5.5)
													return 10.6054;
												else
												{
													if(rsrp < -106)
														return 2.66436;
													else
													{
														if(cqi < 9.5)
														{
															if(rsrp < -100)
															{
																if(ta < 11.5)
																{
																	if(rsrq < -9.5)
																		return 4.79832;
																	else
																		return 5.42594;
																}
																else
																	return 6.53862;
															}
															else
																return 8.79846;
														}
														else
															return 2.9848;
													}
												}
											}
										}
										else
										{
											if(velocity < 16.625)
											{
												if(rsrq < -8.5)
												{
													if(ta < 7.5)
													{
														if(sinr < 1)
														{
															if(cell < 27376258)
																return 15.9257;
															else
																return 15.3895;
														}
														else
															return 9.1729466667;
													}
													else
													{
														if(cqi < 11.5)
														{
															if(velocity < 14.025)
															{
																if(velocity < 12.08)
																{
																	if(sinr < 10.5)
																	{
																		if(velocity < 7.1)
																		{
																			if(payload < 4.5)
																				return 11.9626;
																			else
																			{
																				if(sinr < 7.5)
																					return 10.4134666667;
																				else
																					return 9.921582;
																			}
																		}
																		else
																			return 8.80572;
																	}
																	else
																		return 8.79507;
																}
																else
																	return 5.75126;
															}
															else
																return 14.2096;
														}
														else
															return 5.42152;
													}
												}
												else
												{
													if(cell < 26382211.5)
														return 8.67444;
													else
													{
														if(cqi < 10)
														{
															if(sinr < 2)
																return 18.8828;
															else
															{
																if(velocity < 15.795)
																{
																	if(cqi < 8.5)
																	{
																		if(payload < 5)
																			return 15.6709;
																		else
																			return 16.5039;
																	}
																	else
																		return 14.6453;
																}
																else
																	return 11.8299;
															}
														}
														else
														{
															if(cell < 28366720)
															{
																if(f < 2232.5)
																	return 15.9734;
																else
																	return 13.1687;
															}
															else
															{
																if(payload < 5.5)
																	return 9.74184;
																else
																	return 8.67993;
															}
														}
													}
												}
											}
											else
											{
												if(rsrp < -95)
													return 6.8918;
												else
													return 5.80201;
											}
										}
									}
								}
								else
									return 18.3276;
							}
						}
						else
						{
							if(ta < 4.5)
							{
								if(sinr < 2)
								{
									if(rsrq < -10.5)
										return 12.3533;
									else
									{
										if(rsrp < -100)
											return 17.5889;
										else
											return 15.5491;
									}
								}
								else
								{
									if(ta < 1.5)
									{
										if(rsrq < -6.5)
											return 7.50469;
										else
											return 3.95452;
									}
									else
									{
										if(payload < 4.5)
										{
											if(sinr < 7.5)
											{
												if(cell < 29652224.5)
													return 13.1363;
												else
												{
													if(sinr < 4.5)
														return 10.2204;
													else
														return 8.85445;
												}
											}
											else
												return 14.7943;
										}
										else
										{
											if(payload < 5.5)
												return 7.833;
											else
											{
												if(rsrq < -7)
													return 9.89895;
												else
													return 10.7623;
											}
										}
									}
								}
							}
							else
							{
								if(cell < 29394690.5)
								{
									if(velocity < 10.045)
										return 20.3562;
									else
									{
										if(rsrq < -9.5)
											return 15.4381;
										else
											return 16.42254;
									}
								}
								else
								{
									if(rsrp < -101.5)
									{
										if(rsrp < -106.5)
											return 10.6833;
										else
										{
											if(rsrq < -9)
											{
												if(rsrp < -102.5)
													return 10.2328;
												else
													return 9.22545;
											}
											else
												return 5.96036;
										}
									}
									else
									{
										if(rsrp < -100.5)
											return 21.9178;
										else
										{
											if(cqi < 12.5)
											{
												if(rsrp < -96.5)
												{
													if(sinr < -3.5)
														return 8.69723;
													else
													{
														if(cell < 30167808.5)
														{
															if(payload < 5.5)
															{
																if(rsrq < -6.5)
																{
																	if(rsrq < -7.5)
																	{
																		if(sinr < 3)
																			return 11.40835;
																		else
																			return 12.77345;
																	}
																	else
																		return 13.3278;
																}
																else
																	return 10.3093;
															}
															else
																return 15.7947;
														}
														else
															return 8.4063;
													}
												}
												else
												{
													if(payload < 4.5)
														return 10.0313;
													else
													{
														if(rsrq < -10)
														{
															if(rsrq < -11.5)
																return 15.4989;
															else
															{
																if(cqi < 5.5)
																	return 12.3077;
																else
																	return 10.4735;
															}
														}
														else
														{
															if(rsrq < -7)
															{
																if(cqi < 9)
																{
																	if(payload < 5.5)
																		return 17.0648;
																	else
																		return 17.6665;
																}
																else
																	return 19.2678;
															}
															else
															{
																if(velocity < 12.715)
																{
																	if(rsrp < -92)
																		return 18.0505;
																	else
																		return 13.8456;
																}
																else
																	return 12.6622;
															}
														}
													}
												}
											}
											else
											{
												if(payload < 5.5)
												{
													if(sinr < 7.5)
														return 6.69456;
													else
														return 9.20598;
												}
												else
													return 9.7107;
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
					if(ta < 1.5)
					{
						if(rsrq < -5.5)
						{
							if(rsrp < -83.5)
							{
								if(sinr < 10.5)
								{
									if(rsrp < -87.5)
										return 18.8857;
									else
									{
										if(payload < 5.5)
											return 19.5886;
										else
											return 18.9949;
									}
								}
								else
									return 16.4046;
							}
							else
								return 22.9753;
						}
						else
						{
							if(rsrp < -79)
								return 22.792;
							else
								return 19.9302;
						}
					}
					else
					{
						if(f < 1384.95)
						{
							if(cqi < 9.5)
								return 7.62195;
							else
								return 7.05779;
						}
						else
						{
							if(cell < 33527553)
							{
								if(velocity < 6.94)
								{
									if(rsrq < -10.5)
									{
										if(cqi < 9.5)
											return 10.3986;
										else
											return 2.72712;
									}
									else
									{
										if(rsrp < -87)
										{
											if(sinr < 2.5)
												return 9.28343;
											else
											{
												if(cell < 28878080)
												{
													if(rsrp < -88.5)
													{
														if(cqi < 8.5)
															return 11.17828;
														else
															return 12.1059;
													}
													else
														return 9.70285;
												}
												else
													return 11.5816;
											}
										}
										else
										{
											if(payload < 4.5)
											{
												if(velocity < 2.105)
													return 13.3867666667;
												else
													return 14.4209;
											}
											else
											{
												if(cqi < 10.5)
													return 14.7874;
												else
													return 16.3733;
											}
										}
									}
								}
								else
								{
									if(rsrq < -7.5)
									{
										if(sinr < 3.5)
										{
											if(ta < 4.5)
											{
												if(payload < 4.5)
													return 20.5523;
												else
												{
													if(rsrq < -9)
														return 18.2899;
													else
														return 17.0285;
												}
											}
											else
											{
												if(cqi < 10)
												{
													if(velocity < 11.795)
													{
														if(payload < 5.5)
															return 15.9291;
														else
															return 13.6325;
													}
													else
													{
														if(cqi < 7)
															return 10.5904;
														else
															return 12.8874;
													}
												}
												else
													return 10.5727;
											}
										}
										else
										{
											if(cqi < 11.5)
											{
												if(cell < 31720449)
												{
													if(f < 2232.5)
													{
														if(rsrp < -86.5)
														{
															if(sinr < 6)
																return 15.7095666667;
															else
															{
																if(rsrq < -9.5)
																	return 17.6861;
																else
																	return 16.7997;
															}
														}
														else
														{
															if(cqi < 6.5)
																return 16.5717;
															else
															{
																if(cqi < 9.5)
																	return 14.4256666667;
																else
																	return 12.7755;
															}
														}
													}
													else
														return 13.0976;
												}
												else
													return 18.6989;
											}
											else
											{
												if(cell < 28068099)
												{
													if(sinr < 9)
													{
														if(rsrp < -82.5)
															return 13.8217;
														else
															return 14.863;
													}
													else
														return 20.9424;
												}
												else
												{
													if(rsrq < -9.5)
														return 20.8424;
													else
														return 22.7596;
												}
											}
										}
									}
									else
									{
										if(sinr < 1.5)
											return 6.13732;
										else
										{
											if(rsrq < -5.5)
											{
												if(ta < 9.5)
												{
													if(velocity < 10.235)
													{
														if(sinr < 4.5)
															return 10.4384;
														else
															return 11.0079;
													}
													else
													{
														if(ta < 8.5)
														{
															if(payload < 4.5)
															{
																if(velocity < 15.1)
																{
																	if(rsrp < -83.5)
																	{
																		if(velocity < 12.78)
																		{
																			if(velocity < 11.715)
																				return 15.5189;
																			else
																				return 12.62505;
																		}
																		else
																		{
																			if(cqi < 8.5)
																				return 16.0401;
																			else
																			{
																				if(velocity < 14.045)
																					return 15.6326;
																				else
																					return 14.4209;
																			}
																		}
																	}
																	else
																		return 12.431;
																}
																else
																{
																	if(cell < 29741056)
																	{
																		if(rsrp < -84.5)
																			return 12.8462;
																		else
																			return 14.4862;
																	}
																	else
																		return 10.0597;
																}
															}
															else
															{
																if(sinr < 6.5)
																	return 12.5294;
																else
																{
																	if(sinr < 11.5)
																	{
																		if(velocity < 14.29)
																		{
																			if(sinr < 9.5)
																			{
																				if(sinr < 8.5)
																					return 18.1887;
																				else
																					return 17.4064;
																			}
																			else
																			{
																				if(cqi < 4)
																					return 14.6252;
																				else
																					return 15.8411;
																			}
																		}
																		else
																		{
																			if(ta < 6.5)
																				return 20.284;
																			else
																				return 17.2352;
																		}
																	}
																	else
																		return 12.6516;
																}
															}
														}
														else
															return 20.8469;
													}
												}
												else
												{
													if(rsrp < -84)
													{
														if(f < 2232.5)
															return 8.94604;
														else
															return 12.3967;
													}
													else
													{
														if(sinr < 9.5)
															return 16.129;
														else
															return 15.1688;
													}
												}
											}
											else
												return 24.0361;
										}
									}
								}
							}
							else
								return 33.8266;
						}
					}
				}
			}
			else
			{
				if(velocity < 37.61)
				{
					if(rsrq < -7.5)
					{
						if(cell < 30203137.5)
						{
							if(rsrp < -103.5)
							{
								if(velocity < 14.37)
								{
									if(velocity < 11.295)
									{
										if(rsrp < -110.5)
										{
											if(sinr < -4)
												return 13.35;
											else
												return 9.4585;
										}
										else
										{
											if(velocity < 1.19)
											{
												if(payload < 8.5)
													return 8.10948;
												else
												{
													if(rsrq < -9)
														return 4.78813;
													else
													{
														if(sinr < 3)
															return 5.74163;
														else
															return 6.41952;
													}
												}
											}
											else
											{
												if(cqi < 9)
												{
													if(velocity < 6.05)
														return 9.28613;
													else
														return 8.7318575;
												}
												else
													return 8.14747;
											}
										}
									}
									else
									{
										if(cell < 29657473)
										{
											if(cell < 28367745.5)
											{
												if(sinr < 2.5)
												{
													if(rsrp < -105)
														return 9.6087;
													else
														return 10.3778;
												}
												else
													return 11.9092;
											}
											else
											{
												if(rsrq < -11)
													return 7.61905;
												else
													return 9.62034;
											}
										}
										else
											return 14.9841;
									}
								}
								else
								{
									if(rsrq < -9)
									{
										if(payload < 7.5)
											return 12.0586;
										else
											return 14.6526166667;
									}
									else
										return 12.6183;
								}
							}
							else
							{
								if(cell < 27771522.5)
								{
									if(ta < 1.5)
									{
										if(rsrq < -9)
											return 38.5356;
										else
										{
											if(rsrp < -90.5)
												return 18.7354;
											else
												return 24.3013;
										}
									}
									else
									{
										if(velocity < 1.065)
										{
											if(sinr < 8)
											{
												if(rsrp < -88)
													return 12.7389;
												else
												{
													if(cell < 27047811.5)
														return 14.0924;
													else
														return 15.0801;
												}
											}
											else
											{
												if(payload < 8.5)
													return 15.9453;
												else
													return 17.9533;
											}
										}
										else
										{
											if(rsrp < -98.5)
												return 8.56875;
											else
											{
												if(cqi < 11.5)
												{
													if(velocity < 12.175)
													{
														if(cqi < 7.5)
														{
															if(rsrp < -90.5)
															{
																if(payload < 9.5)
																	return 14.3113;
																else
																	return 15.1;
															}
															else
															{
																if(rsrp < -87)
																{
																	if(ta < 5)
																		return 17.5103;
																	else
																		return 16.885625;
																}
																else
																	return 15.3073;
															}
														}
														else
														{
															if(rsrp < -89.5)
																return 21.1144;
															else
															{
																if(payload < 9.5)
																	return 23.692;
																else
																	return 24.9221;
															}
														}
													}
													else
													{
														if(ta < 5.5)
														{
															if(payload < 8.5)
																return 19.8388;
															else
																return 21.4733;
														}
														else
														{
															if(payload < 7.5)
																return 10.9825;
															else
															{
																if(f < 2232.5)
																{
																	if(cqi < 7.5)
																	{
																		if(velocity < 33.245)
																			return 14.6748666667;
																		else
																			return 16.3525;
																	}
																	else
																	{
																		if(cell < 27078146.5)
																			return 15.9402;
																		else
																		{
																			if(ta < 14)
																				return 17.035125;
																			else
																				return 18.1098;
																		}
																	}
																}
																else
																	return 20.7433;
															}
														}
													}
												}
												else
												{
													if(sinr < 8)
														return 24.5587;
													else
														return 23.2172;
												}
											}
										}
									}
								}
								else
								{
									if(ta < 16.5)
									{
										if(rsrq < -8.5)
										{
											if(cell < 28368385)
											{
												if(cell < 28366081)
												{
													if(rsrp < -99.5)
													{
														if(rsrp < -101.5)
															return 11.5274;
														else
														{
															if(velocity < 13.405)
																return 8.92558;
															else
																return 6.93016;
														}
													}
													else
													{
														if(ta < 8.5)
														{
															if(rsrp < -96.5)
																return 18.5346;
															else
															{
																if(rsrp < -88.5)
																{
																	if(rsrq < -12.5)
																		return 18.0006;
																	else
																	{
																		if(rsrp < -93.5)
																			return 12.7273;
																		else
																		{
																			if(cqi < 8.5)
																			{
																				if(sinr < 5)
																				{
																					if(cqi < 5.5)
																						return 15.5729;
																					else
																						return 14.0154;
																				}
																				else
																					return 17.8571;
																			}
																			else
																				return 13.8388666667;
																		}
																	}
																}
																else
																{
																	if(sinr < -1.5)
																		return 11.8468;
																	else
																	{
																		if(sinr < 0)
																			return 13.858;
																		else
																			return 13.28805;
																	}
																}
															}
														}
														else
														{
															if(payload < 8.5)
																return 13.2286;
															else
																return 8.09353;
														}
													}
												}
												else
												{
													if(sinr < 0)
														return 22.2134;
													else
													{
														if(cell < 28367105.5)
														{
															if(rsrq < -9.5)
															{
																if(payload < 8.5)
																	return 17.9143;
																else
																	return 18.4672;
															}
															else
															{
																if(rsrp < -89)
																	return 20.5011;
																else
																	return 21.9378;
															}
														}
														else
														{
															if(ta < 5.5)
															{
																if(velocity < 6.905)
																	return 13.1177;
																else
																	return 12.3839;
															}
															else
															{
																if(rsrq < -9.5)
																{
																	if(rsrq < -10.5)
																	{
																		if(velocity < 9.225)
																			return 16.5387;
																		else
																		{
																			if(payload < 8.5)
																				return 20.3859;
																			else
																				return 19.656;
																		}
																	}
																	else
																	{
																		if(payload < 9)
																			return 11.0497;
																		else
																			return 11.7699;
																	}
																}
																else
																{
																	if(rsrp < -99.5)
																	{
																		if(sinr < 8)
																			return 19.3295;
																		else
																			return 20.1342;
																	}
																	else
																		return 15.891;
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
													if(rsrq < -9.5)
													{
														if(rsrq < -10.5)
														{
															if(velocity < 7.83)
																return 10.2302;
															else
															{
																if(velocity < 12.85)
																	return 13.66065;
																else
																	return 14.38405;
															}
														}
														else
														{
															if(sinr < 5)
																return 12.2431;
															else
																return 9.12513;
														}
													}
													else
														return 5.35885;
												}
												else
												{
													if(payload < 7.5)
													{
														if(ta < 5)
														{
															if(rsrp < -96)
																return 14.6329;
															else
																return 13.3907;
														}
														else
														{
															if(ta < 14)
															{
																if(velocity < 11.755)
																	return 16.3316666667;
																else
																	return 21.156;
															}
															else
																return 14.2096;
														}
													}
													else
													{
														if(velocity < 1.045)
														{
															if(ta < 12.5)
															{
																if(rsrq < -11)
																	return 15.6671;
																else
																{
																	if(rsrq < -9.5)
																		return 16.8579;
																	else
																		return 17.66;
																}
															}
															else
																return 14.3982;
														}
														else
														{
															if(sinr < 10.5)
															{
																if(payload < 9.5)
																{
																	if(sinr < 9)
																	{
																		if(velocity < 9.475)
																		{
																			if(rsrq < -9.5)
																			{
																				if(rsrp < -93)
																					return 11.8694;
																				else
																					return 14.716;
																			}
																			else
																				return 11.6491;
																		}
																		else
																		{
																			if(sinr < 3)
																				return 8.45666;
																			else
																				return 10.37686;
																		}
																	}
																	else
																		return 6.04483;
																}
																else
																{
																	if(velocity < 13.975)
																	{
																		if(rsrq < -9.5)
																		{
																			if(rsrp < -90.5)
																			{
																				if(sinr < 0)
																					return 10.9364;
																				else
																				{
																					if(cqi < 6)
																						return 11.2407;
																					else
																						return 9.46634;
																				}
																			}
																			else
																				return 12.4883;
																		}
																		else
																			return 15.5009;
																	}
																	else
																	{
																		if(ta < 15)
																			return 17.5362;
																		else
																			return 20.6879;
																	}
																}
															}
															else
															{
																if(rsrp < -93)
																{
																	if(payload < 9)
																		return 17.288;
																	else
																		return 16.3499;
																}
																else
																	return 14.4372;
															}
														}
													}
												}
											}
										}
										else
										{
											if(cell < 28366082)
											{
												if(ta < 8.5)
													return 10.6201;
												else
												{
													if(cqi < 9)
														return 14.9477;
													else
														return 16.7785;
												}
											}
											else
											{
												if(cell < 29485184.5)
												{
													if(cqi < 8.5)
													{
														if(f < 2232.5)
														{
															if(sinr < 6.5)
															{
																if(cell < 28368385)
																{
																	if(rsrp < -97.5)
																		return 13.7292;
																	else
																		return 20.2817;
																}
																else
																{
																	if(rsrp < -100.5)
																		return 19.9336;
																	else
																		return 23.0548;
																}
															}
															else
															{
																if(sinr < 8.5)
																{
																	if(ta < 6.5)
																		return 22.5273;
																	else
																	{
																		if(sinr < 7.5)
																		{
																			if(rsrp < -101.5)
																				return 21.8043;
																			else
																				return 21.2515;
																		}
																		else
																			return 20.6034;
																	}
																}
																else
																	return 23.4398;
															}
														}
														else
															return 16.6359;
													}
													else
													{
														if(velocity < 5.095)
															return 11.0497;
														else
														{
															if(velocity < 10.685)
															{
																if(ta < 8.5)
																	return 19.98;
																else
																	return 19.3504;
															}
															else
																return 16.5631;
														}
													}
												}
												else
												{
													if(cell < 29568768.5)
													{
														if(rsrp < -92.5)
															return 14.7874;
														else
															return 13.557;
													}
													else
														return 9.73744;
												}
											}
										}
									}
									else
									{
										if(f < 1384.95)
											return 7.47175;
										else
										{
											if(payload < 8.5)
												return 10.5803;
											else
												return 9.19658;
										}
									}
								}
							}
						}
						else
						{
							if(rsrp < -91)
							{
								if(cell < 33682564.5)
								{
									if(cqi < 5.5)
									{
										if(rsrp < -100.5)
										{
											if(rsrq < -14.5)
												return 8.73771;
											else
												return 10.8401;
										}
										else
										{
											if(rsrp < -97.5)
												return 5.205315;
											else
												return 7.3791;
										}
									}
									else
									{
										if(payload < 8)
											return 4.97778;
										else
										{
											if(payload < 9.5)
												return 18.3533;
											else
												return 17.5786;
										}
									}
								}
								else
								{
									if(payload < 8.5)
										return 14.7407;
									else
										return 13.5593;
								}
							}
							else
							{
								if(payload < 9)
									return 1.47623;
								else
									return 3.12476;
							}
						}
					}
					else
					{
						if(cqi < 12.5)
						{
							if(payload < 9.5)
							{
								if(cell < 27299331.5)
								{
									if(rsrp < -89)
										return 28.2132;
									else
									{
										if(cell < 26378625.5)
										{
											if(rsrq < -6.5)
												return 17.7866;
											else
												return 36.3843;
										}
										else
										{
											if(rsrp < -86.5)
											{
												if(payload < 8.5)
												{
													if(ta < 5)
														return 12.4031;
													else
													{
														if(payload < 7.5)
															return 16.2791;
														else
															return 15.4814;
													}
												}
												else
													return 18.8432;
											}
											else
											{
												if(cqi < 8.5)
												{
													if(payload < 8)
														return 23.6887;
													else
														return 26.0586;
												}
												else
												{
													if(rsrq < -6.5)
														return 14.8227;
													else
														return 19.656;
												}
											}
										}
									}
								}
								else
								{
									if(rsrp < -87.5)
									{
										if(velocity < 11.415)
										{
											if(sinr < 10.5)
											{
												if(sinr < 9.5)
												{
													if(velocity < 8.71)
													{
														if(payload < 8.5)
															return 16.6487;
														else
															return 14.0543;
													}
													else
													{
														if(rsrp < -93.5)
															return 21.6383;
														else
														{
															if(rsrp < -91)
																return 19.29125;
															else
																return 18.2417;
														}
													}
												}
												else
													return 25.4372;
											}
											else
												return 13.1765;
										}
										else
										{
											if(velocity < 12.2)
											{
												if(cell < 28881666)
												{
													if(velocity < 11.75)
														return 13.3779;
													else
													{
														if(rsrp < -92)
															return 8.1064;
														else
															return 10.479;
													}
												}
												else
												{
													if(payload < 8.5)
														return 16.2231;
													else
														return 17.835;
												}
											}
											else
											{
												if(cell < 27771011)
													return 18.9189;
												else
												{
													if(cell < 27771523.5)
														return 10.0016;
													else
													{
														if(rsrp < -90.5)
														{
															if(cqi < 9.5)
															{
																if(payload < 8.5)
																{
																	if(cell < 28882690.5)
																		return 19.3295;
																	else
																	{
																		if(payload < 7.5)
																			return 18.082;
																		else
																			return 17.3067;
																	}
																}
																else
																	return 21.102;
															}
															else
															{
																if(velocity < 15.355)
																{
																	if(rsrp < -95)
																		return 13.99866;
																	else
																		return 15.5005;
																}
																else
																	return 18.4818;
															}
														}
														else
														{
															if(ta < 7)
															{
																if(cqi < 10.5)
																	return 12.96;
																else
																	return 13.59146;
															}
															else
																return 16.2684;
														}
													}
												}
											}
										}
									}
									else
									{
										if(cell < 28070147)
										{
											if(velocity < 14.675)
												return 31.1419;
											else
											{
												if(cqi < 8)
													return 20.8062;
												else
													return 24.3624;
											}
										}
										else
										{
											if(rsrp < -81.5)
											{
												if(rsrp < -82.5)
												{
													if(velocity < 14.765)
													{
														if(cell < 29652225)
														{
															if(payload < 8.5)
																return 20.592;
															else
																return 16.2785;
														}
														else
															return 16.4969666667;
													}
													else
													{
														if(rsrp < -85)
															return 19.9715;
														else
															return 20.9561;
													}
												}
												else
													return 22.0766;
											}
											else
												return 15.3625;
										}
									}
								}
							}
							else
							{
								if(cell < 26378625.5)
									return 9.62811;
								else
								{
									if(cell < 26378754.5)
										return 29.0381;
									else
									{
										if(rsrp < -97.5)
										{
											if(cqi < 5)
												return 30.3951;
											else
												return 26.3852;
										}
										else
										{
											if(velocity < 12.91)
											{
												if(ta < 2.5)
													return 30.4067;
												else
												{
													if(cqi < 8.5)
													{
														if(velocity < 11.565)
														{
															if(ta < 4.5)
																return 20.9974;
															else
															{
																if(rsrp < -87)
																	return 19.319;
																else
																	return 19.9429;
															}
														}
														else
															return 18.0099;
													}
													else
													{
														if(sinr < 8.5)
														{
															if(ta < 8.5)
																return 16.8244;
															else
															{
																if(rsrp < -88.5)
																	return 15.3876;
																else
																	return 14.7248;
															}
														}
														else
															return 19.7287;
													}
												}
											}
											else
											{
												if(ta < 5.5)
													return 31.9234;
												else
													return 20.7026;
											}
										}
									}
								}
							}
						}
						else
						{
							if(rsrp < -95.5)
							{
								if(velocity < 9.23)
								{
									if(velocity < 4.015)
										return 11.5523;
									else
										return 10.5083;
								}
								else
								{
									if(sinr < 6)
										return 21.0665;
									else
										return 22.6207;
								}
							}
							else
							{
								if(velocity < 14.745)
								{
									if(cqi < 14.5)
										return 27.3646;
									else
									{
										if(payload < 9.5)
										{
											if(ta < 11)
											{
												if(ta < 5)
													return 25.1836;
												else
													return 24.4648;
											}
											else
												return 23.5195;
										}
										else
											return 21.7687;
									}
								}
								else
								{
									if(cell < 27771139.5)
									{
										if(payload < 9)
											return 23.6949;
										else
											return 25.3727;
									}
									else
									{
										if(ta < 3)
											return 24.7142;
										else
										{
											if(velocity < 22.175)
												return 16.64405;
											else
												return 20.4487;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if(rsrp < -87.5)
						return 28.2575;
					else
						return 31.1284;
				}
			}
		}
	}
	else
	{
		if(payload < 4.5)
		{
			if(rsrp < -91.5)
			{
				if(sinr < 27.5)
				{
					if(ta < 7.5)
					{
						if(cqi < 14.5)
						{
							if(cqi < 12.5)
							{
								if(payload < 0.3)
								{
									if(rsrp < -95)
										return 3.92158;
									else
									{
										if(rsrq < -6.5)
											return 4.8290333333;
										else
											return 6.66669;
									}
								}
								else
								{
									if(velocity < 9.92)
									{
										if(velocity < 5.73)
										{
											if(rsrp < -92.5)
											{
												if(sinr < 16)
													return 6.1940833333;
												else
												{
													if(payload < 3)
														return 9.87045;
													else
													{
														if(rsrp < -93.5)
															return 13.1579;
														else
															return 10.356;
													}
												}
											}
											else
												return 4.08998;
										}
										else
										{
											if(cqi < 9.5)
											{
												if(rsrp < -102)
													return 7.45573;
												else
												{
													if(rsrq < -8.5)
														return 14.1907;
													else
														return 10.943925;
												}
											}
											else
												return 15.0659;
										}
									}
									else
									{
										if(rsrq < -7.5)
											return 6.3720583333;
										else
										{
											if(velocity < 12.745)
											{
												if(sinr < 16)
													return 7.87402;
												else
													return 6.84741;
											}
											else
											{
												if(rsrq < -6)
													return 8.98876;
												else
													return 10.3896;
											}
										}
									}
								}
							}
							else
							{
								if(cell < 27771523.5)
									return 14.1468;
								else
								{
									if(rsrp < -94.5)
										return 4.66382;
									else
										return 3.091695;
								}
							}
						}
						else
						{
							if(rsrq < -6.5)
								return 10.1955;
							else
								return 11.0041;
						}
					}
					else
					{
						if(payload < 3.5)
						{
							if(rsrp < -95.5)
							{
								if(cell < 28365057)
								{
									if(velocity < 11.655)
										return 5.87803;
									else
									{
										if(payload < 1.75)
											return 2.65076;
										else
											return 4.04381;
									}
								}
								else
								{
									if(cqi < 8)
										return 6.072535;
									else
									{
										if(cqi < 10)
											return 3.65297;
										else
											return 2.85714;
									}
								}
							}
							else
							{
								if(payload < 1.5)
								{
									if(cell < 28883331)
									{
										if(cqi < 9.5)
											return 4.27809;
										else
											return 3.27065;
									}
									else
									{
										if(rsrp < -94)
											return 9.87658;
										else
										{
											if(ta < 10.5)
											{
												if(ta < 9.5)
												{
													if(rsrp < -92.5)
														return 5.77201;
													else
														return 5.12543;
												}
												else
													return 4.32432;
											}
											else
												return 6.80272;
										}
									}
								}
								else
									return 12.2982;
							}
						}
						else
						{
							if(cell < 29483522)
							{
								if(velocity < 10.17)
									return 1.43132;
								else
									return 9.27536;
							}
							else
								return 17.2507;
						}
					}
				}
				else
					return 15.748;
			}
			else
			{
				if(rsrq < -4.5)
				{
					if(rsrq < -8.5)
					{
						if(payload < 1.5)
						{
							if(rsrp < -90)
							{
								if(sinr < 19)
									return 5.92154;
								else
									return 12.8824;
							}
							else
								return 2.96296;
						}
						else
						{
							if(cell < 29479937)
							{
								if(payload < 3.5)
								{
									if(rsrp < -86)
									{
										if(payload < 2.5)
											return 14.01055;
										else
											return 14.8911;
									}
									else
									{
										if(cell < 28345218)
										{
											if(f < 2232.5)
												return 12.1335;
											else
												return 12.7592;
										}
										else
											return 13.5823;
									}
								}
								else
								{
									if(velocity < 13.27)
										return 19.71835;
									else
									{
										if(rsrp < -83)
											return 18.0485;
										else
											return 11.0041;
									}
								}
							}
							else
								return 22.9391;
						}
					}
					else
					{
						if(cell < 26382081.5)
						{
							if(payload < 1.5)
							{
								if(rsrq < -5.5)
								{
									if(payload < 0.3)
									{
										if(cqi < 9.5)
										{
											if(velocity < 14.555)
											{
												if(velocity < 8.76)
													return 5.0854866667;
												else
												{
													if(sinr < 16)
														return 4.23282;
													else
														return 3.58746;
												}
											}
											else
												return 6.06063;
										}
										else
										{
											if(cell < 26378754.5)
											{
												if(ta < 7.5)
													return 4.24042;
												else
													return 4.79044;
											}
											else
												return 2.826635;
										}
									}
									else
									{
										if(velocity < 13.48)
										{
											if(ta < 5)
											{
												if(sinr < 20)
													return 5.22193;
												else
													return 5.94354;
											}
											else
											{
												if(rsrq < -6.5)
													return 7.93651;
												else
													return 8.63931;
											}
										}
										else
											return 4.82738;
									}
								}
								else
									return 8.708835;
							}
							else
							{
								if(cqi < 8.5)
								{
									if(rsrq < -6)
										return 14.767;
									else
										return 11.5025;
								}
								else
								{
									if(rsrp < -82.5)
									{
										if(rsrp < -88.5)
											return 11.0193;
										else
										{
											if(ta < 2.5)
												return 10.5125;
											else
												return 9.91372;
										}
									}
									else
										return 8.97364;
								}
							}
						}
						else
						{
							if(payload < 1.5)
							{
								if(payload < 0.3)
								{
									if(rsrq < -5.5)
									{
										if(cell < 26385409)
										{
											if(velocity < 13.6)
											{
												if(rsrp < -72)
													return 6.72271;
												else
													return 13.3334;
											}
											else
												return 4.8485;
										}
										else
										{
											if(ta < 1.5)
											{
												if(velocity < 16.85)
													return 7.5472;
												else
												{
													if(rsrp < -86)
														return 6.6116;
													else
														return 5.4929433333;
												}
											}
											else
											{
												if(ta < 8.5)
												{
													if(rsrp < -82)
													{
														if(ta < 2.5)
															return 5.49889;
														else
														{
															if(rsrp < -89.5)
																return 3.98011;
															else
															{
																if(velocity < 2.32)
																	return 5.09556;
																else
																	return 4.4038833333;
															}
														}
													}
													else
													{
														if(sinr < 20.5)
														{
															if(rsrp < -78.5)
																return 2.47679;
															else
															{
																if(rsrp < -73)
																	return 3.86475;
																else
																	return 2.55592;
															}
														}
														else
														{
															if(ta < 6.5)
																return 4.4632944444;
															else
															{
																if(velocity < 14.15)
																{
																	if(rsrp < -70.5)
																		return 3.57144;
																	else
																		return 4.32434;
																}
																else
																	return 3.05345;
															}
														}
													}
												}
												else
												{
													if(cqi < 9)
														return 3.33335;
													else
													{
														if(sinr < 17.5)
															return 5.19483;
														else
														{
															if(ta < 23.5)
															{
																if(ta < 14)
																{
																	if(rsrq < -6.5)
																		return 5.55558;
																	else
																		return 7.01757;
																}
																else
																	return 7.14288;
															}
															else
																return 5.36915;
														}
													}
												}
											}
										}
									}
									else
									{
										if(sinr < 16.5)
										{
											if(cell < 27513732)
												return 6.01506;
											else
											{
												if(velocity < 22.57)
													return 9.52385;
												else
													return 8.42108;
											}
										}
										else
										{
											if(cell < 26385409)
												return 7.14288;
											else
											{
												if(ta < 17)
												{
													if(rsrp < -68)
													{
														if(sinr < 23)
														{
															if(velocity < 12.13)
																return 4.23282;
															else
															{
																if(sinr < 21)
																{
																	if(ta < 9)
																		return 5.6481725;
																	else
																		return 5.06331;
																}
																else
																	return 7.40744;
															}
														}
														else
														{
															if(rsrp < -85.5)
																return 5.51726;
															else
																return 4.9166;
														}
													}
													else
														return 6.299625;
												}
												else
													return 7.27276;
											}
										}
									}
								}
								else
								{
									if(velocity < 8.015)
									{
										if(ta < 3)
										{
											if(rsrp < -67.5)
											{
												if(rsrp < -81)
													return 8.23045;
												else
												{
													if(velocity < 2.83)
														return 8.80088;
													else
														return 9.47867;
												}
											}
											else
												return 10.7527;
										}
										else
										{
											if(rsrq < -5.5)
											{
												if(sinr < 15)
												{
													if(cell < 27811715)
														return 6.594905;
													else
														return 5.08259;
												}
												else
												{
													if(rsrp < -90.5)
														return 9.66184;
													else
													{
														if(velocity < 7.63)
														{
															if(velocity < 2.185)
															{
																if(payload < 0.75)
																{
																	if(sinr < 35.5)
																		return 6.30379;
																	else
																		return 7.40741;
																}
																else
																	return 8.3682;
															}
															else
															{
																if(sinr < 31)
																{
																	if(cqi < 11.5)
																		return 7.41427;
																	else
																		return 8.3567466667;
																}
																else
																	return 9.76801;
															}
														}
														else
															return 5.53633;
													}
												}
											}
											else
											{
												if(velocity < 5.585)
												{
													if(ta < 5.5)
													{
														if(rsrp < -81.5)
														{
															if(cqi < 11)
																return 5.87372;
															else
																return 5.10204;
														}
														else
															return 7.47664;
													}
													else
													{
														if(payload < 0.75)
															return 4.4843;
														else
															return 6.57895;
													}
												}
												else
													return 4.36681;
											}
										}
									}
									else
									{
										if(f < 1384.95)
										{
											if(cell < 30649733)
											{
												if(cell < 27771904.5)
													return 5.3918747134;
												else
													return 2.52207;
											}
											else
												return 10.4031;
										}
										else
										{
											if(cqi < 13.5)
											{
												if(velocity < 9.46)
												{
													if(cell < 27888257.5)
														return 7.72947;
													else
														return 21.1361;
												}
												else
												{
													if(rsrp < -86.5)
													{
														if(sinr < 14.5)
														{
															if(cell < 28071170.5)
																return 11.5274;
															else
															{
																if(ta < 4)
																{
																	if(cqi < 10)
																		return 10.7239;
																	else
																	{
																		if(rsrq < -7)
																			return 8.09717;
																		else
																			return 6.48298;
																	}
																}
																else
																{
																	if(rsrp < -89)
																		return 7.931455;
																	else
																		return 3.83325;
																}
															}
														}
														else
														{
															if(sinr < 25.5)
															{
																if(payload < 0.75)
																{
																	if(rsrp < -89.5)
																		return 3.38983;
																	else
																		return 4.5977;
																}
																else
																{
																	if(rsrp < -88)
																		return 9.4451;
																	else
																		return 6.185775;
																}
															}
															else
															{
																if(cqi < 11)
																	return 9.85222;
																else
																	return 7.84314;
															}
														}
													}
													else
													{
														if(ta < 1.5)
														{
															if(velocity < 12.955)
															{
																if(rsrq < -6.5)
																	return 15.625;
																else
																{
																	if(sinr < 19)
																	{
																		if(payload < 0.75)
																			return 10.7817;
																		else
																			return 9.35673;
																	}
																	else
																		return 9.23788;
																}
															}
															else
															{
																if(rsrq < -5.5)
																	return 18.101;
																else
																	return 9.80392;
															}
														}
														else
														{
															if(velocity < 27.415)
															{
																if(ta < 2.5)
																	return 5.48697;
																else
																{
																	if(rsrp < -84.5)
																	{
																		if(sinr < 14.5)
																			return 9.63855;
																		else
																		{
																			if(rsrq < -5.5)
																			{
																				if(rsrq < -7)
																					return 15.534;
																				else
																					return 13.9867666667;
																			}
																			else
																				return 8.7146;
																		}
																	}
																	else
																	{
																		if(sinr < 24.5)
																		{
																			if(rsrq < -7.5)
																				return 8.51064;
																			else
																			{
																				if(sinr < 15)
																					return 7.16846;
																				else
																					return 7.826;
																			}
																		}
																		else
																		{
																			if(cell < 27888257)
																				return 7.7821;
																			else
																			{
																				if(rsrp < -80.5)
																					return 11.7994;
																				else
																					return 12.3457;
																			}
																		}
																	}
																}
															}
															else
															{
																if(sinr < 20)
																	return 4.39319;
																else
																	return 7.25953;
															}
														}
													}
												}
											}
											else
											{
												if(sinr < 19.5)
												{
													if(rsrp < -77.5)
													{
														if(velocity < 12.635)
															return 6.37959;
														else
														{
															if(sinr < 13.5)
																return 9.17431;
															else
																return 8.45666;
														}
													}
													else
														return 11.2972333333;
												}
												else
												{
													if(velocity < 13.495)
													{
														if(rsrq < -5.5)
															return 6.205996;
														else
														{
															if(rsrp < -76.5)
																return 8.03213;
															else
																return 6.61704;
														}
													}
													else
													{
														if(rsrp < -85.5)
															return 7.60456;
														else
														{
															if(velocity < 14.715)
																return 6.28931;
															else
																return 7.051795;
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
								if(payload < 2.5)
								{
									if(ta < 0.5)
										return 2.98563;
									else
									{
										if(rsrp < -82.5)
										{
											if(cqi < 14)
											{
												if(cell < 28581506.5)
												{
													if(sinr < 20)
													{
														if(velocity < 14.035)
														{
															if(velocity < 12.435)
																return 10.8328;
															else
															{
																if(cqi < 10.5)
																	return 6.89061;
																else
																	return 6.0015;
															}
														}
														else
														{
															if(rsrq < -5.5)
															{
																if(sinr < 16.5)
																	return 14.0969;
																else
																	return 10.9141;
															}
															else
																return 10.7023;
														}
													}
													else
													{
														if(rsrq < -6.5)
															return 9.00394;
														else
														{
															if(cell < 26820866.5)
																return 11.6788;
															else
															{
																if(cell < 27771139.5)
																	return 13.08924;
																else
																	return 14.16145;
															}
														}
													}
												}
												else
												{
													if(ta < 5)
														return 7.2458333333;
													else
													{
														if(sinr < 27.5)
														{
															if(sinr < 24.5)
																return 10.80385;
															else
																return 10.3896;
														}
														else
															return 9.73828;
													}
												}
											}
											else
											{
												if(cell < 28069506.5)
													return 6.232035;
												else
												{
													if(cell < 28879105.5)
														return 11.2518;
													else
													{
														if(velocity < 14.4)
														{
															if(sinr < 18.5)
																return 6.86106;
															else
																return 7.76699;
														}
														else
															return 9.59233;
													}
												}
											}
										}
										else
										{
											if(ta < 1.5)
											{
												if(rsrp < -76)
												{
													if(rsrq < -5.5)
														return 21.5054;
													else
													{
														if(sinr < 25.5)
															return 14.7194;
														else
															return 17.9171;
													}
												}
												else
												{
													if(sinr < 28)
														return 15.0823333333;
													else
													{
														if(rsrp < -71.5)
															return 13.7457;
														else
															return 14.3113;
													}
												}
											}
											else
											{
												if(ta < 4.5)
												{
													if(sinr < 16.5)
													{
														if(cell < 28345219)
															return 8.8588025;
														else
														{
															if(sinr < 14)
																return 8.63931;
															else
																return 13.4454;
														}
													}
													else
													{
														if(velocity < 5.885)
														{
															if(rsrp < -77)
																return 13.6752;
															else
																return 12.4127;
														}
														else
														{
															if(sinr < 17.5)
																return 12.7085;
															else
															{
																if(rsrp < -78.5)
																	return 10.5402;
																else
																	return 11.5108;
															}
														}
													}
												}
												else
												{
													if(sinr < 20.5)
													{
														if(sinr < 16)
															return 14.8011;
														else
															return 17.7187;
													}
													else
													{
														if(rsrp < -73.5)
														{
															if(rsrq < -5.5)
																return 12.4902;
															else
																return 13.3111;
														}
														else
															return 9.55224;
													}
												}
											}
										}
									}
								}
								else
								{
									if(sinr < 16.5)
									{
										if(rsrp < -86.5)
										{
											if(cell < 26820867.5)
												return 14.5191;
											else
											{
												if(velocity < 12.365)
												{
													if(cqi < 11)
													{
														if(f < 2232.5)
															return 9.06516;
														else
															return 6.98283;
													}
													else
														return 14.5985;
												}
												else
												{
													if(velocity < 12.855)
														return 4.84359;
													else
														return 6.44901;
												}
											}
										}
										else
										{
											if(rsrq < -7.5)
											{
												if(f < 2232.5)
												{
													if(rsrp < -82.5)
														return 10.0219;
													else
													{
														if(cqi < 11)
															return 8.04222;
														else
															return 7.28376;
													}
												}
												else
													return 14.9161;
											}
											else
											{
												if(f < 2232.5)
												{
													if(velocity < 3.25)
													{
														if(rsrp < -81.5)
															return 16.3265;
														else
															return 22.1198;
													}
													else
													{
														if(cqi < 11.5)
														{
															if(rsrp < -82.5)
															{
																if(payload < 3.5)
																	return 12.1151;
																else
																	return 9.70285;
															}
															else
															{
																if(sinr < 13.5)
																	return 12.8205;
																else
																	return 15.7647;
															}
														}
														else
														{
															if(cqi < 14)
															{
																if(rsrp < -75.5)
																{
																	if(velocity < 16.285)
																		return 15.6456;
																	else
																		return 16.7189;
																}
																else
																	return 13.1417;
															}
															else
																return 17.7187;
														}
													}
												}
												else
												{
													if(rsrp < -83)
														return 15.7403;
													else
														return 8.13421;
												}
											}
										}
									}
									else
									{
										if(rsrq < -7.5)
										{
											if(cqi < 11.5)
												return 14.0351;
											else
											{
												if(cell < 29479936.5)
												{
													if(velocity < 25.59)
													{
														if(payload < 3.5)
															return 21.4095;
														else
															return 20.6452;
													}
													else
														return 12.1488;
												}
												else
													return 23.845;
											}
										}
										else
										{
											if(cell < 33527556.5)
											{
												if(rsrp < -75.5)
												{
													if(sinr < 29.5)
													{
														if(rsrp < -76.5)
														{
															if(sinr < 27.5)
															{
																if(payload < 3.5)
																{
																	if(rsrp < -78.5)
																	{
																		if(rsrp < -80)
																		{
																			if(ta < 2.5)
																				return 9.956805;
																			else
																			{
																				if(velocity < 12.215)
																				{
																					if(cell < 29479936.5)
																					{
																						if(velocity < 10.705)
																						{
																							if(cqi < 13.5)
																								return 11.6867;
																							else
																							{
																								if(sinr < 22.5)
																									return 13.9616;
																								else
																									return 12.5392;
																							}
																						}
																						else
																							return 10.6242;
																					}
																					else
																					{
																						if(ta < 9)
																							return 16.3043;
																						else
																							return 13.7773;
																					}
																				}
																				else
																				{
																					if(cell < 29652225)
																					{
																						if(rsrp < -86.5)
																						{
																							if(cqi < 7.5)
																								return 15.8311;
																							else
																							{
																								if(velocity < 13.595)
																									return 16.5062;
																								else
																									return 12.8157;
																							}
																						}
																						else
																						{
																							if(ta < 5.5)
																								return 15.9468;
																							else
																								return 22.409;
																						}
																					}
																					else
																					{
																						if(rsrq < -6)
																							return 13.4831;
																						else
																							return 14.7874;
																					}
																				}
																			}
																		}
																		else
																		{
																			if(rsrq < -5.5)
																				return 14.3369;
																			else
																			{
																				if(ta < 2.5)
																					return 19.8347;
																				else
																					return 21.4669;
																			}
																		}
																	}
																	else
																	{
																		if(velocity < 8.58)
																			return 9.61924;
																		else
																			return 10.1523;
																	}
																}
																else
																{
																	if(sinr < 26)
																	{
																		if(ta < 19)
																		{
																			if(velocity < 10.335)
																			{
																				if(rsrp < -82.5)
																				{
																					if(ta < 4.5)
																						return 15.0943;
																					else
																					{
																						if(rsrp < -87)
																							return 13.3167;
																						else
																							return 11.7907;
																					}
																				}
																				else
																					return 20.3046;
																			}
																			else
																			{
																				if(cell < 29741056)
																				{
																					if(sinr < 20.5)
																					{
																						if(cqi < 11.5)
																						{
																							if(cell < 27078659)
																								return 16.3516;
																							else
																								return 16.9695;
																						}
																						else
																							return 15.7869;
																					}
																					else
																					{
																						if(rsrp < -88.5)
																						{
																							if(ta < 5.5)
																								return 21.6802;
																							else
																								return 18.9349;
																						}
																						else
																						{
																							if(cqi < 12.5)
																								return 15.2164;
																							else
																								return 16.6061;
																						}
																					}
																				}
																				else
																				{
																					if(rsrp < -84)
																						return 19.3822;
																					else
																						return 17.1951;
																				}
																			}
																		}
																		else
																			return 9.19805;
																	}
																	else
																		return 26.3374;
																}
															}
															else
															{
																if(ta < 2.5)
																	return 7.92275;
																else
																{
																	if(ta < 5)
																		return 9.86436;
																	else
																		return 11.396;
																}
															}
														}
														else
														{
															if(rsrq < -5.5)
																return 24.4151;
															else
																return 15.625;
														}
													}
													else
													{
														if(rsrp < -82.5)
															return 20.2532;
														else
															return 22.8354;
													}
												}
												else
												{
													if(cqi < 8)
														return 20.4255;
													else
													{
														if(sinr < 30.5)
														{
															if(rsrp < -74.5)
															{
																if(payload < 3.5)
																	return 7.12166;
																else
																	return 11.2281;
															}
															else
															{
																if(payload < 3.5)
																{
																	if(rsrp < -69.5)
																	{
																		if(velocity < 12.55)
																		{
																			if(cell < 28354818.5)
																			{
																				if(sinr < 23.5)
																					return 13.50325;
																				else
																					return 11.6392;
																			}
																			else
																				return 16.1074;
																		}
																		else
																			return 10.6619;
																	}
																	else
																	{
																		if(rsrq < -6)
																			return 15.8311;
																		else
																			return 13.4983;
																	}
																}
																else
																{
																	if(rsrp < -71.5)
																		return 16.7539;
																	else
																		return 17.45605;
																}
															}
														}
														else
														{
															if(velocity < 16.39)
															{
																if(rsrp < -73)
																	return 8.67365;
																else
																{
																	if(velocity < 10.875)
																		return 10.982775;
																	else
																		return 11.6959;
																}
															}
															else
																return 19.536;
														}
													}
												}
											}
											else
												return 3.7296;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if(rsrp < -68.5)
					{
						if(sinr < 35.5)
						{
							if(velocity < 31.21)
							{
								if(payload < 0.55)
								{
									if(velocity < 18.16)
										return 9.09094;
									else
									{
										if(rsrp < -79)
											return 4.76192;
										else
											return 5.4422;
									}
								}
								else
								{
									if(cell < 27771907.5)
									{
										if(cell < 27771523.5)
										{
											if(cqi < 14)
											{
												if(sinr < 27.5)
													return 15.534;
												else
													return 16.8599;
											}
											else
												return 16.8865;
										}
										else
											return 19.802;
									}
									else
									{
										if(velocity < 7.505)
											return 9.40071;
										else
										{
											if(rsrp < -81)
												return 12.959;
											else
												return 14.3231666667;
										}
									}
								}
							}
							else
							{
								if(rsrp < -78)
									return 13.4567;
								else
									return 18.2232;
							}
						}
						else
							return 22.2223;
					}
					else
					{
						if(velocity < 12.31)
							return 13.7852;
						else
						{
							if(ta < 14.5)
								return 8.03213;
							else
								return 5.55558;
						}
					}
				}
			}
		}
		else
		{
			if(rsrp < -89.5)
			{
				if(velocity < 34.81)
				{
					if(cqi < 6.5)
					{
						if(sinr < 18.5)
						{
							if(rsrq < -7)
								return 22.0629;
							else
								return 23.8332;
						}
						else
						{
							if(rsrp < -93.5)
								return 20.0401;
							else
								return 18.9798;
						}
					}
					else
					{
						if(rsrp < -99.5)
						{
							if(velocity < 9.41)
								return 30.0328;
							else
							{
								if(payload < 9)
									return 20.5392;
								else
									return 16.6286;
							}
						}
						else
						{
							if(payload < 7.5)
							{
								if(rsrp < -95.5)
								{
									if(sinr < 13.5)
										return 14.9087;
									else
									{
										if(sinr < 21.5)
										{
											if(sinr < 17.5)
												return 5.70207;
											else
												return 6.86303;
										}
										else
											return 9.7371;
									}
								}
								else
								{
									if(cell < 29741056.5)
									{
										if(rsrq < -8.5)
										{
											if(velocity < 12.915)
											{
												if(sinr < 22)
												{
													if(rsrp < -92.5)
														return 13.8666;
													else
														return 12.5928;
												}
												else
													return 11.2391;
											}
											else
												return 7.58294;
										}
										else
										{
											if(cqi < 11.5)
											{
												if(cell < 29483522)
												{
													if(cqi < 9.5)
													{
														if(velocity < 3.43)
														{
															if(cqi < 8.5)
															{
																if(payload < 6.5)
																{
																	if(rsrp < -91.5)
																		return 13.5916;
																	else
																	{
																		if(rsrq < -5.5)
																			return 16.1421;
																		else
																			return 13.9657;
																	}
																}
																else
																	return 16.5338;
															}
															else
															{
																if(sinr < 16)
																	return 13.4454;
																else
																{
																	if(sinr < 23.5)
																		return 10.1678;
																	else
																		return 13.3556;
																}
															}
														}
														else
														{
															if(velocity < 9.63)
															{
																if(rsrq < -7)
																	return 19.4107;
																else
																	return 21.0896;
															}
															else
															{
																if(cell < 29394691)
																{
																	if(rsrq < -6.5)
																	{
																		if(ta < 7.5)
																		{
																			if(ta < 6.5)
																			{
																				if(cqi < 8)
																					return 17.6535;
																				else
																					return 15.9098;
																			}
																			else
																			{
																				if(f < 2232.5)
																					return 15.9046;
																				else
																					return 12.4527;
																			}
																		}
																		else
																			return 21.4957;
																	}
																	else
																		return 8.54884;
																}
																else
																{
																	if(rsrp < -91.5)
																		return 17.6138666667;
																	else
																		return 21.4018;
																}
															}
														}
													}
													else
													{
														if(velocity < 12.47)
														{
															if(rsrq < -5.5)
															{
																if(cell < 28323715)
																{
																	if(payload < 6.5)
																		return 13.0933;
																	else
																		return 11.787;
																}
																else
																{
																	if(cqi < 10.5)
																		return 11.2076;
																	else
																		return 10.57565;
																}
															}
															else
															{
																if(payload < 6.5)
																	return 12.2163;
																else
																	return 15.5426;
															}
														}
														else
														{
															if(cqi < 10.5)
																return 13.2538;
															else
															{
																if(rsrq < -6.5)
																	return 16.4666;
																else
																	return 17.1674;
															}
														}
													}
												}
												else
													return 8.75593;
											}
											else
											{
												if(sinr < 22.5)
												{
													if(sinr < 16.5)
														return 18.3824;
													else
													{
														if(velocity < 0.91)
															return 15.6643;
														else
															return 16.6528;
													}
												}
												else
												{
													if(rsrp < -90.5)
														return 21.1921;
													else
														return 19.2385;
												}
											}
										}
									}
									else
										return 22.1361;
								}
							}
							else
							{
								if(cqi < 9.5)
								{
									if(rsrq < -7.5)
									{
										if(ta < 3.5)
											return 18.1118;
										else
										{
											if(cell < 28881152.5)
												return 14.6783;
											else
											{
												if(payload < 8.5)
													return 14.1593;
												else
													return 11.01215;
											}
										}
									}
									else
									{
										if(ta < 11)
										{
											if(ta < 6.5)
											{
												if(sinr < 19)
													return 19.4555;
												else
													return 18.136;
											}
											else
											{
												if(f < 2232.5)
													return 26.1609;
												else
												{
													if(rsrp < -90.5)
														return 20.015;
													else
														return 20.6053;
												}
											}
										}
										else
											return 15.2308;
									}
								}
								else
								{
									if(cell < 28881153.5)
									{
										if(rsrp < -97.5)
											return 10.2258;
										else
										{
											if(rsrp < -95)
												return 32.3887;
											else
											{
												if(rsrq < -5.5)
												{
													if(cell < 27771907.5)
													{
														if(cqi < 10.5)
															return 21.9445;
														else
															return 30.4826;
													}
													else
													{
														if(rsrp < -92.5)
															return 21.4669;
														else
															return 20.2532;
													}
												}
												else
												{
													if(sinr < 18.5)
														return 30.0626;
													else
														return 28.2561;
												}
											}
										}
									}
									else
									{
										if(rsrq < -6.5)
										{
											if(cqi < 13)
											{
												if(velocity < 10.395)
												{
													if(cqi < 11.5)
														return 11.3457;
													else
														return 10.0282;
												}
												else
													return 15.5604;
											}
											else
												return 19.6802;
										}
										else
										{
											if(payload < 9.5)
											{
												if(velocity < 7.14)
												{
													if(ta < 9.5)
													{
														if(payload < 8.5)
															return 24.015;
														else
															return 22.291;
													}
													else
														return 23.3406;
												}
												else
													return 26.1973;
											}
											else
												return 17.0612;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if(cqi < 9)
						return 7.47576;
					else
						return 5.51953;
				}
			}
			else
			{
				if(f < 2232.5)
				{
					if(f < 1384.95)
					{
						if(rsrp < -62)
						{
							if(ta < 5.5)
								return 4.506185;
							else
							{
								if(payload < 8)
									return 21.555;
								else
									return 11.2186771677;
							}
						}
						else
						{
							if(rsrp < -60.5)
								return 23.0548;
							else
								return 13.741;
						}
					}
					else
					{
						if(payload < 6.5)
						{
							if(cell < 27771139.5)
							{
								if(sinr < 14.5)
								{
									if(velocity < 8.86)
										return 18.0424;
									else
									{
										if(payload < 5.5)
											return 30.7692;
										else
											return 33.264;
									}
								}
								else
								{
									if(cell < 26385408.5)
									{
										if(sinr < 26.5)
										{
											if(cqi < 12.5)
											{
												if(rsrp < -84.5)
													return 20;
												else
												{
													if(rsrp < -78.5)
														return 20.592;
													else
														return 21.1175;
												}
											}
											else
											{
												if(sinr < 20.5)
													return 20.9205;
												else
													return 18.2163;
											}
										}
										else
											return 16.1345;
									}
									else
									{
										if(velocity < 6.41)
										{
											if(cqi < 12.5)
											{
												if(rsrp < -81)
													return 19.025;
												else
													return 20.0083;
											}
											else
												return 18.0587;
										}
										else
										{
											if(payload < 5.5)
											{
												if(rsrq < -6.5)
													return 22.1607;
												else
												{
													if(rsrp < -76.5)
														return 19.305;
													else
														return 20.7039;
												}
											}
											else
											{
												if(cell < 27078146.5)
												{
													if(velocity < 13.35)
													{
														if(velocity < 9.745)
															return 24.8576;
														else
															return 25.7511;
													}
													else
														return 27.907;
												}
												else
												{
													if(cqi < 11.5)
													{
														if(ta < 7)
															return 20.0585;
														else
															return 23.5294;
													}
													else
													{
														if(rsrp < -82)
															return 25.0915;
														else
															return 27.3816;
													}
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
									if(ta < 17)
									{
										if(sinr < 22.5)
										{
											if(velocity < 12.715)
											{
												if(cqi < 10.5)
													return 14.7547333333;
												else
												{
													if(rsrp < -87.5)
														return 12.8991;
													else
													{
														if(sinr < 20)
														{
															if(ta < 4.5)
																return 20.5216;
															else
																return 22.1239;
														}
														else
														{
															if(cqi < 13.5)
																return 19.1296;
															else
																return 18.5271;
														}
													}
												}
											}
											else
											{
												if(ta < 6.5)
												{
													if(velocity < 18.29)
													{
														if(velocity < 15.25)
															return 11.739225;
														else
															return 9.700235;
													}
													else
													{
														if(velocity < 23.43)
														{
															if(rsrp < -84.5)
																return 12.945;
															else
																return 13.6674;
														}
														else
															return 14.9645;
													}
												}
												else
												{
													if(rsrp < -82)
														return 21.8778;
													else
														return 19.2585;
												}
											}
										}
										else
										{
											if(velocity < 26.305)
											{
												if(velocity < 23)
												{
													if(sinr < 26.5)
													{
														if(rsrq < -4.5)
														{
															if(ta < 9)
															{
																if(cqi < 12.5)
																{
																	if(payload < 5.5)
																		return 19.1388;
																	else
																		return 20.2508333333;
																}
																else
																{
																	if(sinr < 25.5)
																	{
																		if(cell < 28670338.5)
																			return 22.9409;
																		else
																			return 23.4187;
																	}
																	else
																		return 24.1085;
																}
															}
															else
																return 15.5763;
														}
														else
															return 18.2302;
													}
													else
													{
														if(velocity < 14.855)
														{
															if(rsrp < -78.5)
															{
																if(rsrq < -7.5)
																	return 19.3783;
																else
																{
																	if(cqi < 12.5)
																	{
																		if(rsrq < -6.5)
																			return 16.7539;
																		else
																		{
																			if(velocity < 5.775)
																				return 14.7601;
																			else
																				return 13.8249;
																		}
																	}
																	else
																	{
																		if(payload < 5.5)
																			return 17.9856;
																		else
																			return 17.48;
																	}
																}
															}
															else
																return 25.1572;
														}
														else
														{
															if(rsrq < -6)
															{
																if(payload < 5.5)
																	return 14.9589;
																else
																	return 13.6402;
															}
															else
																return 10.9379;
														}
													}
												}
												else
												{
													if(payload < 5.5)
														return 38.1679;
													else
													{
														if(sinr < 24.5)
															return 20.6097;
														else
															return 17.69915;
													}
												}
											}
											else
											{
												if(sinr < 26.5)
													return 15.3257;
												else
													return 12.3648;
											}
										}
									}
									else
									{
										if(payload < 5.5)
										{
											if(ta < 18.5)
												return 10.8932;
											else
												return 9.40291;
										}
										else
											return 13.3333;
									}
								}
								else
								{
									if(sinr < 26)
									{
										if(ta < 4.5)
											return 15.1343;
										else
										{
											if(ta < 13)
												return 17.9038;
											else
												return 18.8947;
										}
									}
									else
									{
										if(cell < 27771908.5)
										{
											if(velocity < 16.105)
											{
												if(rsrp < -70.5)
													return 21.9196;
												else
													return 19.4332;
											}
											else
												return 25.4507;
										}
										else
										{
											if(sinr < 28.5)
											{
												if(sinr < 27.5)
													return 23.976;
												else
												{
													if(rsrq < -5.5)
														return 26.9058;
													else
														return 29.2398;
												}
											}
											else
											{
												if(rsrp < -72)
												{
													if(velocity < 35.465)
														return 22.4614;
													else
														return 21.5054;
												}
												else
												{
													if(rsrp < -69)
														return 29.1793;
													else
														return 22.0751;
												}
											}
										}
									}
								}
							}
						}
						else
						{
							if(rsrp < -68.5)
							{
								if(rsrq < -7.5)
								{
									if(velocity < 12.19)
									{
										if(sinr < 15)
											return 18.3993;
										else
										{
											if(velocity < 8.365)
											{
												if(velocity < 3.895)
												{
													if(sinr < 20)
														return 14.1143;
													else
														return 15.0943;
												}
												else
													return 12.6763;
											}
											else
											{
												if(rsrp < -85)
													return 15.2381;
												else
												{
													if(payload < 9)
														return 18.3066;
													else
														return 17.4749;
												}
											}
										}
									}
									else
									{
										if(ta < 18.5)
										{
											if(velocity < 27.35)
											{
												if(sinr < 20)
												{
													if(rsrp < -81.5)
													{
														if(rsrp < -85.5)
															return 21.172;
														else
															return 22.6382;
													}
													else
														return 24.1875;
												}
												else
													return 25.29925;
											}
											else
												return 28.1974;
										}
										else
										{
											if(payload < 9)
												return 16.0562;
											else
												return 17.9735;
										}
									}
								}
								else
								{
									if(cell < 27771523.5)
									{
										if(ta < 5)
										{
											if(sinr < 15)
											{
												if(velocity < 12.84)
												{
													if(rsrp < -80.5)
														return 27.7136;
													else
														return 26.927;
												}
												else
												{
													if(cqi < 10.5)
														return 23.5919;
													else
														return 25.05204;
												}
											}
											else
											{
												if(cqi < 10.5)
												{
													if(payload < 7.5)
														return 19.1257;
													else
													{
														if(ta < 3.5)
														{
															if(cqi < 9)
																return 25.1493;
															else
																return 34.9242;
														}
														else
															return 21.9118;
													}
												}
												else
												{
													if(rsrp < -83.5)
													{
														if(sinr < 17)
															return 14.2349;
														else
														{
															if(velocity < 13.585)
																return 21.0665;
															else
																return 17.8914;
														}
													}
													else
													{
														if(sinr < 29.5)
														{
															if(ta < 1.5)
															{
																if(velocity < 11.615)
																	return 22.3196;
																else
																{
																	if(rsrq < -5.5)
																		return 19.3353;
																	else
																		return 18.7354;
																}
															}
															else
															{
																if(payload < 8.5)
																{
																	if(cqi < 14.5)
																	{
																		if(rsrp < -73)
																		{
																			if(rsrp < -74.5)
																			{
																				if(payload < 7.5)
																				{
																					if(rsrp < -76.5)
																					{
																						if(sinr < 22)
																							return 21.3985;
																						else
																							return 22.0559;
																					}
																					else
																						return 20.639825;
																				}
																				else
																				{
																					if(rsrq < -5.5)
																						return 22.1071;
																					else
																						return 23.5901;
																				}
																			}
																			else
																				return 17.2255;
																		}
																		else
																		{
																			if(rsrp < -71.5)
																			{
																				if(cqi < 13)
																					return 22.3375;
																				else
																					return 21.8153;
																			}
																			else
																				return 23.382;
																		}
																	}
																	else
																	{
																		if(velocity < 14.1)
																		{
																			if(payload < 7.5)
																				return 21.2443;
																			else
																				return 19.0817;
																		}
																		else
																			return 28.6885;
																	}
																}
																else
																{
																	if(velocity < 14.005)
																	{
																		if(cell < 26385409)
																		{
																			if(rsrp < -73)
																				return 28.5375;
																			else
																				return 24.4399;
																		}
																		else
																			return 24.1079;
																	}
																	else
																	{
																		if(sinr < 24.5)
																			return 22.8789;
																		else
																			return 20.507;
																	}
																}
															}
														}
														else
															return 27.5455;
													}
												}
											}
										}
										else
										{
											if(sinr < 13.5)
											{
												if(rsrp < -83.5)
												{
													if(cqi < 8.5)
														return 25.9151;
													else
													{
														if(rsrq < -6.5)
															return 22.2469;
														else
															return 22.792;
													}
												}
												else
													return 26.6489;
											}
											else
											{
												if(velocity < 31.255)
												{
													if(rsrq < -6.5)
													{
														if(payload < 8.5)
															return 26.6667;
														else
														{
															if(rsrp < -86.5)
																return 17.9252;
															else
																return 21.3504;
														}
													}
													else
													{
														if(cell < 27771139.5)
														{
															if(rsrp < -74)
															{
																if(velocity < 1.965)
																{
																	if(ta < 6.5)
																		return 22.9144;
																	else
																		return 21.7096;
																}
																else
																{
																	if(rsrp < -81.5)
																	{
																		if(ta < 8.5)
																		{
																			if(velocity < 12.955)
																			{
																				if(rsrp < -84.5)
																					return 19.2352;
																				else
																					return 19.7628;
																			}
																			else
																				return 19.774;
																		}
																		else
																			return 21.143;
																	}
																	else
																		return 18.53372;
																}
															}
															else
															{
																if(ta < 6.5)
																{
																	if(payload < 7.5)
																		return 16.0137;
																	else
																		return 18.7299;
																}
																else
																	return 19.0931;
															}
														}
														else
														{
															if(sinr < 26)
																return 12.5786;
															else
																return 21.9245;
														}
													}
												}
												else
												{
													if(cell < 27771011.5)
														return 24.5399;
													else
														return 29.2089;
												}
											}
										}
									}
									else
									{
										if(rsrp < -84.5)
										{
											if(cell < 29479936.5)
											{
												if(sinr < 30.5)
												{
													if(rsrp < -86.5)
													{
														if(cell < 27771908.5)
															return 26.0665;
														else
														{
															if(velocity < 2.385)
																return 24.4952666667;
															else
															{
																if(rsrp < -87.5)
																{
																	if(rsrp < -88.5)
																	{
																		if(cell < 29391104.5)
																		{
																			if(rsrq < -6.5)
																				return 19.9857;
																			else
																				return 19.3861;
																		}
																		else
																			return 14.733;
																	}
																	else
																		return 29.9766;
																}
																else
																{
																	if(velocity < 24.585)
																		return 16.7313;
																	else
																		return 15.6479;
																}
															}
														}
													}
													else
													{
														if(ta < 2.5)
														{
															if(cell < 27771908.5)
																return 12.522;
															else
																return 13.7188;
														}
														else
														{
															if(payload < 8)
																return 21.18;
															else
																return 19.407;
														}
													}
												}
												else
													return 34.379;
											}
											else
											{
												if(sinr < 23.5)
												{
													if(ta < 4.5)
													{
														if(cqi < 11.5)
														{
															if(sinr < 21)
															{
																if(sinr < 18)
																{
																	if(payload < 9.5)
																		return 22.7992;
																	else
																		return 23.8024;
																}
																else
																	return 27.3621;
															}
															else
																return 21.0526;
														}
														else
															return 26.5604;
													}
													else
													{
														if(rsrq < -5)
														{
															if(sinr < 20.5)
															{
																if(ta < 9)
																	return 18.5776;
																else
																{
																	if(payload < 8)
																		return 18.2887;
																	else
																		return 14.6163;
																}
															}
															else
																return 20.2583;
														}
														else
															return 23.2693;
													}
												}
												else
													return 41.7755;
											}
										}
										else
										{
											if(velocity < 11.69)
											{
												if(velocity < 1.655)
												{
													if(rsrp < -76.5)
													{
														if(rsrp < -77.5)
														{
															if(ta < 3)
															{
																if(ta < 1.5)
																	return 23.9282;
																else
																{
																	if(cqi < 13)
																		return 34.7395;
																	else
																		return 29.985;
																}
															}
															else
															{
																if(payload < 9)
																{
																	if(cell < 29479936.5)
																	{
																		if(rsrp < -79.5)
																			return 22.5352;
																		else
																			return 20.4007;
																	}
																	else
																		return 18.3066;
																}
																else
																{
																	if(rsrp < -79.5)
																		return 23.8521;
																	else
																		return 26.8366;
																}
															}
														}
														else
														{
															if(cqi < 11.5)
																return 38.3387;
															else
															{
																if(rsrq < -5.5)
																	return 20.5589;
																else
																	return 33.1492;
															}
														}
													}
													else
													{
														if(rsrp < -75.5)
															return 16.9851;
														else
															return 20.4895;
													}
												}
												else
												{
													if(cell < 29479936.5)
													{
														if(velocity < 11.54)
														{
															if(payload < 8.5)
															{
																if(cqi < 13.5)
																	return 17.1169;
																else
																	return 17.763;
															}
															else
																return 18.5854;
														}
														else
															return 14.8026;
													}
													else
													{
														if(ta < 1.5)
														{
															if(sinr < 19)
																return 24.1546;
															else
																return 30.1003;
														}
														else
														{
															if(rsrq < -5.5)
																return 22.291;
															else
																return 23.976;
														}
													}
												}
											}
											else
											{
												if(cqi < 14.5)
												{
													if(velocity < 24.495)
													{
														if(velocity < 16.335)
														{
															if(sinr < 17.5)
																return 39.0434;
															else
															{
																if(velocity < 14.745)
																{
																	if(sinr < 24)
																		return 38.3105666667;
																	else
																	{
																		if(payload < 9.5)
																			return 20.6778;
																		else
																			return 34.7373;
																	}
																}
																else
																{
																	if(payload < 9.5)
																	{
																		if(sinr < 31.5)
																			return 27.8984833333;
																		else
																			return 29.1498;
																	}
																	else
																		return 31.9107;
																}
															}
														}
														else
														{
															if(velocity < 19.635)
																return 34.2531;
															else
																return 37.2285;
														}
													}
													else
													{
														if(rsrp < -80.5)
															return 23.4055;
														else
														{
															if(rsrp < -75)
																return 26.4364;
															else
																return 29.1262;
														}
													}
												}
												else
												{
													if(ta < 22)
													{
														if(velocity < 24.045)
														{
															if(sinr < 19.5)
															{
																if(rsrp < -83.5)
																	return 17.5012;
																else
																{
																	if(payload < 9)
																		return 23.5248333333;
																	else
																		return 25.4291;
																}
															}
															else
															{
																if(payload < 9.5)
																{
																	if(velocity < 12.275)
																		return 31.1457;
																	else
																	{
																		if(payload < 7.5)
																		{
																			if(cell < 28670338)
																				return 26.4151;
																			else
																			{
																				if(rsrq < -5.5)
																					return 26.1927;
																				else
																					return 25.1799;
																			}
																		}
																		else
																		{
																			if(cell < 29652225)
																				return 24.80335;
																			else
																				return 23.1288;
																		}
																	}
																}
																else
																{
																	if(cell < 27771908.5)
																		return 28.5714;
																	else
																	{
																		if(sinr < 26.5)
																			return 33.6842;
																		else
																			return 25.89;
																	}
																}
															}
														}
														else
														{
															if(rsrq < -5.5)
																return 32.016;
															else
															{
																if(payload < 9)
																	return 28.3437;
																else
																	return 31.4961;
															}
														}
													}
													else
														return 8.24742;
												}
											}
										}
									}
								}
							}
							else
							{
								if(sinr < 35)
								{
									if(sinr < 29.5)
									{
										if(sinr < 26.5)
											return 21.555;
										else
											return 30.4762;
									}
									else
										return 43.0108;
								}
								else
								{
									if(payload < 8.5)
										return 26.4791;
									else
										return 20.2532;
								}
							}
						}
					}
				}
				else
				{
					if(velocity < 10.345)
					{
						if(cqi < 4)
							return 34.1443;
						else
						{
							if(payload < 7.5)
							{
								if(cell < 27277828.5)
								{
									if(velocity < 5.085)
									{
										if(cqi < 9)
										{
											if(cqi < 7.5)
												return 16.609;
											else
												return 16.0772;
										}
										else
										{
											if(sinr < 26)
											{
												if(rsrp < -87.5)
													return 14.0499;
												else
													return 14.5378;
											}
											else
												return 11.8343;
										}
									}
									else
										return 21.0526;
								}
								else
								{
									if(cell < 28348804)
									{
										if(velocity < 7.51)
										{
											if(rsrp < -82)
												return 9.63391;
											else
											{
												if(rsrp < -80.5)
													return 11.9154;
												else
													return 13.5266;
											}
										}
										else
											return 8.87621;
									}
									else
									{
										if(rsrq < -6.5)
											return 20.429;
										else
										{
											if(cqi < 13.5)
												return 11.4177;
											else
												return 14.8423;
										}
									}
								}
							}
							else
							{
								if(sinr < 13.5)
								{
									if(rsrq < -6.5)
									{
										if(payload < 9)
										{
											if(velocity < 8.915)
											{
												if(cqi < 8)
													return 18.7518;
												else
													return 18.1303;
											}
											else
												return 20.069;
										}
										else
											return 20.4186;
									}
									else
									{
										if(payload < 9.5)
											return 23.1437;
										else
											return 26.5957;
									}
								}
								else
								{
									if(sinr < 21)
										return 15.1291571429;
									else
									{
										if(velocity < 9.655)
										{
											if(velocity < 4.59)
												return 17.3670142857;
											else
												return 16.1136666667;
										}
										else
											return 20.2429;
									}
								}
							}
						}
					}
					else
					{
						if(sinr < 27.5)
						{
							if(ta < 3.5)
							{
								if(velocity < 12.455)
									return 18.3861;
								else
								{
									if(payload < 8)
										return 15.4643;
									else
										return 14.4014;
								}
							}
							else
							{
								if(cqi < 11.5)
								{
									if(sinr < 15)
										return 20.6452;
									else
									{
										if(sinr < 19)
											return 19.0703;
										else
											return 18.3993;
									}
								}
								else
								{
									if(rsrp < -87.5)
										return 23.1692;
									else
									{
										if(velocity < 11.335)
											return 21.2928;
										else
											return 22.2535374046;
									}
								}
							}
						}
						else
						{
							if(payload < 6.5)
								return 31.746;
							else
								return 21.4843017557;
						}
					}
				}
			}
		}
	}
}

float tmobile_dl_tree_5(float payload, float rsrp, float rsrq, float sinr, float cqi, float ta, float velocity, float cell, float f)
{
	if(payload < 3.5)
	{
		if(rsrp < -88.5)
		{
			if(payload < 1.5)
			{
				if(payload < 0.3)
				{
					if(rsrp < -93.5)
					{
						if(rsrp < -105.5)
						{
							if(cqi < 4.5)
								return 10;
							else
							{
								if(rsrq < -10.5)
									return 3.066355;
								else
								{
									if(velocity < 13.945)
										return 3.50879;
									else
										return 11.5942;
								}
							}
						}
						else
						{
							if(velocity < 28.37)
							{
								if(cqi < 10.5)
								{
									if(ta < 6.5)
									{
										if(sinr < 20)
										{
											if(rsrp < -100.5)
											{
												if(sinr < 8.5)
													return 8.24745;
												else
													return 6.01506;
											}
											else
											{
												if(rsrq < -8.5)
													return 4.1885;
												else
													return 5.301755;
											}
										}
										else
											return 3.92158;
									}
									else
									{
										if(rsrp < -101.5)
										{
											if(sinr < 1)
												return 1.74673;
											else
											{
												if(cell < 28366080.5)
													return 2.57236;
												else
												{
													if(rsrq < -10)
													{
														if(cell < 28369153)
															return 4.41991;
														else
															return 2.93041;
													}
													else
														return 4.00002;
												}
											}
										}
										else
										{
											if(rsrq < -7.5)
											{
												if(velocity < 16.345)
												{
													if(velocity < 11.9)
													{
														if(ta < 9.5)
															return 5.75661;
														else
															return 4.4222966667;
													}
													else
													{
														if(ta < 10)
															return 3.2319233333;
														else
														{
															if(rsrq < -10)
																return 4.573835;
															else
																return 4.08165;
														}
													}
												}
												else
												{
													if(rsrp < -99)
														return 4.59772;
													else
														return 5.22878;
												}
											}
											else
												return 2.59741;
										}
									}
								}
								else
								{
									if(velocity < 12.45)
									{
										if(sinr < 12)
											return 3.88616;
										else
											return 3.05345;
									}
									else
										return 2.31885;
								}
							}
							else
							{
								if(sinr < 1)
									return 0.355241;
								else
									return 2.47679;
							}
						}
					}
					else
					{
						if(velocity < 11.605)
						{
							if(ta < 3)
								return 2.62296;
							else
							{
								if(sinr < 20)
								{
									if(cell < 28883331)
									{
										if(cell < 26707330.5)
										{
											if(sinr < 10.5)
											{
												if(sinr < 5)
													return 5.06331;
												else
													return 5.67378;
											}
											else
											{
												if(ta < 8.5)
													return 4.34145;
												else
													return 3.58746;
											}
										}
										else
										{
											if(cell < 28366720)
											{
												if(sinr < 8.5)
												{
													if(rsrp < -90.5)
														return 4.93829;
													else
														return 5.4569566667;
												}
												else
													return 4.23282;
											}
											else
												return 5.78422;
										}
									}
									else
									{
										if(ta < 10)
											return 2.73974;
										else
											return 5.36915;
									}
								}
								else
								{
									if(rsrq < -6.5)
									{
										if(velocity < 0.825)
											return 5.55558;
										else
											return 4.8485;
									}
									else
										return 7.01757;
								}
							}
						}
						else
						{
							if(rsrq < -8)
							{
								if(velocity < 14.4)
								{
									if(sinr < 5)
										return 9.19544;
									else
										return 8.42108;
								}
								else
									return 6.6116;
							}
							else
							{
								if(velocity < 13.085)
								{
									if(cqi < 12)
									{
										if(rsrq < -6.5)
											return 4.4944;
										else
											return 5.03147;
									}
									else
										return 6.06063;
								}
								else
								{
									if(cqi < 7)
										return 5.51726;
									else
										return 6.66669;
								}
							}
						}
					}
				}
				else
				{
					if(cell < 27771139.5)
					{
						if(payload < 0.75)
						{
							if(cqi < 9.5)
							{
								if(cell < 27078274.5)
								{
									if(ta < 7.5)
									{
										if(rsrp < -91.5)
											return 4.09838;
										else
										{
											if(ta < 3.5)
												return 7.15564;
											else
												return 6.32821;
										}
									}
									else
									{
										if(ta < 12)
											return 8.480055;
										else
											return 7.73694;
									}
								}
								else
									return 11.5274;
							}
							else
							{
								if(cell < 26820866.5)
									return 4.623786;
								else
								{
									if(sinr < 12)
										return 5.28402;
									else
										return 6.54664;
								}
							}
						}
						else
						{
							if(ta < 12.5)
							{
								if(velocity < 13.715)
								{
									if(ta < 6.5)
									{
										if(sinr < 17.5)
										{
											if(cqi < 8)
												return 6.82012;
											else
												return 4.58453;
										}
										else
										{
											if(sinr < 24)
												return 9.34579;
											else
												return 8.58369;
										}
									}
									else
									{
										if(cell < 26820867)
										{
											if(sinr < 3.5)
												return 9.61538;
											else
												return 12.0846;
										}
										else
										{
											if(velocity < 6.84)
												return 7.40741;
											else
												return 8.95857;
										}
									}
								}
								else
								{
									if(cell < 27075076)
									{
										if(velocity < 14.02)
											return 6.28437;
										else
											return 5.66572;
									}
									else
										return 7.01139;
								}
							}
							else
							{
								if(rsrp < -95.5)
								{
									if(velocity < 24.005)
									{
										if(rsrp < -98.5)
											return 4.15369;
										else
											return 3.52578;
									}
									else
										return 10.8108;
								}
								else
									return 20.7254;
							}
						}
					}
					else
					{
						if(rsrp < -102.5)
						{
							if(cqi < 10.5)
							{
								if(rsrp < -110)
								{
									if(rsrp < -111.5)
										return 8.00801;
									else
										return 6.22084;
								}
								else
								{
									if(velocity < 11.16)
									{
										if(rsrp < -107.5)
											return 2.61267;
										else
											return 0.9834226667;
									}
									else
									{
										if(sinr < -1)
										{
											if(cqi < 7)
											{
												if(cell < 28969984.5)
													return 5.997;
												else
													return 5.38721;
											}
											else
												return 3.02916;
										}
										else
										{
											if(ta < 7.5)
												return 1.442585;
											else
											{
												if(sinr < 4.5)
													return 1.517035;
												else
												{
													if(rsrp < -105)
														return 7.62631;
													else
														return 2.7416;
												}
											}
										}
									}
								}
							}
							else
								return 7.64818;
						}
						else
						{
							if(rsrq < -6.5)
							{
								if(velocity < 34.425)
								{
									if(cqi < 5.5)
									{
										if(rsrp < -101.5)
											return 7.56144;
										else
										{
											if(velocity < 13.745)
											{
												if(sinr < 2.5)
													return 4.63275;
												else
													return 3.67309;
											}
											else
											{
												if(sinr < -9)
													return 0.542962;
												else
												{
													if(payload < 0.75)
														return 2.01816;
													else
														return 2.99177;
												}
											}
										}
									}
									else
									{
										if(cell < 29394691)
										{
											if(rsrp < -101.5)
											{
												if(rsrq < -8.5)
													return 8.94855;
												else
													return 8.3682;
											}
											else
											{
												if(velocity < 10.09)
												{
													if(rsrq < -7.5)
													{
														if(cqi < 7.5)
														{
															if(velocity < 8.755)
															{
																if(velocity < 5.385)
																	return 6.8479566667;
																else
																	return 6.10408;
															}
															else
																return 8.076895;
														}
														else
														{
															if(sinr < 0.5)
																return 3.03375;
															else
															{
																if(payload < 0.75)
																{
																	if(rsrq < -9.5)
																	{
																		if(sinr < 5)
																			return 7.79834;
																		else
																		{
																			if(rsrp < -92)
																				return 4.75624;
																			else
																				return 4.14938;
																		}
																	}
																	else
																	{
																		if(cqi < 10.5)
																			return 3.55556;
																		else
																			return 2.94985;
																	}
																}
																else
																{
																	if(ta < 12)
																	{
																		if(rsrp < -91.5)
																			return 7.44879;
																		else
																		{
																			if(rsrq < -9.5)
																				return 4.86914;
																			else
																				return 5.92154;
																		}
																	}
																	else
																		return 7.77454;
																}
															}
														}
													}
													else
														return 12.0482;
												}
												else
												{
													if(cqi < 7.5)
													{
														if(rsrp < -100.5)
															return 5.09554;
														else
														{
															if(rsrp < -98.5)
															{
																if(velocity < 12.77)
																	return 1.37907;
																else
																	return 1.91663;
															}
															else
															{
																if(sinr < 7.5)
																{
																	if(sinr < 3)
																	{
																		if(payload < 0.75)
																			return 3.84164;
																		else
																			return 3.14837;
																	}
																	else
																		return 4.5247;
																}
																else
																	return 3.2138175;
															}
														}
													}
													else
													{
														if(ta < 8.5)
														{
															if(rsrp < -97.5)
															{
																if(rsrp < -100)
																	return 3.21802;
																else
																	return 2.708505;
															}
															else
															{
																if(sinr < 14)
																{
																	if(payload < 0.75)
																		return 6.29887;
																	else
																		return 5.80131;
																}
																else
																{
																	if(cqi < 10.5)
																		return 2.457;
																	else
																	{
																		if(payload < 0.75)
																			return 3.30728;
																		else
																			return 3.92542;
																	}
																}
															}
														}
														else
														{
															if(payload < 0.75)
																return 7.72201;
															else
																return 11.7474;
														}
													}
												}
											}
										}
										else
										{
											if(rsrp < -94.5)
											{
												if(sinr < 9.5)
												{
													if(cell < 29566336)
													{
														if(cqi < 8)
														{
															if(ta < 14.5)
																return 9.4451;
															else
																return 10.1523;
														}
														else
															return 8.60215;
													}
													else
													{
														if(ta < 27.5)
														{
															if(rsrp < -100)
															{
																if(velocity < 10.2)
																	return 7.12378;
																else
																{
																	if(payload < 0.75)
																		return 6.72269;
																	else
																		return 5.35117;
																}
															}
															else
															{
																if(ta < 15.5)
																{
																	if(cell < 29913344.5)
																	{
																		if(cqi < 7.5)
																		{
																			if(rsrp < -98)
																				return 7.75194;
																			else
																				return 7.28597;
																		}
																		else
																			return 6.71141;
																	}
																	else
																	{
																		if(payload < 0.75)
																			return 5.38358;
																		else
																			return 2.98954;
																	}
																}
																else
																	return 9.42757;
															}
														}
														else
														{
															if(rsrp < -96.5)
																return 5.64175;
															else
																return 2.11752;
														}
													}
												}
												else
													return 11.5942;
											}
											else
											{
												if(velocity < 13.56)
												{
													if(payload < 0.75)
														return 5.18807;
													else
													{
														if(cell < 29741056)
															return 6.382745;
														else
															return 5.67748;
													}
												}
												else
													return 7.64818;
											}
										}
									}
								}
								else
								{
									if(payload < 0.75)
										return 0.850159;
									else
										return 0.219262;
								}
							}
							else
							{
								if(ta < 9.5)
								{
									if(cell < 28881153.5)
									{
										if(ta < 6.5)
										{
											if(velocity < 15.945)
												return 10.3296;
											else
												return 9.4451;
										}
										else
											return 14.4404;
									}
									else
									{
										if(payload < 0.75)
										{
											if(rsrp < -93)
												return 9.63855;
											else
												return 8.92857;
										}
										else
											return 2.91545;
									}
								}
								else
								{
									if(sinr < 7.5)
									{
										if(payload < 0.75)
											return 8.65801;
										else
											return 10.7527;
									}
									else
									{
										if(ta < 19)
										{
											if(cell < 29483522)
											{
												if(rsrp < -94.5)
													return 6.25978;
												else
													return 5.53633;
											}
											else
											{
												if(payload < 0.75)
													return 8.08081;
												else
													return 6.80272;
											}
										}
										else
											return 4.49944;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				if(rsrp < -94.5)
				{
					if(cqi < 7.5)
					{
						if(velocity < 2.675)
						{
							if(sinr < 3.5)
							{
								if(rsrp < -109)
									return 1.9109;
								else
								{
									if(cqi < 6.5)
									{
										if(payload < 2.5)
											return 3.17334;
										else
											return 4.05885;
									}
									else
										return 4.41136;
								}
							}
							else
							{
								if(cqi < 5.5)
									return 6.91643;
								else
								{
									if(rsrp < -101)
										return 4.56361;
									else
										return 6.78829;
								}
							}
						}
						else
						{
							if(velocity < 7.435)
							{
								if(cell < 27376897)
									return 11.7417;
								else
									return 9.85222;
							}
							else
							{
								if(cell < 28365056.5)
								{
									if(cqi < 5.5)
									{
										if(rsrp < -101.5)
											return 4.52659;
										else
											return 8.36237;
									}
									else
									{
										if(cell < 27771907.5)
											return 7.45573;
										else
										{
											if(cell < 28068482)
												return 12.6917;
											else
												return 11.72175;
										}
									}
								}
								else
								{
									if(velocity < 9.255)
									{
										if(cell < 29479936.5)
										{
											if(rsrp < -95.5)
											{
												if(rsrq < -8.5)
													return 3.29625;
												else
													return 4.06194;
											}
											else
												return 4.88599;
										}
										else
											return 7.9208366667;
									}
									else
									{
										if(velocity < 14.19)
										{
											if(velocity < 12.17)
											{
												if(rsrp < -98)
													return 6.94746;
												else
													return 8.1705;
											}
											else
											{
												if(rsrp < -97.5)
												{
													if(rsrp < -98.5)
														return 11.5774;
													else
														return 11.0497;
												}
												else
												{
													if(rsrp < -96)
														return 7.8125;
													else
														return 10.8794;
												}
											}
										}
										else
										{
											if(payload < 2.5)
											{
												if(cqi < 6.5)
												{
													if(sinr < 5.5)
													{
														if(velocity < 24.56)
															return 4.404298;
														else
															return 5.55556;
													}
													else
														return 3.03663;
												}
												else
													return 6.87876;
											}
											else
											{
												if(cell < 28884993.5)
												{
													if(rsrq < -11.5)
														return 2.60332;
													else
													{
														if(rsrp < -96.5)
															return 7.75946;
														else
															return 8.50159;
													}
												}
												else
												{
													if(velocity < 19.31)
													{
														if(rsrp < -100.5)
															return 15.2575;
														else
															return 14.742;
													}
													else
														return 7.07339;
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
						if(sinr < -0.5)
							return 2.9050466667;
						else
						{
							if(rsrp < -101.5)
							{
								if(ta < 9.5)
								{
									if(velocity < 13.81)
										return 1.80811;
									else
										return 4.8731;
								}
								else
								{
									if(cqi < 9)
										return 11.2835;
									else
									{
										if(sinr < 10.5)
										{
											if(velocity < 33.915)
												return 3.7824733333;
											else
												return 4.30686;
										}
										else
											return 5.51263;
									}
								}
							}
							else
							{
								if(ta < 7.5)
								{
									if(cqi < 11.5)
									{
										if(sinr < 17.5)
										{
											if(velocity < 5.285)
											{
												if(sinr < 10.5)
													return 7.42804;
												else
													return 8.17996;
											}
											else
											{
												if(ta < 5.5)
													return 6.9035066667;
												else
												{
													if(sinr < 7.5)
													{
														if(sinr < 6.5)
															return 5.63645;
														else
															return 7.29483;
													}
													else
														return 1.68634;
												}
											}
										}
										else
											return 11.6279;
									}
									else
									{
										if(rsrq < -6.5)
											return 5.5325;
										else
											return 4.66382;
									}
								}
								else
								{
									if(sinr < 3)
										return 5.14635;
									else
									{
										if(rsrq < -8)
											return 13.0364;
										else
										{
											if(payload < 2.5)
												return 10.3829;
											else
												return 9.50872;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if(f < 1384.95)
					{
						if(rsrq < -10)
							return 1.24079;
						else
							return 6.02183;
					}
					else
					{
						if(cell < 28068481.5)
						{
							if(rsrp < -92.5)
							{
								if(rsrp < -93.5)
									return 9.47867;
								else
									return 7.20288;
							}
							else
							{
								if(rsrp < -90.5)
								{
									if(cqi < 9.5)
									{
										if(rsrq < -9.5)
											return 9.38967;
										else
										{
											if(rsrp < -91.5)
											{
												if(sinr < 8)
													return 12.5251333333;
												else
													return 11.1266;
											}
											else
											{
												if(rsrq < -7)
													return 14.7601;
												else
													return 13.1148;
											}
										}
									}
									else
										return 15.9521;
								}
								else
								{
									if(sinr < 8.5)
									{
										if(rsrp < -89.5)
											return 9.06516;
										else
											return 6.94746;
									}
									else
									{
										if(ta < 2.5)
										{
											if(cqi < 9)
												return 9.50683;
											else
											{
												if(sinr < 11.5)
													return 13.4003;
												else
												{
													if(payload < 2.5)
														return 9.19012;
													else
														return 11.0193;
												}
											}
										}
										else
										{
											if(rsrq < -7.5)
												return 14.6879;
											else
											{
												if(velocity < 7.435)
													return 9.1047;
												else
													return 11.396;
											}
										}
									}
								}
							}
						}
						else
						{
							if(cell < 29483522)
							{
								if(velocity < 7.595)
								{
									if(rsrq < -6.5)
									{
										if(rsrq < -11.5)
											return 11.976;
										else
										{
											if(rsrq < -10)
											{
												if(rsrp < -90)
												{
													if(cqi < 8.5)
														return 6.77966;
													else
														return 6.19515;
												}
												else
													return 7.35632;
											}
											else
											{
												if(payload < 2.5)
													return 8.467855;
												else
													return 10.1095;
											}
										}
									}
									else
									{
										if(cqi < 8)
											return 13.2597;
										else
											return 15.0659;
									}
								}
								else
								{
									if(sinr < 13.5)
									{
										if(rsrp < -93)
										{
											if(cell < 29394690.5)
											{
												if(rsrq < -8)
													return 7.08278;
												else
													return 2.83638;
											}
											else
												return 7.46269;
										}
										else
										{
											if(cqi < 9.5)
											{
												if(cqi < 8.5)
												{
													if(cell < 28878081)
														return 7.76448;
													else
														return 7.05467;
												}
												else
												{
													if(sinr < 5.5)
														return 8.33768;
													else
														return 10.9365;
												}
											}
											else
											{
												if(payload < 2.5)
													return 5.88019;
												else
													return 6.98283;
											}
										}
									}
									else
									{
										if(cell < 29394691)
										{
											if(payload < 2.5)
												return 7.32265;
											else
												return 4.84359;
										}
										else
										{
											if(payload < 2.5)
											{
												if(velocity < 13.725)
													return 11.0117;
												else
												{
													if(rsrq < -6.5)
														return 8.94855;
													else
														return 7.32601;
												}
											}
											else
											{
												if(sinr < 20.5)
													return 11.6732;
												else
													return 10.5448;
											}
										}
									}
								}
							}
							else
							{
								if(velocity < 7.7)
								{
									if(sinr < 3.5)
										return 7.8457;
									else
									{
										if(payload < 2.5)
											return 9.87045;
										else
											return 9.34216;
									}
								}
								else
								{
									if(payload < 2.5)
										return 9.86132;
									else
									{
										if(velocity < 13.765)
										{
											if(ta < 9.5)
												return 13.43805;
											else
												return 12.4095;
										}
										else
											return 15.3649;
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
			if(ta < 6.5)
			{
				if(payload < 0.75)
				{
					if(sinr < 37.5)
					{
						if(ta < 2.5)
						{
							if(rsrp < -70.5)
							{
								if(payload < 0.3)
								{
									if(rsrq < -4.5)
									{
										if(sinr < 7.5)
										{
											if(rsrp < -80.5)
												return 4.21054;
											else
												return 3.31951;
										}
										else
										{
											if(velocity < 12.605)
											{
												if(cell < 27888256.5)
												{
													if(cell < 26382081.5)
														return 5.00002;
													else
													{
														if(sinr < 16)
															return 5.29803;
														else
															return 4.7059;
													}
												}
												else
													return 5.49889;
											}
											else
											{
												if(sinr < 25.5)
												{
													if(sinr < 15.5)
														return 4.96896;
													else
													{
														if(cell < 28842627)
														{
															if(sinr < 19)
																return 6.72271;
															else
															{
																if(rsrp < -82)
																	return 6.6116;
																else
																	return 5.92595;
															}
														}
														else
															return 7.58314;
													}
												}
												else
												{
													if(velocity < 13.755)
													{
														if(rsrp < -73.5)
															return 7.14288;
														else
															return 5.67378;
													}
													else
													{
														if(velocity < 14.725)
															return 4.8193;
														else
															return 5.4637357143;
													}
												}
											}
										}
									}
									else
									{
										if(rsrp < -78)
											return 9.09094;
										else
											return 5.4422;
									}
								}
								else
								{
									if(ta < 0.5)
										return 2.98063;
									else
									{
										if(velocity < 11.975)
										{
											if(sinr < 28)
											{
												if(rsrq < -6.5)
													return 6.20517;
												else
												{
													if(velocity < 9.8)
													{
														if(cqi < 11.5)
															return 8.23045;
														else
															return 6.39499;
													}
													else
														return 9.23788;
												}
											}
											else
												return 9.47867;
										}
										else
										{
											if(rsrp < -87.5)
											{
												if(sinr < 12.5)
												{
													if(cqi < 13.5)
														return 7.20721;
													else
														return 8.24742;
												}
												else
													return 10.7239;
											}
											else
											{
												if(ta < 1.5)
												{
													if(cqi < 11.5)
													{
														if(sinr < 22)
															return 10.7817;
														else
															return 11.4943;
													}
													else
													{
														if(velocity < 33.41)
															return 8.4227075;
														else
															return 5.83942;
													}
												}
												else
													return 14.1343;
											}
										}
									}
								}
							}
							else
							{
								if(rsrp < -68.5)
								{
									if(rsrq < -7.5)
										return 22.8572;
									else
										return 14.7059;
								}
								else
								{
									if(f < 1384.95)
										return 10.4712;
									else
									{
										if(rsrp < -67.5)
											return 8.03213;
										else
											return 6.34923;
									}
								}
							}
						}
						else
						{
							if(sinr < 11.5)
							{
								if(rsrq < -6.5)
									return 8.08084;
								else
									return 10.2564;
							}
							else
							{
								if(rsrq < -7.5)
								{
									if(velocity < 8.39)
										return 4.25534;
									else
										return 2.47679;
								}
								else
								{
									if(velocity < 2.955)
									{
										if(sinr < 20.5)
										{
											if(rsrp < -84.5)
												return 6.277045;
											else
												return 5.10204;
										}
										else
										{
											if(rsrp < -76)
											{
												if(rsrp < -85.5)
													return 3.03031;
												else
													return 4.4565785714;
											}
											else
												return 6.43087;
										}
									}
									else
									{
										if(cqi < 12.5)
										{
											if(rsrp < -83)
											{
												if(velocity < 12.87)
												{
													if(ta < 4.5)
													{
														if(rsrp < -84.5)
														{
															if(cell < 28879105)
																return 8.38574;
															else
																return 7.63359;
														}
														else
															return 9.52385;
													}
													else
														return 5.88238;
												}
												else
													return 3.29219;
											}
											else
											{
												if(sinr < 23)
												{
													if(rsrp < -74)
													{
														if(rsrq < -5.5)
															return 6.935198;
														else
															return 6.052125;
													}
													else
														return 5.45703;
												}
												else
												{
													if(cqi < 11.5)
														return 4.21054;
													else
													{
														if(rsrp < -71.5)
															return 4.9897966667;
														else
														{
															if(velocity < 8.99)
																return 4.87807;
															else
																return 4.25534;
														}
													}
												}
											}
										}
										else
										{
											if(rsrq < -5.5)
											{
												if(sinr < 28.5)
													return 4.47414;
												else
												{
													if(sinr < 35.5)
														return 6.0698;
													else
														return 5.29801;
												}
											}
											else
											{
												if(velocity < 15.205)
												{
													if(cell < 28581505.5)
														return 6.40007;
													else
														return 5.79712;
												}
												else
												{
													if(sinr < 25.5)
														return 6.20157;
													else
														return 5.3735966667;
												}
											}
										}
									}
								}
							}
						}
					}
					else
						return 22.2223;
				}
				else
				{
					if(f < 1384.95)
					{
						if(velocity < 33.31)
						{
							if(cqi < 13)
								return 2.52207;
							else
								return 10.4031;
						}
						else
							return 2.98563;
					}
					else
					{
						if(velocity < 8.09)
						{
							if(sinr < 19.5)
							{
								if(rsrp < -70.5)
								{
									if(payload < 1.5)
										return 5.43848;
									else
									{
										if(cqi < 10.5)
										{
											if(rsrp < -83)
											{
												if(rsrq < -8)
													return 12.7592;
												else
													return 11.0820666667;
											}
											else
												return 8.62534;
										}
										else
										{
											if(cqi < 14.5)
											{
												if(cell < 29139201.5)
												{
													if(rsrq < -7.5)
														return 13.3407;
													else
													{
														if(cell < 26590850)
															return 15.5844;
														else
														{
															if(rsrq < -6)
															{
																if(sinr < 14)
																	return 15.2381;
																else
																	return 13.3779;
															}
															else
																return 14.9393;
														}
													}
												}
												else
													return 16.3265;
											}
											else
											{
												if(rsrp < -81)
													return 11.2518;
												else
													return 10.5727;
											}
										}
									}
								}
								else
								{
									if(payload < 1.5)
									{
										if(cqi < 7.5)
											return 8.80088;
										else
											return 7.37327;
									}
									else
										return 8.99888;
								}
							}
							else
							{
								if(ta < 5.5)
								{
									if(rsrp < -80.5)
									{
										if(sinr < 21.5)
										{
											if(rsrq < -6.5)
											{
												if(payload < 1.5)
													return 8.30737;
												else
													return 8.90373;
											}
											else
											{
												if(rsrp < -84)
													return 7.76699;
												else
													return 7.30594;
											}
										}
										else
										{
											if(cqi < 11.5)
											{
												if(cell < 29652225.5)
													return 7.0922;
												else
													return 7.87789;
											}
											else
											{
												if(rsrq < -7.5)
													return 8.58369;
												else
												{
													if(cqi < 12.5)
													{
														if(rsrp < -84.5)
															return 9.89691;
														else
															return 10.4849;
													}
													else
														return 9.659152;
												}
											}
										}
									}
									else
									{
										if(ta < 4.5)
										{
											if(cqi < 13.5)
											{
												if(ta < 3)
												{
													if(cell < 27888257.5)
														return 10.7527;
													else
														return 13.6752;
												}
												else
													return 6.51466;
											}
											else
											{
												if(rsrp < -77)
													return 10.7672;
												else
												{
													if(cqi < 14.5)
													{
														if(payload < 1.5)
															return 14.2857;
														else
															return 12.4127;
													}
													else
														return 11.1888;
												}
											}
										}
										else
											return 8.16327;
									}
								}
								else
								{
									if(payload < 2)
										return 13.4454;
									else
										return 13.9616;
								}
							}
						}
						else
						{
							if(rsrq < -15)
								return 0.472283;
							else
							{
								if(rsrp < -82.5)
								{
									if(velocity < 18.61)
									{
										if(rsrp < -85.5)
										{
											if(sinr < 10.5)
											{
												if(payload < 2)
													return 6.56814;
												else
												{
													if(velocity < 8.79)
														return 12.766;
													else
													{
														if(rsrq < -7.5)
															return 13.4907;
														else
															return 8.8364366667;
													}
												}
											}
											else
											{
												if(ta < 1.5)
													return 6.36436;
												else
												{
													if(cqi < 13.5)
													{
														if(payload < 2.5)
														{
															if(sinr < 18)
															{
																if(rsrq < -7)
																	return 15.2964;
																else
																	return 14.0180857143;
															}
															else
															{
																if(f < 2232.5)
																	return 8.20934;
																else
																	return 10.5125;
															}
														}
														else
														{
															if(ta < 2.5)
																return 12.8963;
															else
															{
																if(sinr < 20)
																	return 15.1616666667;
																else
																{
																	if(velocity < 13.91)
																		return 16.5062;
																	else
																		return 15.8311;
																}
															}
														}
													}
													else
													{
														if(ta < 4)
														{
															if(rsrp < -87)
																return 9.59233;
															else
																return 6.86106;
														}
														else
															return 14.7149;
													}
												}
											}
										}
										else
										{
											if(velocity < 14.685)
											{
												if(cqi < 13.5)
												{
													if(cell < 28068098)
													{
														if(rsrp < -83.5)
														{
															if(ta < 2.5)
																return 6.0015;
															else
															{
																if(sinr < 12.5)
																	return 7.16846;
																else
																	return 10.9141;
															}
														}
														else
															return 11.6788;
													}
													else
													{
														if(rsrq < -6.5)
														{
															if(rsrp < -84.5)
																return 11.988;
															else
															{
																if(rsrq < -8.5)
																	return 13.5823;
																else
																	return 14.4928;
															}
														}
														else
															return 11.8820714286;
													}
												}
												else
												{
													if(rsrq < -6.5)
														return 5.75954;
													else
													{
														if(ta < 2.5)
															return 6.91742;
														else
															return 9.17431;
													}
												}
											}
											else
											{
												if(velocity < 17.355)
												{
													if(ta < 5.5)
													{
														if(cqi < 10)
															return 7.133195;
														else
															return 6.232035;
													}
													else
														return 8.81057;
												}
												else
												{
													if(rsrq < -5.5)
														return 10.6242;
													else
														return 10.1394;
												}
											}
										}
									}
									else
									{
										if(sinr < 22.5)
										{
											if(velocity < 24.455)
											{
												if(payload < 2)
													return 12.3267;
												else
													return 14.4144;
											}
											else
											{
												if(rsrp < -87.5)
													return 16.178;
												else
												{
													if(payload < 2)
														return 6.23053;
													else
														return 10.0279;
												}
											}
										}
										else
										{
											if(rsrp < -83.5)
											{
												if(rsrq < -5.5)
													return 18.2648;
												else
													return 13.986;
											}
											else
												return 25;
										}
									}
								}
								else
								{
									if(velocity < 9.29)
										return 21.1082;
									else
									{
										if(velocity < 9.695)
										{
											if(f < 2232.5)
												return 7.04225;
											else
												return 9.88875;
										}
										else
										{
											if(cell < 27771908.5)
											{
												if(cqi < 7.5)
												{
													if(payload < 1.5)
														return 9.45385;
													else
														return 13.89888;
												}
												else
												{
													if(sinr < 11)
														return 25.5183;
													else
													{
														if(rsrp < -68.5)
														{
															if(payload < 1.5)
															{
																if(cell < 26385409)
																	return 17.9372;
																else
																{
																	if(sinr < 19.5)
																		return 18.7354;
																	else
																		return 19.802;
																}
															}
															else
															{
																if(velocity < 16.14)
																{
																	if(sinr < 29)
																	{
																		if(sinr < 24)
																		{
																			if(sinr < 20)
																			{
																				if(velocity < 11.535)
																					return 17.7778;
																				else
																				{
																					if(cqi < 11.5)
																					{
																						if(sinr < 12.5)
																						{
																							if(rsrp < -75)
																								return 13.5823;
																							else
																								return 13.0293;
																						}
																						else
																						{
																							if(payload < 2.5)
																								return 14.8011;
																							else
																								return 15.4639;
																						}
																					}
																					else
																						return 16.06425;
																				}
																			}
																			else
																			{
																				if(rsrq < -5.5)
																					return 10.1523;
																				else
																					return 14.7973666667;
																			}
																		}
																		else
																		{
																			if(cqi < 13.5)
																				return 21.5054;
																			else
																				return 22.1402;
																		}
																	}
																	else
																	{
																		if(sinr < 32.5)
																			return 14.157125;
																		else
																			return 12.4902;
																	}
																}
																else
																	return 22.8354;
															}
														}
														else
														{
															if(rsrp < -66)
																return 9.38967;
															else
																return 10.4302;
														}
													}
												}
											}
											else
											{
												if(payload < 1.5)
												{
													if(sinr < 15)
													{
														if(ta < 1.5)
															return 7.34619;
														else
															return 6.08828;
													}
													else
													{
														if(ta < 1.5)
															return 10.3627;
														else
															return 11.0345;
													}
												}
												else
												{
													if(rsrq < -5.5)
													{
														if(rsrq < -7.5)
															return 16.1074;
														else
														{
															if(ta < 2.5)
															{
																if(velocity < 11.93)
																	return 10.5402;
																else
																{
																	if(cqi < 10.5)
																		return 8.63931;
																	else
																		return 9.378775;
																}
															}
															else
															{
																if(sinr < 19)
																{
																	if(rsrp < -80.5)
																		return 15.9151;
																	else
																		return 13.4454;
																}
																else
																{
																	if(rsrp < -78)
																		return 12.5392;
																	else
																		return 7.12166;
																}
															}
														}
													}
													else
													{
														if(sinr < 29.5)
														{
															if(sinr < 20)
																return 18.2232;
															else
															{
																if(rsrp < -77.5)
																	return 15.9468;
																else
																	return 15.3404;
															}
														}
														else
														{
															if(payload < 2.5)
																return 13.7457;
															else
																return 13.0719;
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
				if(rsrq < -7.5)
				{
					if(velocity < 24.21)
					{
						if(cqi < 9)
						{
							if(payload < 2.5)
								return 14.0228;
							else
								return 14.9161;
						}
						else
						{
							if(payload < 0.55)
								return 5.0715525;
							else
							{
								if(ta < 12.5)
									return 8.29876;
								else
									return 7.11744;
							}
						}
					}
					else
					{
						if(payload < 2.5)
						{
							if(velocity < 26.18)
								return 15.534;
							else
							{
								if(cqi < 13)
								{
									if(payload < 1.5)
									{
										if(payload < 0.75)
											return 11.3636;
										else
											return 10.0376;
									}
									else
										return 12.2324;
								}
								else
									return 7.61905;
							}
						}
						else
						{
							if(cqi < 12.5)
								return 13.9154;
							else
								return 21.4095;
						}
					}
				}
				else
				{
					if(ta < 27.5)
					{
						if(payload < 1.5)
						{
							if(cqi < 12.5)
							{
								if(cell < 29479936.5)
								{
									if(velocity < 2.285)
										return 3.452395;
									else
									{
										if(rsrp < -75)
										{
											if(velocity < 13.72)
											{
												if(velocity < 8.225)
												{
													if(f < 2232.5)
														return 4.495555;
													else
														return 6.233498;
												}
												else
												{
													if(cqi < 10.5)
													{
														if(ta < 11.5)
														{
															if(payload < 0.55)
															{
																if(rsrp < -86.5)
																	return 5.59443;
																else
																	return 4.930985;
															}
															else
																return 8.63931;
														}
														else
															return 7.51174;
													}
													else
													{
														if(velocity < 13.015)
															return 8.4608775;
														else
														{
															if(rsrp < -85.5)
																return 6.29924;
															else
																return 6.9808;
														}
													}
												}
											}
											else
											{
												if(velocity < 29.72)
												{
													if(payload < 0.3)
														return 4.146875;
													else
													{
														if(rsrp < -82.5)
															return 5.64573;
														else
														{
															if(ta < 8.5)
																return 4.91213;
															else
																return 4.39319;
														}
													}
												}
												else
												{
													if(rsrq < -6)
														return 8.08084;
													else
														return 7.26394;
												}
											}
										}
										else
										{
											if(rsrp < -71.5)
												return 9.73236;
											else
												return 7.7821;
										}
									}
								}
								else
								{
									if(velocity < 15.125)
									{
										if(velocity < 14.545)
										{
											if(ta < 7.5)
											{
												if(velocity < 12.555)
													return 12.2888;
												else
													return 10.4987;
											}
											else
												return 12.966;
										}
										else
											return 9.63855;
									}
									else
									{
										if(velocity < 23.4)
										{
											if(sinr < 20)
												return 6.01504;
											else
											{
												if(sinr < 23)
													return 8.53789;
												else
													return 7.95229;
											}
										}
										else
										{
											if(rsrp < -81.5)
												return 7.07339;
											else
												return 4.76192;
										}
									}
								}
							}
							else
							{
								if(payload < 0.75)
								{
									if(rsrp < -67.5)
									{
										if(ta < 8)
										{
											if(sinr < 31.5)
											{
												if(cell < 26382082)
													return 8.98876;
												else
													return 8.09137;
											}
											else
												return 7.40741;
										}
										else
										{
											if(velocity < 32.865)
												return 6.977585;
											else
												return 5.73888;
										}
									}
									else
										return 5.39811;
								}
								else
								{
									if(sinr < 21.5)
									{
										if(rsrq < -5.5)
										{
											if(cqi < 14)
												return 7.57576;
											else
												return 9.23788;
										}
										else
										{
											if(ta < 13)
												return 6.36943;
											else
												return 7.5543;
										}
									}
									else
									{
										if(velocity < 15.425)
											return 12.3457;
										else
											return 13.913;
									}
								}
							}
						}
						else
						{
							if(cell < 27771011.5)
							{
								if(payload < 2.5)
								{
									if(cqi < 13.5)
									{
										if(velocity < 13.31)
										{
											if(sinr < 17.5)
												return 9.91617;
											else
												return 8.97364;
										}
										else
											return 10.8722;
									}
									else
										return 6.9808;
								}
								else
								{
									if(sinr < 14)
										return 11.2202;
									else
									{
										if(rsrq < -6.5)
											return 11.6392;
										else
											return 13.6286;
									}
								}
							}
							else
							{
								if(rsrp < -71.5)
								{
									if(rsrp < -83)
									{
										if(cell < 31720448)
										{
											if(payload < 2.5)
												return 14.3369;
											else
											{
												if(cell < 28968577)
													return 12.4224;
												else
													return 13.6302;
											}
										}
										else
											return 10.6525;
									}
									else
									{
										if(rsrp < -80.5)
										{
											if(sinr < 25)
												return 16.3043;
											else
												return 14.7874;
										}
										else
										{
											if(sinr < 21)
												return 14.3627;
											else
												return 13.46348;
										}
									}
								}
								else
									return 9.55224;
							}
						}
					}
					else
					{
						if(rsrp < -68)
							return 2.6178;
						else
						{
							if(rsrp < -60.5)
								return 5.55558;
							else
								return 4.4944;
						}
					}
				}
			}
		}
	}
	else
	{
		if(rsrp < -91.5)
		{
			if(sinr < 4.5)
			{
				if(payload < 5.5)
				{
					if(rsrp < -109.5)
						return 2.20958;
					else
					{
						if(velocity < 16.765)
						{
							if(velocity < 13.625)
							{
								if(sinr < -1.5)
								{
									if(cell < 29517569.5)
										return 4.68396;
									else
										return 3.53982;
								}
								else
								{
									if(cell < 28884738.5)
									{
										if(rsrp < -106.5)
										{
											if(sinr < -0.5)
												return 11.9653;
											else
												return 8.9285;
										}
										else
										{
											if(sinr < 3.5)
											{
												if(ta < 12.5)
												{
													if(ta < 8)
														return 2.79652;
													else
														return 2.22454;
												}
												else
												{
													if(ta < 16.5)
														return 9.07647;
													else
														return 5.78285;
												}
											}
											else
											{
												if(cell < 28366721)
												{
													if(rsrq < -10)
														return 9.90099;
													else
														return 10.4685;
												}
												else
												{
													if(rsrp < -101)
														return 4.79832;
													else
														return 6.2281;
												}
											}
										}
									}
									else
									{
										if(cell < 30588288)
										{
											if(ta < 8)
												return 13.2582;
											else
												return 11.3731;
										}
										else
											return 15.7869;
									}
								}
							}
							else
							{
								if(rsrp < -104)
								{
									if(sinr < -0.5)
										return 13.7127;
									else
									{
										if(cell < 28842627)
										{
											if(rsrp < -106)
												return 7.87789;
											else
												return 6.873875;
										}
										else
											return 10.2204;
									}
								}
								else
								{
									if(velocity < 14.19)
									{
										if(ta < 6)
											return 16.7856;
										else
											return 18.3276;
									}
									else
									{
										if(rsrp < -95)
										{
											if(velocity < 14.69)
											{
												if(payload < 4.5)
													return 9.86436;
												else
													return 11.564;
											}
											else
											{
												if(rsrp < -98.5)
												{
													if(rsrp < -99.5)
														return 13.197;
													else
														return 12.5707;
												}
												else
												{
													if(cqi < 8.5)
														return 15.6709;
													else
														return 14.2096;
												}
											}
										}
										else
											return 9.28074;
									}
								}
							}
						}
						else
						{
							if(velocity < 29.34)
							{
								if(cqi < 5)
									return 0.759503;
								else
								{
									if(velocity < 22.645)
										return 1.80282;
									else
										return 2.6936;
								}
							}
							else
							{
								if(cell < 30851841)
								{
									if(cell < 29096706.5)
										return 6.8918;
									else
										return 5.46728;
								}
								else
									return 9.07647;
							}
						}
					}
				}
				else
				{
					if(f < 1384.95)
						return 2.67264;
					else
					{
						if(ta < 19.5)
						{
							if(cqi < 8.5)
							{
								if(payload < 8.5)
								{
									if(rsrp < -102.5)
									{
										if(ta < 3.5)
											return 19.025;
										else
										{
											if(velocity < 1.31)
											{
												if(rsrq < -11.5)
													return 3.62784;
												else
													return 8.10948;
											}
											else
											{
												if(cell < 27771908)
													return 21.8132;
												else
												{
													if(rsrp < -103.5)
													{
														if(sinr < 1.5)
														{
															if(ta < 8.5)
																return 12.0586;
															else
															{
																if(velocity < 14.68)
																{
																	if(sinr < 0.5)
																		return 10.3778;
																	else
																		return 9.62034;
																}
																else
																	return 8.862606;
															}
														}
														else
														{
															if(velocity < 14.475)
															{
																if(velocity < 11.735)
																{
																	if(cell < 28366720)
																		return 8.88889;
																	else
																		return 10.5986;
																}
																else
																	return 11.9092;
															}
															else
																return 14.6991;
														}
													}
													else
													{
														if(payload < 7.5)
															return 4.8048;
														else
															return 7.02371;
													}
												}
											}
										}
									}
									else
									{
										if(ta < 17.5)
										{
											if(velocity < 11.355)
											{
												if(velocity < 11.335)
												{
													if(sinr < -2.5)
														return 8.80896;
													else
													{
														if(rsrp < -99.5)
														{
															if(rsrq < -9.5)
															{
																if(rsrq < -11.5)
																	return 10.2302;
																else
																	return 11.0497;
															}
															else
																return 12.4103;
														}
														else
														{
															if(rsrp < -97)
															{
																if(cqi < 7)
																{
																	if(rsrq < -10)
																		return 19.7897;
																	else
																		return 16.2602;
																}
																else
																	return 22.2134;
															}
															else
															{
																if(ta < 9)
																{
																	if(rsrq < -12.5)
																		return 18.0006;
																	else
																	{
																		if(rsrq < -10.5)
																		{
																			if(velocity < 3.17)
																				return 15.6671;
																			else
																			{
																				if(velocity < 7.775)
																					return 12.3077;
																				else
																					return 15.3895;
																			}
																		}
																		else
																			return 17.9143;
																	}
																}
																else
																{
																	if(velocity < 8.58)
																	{
																		if(rsrp < -93)
																		{
																			if(ta < 13)
																				return 11.8694;
																			else
																				return 11.0701;
																		}
																		else
																			return 14.716;
																	}
																	else
																		return 10.6048;
																}
															}
														}
													}
												}
												else
													return 23.0548;
											}
											else
											{
												if(velocity < 13.575)
												{
													if(cqi < 5)
														return 10.3608;
													else
													{
														if(rsrq < -11.5)
															return 8.80572;
														else
															return 6.0128266667;
													}
												}
												else
												{
													if(sinr < 0.5)
													{
														if(cell < 28878080.5)
														{
															if(cell < 28067969.5)
																return 14.395;
															else
																return 13.2286;
														}
														else
														{
															if(rsrp < -100)
																return 17.5889;
															else
																return 15.5156333333;
														}
													}
													else
													{
														if(velocity < 14.255)
														{
															if(rsrp < -96.5)
																return 24.5291;
															else
																return 14.2096;
														}
														else
														{
															if(cqi < 7.5)
															{
																if(rsrp < -96.5)
																{
																	if(velocity < 14.96)
																	{
																		if(rsrp < -101.5)
																			return 9.78394;
																		else
																			return 10.6054;
																	}
																	else
																	{
																		if(velocity < 16.13)
																		{
																			if(rsrp < -99.5)
																				return 13.4389;
																			else
																				return 14.6329;
																		}
																		else
																			return 12.2788666667;
																	}
																}
																else
																{
																	if(rsrq < -8.5)
																		return 7.91687;
																	else
																		return 7.3791;
																}
															}
															else
															{
																if(rsrp < -97.5)
																	return 6.93016;
																else
																	return 8.45666;
															}
														}
													}
												}
											}
										}
										else
											return 21.9178;
									}
								}
								else
								{
									if(cqi < 6.5)
									{
										if(sinr < 3)
										{
											if(rsrp < -102.5)
											{
												if(rsrq < -8.5)
												{
													if(payload < 9.5)
														return 11.7917;
													else
													{
														if(velocity < 8.115)
															return 9.355078;
														else
															return 10.2788;
													}
												}
												else
													return 5.74163;
											}
											else
											{
												if(payload < 9.5)
												{
													if(rsrq < -10)
													{
														if(velocity < 13.99)
															return 22.2017;
														else
															return 16.2053;
													}
													else
														return 9.19658;
												}
												else
												{
													if(cell < 28365056.5)
														return 8.92558;
													else
													{
														if(rsrq < -11)
														{
															if(sinr < -1.5)
																return 14.6333;
															else
																return 14.0154;
														}
														else
															return 11.7699;
													}
												}
											}
										}
										else
										{
											if(cell < 28068481.5)
											{
												if(rsrp < -102)
													return 6.2985233333;
												else
													return 15.1;
											}
											else
											{
												if(ta < 6.5)
													return 20.2817;
												else
													return 17.208;
											}
										}
									}
									else
									{
										if(cqi < 7.5)
										{
											if(ta < 9)
											{
												if(velocity < 14.21)
												{
													if(sinr < -0.5)
														return 21.9914;
													else
													{
														if(velocity < 7.455)
															return 16.8579;
														else
															return 19.656;
													}
												}
												else
													return 12.4902;
											}
											else
											{
												if(cell < 27373442)
													return 16.5555;
												else
												{
													if(rsrp < -96)
													{
														if(rsrq < -11.5)
														{
															if(rsrq < -12.5)
																return 13.5593;
															else
																return 14.4029;
														}
														else
															return 9.46634;
													}
													else
														return 20.6879;
												}
											}
										}
										else
										{
											if(cell < 29485184.5)
												return 14.3927;
											else
											{
												if(ta < 4.5)
													return 9.19188;
												else
													return 10.9364;
											}
										}
									}
								}
							}
							else
							{
								if(rsrp < -100)
								{
									if(ta < 11)
										return 11.5274;
									else
										return 14.7874;
								}
								else
								{
									if(rsrq < -7.5)
									{
										if(payload < 8)
											return 16.567675;
										else
											return 17.5362;
									}
									else
										return 18.8828;
								}
							}
						}
						else
						{
							if(rsrq < -11)
							{
								if(rsrq < -14.5)
									return 7.52823;
								else
									return 10.62284;
							}
							else
								return 5.58102;
						}
					}
				}
			}
			else
			{
				if(cell < 33527553)
				{
					if(payload < 6.5)
					{
						if(sinr < 7.5)
						{
							if(velocity < 12.265)
							{
								if(rsrq < -8.5)
								{
									if(ta < 6)
									{
										if(rsrp < -103)
											return 14.218;
										else
											return 11.8308;
									}
									else
									{
										if(ta < 10)
											return 15.3748;
										else
											return 16.1616;
									}
								}
								else
								{
									if(cqi < 13.5)
									{
										if(rsrp < -101.5)
										{
											if(velocity < 9.85)
												return 8.73045;
											else
												return 7.28332;
										}
										else
										{
											if(cqi < 11.5)
											{
												if(payload < 4.5)
													return 13.1579;
												else
												{
													if(rsrp < -95)
														return 12.7796;
													else
														return 12.2026;
												}
											}
											else
												return 10.5657;
										}
									}
									else
										return 7.68197;
								}
							}
							else
							{
								if(cqi < 6.5)
								{
									if(cell < 28881667)
									{
										if(rsrp < -99.5)
											return 8.93356;
										else
											return 7.2205833333;
									}
									else
										return 12.6622;
								}
								else
								{
									if(rsrq < -8.5)
										return 7.994415;
									else
									{
										if(sinr < 6)
											return 5.8347933333;
										else
										{
											if(rsrp < -94)
												return 6.716645;
											else
												return 5.80201;
										}
									}
								}
							}
						}
						else
						{
							if(sinr < 18.5)
							{
								if(velocity < 11.525)
								{
									if(ta < 8)
									{
										if(cqi < 14.5)
										{
											if(ta < 3)
											{
												if(rsrq < -9)
													return 22.1361;
												else
													return 14.9198;
											}
											else
											{
												if(velocity < 4.11)
												{
													if(rsrq < -8.5)
													{
														if(rsrp < -95)
															return 19.2678;
														else
														{
															if(cell < 29479936.5)
																return 15.0489;
															else
																return 14.3062;
														}
													}
													else
													{
														if(rsrp < -96.5)
															return 12.1243;
														else
															return 13.5916;
													}
												}
												else
												{
													if(sinr < 12.5)
													{
														if(cell < 28879744)
														{
															if(velocity < 8.97)
																return 18.3276;
															else
																return 19.3392;
														}
														else
															return 15.4381;
													}
													else
													{
														if(velocity < 10.39)
														{
															if(sinr < 14.5)
																return 14.9087;
															else
																return 14.1277;
														}
														else
														{
															if(rsrp < -94)
																return 15.9046;
															else
																return 16.4727333333;
														}
													}
												}
											}
										}
										else
											return 8.67993;
									}
									else
									{
										if(cqi < 8.5)
										{
											if(sinr < 11)
												return 20.0669;
											else
											{
												if(rsrp < -93.5)
													return 22.0629;
												else
													return 21.0896;
											}
										}
										else
										{
											if(velocity < 3.785)
												return 12.0391;
											else
											{
												if(ta < 9.5)
													return 17.89445;
												else
												{
													if(rsrp < -94)
														return 15.9734;
													else
														return 17.2507;
												}
											}
										}
									}
								}
								else
								{
									if(ta < 6.5)
									{
										if(velocity < 14.775)
										{
											if(rsrq < -10)
												return 12.9116;
											else
											{
												if(cell < 28071170)
													return 14.1468;
												else
													return 14.8213333333;
											}
										}
										else
											return 17.6724;
									}
									else
									{
										if(cqi < 10.5)
										{
											if(payload < 4.5)
											{
												if(cqi < 8.5)
												{
													if(velocity < 12.475)
														return 7.72574;
													else
														return 8.71578;
												}
												else
													return 4.31965;
											}
											else
											{
												if(cell < 28368129)
												{
													if(payload < 5.5)
													{
														if(cqi < 7.5)
															return 15.3374;
														else
															return 12.5078;
													}
													else
														return 16.5975;
												}
												else
												{
													if(sinr < 10.5)
													{
														if(rsrp < -96)
															return 8.4063;
														else
															return 8.87082;
													}
													else
														return 12.7226;
												}
											}
										}
										else
										{
											if(rsrq < -6.5)
												return 14.9757;
											else
												return 16.3132;
										}
									}
								}
							}
							else
							{
								if(sinr < 28.5)
								{
									if(payload < 4.5)
									{
										if(cqi < 11.5)
										{
											if(rsrp < -92.5)
												return 10.356;
											else
												return 9.276705;
										}
										else
											return 6.30045;
									}
									else
									{
										if(cqi < 8)
										{
											if(sinr < 20.5)
												return 8.75593;
											else
												return 9.7371;
										}
										else
										{
											if(rsrq < -6)
											{
												if(payload < 5.5)
													return 11.2391;
												else
												{
													if(rsrp < -96.5)
														return 14.8148;
													else
														return 15.5794;
												}
											}
											else
											{
												if(ta < 4.5)
													return 6.86303;
												else
												{
													if(cqi < 10)
														return 10.1678;
													else
														return 12.3935;
												}
											}
										}
									}
								}
								else
									return 17.5362;
							}
						}
					}
					else
					{
						if(rsrq < -8.5)
						{
							if(rsrp < -104)
							{
								if(cell < 29139200.5)
								{
									if(payload < 9.5)
										return 8.74211;
									else
									{
										if(rsrp < -107)
											return 8.55432;
										else
											return 4.78813;
									}
								}
								else
									return 14.9841;
							}
							else
							{
								if(velocity < 17.2)
								{
									if(velocity < 14.275)
									{
										if(ta < 7.5)
										{
											if(cqi < 8.5)
											{
												if(velocity < 3.96)
												{
													if(sinr < 12)
														return 20.1342;
													else
														return 22.4809;
												}
												else
												{
													if(ta < 5.5)
														return 12.27495;
													else
													{
														if(payload < 8)
															return 15.891;
														else
															return 13.5415;
													}
												}
											}
											else
											{
												if(payload < 9.5)
												{
													if(rsrp < -93.5)
													{
														if(payload < 8.5)
														{
															if(sinr < 5.5)
																return 10.3627;
															else
																return 11.193;
														}
														else
															return 6.04483;
													}
													else
													{
														if(payload < 8.5)
														{
															if(ta < 5.5)
																return 13.0263;
															else
																return 14.1593;
														}
														else
															return 10.8893;
													}
												}
												else
													return 16.3499;
											}
										}
										else
										{
											if(sinr < 5.5)
											{
												if(velocity < 2.96)
												{
													if(payload < 7.5)
														return 17.9545;
													else
														return 14.3982;
												}
												else
												{
													if(ta < 11)
														return 12.7273;
													else
													{
														if(ta < 15)
															return 14.1187;
														else
															return 13.5044;
													}
												}
											}
											else
											{
												if(sinr < 8)
												{
													if(payload < 7.5)
														return 21.156;
													else
													{
														if(payload < 8.5)
															return 18.5346;
														else
															return 17.6193;
													}
												}
												else
												{
													if(payload < 9.5)
													{
														if(velocity < 4.52)
															return 16.6821;
														else
															return 17.3260333333;
													}
													else
														return 14.7738;
												}
											}
										}
									}
									else
									{
										if(rsrq < -9.5)
										{
											if(payload < 9)
												return 10.3981;
											else
												return 9.12513;
										}
										else
											return 5.35885;
									}
								}
								else
								{
									if(ta < 6.5)
									{
										if(cqi < 7.5)
											return 19.5804;
										else
											return 22.5543;
									}
									else
									{
										if(cell < 29517057.5)
											return 17.0168333333;
										else
											return 18.3533;
									}
								}
							}
						}
						else
						{
							if(sinr < 21.5)
							{
								if(ta < 10.5)
								{
									if(cqi < 3)
										return 30.3951;
									else
									{
										if(velocity < 8.09)
										{
											if(sinr < 6.5)
												return 4.54361;
											else
											{
												if(sinr < 7.5)
													return 22.5273;
												else
												{
													if(cell < 28367745)
														return 10.2085666667;
													else
													{
														if(payload < 8)
															return 11.0497;
														else
															return 11.6522;
													}
												}
											}
										}
										else
										{
											if(cqi < 13.5)
											{
												if(velocity < 11.565)
												{
													if(velocity < 9.76)
													{
														if(rsrp < -97.5)
															return 18.8998;
														else
															return 16.6419;
													}
													else
													{
														if(rsrp < -97.5)
														{
															if(sinr < 7)
																return 13.7292;
															else
																return 19.98;
														}
														else
														{
															if(rsrq < -7.5)
																return 26.4901;
															else
															{
																if(rsrp < -95)
																	return 23.4212;
																else
																	return 21.6383;
															}
														}
													}
												}
												else
												{
													if(cell < 28367744.5)
													{
														if(rsrq < -6.5)
														{
															if(rsrq < -7.5)
															{
																if(ta < 8.5)
																{
																	if(payload < 8.5)
																		return 12.6183;
																	else
																		return 10.6171;
																}
																else
																	return 16.7785;
															}
															else
															{
																if(payload < 7.5)
																{
																	if(rsrp < -101)
																		return 18.4818;
																	else
																	{
																		if(f < 2232.5)
																			return 14.0421;
																		else
																			return 12.4527;
																	}
																}
																else
																{
																	if(cqi < 8)
																		return 19.3295;
																	else
																		return 21.4669;
																}
															}
														}
														else
														{
															if(payload < 8.5)
																return 8.1064;
															else
																return 10.2258;
														}
													}
													else
													{
														if(cqi < 9.5)
														{
															if(sinr < 14)
															{
																if(f < 2232.5)
																{
																	if(rsrq < -7.5)
																		return 21.2515;
																	else
																	{
																		if(sinr < 12)
																			return 18.0099;
																		else
																			return 19.5551;
																	}
																}
																else
																{
																	if(rsrp < -92.5)
																	{
																		if(rsrp < -95)
																			return 16.6359;
																		else
																			return 17.3067;
																	}
																	else
																		return 18.082;
																}
															}
															else
																return 12.2511;
														}
														else
														{
															if(payload < 9.5)
															{
																if(payload < 8)
																	return 19.6147;
																else
																	return 15.0943;
															}
															else
																return 26.2037;
														}
													}
												}
											}
											else
											{
												if(payload < 8.5)
													return 23.6949;
												else
												{
													if(velocity < 12.82)
														return 20.7672;
													else
														return 21.751;
												}
											}
										}
									}
								}
								else
								{
									if(cqi < 7.5)
									{
										if(payload < 9.5)
										{
											if(ta < 15.5)
											{
												if(rsrp < -97)
													return 19.9336;
												else
													return 19.1912;
											}
											else
												return 11.4637;
										}
										else
											return 10.9111;
									}
									else
									{
										if(rsrp < -93)
										{
											if(ta < 11.5)
												return 20.1068;
											else
											{
												if(cell < 28328963)
													return 24.1171;
												else
												{
													if(sinr < 8)
														return 21.6174;
													else
													{
														if(cell < 30341505)
															return 23.4398;
														else
															return 22.61715;
													}
												}
											}
										}
										else
											return 26.1973;
									}
								}
							}
							else
							{
								if(payload < 7.5)
									return 16.5338;
								else
									return 10.3997;
							}
						}
					}
				}
				else
				{
					if(rsrp < -94)
					{
						if(payload < 8.5)
						{
							if(velocity < 32.565)
								return 3.95452;
							else
								return 4.97778;
						}
						else
							return 6.04595;
					}
					else
						return 7.50469;
				}
			}
		}
		else
		{
			if(payload < 6.5)
			{
				if(sinr < 28.5)
				{
					if(rsrq < -8.5)
					{
						if(cqi < 9.5)
						{
							if(rsrp < -88.5)
							{
								if(velocity < 13.145)
								{
									if(ta < 7.5)
									{
										if(sinr < -2.5)
											return 2.45832;
										else
										{
											if(sinr < 19)
												return 9.307078;
											else
												return 7.58294;
										}
									}
									else
									{
										if(sinr < 9)
										{
											if(rsrq < -10.5)
												return 10.4060333333;
											else
												return 11.151825;
										}
										else
											return 8.79507;
									}
								}
								else
								{
									if(cqi < 5.5)
										return 15.7869;
									else
									{
										if(cqi < 7)
											return 10.5904;
										else
											return 12.8874;
									}
								}
							}
							else
							{
								if(sinr < 21.5)
								{
									if(cqi < 6.5)
									{
										if(rsrq < -10.5)
											return 13.6325;
										else
										{
											if(f < 2232.5)
												return 11.6754;
											else
												return 8.86918;
										}
									}
									else
									{
										if(rsrp < -87)
										{
											if(velocity < 5.67)
												return 16.609;
											else
											{
												if(cqi < 8)
													return 18.8857;
												else
													return 17.6861;
											}
										}
										else
										{
											if(cell < 28878080.5)
												return 14.41224;
											else
												return 9.60615;
										}
									}
								}
								else
								{
									if(sinr < 23.5)
										return 22.9391;
									else
										return 20.3218;
								}
							}
						}
						else
						{
							if(cell < 29652225)
							{
								if(cell < 27771395.5)
								{
									if(f < 2232.5)
									{
										if(rsrp < -79.5)
											return 18.2899;
										else
											return 19.8265;
									}
									else
										return 14.4209;
								}
								else
								{
									if(sinr < 17)
									{
										if(sinr < 12.5)
										{
											if(sinr < 8)
												return 13.3445;
											else
												return 12.2856;
										}
										else
										{
											if(payload < 5)
												return 11.0041;
											else
												return 11.7388;
										}
									}
									else
										return 13.741;
								}
							}
							else
							{
								if(ta < 9.5)
								{
									if(rsrq < -10.5)
										return 20.8424;
									else
										return 22.4215;
								}
								else
									return 15.8259;
							}
						}
					}
					else
					{
						if(ta < 19.5)
						{
							if(payload < 5.5)
							{
								if(velocity < 19.625)
								{
									if(cell < 29394691)
									{
										if(rsrp < -90.5)
										{
											if(ta < 2)
												return 15.0773;
											else
											{
												if(sinr < 15)
												{
													if(rsrq < -6.5)
														return 11.2076;
													else
														return 10.5291;
												}
												else
													return 6.44901;
											}
										}
										else
										{
											if(rsrq < -6.5)
											{
												if(cqi < 7)
												{
													if(sinr < 2)
														return 15.9299;
													else
													{
														if(sinr < 7)
															return 19.9203;
														else
															return 22.9753;
													}
												}
												else
												{
													if(sinr < 26.5)
													{
														if(ta < 3.5)
														{
															if(cell < 26382081.5)
															{
																if(cqi < 8.5)
																{
																	if(velocity < 13.51)
																		return 14.767;
																	else
																		return 16.0401;
																}
																else
																{
																	if(sinr < 18)
																		return 9.70285;
																	else
																		return 15.273;
																}
															}
															else
															{
																if(cell < 26590850)
																{
																	if(rsrq < -7.5)
																		return 20.9424;
																	else
																		return 18.2336;
																}
																else
																{
																	if(cqi < 9.5)
																		return 16.0772;
																	else
																		return 13.0976;
																}
															}
														}
														else
														{
															if(sinr < 3)
																return 17.0285;
															else
															{
																if(cell < 27277828.5)
																	return 15.2164;
																else
																{
																	if(sinr < 6.5)
																	{
																		if(sinr < 5)
																			return 12.8462;
																		else
																			return 11.0079;
																	}
																	else
																		return 9.1363333333;
																}
															}
														}
													}
													else
													{
														if(sinr < 27.5)
															return 26.3374;
														else
														{
															if(payload < 4.5)
															{
																if(rsrq < -7.5)
																	return 20.6452;
																else
																{
																	if(rsrp < -74)
																		return 14.7059;
																	else
																		return 16.008;
																}
															}
															else
																return 14.9589;
														}
													}
												}
											}
											else
											{
												if(f < 1342.5)
													return 7.31596;
												else
												{
													if(ta < 11)
													{
														if(sinr < 27.5)
														{
															if(f < 2232.5)
															{
																if(cell < 27771523)
																{
																	if(rsrp < -88.5)
																		return 12.8566;
																	else
																	{
																		if(ta < 5)
																		{
																			if(cqi < 9.5)
																			{
																				if(sinr < 11)
																					return 17.4064;
																				else
																					return 30.7692;
																			}
																			else
																			{
																				if(rsrp < -77)
																				{
																					if(sinr < 20)
																					{
																						if(rsrp < -84)
																							return 19.305;
																						else
																						{
																							if(cqi < 14)
																								return 22.1117;
																							else
																								return 20.9205;
																						}
																					}
																					else
																					{
																						if(rsrp < -79.5)
																							return 16.7731;
																						else
																							return 18.3908;
																					}
																				}
																				else
																				{
																					if(rsrq < -5.5)
																						return 13.8648;
																					else
																					{
																						if(sinr < 24.5)
																							return 18.3066;
																						else
																							return 17.6893;
																					}
																				}
																			}
																		}
																		else
																		{
																			if(velocity < 12.67)
																			{
																				if(ta < 6.5)
																					return 15.534;
																				else
																					return 16.3516;
																			}
																			else
																			{
																				if(payload < 4.5)
																					return 13.1417;
																				else
																					return 14.301;
																			}
																		}
																	}
																}
																else
																{
																	if(ta < 8)
																	{
																		if(rsrp < -77.5)
																		{
																			if(rsrp < -89)
																				return 18.9349;
																			else
																			{
																				if(velocity < 14.865)
																				{
																					if(cell < 28879105.5)
																					{
																						if(sinr < 9.5)
																							return 10.6773;
																						else
																							return 9.219715;
																					}
																					else
																					{
																						if(payload < 4.5)
																							return 16.3182;
																						else
																							return 10.4384;
																					}
																				}
																				else
																				{
																					if(cqi < 11)
																					{
																						if(payload < 4.5)
																							return 17.094;
																						else
																							return 20.284;
																					}
																					else
																					{
																						if(rsrp < -83)
																							return 16.7189;
																						else
																						{
																							if(cell < 28581506)
																								return 9.79432;
																							else
																								return 10.6695;
																						}
																					}
																				}
																			}
																		}
																		else
																		{
																			if(rsrp < -75.5)
																				return 18.5357;
																			else
																				return 17.1215;
																		}
																	}
																	else
																		return 20.8469;
																}
															}
															else
															{
																if(sinr < 23.5)
																{
																	if(rsrp < -83)
																	{
																		if(ta < 6)
																		{
																			if(cqi < 12.5)
																			{
																				if(cell < 27277828.5)
																					return 14.27824;
																				else
																					return 16.3733;
																			}
																			else
																				return 16.4663;
																		}
																		else
																		{
																			if(payload < 4.5)
																				return 13.2396;
																			else
																				return 13.9958;
																		}
																	}
																	else
																	{
																		if(rsrp < -72.5)
																		{
																			if(sinr < 13)
																				return 12.5638;
																			else
																				return 11.70895;
																		}
																		else
																			return 13.7836;
																	}
																}
																else
																	return 11.97025;
															}
														}
														else
															return 7.92275;
													}
													else
														return 6.19315;
												}
											}
										}
									}
									else
									{
										if(sinr < 16.5)
										{
											if(velocity < 11.455)
											{
												if(rsrp < -84.5)
												{
													if(ta < 11)
													{
														if(rsrq < -5.5)
														{
															if(rsrp < -89.5)
																return 13.8456;
															else
																return 12.8991;
														}
														else
														{
															if(ta < 4.5)
																return 14.7384;
															else
																return 15.8494;
														}
													}
													else
														return 18.4544;
												}
												else
													return 9.70285;
											}
											else
											{
												if(rsrq < -7)
													return 16.5717;
												else
												{
													if(cqi < 10)
														return 14.4862;
													else
													{
														if(rsrp < -87)
															return 18.6047;
														else
															return 17.7187;
													}
												}
											}
										}
										else
										{
											if(rsrp < -90)
											{
												if(sinr < 19.5)
												{
													if(cqi < 12.5)
														return 17.1674;
													else
														return 16.6528;
												}
												else
												{
													if(rsrq < -7)
														return 15.5415;
													else
														return 16.1421;
												}
											}
											else
											{
												if(rsrp < -79.5)
												{
													if(sinr < 21.5)
													{
														if(rsrp < -86)
														{
															if(ta < 8)
															{
																if(sinr < 18)
																	return 23.845;
																else
																	return 22.1239;
															}
															else
																return 20.429;
														}
														else
														{
															if(payload < 4.5)
																return 17.4863;
															else
																return 19.19405;
														}
													}
													else
													{
														if(rsrp < -85.5)
														{
															if(cqi < 12)
																return 15.0943;
															else
																return 15.5763;
														}
														else
														{
															if(cell < 29913345.5)
															{
																if(payload < 4.5)
																	return 19.1045;
																else
																	return 18.5271;
															}
															else
																return 17.7187;
														}
													}
												}
												else
													return 15.693;
											}
										}
									}
								}
								else
								{
									if(rsrp < -83.5)
									{
										if(cell < 27771524)
										{
											if(rsrp < -84.5)
											{
												if(rsrp < -85.5)
													return 9.40291;
												else
													return 12.1488;
											}
											else
												return 15.7869;
										}
										else
										{
											if(rsrp < -85)
											{
												if(rsrp < -89)
													return 18.3824;
												else
													return 19.6917333333;
											}
											else
												return 14.9645;
										}
									}
									else
									{
										if(velocity < 27.385)
										{
											if(cqi < 13)
											{
												if(rsrp < -82.5)
													return 26.3505;
												else
												{
													if(cqi < 10.5)
														return 22.792;
													else
														return 19.2678;
												}
											}
											else
												return 30.3951;
										}
										else
										{
											if(f < 1384.95)
												return 11.5942;
											else
											{
												if(rsrp < -80.5)
													return 16.06058;
												else
												{
													if(rsrq < -4.5)
													{
														if(payload < 4.5)
															return 17.1951;
														else
														{
															if(cqi < 13.5)
																return 19.3892;
															else
																return 18.8947;
														}
													}
													else
														return 15.3257;
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
									if(rsrq < -6)
										return 12.3967;
									else
										return 6.13732;
								}
								else
								{
									if(f < 2232.5)
									{
										if(velocity < 33.85)
										{
											if(cqi < 9.5)
											{
												if(rsrq < -5.5)
												{
													if(rsrp < -86.5)
													{
														if(sinr < 6)
															return 15.6709;
														else
														{
															if(sinr < 9.5)
																return 17.2105;
															else
																return 16.3463125;
														}
													}
													else
													{
														if(sinr < 6)
															return 17.6082;
														else
															return 18.9949;
													}
												}
												else
													return 24.0361;
											}
											else
											{
												if(rsrp < -87.5)
												{
													if(sinr < 18.5)
														return 25.7511;
													else
														return 23.8213;
												}
												else
												{
													if(ta < 5.5)
													{
														if(velocity < 4.34)
														{
															if(rsrq < -6.5)
																return 17.192;
															else
															{
																if(sinr < 23.5)
																{
																	if(sinr < 17)
																		return 20.5216;
																	else
																		return 19.8675;
																}
																else
																{
																	if(rsrp < -76.5)
																		return 26.9058;
																	else
																		return 18.4829;
																}
															}
														}
														else
														{
															if(ta < 1.5)
															{
																if(cqi < 14.5)
																{
																	if(rsrq < -5.5)
																	{
																		if(cqi < 12.5)
																			return 21.1175;
																		else
																			return 22.9594;
																	}
																	else
																	{
																		if(rsrp < -81)
																			return 20.6097;
																		else
																			return 18.2163;
																	}
																}
																else
																{
																	if(cell < 27078658)
																		return 20.1681;
																	else
																	{
																		if(velocity < 22.69)
																			return 18.2302;
																		else
																			return 17.673;
																	}
																}
															}
															else
															{
																if(sinr < 25)
																{
																	if(cell < 29913345.5)
																	{
																		if(velocity < 14.315)
																		{
																			if(velocity < 12.655)
																			{
																				if(rsrq < -6.5)
																					return 16.8599;
																				else
																				{
																					if(velocity < 9.62)
																						return 17.9305;
																					else
																						return 18.419;
																				}
																			}
																			else
																				return 16.0643;
																		}
																		else
																			return 19.7287;
																	}
																	else
																		return 12.5294;
																}
																else
																	return 13.7633333333;
															}
														}
													}
													else
													{
														if(ta < 7.5)
														{
															if(rsrp < -84.5)
																return 15.7325;
															else
															{
																if(sinr < 24)
																{
																	if(velocity < 16.445)
																	{
																		if(rsrp < -82.5)
																			return 21.8778;
																		else
																			return 22.738;
																	}
																	else
																		return 20.1089;
																}
																else
																	return 23.541;
															}
														}
														else
														{
															if(velocity < 25.395)
																return 17.9038;
															else
																return 18.6989;
														}
													}
												}
											}
										}
										else
										{
											if(rsrp < -84.5)
												return 33.8266;
											else
											{
												if(ta < 5.5)
													return 19.4253;
												else
												{
													if(velocity < 37.25)
														return 23.976;
													else
														return 23.5294;
												}
											}
										}
									}
									else
									{
										if(ta < 9.5)
										{
											if(cell < 26587523)
											{
												if(sinr < 12.5)
													return 11.7561;
												else
												{
													if(rsrp < -87.5)
														return 13.3556;
													else
													{
														if(sinr < 20)
															return 13.2159;
														else
															return 11.8343;
													}
												}
											}
											else
											{
												if(sinr < 12.5)
												{
													if(sinr < 10)
														return 18.1887;
													else
														return 16.3655;
												}
												else
												{
													if(rsrp < -72.5)
													{
														if(velocity < 11.865)
														{
															if(rsrp < -89.5)
															{
																if(sinr < 16.5)
																	return 13.0933;
																else
																	return 13.9657;
															}
															else
																return 14.8423;
														}
														else
															return 11.3933;
													}
													else
														return 15.6556;
												}
											}
										}
										else
											return 21.1921;
									}
								}
							}
						}
						else
						{
							if(cell < 33527556.5)
							{
								if(payload < 4.5)
								{
									if(sinr < 11.5)
										return 13.3612;
									else
									{
										if(rsrq < -7.5)
											return 8.04222;
										else
											return 9.19805;
									}
								}
								else
									return 15.1688;
							}
							else
								return 3.7296;
						}
					}
				}
				else
				{
					if(payload < 4.5)
					{
						if(velocity < 10.805)
						{
							if(ta < 5.5)
							{
								if(rsrq < -7.5)
									return 17.288;
								else
								{
									if(sinr < 32)
										return 17.4482;
									else
										return 16.016;
								}
							}
							else
								return 10.9141;
						}
						else
						{
							if(sinr < 31.5)
							{
								if(ta < 11)
								{
									if(cqi < 12.5)
										return 20.2532;
									else
										return 21.3333;
								}
								else
								{
									if(rsrp < -74)
										return 18.4226;
									else
										return 16.7539;
								}
							}
							else
							{
								if(rsrp < -84.5)
									return 14.0351;
								else
									return 16.8599;
							}
						}
					}
					else
					{
						if(f < 2232.5)
						{
							if(rsrq < -4.5)
							{
								if(velocity < 17.035)
								{
									if(cqi < 14)
									{
										if(velocity < 14.37)
										{
											if(rsrp < -81.5)
												return 19.3783;
											else
												return 18.0343333333;
										}
										else
											return 24.0964;
									}
									else
									{
										if(payload < 5.5)
										{
											if(rsrp < -66.5)
											{
												if(rsrp < -71)
													return 21.8103;
												else
													return 20.7039;
											}
											else
												return 25.8565;
										}
										else
										{
											if(velocity < 14.175)
												return 24.84146;
											else
											{
												if(velocity < 16.08)
													return 22.3568;
												else
													return 25.4507;
											}
										}
									}
								}
								else
								{
									if(ta < 8.5)
									{
										if(payload < 5.5)
											return 18.2565;
										else
											return 17.7253;
									}
									else
									{
										if(rsrp < -74.5)
											return 21.5054;
										else
											return 20.6718;
									}
								}
							}
							else
							{
								if(velocity < 20.275)
								{
									if(rsrp < -73.5)
										return 20.377;
									else
										return 19.4332;
								}
								else
									return 38.1679;
							}
						}
						else
							return 31.746;
					}
				}
			}
			else
			{
				if(rsrq < -5.5)
				{
					if(rsrq < -6.5)
					{
						if(rsrp < -81.5)
						{
							if(ta < 19.5)
							{
								if(velocity < 8.265)
								{
									if(cell < 27832194)
									{
										if(rsrq < -9.5)
										{
											if(rsrp < -88.5)
												return 11.9725;
											else
												return 13.712;
										}
										else
										{
											if(f < 2232.5)
											{
												if(velocity < 7.505)
												{
													if(cell < 26385408.5)
													{
														if(payload < 8)
															return 13.124;
														else
														{
															if(cell < 26381952.5)
																return 17.86976;
															else
																return 16.4534;
														}
													}
													else
													{
														if(velocity < 6.02)
															return 18.5246;
														else
															return 19.7392;
													}
												}
												else
													return 14.3113;
											}
											else
											{
												if(rsrp < -89.5)
												{
													if(cqi < 7.5)
													{
														if(rsrq < -8.5)
															return 17.5103;
														else
															return 18.7354;
													}
													else
													{
														if(payload < 9.5)
															return 20.9225333333;
														else
															return 24.3013;
													}
												}
												else
												{
													if(payload < 9)
													{
														if(velocity < 3.455)
														{
															if(payload < 7.5)
																return 16.2791;
															else
																return 17.6656666667;
														}
														else
															return 18.2513666667;
													}
													else
														return 19.9608333333;
												}
											}
										}
									}
									else
									{
										if(velocity < 6.145)
										{
											if(rsrq < -7.5)
											{
												if(payload < 8.5)
												{
													if(cqi < 7.5)
														return 10.6201;
													else
													{
														if(cqi < 8.5)
															return 17.8571;
														else
														{
															if(cell < 28878080.5)
															{
																if(payload < 7.5)
																	return 13.52;
																else
																	return 13.9983;
															}
															else
																return 16.2743;
														}
													}
												}
												else
												{
													if(payload < 9.5)
														return 11.4105;
													else
													{
														if(rsrp < -85)
															return 12.4883;
														else
															return 13.557;
													}
												}
											}
											else
											{
												if(cqi < 9)
													return 25.8398;
												else
													return 15.7702;
											}
										}
										else
										{
											if(cqi < 10)
												return 13.1765;
											else
											{
												if(rsrp < -88.5)
													return 11.4974;
												else
													return 12.6763;
											}
										}
									}
								}
								else
								{
									if(payload < 9.5)
									{
										if(ta < 5.5)
										{
											if(sinr < 9.5)
											{
												if(rsrp < -90.5)
												{
													if(velocity < 14.25)
														return 11.179;
													else
														return 10.0016;
												}
												else
												{
													if(sinr < 3)
														return 13.1282;
													else
													{
														if(ta < 4)
															return 13.5008;
														else
														{
															if(payload < 8.5)
																return 15.9204;
															else
																return 15.0849;
														}
													}
												}
											}
											else
											{
												if(velocity < 11.59)
												{
													if(cqi < 9)
													{
														if(payload < 7.5)
															return 19.4107;
														else
															return 20.069;
													}
													else
													{
														if(cqi < 13.5)
														{
															if(velocity < 10.31)
															{
																if(cqi < 10.5)
																	return 16.1136666667;
																else
																	return 16.9531;
															}
															else
																return 15.2381;
														}
														else
															return 18.3066;
													}
												}
												else
												{
													if(cell < 29391104.5)
													{
														if(cqi < 13)
														{
															if(sinr < 11.5)
																return 28.2132;
															else
															{
																if(sinr < 19.5)
																	return 24.1652;
																else
																	return 25.4676;
															}
														}
														else
														{
															if(velocity < 18.14)
																return 20.4978;
															else
																return 16.7481;
														}
													}
													else
													{
														if(velocity < 13.14)
															return 17.9775;
														else
														{
															if(velocity < 14.495)
																return 12.3818;
															else
																return 13.8648;
														}
													}
												}
											}
										}
										else
										{
											if(velocity < 12.485)
											{
												if(sinr < 3.5)
												{
													if(cqi < 6.5)
														return 16.8776;
													else
													{
														if(sinr < -2.5)
															return 16.2785;
														else
														{
															if(rsrq < -9.5)
																return 20.3859;
															else
																return 22.2664;
														}
													}
												}
												else
												{
													if(ta < 6.5)
														return 31.1419;
													else
													{
														if(cell < 27833858.5)
														{
															if(rsrp < -88.5)
																return 18.7518;
															else
															{
																if(ta < 10.5)
																	return 23.69035;
																else
																	return 24.5587;
															}
														}
														else
															return 19.3504;
													}
												}
											}
											else
											{
												if(sinr < 14)
												{
													if(rsrq < -9.5)
													{
														if(sinr < -1.5)
															return 11.8468;
														else
															return 13.858;
													}
													else
													{
														if(cell < 26587522.5)
															return 10.9825;
														else
														{
															if(rsrp < -90.5)
															{
																if(payload < 8.5)
																	return 14.4372;
																else
																	return 16.3525;
															}
															else
															{
																if(rsrp < -85)
																{
																	if(velocity < 14.865)
																	{
																		if(rsrp < -89.5)
																			return 19.042;
																		else
																		{
																			if(sinr < 6.5)
																				return 15.5729;
																			else
																				return 16.50795;
																		}
																	}
																	else
																	{
																		if(ta < 9.5)
																		{
																			if(sinr < 10.5)
																				return 19.9715;
																			else
																				return 19.1388;
																		}
																		else
																			return 18.32055;
																	}
																}
																else
																	return 20.8213;
															}
														}
													}
												}
												else
												{
													if(payload < 7.5)
														return 24.9332;
													else
														return 16.0562;
												}
											}
										}
									}
									else
									{
										if(rsrq < -9.5)
											return 3.12476;
										else
										{
											if(cqi < 10.5)
											{
												if(sinr < 7.5)
												{
													if(rsrp < -89.5)
														return 15.3876;
													else
														return 20.9974;
												}
												else
												{
													if(velocity < 9.925)
														return 30.4067;
													else
													{
														if(ta < 2)
															return 19.9154;
														else
														{
															if(velocity < 11.515)
																return 26.1609;
															else
															{
																if(rsrp < -85)
																{
																	if(rsrp < -88.5)
																		return 24.3902;
																	else
																		return 24.9221;
																}
																else
																	return 25.9067;
															}
														}
													}
												}
											}
											else
											{
												if(velocity < 29.055)
												{
													if(velocity < 10.395)
													{
														if(rsrq < -7.5)
															return 20.2378;
														else
															return 14.7248;
													}
													else
													{
														if(rsrp < -89)
															return 27.4254;
														else
														{
															if(cqi < 12.5)
															{
																if(rsrp < -85)
																{
																	if(ta < 4.5)
																		return 19.7287;
																	else
																		return 19.2123;
																}
																else
																{
																	if(rsrp < -83.5)
																		return 22.8115;
																	else
																		return 20.7093;
																}
															}
															else
															{
																if(cqi < 14)
																	return 23.1348;
																else
																	return 22.2469;
															}
														}
													}
												}
												else
													return 14.2349;
											}
										}
									}
								}
							}
							else
							{
								if(sinr < 0.5)
									return 7.47175;
								else
								{
									if(payload < 9.5)
										return 31.1284;
									else
										return 20.8388;
								}
							}
						}
						else
						{
							if(f < 2232.5)
							{
								if(sinr < 18.5)
								{
									if(cqi < 10.5)
									{
										if(ta < 5.5)
											return 21.9378;
										else
											return 15.9402;
									}
									else
									{
										if(payload < 9)
											return 10.5298;
										else
										{
											if(rsrq < -9.5)
												return 14.1143;
											else
												return 17.4749;
										}
									}
								}
								else
								{
									if(cell < 26385409)
										return 34.7222;
									else
									{
										if(velocity < 2.715)
										{
											if(cqi < 14)
												return 24.4182;
											else
											{
												if(cell < 27888257.5)
													return 24.1838;
												else
													return 22.5352;
											}
										}
										else
										{
											if(sinr < 20.5)
												return 23.2305;
											else
											{
												if(cell < 27771524)
												{
													if(rsrq < -8)
														return 25.1309;
													else
														return 26.6667;
												}
												else
													return 26.5847333333;
											}
										}
									}
								}
							}
							else
							{
								if(sinr < 18)
								{
									if(ta < 2.5)
									{
										if(rsrq < -7.5)
											return 14.0728333333;
										else
											return 16.3016;
									}
									else
									{
										if(cqi < 8.5)
											return 17.9533;
										else
											return 15.9453;
									}
								}
								else
								{
									if(ta < 2)
										return 20.276;
									else
										return 18.3861;
								}
							}
						}
					}
					else
					{
						if(rsrp < -84.5)
						{
							if(cell < 29741056)
							{
								if(cell < 27771908.5)
								{
									if(cqi < 5)
									{
										if(rsrp < -89)
											return 23.8332;
										else
											return 26.2104;
									}
									else
									{
										if(cqi < 10.5)
										{
											if(cell < 26378625.5)
												return 25.9151;
											else
											{
												if(sinr < 10.5)
												{
													if(cell < 26382081.5)
														return 12.4031;
													else
													{
														if(payload < 9)
															return 15.4814;
														else
															return 16.8244;
													}
												}
												else
												{
													if(sinr < 14.5)
													{
														if(payload < 9.5)
														{
															if(ta < 6)
															{
																if(ta < 4.5)
																	return 23.1014333333;
																else
																	return 21.9445;
															}
															else
																return 19.656;
														}
														else
															return 18.5615;
													}
													else
													{
														if(rsrp < -89.5)
															return 11.787;
														else
														{
															if(sinr < 25)
															{
																if(cell < 27078274.5)
																{
																	if(cell < 26382082.5)
																		return 20.2429;
																	else
																		return 19.1388;
																}
																else
																	return 21.9118;
															}
															else
															{
																if(cqi < 8)
																	return 18.4453;
																else
																	return 17.2373;
															}
														}
													}
												}
											}
										}
										else
										{
											if(rsrp < -90.5)
												return 30.4826;
											else
											{
												if(sinr < 15)
												{
													if(payload < 7.5)
													{
														if(sinr < 8.5)
															return 23.5195;
														else
															return 22.2134;
													}
													else
													{
														if(payload < 9)
															return 24.4368;
														else
															return 26.5957;
													}
												}
												else
												{
													if(cell < 26820867)
													{
														if(velocity < 14.07)
														{
															if(velocity < 13.545)
															{
																if(rsrp < -88)
																	return 19.428;
																else
																	return 21.0665;
															}
															else
																return 19.0703;
														}
														else
															return 17.8914;
													}
													else
													{
														if(velocity < 11.335)
															return 21.2928;
														else
														{
															if(payload < 7.5)
																return 23.1692;
															else
																return 22.3542;
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
										if(sinr < 9)
										{
											if(payload < 8.5)
												return 16.2231;
											else
											{
												if(ta < 5.5)
													return 15.5005;
												else
													return 20.979;
											}
										}
										else
										{
											if(rsrp < -86.5)
											{
												if(ta < 8)
													return 26.2582;
												else
												{
													if(f < 2232.5)
														return 22.188;
													else
													{
														if(velocity < 10.525)
														{
															if(cqi < 9.5)
																return 25.4372;
															else
																return 23.3406;
														}
														else
															return 21.102;
													}
												}
											}
											else
												return 19.407;
										}
									}
									else
									{
										if(f < 2232.5)
										{
											if(rsrp < -87.5)
											{
												if(velocity < 4.085)
												{
													if(sinr < 19.5)
														return 24.735;
													else
														return 20.2532;
												}
												else
												{
													if(payload < 7.5)
													{
														if(velocity < 19.31)
														{
															if(rsrp < -88.5)
																return 14.733;
															else
																return 15.491;
														}
														else
															return 21.4067;
													}
													else
													{
														if(velocity < 15.97)
														{
															if(payload < 8.5)
																return 18.5776;
															else
																return 19.3861;
														}
														else
															return 21.2342;
													}
												}
											}
											else
											{
												if(velocity < 19.64)
												{
													if(rsrp < -85.5)
													{
														if(cell < 29479936.5)
															return 16.6580428571;
														else
															return 14.6163;
													}
													else
														return 20.2583;
												}
												else
												{
													if(sinr < 22.5)
														return 13.7188;
													else
														return 11.0174;
												}
											}
										}
										else
										{
											if(rsrp < -90.5)
												return 15.6643;
											else
												return 10.6222;
										}
									}
								}
							}
							else
							{
								if(velocity < 13.475)
								{
									if(payload < 9)
									{
										if(cqi < 8.5)
											return 19.4057;
										else
											return 18.3667;
									}
									else
										return 26.5604;
								}
								else
								{
									if(cqi < 13)
										return 28.13315;
									else
										return 24.7142;
								}
							}
						}
						else
						{
							if(velocity < 11.59)
							{
								if(ta < 3)
								{
									if(velocity < 7.09)
									{
										if(cell < 29652225.5)
										{
											if(rsrp < -76)
												return 17.1169;
											else
												return 22.1071;
										}
										else
											return 24.369;
									}
									else
									{
										if(rsrp < -69.5)
										{
											if(sinr < 18)
											{
												if(cell < 28149378)
													return 29.0777;
												else
													return 24.1546;
											}
											else
												return 22.3053;
										}
										else
											return 28.8158;
									}
								}
								else
								{
									if(cqi < 11.5)
										return 8.87621;
									else
									{
										if(rsrp < -79.5)
										{
											if(payload < 9)
											{
												if(rsrp < -81.5)
													return 21.0526;
												else
													return 18.4864;
											}
											else
												return 15.2701;
										}
										else
										{
											if(cqi < 14.5)
											{
												if(ta < 5.5)
													return 16.9851;
												else
													return 19.0931;
											}
											else
											{
												if(cell < 27888257.5)
												{
													if(sinr < 32.5)
														return 21.9058;
													else
														return 20.2532;
												}
												else
												{
													if(sinr < 30.5)
													{
														if(rsrp < -76.5)
														{
															if(sinr < 29.5)
																return 19.0541;
															else
																return 23.2108;
														}
														else
															return 20.4895;
													}
													else
														return 17.763;
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
									if(payload < 8.5)
									{
										if(f < 2232.5)
										{
											if(cell < 29741057)
											{
												if(velocity < 14.155)
												{
													if(rsrp < -73)
													{
														if(cqi < 13.5)
															return 27.5455;
														else
														{
															if(ta < 2.5)
																return 25.305;
															else
																return 23.431;
														}
													}
													else
													{
														if(velocity < 13.405)
															return 22.3375;
														else
															return 23.4212;
													}
												}
												else
												{
													if(ta < 3.5)
													{
														if(velocity < 14.875)
															return 38.3923;
														else
														{
															if(velocity < 19.875)
															{
																if(rsrp < -76.5)
																	return 26.4151;
																else
																	return 25.8377;
															}
															else
																return 32.016;
														}
													}
													else
													{
														if(cqi < 13)
														{
															if(sinr < 10.5)
																return 28.4318;
															else
																return 27.6697;
														}
														else
															return 26.1927;
													}
												}
											}
											else
											{
												if(rsrp < -81.5)
													return 20.9561;
												else
												{
													if(rsrp < -72.5)
														return 23.7125;
													else
														return 21.555;
												}
											}
										}
										else
										{
											if(payload < 7.5)
												return 21.555;
											else
												return 20.6452;
										}
									}
									else
									{
										if(ta < 12)
										{
											if(velocity < 14.035)
											{
												if(sinr < 22.5)
												{
													if(ta < 3)
														return 24.4399;
													else
														return 25.1836;
												}
												else
													return 23.1288;
											}
											else
												return 28.0265;
										}
										else
										{
											if(cqi < 12.5)
												return 15.2252;
											else
											{
												if(rsrp < -77.5)
													return 12.5786;
												else
													return 8.24742;
											}
										}
									}
								}
								else
								{
									if(rsrp < -73.5)
									{
										if(rsrp < -80.5)
										{
											if(sinr < 15)
												return 35.1803;
											else
											{
												if(cell < 28881153)
													return 25.4291;
												else
												{
													if(rsrp < -82.5)
														return 30.3836;
													else
														return 29.3686;
												}
											}
										}
										else
										{
											if(cqi < 12.5)
											{
												if(velocity < 12.855)
													return 26.927;
												else
													return 24.8834;
											}
											else
											{
												if(rsrp < -78.5)
													return 31.9107;
												else
													return 24.5399;
											}
										}
									}
									else
									{
										if(sinr < 26)
											return 35.0723;
										else
											return 30.4762;
									}
								}
							}
						}
					}
				}
				else
				{
					if(f < 1384.95)
					{
						if(sinr < 21)
							return 4.46304;
						else
							return 11.2486;
					}
					else
					{
						if(rsrp < -68.5)
						{
							if(payload < 9.5)
							{
								if(f < 2232.5)
								{
									if(ta < 1.5)
									{
										if(sinr < 30.5)
										{
											if(rsrp < -82.5)
												return 12.522;
											else
											{
												if(sinr < 21.5)
													return 18.9956;
												else
												{
													if(rsrp < -77.5)
														return 19.7836;
													else
													{
														if(cell < 27078658.5)
															return 22.8199;
														else
															return 21.9522;
													}
												}
											}
										}
										else
										{
											if(velocity < 19.77)
												return 27.972;
											else
												return 23.5789;
										}
									}
									else
									{
										if(sinr < 38)
										{
											if(velocity < 8.655)
											{
												if(ta < 5)
												{
													if(cqi < 12.5)
														return 21.3985;
													else
													{
														if(payload < 8)
															return 33.7756;
														else
															return 33.1492;
													}
												}
												else
												{
													if(rsrp < -74.5)
														return 22.9144;
													else
														return 18.7299;
												}
											}
											else
											{
												if(rsrp < -82.5)
												{
													if(velocity < 13.21)
														return 20.1448;
													else
													{
														if(cqi < 12)
														{
															if(cell < 27378305.5)
																return 35.1262;
															else
																return 30.0626;
														}
														else
														{
															if(rsrp < -85.5)
															{
																if(rsrp < -89)
																	return 28.2561;
																else
																	return 27.3038;
															}
															else
																return 25.4531666667;
														}
													}
												}
												else
												{
													if(sinr < 34.5)
													{
														if(ta < 13)
														{
															if(ta < 3)
															{
																if(payload < 8.5)
																	return 23.5207333333;
																else
																	return 28.5375;
															}
															else
															{
																if(cqi < 13.5)
																{
																	if(sinr < 30.5)
																		return 14.8026;
																	else
																		return 21.9264;
																}
																else
																{
																	if(cell < 27771396)
																	{
																		if(cell < 27078147.5)
																		{
																			if(sinr < 21)
																				return 21.143;
																			else
																				return 19.774;
																		}
																		else
																		{
																			if(velocity < 32.87)
																				return 22.8789;
																			else
																				return 21.8153;
																		}
																	}
																	else
																	{
																		if(cell < 28670337.5)
																			return 24.8963;
																		else
																			return 23.976;
																	}
																}
															}
														}
														else
														{
															if(rsrp < -80)
																return 28.3437;
															else
																return 26.4364;
														}
													}
													else
														return 26.6033;
												}
											}
										}
										else
											return 20.4007;
									}
								}
								else
								{
									if(velocity < 2.23)
										return 21.7138;
									else
									{
										if(rsrp < -85)
											return 16.4567;
										else
											return 13.5266;
									}
								}
							}
							else
							{
								if(sinr < 34.5)
								{
									if(velocity < 2.8)
									{
										if(cell < 29394690.5)
										{
											if(rsrp < -76.5)
												return 26.8366;
											else
												return 29.347;
										}
										else
										{
											if(ta < 8.5)
												return 24.9454;
											else
												return 20.015;
										}
									}
									else
									{
										if(rsrp < -81)
										{
											if(sinr < 25.5)
											{
												if(sinr < 21)
													return 39.0434;
												else
													return 41.7755;
											}
											else
												return 31.4961;
										}
										else
										{
											if(velocity < 11.73)
												return 32.9218;
											else
											{
												if(rsrq < -4.5)
													return 26.6489;
												else
													return 28.5714;
											}
										}
									}
								}
								else
									return 23.4055;
							}
						}
						else
						{
							if(ta < 12)
							{
								if(sinr < 30)
									return 25.1572;
								else
									return 26.4791;
							}
							else
								return 43.0108;
						}
					}
				}
			}
		}
	}
}

float tmobile_dl_tree_6(float payload, float rsrp, float rsrq, float sinr, float cqi, float ta, float velocity, float cell, float f)
{
	if(rsrq < -6.5)
	{
		if(payload < 3.5)
		{
			if(payload < 2.5)
			{
				if(payload < 0.75)
				{
					if(rsrq < -13.5)
					{
						if(rsrp < -101)
							return 0.72464;
						else
							return 2.69179;
					}
					else
					{
						if(cqi < 6.5)
						{
							if(sinr < -1.5)
							{
								if(cell < 28369793)
								{
									if(rsrp < -98.5)
									{
										if(sinr < -3.5)
											return 11.5942;
										else
											return 6.65557;
									}
									else
										return 38.0954;
								}
								else
								{
									if(rsrp < -96)
									{
										if(sinr < -6.5)
											return 7.28597;
										else
										{
											if(sinr < -3.5)
												return 4.604195;
											else
												return 5.997;
										}
									}
									else
									{
										if(cell < 31541504)
											return 2.01816;
										else
											return 4.46929;
									}
								}
							}
							else
							{
								if(sinr < 2.5)
								{
									if(ta < 9)
									{
										if(velocity < 12.115)
										{
											if(velocity < 4.14)
											{
												if(ta < 7.5)
													return 5.06331;
												else
													return 3.70372;
											}
											else
											{
												if(rsrp < -99.5)
													return 5.00002;
												else
													return 3.3422466667;
											}
										}
										else
										{
											if(rsrq < -12.5)
												return 6.77969;
											else
											{
												if(cell < 28367105.5)
													return 9.19544;
												else
												{
													if(payload < 0.3)
														return 10;
													else
														return 10.6101;
												}
											}
										}
									}
									else
									{
										if(velocity < 7.73)
											return 1.19048;
										else
										{
											if(payload < 0.3)
											{
												if(sinr < 0.5)
													return 3.50879;
												else
													return 4.00002;
											}
											else
												return 1.91663;
										}
									}
								}
								else
								{
									if(ta < 5.5)
									{
										if(rsrp < -84.5)
										{
											if(velocity < 15.875)
												return 7.5169233333;
											else
												return 4.1885;
										}
										else
											return 10.2569666667;
									}
									else
									{
										if(payload < 0.3)
										{
											if(cell < 27074948)
											{
												if(rsrp < -93.5)
													return 3.21286;
												else
													return 3.9409;
											}
											else
											{
												if(ta < 7.5)
													return 5.59552;
												else
													return 8.08084;
											}
										}
										else
										{
											if(cell < 26381059)
												return 8.26446;
											else
											{
												if(velocity < 22.795)
												{
													if(velocity < 5.615)
														return 6.87998;
													else
														return 4.45434;
												}
												else
													return 7.56144;
											}
										}
									}
								}
							}
						}
						else
						{
							if(velocity < 12.25)
							{
								if(payload < 0.3)
								{
									if(velocity < 0.495)
									{
										if(ta < 3.5)
											return 3.03031;
										else
										{
											if(cqi < 13.5)
											{
												if(rsrp < -95.5)
													return 4.30109;
												else
												{
													if(cqi < 10)
														return 4.98644;
													else
														return 4.44446;
												}
											}
											else
												return 5.55558;
										}
									}
									else
									{
										if(velocity < 1.61)
											return 8.08084;
										else
										{
											if(sinr < 11)
											{
												if(rsrp < -95.5)
												{
													if(cqi < 9)
														return 4.4944;
													else
														return 3.66974;
												}
												else
												{
													if(sinr < 7.5)
														return 7.07967;
													else
													{
														if(cqi < 10)
															return 5.729;
														else
															return 5.06331;
													}
												}
											}
											else
											{
												if(rsrq < -10)
													return 2.8881;
												else
												{
													if(rsrp < -87.5)
													{
														if(sinr < 21.5)
															return 3.58746;
														else
															return 4.1291;
													}
													else
													{
														if(rsrp < -75.5)
															return 5.043775;
														else
															return 4.25534;
													}
												}
											}
										}
									}
								}
								else
								{
									if(sinr < -1)
										return 0.662252;
									else
									{
										if(sinr < 12.5)
										{
											if(sinr < 5.5)
											{
												if(sinr < 1.5)
												{
													if(cqi < 11.5)
														return 7.70713;
													else
														return 8.62069;
												}
												else
												{
													if(cell < 28968576)
													{
														if(rsrp < -90)
														{
															if(velocity < 2.305)
																return 2.94985;
															else
																return 3.55556;
														}
														else
															return 4.73934;
													}
													else
														return 6.71141;
												}
											}
											else
											{
												if(rsrp < -87)
												{
													if(cell < 28365057)
													{
														if(sinr < 10.5)
														{
															if(sinr < 9.5)
															{
																if(velocity < 8.455)
																	return 4.68759;
																else
																	return 4.10678;
															}
															else
																return 5.28402;
														}
														else
														{
															if(ta < 4.5)
																return 6.50407;
															else
																return 7.16846;
														}
													}
													else
													{
														if(cell < 28366721)
															return 13.6519;
														else
														{
															if(f < 2232.5)
															{
																if(rsrq < -8.5)
																	return 10.4167;
																else
																{
																	if(rsrp < -94.5)
																		return 7.8966;
																	else
																		return 6.99301;
																}
															}
															else
																return 11.5942;
														}
													}
												}
												else
												{
													if(cell < 28354818)
													{
														if(cqi < 9.5)
															return 14.7059;
														else
														{
															if(rsrp < -78)
																return 12.6183;
															else
																return 11.6279;
														}
													}
													else
														return 9.38967;
												}
											}
										}
										else
										{
											if(velocity < 9.215)
											{
												if(sinr < 24.5)
												{
													if(velocity < 1.865)
													{
														if(cqi < 9.5)
															return 2.96296;
														else
															return 6.2566033333;
													}
													else
													{
														if(sinr < 19.5)
															return 3.124188;
														else
															return 3.65297;
													}
												}
												else
												{
													if(rsrp < -85.5)
														return 5.94354;
													else
														return 8.14664;
												}
											}
											else
											{
												if(sinr < 28.5)
												{
													if(velocity < 11.705)
													{
														if(cqi < 11.5)
															return 7.83922;
														else
															return 7.16846;
													}
													else
														return 6.37959;
												}
												else
													return 11.7994;
											}
										}
									}
								}
							}
							else
							{
								if(rsrq < -7.5)
								{
									if(ta < 24)
									{
										if(velocity < 13.21)
										{
											if(rsrp < -95)
												return 4.25534;
											else
												return 8.09717;
										}
										else
										{
											if(velocity < 14.05)
											{
												if(velocity < 13.8)
												{
													if(ta < 7.5)
													{
														if(cqi < 8.5)
														{
															if(cqi < 7.5)
																return 3.12501;
															else
																return 4.67838;
														}
														else
															return 2.7036;
													}
													else
														return 2.57236;
												}
												else
													return 1.71013;
											}
											else
											{
												if(sinr < 8.5)
												{
													if(sinr < 5.5)
													{
														if(rsrp < -103)
															return 2.47679;
														else
														{
															if(sinr < 2.5)
																return 4.59772;
															else
																return 5.22878;
														}
													}
													else
													{
														if(payload < 0.3)
															return 6.6116;
														else
															return 9.02935;
													}
												}
												else
												{
													if(velocity < 22.25)
													{
														if(rsrp < -96)
															return 2.490845;
														else
														{
															if(rsrp < -83.5)
																return 3.3029357143;
															else
															{
																if(payload < 0.3)
																	return 5.12822;
																else
																	return 3.72787;
															}
														}
													}
													else
														return 6.01506;
												}
											}
										}
									}
									else
									{
										if(sinr < 16.5)
											return 6.72269;
										else
											return 5.36915;
									}
								}
								else
								{
									if(velocity < 15.345)
									{
										if(rsrp < -90.5)
										{
											if(velocity < 12.93)
												return 4.4944;
											else
											{
												if(cqi < 8)
													return 1.45455;
												else
												{
													if(cqi < 9.5)
														return 6.4019566667;
													else
													{
														if(rsrp < -97.5)
															return 7.677712;
														else
															return 8.814035;
													}
												}
											}
										}
										else
										{
											if(velocity < 14.785)
											{
												if(cqi < 9.5)
													return 5.90523;
												else
													return 4.6853355556;
											}
											else
												return 9.36768;
										}
									}
									else
									{
										if(ta < 2)
											return 0.850159;
										else
										{
											if(rsrp < -72.5)
											{
												if(ta < 8.5)
												{
													if(rsrp < -74.5)
													{
														if(velocity < 27.475)
															return 4.39562;
														else
															return 3.86475;
													}
													else
														return 5.45703;
												}
												else
													return 5.73888;
											}
											else
												return 3.05345;
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
						if(rsrp < -94.5)
						{
							if(cell < 32391168)
							{
								if(ta < 1.5)
									return 8.00801;
								else
								{
									if(sinr < -0.5)
									{
										if(rsrq < -12.5)
										{
											if(payload < 1.5)
												return 4.82218;
											else
												return 1.9577533333;
										}
										else
										{
											if(rsrp < -107.5)
												return 12.4611;
											else
											{
												if(ta < 3.5)
													return 11.5774;
												else
												{
													if(sinr < -2.5)
													{
														if(cqi < 5.5)
															return 4.605765;
														else
															return 9.07069;
													}
													else
													{
														if(cell < 29479936.5)
														{
															if(velocity < 6.27)
																return 4.41136;
															else
															{
																if(velocity < 13.235)
																	return 3.35149;
																else
																	return 2.86893;
															}
														}
														else
															return 5.38721;
													}
												}
											}
										}
									}
									else
									{
										if(ta < 34)
										{
											if(rsrp < -107)
											{
												if(rsrp < -110)
													return 6.22084;
												else
												{
													if(payload < 1.5)
														return 2.61267;
													else
														return 3.629274;
												}
											}
											else
											{
												if(ta < 3)
													return 2.66162;
												else
												{
													if(cell < 28367745)
													{
														if(ta < 5)
															return 8.0402;
														else
														{
															if(velocity < 14.07)
															{
																if(cell < 28366080.5)
																{
																	if(sinr < 3.5)
																		return 7.04846;
																	else
																		return 7.62631;
																}
																else
																{
																	if(velocity < 5.775)
																		return 7.42804;
																	else
																		return 5.80131;
																}
															}
															else
															{
																if(velocity < 15.095)
																{
																	if(velocity < 14.245)
																		return 2.76625;
																	else
																		return 3.6792033333;
																}
																else
																	return 5.1124766667;
															}
														}
													}
													else
													{
														if(rsrq < -9.5)
														{
															if(payload < 1.5)
															{
																if(rsrq < -13.5)
																	return 4.71698;
																else
																{
																	if(cell < 30327168.5)
																		return 2.923345;
																	else
																		return 1.72302;
																}
															}
															else
																return 1.68634;
														}
														else
														{
															if(sinr < 3.5)
															{
																if(cqi < 5.5)
																	return 3.67309;
																else
																	return 3.17334;
															}
															else
															{
																if(rsrp < -101.5)
																	return 4.499715;
																else
																{
																	if(ta < 14.5)
																	{
																		if(payload < 1.5)
																		{
																			if(velocity < 5.225)
																				return 6.13027;
																			else
																				return 4.15369;
																		}
																		else
																			return 6.78829;
																	}
																	else
																		return 7.56144;
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
												return 0.219262;
											else
												return 4.85437;
										}
									}
								}
							}
							else
							{
								if(payload < 1.5)
									return 8.47458;
								else
									return 17.316;
							}
						}
						else
						{
							if(velocity < 13.565)
							{
								if(ta < 12)
								{
									if(ta < 7.5)
									{
										if(cqi < 7.5)
										{
											if(rsrp < -88.5)
												return 8.47907;
											else
												return 10.102325;
										}
										else
										{
											if(sinr < 7.5)
												return 9.61538;
											else
											{
												if(rsrp < -89.5)
													return 12.8824;
												else
													return 14.0146333333;
											}
										}
									}
									else
									{
										if(cqi < 7.5)
											return 12.4417;
										else
										{
											if(payload < 1.5)
												return 4.86914;
											else
												return 7.2969166667;
										}
									}
								}
								else
									return 20.7254;
							}
							else
							{
								if(sinr < -6.5)
									return 0.472283;
								else
								{
									if(sinr < 12.5)
									{
										if(sinr < 0.5)
										{
											if(rsrp < -86.5)
											{
												if(sinr < -1.5)
													return 4.5403;
												else
													return 3.996;
											}
											else
												return 8.69565;
										}
										else
										{
											if(sinr < 5.5)
												return 7.5164366667;
											else
												return 8.76232;
										}
									}
									else
										return 3.15209;
								}
							}
						}
					}
					else
					{
						if(ta < 7.5)
						{
							if(sinr < 22.5)
							{
								if(sinr < 20.5)
								{
									if(rsrp < -93.5)
									{
										if(cqi < 13.5)
										{
											if(velocity < 10.56)
											{
												if(velocity < 8.49)
												{
													if(rsrp < -100.5)
														return 7.45573;
													else
														return 6.19195;
												}
												else
													return 9.55224;
											}
											else
												return 6.6879983333;
										}
										else
											return 10.2433;
									}
									else
									{
										if(rsrp < -89.5)
										{
											if(cqi < 9.5)
											{
												if(f < 2232.5)
												{
													if(rsrp < -90.5)
													{
														if(cell < 28367105.5)
															return 12.0603333333;
														else
														{
															if(payload < 1.5)
															{
																if(rsrq < -7.5)
																	return 7.44879;
																else
																	return 8.78156;
															}
															else
																return 9.988925;
														}
													}
													else
													{
														if(payload < 1.5)
															return 13.6286;
														else
															return 10.9589;
													}
												}
												else
													return 5.22193;
											}
											else
											{
												if(velocity < 34.395)
												{
													if(rsrp < -91)
													{
														if(sinr < 8)
															return 16.9133;
														else
															return 15.9521;
													}
													else
														return 13.4003;
												}
												else
													return 11.4204;
											}
										}
										else
										{
											if(velocity < 11.72)
											{
												if(velocity < 6.035)
												{
													if(payload < 1.5)
													{
														if(sinr < 11)
															return 5.23218;
														else
														{
															if(cqi < 7.5)
																return 8.80088;
															else
																return 7.37327;
														}
													}
													else
													{
														if(velocity < 2.295)
														{
															if(cell < 26587523)
																return 9.62696;
															else
																return 8.951305;
														}
														else
															return 8.27301;
													}
												}
												else
												{
													if(rsrp < -84.5)
														return 6.337505;
													else
														return 5.43848;
												}
											}
											else
											{
												if(cell < 29913345.5)
												{
													if(cell < 29391104.5)
													{
														if(f < 2232.5)
															return 5.75954;
														else
														{
															if(ta < 1.5)
																return 10.4575;
															else
																return 9.39768;
														}
													}
													else
													{
														if(ta < 3.5)
														{
															if(cqi < 11.5)
																return 14.4928;
															else
															{
																if(sinr < 16.5)
																	return 9.53214;
																else
																	return 10.5402;
															}
														}
														else
															return 15.534;
													}
												}
												else
												{
													if(rsrp < -75.5)
														return 8.63931;
													else
														return 6.08828;
												}
											}
										}
									}
								}
								else
									return 14.7601;
							}
							else
							{
								if(ta < 3.5)
								{
									if(velocity < 11.355)
									{
										if(sinr < 25.5)
											return 10.596;
										else
											return 8.58369;
									}
									else
									{
										if(sinr < 25)
											return 3.92542;
										else
										{
											if(rsrp < -83.5)
												return 7.32265;
											else
												return 5.93032;
										}
									}
								}
								else
								{
									if(rsrp < -90)
										return 12.8205;
									else
									{
										if(rsrq < -7.5)
										{
											if(cell < 27888257.5)
												return 8.29876;
											else
											{
												if(velocity < 0.325)
													return 9.72053;
												else
													return 8.58369;
											}
										}
										else
										{
											if(f < 2232.5)
												return 6.996095;
											else
												return 9.00394;
										}
									}
								}
							}
						}
						else
						{
							if(cqi < 10.5)
							{
								if(rsrp < -90.5)
								{
									if(rsrp < -98)
									{
										if(cell < 28968577)
											return 2.64937;
										else
										{
											if(rsrp < -100)
												return 5.55556;
											else
												return 4.78899;
										}
									}
									else
									{
										if(sinr < 6.5)
										{
											if(rsrp < -96)
												return 11.7474;
											else
												return 9.4451;
										}
										else
										{
											if(payload < 1.5)
												return 5.6338;
											else
												return 4.06194;
										}
									}
								}
								else
								{
									if(ta < 11.5)
									{
										if(velocity < 4.01)
											return 7.21371;
										else
										{
											if(sinr < 12)
											{
												if(cqi < 7.5)
													return 9.78593;
												else
													return 9.1806933333;
											}
											else
												return 8.51064;
										}
									}
									else
										return 15.534;
								}
							}
							else
							{
								if(sinr < 22)
								{
									if(velocity < 10.59)
									{
										if(f < 2232.5)
											return 5.743;
										else
											return 6.57354;
									}
									else
									{
										if(f < 2232.5)
										{
											if(velocity < 13.52)
											{
												if(rsrp < -98)
													return 1.80811;
												else
													return 2.83638;
											}
											else
											{
												if(payload < 1.5)
													return 4.62963;
												else
													return 4.10275;
											}
										}
										else
											return 7.46269;
									}
								}
								else
								{
									if(sinr < 28.5)
										return 10.3896;
									else
										return 8.6627;
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
					if(rsrq < -9.5)
					{
						if(rsrp < -91.5)
						{
							if(velocity < 15.165)
							{
								if(rsrp < -102.5)
								{
									if(rsrp < -105)
									{
										if(sinr < -3.5)
											return 4.05885;
										else
											return 2.77939;
									}
									else
										return 2.60332;
								}
								else
								{
									if(ta < 14.5)
									{
										if(cell < 29479936.5)
										{
											if(velocity < 9.725)
											{
												if(ta < 6.5)
												{
													if(rsrp < -94.5)
														return 4.88599;
													else
														return 6.19515;
												}
												else
													return 3.29625;
											}
											else
											{
												if(cell < 26377603)
													return 8.36237;
												else
												{
													if(velocity < 13.6)
													{
														if(rsrq < -10.5)
															return 6.824;
														else
															return 6.31247;
													}
													else
														return 7.8125;
												}
											}
										}
										else
											return 8.03573;
									}
									else
									{
										if(velocity < 5.085)
											return 2.934515;
										else
										{
											if(rsrp < -100)
												return 5.63645;
											else
												return 4.39802;
										}
									}
								}
							}
							else
							{
								if(cell < 28886400.5)
								{
									if(cell < 27771524.5)
										return 10.3761;
									else
									{
										if(rsrp < -102)
											return 6.62069;
										else
										{
											if(rsrq < -11.5)
												return 6.64452;
											else
											{
												if(sinr < 7.5)
													return 7.6045833333;
												else
													return 8.50159;
											}
										}
									}
								}
								else
								{
									if(rsrp < -102)
										return 11.2835;
									else
										return 14.742;
								}
							}
						}
						else
						{
							if(rsrp < -89)
								return 11.976;
							else
								return 14.0433;
						}
					}
					else
					{
						if(rsrp < -94.5)
						{
							if(cell < 28883459)
							{
								if(cell < 28367745)
								{
									if(velocity < 14.1)
									{
										if(cqi < 6.5)
										{
											if(rsrp < -102.5)
												return 12.6917;
											else
												return 11.7417;
										}
										else
										{
											if(ta < 7.5)
												return 10.8794;
											else
												return 9.68523;
										}
									}
									else
									{
										if(ta < 12)
										{
											if(ta < 10)
											{
												if(rsrp < -100)
													return 4.8731;
												else
													return 3.8666;
											}
											else
												return 6.27779;
										}
										else
											return 10.984;
									}
								}
								else
								{
									if(cell < 28368514)
									{
										if(rsrp < -100)
											return 9.85222;
										else
										{
											if(ta < 12.5)
											{
												if(cqi < 8)
													return 5.874005;
												else
													return 5.09446;
											}
											else
												return 6.91643;
										}
									}
									else
										return 0.33306;
								}
							}
							else
							{
								if(rsrp < -104)
									return 5.35954;
								else
								{
									if(rsrp < -100.5)
										return 15.2575;
									else
									{
										if(rsrq < -7.5)
											return 11.0497;
										else
											return 12.5065;
									}
								}
							}
						}
						else
						{
							if(ta < 9)
							{
								if(cqi < 6)
									return 7.0765866667;
								else
								{
									if(cell < 28967937)
									{
										if(sinr < 9)
										{
											if(rsrq < -7.5)
											{
												if(cell < 27771012)
													return 10.0503;
												else
												{
													if(sinr < 4)
														return 11.988;
													else
														return 12.5523;
												}
											}
											else
											{
												if(sinr < 6.5)
													return 11.1008;
												else
													return 8.7409833333;
											}
										}
										else
										{
											if(velocity < 4.16)
											{
												if(ta < 4.5)
													return 11.0446;
												else
													return 10.1095;
											}
											else
											{
												if(sinr < 16)
												{
													if(rsrp < -86.5)
														return 13.4907;
													else
														return 12.766;
												}
												else
													return 11.0599;
											}
										}
									}
									else
										return 13.409825;
								}
							}
							else
							{
								if(cell < 26702979.5)
									return 9.47867;
								else
									return 15.01574;
							}
						}
					}
				}
				else
				{
					if(ta < 15)
					{
						if(rsrp < -88.5)
						{
							if(cqi < 13)
							{
								if(velocity < 6.375)
								{
									if(cqi < 11.5)
										return 11.0345;
									else
										return 14.5191;
								}
								else
									return 14.84395;
							}
							else
							{
								if(f < 2232.5)
								{
									if(velocity < 12.24)
										return 5.98802;
									else
										return 3.57888;
								}
								else
								{
									if(rsrq < -7.5)
										return 9.12895;
									else
										return 7.46269;
								}
							}
						}
						else
						{
							if(cqi < 11.5)
							{
								if(velocity < 14.13)
								{
									if(velocity < 6.905)
										return 15.2640333333;
									else
										return 22.409;
								}
								else
								{
									if(sinr < 20)
										return 13.5823;
									else
										return 12.8548;
								}
							}
							else
							{
								if(ta < 3.5)
								{
									if(f < 2232.5)
									{
										if(f < 1342.5)
											return 7.28376;
										else
										{
											if(velocity < 3.93)
												return 9.89691;
											else
												return 10.5727;
										}
									}
									else
										return 12.8963;
								}
								else
								{
									if(velocity < 0.57)
										return 11.6392;
									else
									{
										if(rsrp < -84)
											return 15.16195;
										else
										{
											if(rsrp < -75)
											{
												if(velocity < 19.36)
													return 11.846;
												else
													return 13.6596;
											}
											else
												return 15.8311;
										}
									}
								}
							}
						}
					}
					else
						return 21.4095;
				}
			}
		}
		else
		{
			if(cqi < 7.5)
			{
				if(sinr < 10.5)
				{
					if(rsrp < -102.5)
					{
						if(velocity < 1.31)
						{
							if(rsrp < -110.5)
							{
								if(sinr < -4)
									return 13.35;
								else
									return 9.4585;
							}
							else
							{
								if(cqi < 4.5)
									return 2.20958;
								else
								{
									if(sinr < -0.5)
										return 11.9653;
									else
									{
										if(ta < 9.5)
										{
											if(payload < 8.5)
												return 8.10948;
											else
											{
												if(payload < 9.5)
													return 5.74163;
												else
													return 6.41952;
											}
										}
										else
											return 2.66436;
									}
								}
							}
						}
						else
						{
							if(rsrp < -109.5)
								return 21.8132;
							else
							{
								if(payload < 7.5)
								{
									if(ta < 7)
									{
										if(sinr < 3)
										{
											if(payload < 4.5)
												return 6.01165;
											else
												return 4.65008;
										}
										else
										{
											if(payload < 5)
												return 10.35955;
											else
												return 6.73873;
										}
									}
									else
									{
										if(rsrq < -11.5)
										{
											if(cell < 30878081)
											{
												if(payload < 5.5)
												{
													if(payload < 4.5)
														return 7.87789;
													else
														return 8.97666;
												}
												else
													return 7.52823;
											}
											else
												return 3.53982;
										}
										else
										{
											if(ta < 17.5)
											{
												if(sinr < 2.5)
												{
													if(rsrp < -106)
														return 13.7127;
													else
													{
														if(rsrp < -103.5)
															return 9.62034;
														else
															return 11.564;
													}
												}
												else
												{
													if(payload < 6)
													{
														if(sinr < 5)
														{
															if(payload < 4.5)
																return 6.71987;
															else
																return 2.96099;
														}
														else
															return 8.0048;
													}
													else
														return 8.88889;
												}
											}
											else
											{
												if(sinr < 3.5)
												{
													if(rsrp < -104)
														return 9.07647;
													else
														return 10.2328;
												}
												else
													return 11.4188;
											}
										}
									}
								}
								else
								{
									if(sinr < 0.5)
									{
										if(ta < 7.5)
										{
											if(rsrq < -11)
												return 13.8169;
											else
											{
												if(rsrq < -9.5)
													return 21.9914;
												else
													return 19.025;
											}
										}
										else
										{
											if(cell < 28670338.5)
												return 11.7917;
											else
												return 14.4029;
										}
									}
									else
									{
										if(payload < 9.5)
										{
											if(cell < 28369153)
											{
												if(rsrp < -104.5)
												{
													if(payload < 8.5)
														return 9.5139;
													else
														return 8.74211;
												}
												else
													return 11.9092;
											}
											else
											{
												if(sinr < 2.5)
													return 8.82029;
												else
													return 7.02371;
											}
										}
										else
											return 13.5044;
									}
								}
							}
						}
					}
					else
					{
						if(f < 1384.95)
						{
							if(cell < 30946311)
							{
								if(payload < 5.5)
									return 1.7928836476;
								else
									return 2.31459;
							}
							else
								return 3.118629763;
						}
						else
						{
							if(payload < 6.5)
							{
								if(ta < 12.5)
								{
									if(velocity < 13.595)
									{
										if(cell < 26382211.5)
										{
											if(rsrp < -97.5)
												return 4.75172;
											else
												return 8.9240575;
										}
										else
										{
											if(cell < 27832194)
											{
												if(rsrp < -93.5)
													return 17.3442;
												else
													return 15.8603;
											}
											else
											{
												if(velocity < 12.265)
												{
													if(cell < 29913344.5)
													{
														if(ta < 11)
														{
															if(velocity < 8.685)
															{
																if(rsrp < -89.5)
																{
																	if(velocity < 5.415)
																	{
																		if(rsrp < -94)
																		{
																			if(rsrq < -10)
																				return 11.5141;
																			else
																				return 12.7714;
																		}
																		else
																		{
																			if(rsrq < -10)
																				return 9.89283;
																			else
																				return 11.1576;
																		}
																	}
																	else
																	{
																		if(rsrq < -10.5)
																			return 8.80896;
																		else
																			return 10.2324;
																	}
																}
																else
																{
																	if(sinr < 7)
																		return 11.13446;
																	else
																	{
																		if(sinr < 9)
																			return 18.1956;
																		else
																			return 11.5816;
																	}
																}
															}
															else
															{
																if(sinr < 0)
																	return 10.0313;
																else
																{
																	if(sinr < 3)
																		return 15.9283;
																	else
																	{
																		if(payload < 4.5)
																			return 13.1363;
																		else
																			return 11.8308;
																	}
																}
															}
														}
														else
															return 16.1616;
													}
													else
														return 8.85445;
												}
												else
												{
													if(rsrp < -97.5)
														return 7.26502;
													else
														return 6.14361;
												}
											}
										}
									}
									else
									{
										if(rsrq < -11.5)
										{
											if(rsrp < -97)
												return 5.39229;
											else
												return 9.28074;
										}
										else
										{
											if(ta < 1.5)
												return 18.8768;
											else
											{
												if(sinr < 0.5)
													return 17.5889;
												else
												{
													if(sinr < 3.5)
													{
														if(rsrp < -95.5)
															return 8.97112;
														else
															return 11.976;
													}
													else
													{
														if(sinr < 4.5)
														{
															if(ta < 6)
																return 16.7926;
															else
																return 18.3276;
														}
														else
														{
															if(cqi < 6.5)
															{
																if(ta < 4.5)
																	return 12.5274;
																else
																	return 11.8299;
															}
															else
															{
																if(rsrp < -97.5)
																{
																	if(sinr < 8.5)
																		return 15.3374;
																	else
																		return 16.5975;
																}
																else
																{
																	if(payload < 5)
																		return 13.3278;
																	else
																		return 14.5366;
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
									if(rsrq < -12.5)
										return 1.7265515;
									else
									{
										if(rsrp < -97)
										{
											if(velocity < 12.975)
											{
												if(ta < 16.5)
													return 6.30573;
												else
													return 5.78285;
											}
											else
											{
												if(velocity < 23.735)
												{
													if(cqi < 5.5)
														return 10.6054;
													else
													{
														if(payload < 5)
															return 9.86436;
														else
															return 8.8615266667;
													}
												}
												else
													return 6.8918;
											}
										}
										else
										{
											if(velocity < 31.03)
											{
												if(sinr < 5)
												{
													if(payload < 5.5)
														return 10.5904;
													else
														return 11.0701;
												}
												else
													return 9.96471;
											}
											else
												return 15.6709;
										}
									}
								}
							}
							else
							{
								if(rsrq < -12.5)
								{
									if(cqi < 5)
									{
										if(ta < 12.5)
											return 1.68649;
										else
											return 6.59211;
									}
									else
										return 10.4636;
								}
								else
								{
									if(rsrq < -8.5)
									{
										if(rsrp < -99.5)
										{
											if(rsrp < -100.5)
											{
												if(ta < 10)
												{
													if(payload < 8.5)
														return 11.0497;
													else
														return 12.4935;
												}
												else
												{
													if(rsrq < -9.5)
													{
														if(payload < 8)
															return 13.4389;
														else
														{
															if(payload < 9.5)
																return 16.5555;
															else
																return 15.5854;
														}
													}
													else
														return 19.3353;
												}
											}
											else
											{
												if(f < 2232.5)
													return 5.302955;
												else
													return 12.4103;
											}
										}
										else
										{
											if(velocity < 15.505)
											{
												if(sinr < 9.5)
												{
													if(velocity < 11.835)
													{
														if(velocity < 8.965)
														{
															if(velocity < 8)
															{
																if(ta < 9)
																{
																	if(cell < 27580673.5)
																	{
																		if(sinr < 3.5)
																			return 15.3073;
																		else
																			return 17.7318;
																	}
																	else
																	{
																		if(rsrq < -9.5)
																		{
																			if(sinr < 0.5)
																				return 15.6671;
																			else
																				return 16.6983;
																		}
																		else
																		{
																			if(velocity < 6.92)
																			{
																				if(rsrp < -94.5)
																					return 13.3907;
																				else
																					return 12.7273;
																			}
																			else
																				return 15.891;
																		}
																	}
																}
																else
																{
																	if(rsrp < -93)
																		return 11.8694;
																	else
																		return 9.15631;
																}
															}
															else
															{
																if(velocity < 8.76)
																{
																	if(payload < 8.5)
																		return 16.3839;
																	else
																		return 16.8883;
																}
																else
																	return 17.9143;
															}
														}
														else
														{
															if(sinr < 2.5)
															{
																if(cqi < 6)
																	return 11.2407;
																else
																	return 9.46634;
															}
															else
															{
																if(rsrq < -10.5)
																	return 15.1;
																else
																	return 13.5415;
															}
														}
													}
													else
													{
														if(cell < 28367746)
														{
															if(velocity < 14.67)
															{
																if(cqi < 6.5)
																	return 11.7699;
																else
																	return 12.4902;
															}
															else
																return 15.5729;
														}
														else
														{
															if(sinr < 1.5)
															{
																if(payload < 9.5)
																	return 22.2017;
																else
																	return 20.6879;
															}
															else
															{
																if(sinr < 4)
																	return 14.6329;
																else
																	return 21.156;
															}
														}
													}
												}
												else
													return 11.4105;
											}
											else
											{
												if(sinr < 7.5)
												{
													if(sinr < 0.5)
														return 14.3001;
													else
													{
														if(cqi < 6.5)
														{
															if(cell < 28366081)
															{
																if(payload < 9.5)
																{
																	if(rsrp < -92)
																		return 12.1207;
																	else
																		return 13.1282;
																}
																else
																	return 10.5332;
															}
															else
															{
																if(rsrq < -9.5)
																{
																	if(payload < 7.5)
																		return 12.2431;
																	else
																		return 10.3981;
																}
																else
																	return 7.91687;
															}
														}
														else
														{
															if(payload < 9.5)
																return 14.079;
															else
																return 19.3564;
														}
													}
												}
												else
													return 19.5804;
											}
										}
									}
									else
									{
										if(ta < 8.5)
										{
											if(cqi < 5)
												return 10.6171;
											else
											{
												if(velocity < 14.205)
												{
													if(payload < 9.5)
													{
														if(ta < 2)
															return 18.7354;
														else
														{
															if(rsrp < -100.5)
																return 9.47306;
															else
															{
																if(cqi < 6.5)
																{
																	if(payload < 8.5)
																	{
																		if(sinr < 9)
																			return 20.6034;
																		else
																			return 19.3295;
																	}
																	else
																	{
																		if(cell < 27372801.5)
																			return 14.3113;
																		else
																			return 10.0587;
																	}
																}
																else
																{
																	if(rsrp < -87.5)
																	{
																		if(cell < 28878081)
																			return 10.5995;
																		else
																			return 11.179;
																	}
																	else
																		return 15.0801;
																}
															}
														}
													}
													else
														return 20.9974;
												}
												else
												{
													if(sinr < 9)
													{
														if(ta < 7.5)
														{
															if(sinr < 7.5)
																return 21.1030666667;
															else
																return 23.5814;
														}
														else
															return 16.3525;
													}
													else
														return 15.5844;
												}
											}
										}
										else
										{
											if(ta < 15.5)
											{
												if(rsrp < -87.5)
												{
													if(ta < 13.5)
													{
														if(cell < 28366722)
														{
															if(rsrq < -7.5)
															{
																if(sinr < 2)
																{
																	if(cqi < 6.5)
																		return 20.7433;
																	else
																		return 22.2664;
																}
																else
																	return 19.042;
															}
															else
																return 19.1792666667;
														}
														else
															return 23.0548;
													}
													else
													{
														if(payload < 8)
															return 16.2602;
														else
															return 19.9336;
													}
												}
												else
													return 16.2785;
											}
											else
												return 11.4637;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if(cqi < 3.5)
						return 34.1443;
					else
					{
						if(rsrp < -96.5)
						{
							if(rsrp < -98.5)
								return 7.72574;
							else
							{
								if(sinr < 19.5)
								{
									if(rsrp < -97.5)
										return 14.8148;
									else
										return 14.1907;
								}
								else
									return 9.7371;
							}
						}
						else
						{
							if(payload < 8.5)
							{
								if(cell < 26377731)
									return 22.0629;
								else
								{
									if(sinr < 11.5)
										return 20.592;
									else
									{
										if(payload < 7)
										{
											if(sinr < 19)
											{
												if(sinr < 12.5)
												{
													if(payload < 5)
														return 16.5717;
													else
														return 17.6665;
												}
												else
													return 19.2321;
											}
											else
												return 16.609;
										}
										else
										{
											if(rsrp < -90.5)
												return 12.0346;
											else
											{
												if(ta < 6)
													return 17.9775;
												else
													return 18.7518;
											}
										}
									}
								}
							}
							else
							{
								if(cell < 27074818)
								{
									if(ta < 9)
										return 17.9252;
									else
										return 14.7738;
								}
								else
								{
									if(sinr < 14)
										return 31.1419;
									else
										return 23.968;
								}
							}
						}
					}
				}
			}
			else
			{
				if(ta < 3.5)
				{
					if(sinr < 28.5)
					{
						if(sinr < 4.5)
						{
							if(velocity < 14.57)
							{
								if(sinr < 2.5)
								{
									if(rsrp < -89.5)
										return 24.5291;
									else
										return 20.5523;
								}
								else
								{
									if(sinr < 3.5)
										return 2.67264;
									else
										return 13.712;
								}
							}
							else
							{
								if(rsrp < -87.5)
									return 38.5356;
								else
									return 33.8266;
							}
						}
						else
						{
							if(rsrp < -90.5)
							{
								if(cell < 31720449.5)
								{
									if(cqi < 10.5)
									{
										if(cqi < 8.5)
										{
											if(sinr < 9.5)
											{
												if(sinr < 6)
													return 14.218;
												else
												{
													if(rsrp < -105.5)
														return 8.67174;
													else
														return 14.9198;
												}
											}
											else
											{
												if(rsrp < -95.5)
													return 30.0328;
												else
												{
													if(payload < 9.5)
														return 21.1144;
													else
														return 19.9154;
												}
											}
										}
										else
										{
											if(payload < 8.5)
											{
												if(rsrq < -8.5)
													return 9.35126;
												else
												{
													if(rsrq < -7.5)
														return 14.7943;
													else
													{
														if(sinr < 16)
															return 11.2076;
														else
															return 15.5604;
													}
												}
											}
											else
											{
												if(rsrq < -7.5)
													return 8.14747;
												else
													return 9.44634;
											}
										}
									}
									else
									{
										if(sinr < 14)
											return 12.6183;
										else
											return 22.1361;
									}
								}
								else
								{
									if(rsrp < -94.5)
										return 6.04595;
									else
										return 7.4922914286;
								}
							}
							else
							{
								if(ta < 2.5)
								{
									if(cqi < 8.5)
									{
										if(rsrq < -8.5)
											return 10.4918;
										else
										{
											if(rsrq < -7.5)
											{
												if(velocity < 4.455)
												{
													if(sinr < 15)
														return 16.5582;
													else
														return 13.8435;
												}
												else
													return 19.4107;
											}
											else
												return 11.7561;
										}
									}
									else
									{
										if(sinr < 25.5)
										{
											if(rsrp < -84)
											{
												if(sinr < 11.5)
												{
													if(cqi < 9.5)
													{
														if(velocity < 7.735)
														{
															if(payload < 9.5)
																return 23.0695;
															else
																return 24.3013;
														}
														else
														{
															if(rsrp < -88.5)
																return 28.2132;
															else
																return 30.4067;
														}
													}
													else
														return 19.65865;
												}
												else
												{
													if(payload < 9.5)
													{
														if(sinr < 22)
														{
															if(rsrq < -8.5)
																return 18.0338333333;
															else
															{
																if(sinr < 15.5)
																	return 16.33945;
																else
																	return 15.2381;
															}
														}
														else
															return 22.9555;
													}
													else
													{
														if(cqi < 13)
															return 23.8024;
														else
															return 22.2531;
													}
												}
											}
											else
											{
												if(cell < 28842627)
												{
													if(payload < 4.5)
													{
														if(sinr < 15.5)
															return 18.2336;
														else
															return 19.8265;
													}
													else
													{
														if(velocity < 12.675)
														{
															if(rsrp < -76)
																return 33.264;
															else
																return 34.7222;
														}
														else
														{
															if(ta < 1.5)
															{
																if(payload < 7)
																{
																	if(rsrp < -81)
																		return 30.3951;
																	else
																		return 29.7398;
																}
																else
																	return 26.8908;
															}
															else
															{
																if(rsrp < -76.5)
																	return 21.5375;
																else
																	return 23.2305;
															}
														}
													}
												}
												else
												{
													if(ta < 1.5)
														return 15.1343;
													else
													{
														if(sinr < 21)
															return 22.4359666667;
														else
															return 18.3066;
													}
												}
											}
										}
										else
										{
											if(rsrp < -89.5)
												return 13.3556;
											else
											{
												if(velocity < 12.36)
													return 16.028;
												else
													return 15.273;
											}
										}
									}
								}
								else
								{
									if(payload < 4.5)
									{
										if(sinr < 10)
											return 16.0401;
										else
										{
											if(rsrq < -7.5)
											{
												if(velocity < 14.01)
													return 10.0219;
												else
													return 11.0041;
											}
											else
											{
												if(cqi < 8.5)
													return 14.767;
												else
													return 12.2982;
											}
										}
									}
									else
									{
										if(velocity < 2.54)
										{
											if(payload < 5.5)
												return 14.7874;
											else
												return 11.8343;
										}
										else
										{
											if(velocity < 12.63)
											{
												if(payload < 9.5)
												{
													if(cqi < 10.5)
													{
														if(cell < 26587523)
														{
															if(payload < 7.5)
																return 14.8227;
															else
																return 16.285;
														}
														else
															return 18.1887;
													}
													else
													{
														if(sinr < 12)
															return 20.9424;
														else
															return 18.4161428571;
													}
												}
												else
												{
													if(rsrq < -7.5)
														return 24.9221;
													else
														return 20.7093;
												}
											}
											else
											{
												if(payload < 7.5)
												{
													if(payload < 5.5)
														return 14.9589;
													else
														return 15.9098;
												}
												else
												{
													if(payload < 9.5)
														return 13.5008;
													else
														return 14.4014;
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
						if(cell < 26382082.5)
							return 31.746;
						else
							return 24.3599;
					}
				}
				else
				{
					if(rsrp < -94.5)
					{
						if(payload < 9.5)
						{
							if(rsrq < -7.5)
							{
								if(payload < 5.5)
								{
									if(velocity < 12.02)
									{
										if(sinr < 8.5)
										{
											if(cell < 29481090)
											{
												if(sinr < 4.5)
													return 11.3026;
												else
													return 11.8125;
											}
											else
											{
												if(rsrp < -96.5)
													return 12.7796;
												else
													return 13.2582;
											}
										}
										else
											return 19.2678;
									}
									else
									{
										if(sinr < 2.5)
											return 14.2096;
										else
										{
											if(cqi < 8.5)
											{
												if(sinr < 4.5)
													return 15.6709;
												else
												{
													if(rsrq < -10)
														return 12.9116;
													else
													{
														if(rsrp < -101.5)
															return 5.09149;
														else
															return 8.79846;
													}
												}
											}
											else
											{
												if(payload < 4.5)
												{
													if(sinr < 5.5)
														return 2.9848;
													else
														return 4.31965;
												}
												else
												{
													if(rsrq < -9.5)
														return 5.42152;
													else
													{
														if(cqi < 9.5)
															return 7.98403;
														else
															return 6.92521;
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
										if(f < 2232.5)
										{
											if(velocity < 20.135)
											{
												if(sinr < 3.5)
												{
													if(ta < 6.5)
													{
														if(rsrp < -97.5)
															return 6.93016;
														else
															return 8.45666;
													}
													else
													{
														if(payload < 7.5)
														{
															if(payload < 6.5)
																return 10.5956333333;
															else
																return 12.0586;
														}
														else
														{
															if(rsrp < -105)
																return 8.92608;
															else
																return 10.3778;
														}
													}
												}
												else
												{
													if(cell < 28368385)
													{
														if(cqi < 13.5)
														{
															if(payload < 8.5)
															{
																if(cell < 28365057)
																	return 18.5346;
																else
																{
																	if(payload < 6.5)
																		return 18.3346;
																	else
																	{
																		if(rsrq < -9.5)
																			return 12.166;
																		else
																		{
																			if(cell < 28366721)
																				return 10.3997;
																			else
																				return 11.0797333333;
																		}
																	}
																}
															}
															else
															{
																if(rsrq < -9.5)
																	return 14.4202;
																else
																{
																	if(velocity < 10.595)
																		return 20.31765;
																	else
																		return 16.5631;
																}
															}
														}
														else
															return 20.5392;
													}
													else
													{
														if(cqi < 8.5)
														{
															if(velocity < 9.795)
															{
																if(payload < 6.5)
																	return 20.0669;
																else
																	return 17.4021;
															}
															else
																return 10.8027;
														}
														else
														{
															if(ta < 5.5)
															{
																if(payload < 7)
																	return 9.89895;
																else
																{
																	if(rsrp < -98.5)
																		return 11.2994;
																	else
																		return 12.2511;
																}
															}
															else
															{
																if(rsrp < -97.5)
																	return 6.04483;
																else
																	return 7.73861;
															}
														}
													}
												}
											}
											else
												return 16.5289;
										}
										else
											return 19.6147;
									}
									else
									{
										if(rsrq < -9.5)
											return 9.22545;
										else
											return 4.97778;
									}
								}
							}
							else
							{
								if(velocity < 33.195)
								{
									if(velocity < 7.06)
									{
										if(payload < 5.5)
											return 12.551;
										else
											return 8.67993;
									}
									else
									{
										if(velocity < 12.15)
										{
											if(payload < 5.5)
												return 17.567;
											else
												return 19.3392;
										}
										else
										{
											if(cqi < 9.5)
												return 8.44996;
											else
											{
												if(sinr < 5)
													return 11.0619;
												else
												{
													if(cell < 28881667)
														return 14.0421;
													else
														return 14.994775;
												}
											}
										}
									}
								}
								else
								{
									if(rsrp < -97)
										return 22.6354;
									else
										return 17.6913;
								}
							}
						}
						else
						{
							if(ta < 7)
							{
								if(sinr < 9.5)
								{
									if(sinr < 5.5)
										return 26.3852;
									else
									{
										if(rsrq < -7.5)
										{
											if(rsrq < -9)
												return 22.1852;
											else
												return 19.98;
										}
										else
											return 26.2037;
									}
								}
								else
									return 11.5523;
							}
							else
							{
								if(velocity < 0.955)
									return 4.78813;
								else
								{
									if(cqi < 8.5)
										return 21.8043;
									else
									{
										if(rsrp < -101.5)
										{
											if(rsrq < -9)
												return 11.5274;
											else
												return 10.7643;
										}
										else
										{
											if(sinr < 8)
											{
												if(rsrp < -96.5)
												{
													if(velocity < 3.505)
														return 12.7206;
													else
													{
														if(rsrq < -8.5)
															return 17.5503333333;
														else
														{
															if(rsrp < -99.5)
																return 14.7874;
															else
																return 16.7785;
														}
													}
												}
												else
													return 21.7746;
											}
											else
												return 10.5083;
										}
									}
								}
							}
						}
					}
					else
					{
						if(sinr < 37)
						{
							if(rsrp < -88.5)
							{
								if(sinr < 25.5)
								{
									if(payload < 8.5)
									{
										if(rsrq < -7.5)
										{
											if(cell < 29394690.5)
											{
												if(ta < 10)
												{
													if(cqi < 14.5)
													{
														if(rsrp < -90.5)
														{
															if(cell < 28367105.5)
															{
																if(payload < 6.5)
																{
																	if(cell < 28366080.5)
																	{
																		if(cqi < 9.5)
																			return 15.3748;
																		else
																		{
																			if(payload < 4.5)
																				return 14.1468;
																			else
																				return 12.2441;
																		}
																	}
																	else
																	{
																		if(velocity < 8.76)
																		{
																			if(sinr < 9)
																				return 16.219;
																			else
																				return 15.6403;
																		}
																		else
																			return 13.3445;
																	}
																}
																else
																	return 17.8571;
															}
															else
															{
																if(ta < 5.5)
																{
																	if(sinr < 18.5)
																	{
																		if(rsrp < -93.5)
																			return 14.0647;
																		else
																			return 15.2435;
																	}
																	else
																	{
																		if(velocity < 6.375)
																			return 10.356;
																		else
																			return 12.5928;
																	}
																}
																else
																	return 9.51049;
															}
														}
														else
														{
															if(payload < 7.5)
															{
																if(cqi < 9.5)
																{
																	if(rsrq < -10)
																	{
																		if(sinr < 4)
																			return 13.52;
																		else
																			return 10.3986;
																	}
																	else
																		return 11.2716666667;
																}
																else
																	return 10.4831;
															}
															else
															{
																if(rsrq < -8.5)
																	return 14.4633;
																else
																	return 12.7389;
															}
														}
													}
													else
														return 7.68197;
												}
												else
												{
													if(rsrp < -91.5)
														return 9.74184;
													else
													{
														if(payload < 6.5)
															return 22.7596;
														else
														{
															if(velocity < 12.72)
																return 19.3504;
															else
																return 18.3908;
														}
													}
												}
											}
											else
											{
												if(velocity < 2.905)
												{
													if(cqi < 8.5)
														return 22.4809;
													else
													{
														if(sinr < 16.5)
														{
															if(sinr < 13)
																return 21.6634;
															else
																return 19.6802;
														}
														else
														{
															if(payload < 6)
																return 13.1579;
															else
																return 14.1593;
														}
													}
												}
												else
												{
													if(ta < 8.5)
													{
														if(rsrp < -90.5)
															return 10.3896;
														else
														{
															if(rsrq < -9.5)
																return 12.9502;
															else
																return 14.7874;
														}
													}
													else
													{
														if(rsrp < -91.5)
															return 14.4762666667;
														else
															return 15.6837;
													}
												}
											}
										}
										else
										{
											if(rsrp < -93.5)
											{
												if(sinr < 8.5)
													return 16.6419;
												else
													return 21.374;
											}
											else
											{
												if(velocity < 6.46)
												{
													if(payload < 7.5)
													{
														if(rsrp < -90.5)
															return 13.243725;
														else
															return 15.7702;
													}
													else
														return 10.0282;
												}
												else
												{
													if(rsrp < -91.5)
													{
														if(cqi < 10.5)
														{
															if(ta < 6.5)
																return 21.7391;
															else
															{
																if(payload < 5)
																	return 17.2507;
																else
																	return 18.8828;
															}
														}
														else
															return 23.469;
													}
													else
													{
														if(payload < 6.5)
														{
															if(rsrp < -89.5)
															{
																if(ta < 6.5)
																{
																	if(rsrp < -90.5)
																		return 17.3724;
																	else
																		return 16.4666;
																}
																else
																	return 14.6453;
															}
															else
																return 20.429;
														}
														else
														{
															if(cqi < 10)
																return 10.479;
															else
																return 10.0016;
														}
													}
												}
											}
										}
									}
									else
									{
										if(velocity < 8.4)
										{
											if(cell < 29140865)
												return 11.84565;
											else
												return 17.66;
										}
										else
										{
											if(ta < 7.5)
											{
												if(rsrq < -7.5)
												{
													if(rsrp < -92)
														return 18.4672;
													else
														return 16.9531;
												}
												else
												{
													if(payload < 9.5)
														return 19.3913;
													else
													{
														if(sinr < 15.5)
															return 23.76;
														else
															return 26.1609;
													}
												}
											}
											else
											{
												if(sinr < 6.5)
												{
													if(payload < 9.5)
														return 14.5778;
													else
														return 9.62811;
												}
												else
												{
													if(cell < 31458690)
													{
														if(cell < 26587394)
															return 20.2378;
														else
														{
															if(cell < 27771011.5)
															{
																if(rsrq < -8.5)
																	return 17.0168333333;
																else
																	return 15.3876;
															}
															else
																return 18.1523;
														}
													}
													else
														return 21.4305;
												}
											}
										}
									}
								}
								else
								{
									if(rsrp < -92.5)
									{
										if(rsrp < -93.5)
											return 15.748;
										else
											return 17.5362;
									}
									else
									{
										if(payload < 6.5)
											return 6.30045;
										else
											return 11.3457;
									}
								}
							}
							else
							{
								if(f < 1384.95)
								{
									if(cqi < 11.5)
									{
										if(ta < 12)
											return 4.758035;
										else
											return 8.56531;
									}
									else
										return 11.201;
								}
								else
								{
									if(payload < 7.5)
									{
										if(cell < 29391104.5)
										{
											if(ta < 18.5)
											{
												if(cell < 28881153)
												{
													if(f < 2232.5)
													{
														if(velocity < 16.32)
														{
															if(sinr < 29)
															{
																if(rsrq < -8.5)
																{
																	if(rsrq < -9.5)
																		return 13.858;
																	else
																		return 14.4928;
																}
																else
																{
																	if(cell < 28071170.5)
																	{
																		if(sinr < 3)
																			return 17.0285;
																		else
																		{
																			if(cqi < 14)
																			{
																				if(velocity < 14.85)
																					return 14.4209;
																				else
																					return 12.8462;
																			}
																			else
																				return 16.008;
																		}
																	}
																	else
																		return 19.9715;
																}
															}
															else
																return 20.2532;
														}
														else
														{
															if(sinr < 11.5)
															{
																if(velocity < 32.72)
																	return 17.2352;
																else
																{
																	if(rsrq < -8.5)
																		return 18.2899;
																	else
																		return 18.9189;
																}
															}
															else
															{
																if(rsrp < -87.5)
																	return 20.3218;
																else
																	return 21.172;
															}
														}
													}
													else
													{
														if(cqi < 10.5)
														{
															if(sinr < 9)
															{
																if(payload < 6.5)
																	return 12.3967;
																else
																	return 10.9825;
															}
															else
																return 14.5085;
														}
														else
														{
															if(rsrq < -8.5)
																return 14.4209;
															else
															{
																if(cqi < 11.5)
																	return 15.2164;
																else
																	return 16.3655;
															}
														}
													}
												}
												else
												{
													if(velocity < 14.12)
														return 11.7388;
													else
														return 13.6402;
												}
											}
											else
											{
												if(sinr < 22.5)
												{
													if(payload < 4.5)
													{
														if(rsrq < -7.5)
															return 12.1488;
														else
															return 8.94604;
													}
													else
													{
														if(payload < 5.5)
															return 15.1688;
														else
															return 13.3333;
													}
												}
												else
													return 9.19805;
											}
										}
										else
										{
											if(ta < 7.5)
											{
												if(rsrq < -9.5)
													return 2.72712;
												else
												{
													if(velocity < 10.8)
													{
														if(ta < 6)
														{
															if(payload < 6.5)
															{
																if(payload < 5.5)
																{
																	if(cqi < 12.5)
																		return 20.6452;
																	else
																	{
																		if(rsrq < -7.5)
																		{
																			if(rsrp < -80)
																				return 17.288;
																			else
																				return 18.7617;
																		}
																		else
																			return 17.9856;
																	}
																}
																else
																{
																	if(rsrp < -83.5)
																		return 16.8599;
																	else
																		return 16.2107;
																}
															}
															else
																return 21.18;
														}
														else
														{
															if(rsrq < -7.5)
																return 8.33623;
															else
																return 12.8991;
														}
													}
													else
													{
														if(rsrp < -85)
															return 23.845;
														else
															return 19.3783;
													}
												}
											}
											else
											{
												if(cell < 31720448)
												{
													if(payload < 5)
														return 22.9391;
													else
														return 20.8424;
												}
												else
													return 18.6989;
											}
										}
									}
									else
									{
										if(cell < 28068098)
										{
											if(sinr < 24)
											{
												if(velocity < 8.44)
												{
													if(cqi < 10.5)
													{
														if(rsrq < -8.5)
															return 18.3993;
														else
															return 17.805825;
													}
													else
													{
														if(payload < 9)
															return 18.4664;
														else
															return 20.4186;
													}
												}
												else
												{
													if(velocity < 26.915)
													{
														if(cell < 26912771)
														{
															if(cqi < 10.5)
																return 16.7715;
															else
															{
																if(rsrp < -87)
																{
																	if(payload < 9)
																		return 24.5587;
																	else
																		return 23.1348;
																}
																else
																{
																	if(sinr < 17)
																		return 29.0381;
																	else
																		return 25.4676;
																}
															}
														}
														else
														{
															if(sinr < 16.5)
															{
																if(ta < 8)
																{
																	if(rsrp < -85)
																		return 19.1388;
																	else
																		return 20.9302;
																}
																else
																	return 14.7248;
															}
															else
																return 25.1309;
														}
													}
													else
													{
														if(cell < 27771012.5)
															return 14.2349;
														else
															return 18.1098;
													}
												}
											}
											else
											{
												if(cqi < 12)
													return 19.2123;
												else
													return 16.4534;
											}
										}
										else
										{
											if(sinr < 20)
											{
												if(cell < 29741056)
												{
													if(rsrp < -82.5)
													{
														if(rsrp < -84.5)
															return 12.4321;
														else
															return 13.557;
													}
													else
													{
														if(cqi < 13)
															return 15.3625;
														else
															return 14.1143;
													}
												}
												else
												{
													if(rsrp < -84)
														return 16.3057;
													else
														return 24.1875;
												}
											}
											else
												return 22.5352;
										}
									}
								}
							}
						}
						else
							return 24.4182;
					}
				}
			}
		}
	}
	else
	{
		if(ta < 5.5)
		{
			if(f < 1384.95)
			{
				if(rsrp < -68.5)
				{
					if(rsrq < -5.5)
						return 2.98438;
					else
						return 4.46304;
				}
				else
					return 10.4485;
			}
			else
			{
				if(payload < 4.5)
				{
					if(sinr < -1)
						return 0.070194;
					else
					{
						if(sinr < 25.5)
						{
							if(payload < 2.5)
							{
								if(payload < 0.75)
								{
									if(rsrp < -72)
									{
										if(f < 2232.5)
										{
											if(payload < 0.3)
											{
												if(cell < 28581507)
												{
													if(ta < 3)
													{
														if(rsrp < -83)
															return 6.6116;
														else
															return 4.7663866667;
													}
													else
														return 9.52385;
												}
												else
												{
													if(ta < 3)
														return 5.55558;
													else
													{
														if(sinr < 17)
															return 3.29219;
														else
															return 4.3364866667;
													}
												}
											}
											else
											{
												if(cqi < 13.5)
												{
													if(rsrp < -85.5)
													{
														if(rsrp < -87.5)
															return 6.48298;
														else
															return 8.23045;
													}
													else
													{
														if(rsrq < -5.5)
														{
															if(sinr < 21.5)
																return 6.36943;
															else
																return 8.38574;
														}
														else
															return 5.294505;
													}
												}
												else
												{
													if(rsrp < -80.5)
														return 7.47664;
													else
														return 8.529405;
												}
											}
										}
										else
										{
											if(payload < 0.3)
												return 6.01506;
											else
											{
												if(sinr < 19)
													return 14.1343;
												else
													return 5.87372;
											}
										}
									}
									else
									{
										if(rsrq < -5)
											return 13.3334;
										else
											return 8.03213;
									}
								}
								else
								{
									if(rsrq < -4.5)
									{
										if(sinr < 16.5)
										{
											if(cell < 27535620)
											{
												if(ta < 4.5)
												{
													if(rsrp < -83.5)
													{
														if(cqi < 11.5)
														{
															if(ta < 2.5)
															{
																if(payload < 1.5)
																	return 6.36436;
																else
																	return 6.89061;
															}
															else
																return 4.58453;
														}
														else
														{
															if(sinr < 12.5)
																return 6.91742;
															else
															{
																if(rsrp < -85.5)
																	return 9.84615;
																else
																	return 9.17431;
															}
														}
													}
													else
													{
														if(rsrq < -5.5)
														{
															if(sinr < 15)
																return 9.464822;
															else
																return 8.62534;
														}
														else
															return 11.5942;
													}
												}
												else
													return 14.8011;
											}
											else
											{
												if(velocity < 12.06)
													return 9.71463;
												else
												{
													if(velocity < 20.295)
													{
														if(cqi < 11.5)
															return 4.00431;
														else
															return 6.51997;
													}
													else
														return 7.4781475;
												}
											}
										}
										else
										{
											if(velocity < 13.39)
											{
												if(rsrp < -83.5)
												{
													if(ta < 1.5)
														return 6.0015;
													else
													{
														if(rsrq < -5.5)
														{
															if(payload < 1.5)
																return 10.5402;
															else
																return 11.2518;
														}
														else
															return 7.87789;
													}
												}
												else
												{
													if(velocity < 11.195)
													{
														if(rsrq < -5.5)
															return 7.04225;
														else
															return 10.65515;
													}
													else
													{
														if(rsrp < -75)
															return 11.6788;
														else
															return 11.0345;
													}
												}
											}
											else
											{
												if(sinr < 20.5)
													return 12.5176;
												else
													return 17.9372;
											}
										}
									}
									else
										return 18.2232;
								}
							}
							else
							{
								if(payload < 3.5)
								{
									if(rsrp < -91)
									{
										if(ta < 3)
											return 4.66382;
										else
											return 9.0978;
									}
									else
									{
										if(sinr < 18.5)
										{
											if(ta < 4.5)
											{
												if(rsrp < -79.5)
												{
													if(ta < 3.5)
													{
														if(cell < 29652226)
														{
															if(velocity < 14.01)
															{
																if(rsrp < -85.5)
																	return 11.0193;
																else
																	return 15.9151;
															}
															else
																return 23.976;
														}
														else
														{
															if(cqi < 12.5)
															{
																if(rsrp < -83.5)
																	return 13.59;
																else
																	return 12.1151;
															}
															else
																return 16.3265;
														}
													}
													else
													{
														if(velocity < 14.455)
															return 13.363;
														else
															return 11.6335;
													}
												}
												else
												{
													if(ta < 3)
														return 15.8403333333;
													else
													{
														if(cell < 29391104.5)
															return 21.4669;
														else
															return 22.1198;
													}
												}
											}
											else
												return 21.7786;
										}
										else
										{
											if(ta < 2.5)
												return 10.0182566667;
											else
											{
												if(cqi < 12.5)
												{
													if(velocity < 15.15)
													{
														if(rsrp < -84)
															return 16.5062;
														else
															return 15.9468;
													}
													else
														return 12.6984;
												}
												else
												{
													if(rsrq < -5.5)
														return 14.7149;
													else
														return 10.6242;
												}
											}
										}
									}
								}
								else
								{
									if(sinr < 8.5)
									{
										if(rsrp < -90.5)
											return 3.95452;
										else
											return 10.6773;
									}
									else
									{
										if(velocity < 10.87)
										{
											if(velocity < 10.24)
											{
												if(rsrp < -78)
												{
													if(rsrp < -83)
													{
														if(rsrq < -5.5)
														{
															if(cell < 29652225)
																return 14.5441;
															else
															{
																if(rsrp < -86.5)
																	return 15.18805;
																else
																	return 15.8103;
															}
														}
														else
															return 16.3265;
													}
													else
														return 16.8865;
												}
												else
													return 13.8648;
											}
											else
												return 9.06516;
										}
										else
										{
											if(sinr < 22.5)
											{
												if(velocity < 13.235)
												{
													if(sinr < 14.5)
														return 17.7187;
													else
														return 19.7531;
												}
												else
												{
													if(cell < 30649731.5)
													{
														if(sinr < 15)
														{
															if(cqi < 8.5)
																return 14.8561;
															else
																return 10.7383;
														}
														else
														{
															if(rsrp < -74.5)
															{
																if(sinr < 20)
																	return 16.8439333333;
																else
																{
																	if(rsrq < -5.5)
																		return 21.6802;
																	else
																		return 19.3353;
																}
															}
															else
																return 12.3219;
														}
													}
													else
														return 17.1951;
												}
											}
											else
											{
												if(rsrq < -5.5)
													return 24.6723;
												else
													return 17.2228;
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
								if(rsrq < -5.5)
								{
									if(cell < 28581506.5)
										return 5.560015;
									else
									{
										if(ta < 2.5)
											return 5.79712;
										else
											return 4.4492885714;
									}
								}
								else
								{
									if(velocity < 14.545)
									{
										if(sinr < 27.5)
										{
											if(ta < 1.5)
												return 9.80392;
											else
												return 8.63931;
										}
										else
											return 7.14288;
									}
									else
									{
										if(velocity < 15.58)
											return 4.8193;
										else
										{
											if(rsrq < -4.5)
											{
												if(payload < 0.3)
													return 5.51726;
												else
													return 7.84314;
											}
											else
												return 9.09094;
										}
									}
								}
							}
							else
							{
								if(payload < 2.5)
								{
									if(ta < 3)
									{
										if(sinr < 29.5)
										{
											if(velocity < 8.24)
												return 7.0922;
											else
											{
												if(cqi < 13.5)
													return 13.986;
												else
												{
													if(rsrp < -74)
														return 17.9171;
													else
														return 14.3113;
												}
											}
										}
										else
										{
											if(velocity < 4.295)
											{
												if(rsrp < -65.5)
													return 14.2857;
												else
													return 10.7527;
											}
											else
											{
												if(velocity < 16.665)
												{
													if(sinr < 30.5)
														return 6.27451;
													else
													{
														if(rsrp < -71)
															return 8.29437;
														else
														{
															if(velocity < 10.52)
																return 7.72947;
															else
																return 6.61704;
														}
													}
												}
												else
												{
													if(rsrp < -80.5)
														return 9.261595;
													else
														return 10.3627;
												}
											}
										}
									}
									else
									{
										if(cqi < 12.5)
											return 21.1082;
										else
										{
											if(ta < 4.5)
												return 12.987;
											else
											{
												if(rsrp < -87.5)
													return 11.5523;
												else
													return 6.18956;
											}
										}
									}
								}
								else
								{
									if(rsrq < -5.5)
									{
										if(payload < 3.5)
											return 24.4151;
										else
										{
											if(rsrp < -72.5)
												return 16.1616;
											else
												return 19.536;
										}
									}
									else
									{
										if(velocity < 17.86)
										{
											if(ta < 3)
											{
												if(cqi < 13)
													return 7.92275;
												else
												{
													if(rsrp < -74.5)
													{
														if(rsrp < -80)
															return 12.959;
														else
															return 14.4491;
													}
													else
													{
														if(rsrq < -4.5)
															return 11.569125;
														else
															return 13.7852;
													}
												}
											}
											else
												return 16.3182;
										}
										else
										{
											if(rsrp < -80.5)
												return 25;
											else
												return 14.8976;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if(rsrp < -84.5)
					{
						if(payload < 8.5)
						{
							if(payload < 5.5)
							{
								if(cell < 27771524)
								{
									if(velocity < 15.63)
									{
										if(sinr < 24.5)
										{
											if(sinr < 9.5)
											{
												if(cqi < 12)
													return 14.2349;
												else
													return 15.0773;
											}
											else
											{
												if(ta < 3.5)
													return 19.305;
												else
													return 16.5165;
											}
										}
										else
											return 12.0301;
									}
									else
										return 30.7692;
								}
								else
								{
									if(rsrp < -90.5)
									{
										if(cell < 28581507)
											return 18.3824;
										else
											return 10.5291;
									}
									else
									{
										if(cell < 29652225.5)
										{
											if(velocity < 20.075)
											{
												if(rsrp < -87.5)
													return 8.54884;
												else
													return 10.4384;
											}
											else
												return 12.3648;
										}
										else
										{
											if(velocity < 6.245)
												return 14.7384;
											else
												return 19.1296;
										}
									}
								}
							}
							else
							{
								if(rsrp < -90.5)
								{
									if(cqi < 11)
										return 22.9117;
									else
										return 25.0653;
								}
								else
								{
									if(cqi < 10.5)
									{
										if(f < 2232.5)
										{
											if(cell < 28581121.5)
												return 23.0169;
											else
											{
												if(velocity < 11.33)
													return 19.6366;
												else
													return 16.0643;
											}
										}
										else
										{
											if(velocity < 11.345)
												return 13.0933;
											else
												return 12.5687666667;
										}
									}
									else
									{
										if(velocity < 25.045)
										{
											if(rsrp < -85.5)
											{
												if(rsrp < -89.5)
												{
													if(sinr < 20)
														return 16.4567;
													else
														return 19.2385;
												}
												else
												{
													if(velocity < 14.535)
													{
														if(cqi < 11.5)
														{
															if(cell < 28323715)
															{
																if(payload < 6.5)
																	return 25.7511;
																else
																	return 23.3918;
															}
															else
															{
																if(rsrp < -87.5)
																	return 24.735;
																else
																	return 16.7145;
															}
														}
														else
														{
															if(cell < 27811715)
															{
																if(velocity < 13.49)
																{
																	if(cell < 26382081.5)
																		return 24.4368;
																	else
																	{
																		if(cell < 26820866.5)
																			return 21.0665;
																		else
																		{
																			if(sinr < 18.5)
																				return 22.3542;
																			else
																				return 21.5033;
																		}
																	}
																}
																else
																{
																	if(rsrp < -87.5)
																		return 17.8914;
																	else
																		return 19.8923;
																}
															}
															else
																return 15.491;
														}
													}
													else
													{
														if(velocity < 24.37)
														{
															if(velocity < 23.35)
															{
																if(velocity < 18.855)
																	return 23.1692;
																else
																	return 21.4067;
															}
															else
																return 29.9766;
														}
														else
															return 20.6097;
													}
												}
											}
											else
												return 13.8249;
										}
										else
										{
											if(velocity < 28.485)
												return 15.6479;
											else
												return 13.7188;
										}
									}
								}
							}
						}
						else
						{
							if(sinr < 25.5)
							{
								if(rsrp < -94)
								{
									if(rsrp < -98.5)
										return 13.9697;
									else
										return 19.5551;
								}
								else
								{
									if(sinr < 10.5)
									{
										if(sinr < 9)
											return 28.2575;
										else
											return 31.9234;
									}
									else
									{
										if(rsrq < -5.5)
										{
											if(sinr < 12.5)
											{
												if(rsrp < -89)
													return 25.5864;
												else
													return 24.7142;
											}
											else
											{
												if(cqi < 11)
												{
													if(f < 2232.5)
													{
														if(rsrp < -85.5)
														{
															if(payload < 9.5)
																return 19.407;
															else
																return 21.9118;
														}
														else
															return 22.7992;
													}
													else
													{
														if(rsrp < -88.5)
															return 23.8332;
														else
															return 23.1437;
													}
												}
												else
													return 26.5604;
											}
										}
										else
										{
											if(velocity < 3.38)
												return 24.3754;
											else
												return 27.7136;
										}
									}
								}
							}
							else
								return 34.379;
						}
					}
					else
					{
						if(payload < 6.5)
						{
							if(f < 2232.5)
							{
								if(velocity < 23.22)
								{
									if(rsrp < -77.5)
									{
										if(sinr < 7)
											return 12.5294;
										else
										{
											if(velocity < 5.69)
											{
												if(cqi < 12.5)
													return 14.5574333333;
												else
													return 15.8888;
											}
											else
											{
												if(cell < 27771523.5)
												{
													if(sinr < 14.5)
													{
														if(payload < 5.5)
															return 19.2678;
														else
															return 17.8771;
													}
													else
													{
														if(rsrp < -83.5)
															return 25.0915;
														else
														{
															if(sinr < 20)
																return 22.1117;
															else
																return 20.0250333333;
														}
													}
												}
												else
												{
													if(velocity < 22.335)
													{
														if(sinr < 29.5)
														{
															if(sinr < 16)
																return 20.284;
															else
															{
																if(velocity < 14.35)
																{
																	if(ta < 1.5)
																		return 17.48;
																	else
																		return 18.3239;
																}
																else
																{
																	if(rsrq < -5)
																		return 13.8985;
																	else
																		return 18.2302;
																}
															}
														}
														else
														{
															if(payload < 5.5)
																return 20.377;
															else
																return 25.1572;
														}
													}
													else
														return 13.6674;
												}
											}
										}
									}
									else
									{
										if(cell < 26385409)
										{
											if(ta < 1.5)
											{
												if(velocity < 12.64)
													return 18.2163;
												else
												{
													if(rsrp < -74.5)
														return 20.1681;
													else
														return 21.1175;
												}
											}
											else
												return 18.0668;
										}
										else
										{
											if(payload < 5.5)
											{
												if(ta < 2.5)
												{
													if(rsrp < -73.5)
														return 21.8103;
													else
														return 18.2565;
												}
												else
													return 18.5357;
											}
											else
											{
												if(velocity < 6.265)
												{
													if(rsrq < -5.5)
													{
														if(rsrp < -76.5)
															return 26.9058;
														else
															return 18.4829;
													}
													else
														return 18.0587;
												}
												else
												{
													if(rsrp < -68.5)
													{
														if(rsrq < -5.5)
															return 27.907;
														else
														{
															if(cqi < 13.5)
																return 22.9336;
															else
																return 24.8576;
														}
													}
													else
														return 19.4332;
												}
											}
										}
									}
								}
								else
								{
									if(velocity < 23.325)
										return 38.1679;
									else
									{
										if(velocity < 23.63)
											return 26.3505;
										else
										{
											if(payload < 5.5)
											{
												if(rsrq < -4.5)
												{
													if(rsrp < -75)
														return 22.792;
													else
														return 22.0751;
												}
												else
													return 19.9302;
											}
											else
											{
												if(rsrp < -80.5)
													return 17.673;
												else
													return 19.4253;
											}
										}
									}
								}
							}
							else
							{
								if(velocity < 3.175)
									return 9.63391;
								else
								{
									if(velocity < 4.48)
										return 14.5366;
									else
									{
										if(payload < 5.5)
										{
											if(sinr < 13)
												return 13.7836;
											else
												return 11.9154;
										}
										else
											return 11.3933;
									}
								}
							}
						}
						else
						{
							if(rsrp < -79.5)
							{
								if(velocity < 11.93)
								{
									if(sinr < 23.5)
									{
										if(payload < 9.5)
										{
											if(velocity < 10.87)
											{
												if(cqi < 9)
													return 18.5854;
												else
												{
													if(payload < 7.5)
														return 21.2318;
													else
														return 23.1884;
												}
											}
											else
												return 19.059;
										}
										else
										{
											if(rsrp < -83)
												return 29.985;
											else
												return 24.1546;
										}
									}
									else
									{
										if(rsrp < -82.5)
											return 34.7395;
										else
											return 33.7756;
									}
								}
								else
								{
									if(velocity < 12.14)
										return 38.1471;
									else
									{
										if(velocity < 13.97)
										{
											if(cell < 29652225)
												return 24.8892875;
											else
												return 23.7125;
										}
										else
										{
											if(sinr < 13)
											{
												if(sinr < 8.5)
												{
													if(payload < 8)
														return 27.2772;
													else
														return 25.6959;
												}
												else
													return 20.9561;
											}
											else
											{
												if(cqi < 13)
												{
													if(cqi < 11)
														return 35.1262;
													else
														return 37.2285;
												}
												else
												{
													if(velocity < 23.42)
													{
														if(ta < 1.5)
														{
															if(rsrp < -80.5)
																return 33.6842;
															else
																return 31.9107;
														}
														else
														{
															if(rsrq < -5.5)
																return 29.3686;
															else
																return 28.6885;
														}
													}
													else
													{
														if(rsrp < -82.5)
															return 17.5012;
														else
															return 27.5124;
													}
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
									if(velocity < 13.95)
									{
										if(payload < 8.5)
										{
											if(rsrp < -74.5)
											{
												if(rsrp < -78.5)
												{
													if(payload < 7.5)
														return 24.369;
													else
														return 23.5901;
												}
												else
												{
													if(sinr < 17)
														return 23.431;
													else
													{
														if(velocity < 9.205)
														{
															if(cell < 28581122)
																return 22.0815;
															else
															{
																if(cqi < 13.5)
																	return 17.1169;
																else
																	return 19.0541;
															}
														}
														else
														{
															if(sinr < 20.5)
																return 17.1201;
															else
															{
																if(sinr < 26.5)
																	return 20.7947;
																else
																	return 17.763;
															}
														}
													}
												}
											}
											else
											{
												if(rsrp < -72.5)
												{
													if(cqi < 13.5)
														return 27.5455;
													else
														return 31.1457;
												}
												else
												{
													if(sinr < 18)
														return 29.0777;
													else
													{
														if(payload < 7.5)
														{
															if(rsrq < -5)
															{
																if(velocity < 13.405)
																	return 22.3255666667;
																else
																	return 23.4212;
															}
															else
																return 23.382;
														}
														else
															return 18.7354;
													}
												}
											}
										}
										else
										{
											if(rsrp < -76.5)
											{
												if(rsrq < -5.5)
												{
													if(sinr < 23.5)
														return 38.3387;
													else
														return 23.1288;
												}
												else
													return 33.1492;
											}
											else
											{
												if(rsrq < -5.5)
												{
													if(velocity < 3.695)
													{
														if(cqi < 14.5)
															return 16.9851;
														else
															return 20.4895;
													}
													else
													{
														if(rsrp < -71.5)
														{
															if(cqi < 10)
																return 26.0586;
															else
																return 24.4399;
														}
														else
															return 30.1003;
													}
												}
												else
												{
													if(rsrp < -71.5)
														return 18.316;
													else
														return 20.6778;
												}
											}
										}
									}
									else
									{
										if(cqi < 13)
										{
											if(payload < 8.5)
												return 38.3923;
											else
												return 34.2531;
										}
										else
										{
											if(cell < 27771396.5)
											{
												if(rsrp < -73.5)
													return 22.9665;
												else
													return 21.8153;
											}
											else
											{
												if(payload < 7.5)
												{
													if(sinr < 27)
														return 26.4151;
													else
														return 21.9522;
												}
												else
												{
													if(cqi < 14.5)
														return 27.972;
													else
													{
														if(rsrp < -71)
															return 25.8377;
														else
															return 26.4791;
													}
												}
											}
										}
									}
								}
								else
								{
									if(rsrq < -4.5)
									{
										if(velocity < 9.005)
										{
											if(ta < 3)
												return 32.9218;
											else
											{
												if(rsrp < -76.5)
													return 26.8366;
												else
													return 29.347;
											}
										}
										else
										{
											if(rsrq < -5.5)
												return 26.927;
											else
												return 25.89;
										}
									}
									else
									{
										if(rsrp < -74)
											return 28.5714;
										else
											return 34.7373;
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
			if(cell < 29483522)
			{
				if(payload < 6.5)
				{
					if(cell < 27142788)
					{
						if(payload < 3.5)
						{
							if(velocity < 15.01)
							{
								if(ta < 6.5)
								{
									if(rsrp < -76.5)
										return 4.46929;
									else
									{
										if(payload < 0.55)
											return 4.87807;
										else
											return 6.57895;
									}
								}
								else
								{
									if(payload < 0.3)
									{
										if(rsrq < -5.5)
										{
											if(ta < 7.5)
											{
												if(sinr < 14.5)
													return 4.73375;
												else
												{
													if(velocity < 12.4)
														return 2.55592;
													else
														return 4.2365366667;
												}
											}
											else
												return 6.06063;
										}
										else
											return 6.83763;
									}
									else
									{
										if(rsrp < -79.5)
										{
											if(sinr < 21.5)
											{
												if(velocity < 13.79)
												{
													if(cqi < 13)
													{
														if(f < 2232.5)
														{
															if(cqi < 10.5)
															{
																if(payload < 1.25)
																	return 8.69565;
																else
																	return 9.29692;
															}
															else
															{
																if(velocity < 13.065)
																	return 8.6024666667;
																else
																	return 6.9808;
															}
														}
														else
														{
															if(sinr < 11.5)
																return 7.50704;
															else
																return 6.55201;
														}
													}
													else
														return 6.38978;
												}
												else
												{
													if(rsrp < -82.5)
														return 5.64573;
													else
														return 7.57576;
												}
											}
											else
												return 5.02513;
										}
										else
										{
											if(velocity < 0.515)
												return 7.40741;
											else
											{
												if(cqi < 13.5)
												{
													if(sinr < 21.5)
														return 9.73236;
													else
														return 8.793646;
												}
												else
												{
													if(velocity < 7.02)
														return 13.6286;
													else
														return 8.98876;
												}
											}
										}
									}
								}
							}
							else
							{
								if(rsrq < -5.5)
									return 12.4902;
								else
									return 10.7023;
							}
						}
						else
						{
							if(cqi < 9.5)
							{
								if(payload < 4.5)
								{
									if(sinr < 17.5)
										return 15.7403;
									else
										return 16.3516;
								}
								else
								{
									if(cell < 26385409)
										return 14.6252;
									else
										return 13.5916;
								}
							}
							else
							{
								if(payload < 4.5)
								{
									if(ta < 7.5)
									{
										if(cqi < 14)
											return 13.3630333333;
										else
											return 12.5638;
									}
									else
									{
										if(rsrp < -83.5)
										{
											if(velocity < 7.225)
												return 13.2396;
											else
												return 11.6068;
										}
										else
											return 8.13421;
									}
								}
								else
									return 14.1484;
							}
						}
					}
					else
					{
						if(payload < 1.5)
						{
							if(rsrq < -4.5)
							{
								if(rsrp < -81)
								{
									if(sinr < 11.5)
									{
										if(rsrq < -5.5)
										{
											if(cell < 28884739)
												return 10.263;
											else
												return 9.66184;
										}
										else
										{
											if(sinr < 7.5)
												return 4.6243;
											else
												return 7.40741;
										}
									}
									else
									{
										if(velocity < 9.09)
										{
											if(sinr < 18)
											{
												if(sinr < 14.5)
												{
													if(payload < 0.3)
														return 5.4422;
													else
														return 6.34921;
												}
												else
												{
													if(payload < 0.55)
													{
														if(rsrp < -87)
															return 5.83944;
														else
															return 8.33337;
													}
													else
														return 9.66184;
												}
											}
											else
											{
												if(cqi < 13)
												{
													if(payload < 0.3)
														return 2.73974;
													else
														return 4.425555;
												}
												else
												{
													if(payload < 0.55)
														return 6.83763;
													else
														return 5.53633;
												}
											}
										}
										else
										{
											if(cqi < 5)
												return 9.4451;
											else
											{
												if(velocity < 15.525)
												{
													if(rsrp < -87)
													{
														if(rsrq < -5.5)
															return 6.25978;
														else
															return 7.37327;
													}
													else
													{
														if(payload < 0.55)
															return 7.88659;
														else
															return 8.81057;
													}
												}
												else
												{
													if(sinr < 23)
														return 6.7723171429;
													else
														return 7.26394;
												}
											}
										}
									}
								}
								else
								{
									if(cqi < 14.5)
									{
										if(velocity < 13.85)
											return 5.6178;
										else
										{
											if(velocity < 26.9)
												return 4.9190733333;
											else
												return 4.39319;
										}
									}
									else
									{
										if(payload < 0.55)
											return 6.25002;
										else
											return 9.88875;
									}
								}
							}
							else
							{
								if(cqi < 13)
									return 19.802;
								else
								{
									if(cqi < 14.5)
										return 10.4302;
									else
										return 5.59443;
								}
							}
						}
						else
						{
							if(ta < 6.5)
							{
								if(velocity < 16.43)
								{
									if(payload < 5.5)
									{
										if(velocity < 14.685)
										{
											if(payload < 3.5)
											{
												if(velocity < 8.175)
												{
													if(sinr < 18.5)
														return 14.9393;
													else
													{
														if(f < 2232.5)
															return 13.9616;
														else
															return 13.1148;
													}
												}
												else
													return 11.0041;
											}
											else
											{
												if(velocity < 12.75)
												{
													if(cqi < 10)
														return 12.8566;
													else
													{
														if(cell < 27771523)
															return 15.534;
														else
															return 16.5375;
													}
												}
												else
												{
													if(sinr < 28)
													{
														if(rsrq < -5.5)
														{
															if(rsrp < -88.5)
																return 18.9349;
															else
																return 18.3993;
														}
														else
															return 17.2563;
													}
													else
														return 15.8856;
												}
											}
										}
										else
										{
											if(sinr < 31.5)
											{
												if(rsrp < -89)
													return 12.945;
												else
												{
													if(sinr < 19.5)
														return 9.79432;
													else
														return 11.78582;
												}
											}
											else
												return 14.0598;
										}
									}
									else
									{
										if(rsrp < -85)
											return 13.3333;
										else
										{
											if(cqi < 13.5)
												return 19.025;
											else
												return 22.3568;
										}
									}
								}
								else
								{
									if(velocity < 16.78)
										return 22.8354;
									else
										return 25.4507;
								}
							}
							else
							{
								if(rsrp < -95.5)
								{
									if(f < 2232.5)
									{
										if(cqi < 7.5)
											return 13.104;
										else
										{
											if(rsrp < -96.5)
												return 5.737262;
											else
												return 4.04381;
										}
									}
									else
										return 10.3093;
								}
								else
								{
									if(payload < 3.5)
									{
										if(velocity < 12.935)
										{
											if(rsrp < -86.5)
											{
												if(cell < 28879105)
													return 4.84359;
												else
													return 7.00079;
											}
											else
												return 12.4224;
										}
										else
										{
											if(f < 2232.5)
											{
												if(sinr < 19.5)
												{
													if(rsrp < -78)
														return 17.7187;
													else
														return 14.3885;
												}
												else
												{
													if(payload < 2.5)
														return 13.4567;
													else
														return 14.3369;
												}
											}
											else
											{
												if(cqi < 12.5)
													return 10.9629;
												else
													return 11.6732;
											}
										}
									}
									else
									{
										if(cell < 28068481.5)
										{
											if(rsrp < -89.5)
												return 12.0391;
											else
											{
												if(rsrp < -82)
													return 9.38859;
												else
													return 10.8932;
											}
										}
										else
										{
											if(cell < 28883331)
											{
												if(cell < 28368385)
												{
													if(sinr < 6.5)
														return 24.0361;
													else
													{
														if(ta < 9)
															return 12.3935;
														else
															return 15.9734;
													}
												}
												else
													return 20.8469;
											}
											else
											{
												if(rsrp < -93.5)
													return 9.7107;
												else
												{
													if(rsrq < -5.5)
													{
														if(sinr < 18)
														{
															if(sinr < 8)
																return 12.6622;
															else
															{
																if(velocity < 13.205)
																{
																	if(velocity < 10.595)
																		return 13.8456;
																	else
																	{
																		if(rsrp < -92.5)
																			return 18.0505;
																		else
																			return 16.3132;
																	}
																}
																else
																	return 21.4018;
															}
														}
														else
														{
															if(velocity < 3.205)
															{
																if(cqi < 11)
																	return 16.632;
																else
																{
																	if(sinr < 20)
																	{
																		if(rsrp < -90)
																			return 16.6528;
																		else
																			return 14.8423;
																	}
																	else
																		return 10.5645;
																}
															}
															else
															{
																if(velocity < 12.62)
																{
																	if(payload < 4.5)
																		return 9.27536;
																	else
																	{
																		if(cqi < 13.5)
																			return 11.4177;
																		else
																			return 12.3724;
																	}
																}
																else
																{
																	if(cqi < 10.5)
																		return 13.2538;
																	else
																		return 17.1674;
																}
															}
														}
													}
													else
													{
														if(cqi < 8.5)
															return 13.9657;
														else
														{
															if(payload < 4.5)
																return 9.27805;
															else
																return 10.1678;
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
					if(f < 1342.5)
						return 11.2486;
					else
					{
						if(payload < 8.5)
						{
							if(velocity < 4.275)
							{
								if(ta < 11)
								{
									if(rsrp < -78)
									{
										if(rsrp < -90.5)
											return 15.60345;
										else
										{
											if(sinr < 17.5)
												return 15.4814;
											else
												return 10.6222;
										}
									}
									else
										return 18.7299;
								}
								else
									return 24.1171;
							}
							else
							{
								if(velocity < 33.01)
								{
									if(velocity < 16.755)
									{
										if(cqi < 12.5)
										{
											if(ta < 10.5)
											{
												if(velocity < 10.855)
												{
													if(sinr < 11.5)
														return 25.4372;
													else
													{
														if(ta < 7.5)
															return 22.2134;
														else
															return 20.6053;
													}
												}
												else
												{
													if(cqi < 7)
													{
														if(sinr < 5)
															return 16.2231;
														else
															return 18.082;
													}
													else
													{
														if(sinr < 14)
														{
															if(sinr < 11.5)
																return 19.9875;
															else
																return 20.6452;
														}
														else
														{
															if(rsrq < -5.5)
																return 19.1159666667;
															else
																return 20.1448;
														}
													}
												}
											}
											else
												return 15.2308;
										}
										else
										{
											if(velocity < 14.38)
											{
												if(rsrp < -86)
													return 23.5195;
												else
												{
													if(velocity < 12.855)
														return 21.143;
													else
														return 19.774;
												}
											}
											else
											{
												if(payload < 7.5)
													return 27.3038;
												else
													return 28.2561;
											}
										}
									}
									else
									{
										if(sinr < 12)
											return 13.6519;
										else
											return 18.1406;
									}
								}
								else
									return 28.4318;
							}
						}
						else
						{
							if(cell < 27400067)
							{
								if(ta < 6.5)
									return 27.2201;
								else
								{
									if(cell < 26381952.5)
										return 25.9151;
									else
									{
										if(rsrp < -86.5)
											return 15.2639;
										else
										{
											if(rsrp < -85.5)
												return 26.5957;
											else
											{
												if(velocity < 10.11)
												{
													if(sinr < 15.5)
														return 16.8244;
													else
													{
														if(sinr < 32.5)
															return 21.7096;
														else
														{
															if(cqi < 14.5)
																return 19.0931;
															else
															{
																if(rsrp < -75)
																	return 19.7628;
																else
																	return 20.2532;
															}
														}
													}
												}
												else
												{
													if(velocity < 12.16)
														return 22.5035;
													else
														return 20.6345;
												}
											}
										}
									}
								}
							}
							else
							{
								if(ta < 8)
								{
									if(rsrp < -89.5)
										return 30.2726;
									else
									{
										if(sinr < 12.5)
											return 20.979;
										else
										{
											if(velocity < 14.505)
											{
												if(cqi < 12)
													return 26.2582;
												else
													return 25.7787;
											}
											else
												return 24.61118;
										}
									}
								}
								else
								{
									if(velocity < 29.64)
									{
										if(payload < 9.5)
										{
											if(rsrq < -5.5)
											{
												if(cell < 28584708)
													return 12.5786;
												else
												{
													if(rsrp < -92.5)
														return 17.835;
													else
														return 22.291;
												}
											}
											else
												return 21.9245;
										}
										else
										{
											if(sinr < 20.5)
											{
												if(sinr < 15)
													return 21.751;
												else
													return 20.015;
											}
											else
											{
												if(rsrp < -89.5)
													return 27.8843;
												else
													return 17.6913;
											}
										}
									}
									else
										return 29.2089;
								}
							}
						}
					}
				}
			}
			else
			{
				if(sinr < 14.5)
				{
					if(cqi < 9.5)
					{
						if(cell < 29741056)
						{
							if(velocity < 10.88)
							{
								if(rsrp < -94)
									return 9.63855;
								else
									return 6.38978;
							}
							else
							{
								if(rsrp < -90)
									return 19.1912;
								else
								{
									if(payload < 3.5)
									{
										if(rsrq < -5.5)
											return 12.2888;
										else
											return 10.4987;
									}
									else
										return 17.6082;
								}
							}
						}
						else
						{
							if(rsrq < -5.5)
							{
								if(ta < 9)
									return 9.59653;
								else
								{
									if(sinr < 10.5)
										return 8.485805;
									else
										return 9.50872;
								}
							}
							else
								return 7.07339;
						}
					}
					else
					{
						if(velocity < 11.01)
						{
							if(rsrp < -90)
								return 20.1068;
							else
								return 23.2693;
						}
						else
						{
							if(rsrp < -98.5)
								return 22.5989;
							else
							{
								if(ta < 9)
								{
									if(rsrq < -5.5)
									{
										if(payload < 0.75)
										{
											if(velocity < 15.205)
												return 8.84973;
											else
												return 7.7821;
										}
										else
										{
											if(cqi < 14.5)
											{
												if(velocity < 14.05)
												{
													if(payload < 6)
														return 15.6326;
													else
														return 16.2684;
												}
												else
												{
													if(rsrp < -88)
														return 15.3649;
													else
														return 12.966;
												}
											}
											else
												return 10.0597;
										}
									}
									else
										return 22.738;
								}
								else
								{
									if(velocity < 35.315)
									{
										if(sinr < 11.5)
										{
											if(ta < 10.5)
												return 6.69456;
											else
											{
												if(cell < 31548160)
													return 12.4095;
												else
													return 10.7527;
											}
										}
										else
											return 7.9491825;
									}
									else
										return 16.0578;
								}
							}
						}
					}
				}
				else
				{
					if(payload < 4.5)
					{
						if(payload < 2.5)
						{
							if(ta < 17)
							{
								if(payload < 0.75)
								{
									if(payload < 0.3)
									{
										if(sinr < 19)
											return 5.06331;
										else
											return 4.25534;
									}
									else
									{
										if(ta < 11.5)
											return 7.95229;
										else
											return 7.0922;
									}
								}
								else
								{
									if(cqi < 12)
									{
										if(cqi < 5.5)
											return 8.53789;
										else
										{
											if(rsrq < -5.5)
												return 9.79525;
											else
												return 10.596;
										}
									}
									else
									{
										if(rsrp < -82.5)
											return 13.913;
										else
										{
											if(sinr < 19)
												return 9.23788;
											else
											{
												if(sinr < 27.5)
												{
													if(sinr < 24)
														return 13.3111;
													else
														return 12.3457;
												}
												else
													return 9.55224;
											}
										}
									}
								}
							}
							else
							{
								if(velocity < 25.98)
									return 2.6178;
								else
								{
									if(sinr < 23)
										return 5.55558;
									else
										return 4.34145;
								}
							}
						}
						else
						{
							if(rsrq < -4.5)
							{
								if(payload < 3.5)
								{
									if(cqi < 14.5)
									{
										if(rsrp < -82.5)
											return 13.7773;
										else
											return 14.9347;
									}
									else
										return 16.3043;
								}
								else
								{
									if(velocity < 16.27)
									{
										if(rsrq < -5.5)
										{
											if(velocity < 13.945)
												return 16.8865;
											else
												return 17.4863;
										}
										else
											return 15.625;
									}
									else
									{
										if(cqi < 13.5)
											return 16.7539;
										else
										{
											if(velocity < 26.405)
												return 19.1045;
											else
												return 18.4226;
										}
									}
								}
							}
							else
								return 14.2602;
						}
					}
					else
					{
						if(cell < 33527555.5)
						{
							if(cqi < 10.5)
								return 39.0434;
							else
							{
								if(payload < 9.5)
								{
									if(rsrq < -4.5)
									{
										if(velocity < 11.84)
										{
											if(sinr < 29.5)
											{
												if(rsrp < -84.5)
												{
													if(sinr < 18.5)
														return 16.1197;
													else
														return 14.6163;
												}
												else
													return 18.3066;
											}
											else
												return 23.3918;
										}
										else
										{
											if(sinr < 29)
											{
												if(ta < 7.5)
												{
													if(payload < 6.5)
													{
														if(cqi < 13.5)
															return 22.1239;
														else
															return 24.1085;
													}
													else
													{
														if(rsrp < -83.5)
															return 26.18725;
														else
															return 25.1799;
													}
												}
												else
												{
													if(sinr < 23.5)
														return 28.0646166667;
													else
														return 29.2398;
												}
											}
											else
											{
												if(velocity < 36.085)
													return 22.3722333333;
												else
													return 20.6718;
											}
										}
									}
									else
									{
										if(sinr < 24.5)
											return 15.3257;
										else
											return 17.9038;
									}
								}
								else
								{
									if(sinr < 23)
									{
										if(rsrq < -5.5)
											return 20.2583;
										else
											return 24.9454;
									}
									else
									{
										if(ta < 11.5)
											return 41.7755;
										else
										{
											if(rsrp < -75.5)
												return 31.4961;
											else
												return 30.4762;
										}
									}
								}
							}
						}
						else
						{
							if(rsrp < -78)
								return 15.2252;
							else
								return 8.24742;
						}
					}
				}
			}
		}
	}
}

float tmobile_dl_tree_7(float payload, float rsrp, float rsrq, float sinr, float cqi, float ta, float velocity, float cell, float f)
{
	if(payload < 3.5)
	{
		if(rsrp < -88.5)
		{
			if(cell < 27771139.5)
			{
				if(payload < 0.75)
				{
					if(payload < 0.3)
					{
						if(velocity < 16.035)
						{
							if(sinr < 15.5)
							{
								if(rsrp < -92)
								{
									if(cqi < 10.5)
										return 4.34145;
									else
										return 5.12822;
								}
								else
								{
									if(rsrp < -89.5)
										return 5.7704925;
									else
										return 5.06331;
								}
							}
							else
							{
								if(cell < 26378884)
									return 2.62296;
								else
									return 3.21286;
							}
						}
						else
							return 1.74673;
					}
					else
					{
						if(cell < 27078274.5)
						{
							if(rsrp < -89.5)
							{
								if(velocity < 7.87)
								{
									if(cqi < 6.5)
										return 6.78963;
									else
										return 4.08998;
								}
								else
								{
									if(rsrp < -91)
										return 8.0033;
									else
										return 7.15564;
								}
							}
							else
								return 4.6462375;
						}
						else
							return 11.5274;
					}
				}
				else
				{
					if(cell < 26382210.5)
					{
						if(cqi < 11.5)
						{
							if(cqi < 5.5)
							{
								if(f < 2232.5)
									return 10.984;
								else
								{
									if(rsrq < -10)
										return 8.36237;
									else
										return 6.47249;
								}
							}
							else
							{
								if(velocity < 10.29)
								{
									if(rsrq < -7.5)
									{
										if(rsrp < -90.5)
											return 9.38967;
										else
											return 6.94746;
									}
									else
									{
										if(payload < 2)
											return 8.58369;
										else
											return 9.47867;
									}
								}
								else
								{
									if(cqi < 10)
									{
										if(velocity < 13.135)
										{
											if(rsrp < -94.5)
												return 4.15369;
											else
												return 5.22193;
										}
										else
										{
											if(rsrp < -101)
												return 4.82218;
											else
											{
												if(velocity < 15.72)
												{
													if(rsrp < -99.5)
														return 6.31247;
													else
													{
														if(rsrp < -97)
															return 7.04846;
														else
															return 6.28108;
													}
												}
												else
													return 5.14635;
											}
										}
									}
									else
										return 9.19012;
								}
							}
						}
						else
							return 14.6879;
					}
					else
					{
						if(velocity < 11.945)
						{
							if(rsrq < -9.5)
								return 6.824;
							else
							{
								if(payload < 1.5)
								{
									if(sinr < 24.5)
									{
										if(cqi < 11)
										{
											if(rsrp < -92.5)
												return 7.40741;
											else
												return 6.82012;
										}
										else
											return 9.34579;
									}
									else
										return 12.8205;
								}
								else
								{
									if(cqi < 9.5)
									{
										if(velocity < 10.37)
										{
											if(cqi < 7.5)
											{
												if(ta < 6)
													return 11.0599;
												else
													return 11.7417;
											}
											else
											{
												if(cell < 26820867.5)
												{
													if(cqi < 8.5)
														return 12.4708;
													else
														return 11.1266;
												}
												else
												{
													if(payload < 2.5)
														return 13.1148;
													else
														return 12.5523;
												}
											}
										}
										else
											return 8.7146;
									}
									else
									{
										if(velocity < 11.58)
										{
											if(rsrp < -91.5)
											{
												if(rsrq < -6.5)
													return 6.54397;
												else
													return 9.0978;
											}
											else
												return 9.1127833333;
										}
										else
											return 10.8328;
									}
								}
							}
						}
						else
						{
							if(cqi < 9.5)
							{
								if(ta < 7)
									return 6.89061;
								else
								{
									if(rsrp < -95.5)
										return 10.8108;
									else
										return 20.7254;
								}
							}
							else
							{
								if(cqi < 11)
									return 23.976;
								else
									return 12.6984;
							}
						}
					}
				}
			}
			else
			{
				if(payload < 2.5)
				{
					if(velocity < 15.83)
					{
						if(rsrp < -97.5)
						{
							if(cell < 29568768.5)
							{
								if(velocity < 14.92)
								{
									if(velocity < 14.56)
									{
										if(rsrq < -9.5)
										{
											if(sinr < 1.5)
											{
												if(cell < 28369793.5)
												{
													if(cqi < 6.5)
													{
														if(cqi < 4.5)
															return 3.98605;
														else
															return 3.3692725;
													}
													else
														return 7.09849;
												}
												else
												{
													if(velocity < 13.12)
													{
														if(payload < 0.55)
															return 6.77969;
														else
															return 4.71698;
													}
													else
														return 10;
												}
											}
											else
											{
												if(rsrp < -98.5)
												{
													if(cqi < 8.5)
													{
														if(rsrp < -103.5)
															return 1.19048;
														else
															return 1.6922875;
													}
													else
													{
														if(velocity < 13.325)
															return 4.3101966667;
														else
															return 2.93041;
													}
												}
												else
												{
													if(rsrq < -10.5)
													{
														if(velocity < 4.115)
															return 7.20723;
														else
															return 6.13497;
													}
													else
														return 2.902355;
												}
											}
										}
										else
										{
											if(ta < 8.5)
											{
												if(sinr < 0.5)
												{
													if(payload < 0.75)
														return 10.6101;
													else
														return 8.94855;
												}
												else
												{
													if(rsrp < -104)
														return 7.583665;
													else
													{
														if(sinr < 7.5)
														{
															if(sinr < 5.5)
															{
																if(payload < 1.5)
																{
																	if(rsrp < -101)
																		return 5.02513;
																	else
																		return 4.15369;
																}
																else
																	return 3.17334;
															}
															else
															{
																if(payload < 0.75)
																{
																	if(payload < 0.3)
																		return 8.24745;
																	else
																		return 10.4167;
																}
																else
																{
																	if(payload < 1.5)
																		return 2.76625;
																	else
																	{
																		if(ta < 6.5)
																			return 6.78829;
																		else
																			return 4.56361;
																	}
																}
															}
														}
														else
														{
															if(cell < 29479936.5)
															{
																if(cqi < 8)
																{
																	if(ta < 7.5)
																		return 3.12501;
																	else
																		return 4.05268;
																}
																else
																{
																	if(velocity < 10.095)
																	{
																		if(rsrp < -100.5)
																			return 4.10258;
																		else
																			return 5.346905;
																	}
																	else
																		return 6.89655;
																}
															}
															else
																return 2.59741;
														}
													}
												}
											}
											else
											{
												if(payload < 0.75)
												{
													if(cqi < 8.5)
													{
														if(velocity < 6.115)
															return 6.71141;
														else
														{
															if(rsrq < -8.5)
																return 9.02935;
															else
																return 13.6519;
														}
													}
													else
														return 3.65297;
												}
												else
												{
													if(sinr < 8.5)
													{
														if(payload < 1.5)
															return 1.3563966667;
														else
															return 5.24246;
													}
													else
													{
														if(rsrq < -6.5)
														{
															if(rsrp < -100.5)
																return 8.3682;
															else
																return 10.3829;
														}
														else
															return 6.25978;
													}
												}
											}
										}
									}
									else
										return 1.442585;
								}
								else
								{
									if(cell < 28884353.5)
									{
										if(payload < 0.75)
											return 7.31261;
										else
										{
											if(rsrp < -102)
												return 3.02916;
											else
												return 5.09554;
										}
									}
									else
										return 12.4611;
								}
							}
							else
							{
								if(sinr < -1.5)
									return 2.7595825;
								else
								{
									if(cell < 31716224.5)
									{
										if(rsrq < -10.5)
										{
											if(rsrp < -99.5)
												return 5.00002;
											else
												return 3.16207;
										}
										else
											return 2.9426366667;
									}
									else
										return 8.47458;
								}
							}
						}
						else
						{
							if(payload < 1.5)
							{
								if(payload < 0.3)
								{
									if(rsrp < -96.5)
									{
										if(cqi < 12.5)
											return 3.05345;
										else
											return 2.31885;
									}
									else
									{
										if(sinr < 0.5)
										{
											if(ta < 10.5)
												return 9.19544;
											else
											{
												if(rsrp < -92.5)
													return 4.46929;
												else
													return 6.29924;
											}
										}
										else
										{
											if(rsrq < -11.5)
												return 2.8881;
											else
											{
												if(cqi < 9.5)
												{
													if(f < 2232.5)
													{
														if(velocity < 12.85)
														{
															if(ta < 5)
																return 4.06606;
															else
															{
																if(cell < 28366081)
																{
																	if(cqi < 8.5)
																	{
																		if(sinr < 1.5)
																			return 5.51726;
																		else
																		{
																			if(rsrp < -89.5)
																				return 5.0582033333;
																			else
																				return 3.70372;
																		}
																	}
																	else
																		return 4.23282;
																}
																else
																{
																	if(sinr < 9)
																	{
																		if(cell < 28967937)
																			return 8.60218;
																		else
																			return 5.67378;
																	}
																	else
																	{
																		if(cell < 28968577)
																			return 5.601096;
																		else
																			return 4.8193;
																	}
																}
															}
														}
														else
														{
															if(rsrp < -90.5)
																return 6.6299633333;
															else
																return 5.51726;
														}
													}
													else
													{
														if(velocity < 9.16)
															return 2.835075;
														else
															return 5.03147;
													}
												}
												else
												{
													if(rsrp < -90.5)
													{
														if(rsrp < -91.5)
														{
															if(rsrq < -6.5)
																return 4.4944;
															else
																return 6.66669;
														}
														else
														{
															if(velocity < 8.55)
																return 7.03827;
															else
																return 8.42108;
														}
													}
													else
													{
														if(rsrq < -8)
															return 4.44446;
														else
															return 5.443722;
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
										if(rsrp < -95.5)
										{
											if(ta < 3.5)
												return 3.61337;
											else
											{
												if(ta < 8.5)
												{
													if(sinr < 3.5)
														return 8.0402;
													else
													{
														if(sinr < 12)
														{
															if(sinr < 8.5)
																return 6.28437;
															else
																return 5.80131;
														}
														else
															return 7.13012;
													}
												}
												else
												{
													if(rsrq < -9.5)
														return 7.49655;
													else
														return 8.60215;
												}
											}
										}
										else
										{
											if(cell < 29738624.5)
											{
												if(cqi < 8.5)
												{
													if(cell < 28966145)
													{
														if(velocity < 1.025)
															return 2.96296;
														else
														{
															if(payload < 0.75)
																return 3.96406;
															else
																return 4.59506;
														}
													}
													else
														return 2.01816;
												}
												else
												{
													if(ta < 6)
														return 5.92154;
													else
														return 4.75624;
												}
											}
											else
												return 7.64818;
										}
									}
									else
									{
										if(cell < 28367105.5)
										{
											if(rsrq < -6)
											{
												if(sinr < 2.5)
													return 8.62069;
												else
													return 11.8476666667;
											}
											else
												return 6.99913;
										}
										else
										{
											if(rsrp < -94.5)
											{
												if(rsrp < -96)
												{
													if(velocity < 11.935)
													{
														if(ta < 12.5)
															return 3.41006;
														else
															return 4.45434;
													}
													else
														return 10.1523;
												}
												else
												{
													if(sinr < 13.5)
														return 11.5942;
													else
													{
														if(sinr < 21)
															return 8.98876;
														else
															return 10.596;
													}
												}
											}
											else
											{
												if(rsrp < -90.5)
												{
													if(cqi < 8.5)
													{
														if(cqi < 7.5)
														{
															if(cell < 29483522)
															{
																if(cqi < 6.5)
																{
																	if(rsrp < -93)
																		return 6.72269;
																	else
																		return 8.65801;
																}
																else
																	return 8.78156;
															}
															else
															{
																if(velocity < 11.795)
																	return 6.6650733333;
																else
																	return 5.6338;
															}
														}
														else
															return 9.51249;
													}
													else
													{
														if(cell < 29391105.5)
															return 3.031836;
														else
														{
															if(velocity < 8.165)
															{
																if(rsrq < -7)
																	return 5.18807;
																else
																	return 5.77201;
															}
															else
																return 4.33369;
														}
													}
												}
												else
												{
													if(cqi < 11.5)
													{
														if(rsrp < -89.5)
														{
															if(velocity < 12.105)
																return 8.8499033333;
															else
																return 7.8871233333;
														}
														else
															return 9.36768;
													}
													else
														return 4.56621;
												}
											}
										}
									}
								}
							}
							else
							{
								if(sinr < -1)
									return 2.86893;
								else
								{
									if(ta < 12.5)
									{
										if(sinr < 13)
										{
											if(sinr < 1)
												return 10.1074;
											else
											{
												if(cell < 28367746)
													return 7.1978666667;
												else
												{
													if(f < 2232.5)
														return 8.22858;
													else
														return 7.46269;
												}
											}
										}
										else
										{
											if(sinr < 14.5)
												return 15.0659;
											else
											{
												if(velocity < 15.01)
												{
													if(velocity < 10.225)
													{
														if(rsrq < -6.5)
														{
															if(cell < 29483522)
																return 8.6627;
															else
																return 9.87045;
														}
														else
														{
															if(rsrp < -94)
																return 11.0041;
															else
																return 11.5523;
														}
													}
													else
													{
														if(rsrp < -94)
															return 5.87803;
														else
															return 7.32265;
													}
												}
												else
													return 12.2982;
											}
										}
									}
									else
										return 17.316;
								}
							}
						}
					}
					else
					{
						if(velocity < 16.965)
						{
							if(velocity < 16.78)
							{
								if(cqi < 7)
								{
									if(velocity < 16.02)
									{
										if(velocity < 15.935)
											return 4.0150477778;
										else
										{
											if(rsrp < -103)
												return 2.17392;
											else
												return 3.15706;
										}
									}
									else
										return 4.53182;
								}
								else
								{
									if(payload < 0.3)
										return 3.13727;
									else
									{
										if(sinr < 6)
											return 2.55714;
										else
											return 2.02532;
									}
								}
							}
							else
							{
								if(cqi < 3.5)
									return 0.542962;
								else
									return 1.8521;
							}
						}
						else
						{
							if(cell < 33527556.5)
							{
								if(payload < 0.3)
								{
									if(ta < 34)
									{
										if(sinr < 7)
										{
											if(ta < 15.5)
												return 2.47679;
											else
												return 4.59772;
										}
										else
											return 6.01506;
									}
									else
										return 0.355241;
								}
								else
								{
									if(sinr < 8)
									{
										if(cell < 30842752.5)
										{
											if(sinr < 4)
											{
												if(cqi < 7.5)
												{
													if(cell < 27771907)
													{
														if(sinr < -4)
														{
															if(payload < 1.5)
																return 8.00801;
															else
																return 9.2539;
														}
														else
															return 6.65557;
													}
													else
													{
														if(cell < 28883329)
															return 4.680104;
														else
														{
															if(rsrp < -102)
																return 6.87876;
															else
																return 5.55556;
														}
													}
												}
												else
													return 0.219262;
											}
											else
											{
												if(rsrq < -7.5)
													return 9.4451;
												else
													return 3.27466;
											}
										}
										else
										{
											if(ta < 18)
												return 10.7527;
											else
											{
												if(payload < 0.75)
													return 9.63855;
												else
													return 7.67574;
											}
										}
									}
									else
									{
										if(cell < 32404481.5)
										{
											if(ta < 14)
												return 3.92542;
											else
											{
												if(rsrp < -102.5)
													return 3.89864;
												else
													return 4.355005;
											}
										}
										else
											return 6.48298;
									}
								}
							}
							else
							{
								if(rsrp < -95.5)
									return 5.512665;
								else
								{
									if(sinr < 6.5)
										return 2.11752;
									else
										return 0.850159;
								}
							}
						}
					}
				}
				else
				{
					if(rsrq < -9.5)
					{
						if(cqi < 4.5)
						{
							if(ta < 7)
								return 10.084;
							else
								return 13.4831;
						}
						else
						{
							if(velocity < 14.555)
							{
								if(rsrp < -90.5)
								{
									if(rsrp < -97.5)
									{
										if(cell < 29430658)
											return 4.32782;
										else
											return 5.63645;
									}
									else
									{
										if(cqi < 10)
										{
											if(rsrq < -11.5)
												return 7.831645;
											else
											{
												if(ta < 8)
												{
													if(ta < 5.5)
													{
														if(rsrq < -10.5)
														{
															if(rsrp < -92.5)
																return 6.19515;
															else
																return 6.77966;
														}
														else
															return 4.88599;
													}
													else
													{
														if(rsrq < -10.5)
															return 5.63645;
														else
															return 8.12733;
													}
												}
												else
													return 3.10426;
											}
										}
										else
											return 10.5125;
									}
								}
								else
									return 11.976;
							}
							else
							{
								if(rsrq < -11)
								{
									if(velocity < 16.975)
										return 5.30152;
									else
										return 6.64452;
								}
								else
								{
									if(cqi < 6.5)
										return 7.07339;
									else
									{
										if(velocity < 25.22)
											return 12.0664;
										else
											return 10.3761;
									}
								}
							}
						}
					}
					else
					{
						if(rsrq < -5.5)
						{
							if(rsrp < -104)
								return 5.35954;
							else
							{
								if(rsrp < -93.5)
								{
									if(rsrp < -100.5)
									{
										if(sinr < 1.5)
											return 15.2575;
										else
											return 13.0364;
									}
									else
									{
										if(cqi < 9.5)
										{
											if(sinr < -1)
												return 4.97616;
											else
											{
												if(sinr < 4.5)
												{
													if(rsrq < -7.5)
													{
														if(rsrq < -8.5)
															return 10.8794;
														else
															return 11.6448;
													}
													else
														return 12.5065;
												}
												else
												{
													if(sinr < 7.5)
													{
														if(sinr < 6)
															return 4.28801;
														else
															return 5.09446;
													}
													else
													{
														if(sinr < 15)
														{
															if(velocity < 11.39)
															{
																if(cqi < 8)
																	return 10.1095;
																else
																	return 3.94997;
															}
															else
															{
																if(rsrp < -99)
																	return 9.50872;
																else
																	return 11.0497;
															}
														}
														else
															return 6.22568;
													}
												}
											}
										}
										else
										{
											if(ta < 10.5)
											{
												if(rsrp < -97)
													return 9.68523;
												else
													return 10.912075;
											}
											else
												return 15.4143;
										}
									}
								}
								else
								{
									if(f < 2232.5)
									{
										if(cqi < 10)
										{
											if(ta < 6)
											{
												if(rsrp < -90.5)
													return 6.38638;
												else
													return 7.76448;
											}
											else
											{
												if(sinr < 11.5)
													return 11.3314;
												else
													return 13.3854;
											}
										}
										else
										{
											if(velocity < 11.795)
												return 12.4095;
											else
											{
												if(velocity < 12.53)
													return 14.5985;
												else
													return 15.18245;
											}
										}
									}
									else
										return 6.98283;
								}
							}
						}
						else
							return 4.753705;
					}
				}
			}
		}
		else
		{
			if(payload < 1.5)
			{
				if(rsrq < -10.5)
				{
					if(rsrp < -83.5)
						return 0.472283;
					else
						return 18.7354;
				}
				else
				{
					if(payload < 0.3)
					{
						if(cqi < 7.5)
						{
							if(rsrp < -74)
							{
								if(sinr < 5)
									return 8.08084;
								else
								{
									if(rsrq < -7.5)
										return 7.61908;
									else
									{
										if(ta < 5.5)
										{
											if(rsrq < -6.5)
												return 5.29803;
											else
												return 5.79712;
										}
										else
										{
											if(sinr < 11)
												return 4.8485;
											else
												return 4.23282;
										}
									}
								}
							}
							else
								return 22.8572;
						}
						else
						{
							if(rsrq < -4.5)
							{
								if(cqi < 13.5)
								{
									if(rsrp < -82.5)
									{
										if(velocity < 0.495)
										{
											if(sinr < 16.5)
												return 5.1298933333;
											else
												return 3.18183;
										}
										else
										{
											if(ta < 4.5)
											{
												if(ta < 2.5)
												{
													if(velocity < 22.015)
														return 5.575005;
													else
														return 6.6116;
												}
												else
												{
													if(rsrq < -6)
														return 8.08084;
													else
														return 9.52385;
												}
											}
											else
											{
												if(rsrq < -5.5)
												{
													if(cell < 28369154)
													{
														if(rsrp < -85.5)
														{
															if(cqi < 8.5)
															{
																if(sinr < 15)
																	return 5.59443;
																else
																	return 5.12822;
															}
															else
																return 6.1086216667;
														}
														else
															return 7.69234;
													}
													else
													{
														if(velocity < 12.55)
															return 3.92158;
														else
														{
															if(rsrq < -7)
																return 5.12822;
															else
																return 6.20157;
														}
													}
												}
												else
												{
													if(rsrp < -86.5)
														return 6.29924;
													else
													{
														if(rsrp < -84.5)
															return 8.08084;
														else
															return 7.27276;
													}
												}
											}
										}
									}
									else
									{
										if(ta < 1.5)
										{
											if(rsrp < -75.5)
											{
												if(cell < 27078658)
													return 4.7059;
												else
												{
													if(rsrp < -79)
														return 5.4422;
													else
														return 5.92595;
												}
											}
											else
												return 6.8627666667;
										}
										else
										{
											if(cell < 29391104.5)
											{
												if(velocity < 3.795)
													return 6.34923;
												else
												{
													if(rsrp < -81.5)
													{
														if(velocity < 14.515)
															return 5.03147;
														else
															return 6.77969;
													}
													else
													{
														if(rsrq < -5.5)
															return 4.3827933333;
														else
															return 4.9462375;
													}
												}
											}
											else
											{
												if(cell < 33527555.5)
												{
													if(sinr < 21.5)
													{
														if(sinr < 11)
															return 4.21054;
														else
															return 4.89853;
													}
													else
														return 4.25642;
												}
												else
													return 3.66974;
											}
										}
									}
								}
								else
								{
									if(velocity < 12.355)
									{
										if(sinr < 17.5)
											return 6.01506;
										else
										{
											if(ta < 5.5)
												return 4.4952533333;
											else
												return 2.55592;
										}
									}
									else
									{
										if(cell < 29391104.5)
										{
											if(ta < 14)
											{
												if(cell < 27771906)
												{
													if(velocity < 12.725)
														return 5.67378;
													else
														return 4.646136;
												}
												else
												{
													if(ta < 2.5)
														return 5.3553914286;
													else
													{
														if(ta < 5)
															return 5.79712;
														else
														{
															if(velocity < 15.325)
																return 6.25002;
															else
																return 5.26318;
														}
													}
												}
											}
											else
												return 7.14288;
										}
										else
										{
											if(rsrq < -7)
												return 5.36915;
											else
												return 4.3613166667;
										}
									}
								}
							}
							else
							{
								if(ta < 3.5)
									return 9.09094;
								else
								{
									if(ta < 11)
										return 5.59443;
									else
										return 4.76192;
								}
							}
						}
					}
					else
					{
						if(rsrp < -76.5)
						{
							if(f < 1384.95)
								return 2.53703896;
							else
							{
								if(sinr < 2)
								{
									if(rsrp < -85.5)
										return 3.996;
									else
									{
										if(payload < 0.75)
											return 6.18238;
										else
											return 7.1332433333;
									}
								}
								else
								{
									if(rsrq < -9.5)
									{
										if(cell < 27078274)
											return 12.6183;
										else
											return 2.8910433333;
									}
									else
									{
										if(f < 2232.5)
										{
											if(cell < 27771013.5)
											{
												if(sinr < 8.5)
												{
													if(payload < 0.75)
														return 11.3636;
													else
														return 9.41176;
												}
												else
												{
													if(velocity < 13.565)
													{
														if(rsrp < -83.5)
														{
															if(sinr < 17)
																return 6.371975;
															else
																return 7.487485;
														}
														else
															return 8.2283025;
													}
													else
													{
														if(sinr < 16.5)
														{
															if(payload < 0.75)
																return 5.8617925;
															else
																return 4.39319;
														}
														else
														{
															if(payload < 0.75)
																return 5.16157;
															else
																return 4.62963;
														}
													}
												}
											}
											else
											{
												if(cell < 27771139.5)
												{
													if(cqi < 14.5)
													{
														if(rsrp < -83)
														{
															if(velocity < 19.475)
																return 10.6242;
															else
																return 12.3267;
														}
														else
														{
															if(rsrq < -6.5)
																return 10.2041;
															else
																return 9.28074;
														}
													}
													else
														return 13.4454;
												}
												else
												{
													if(cqi < 9.5)
													{
														if(ta < 7.5)
														{
															if(cell < 28967937)
																return 4.73934;
															else
															{
																if(rsrp < -85)
																{
																	if(rsrp < -86.5)
																		return 12.2888;
																	else
																		return 10.4987;
																}
																else
																{
																	if(cqi < 5)
																		return 8.63931;
																	else
																		return 7.69971;
																}
															}
														}
														else
														{
															if(rsrp < -85.5)
																return 9.63855;
															else
															{
																if(rsrp < -82.5)
																	return 15.534;
																else
																	return 21.164;
															}
														}
													}
													else
													{
														if(sinr < 22.5)
														{
															if(cell < 29479936.5)
															{
																if(sinr < 20.5)
																{
																	if(cell < 29391104.5)
																	{
																		if(rsrq < -7.5)
																			return 7.217762;
																		else
																			return 6.2811;
																	}
																	else
																		return 4.33369;
																}
																else
																{
																	if(cell < 29391104.5)
																	{
																		if(payload < 0.75)
																			return 7.31261;
																		else
																			return 6.23053;
																	}
																	else
																	{
																		if(payload < 0.75)
																			return 7.5289566667;
																		else
																		{
																			if(velocity < 0.865)
																				return 10.4849;
																			else
																				return 8.30737;
																		}
																	}
																}
															}
															else
															{
																if(cqi < 11.5)
																{
																	if(payload < 0.75)
																		return 5.48697;
																	else
																		return 6.10687;
																}
																else
																{
																	if(rsrp < -86.5)
																		return 14.1343;
																	else
																	{
																		if(payload < 0.75)
																		{
																			if(sinr < 17)
																				return 8.51374875;
																			else
																			{
																				if(cell < 29741057)
																					return 7.60456;
																				else
																					return 6.5308566667;
																			}
																		}
																		else
																		{
																			if(rsrp < -84)
																				return 10.5402;
																			else
																				return 9.23788;
																		}
																	}
																}
															}
														}
														else
														{
															if(cell < 29391104.5)
															{
																if(sinr < 23.5)
																	return 18.2648;
																else
																{
																	if(rsrp < -82.5)
																	{
																		if(rsrq < -5.5)
																			return 9.00901;
																		else
																		{
																			if(sinr < 26)
																				return 7.37327;
																			else
																				return 7.937635;
																		}
																	}
																	else
																	{
																		if(sinr < 31.5)
																			return 10.3627;
																		else
																			return 11.7994;
																	}
																}
															}
															else
															{
																if(rsrp < -87)
																	return 9.85222;
																else
																{
																	if(rsrp < -78.5)
																	{
																		if(rsrp < -84)
																			return 8.23045;
																		else
																		{
																			if(rsrp < -81)
																				return 6.61704;
																			else
																				return 7.0922;
																		}
																	}
																	else
																	{
																		if(rsrq < -7)
																			return 9.72053;
																		else
																			return 8.3682;
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
											if(ta < 6)
											{
												if(sinr < 15)
												{
													if(sinr < 5.5)
														return 10.3627;
													else
													{
														if(ta < 1.5)
														{
															if(sinr < 9)
																return 9.62696;
															else
																return 10.4575;
														}
														else
															return 8.49008;
													}
												}
												else
												{
													if(payload < 0.75)
														return 14.1343;
													else
														return 9.76801;
												}
											}
											else
											{
												if(cell < 26912771)
												{
													if(sinr < 20)
														return 7.779406;
													else
														return 8.908864;
												}
												else
													return 6.0280289888;
											}
										}
									}
								}
							}
						}
						else
						{
							if(rsrq < -8.5)
								return 3.72787;
							else
							{
								if(ta < 4.5)
								{
									if(rsrp < -75.5)
									{
										if(cell < 28581122)
										{
											if(rsrq < -6.5)
												return 15.625;
											else
												return 9.379705;
										}
										else
											return 21.1082;
									}
									else
									{
										if(velocity < 7.955)
										{
											if(rsrp < -72.5)
												return 6.51466;
											else
											{
												if(cqi < 7.5)
													return 8.80088;
												else
												{
													if(rsrq < -7.5)
														return 11.6279;
													else
													{
														if(rsrp < -65.5)
														{
															if(rsrp < -70.5)
																return 12.4611;
															else
																return 14.4257666667;
														}
														else
															return 10.7527;
													}
												}
											}
										}
										else
										{
											if(cell < 27078657.5)
											{
												if(ta < 1.5)
												{
													if(sinr < 17.5)
														return 6.42055;
													else
													{
														if(cqi < 12.5)
														{
															if(rsrp < -73.5)
																return 10.7817;
															else
																return 9.23788;
														}
														else
														{
															if(payload < 0.75)
																return 8.31601;
															else
																return 7.46269;
														}
													}
												}
												else
												{
													if(cqi < 13.5)
														return 7.72947;
													else
														return 6.61704;
												}
											}
											else
											{
												if(rsrq < -6.5)
													return 7.16846;
												else
												{
													if(velocity < 14.065)
													{
														if(sinr < 22)
															return 11.0345;
														else
															return 11.4943;
													}
													else
														return 10.4485;
												}
											}
										}
									}
								}
								else
								{
									if(cell < 27771011.5)
									{
										if(sinr < 20.5)
											return 5.41775;
										else
										{
											if(ta < 6.5)
												return 6.3105133333;
											else
											{
												if(rsrp < -72.5)
													return 9.73236;
												else
												{
													if(payload < 0.75)
														return 7.6572033333;
													else
														return 8.29876;
												}
											}
										}
									}
									else
									{
										if(rsrp < -74)
										{
											if(sinr < 21.5)
												return 11.4286;
											else
												return 12.1766;
										}
										else
										{
											if(rsrp < -68.5)
												return 9.88875;
											else
												return 10.4302;
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
				if(cell < 33527556.5)
				{
					if(payload < 2.5)
					{
						if(ta < 1.5)
						{
							if(rsrp < -78.5)
							{
								if(rsrp < -87.5)
								{
									if(sinr < 19)
										return 16.178;
									else
										return 13.986;
								}
								else
								{
									if(velocity < 12.725)
									{
										if(velocity < 6.26)
											return 10.3159;
										else
											return 11.65765;
									}
									else
									{
										if(rsrq < -6.5)
											return 13.8408;
										else
										{
											if(sinr < 35)
											{
												if(rsrq < -5.5)
												{
													if(cqi < 13.5)
														return 8.47907;
													else
														return 6.91742;
												}
												else
													return 6.27451;
											}
											else
												return 9.34579;
										}
									}
								}
							}
							else
							{
								if(sinr < 13.5)
									return 25.5183;
								else
								{
									if(rsrq < -5.5)
										return 21.5054;
									else
									{
										if(rsrp < -76)
										{
											if(cell < 27078658)
												return 14.7194;
											else
												return 18.0191333333;
										}
										else
										{
											if(rsrp < -72.5)
												return 15.243625;
											else
												return 14.3113;
										}
									}
								}
							}
						}
						else
						{
							if(cqi < 14.5)
							{
								if(rsrp < -69.5)
								{
									if(rsrp < -87.5)
									{
										if(ta < 8)
										{
											if(velocity < 8.85)
												return 9.62696;
											else
												return 8.76232;
										}
										else
											return 7.17811;
									}
									else
									{
										if(rsrq < -5.5)
										{
											if(rsrq < -6.5)
											{
												if(velocity < 12.205)
												{
													if(sinr < 22.5)
													{
														if(rsrp < -85.5)
															return 9.78593;
														else
															return 8.7953075;
													}
													else
													{
														if(cqi < 10.5)
															return 13.9983;
														else
															return 10.3896;
													}
												}
												else
												{
													if(velocity < 13.575)
													{
														if(velocity < 13.48)
														{
															if(rsrq < -7.5)
																return 15.2964;
															else
																return 13.5823;
														}
														else
															return 15.534;
													}
													else
													{
														if(velocity < 22.015)
														{
															if(rsrp < -85)
																return 13.4116;
															else
															{
																if(sinr < 17)
																	return 13.4454;
																else
																	return 14.4928;
															}
														}
														else
															return 12.2324;
													}
												}
											}
											else
											{
												if(cqi < 11.5)
												{
													if(sinr < 18.5)
													{
														if(sinr < 14)
														{
															if(sinr < 9)
																return 11.0421;
															else
																return 13.0293;
														}
														else
														{
															if(rsrp < -81.5)
															{
																if(rsrp < -84.5)
																	return 9.29692;
																else
																	return 8.62534;
															}
															else
															{
																if(rsrp < -79.5)
																	return 12.7085;
																else
																	return 11.5108;
															}
														}
													}
													else
														return 17.7187;
												}
												else
												{
													if(cqi < 13)
													{
														if(f < 2232.5)
															return 8.20934;
														else
															return 9.84615;
													}
													else
														return 6.51997;
												}
											}
										}
										else
										{
											if(cell < 29652224.5)
											{
												if(cqi < 6.5)
													return 10.7023;
												else
												{
													if(ta < 5)
													{
														if(sinr < 25.5)
															return 13.6752;
														else
														{
															if(sinr < 29.5)
																return 12.987;
															else
																return 12.4127;
														}
													}
													else
													{
														if(rsrp < -77.5)
															return 13.4567;
														else
														{
															if(velocity < 9.625)
																return 14.9393;
															else
																return 14.3885;
														}
													}
												}
											}
											else
												return 10.596;
										}
									}
								}
								else
									return 22.5352;
							}
							else
							{
								if(sinr < 30)
								{
									if(sinr < 25)
									{
										if(rsrq < -5.5)
										{
											if(velocity < 4.31)
											{
												if(sinr < 20.5)
													return 11.2518;
												else
													return 9.86436;
											}
											else
											{
												if(cell < 29652225.5)
												{
													if(sinr < 15)
														return 9.59233;
													else
														return 7.0835;
												}
												else
													return 10.5402;
											}
										}
										else
											return 13.3111;
									}
									else
									{
										if(rsrq < -6)
											return 6.9808;
										else
											return 6.18956;
									}
								}
								else
								{
									if(rsrq < -6.5)
										return 15.0659;
									else
										return 14.0598;
								}
							}
						}
					}
					else
					{
						if(sinr < 10.5)
						{
							if(velocity < 15.205)
							{
								if(velocity < 13.28)
								{
									if(ta < 5.5)
									{
										if(rsrq < -8.5)
											return 10.5727;
										else
										{
											if(rsrq < -7.5)
											{
												if(velocity < 10.225)
												{
													if(f < 2232.5)
														return 13.4157;
													else
														return 12.766;
												}
												else
													return 11.988;
											}
											else
											{
												if(rsrq < -6.5)
													return 11.0727;
												else
													return 11.7073;
											}
										}
									}
									else
									{
										if(cqi < 8.5)
											return 11.2202;
										else
											return 8.93189;
									}
								}
								else
									return 7.01344;
							}
							else
							{
								if(cqi < 8)
									return 16.1074;
								else
									return 13.61784;
							}
						}
						else
						{
							if(f < 1342.5)
								return 7.28376;
							else
							{
								if(rsrp < -78.5)
								{
									if(ta < 14.5)
									{
										if(rsrp < -79.5)
										{
											if(sinr < 21.5)
											{
												if(ta < 1.5)
													return 10.0167;
												else
												{
													if(sinr < 14.5)
													{
														if(ta < 4.5)
														{
															if(velocity < 15.135)
															{
																if(cell < 27283715)
																	return 16.1834;
																else
																{
																	if(cqi < 10.5)
																		return 15.9151;
																	else
																	{
																		if(rsrp < -83.5)
																			return 16.3265;
																		else
																		{
																			if(velocity < 12.975)
																				return 12.1151;
																			else
																			{
																				if(cqi < 13)
																					return 12.8205;
																				else
																					return 13.363;
																			}
																		}
																	}
																}
															}
															else
																return 17.48;
														}
														else
														{
															if(sinr < 12.5)
																return 21.7786;
															else
																return 15.2964;
														}
													}
													else
													{
														if(sinr < 15.5)
														{
															if(ta < 6)
																return 11.6335;
															else
																return 12.4224;
														}
														else
														{
															if(rsrq < -8.5)
															{
																if(rsrp < -82.5)
																	return 12.7592;
																else
																	return 12.1335;
															}
															else
															{
																if(f < 2232.5)
																{
																	if(rsrp < -86)
																		return 16.5062;
																	else
																	{
																		if(velocity < 3.575)
																			return 15.3159;
																		else
																		{
																			if(sinr < 20.5)
																				return 14.83835;
																			else
																				return 13.9616;
																		}
																	}
																}
																else
																{
																	if(ta < 7.5)
																	{
																		if(velocity < 5.905)
																			return 11.5274;
																		else
																			return 12.8963;
																	}
																	else
																		return 14.9161;
																}
															}
														}
													}
												}
											}
											else
											{
												if(ta < 5.5)
												{
													if(cell < 29652226)
													{
														if(cell < 29391105.5)
														{
															if(rsrq < -4.5)
															{
																if(ta < 4.5)
																{
																	if(rsrp < -81.5)
																	{
																		if(rsrq < -5.5)
																			return 14.9719;
																		else
																			return 14.4144;
																	}
																	else
																		return 12.5392;
																}
																else
																{
																	if(cqi < 13.5)
																		return 15.9468;
																	else
																		return 14.7149;
																}
															}
															else
																return 12.959;
														}
														else
															return 15.8311;
													}
													else
														return 10.1523;
												}
												else
												{
													if(velocity < 8.705)
														return 11.846;
													else
														return 22.3418;
												}
											}
										}
										else
										{
											if(cell < 28581506)
												return 15.5448666667;
											else
											{
												if(cqi < 13)
													return 21.4669;
												else
													return 19.8347;
											}
										}
									}
									else
										return 21.4095;
								}
								else
								{
									if(velocity < 2.095)
									{
										if(rsrp < -75)
											return 24.4151;
										else
										{
											if(sinr < 33.5)
											{
												if(sinr < 23)
													return 13.440575;
												else
													return 15.8311;
											}
											else
												return 11.1888;
										}
									}
									else
									{
										if(rsrp < -70)
										{
											if(rsrq < -4.5)
											{
												if(rsrp < -71.5)
												{
													if(ta < 1.5)
													{
														if(cqi < 14)
															return 10.6619;
														else
															return 10.1523;
													}
													else
														return 9.7826533333;
												}
												else
													return 11.6959;
											}
											else
												return 14.8976;
										}
										else
											return 13.5939333333;
									}
								}
							}
						}
					}
				}
				else
					return 2.85648;
			}
		}
	}
	else
	{
		if(rsrp < -89.5)
		{
			if(payload < 6.5)
			{
				if(sinr < 9.5)
				{
					if(sinr < -2.5)
					{
						if(cell < 29649920.5)
						{
							if(cell < 28069506.5)
							{
								if(rsrp < -108.5)
								{
									if(payload < 5.5)
										return 2.20958;
									else
										return 2.91457;
								}
								else
								{
									if(payload < 4.5)
										return 1.80282;
									else
									{
										if(payload < 5.5)
										{
											if(cell < 27075202)
												return 4.75172;
											else
												return 4.19068;
										}
										else
											return 3.62784;
									}
								}
							}
							else
							{
								if(payload < 5)
									return 5.39084;
								else
									return 8.80896;
							}
						}
						else
						{
							if(sinr < -5)
								return 8.69723;
							else
								return 15.4989;
						}
					}
					else
					{
						if(velocity < 22.68)
						{
							if(velocity < 15.23)
							{
								if(rsrp < -95.5)
								{
									if(cell < 30588288.5)
									{
										if(sinr < 3.5)
										{
											if(rsrq < -9.5)
											{
												if(cell < 28369793.5)
												{
													if(velocity < 14.15)
													{
														if(sinr < 2)
														{
															if(rsrq < -10.5)
															{
																if(ta < 8.5)
																	return 8.97389;
																else
																{
																	if(sinr < 0.5)
																	{
																		if(sinr < -1)
																			return 6.53862;
																		else
																			return 5.75126;
																	}
																	else
																	{
																		if(rsrp < -102)
																			return 7.87789;
																		else
																			return 8.80572;
																	}
																}
															}
															else
																return 4.65008;
														}
														else
															return 5.39229;
													}
													else
													{
														if(cqi < 6)
															return 10.6054;
														else
															return 9.78394;
													}
												}
												else
												{
													if(rsrq < -10.5)
														return 6.064434;
													else
														return 2.66436;
												}
											}
											else
											{
												if(cqi < 6.5)
												{
													if(cqi < 5.5)
													{
														if(rsrp < -99.5)
															return 11.76465;
														else
															return 11.0701;
													}
													else
														return 13.7127;
												}
												else
												{
													if(rsrq < -8.5)
													{
														if(ta < 8)
															return 2.9848;
														else
															return 6.71987;
													}
													else
														return 11.3026;
												}
											}
										}
										else
										{
											if(cell < 28365057)
											{
												if(rsrp < -107.5)
													return 14.218;
												else
												{
													if(ta < 8.5)
													{
														if(cqi < 8.5)
														{
															if(sinr < 7.5)
															{
																if(payload < 5.5)
																{
																	if(rsrp < -101.5)
																		return 10.4987;
																	else
																		return 9.90099;
																}
																else
																{
																	if(rsrq < -7.5)
																		return 8.73045;
																	else
																		return 6.73873;
																}
															}
															else
																return 14.3756;
														}
														else
															return 4.31965;
													}
													else
													{
														if(velocity < 8.87)
															return 2.96099;
														else
														{
															if(cqi < 12)
															{
																if(velocity < 14.04)
																	return 5.77201;
																else
																	return 6.92521;
															}
															else
																return 5.42152;
														}
													}
												}
											}
											else
											{
												if(ta < 7.5)
												{
													if(cqi < 10)
													{
														if(cell < 29652225)
														{
															if(cqi < 7)
																return 4.79832;
															else
															{
																if(rsrp < -97.5)
																	return 8.79846;
																else
																	return 7.98403;
															}
														}
														else
														{
															if(sinr < 5.5)
																return 10.2204;
															else
																return 12.5274;
														}
													}
													else
													{
														if(rsrp < -100.5)
															return 12.1243;
														else
															return 14.8754;
													}
												}
												else
												{
													if(sinr < 5.5)
													{
														if(payload < 4.5)
															return 18.3276;
														else
														{
															if(rsrp < -96.5)
																return 12.7755;
															else
																return 16.684;
														}
													}
													else
													{
														if(ta < 8.5)
															return 15.3374;
														else
														{
															if(ta < 10.5)
																return 20.0669;
															else
																return 16.1616;
														}
													}
												}
											}
										}
									}
									else
									{
										if(payload < 5)
											return 15.7869;
										else
											return 21.9178;
									}
								}
								else
								{
									if(cell < 27164291.5)
									{
										if(rsrq < -7.5)
										{
											if(velocity < 6.59)
												return 15.9257;
											else
												return 17.3442;
										}
										else
										{
											if(payload < 5)
												return 7.13171;
											else
												return 17.2105;
										}
									}
									else
									{
										if(velocity < 11.87)
										{
											if(cqi < 5.5)
											{
												if(rsrq < -11.5)
													return 15.3895;
												else
												{
													if(ta < 6.5)
														return 10.2324;
													else
														return 12.3077;
												}
											}
											else
											{
												if(rsrq < -6.5)
												{
													if(cqi < 13)
													{
														if(payload < 4.5)
														{
															if(velocity < 10.36)
																return 13.3445;
															else
																return 10.0313;
														}
														else
														{
															if(velocity < 6.695)
															{
																if(payload < 5.5)
																	return 11.1452;
																else
																{
																	if(rsrp < -94)
																		return 9.96471;
																	else
																		return 10.43605;
																}
															}
															else
															{
																if(sinr < 6)
																	return 9.18485;
																else
																	return 10.3896;
															}
														}
													}
													else
														return 7.68197;
												}
												else
													return 6.80079;
											}
										}
										else
										{
											if(rsrq < -7)
											{
												if(ta < 8)
													return 16.0385;
												else
													return 17.0648;
											}
											else
												return 12.6622;
										}
									}
								}
							}
							else
							{
								if(cell < 28881152.5)
								{
									if(rsrq < -9.5)
										return 8.93356;
									else
									{
										if(cell < 28369792)
										{
											if(sinr < 6)
											{
												if(rsrp < -99)
													return 13.197;
												else
													return 15.6709;
											}
											else
												return 12.5078;
										}
										else
										{
											if(payload < 5)
												return 11.8299;
											else
												return 10.5727;
										}
									}
								}
								else
								{
									if(sinr < 2)
									{
										if(sinr < 0.5)
											return 17.5889;
										else
											return 16.5289;
									}
									else
										return 10.6833;
								}
							}
						}
						else
						{
							if(velocity < 33.765)
							{
								if(sinr < 6)
								{
									if(ta < 11.5)
									{
										if(payload < 4.5)
											return 5.46728;
										else
											return 5.96036;
									}
									else
									{
										if(cqi < 5)
											return 0.759503;
										else
											return 2.504095;
									}
								}
								else
								{
									if(rsrp < -98)
										return 9.215715;
									else
									{
										if(sinr < 8)
											return 6.69456;
										else
											return 7.50469;
									}
								}
							}
							else
							{
								if(rsrq < -7.5)
									return 16.7926;
								else
									return 16.0578;
							}
						}
					}
				}
				else
				{
					if(rsrq < -10.5)
					{
						if(payload < 4.5)
							return 1.43132;
						else
							return 8.832945;
					}
					else
					{
						if(velocity < 33.22)
						{
							if(velocity < 11.555)
							{
								if(f < 2232.5)
								{
									if(velocity < 10.39)
									{
										if(sinr < 20.5)
										{
											if(velocity < 5.795)
											{
												if(cqi < 7.5)
												{
													if(cell < 27977089)
														return 13.5916;
													else
														return 8.75593;
												}
												else
												{
													if(velocity < 2.2)
													{
														if(cell < 29479936.5)
														{
															if(rsrp < -100)
																return 18.3346;
															else
															{
																if(rsrp < -94.5)
																{
																	if(ta < 5.5)
																		return 9.89895;
																	else
																		return 12.551;
																}
																else
																{
																	if(ta < 7)
																	{
																		if(rsrp < -92)
																			return 15.0489;
																		else
																			return 16.4103;
																	}
																	else
																		return 11.3411;
																}
															}
														}
														else
														{
															if(rsrq < -9.5)
																return 14.3062;
															else
																return 19.2678;
														}
													}
													else
														return 8.67993;
												}
											}
											else
											{
												if(velocity < 8.885)
												{
													if(payload < 5)
													{
														if(ta < 8)
															return 15.6403;
														else
															return 17.2507;
													}
													else
													{
														if(velocity < 8.495)
															return 18.3276;
														else
															return 20.3562;
													}
												}
												else
												{
													if(rsrq < -6.5)
													{
														if(velocity < 9.715)
															return 14.7331;
														else
															return 14.0647;
													}
													else
													{
														if(payload < 5)
															return 14.7126;
														else
															return 10.7623;
													}
												}
											}
										}
										else
										{
											if(ta < 8)
											{
												if(velocity < 9.045)
													return 10.2177;
												else
													return 6.30045;
											}
											else
												return 15.5794;
										}
									}
									else
									{
										if(rsrq < -7.5)
											return 15.59305;
										else
										{
											if(rsrp < -94)
												return 15.9046;
											else
											{
												if(velocity < 11.09)
													return 21.4957;
												else
												{
													if(cell < 27771523)
														return 17.3724;
													else
														return 16.44035;
												}
											}
										}
									}
								}
								else
								{
									if(cqi < 8.5)
									{
										if(rsrp < -93.5)
											return 22.0629;
										else
											return 21.0896;
									}
									else
									{
										if(sinr < 16.5)
										{
											if(rsrq < -6.5)
												return 17.567;
											else
											{
												if(payload < 5)
													return 14.9743;
												else
												{
													if(velocity < 5.55)
														return 12.0391;
													else
														return 13.0933;
												}
											}
										}
										else
										{
											if(rsrq < -5.5)
											{
												if(payload < 5.5)
												{
													if(rsrp < -90.5)
													{
														if(cqi < 12)
															return 15.5415;
														else
															return 16.6528;
													}
													else
														return 18.8235;
												}
												else
													return 22.9117;
											}
											else
												return 10.1678;
										}
									}
								}
							}
							else
							{
								if(cqi < 10.5)
								{
									if(velocity < 13.165)
									{
										if(sinr < 13.5)
										{
											if(ta < 5)
											{
												if(rsrq < -8)
													return 10.4918;
												else
												{
													if(payload < 5.5)
														return 11.2076;
													else
														return 11.7561;
												}
											}
											else
												return 8.67444;
										}
										else
										{
											if(payload < 5.5)
											{
												if(ta < 5.5)
													return 8.54884;
												else
													return 7.58294;
											}
											else
												return 5.70207;
										}
									}
									else
									{
										if(velocity < 13.335)
											return 21.4018;
										else
										{
											if(rsrp < -99.5)
											{
												if(cqi < 7.5)
													return 8.4063;
												else
													return 5.42594;
											}
											else
											{
												if(ta < 4.5)
												{
													if(sinr < 16.5)
														return 14.8252;
													else
														return 15.9098;
												}
												else
												{
													if(cell < 28071169.5)
													{
														if(rsrp < -95)
															return 10.1394;
														else
															return 6.79406;
													}
													else
														return 13.0373333333;
												}
											}
										}
									}
								}
								else
								{
									if(cell < 28071555.5)
									{
										if(velocity < 18.005)
											return 21.6802;
										else
										{
											if(payload < 4.5)
												return 19.059;
											else
												return 18.3824;
										}
									}
									else
									{
										if(ta < 8.5)
										{
											if(payload < 5)
												return 15.2891;
											else
												return 16.455325;
										}
										else
										{
											if(payload < 4.5)
												return 10.0883;
											else
											{
												if(rsrp < -91.5)
												{
													if(rsrp < -96.5)
														return 14.9220666667;
													else
														return 16.3132;
												}
												else
													return 12.3724;
											}
										}
									}
								}
							}
						}
						else
						{
							if(payload < 5.5)
								return 20.0401;
							else
								return 24.4275;
						}
					}
				}
			}
			else
			{
				if(rsrq < -7.5)
				{
					if(f < 2232.5)
					{
						if(rsrp < -100.5)
						{
							if(rsrp < -108.5)
							{
								if(rsrq < -9)
									return 21.92012;
								else
									return 8.82029;
							}
							else
							{
								if(sinr < 0.5)
								{
									if(rsrq < -11.5)
									{
										if(velocity < 13.875)
										{
											if(cqi < 4.5)
												return 4.8048;
											else
											{
												if(rsrp < -101.5)
												{
													if(velocity < 3.79)
														return 9.28613;
													else
													{
														if(cell < 29432065.5)
															return 10.2626;
														else
															return 10.8401;
													}
												}
												else
													return 8.73771;
											}
										}
										else
											return 14.3777666667;
									}
									else
									{
										if(payload < 8.5)
											return 19.0693285714;
										else
										{
											if(payload < 9.5)
											{
												if(rsrp < -103.5)
													return 11.7917;
												else
													return 12.4935;
											}
											else
											{
												if(sinr < -2.5)
													return 18.1324;
												else
													return 15.5854;
											}
										}
									}
								}
								else
								{
									if(velocity < 14.64)
									{
										if(rsrp < -105.5)
										{
											if(rsrq < -8.5)
											{
												if(payload < 7.5)
													return 7.61905;
												else
												{
													if(sinr < 2.5)
														return 9.5139;
													else
														return 10.6454;
												}
											}
											else
												return 6.41952;
										}
										else
										{
											if(cqi < 6.5)
											{
												if(sinr < 4.5)
												{
													if(rsrq < -12)
														return 11.9092;
													else
													{
														if(rsrq < -10.5)
															return 8.88889;
														else
															return 9.62034;
													}
												}
												else
												{
													if(ta < 12.5)
														return 14.9659;
													else
														return 13.5044;
												}
											}
											else
											{
												if(sinr < 8.5)
												{
													if(ta < 8.5)
													{
														if(ta < 6.5)
														{
															if(sinr < 4.5)
																return 7.02371;
															else
															{
																if(cqi < 9)
																	return 9.264302;
																else
																	return 8.14747;
															}
														}
														else
															return 11.269;
													}
													else
														return 4.78813;
												}
												else
												{
													if(ta < 8)
													{
														if(rsrp < -103)
															return 12.6183;
														else
															return 11.17455;
													}
													else
													{
														if(velocity < 11.55)
															return 17.4021;
														else
															return 11.4637;
													}
												}
											}
										}
									}
									else
									{
										if(cell < 30425088.5)
										{
											if(sinr < 5)
											{
												if(payload < 8)
													return 13.4389;
												else
												{
													if(velocity < 18.045)
														return 14.5426;
													else
														return 16.5555;
												}
											}
											else
												return 19.9336;
										}
										else
											return 10.9111;
									}
								}
							}
						}
						else
						{
							if(ta < 1.5)
							{
								if(payload < 9)
									return 7.42743;
								else
								{
									else
			}