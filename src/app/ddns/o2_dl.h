#ifndef O2_DL
#define O2_DL

float o2_dl_tree_0(float payload, float rsrp, float rsrq, float sinr, float cqi, float ta, float velocity, float cell, float f)
{
	if(sinr < 7.5)
	{
		if(rsrq < -11.5)
		{
			if(ta < 4.5)
			{
				if(cqi < 5.5)
				{
					if(velocity < 4.49)
						return 10.4952;
					else
					{
						if(payload < 8.5)
						{
							if(rsrq < -17)
							{
								if(rsrp < -93.5)
									return 3.46921;
								else
									return 5.11182;
							}
							else
							{
								if(velocity < 11.52)
								{
									if(sinr < -6.5)
										return 2.15876;
									else
										return 1.217544;
								}
								else
								{
									if(rsrq < -14.5)
										return 1.89678;
									else
									{
										if(ta < 3.5)
										{
											if(rsrp < -96)
												return 3.3705666667;
											else
											{
												if(sinr < -0.5)
													return 2.38403;
												else
													return 3.04878;
											}
										}
										else
											return 3.60036;
									}
								}
							}
						}
						else
						{
							if(velocity < 13.46)
								return 4.46453;
							else
								return 8.78156;
						}
					}
				}
				else
				{
					if(payload < 4.5)
					{
						if(velocity < 13.54)
						{
							if(sinr < -2.5)
							{
								if(payload < 0.75)
									return 2.15517;
								else
									return 0.968992;
							}
							else
							{
								if(f < 1347.5)
									return 2.72294;
								else
								{
									if(sinr < -1.5)
									{
										if(cqi < 6.5)
											return 3.0095;
										else
											return 4.5977;
									}
									else
									{
										if(rsrp < -104)
											return 6.23539;
										else
											return 4.34489;
									}
								}
							}
						}
						else
						{
							if(payload < 3)
								return 6.96561;
							else
								return 5.80131;
						}
					}
					else
					{
						if(ta < 0.5)
							return 16.4002;
						else
						{
							if(rsrp < -92.5)
							{
								if(cqi < 9)
								{
									if(ta < 3.5)
									{
										if(cqi < 7.5)
										{
											if(ta < 1.5)
												return 2.29456;
											else
												return 4.10487;
										}
										else
											return 5.7496;
									}
									else
									{
										if(rsrq < -14.5)
											return 12.7029;
										else
											return 4.99237;
									}
								}
								else
									return 10.5346;
							}
							else
							{
								if(sinr < -0.5)
									return 22.0521;
								else
								{
									if(velocity < 16.2)
									{
										if(rsrq < -12.5)
										{
											if(rsrp < -77.5)
											{
												if(sinr < 2)
													return 9.62034;
												else
													return 6.88666;
											}
											else
												return 3.34808;
										}
										else
										{
											if(cqi < 8.5)
											{
												if(payload < 7.5)
													return 11.7945333333;
												else
													return 9.13764;
											}
											else
												return 8.780855;
										}
									}
									else
										return 16.0275;
								}
							}
						}
					}
				}
			}
			else
			{
				if(cell < 14345742)
				{
					if(velocity < 25.83)
					{
						if(cell < 13410696.5)
						{
							if(payload < 1.5)
							{
								if(velocity < 14.975)
								{
									if(f < 2262.5)
									{
										if(cell < 12909594)
										{
											if(velocity < 9.62)
											{
												if(rsrp < -84)
												{
													if(velocity < 1.855)
														return 1.21914;
													else
														return 1.8503366667;
												}
												else
													return 2.95203;
											}
											else
											{
												if(velocity < 11.805)
													return 0.3356396;
												else
												{
													if(velocity < 13.47)
													{
														if(velocity < 12.64)
															return 0.824997;
														else
															return 2.16803;
													}
													else
														return 0.6499188571;
												}
											}
										}
										else
										{
											if(cqi < 8.5)
											{
												if(payload < 0.75)
													return 4.28266;
												else
													return 3.77003;
											}
											else
												return 2.10637;
										}
									}
									else
										return 3.7123;
								}
								else
								{
									if(f < 1347.5)
									{
										if(cqi < 5.5)
											return 0.378025;
										else
											return 2.30017;
									}
									else
									{
										if(cell < 12976538)
										{
											if(cqi < 6)
												return 6.34417;
											else
												return 9.66184;
										}
										else
										{
											if(rsrq < -16)
												return 1.04248;
											else
												return 2.30017;
										}
									}
								}
							}
							else
							{
								if(f < 1347.5)
								{
									if(rsrq < -12.5)
									{
										if(payload < 5.5)
										{
											if(cqi < 5.5)
											{
												if(sinr < 1)
												{
													if(cell < 12901505.5)
														return 0.7091623333;
													else
														return 1.199334;
												}
												else
													return 1.61437;
											}
											else
												return 0.4489224124;
										}
										else
										{
											if(ta < 40.5)
											{
												if(velocity < 14.915)
												{
													if(payload < 8.5)
														return 1.42835;
													else
														return 1.8111213402;
												}
												else
													return 1.078554;
											}
											else
												return 2.98675;
										}
									}
									else
										return 3.73832;
								}
								else
								{
									if(cqi < 5.5)
									{
										if(cell < 13223956)
										{
											if(velocity < 3.945)
											{
												if(rsrp < -94)
													return 1.8583;
												else
													return 3.75235;
											}
											else
											{
												if(ta < 27)
												{
													if(sinr < 2.5)
													{
														if(sinr < -2)
															return 8.32466;
														else
															return 9.44882;
													}
													else
														return 6.16491;
												}
												else
												{
													if(payload < 7.5)
														return 2.98675;
													else
														return 1.57439;
												}
											}
										}
										else
											return 11.4313;
									}
									else
									{
										if(rsrp < -94.5)
										{
											if(ta < 28)
											{
												if(cell < 12909467)
												{
													if(payload < 7)
														return 1.961595;
													else
														return 3.79381;
												}
												else
												{
													if(rsrp < -95.5)
														return 1.56413;
													else
														return 2.69209;
												}
											}
											else
												return 0.144851;
										}
										else
										{
											if(ta < 10)
											{
												if(sinr < -1)
													return 10.6242;
												else
												{
													if(rsrq < -12.5)
														return 4.2391633333;
													else
													{
														if(cqi < 10.5)
														{
															if(payload < 5)
															{
																if(cqi < 8.5)
																	return 6.1671266667;
																else
																	return 2.97508;
															}
															else
															{
																if(payload < 7)
																{
																	if(cell < 12909594)
																		return 6.18397;
																	else
																		return 8.60369;
																}
																else
																{
																	if(payload < 9)
																		return 6.47511;
																	else
																	{
																		if(velocity < 9.72)
																			return 5.84924;
																		else
																			return 6.28931;
																	}
																}
															}
														}
														else
															return 9.19118;
													}
												}
											}
											else
											{
												if(ta < 14.5)
												{
													if(sinr < 3)
														return 1.35697;
													else
													{
														if(ta < 13.5)
															return 3.2113833333;
														else
															return 2.58672;
													}
												}
												else
												{
													if(ta < 15.5)
													{
														if(rsrp < -93.5)
															return 5.86941;
														else
															return 3.99002;
													}
													else
													{
														if(payload < 6)
														{
															if(rsrq < -13)
																return 2.12837;
															else
															{
																if(rsrp < -92.5)
																	return 2.56369;
																else
																	return 3.11102;
															}
														}
														else
															return 4.37009;
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
								if(cell < 13553922)
								{
									if(rsrp < -95.5)
									{
										if(payload < 3.5)
										{
											if(rsrq < -17.5)
											{
												if(rsrp < -104.5)
													return 0.6367712;
												else
												{
													if(ta < 10.5)
														return 2.58901;
													else
													{
														if(rsrp < -98.5)
														{
															if(ta < 11.5)
																return 1.46466;
															else
																return 0.6915876667;
														}
														else
															return 2.34719;
													}
												}
											}
											else
											{
												if(sinr < -3.5)
												{
													if(payload < 2.5)
													{
														if(cell < 13416986.5)
														{
															if(rsrp < -101)
																return 0.7030332;
															else
																return 1.198402;
														}
														else
														{
															if(rsrp < -98)
																return 0.3635812308;
															else
															{
																if(sinr < -7)
																	return 0.499735;
																else
																	return 1.60032;
															}
														}
													}
													else
													{
														if(cqi < 3)
															return 0.349467;
														else
														{
															if(ta < 7.5)
																return 1.23008;
															else
															{
																if(velocity < 10.485)
																	return 1.4366166667;
																else
																	return 1.87999;
															}
														}
													}
												}
												else
												{
													if(payload < 1.5)
														return 0.2327845217;
													else
														return 0.5375494783;
												}
											}
										}
										else
										{
											if(sinr < 1.5)
											{
												if(payload < 9.5)
												{
													if(ta < 17.5)
													{
														if(rsrp < -108)
															return 3.18562;
														else
														{
															if(rsrq < -13.5)
															{
																if(ta < 16.5)
																{
																	if(ta < 11)
																	{
																		if(payload < 7.5)
																		{
																			if(rsrp < -103.5)
																				return 0.5996028182;
																			else
																			{
																				if(sinr < -2.5)
																				{
																					if(rsrp < -101.5)
																					{
																						if(payload < 4.5)
																							return 0.932021;
																						else
																						{
																							if(cqi < 4.5)
																								return 1.49934;
																							else
																								return 2.48685;
																						}
																					}
																					else
																					{
																						if(rsrq < -15.5)
																							return 0.8488826;
																						else
																							return 0.345108;
																					}
																				}
																				else
																				{
																					if(sinr < -1.5)
																						return 0.28875525;
																					else
																						return 1.13376;
																				}
																			}
																		}
																		else
																		{
																			if(velocity < 5.665)
																			{
																				if(rsrq < -14.5)
																				{
																					if(rsrp < -103.5)
																						return 1.68443;
																					else
																						return 2.51151;
																				}
																				else
																					return 0.514234;
																			}
																			else
																			{
																				if(rsrp < -103)
																					return 1.082398;
																				else
																					return 0.407641;
																			}
																		}
																	}
																	else
																	{
																		if(rsrq < -14.5)
																		{
																			if(sinr < -7.5)
																				return 1.82108;
																			else
																			{
																				if(ta < 15)
																				{
																					if(sinr < -1.5)
																					{
																						if(velocity < 5.865)
																						{
																							if(rsrp < -100)
																								return 1.50028;
																							else
																							{
																								if(payload < 7.5)
																									return 0.427255;
																								else
																									return 0.908403;
																							}
																						}
																						else
																							return 0.5025134;
																					}
																					else
																						return 1.74102;
																				}
																				else
																				{
																					if(velocity < 18.385)
																						return 1.01598725;
																					else
																						return 1.6647;
																				}
																			}
																		}
																		else
																			return 4.29969;
																	}
																}
																else
																	return 3.61918;
															}
															else
															{
																if(payload < 5)
																{
																	if(rsrp < -100)
																	{
																		if(rsrp < -104)
																			return 2.41929;
																		else
																			return 1.5406;
																	}
																	else
																	{
																		if(cell < 13422235)
																		{
																			if(cqi < 6.5)
																				return 0.826169;
																			else
																				return 0.39629;
																		}
																		else
																			return 1.15482;
																	}
																}
																else
																{
																	if(rsrp < -97)
																	{
																		if(velocity < 12.275)
																		{
																			if(payload < 6.5)
																				return 1.0319;
																			else
																				return 1.50126;
																		}
																		else
																		{
																			if(velocity < 13.16)
																				return 3.46771;
																			else
																				return 0.598745;
																		}
																	}
																	else
																		return 4.39009;
																}
															}
														}
													}
													else
													{
														if(rsrp < -106.5)
															return 5.36283;
														else
														{
															if(payload < 4.5)
																return 0.924241;
															else
																return 2.7014666667;
														}
													}
												}
												else
												{
													if(velocity < 11.48)
													{
														if(ta < 14)
														{
															if(ta < 9.5)
																return 2.5547425;
															else
																return 2.01476;
														}
														else
															return 3.41384;
													}
													else
														return 1.07459;
												}
											}
											else
											{
												if(payload < 9.5)
												{
													if(payload < 6.5)
														return 1.33537;
													else
													{
														if(sinr < 3.5)
														{
															if(rsrp < -97.5)
																return 2.5542433333;
															else
																return 1.87059;
														}
														else
															return 3.25998;
													}
												}
												else
													return 5.65411;
											}
										}
									}
									else
									{
										if(velocity < 13.23)
										{
											if(payload < 6.5)
											{
												if(payload < 5.5)
												{
													if(rsrp < -94.5)
														return 0.254522;
													else
													{
														if(rsrp < -92)
															return 3.16207;
														else
														{
															if(payload < 3.5)
																return 2.56492;
															else
																return 2.07308;
														}
													}
												}
												else
													return 5.11727;
											}
											else
											{
												if(ta < 9.5)
													return 1.50875;
												else
													return 0.8479646667;
											}
										}
										else
										{
											if(payload < 6)
												return 2.32545;
											else
												return 4.45541;
										}
									}
								}
								else
								{
									if(f < 2262.5)
									{
										if(ta < 37.5)
										{
											if(cqi < 2.5)
											{
												if(payload < 3)
													return 7.36648;
												else
												{
													if(rsrp < -106)
														return 3.96488;
													else
														return 2.98795;
												}
											}
											else
											{
												if(f < 1347.5)
												{
													if(payload < 2.5)
													{
														if(rsrq < -13.5)
														{
															if(rsrp < -88)
															{
																if(ta < 10)
																{
																	if(velocity < 8.2)
																		return 2.35989;
																	else
																		return 1.66321;
																}
																else
																	return 0.376295;
															}
															else
																return 2.67559;
														}
														else
															return 2.19781;
													}
													else
													{
														if(ta < 32.5)
														{
															if(sinr < 0.5)
															{
																if(ta < 9.5)
																{
																	if(cell < 14113806)
																	{
																		if(rsrq < -13.5)
																			return 1.47336;
																		else
																			return 3.67623;
																	}
																	else
																		return 1.1705266667;
																}
																else
																{
																	if(ta < 23.5)
																	{
																		if(rsrp < -98)
																		{
																			if(payload < 5.5)
																				return 0.589198;
																			else
																				return 0.9077706;
																		}
																		else
																		{
																			if(cqi < 4.5)
																				return 1.55628;
																			else
																				return 1.2163501667;
																		}
																	}
																	else
																	{
																		if(rsrp < -105.5)
																			return 3.64834;
																		else
																		{
																			if(rsrq < -14)
																			{
																				if(payload < 8.5)
																					return 0.994106;
																				else
																					return 1.63142;
																			}
																			else
																			{
																				if(payload < 5.5)
																					return 0.734147;
																				else
																					return 1.18769;
																			}
																		}
																	}
																}
															}
															else
																return 5.96199;
														}
														else
														{
															if(velocity < 19.67)
															{
																if(velocity < 15.105)
																{
																	if(payload < 5.5)
																		return 5.47196;
																	else
																		return 3.28426;
																}
																else
																	return 6.76247;
															}
															else
																return 3.37517;
														}
													}
												}
												else
												{
													if(sinr < -7.5)
													{
														if(sinr < -8.5)
															return 0.4917295;
														else
														{
															if(rsrq < -15)
																return 1.87683;
															else
																return 1.20355;
														}
													}
													else
													{
														if(sinr < -0.5)
														{
															if(velocity < 6.72)
															{
																if(rsrq < -15.5)
																	return 2.07182;
																else
																{
																	if(velocity < 2.275)
																		return 5.89781;
																	else
																		return 6.76819;
																}
															}
															else
															{
																if(rsrp < -101)
																{
																	if(velocity < 13.42)
																		return 3.51463;
																	else
																		return 4.2929933333;
																}
																else
																{
																	if(sinr < -3)
																	{
																		if(payload < 5.5)
																			return 1.10448;
																		else
																		{
																			if(ta < 13)
																				return 3.65714;
																			else
																				return 2.1098;
																		}
																	}
																	else
																	{
																		if(rsrp < -94.5)
																			return 1.435895;
																		else
																			return 2.26078;
																	}
																}
															}
														}
														else
														{
															if(rsrp < -90)
															{
																if(payload < 0.75)
																	return 0.490497;
																else
																	return 1.5449688889;
															}
															else
															{
																if(rsrp < -86)
																	return 3.618272;
																else
																	return 5.96199;
															}
														}
													}
												}
											}
										}
										else
											return 8.53789;
									}
									else
										return 8.7098173874;
								}
							}
							else
							{
								if(rsrp < -109.5)
									return 7.38007;
								else
								{
									if(cell < 13682703)
									{
										if(cqi < 6.5)
										{
											if(payload < 4.5)
											{
												if(rsrp < -105)
													return 0.047809;
												else
												{
													if(cqi < 5.5)
														return 1.3216075;
													else
													{
														if(cell < 13416986.5)
														{
															if(rsrp < -99.5)
																return 1.15699;
															else
																return 0.105438;
														}
														else
															return 0.885152;
													}
												}
											}
											else
											{
												if(cell < 13416974.5)
													return 0.5931206667;
												else
												{
													if(rsrp < -96.5)
													{
														if(payload < 7)
														{
															if(velocity < 5.415)
																return 2.72665;
															else
																return 4.06339;
														}
														else
														{
															if(velocity < 6.95)
																return 5.19106;
															else
																return 3.54296;
														}
													}
													else
													{
														if(cqi < 5.5)
															return 1.1572133333;
														else
														{
															if(payload < 9)
															{
																if(ta < 6.5)
																	return 2.56363;
																else
																	return 3.93237;
															}
															else
															{
																if(ta < 8.5)
																	return 3.29584;
																else
																	return 1.07152;
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
												if(velocity < 5.885)
													return 1.48412;
												else
												{
													if(payload < 2.5)
													{
														if(sinr < 0)
															return 0.337709;
														else
															return 0.7310765;
													}
													else
														return 1.43747;
												}
											}
											else
											{
												if(ta < 7.5)
												{
													if(rsrp < -96)
														return 0.898806;
													else
														return 0.3677583333;
												}
												else
												{
													if(sinr < 3)
													{
														if(rsrp < -97.5)
															return 1.85744;
														else
															return 1.28659;
													}
													else
													{
														if(payload < 1.25)
															return 0.127105;
														else
															return 0.6748385;
													}
												}
											}
										}
									}
									else
									{
										if(velocity < 9.715)
										{
											if(sinr < -0.5)
											{
												if(velocity < 9.15)
												{
													if(f < 1347.5)
														return 0.345688;
													else
													{
														if(velocity < 4.415)
															return 1.78653;
														else
															return 0.932727;
													}
												}
												else
													return 2.56781;
											}
											else
											{
												if(ta < 11)
												{
													if(sinr < 2)
														return 12.135;
													else
													{
														if(cqi < 10.5)
														{
															if(rsrp < -88.5)
																return 2.99775;
															else
																return 4.25509;
														}
														else
															return 1.39616;
													}
												}
												else
												{
													if(cell < 13884289)
														return 0.993049;
													else
														return 0.438118;
												}
											}
										}
										else
										{
											if(cell < 13884418)
											{
												if(cqi < 5.5)
													return 2.82919;
												else
												{
													if(cqi < 8)
													{
														if(ta < 15)
														{
															if(cell < 13884302)
															{
																if(cell < 13884186)
																{
																	if(cqi < 6.5)
																	{
																		if(sinr < 2)
																			return 6.17257;
																		else
																			return 5.22278;
																	}
																	else
																	{
																		if(ta < 12.5)
																			return 6.02864;
																		else
																			return 6.58436;
																	}
																}
																else
																	return 6.73212;
															}
															else
															{
																if(payload < 6)
																	return 6.05373;
																else
																	return 4.5865;
															}
														}
														else
															return 3.04559;
													}
													else
													{
														if(payload < 0.55)
														{
															if(ta < 11.5)
																return 5.47947;
															else
																return 4.16668;
														}
														else
														{
															if(cqi < 9.5)
																return 1.43241;
															else
																return 3.75029;
														}
													}
												}
											}
											else
											{
												if(f < 1765)
													return 1.07829;
												else
													return 1.74293;
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if(cell < 14093071)
						{
							if(payload < 9)
							{
								if(velocity < 35.41)
								{
									if(ta < 29.5)
									{
										if(ta < 16.5)
										{
											if(rsrq < -16)
											{
												if(rsrq < -18.5)
													return 1.98376;
												else
													return 2.79086;
											}
											else
											{
												if(ta < 9.5)
													return 3.95788;
												else
												{
													if(velocity < 35.085)
														return 3.4835;
													else
														return 3.98059;
												}
											}
										}
										else
										{
											if(rsrq < -13)
											{
												if(rsrp < -88)
													return 4.675765;
												else
													return 4.10258;
											}
											else
												return 8.4674;
										}
									}
									else
									{
										if(payload < 3.05)
											return 0.14906;
										else
											return 2.08252;
									}
								}
								else
								{
									if(rsrp < -97)
										return 3.69735;
									else
									{
										if(ta < 18.5)
											return 8.7167633333;
										else
											return 6.86342;
									}
								}
							}
							else
							{
								if(ta < 13)
								{
									if(rsrp < -99.5)
										return 16.2767;
									else
										return 19.6223;
								}
								else
									return 4.96617;
							}
						}
						else
							return 13.8498;
					}
				}
				else
				{
					if(payload < 8.5)
						return 11.5345;
					else
						return 18.8813;
				}
			}
		}
		else
		{
			if(rsrq < -8.5)
			{
				if(velocity < 38.125)
				{
					if(sinr < 2.5)
					{
						if(payload < 4.5)
						{
							if(sinr < 1.5)
							{
								if(cell < 13884162.5)
								{
									if(cell < 13410695.5)
									{
										if(cqi < 7.5)
										{
											if(payload < 0.75)
											{
												if(payload < 0.3)
													return 1.90932;
												else
													return 6.0241;
											}
											else
											{
												if(velocity < 12.91)
												{
													if(velocity < 1.185)
														return 0.986862;
													else
														return 1.6414833333;
												}
												else
												{
													if(cell < 12903194.5)
														return 1.65529;
													else
														return 3.80105;
												}
											}
										}
										else
										{
											if(payload < 0.55)
												return 6.95655;
											else
												return 5.6690866667;
										}
									}
									else
									{
										if(rsrp < -92.5)
										{
											if(velocity < 14.395)
											{
												if(cell < 13542402.5)
												{
													if(payload < 0.55)
														return 0.284496;
													else
														return 0.8167036667;
												}
												else
												{
													if(f < 1347.5)
														return 1.0483333333;
													else
														return 1.55172;
												}
											}
											else
												return 2.19238;
										}
										else
										{
											if(cqi < 6.5)
											{
												if(rsrq < -9.5)
													return 1.70916;
												else
													return 2.11361;
											}
											else
											{
												if(payload < 3)
													return 3.68579;
												else
													return 3.13203;
											}
										}
									}
								}
								else
								{
									if(cell < 13884174)
										return 10.0671;
									else
									{
										if(rsrq < -10.5)
										{
											if(rsrp < -97)
												return 3.84061;
											else
											{
												if(payload < 2.5)
												{
													if(rsrp < -93)
														return 1.11281;
													else
													{
														if(rsrp < -88.5)
															return 1.98167;
														else
															return 2.47066;
													}
												}
												else
													return 2.81426;
											}
										}
										else
										{
											if(rsrp < -92)
												return 4.49522;
											else
												return 7.998;
										}
									}
								}
							}
							else
							{
								if(ta < 15)
								{
									if(payload < 0.75)
									{
										if(cqi < 6.5)
											return 8.83002;
										else
											return 4.23282;
									}
									else
									{
										if(rsrp < -103.5)
											return 6.865925;
										else
										{
											if(cqi < 3.5)
												return 6.44468;
											else
											{
												if(payload < 1.5)
													return 1.58447;
												else
												{
													if(cqi < 12.5)
														return 3.86845;
													else
														return 2.91174;
												}
											}
										}
									}
								}
								else
									return 1.07711;
							}
						}
						else
						{
							if(rsrp < -90.5)
							{
								if(ta < 7.5)
								{
									if(rsrq < -9.5)
									{
										if(payload < 7.5)
										{
											if(rsrp < -106.5)
												return 4.3952;
											else
											{
												if(rsrp < -102)
													return 11.4309;
												else
													return 10.568;
											}
										}
										else
										{
											if(payload < 8.5)
												return 1.34211;
											else
											{
												if(cell < 12903194.5)
													return 3.57958;
												else
												{
													if(payload < 9.5)
														return 7.24273;
													else
														return 6.71535;
												}
											}
										}
									}
									else
										return 11.1328;
								}
								else
								{
									if(sinr < -0.5)
									{
										if(velocity < 30.98)
										{
											if(rsrq < -9.5)
												return 2.401874;
											else
											{
												if(velocity < 11.035)
													return 2.38178;
												else
													return 1.67098;
											}
										}
										else
											return 6.21708;
									}
									else
									{
										if(cqi < 5.5)
											return 2.00342;
										else
										{
											if(velocity < 11.36)
												return 6.80041;
											else
												return 5.5898025;
										}
									}
								}
							}
							else
							{
								if(velocity < 6.38)
									return 4.3071;
								else
								{
									if(cell < 13650830)
									{
										if(velocity < 25.93)
										{
											if(cell < 13449620)
												return 8.22686;
											else
												return 7.5594;
										}
										else
											return 9.04773;
									}
									else
									{
										if(sinr < 1)
										{
											if(payload < 7.5)
												return 11.4204;
											else
												return 9.95988;
										}
										else
											return 13.4369;
									}
								}
							}
						}
					}
					else
					{
						if(payload < 3.5)
						{
							if(sinr < 5.5)
							{
								if(cell < 14323732)
								{
									if(rsrp < -79)
									{
										if(ta < 12.5)
										{
											if(rsrp < -85.5)
											{
												if(rsrp < -89)
												{
													if(velocity < 13.47)
													{
														if(cqi < 8.5)
														{
															if(ta < 6.5)
																return 0.92539;
															else
															{
																if(rsrq < -9.5)
																	return 3.223296;
																else
																{
																	if(ta < 8.5)
																		return 2.200815;
																	else
																	{
																		if(f < 1347.5)
																			return 3.43349;
																		else
																			return 2.87735;
																	}
																}
															}
														}
														else
															return 8.84956;
													}
													else
													{
														if(rsrq < -10.5)
														{
															if(rsrp < -101)
															{
																if(ta < 3)
																	return 2.1692;
																else
																	return 0.527983;
															}
															else
																return 1.74102;
														}
														else
														{
															if(payload < 1.25)
															{
																if(sinr < 4)
																	return 3.12501;
																else
																	return 2.61097;
															}
															else
																return 2.04656;
														}
													}
												}
												else
												{
													if(rsrp < -87)
													{
														if(payload < 1.75)
															return 1.31752;
														else
															return 0.676476;
													}
													else
														return 1.67365;
												}
											}
											else
											{
												if(cqi < 13)
													return 4.59772;
												else
													return 4.14938;
											}
										}
										else
										{
											if(rsrq < -9.5)
											{
												if(payload < 2.5)
													return 8.63465;
												else
													return 8.18554;
											}
											else
											{
												if(payload < 1.75)
													return 1.20373;
												else
													return 2.15924;
											}
										}
									}
									else
									{
										if(payload < 1.75)
											return 7.27273;
										else
											return 9.65795;
									}
								}
								else
								{
									if(rsrq < -10.5)
										return 10.4439;
									else
									{
										if(payload < 0.3)
											return 3.36136;
										else
										{
											if(ta < 5.5)
												return 4.89297;
											else
												return 4.15369;
										}
									}
								}
							}
							else
							{
								if(cqi < 8.5)
								{
									if(velocity < 8.5)
										return 4.2370133333;
									else
									{
										if(cell < 12907802.5)
											return 8.14664;
										else
										{
											if(rsrp < -95)
												return 10.3359;
											else
												return 9.35126;
										}
									}
								}
								else
								{
									if(cqi < 9.5)
									{
										if(ta < 13.5)
											return 3.11526;
										else
											return 4.4843;
									}
									else
									{
										if(rsrq < -10)
										{
											if(rsrp < -84)
												return 5.37273;
											else
												return 6.4;
										}
										else
										{
											if(payload < 0.55)
												return 4.46929;
											else
												return 3.60198;
										}
									}
								}
							}
						}
						else
						{
							if(velocity < 24.405)
							{
								if(cqi < 6.5)
								{
									if(ta < 4)
										return 10.2433;
									else
									{
										if(sinr < 6.5)
										{
											if(velocity < 2.945)
												return 4.70754;
											else
											{
												if(ta < 9.5)
												{
													if(cqi < 5.5)
														return 2.7064833333;
													else
														return 2.03373;
												}
												else
													return 0.393074;
											}
										}
										else
										{
											if(velocity < 10.785)
												return 12.513;
											else
												return 3.83914;
										}
									}
								}
								else
								{
									if(cqi < 8.5)
									{
										if(rsrq < -9.5)
										{
											if(ta < 12.5)
											{
												if(cell < 13156890.5)
													return 10.12125;
												else
												{
													if(sinr < 4.5)
														return 1.81637;
													else
													{
														if(payload < 7.5)
															return 6.93498;
														else
															return 5.39493;
													}
												}
											}
											else
											{
												if(rsrq < -10.5)
													return 14.079;
												else
													return 10.6809;
											}
										}
										else
										{
											if(ta < 12.5)
											{
												if(rsrp < -103.5)
													return 15.5604;
												else
												{
													if(f < 2262.5)
													{
														if(payload < 4.5)
															return 12.9817;
														else
															return 14.3709;
													}
													else
													{
														if(rsrp < -93.5)
															return 12.0437;
														else
															return 11.0155;
													}
												}
											}
											else
												return 18.799;
										}
									}
									else
									{
										if(f < 2262.5)
										{
											if(sinr < 4.5)
											{
												if(sinr < 3.5)
													return 4.87329;
												else
												{
													if(payload < 6.5)
														return 9.42285;
													else
														return 8.18833;
												}
											}
											else
											{
												if(velocity < 14.75)
												{
													if(sinr < 6.5)
													{
														if(payload < 5.5)
															return 6.2315;
														else
															return 5.069385;
													}
													else
													{
														if(ta < 10)
															return 3.02086;
														else
															return 4.35967;
													}
												}
												else
												{
													if(payload < 7.5)
														return 5.04668;
													else
														return 10.1266;
												}
											}
										}
										else
											return 11.5053;
									}
								}
							}
							else
							{
								if(f < 1347.5)
								{
									if(rsrq < -10)
										return 13.6622;
									else
										return 12.7247;
								}
								else
									return 18.2163;
							}
						}
					}
				}
				else
					return 18.9524;
			}
			else
			{
				if(ta < 11.5)
				{
					if(payload < 2.5)
					{
						if(rsrp < -98.5)
						{
							if(payload < 1.5)
								return 8.81057;
							else
								return 14.9254;
						}
						else
						{
							if(rsrp < -74)
							{
								if(cell < 13853594.5)
								{
									if(sinr < 6.5)
									{
										if(sinr < 4)
											return 1.91365;
										else
											return 2.6869566667;
									}
									else
									{
										if(cell < 13359898)
										{
											if(payload < 0.3)
												return 4.23282;
											else
												return 6.15385;
										}
										else
										{
											if(payload < 0.3)
												return 3.70372;
											else
												return 2.86328;
										}
									}
								}
								else
								{
									if(rsrq < -7)
									{
										if(payload < 1.25)
											return 6.0241;
										else
											return 6.49614;
									}
									else
										return 4.40165;
								}
							}
							else
							{
								if(ta < 5)
								{
									if(rsrq < -6.5)
										return 14.6386;
									else
										return 4.92156;
								}
								else
									return 4.24403;
							}
						}
					}
					else
					{
						if(cell < 13856141.5)
						{
							if(cqi < 5.5)
							{
								if(payload < 6)
								{
									if(rsrp < -91)
										return 10.7239;
									else
										return 9.38527;
								}
								else
								{
									if(sinr < 6)
										return 6.218975;
									else
										return 2.60748;
								}
							}
							else
							{
								if(sinr < 0.5)
								{
									if(payload < 5.5)
										return 6.07626;
									else
										return 7.09534;
								}
								else
								{
									if(cell < 13410696.5)
									{
										if(cell < 12914203)
										{
											if(rsrp < -94)
												return 2.49506;
											else
											{
												if(cell < 12909594.5)
												{
													if(sinr < 2)
														return 13.1517;
													else
													{
														if(rsrq < -7.5)
															return 9.5454;
														else
														{
															if(rsrp < -91)
																return 10.5611;
															else
																return 11.1304;
														}
													}
												}
												else
												{
													if(rsrq < -7.5)
														return 8.2144;
													else
														return 10.0503;
												}
											}
										}
										else
										{
											if(ta < 1.5)
											{
												if(velocity < 11.8)
												{
													if(payload < 7)
														return 14.2433;
													else
														return 12.3195;
												}
												else
												{
													if(rsrq < -7.5)
														return 17.0846;
													else
														return 13.3891;
												}
											}
											else
											{
												if(velocity < 18.36)
												{
													if(rsrp < -98.5)
														return 14.0488;
													else
													{
														if(payload < 3.5)
															return 11.168;
														else
															return 12.3172;
													}
												}
												else
													return 9.692075;
											}
										}
									}
									else
									{
										if(velocity < 35.32)
										{
											if(payload < 6.5)
											{
												if(rsrp < -88.5)
													return 9.37866;
												else
												{
													if(sinr < 4.5)
														return 8.45219;
													else
														return 7.63602;
												}
											}
											else
											{
												if(cqi < 6.5)
													return 5.518805;
												else
												{
													if(velocity < 23.75)
													{
														if(ta < 5)
															return 6.69083;
														else
															return 7.19424;
													}
													else
														return 8.21355;
												}
											}
										}
										else
										{
											if(payload < 8)
												return 11.7302;
											else
												return 10.4357;
										}
									}
								}
							}
						}
						else
						{
							if(rsrp < -77.5)
							{
								if(rsrp < -96.5)
								{
									if(sinr < 6.5)
										return 12.3235;
									else
										return 11.1966;
								}
								else
								{
									if(velocity < 15.75)
									{
										if(f < 1347.5)
										{
											if(cell < 13884162.5)
											{
												if(cqi < 5.5)
													return 12.343;
												else
													return 15.4589;
											}
											else
												return 17.1812;
										}
										else
											return 11.5607;
									}
									else
										return 20.1005;
								}
							}
							else
								return 30.5489;
						}
					}
				}
				else
				{
					if(sinr < 0.5)
					{
						if(rsrq < -7)
							return 13.3111;
						else
							return 6.77201;
					}
					else
					{
						if(payload < 6.5)
						{
							if(velocity < 32.6)
							{
								if(ta < 12.5)
								{
									if(f < 1347.5)
										return 2.65062;
									else
									{
										if(rsrp < -85)
											return 5.64148;
										else
											return 6.6778;
									}
								}
								else
								{
									if(cell < 12914075)
									{
										if(payload < 2.25)
											return 2.86328;
										else
											return 3.5915366667;
									}
									else
									{
										if(ta < 13.5)
											return 2.63259;
										else
										{
											if(ta < 16)
												return 0.503147;
											else
												return 1.3450433333;
										}
									}
								}
							}
							else
							{
								if(rsrq < -7.5)
								{
									if(velocity < 33.285)
										return 6.71047;
									else
										return 5.97015;
								}
								else
									return 7.51997;
							}
						}
						else
						{
							if(ta < 12.5)
								return 3.40764;
							else
							{
								if(sinr < 4)
								{
									if(rsrq < -7.5)
									{
										if(cqi < 6.5)
										{
											if(sinr < 1.5)
												return 6.28239;
											else
												return 6.81489;
										}
										else
											return 6.27303;
									}
									else
										return 6.82769;
								}
								else
								{
									if(cqi < 5.5)
										return 8.34396;
									else
										return 7.52587;
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
		if(payload < 4.5)
		{
			if(sinr < 16.5)
			{
				if(rsrq < -6.5)
				{
					if(rsrp < -103.5)
					{
						if(payload < 0.75)
						{
							if(rsrp < -106)
								return 4.427175;
							else
							{
								if(cqi < 9.5)
									return 12.1581;
								else
									return 7.07967;
							}
						}
						else
						{
							if(cell < 12918810)
								return 15.0943;
							else
							{
								if(velocity < 7.37)
									return 14.1405;
								else
								{
									if(sinr < 11.5)
									{
										if(rsrp < -104.5)
											return 9.54654;
										else
											return 10.0188;
									}
									else
										return 7.73134;
								}
							}
						}
					}
					else
					{
						if(sinr < 10.5)
						{
							if(payload < 2.5)
							{
								if(cell < 14344596)
								{
									if(payload < 0.75)
									{
										if(cell < 13884175)
										{
											if(velocity < 3.15)
												return 7.44879;
											else
											{
												if(cell < 13853583)
												{
													if(rsrp < -88.5)
													{
														if(rsrp < -93)
														{
															if(rsrq < -9.5)
																return 4.96896;
															else
																return 3.39559;
														}
														else
														{
															if(ta < 9.5)
															{
																if(payload < 0.3)
																	return 1.58103;
																else
																	return 0.950796;
															}
															else
																return 2.58398;
														}
													}
													else
													{
														if(ta < 10.5)
														{
															if(rsrp < -82)
															{
																if(rsrp < -86.5)
																	return 3.73833;
																else
																	return 4.21054;
															}
															else
																return 3.312765;
														}
														else
															return 4.65118;
													}
												}
												else
													return 6.83763;
											}
										}
										else
										{
											if(sinr < 9.5)
												return 0.127005;
											else
												return 1.12676;
										}
									}
									else
									{
										if(velocity < 2.83)
										{
											if(payload < 1.5)
												return 1.93283;
											else
												return 0.848626;
										}
										else
										{
											if(velocity < 7.725)
											{
												if(rsrp < -79)
													return 3.96138;
												else
													return 4.58453;
											}
											else
											{
												if(cqi < 8.5)
												{
													if(rsrp < -95)
														return 2.97841;
													else
													{
														if(rsrp < -91.5)
														{
															if(ta < 2.5)
																return 1.94458;
															else
																return 2.47678;
														}
														else
															return 1.78066875;
													}
												}
												else
												{
													if(velocity < 10.615)
													{
														if(payload < 1.5)
															return 0.904773;
														else
															return 2.56451;
													}
													else
													{
														if(cell < 12914202)
														{
															if(payload < 1.5)
																return 5.29451;
															else
																return 4.356765;
														}
														else
														{
															if(payload < 1.5)
																return 4.11734;
															else
																return 3.31194;
														}
													}
												}
											}
										}
									}
								}
								else
								{
									if(cell < 14345742)
									{
										if(payload < 0.3)
											return 5.03147;
										else
											return 8.151045;
									}
									else
										return 3.8835;
								}
							}
							else
							{
								if(rsrp < -87.5)
								{
									if(cell < 13156500)
									{
										if(velocity < 2.11)
											return 3.24456;
										else
										{
											if(ta < 14.5)
											{
												if(rsrq < -8.5)
													return 5.91915;
												else
													return 5.23732;
											}
											else
												return 4.33369;
										}
									}
									else
									{
										if(ta < 6.5)
											return 0.833688;
										else
											return 6.81576;
									}
								}
								else
								{
									if(cqi < 14)
									{
										if(rsrp < -83.5)
										{
											if(rsrp < -86.5)
												return 11.5984;
											else
												return 8.88149;
										}
										else
										{
											if(ta < 5.5)
											{
												if(rsrp < -76.5)
													return 4.51467;
												else
													return 5.1838675;
											}
											else
											{
												if(rsrp < -77.5)
													return 7.19856;
												else
												{
													if(rsrq < -9)
													{
														if(cqi < 11)
															return 6.37196;
														else
															return 6.8699;
													}
													else
														return 4.22219;
												}
											}
										}
									}
									else
										return 8.94354;
								}
							}
						}
						else
						{
							if(ta < 1.5)
							{
								if(payload < 3.5)
								{
									if(payload < 0.75)
									{
										if(f < 2262.5)
										{
											if(sinr < 12.5)
												return 4.46929;
											else
												return 3.505745;
										}
										else
											return 5.87372;
									}
									else
									{
										if(rsrq < -8.5)
										{
											if(cqi < 9.5)
											{
												if(velocity < 15.53)
													return 4.86421;
												else
													return 10.7431;
											}
											else
											{
												if(cell < 12896782)
													return 10.6596;
												else
													return 10.1652;
											}
										}
										else
										{
											if(f < 2262.5)
											{
												if(payload < 2)
													return 2.24404;
												else
													return 5.38721;
											}
											else
												return 9.34579;
										}
									}
								}
								else
								{
									if(sinr < 12)
										return 9.68816;
									else
										return 16.2767;
								}
							}
							else
							{
								if(payload < 2.5)
								{
									if(velocity < 36.725)
									{
										if(sinr < 15.5)
										{
											if(rsrp < -75)
											{
												if(velocity < 14.195)
												{
													if(rsrq < -10.5)
													{
														if(velocity < 3.97)
														{
															if(sinr < 13)
																return 2.76865;
															else
																return 6.87876;
														}
														else
														{
															if(ta < 13.5)
															{
																if(ta < 11.5)
																{
																	if(velocity < 8.95)
																	{
																		if(sinr < 13)
																			return 6.5477233333;
																		else
																			return 7.0922;
																	}
																	else
																		return 7.5539433333;
																}
																else
																	return 5.73012;
															}
															else
																return 9.93172;
														}
													}
													else
													{
														if(velocity < 0.585)
														{
															if(f < 1347.5)
																return 8.09717;
															else
															{
																if(cell < 12914202)
																{
																	if(payload < 0.3)
																		return 6.185568;
																	else
																		return 7.20721;
																}
																else
																{
																	if(cqi < 13.5)
																		return 4.912615;
																	else
																		return 4.21054;
																}
															}
														}
														else
														{
															if(ta < 3)
															{
																if(rsrp < -85.5)
																	return 1.1924166667;
																else
																	return 0.48852;
															}
															else
															{
																if(f < 2262.5)
																{
																	if(cell < 12918810)
																	{
																		if(cqi < 11.5)
																		{
																			if(cqi < 10.5)
																			{
																				if(payload < 1.25)
																					return 3.933995;
																				else
																					return 2.34707;
																			}
																			else
																				return 5.80762;
																		}
																		else
																		{
																			if(velocity < 9.525)
																				return 1.87793;
																			else
																				return 2.7562028571;
																		}
																	}
																	else
																	{
																		if(f < 1347.5)
																		{
																			if(rsrp < -83.5)
																				return 1.93167;
																			else
																			{
																				if(sinr < 13)
																					return 3.74181;
																				else
																					return 4.67838;
																			}
																		}
																		else
																		{
																			if(rsrq < -8)
																				return 5.223408;
																			else
																				return 13.8648;
																		}
																	}
																}
																else
																{
																	if(sinr < 11.5)
																		return 8.04829;
																	else
																	{
																		if(rsrp < -99)
																			return 5.25279;
																		else
																		{
																			if(payload < 1.25)
																				return 6.95652;
																			else
																				return 6.13732;
																		}
																	}
																}
															}
														}
													}
												}
												else
												{
													if(ta < 15.5)
													{
														if(payload < 1.5)
														{
															if(rsrq < -9)
																return 3.89105;
															else
															{
																if(payload < 0.75)
																{
																	if(payload < 0.3)
																		return 6.40002;
																	else
																		return 7.3065475;
																}
																else
																	return 5.96125;
															}
														}
														else
														{
															if(rsrp < -90)
																return 9.55224;
															else
																return 8.04829;
														}
													}
													else
														return 4.08685;
												}
											}
											else
											{
												if(sinr < 12)
													return 0.759842;
												else
													return 3.41588;
											}
										}
										else
										{
											if(velocity < 18.6)
											{
												if(payload < 0.3)
													return 5.4575333333;
												else
												{
													if(rsrp < -94.5)
														return 6.35425;
													else
													{
														if(rsrq < -8.5)
															return 7.64088;
														else
															return 7.18133;
													}
												}
											}
											else
											{
												if(f < 1347.5)
													return 12.6382;
												else
													return 9.30236;
											}
										}
									}
									else
										return 1.4093028571;
								}
								else
								{
									if(velocity < 9.295)
									{
										if(sinr < 12.5)
										{
											if(ta < 4.5)
												return 14.6319;
											else
											{
												if(sinr < 11.5)
												{
													if(cqi < 7.5)
														return 12.2605;
													else
														return 11.7763;
												}
												else
													return 11.0459;
											}
										}
										else
										{
											if(cell < 12898317.5)
												return 5.23475;
											else
												return 9.5031666667;
										}
									}
									else
									{
										if(rsrq < -7.5)
										{
											if(ta < 12.5)
											{
												if(cell < 13156627)
												{
													if(cell < 12903193)
														return 3.78788;
													else
														return 4.74402;
												}
												else
												{
													if(rsrq < -8.5)
														return 1.135372;
													else
														return 2.25691;
												}
											}
											else
												return 6.9529133333;
										}
										else
										{
											if(rsrp < -79)
											{
												if(cell < 13370906)
													return 7.32601;
												else
													return 8.13559;
											}
											else
												return 10.3181;
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
						if(sinr < 13.5)
						{
							if(velocity < 11.475)
							{
								if(velocity < 5.12)
								{
									if(rsrp < -95)
										return 7.20723;
									else
										return 6.45422;
								}
								else
								{
									if(rsrp < -92)
										return 14.1343;
									else
										return 14.6252;
								}
							}
							else
							{
								if(rsrp < -88.5)
								{
									if(ta < 32)
									{
										if(sinr < 9.5)
											return 6.7086;
										else
											return 4.96896;
									}
									else
										return 3.29083;
								}
								else
								{
									if(velocity < 13.86)
										return 3.58746;
									else
									{
										if(velocity < 34.92)
										{
											if(payload < 0.3)
												return 9.09094;
											else
												return 9.85222;
										}
										else
										{
											if(cqi < 11.5)
												return 8.60218;
											else
												return 8.08898;
										}
									}
								}
							}
						}
						else
						{
							if(rsrp < -94)
							{
								if(velocity < 14.665)
									return 2.03926;
								else
									return 10.5263;
							}
							else
							{
								if(cell < 12903066.5)
								{
									if(sinr < 15)
										return 2.32423;
									else
										return 4.41379;
								}
								else
								{
									if(ta < 12.5)
									{
										if(cell < 13884302)
										{
											if(velocity < 15.6)
												return 5.080522;
											else
												return 3.3867766667;
										}
										else
											return 5.67378;
									}
									else
									{
										if(payload < 0.3)
											return 5.26318;
										else
										{
											if(rsrp < -87.5)
												return 6.29921;
											else
												return 5.82242;
										}
									}
								}
							}
						}
					}
					else
					{
						if(cqi < 13)
						{
							if(rsrq < -5.5)
							{
								if(rsrp < -97)
								{
									if(rsrp < -100.5)
										return 6.44901;
									else
										return 5.05849;
								}
								else
								{
									if(payload < 3.5)
										return 9.74026;
									else
										return 7.822015;
								}
							}
							else
								return 15.2769;
						}
						else
						{
							if(sinr < 10.5)
								return 15.748;
							else
								return 18.5615;
						}
					}
				}
			}
			else
			{
				if(rsrq < -5.5)
				{
					if(payload < 2.5)
					{
						if(cell < 12909466)
						{
							if(velocity < 4.64)
							{
								if(rsrp < -66.5)
								{
									if(sinr < 20)
									{
										if(cell < 12896769.5)
										{
											if(rsrp < -68.5)
												return 11.0193;
											else
												return 4.89596;
										}
										else
										{
											if(sinr < 18.5)
											{
												if(rsrp < -68)
												{
													if(rsrp < -75)
														return 6.57839;
													else
														return 5.46075;
												}
												else
													return 3.72094;
											}
											else
											{
												if(payload < 1.05)
													return 4.96896;
												else
													return 3.50094;
											}
										}
									}
									else
									{
										if(rsrp < -82.5)
											return 6.962855;
										else
										{
											if(rsrp < -81)
												return 9.1638;
											else
												return 8.67679;
										}
									}
								}
								else
									return 10.9589;
							}
							else
							{
								if(velocity < 11.595)
								{
									if(rsrp < -71.5)
									{
										if(cell < 12898324)
										{
											if(velocity < 8.295)
												return 3.54296;
											else
												return 1.4445;
										}
										else
										{
											if(sinr < 26.5)
												return 5.2649566667;
											else
												return 3.82135;
										}
									}
									else
									{
										if(payload < 0.3)
											return 3.86475;
										else
										{
											if(payload < 0.75)
												return 8.08081;
											else
												return 6.28437;
										}
									}
								}
								else
								{
									if(cqi < 14.5)
									{
										if(velocity < 24.9)
										{
											if(velocity < 14.05)
											{
												if(rsrp < -89)
													return 4.21054;
												else
												{
													if(payload < 1.5)
														return 3.646635;
													else
														return 3.07338;
												}
											}
											else
											{
												if(rsrp < -73)
													return 4.24178;
												else
													return 4.81203;
											}
										}
										else
											return 2.75672;
									}
									else
									{
										if(velocity < 14.58)
											return 2.8263766667;
										else
											return 2.331;
									}
								}
							}
						}
						else
						{
							if(cell < 12918809.5)
							{
								if(cqi < 8.5)
									return 15.16695;
								else
								{
									if(rsrp < -107)
										return 3.39415;
									else
									{
										if(payload < 1.5)
										{
											if(cqi < 10.5)
												return 4.93829;
											else
											{
												if(ta < 13.5)
												{
													if(rsrp < -97)
														return 8.19672;
													else
														return 9.3126916667;
												}
												else
													return 12.4031;
											}
										}
										else
										{
											if(rsrq < -6.5)
												return 2.33134;
											else
												return 3.34169;
										}
									}
								}
							}
							else
							{
								if(payload < 0.3)
								{
									if(rsrp < -63.5)
									{
										if(rsrq < -9)
											return 5.71431;
										else
										{
											if(velocity < 13.54)
												return 4.2731366667;
											else
												return 3.37554;
										}
									}
									else
										return 5.79712;
								}
								else
								{
									if(cell < 13161621)
									{
										if(sinr < 23)
											return 7.91687;
										else
										{
											if(sinr < 26.5)
												return 3.89674;
											else
												return 3.33274;
										}
									}
									else
									{
										if(velocity < 14.435)
										{
											if(velocity < 13.6)
											{
												if(velocity < 9.585)
												{
													if(cell < 14084373)
													{
														if(velocity < 3.64)
														{
															if(rsrp < -80.5)
																return 7.57576;
															else
																return 10.2828;
														}
														else
														{
															if(ta < 8.5)
															{
																if(sinr < 19.5)
																	return 7.7557;
																else
																	return 9.63275;
															}
															else
															{
																if(cqi < 11)
																	return 6.20636;
																else
																	return 4.78469;
															}
														}
													}
													else
													{
														if(sinr < 28)
															return 5.685384;
														else
															return 4.64576;
													}
												}
												else
												{
													if(ta < 1.5)
														return 12.7389;
													else
													{
														if(rsrq < -6.5)
														{
															if(cqi < 11)
																return 7.50117;
															else
															{
																if(velocity < 10.69)
																	return 9.68523;
																else
																	return 8.52749;
															}
														}
														else
															return 11.5858;
													}
												}
											}
											else
												return 3.9296433333;
										}
										else
										{
											if(rsrq < -6.5)
												return 12.7796;
											else
												return 10.3093;
										}
									}
								}
							}
						}
					}
					else
					{
						if(rsrp < -75.5)
						{
							if(rsrp < -95)
							{
								if(cqi < 9.5)
								{
									if(rsrq < -8.5)
										return 9.81896;
									else
										return 11.0345;
								}
								else
								{
									if(sinr < 18.5)
									{
										if(rsrp < -107)
											return 5.1241;
										else
											return 5.62489;
									}
									else
									{
										if(rsrp < -96.5)
											return 7.12977;
										else
											return 6.05602;
									}
								}
							}
							else
							{
								if(ta < 3.5)
								{
									if(velocity < 30.61)
									{
										if(sinr < 18.5)
											return 12.018;
										else
										{
											if(velocity < 14.675)
											{
												if(rsrp < -84)
													return 3.13316;
												else
												{
													if(sinr < 25)
														return 5.51851;
													else
														return 5.04414;
												}
											}
											else
											{
												if(cqi < 13.5)
													return 6.8991733333;
												else
													return 8.26873;
											}
										}
									}
									else
										return 15.0376;
								}
								else
								{
									if(cell < 13207195)
									{
										if(velocity < 15.53)
										{
											if(cqi < 13.5)
											{
												if(rsrp < -82)
													return 11.3261;
												else
													return 16.7481;
											}
											else
											{
												if(payload < 3.5)
													return 11.611;
												else
													return 9.50966;
											}
										}
										else
										{
											if(payload < 3.5)
												return 13.1507;
											else
											{
												if(rsrp < -79)
													return 20.8745333333;
												else
													return 17.1858;
											}
										}
									}
									else
									{
										if(payload < 3.5)
										{
											if(sinr < 19.5)
											{
												if(rsrp < -88)
													return 16.1834;
												else
													return 15.4143;
											}
											else
											{
												if(sinr < 26)
												{
													if(rsrp < -83.5)
													{
														if(rsrp < -85.5)
															return 11.6167;
														else
														{
															if(sinr < 21.5)
																return 12.3267;
															else
																return 12.8;
														}
													}
													else
														return 16.3934;
												}
												else
												{
													if(sinr < 28.5)
														return 11.3744;
													else
													{
														if(rsrq < -8)
															return 9.6231;
														else
															return 17.531;
													}
												}
											}
										}
										else
										{
											if(ta < 6.5)
												return 9.48062;
											else
												return 8.8011775;
										}
									}
								}
							}
						}
						else
						{
							if(cqi < 13)
							{
								if(rsrp < -65.5)
								{
									if(sinr < 21.5)
										return 2.3245;
									else
									{
										if(rsrp < -73)
											return 4.50704;
										else
											return 8.10537;
									}
								}
								else
									return 7.40056;
							}
							else
							{
								if(sinr < 24.5)
								{
									if(rsrp < -70)
										return 9.23788;
									else
										return 6.967195;
								}
								else
									return 10.3176;
							}
						}
					}
				}
				else
				{
					if(payload < 0.3)
					{
						if(sinr < 18.5)
							return 9.4118;
						else
						{
							if(sinr < 23)
								return 4.6243;
							else
							{
								if(cell < 12918809.5)
									return 8.5716766667;
								else
								{
									if(cqi < 14.5)
										return 4.79044;
									else
									{
										if(rsrq < -4.5)
										{
											if(velocity < 14.8)
												return 5.19483;
											else
											{
												if(cell < 14301710)
												{
													if(ta < 8.5)
														return 7.07967;
													else
														return 6.6116;
												}
												else
													return 5.67378;
											}
										}
										else
											return 8.51067;
									}
								}
							}
						}
					}
					else
					{
						if(ta < 1.5)
						{
							if(cqi < 12.5)
								return 6.363555;
							else
								return 5.26431;
						}
						else
						{
							if(cell < 12903194)
								return 4.37158;
							else
							{
								if(payload < 1.5)
								{
									if(cell < 12918810)
									{
										if(velocity < 14.055)
										{
											if(rsrp < -80.5)
												return 15.534;
											else
												return 16.6570333333;
										}
										else
											return 14.5455;
									}
									else
									{
										if(velocity < 10.45)
										{
											if(cell < 13616277)
												return 7.64818;
											else
												return 4.279625;
										}
										else
										{
											if(ta < 4)
												return 4.92005;
											else
											{
												if(cell < 13362446)
													return 9.23788;
												else
												{
													if(rsrp < -71)
														return 12.57875;
													else
													{
														if(rsrp < -68)
															return 9.50119;
														else
														{
															if(cell < 14053889)
																return 12.1581;
															else
															{
																if(ta < 15.5)
																	return 11.236;
																else
																	return 11.6959;
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
									if(cell < 13613717)
									{
										if(rsrp < -75.5)
										{
											if(payload < 2.5)
											{
												if(rsrp < -83.5)
												{
													if(velocity < 22.09)
														return 18.2857;
													else
														return 20;
												}
												else
													return 14.3756;
											}
											else
											{
												if(velocity < 15.175)
													return 16.9942;
												else
												{
													if(velocity < 23.5)
													{
														if(ta < 3)
															return 8.39234;
														else
														{
															if(rsrq < -4.5)
																return 12.4546;
															else
																return 15.625;
														}
													}
													else
													{
														if(sinr < 23)
															return 15.9046;
														else
															return 13.9555;
													}
												}
											}
										}
										else
										{
											if(rsrp < -74.5)
											{
												if(payload < 3.5)
													return 22.6629;
												else
													return 20.8605;
											}
											else
												return 17.2538;
										}
									}
									else
									{
										if(rsrp < -73.5)
											return 20.0334;
										else
										{
											if(sinr < 25.5)
												return 3.72526;
											else
												return 11.0117;
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
			if(sinr < 15.5)
			{
				if(rsrq < -9.5)
				{
					if(ta < 14)
					{
						if(velocity < 0.425)
						{
							if(ta < 8)
							{
								if(rsrq < -11)
									return 5.17369;
								else
									return 14.6635;
							}
							else
							{
								if(rsrp < -94)
									return 15.748;
								else
									return 17.8571;
							}
						}
						else
						{
							if(sinr < 13.5)
							{
								if(f < 2262.5)
								{
									if(velocity < 11.125)
									{
										if(ta < 9.5)
										{
											if(payload < 6.5)
												return 9.67118;
											else
											{
												if(payload < 9.5)
													return 2.2228146429;
												else
													return 8.17912;
											}
										}
										else
										{
											if(payload < 9)
											{
												if(velocity < 9.12)
													return 12.6084;
												else
													return 13.1183;
											}
											else
											{
												if(rsrp < -90.5)
													return 8.09143;
												else
													return 9.98129;
											}
										}
									}
									else
									{
										if(rsrp < -88)
										{
											if(cqi < 8.5)
											{
												if(velocity < 15.525)
												{
													if(payload < 8.5)
														return 4.448975;
													else
														return 3.48905;
												}
												else
												{
													if(rsrp < -97)
														return 5.5948;
													else
														return 7.54984;
												}
											}
											else
											{
												if(payload < 7.5)
													return 0.5550483333;
												else
													return 2.98382;
											}
										}
										else
										{
											if(ta < 3)
											{
												if(velocity < 14.92)
													return 11.2694;
												else
												{
													if(sinr < 10)
														return 7.69527;
													else
														return 6.36352;
												}
											}
											else
											{
												if(rsrp < -77.5)
												{
													if(rsrq < -11.5)
														return 4.62428;
													else
														return 5.47316;
												}
												else
												{
													if(rsrq < -11.5)
														return 3.05157;
													else
														return 2.47917;
												}
											}
										}
									}
								}
								else
								{
									if(rsrp < -81.5)
									{
										if(rsrq < -12.5)
											return 17.0535;
										else
										{
											if(sinr < 11.5)
											{
												if(rsrq < -10.5)
													return 10.6692333333;
												else
													return 8.51064;
											}
											else
												return 14.553;
										}
									}
									else
										return 2.46847;
								}
							}
							else
							{
								if(rsrp < -81.5)
									return 12.7755;
								else
								{
									if(ta < 6)
										return 4.33276;
									else
										return 8.07877;
								}
							}
						}
					}
					else
					{
						if(rsrq < -10.5)
							return 25.8065;
						else
							return 9.64785;
					}
				}
				else
				{
					if(payload < 9.5)
					{
						if(payload < 6.5)
						{
							if(f < 2262.5)
							{
								if(velocity < 13.83)
								{
									if(cqi < 4.5)
										return 3.01796;
									else
									{
										if(sinr < 12.5)
										{
											if(velocity < 1.47)
											{
												if(cqi < 10.5)
												{
													if(rsrp < -88)
														return 17.6523;
													else
													{
														if(payload < 5.5)
															return 10.9619;
														else
															return 15.1467;
													}
												}
												else
													return 16.8563;
											}
											else
											{
												if(rsrq < -6.5)
												{
													if(rsrq < -7.5)
													{
														if(velocity < 10.28)
														{
															if(sinr < 10)
																return 7.11849;
															else
																return 7.99201;
														}
														else
														{
															if(rsrq < -8.5)
																return 10.8932;
															else
															{
																if(ta < 13)
																	return 9.69305;
																else
																	return 9.09435;
															}
														}
													}
													else
														return 5.32623;
												}
												else
													return 13.7378;
											}
										}
										else
										{
											if(rsrp < -78.5)
											{
												if(payload < 5.5)
												{
													if(rsrp < -85)
													{
														if(rsrp < -95)
															return 10.8932;
														else
															return 8.98876;
													}
													else
														return 7.02124;
												}
												else
												{
													if(velocity < 5.815)
														return 6.23701;
													else
														return 2.54642;
												}
											}
											else
											{
												if(velocity < 11.585)
													return 8.23893;
												else
													return 17.0455;
											}
										}
									}
								}
								else
								{
									if(ta < 31.5)
									{
										if(sinr < 9.5)
										{
											if(cell < 12926989.5)
											{
												if(sinr < 8.5)
													return 8.56837;
												else
													return 5.05636;
											}
											else
											{
												if(sinr < 8.5)
													return 4.81058;
												else
													return 3.08147;
											}
										}
										else
										{
											if(cell < 13845133.5)
											{
												if(velocity < 13.99)
													return 7.30594;
												else
												{
													if(sinr < 14.5)
														return 9.6889716667;
													else
														return 11.0092;
												}
											}
											else
											{
												if(velocity < 38.235)
												{
													if(sinr < 12)
														return 4.68933;
													else
														return 6.9660066667;
												}
												else
													return 3.58744;
											}
										}
									}
									else
										return 0.379873;
								}
							}
							else
							{
								if(ta < 2.5)
								{
									if(ta < 1.5)
									{
										if(rsrq < -7.5)
											return 14.9719;
										else
											return 16.3465;
									}
									else
									{
										if(rsrp < -87)
											return 1.54071;
										else
											return 1.9719;
									}
								}
								else
								{
									if(rsrp < -98.5)
									{
										if(sinr < 10.5)
										{
											if(payload < 5.5)
												return 17.6757;
											else
												return 16.586;
										}
										else
										{
											if(payload < 5.5)
												return 14.8237;
											else
												return 14.0146;
										}
									}
									else
									{
										if(sinr < 9.5)
											return 15.3355;
										else
										{
											if(rsrq < -6.5)
												return 9.9975;
											else
												return 10.8328;
										}
									}
								}
							}
						}
						else
						{
							if(rsrp < -81.5)
							{
								if(cqi < 14)
								{
									if(cell < 12909466.5)
									{
										if(rsrp < -89.5)
										{
											if(velocity < 10.365)
												return 5.28003;
											else
											{
												if(rsrp < -90.5)
													return 6.63106;
												else
													return 7.17949;
											}
										}
										else
										{
											if(payload < 8.5)
											{
												if(rsrp < -83.5)
												{
													if(rsrp < -88)
													{
														if(sinr < 12)
															return 9.4857;
														else
															return 8.66152;
													}
													else
													{
														if(ta < 10)
														{
															if(rsrp < -86.5)
																return 13.9342;
															else
															{
																if(rsrp < -85.5)
																	return 13.1332;
																else
																	return 12.3812;
															}
														}
														else
															return 10.9664;
													}
												}
												else
													return 7.84891;
											}
											else
												return 16.3562;
										}
									}
									else
									{
										if(cell < 13884174.5)
										{
											if(sinr < 8.5)
											{
												if(rsrp < -89)
													return 23.0358;
												else
													return 14.9673;
											}
											else
											{
												if(velocity < 15.175)
												{
													if(sinr < 12)
													{
														if(ta < 4)
														{
															if(payload < 7.5)
																return 12.2538;
															else
																return 19.5003;
														}
														else
														{
															if(rsrq < -7.5)
																return 10.6649;
															else
															{
																if(payload < 8.5)
																	return 9.21925;
																else
																	return 8.42993;
															}
														}
													}
													else
													{
														if(rsrp < -96.5)
														{
															if(payload < 8.5)
															{
																if(sinr < 14)
																	return 14.7977;
																else
																	return 15.2599;
															}
															else
																return 14.6074;
														}
														else
															return 15.1616333333;
													}
												}
												else
												{
													if(payload < 8)
														return 6.16536;
													else
														return 9.17197;
												}
											}
										}
										else
										{
											if(rsrp < -87.5)
											{
												if(velocity < 10.88)
												{
													if(rsrq < -8.5)
														return 9.73828;
													else
													{
														if(rsrp < -96.5)
														{
															if(cqi < 9.5)
																return 12.6697;
															else
																return 13.2621;
														}
														else
															return 14.1374;
													}
												}
												else
												{
													if(sinr < 10)
														return 6.51134;
													else
													{
														if(sinr < 12.5)
														{
															if(rsrp < -97)
																return 9.30909;
															else
																return 13.6054;
														}
														else
														{
															if(cqi < 9.5)
																return 10.3093;
															else
															{
																if(rsrp < -90.5)
																{
																	if(payload < 8)
																		return 7.66179;
																	else
																		return 6.46726;
																}
																else
																	return 9.33178;
															}
														}
													}
												}
											}
											else
												return 17.6454;
										}
									}
								}
								else
								{
									if(rsrp < -92)
										return 11.3657;
									else
										return 2.48937;
								}
							}
							else
							{
								if(rsrp < -79.5)
								{
									if(cell < 12914201.5)
									{
										if(payload < 8)
											return 13.3492;
										else
											return 14.7692;
									}
									else
									{
										if(f < 2262.5)
										{
											if(cqi < 8.5)
												return 14.9254;
											else
												return 16.41666;
										}
										else
											return 18.6047;
									}
								}
								else
								{
									if(cell < 12909594)
									{
										if(rsrq < -7.5)
										{
											if(rsrp < -72)
												return 9.32537;
											else
												return 14.9848;
										}
										else
										{
											if(cqi < 10.5)
												return 15.8455;
											else
												return 18.7189;
										}
									}
									else
									{
										if(ta < 11)
										{
											if(rsrq < -6.5)
											{
												if(ta < 7)
												{
													if(payload < 7.5)
														return 7.52688;
													else
														return 8.0281;
												}
												else
													return 6.44065;
											}
											else
												return 10.5541;
										}
										else
											return 15.8595;
									}
								}
							}
						}
					}
					else
					{
						if(cqi < 7)
						{
							if(rsrp < -91.5)
								return 15.6863;
							else
								return 32.0384;
						}
						else
						{
							if(cell < 12898324)
							{
								if(ta < 6)
									return 6.29327;
								else
									return 8.75848;
							}
							else
							{
								if(cqi < 12.5)
								{
									if(cell < 13823002.5)
									{
										if(sinr < 12)
										{
											if(ta < 14.5)
											{
												if(cqi < 10.5)
													return 16.4184666667;
												else
													return 17.1858;
											}
											else
												return 13.2472;
										}
										else
											return 10.8755;
									}
									else
									{
										if(velocity < 6.18)
											return 15.0066;
										else
											return 11.01415;
									}
								}
								else
								{
									if(sinr < 11)
									{
										if(rsrp < -95)
											return 23.753;
										else
											return 18.6611;
									}
									else
									{
										if(velocity < 16.035)
										{
											if(rsrq < -7)
												return 18.014;
											else
												return 21.9901;
										}
										else
											return 12.3362;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				if(cqi < 12.5)
				{
					if(cqi < 8.5)
					{
						if(rsrq < -9.5)
						{
							if(sinr < 20.5)
							{
								if(rsrp < -98)
									return 1.33645;
								else
									return 5.76535;
							}
							else
								return 11.3475;
						}
						else
						{
							if(rsrp < -102)
							{
								if(rsrq < -7.5)
									return 7.46826;
								else
								{
									if(ta < 3.5)
										return 3.10301;
									else
										return 4.21496;
								}
							}
							else
							{
								if(cell < 13853582.5)
								{
									if(ta < 10)
									{
										if(f < 2262.5)
										{
											if(cell < 12914202.5)
												return 7.054735;
											else
											{
												if(ta < 5.5)
													return 9.60192;
												else
													return 6.89457;
											}
										}
										else
											return 15.4031;
									}
									else
									{
										if(sinr < 18.5)
										{
											if(rsrq < -7.5)
												return 11.8149;
											else
												return 9.03663;
										}
										else
										{
											if(payload < 6)
												return 12.4494;
											else
												return 15.0416;
										}
									}
								}
								else
								{
									if(velocity < 13.925)
									{
										if(cell < 14114964)
											return 15.2381;
										else
											return 14.63695;
									}
									else
										return 12.8695;
								}
							}
						}
					}
					else
					{
						if(f < 2262.5)
						{
							if(velocity < 17.815)
							{
								if(payload < 8.5)
								{
									if(rsrp < -67)
									{
										if(velocity < 5.535)
										{
											if(rsrq < -9)
												return 13.9477;
											else
											{
												if(ta < 10.5)
												{
													if(cell < 12896781.5)
														return 7.59253;
													else
													{
														if(rsrp < -88.5)
															return 9.56366;
														else
															return 12.3442;
													}
												}
												else
												{
													if(sinr < 19.5)
														return 11.8019;
													else
													{
														if(sinr < 28)
														{
															if(ta < 14)
															{
																if(velocity < 2.12)
																	return 6.8223;
																else
																	return 5.82411;
															}
															else
																return 4.47219;
														}
														else
															return 7.70899;
													}
												}
											}
										}
										else
										{
											if(velocity < 6.26)
												return 21.8953;
											else
											{
												if(sinr < 24.5)
												{
													if(cell < 12896793.5)
													{
														if(payload < 5.5)
															return 16.6182;
														else
															return 14.733;
													}
													else
													{
														if(cell < 12909593.5)
														{
															if(ta < 3.5)
															{
																if(payload < 7.5)
																{
																	if(rsrq < -7.5)
																		return 10.7335;
																	else
																		return 12.4694;
																}
																else
																	return 7.45834;
															}
															else
															{
																if(rsrp < -79.5)
																{
																	if(rsrq < -9.5)
																		return 5.02287;
																	else
																		return 5.9883233333;
																}
																else
																	return 7.16662;
															}
														}
														else
														{
															if(payload < 7.5)
															{
																if(ta < 8.5)
																	return 8.92857;
																else
																{
																	if(payload < 5.5)
																		return 14.9589;
																	else
																		return 14.0425;
																}
															}
															else
															{
																if(velocity < 14.035)
																{
																	if(rsrq < -7)
																		return 11.0938;
																	else
																		return 13.4936;
																}
																else
																{
																	if(sinr < 19)
																		return 10.2581;
																	else
																	{
																		if(ta < 8)
																			return 4.96702;
																		else
																			return 8.61605;
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
														if(sinr < 26.5)
															return 17.943;
														else
															return 22.2119;
													}
													else
													{
														if(payload < 7.5)
															return 11.1376;
														else
															return 11.6342;
													}
												}
											}
										}
									}
									else
									{
										if(payload < 6.5)
											return 13.4499;
										else
											return 22.1071;
									}
								}
								else
								{
									if(ta < 2)
									{
										if(rsrp < -85.5)
											return 9.72316;
										else
											return 10.256525;
									}
									else
									{
										if(rsrq < -6.5)
										{
											if(ta < 14)
											{
												if(ta < 10)
													return 5.18068;
												else
												{
													if(rsrp < -70)
													{
														if(payload < 9.5)
															return 16.2565;
														else
															return 15.6678;
													}
													else
														return 13.8063;
												}
											}
											else
											{
												if(sinr < 29.5)
													return 4.90965;
												else
													return 10.3463;
											}
										}
										else
										{
											if(cell < 13856153.5)
											{
												if(ta < 9)
												{
													if(cell < 12909593.5)
														return 8.92746;
													else
													{
														if(ta < 3.5)
														{
															if(rsrp < -84.5)
															{
																if(sinr < 25.5)
																	return 16.1038;
																else
																	return 17.9775;
															}
															else
																return 12.8949;
														}
														else
														{
															if(rsrp < -85)
																return 16.0107;
															else
																return 11.6839;
														}
													}
												}
												else
													return 17.229;
											}
											else
												return 27.1903;
										}
									}
								}
							}
							else
							{
								if(rsrp < -91.5)
								{
									if(payload < 8)
										return 13.5747;
									else
										return 3.85617;
								}
								else
								{
									if(rsrq < -5.5)
									{
										if(rsrp < -81)
										{
											if(ta < 13.5)
											{
												if(ta < 4)
												{
													if(cqi < 11.5)
														return 13.7741;
													else
														return 17.4055;
												}
												else
													return 21.8108;
											}
											else
												return 31.6623;
										}
										else
										{
											if(ta < 11)
											{
												if(sinr < 20)
													return 14.4875;
												else
												{
													if(sinr < 23)
														return 11.4216;
													else
														return 12.9324;
												}
											}
											else
												return 17.9085;
										}
									}
									else
									{
										if(payload < 8.5)
										{
											if(payload < 7.5)
											{
												if(rsrp < -71.5)
													return 12.4472;
												else
													return 11.065;
											}
											else
												return 8.60678;
										}
										else
											return 15.7;
									}
								}
							}
						}
						else
						{
							if(rsrq < -10.5)
							{
								if(cell < 13875086)
									return 22.9812;
								else
								{
									if(rsrp < -98.5)
									{
										if(rsrp < -99.5)
										{
											if(sinr < 17)
												return 10.0939;
											else
												return 13.6016;
										}
										else
										{
											if(sinr < 19)
												return 8.71555;
											else
												return 7.25185;
										}
									}
									else
										return 13.4605;
								}
							}
							else
							{
								if(rsrp < -100)
								{
									if(ta < 5)
									{
										if(payload < 9)
											return 20.8266;
										else
											return 19.2446;
									}
									else
										return 20.2077;
								}
								else
								{
									if(cell < 13152142.5)
										return 20.9424;
									else
									{
										if(sinr < 17.5)
											return 16.8020666667;
										else
										{
											if(cell < 14345742)
											{
												if(ta < 4.5)
												{
													if(rsrp < -77.5)
													{
														if(sinr < 18.5)
															return 13.9413;
														else
															return 14.5686;
													}
													else
														return 15.5885;
												}
												else
													return 16.3332;
											}
											else
												return 11.9225;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if(sinr < 37.5)
					{
						if(rsrq < -10.5)
						{
							if(rsrp < -68)
								return 9.52041;
							else
								return 9.94036;
						}
						else
						{
							if(payload < 7.5)
							{
								if(f < 2262.5)
								{
									if(velocity < 8.13)
									{
										if(cqi < 14)
											return 11.3983;
										else
											return 8.18331;
									}
									else
									{
										if(rsrp < -70.5)
										{
											if(rsrp < -87.5)
											{
												if(rsrp < -88.5)
													return 13.4842;
												else
													return 22.49;
											}
											else
											{
												if(sinr < 34)
												{
													if(rsrp < -74.5)
													{
														if(sinr < 24.5)
														{
															if(cell < 13401486.5)
															{
																if(sinr < 23)
																{
																	if(rsrq < -5.5)
																	{
																		if(sinr < 21.5)
																		{
																			if(payload < 6)
																			{
																				if(ta < 2)
																					return 13.3824;
																				else
																					return 8.96459;
																			}
																			else
																				return 9.33022;
																		}
																		else
																			return 14.4256;
																	}
																	else
																		return 8.37321;
																}
																else
																{
																	if(rsrp < -83)
																		return 6.79579;
																	else
																		return 4.19654;
																}
															}
															else
															{
																if(payload < 6.5)
																	return 13.7615;
																else
																	return 12.8146;
															}
														}
														else
														{
															if(velocity < 23.32)
															{
																if(ta < 1.5)
																	return 13.979;
																else
																{
																	if(sinr < 29)
																		return 9.45068;
																	else
																		return 9.02425;
																}
															}
															else
															{
																if(rsrq < -5.5)
																	return 15.1556;
																else
																	return 11.7199;
															}
														}
													}
													else
													{
														if(ta < 6.5)
															return 15.544;
														else
														{
															if(rsrq < -6)
																return 13.2144;
															else
																return 12.6249;
														}
													}
												}
												else
													return 22.082;
											}
										}
										else
										{
											if(rsrp < -67.5)
											{
												if(payload < 5.5)
													return 16.5221;
												else
													return 17.1612;
											}
											else
											{
												if(ta < 4.5)
												{
													if(rsrp < -64.5)
														return 14.4796;
													else
														return 14.9733;
												}
												else
												{
													if(rsrp < -63)
														return 11.415;
													else
														return 11.8835;
												}
											}
										}
									}
								}
								else
								{
									if(sinr < 19.5)
									{
										if(velocity < 10.46)
										{
											if(rsrp < -86)
												return 10.7614;
											else
												return 12.975;
										}
										else
										{
											if(payload < 5.5)
												return 19.0386;
											else
												return 13.4228;
										}
									}
									else
									{
										if(payload < 6.5)
										{
											if(sinr < 25.5)
											{
												if(cell < 13875087)
													return 18.1818;
												else
													return 19.95515;
											}
											else
												return 21.838;
										}
										else
											return 26.1194;
									}
								}
							}
							else
							{
								if(ta < 12.5)
								{
									if(velocity < 34.205)
									{
										if(rsrp < -63.5)
										{
											if(rsrp < -87.5)
											{
												if(sinr < 19.5)
												{
													if(rsrp < -91.5)
														return 11.4449;
													else
														return 6.93662;
												}
												else
												{
													if(cqi < 14)
													{
														if(sinr < 25.5)
															return 19.0074;
														else
															return 26.393;
													}
													else
													{
														if(velocity < 20.655)
															return 16.1649;
														else
															return 13.1067;
													}
												}
											}
											else
											{
												if(sinr < 16.5)
													return 14.2552;
												else
												{
													if(payload < 9.5)
													{
														if(ta < 11.5)
														{
															if(rsrp < -71.5)
															{
																if(cell < 12918810)
																{
																	if(velocity < 11.74)
																	{
																		if(velocity < 6.14)
																		{
																			if(velocity < 4.515)
																				return 22.3256;
																			else
																				return 20.2532;
																		}
																		else
																			return 10.8043;
																	}
																	else
																	{
																		if(rsrp < -78.5)
																			return 30.6775;
																		else
																			return 27.5981;
																	}
																}
																else
																{
																	if(sinr < 20)
																		return 19.1789;
																	else
																	{
																		if(ta < 1)
																			return 22.147;
																		else
																		{
																			if(rsrq < -6.5)
																				return 11.5886;
																			else
																			{
																				if(payload < 8.5)
																					return 16.3599;
																				else
																					return 14.3113;
																			}
																		}
																	}
																}
															}
															else
															{
																if(velocity < 11.39)
																{
																	if(sinr < 23.5)
																		return 13.8859;
																	else
																		return 12.1704;
																}
																else
																	return 17.8838;
															}
														}
														else
														{
															if(cqi < 13.5)
																return 24.2241;
															else
																return 25.37;
														}
													}
													else
													{
														if(sinr < 27.5)
														{
															if(ta < 2.5)
																return 26.6756;
															else
																return 18.9304333333;
														}
														else
														{
															if(ta < 3.5)
																return 24.6381;
															else
																return 31.0078;
														}
													}
												}
											}
										}
										else
											return 11.0558;
									}
									else
									{
										if(sinr < 33.5)
										{
											if(rsrp < -70.5)
												return 11.6807;
											else
												return 13.8408;
										}
										else
											return 1.64453;
									}
								}
								else
								{
									if(rsrp < -82.5)
										return 32.0802;
									else
									{
										if(velocity < 35.695)
										{
											if(velocity < 21.695)
											{
												if(rsrp < -67.5)
													return 24.565;
												else
													return 25.2565;
											}
											else
											{
												if(rsrp < -64.5)
												{
													if(payload < 9)
														return 21.9479;
													else
														return 17.8731;
												}
												else
													return 24.7253;
											}
										}
										else
											return 29.9252;
									}
								}
							}
						}
					}
					else
					{
						if(sinr < 38.5)
							return 27.2109;
						else
							return 28.3061;
					}
				}
			}
		}
	}
}

float o2_dl_tree_1(float payload, float rsrp, float rsrq, float sinr, float cqi, float ta, float velocity, float cell, float f)
{
	if(sinr < 7.5)
	{
		if(sinr < 2.5)
		{
			if(ta < 3.5)
			{
				if(rsrp < -75)
				{
					if(velocity < 5.16)
					{
						if(payload < 5)
						{
							if(cqi < 6)
								return 8.19952;
							else
							{
								if(cqi < 9)
									return 1.97385;
								else
									return 3.97219;
							}
						}
						else
						{
							if(cell < 13150611.5)
								return 13.1517;
							else
								return 11.7073;
						}
					}
					else
					{
						if(rsrp < -88.5)
						{
							if(sinr < -2.5)
							{
								if(payload < 3)
								{
									if(rsrp < -97)
										return 3.46921;
									else
										return 2.85816;
								}
								else
								{
									if(rsrp < -99.5)
										return 4.534615;
									else
									{
										if(rsrq < -13)
											return 3.92157;
										else
											return 3.29218;
									}
								}
							}
							else
							{
								if(cell < 12896782)
									return 0.71823;
								else
								{
									if(cqi < 7)
									{
										if(rsrq < -10)
										{
											if(payload < 5)
											{
												if(ta < 0.5)
													return 1.35392;
												else
												{
													if(cqi < 5.5)
													{
														if(ta < 2)
															return 2.38403;
														else
														{
															if(rsrp < -101.5)
																return 3.52734;
															else
																return 3.04878;
														}
													}
													else
													{
														if(velocity < 17.015)
														{
															if(rsrq < -11.5)
																return 3.0095;
															else
															{
																if(rsrp < -102)
																	return 2.08225;
																else
																	return 2.88462;
															}
														}
														else
															return 1.65529;
													}
												}
											}
											else
												return 4.16811;
										}
										else
										{
											if(payload < 0.55)
												return 1.91388;
											else
												return 1.0296;
										}
									}
									else
										return 3.504965;
								}
							}
						}
						else
						{
							if(ta < 0.5)
								return 16.4002;
							else
							{
								if(payload < 4.5)
								{
									if(cqi < 5)
										return 6.43087;
									else
									{
										if(velocity < 12.835)
										{
											if(sinr < 0.5)
											{
												if(rsrq < -10.5)
													return 2.15517;
												else
													return 1.74634;
											}
											else
												return 4.46429;
										}
										else
										{
											if(payload < 2.25)
												return 6.0241;
											else
												return 3.94915;
										}
									}
								}
								else
								{
									if(cell < 13155995)
									{
										if(rsrp < -82.5)
											return 9.502805;
										else
											return 8.78156;
									}
									else
									{
										if(cqi < 7.5)
											return 5.11182;
										else
											return 7.09534;
									}
								}
							}
						}
					}
				}
				else
				{
					if(velocity < 1.455)
					{
						if(payload < 9.5)
							return 22.0521;
						else
							return 14.0326;
					}
					else
					{
						if(rsrp < -69.5)
						{
							if(rsrq < -9.5)
								return 10.4952;
							else
								return 9.73236;
						}
						else
							return 6.96561;
					}
				}
			}
			else
			{
				if(velocity < 30.66)
				{
					if(cell < 14345742)
					{
						if(rsrq < -11.5)
						{
							if(payload < 4.5)
							{
								if(f < 1347.5)
								{
									if(rsrq < -19.5)
									{
										if(payload < 2.5)
											return 7.36648;
										else
											return 1.36869;
									}
									else
									{
										if(rsrq < -14.5)
										{
											if(payload < 2.5)
											{
												if(ta < 27)
												{
													if(ta < 20.5)
													{
														if(payload < 0.75)
														{
															if(cell < 13479682)
																return 0.773571;
															else
																return 0.3262686667;
														}
														else
														{
															if(ta < 6.5)
																return 0.9523865;
															else
															{
																if(velocity < 10.24)
																{
																	if(rsrp < -97.5)
																	{
																		if(sinr < -4.5)
																		{
																			if(sinr < -6.5)
																				return 0.495141;
																			else
																				return 1.00025;
																		}
																		else
																			return 0.4726085;
																	}
																	else
																		return 1.35823;
																}
																else
																{
																	if(ta < 12.5)
																	{
																		if(cell < 13479682)
																			return 0.45751525;
																		else
																		{
																			if(rsrp < -98.5)
																				return 1.09081;
																			else
																				return 0.118392;
																		}
																	}
																	else
																		return 0.244918;
																}
															}
														}
													}
													else
													{
														if(sinr < -6)
															return 1.38708;
														else
															return 0.706527;
													}
												}
												else
													return 0.2266450823;
											}
											else
											{
												if(payload < 3.5)
												{
													if(sinr < -3.5)
													{
														if(sinr < -4.5)
														{
															if(cell < 13481474)
																return 2.34719;
															else
															{
																if(rsrp < -99)
																	return 0.789811;
																else
																	return 1.56699;
															}
														}
														else
															return 4.51213;
													}
													else
														return 0.390308;
												}
												else
												{
													if(cell < 13203457.5)
														return 1.545;
													else
														return 0.7286768333;
												}
											}
										}
										else
										{
											if(payload < 2.5)
											{
												if(cell < 13884418)
												{
													if(ta < 40)
													{
														if(velocity < 8.48)
														{
															if(ta < 11.5)
															{
																if(rsrp < -90)
																	return 0.543571;
																else
																	return 2.67559;
															}
															else
															{
																if(rsrp < -94.5)
																{
																	if(rsrp < -98.5)
																	{
																		if(cell < 13518977.5)
																			return 0.852697;
																		else
																			return 0.288496;
																	}
																	else
																		return 1.60032;
																}
																else
																	return 0.394069;
															}
														}
														else
														{
															if(ta < 12.5)
																return 0.2820110556;
															else
															{
																if(rsrq < -13.5)
																	return 0.3267804;
																else
																{
																	if(rsrp < -91)
																		return 2.1878833333;
																	else
																		return 0.299738;
																}
															}
														}
													}
													else
														return 2.30017;
												}
												else
													return 3.22582;
											}
											else
											{
												if(cell < 13884161.5)
												{
													if(sinr < -2.5)
													{
														if(velocity < 11.61)
															return 1.39952;
														else
															return 1.87999;
													}
													else
													{
														if(rsrp < -88)
															return 0.575528833;
														else
														{
															if(sinr < 1)
																return 1.14438;
															else
																return 2.14161;
														}
													}
												}
												else
												{
													if(payload < 3.5)
														return 8.11085;
													else
														return 1.34941;
												}
											}
										}
									}
								}
								else
								{
									if(cell < 12981146)
									{
										if(rsrq < -15.5)
											return 6.34417;
										else
										{
											if(rsrp < -112.5)
												return 6.23539;
											else
											{
												if(payload < 0.3)
													return 0.592595;
												else
												{
													if(velocity < 12.295)
													{
														if(rsrp < -85)
														{
															if(cqi < 6.5)
															{
																if(velocity < 11.165)
																{
																	if(rsrp < -97)
																		return 1.73762;
																	else
																		return 3.64797;
																}
																else
																	return 0.824997;
															}
															else
															{
																if(rsrq < -13)
																	return 1.93845;
																else
																{
																	if(payload < 2.5)
																		return 0.968992;
																	else
																		return 0.555016;
																}
															}
														}
														else
															return 2.95203;
													}
													else
													{
														if(rsrq < -12.5)
														{
															if(payload < 2)
																return 3.7123;
															else
																return 5.86941;
														}
														else
															return 2.65382;
													}
												}
											}
										}
									}
									else
									{
										if(cell < 13422235)
										{
											if(rsrp < -95.5)
											{
												if(velocity < 11.66)
												{
													if(payload < 0.3)
														return 0.2141456667;
													else
													{
														if(cqi < 6.5)
														{
															if(rsrq < -12.5)
															{
																if(payload < 2.5)
																	return 0.3327485;
																else
																{
																	if(cell < 13416986.5)
																		return 1.221835;
																	else
																		return 0.692282;
																}
															}
															else
																return 1.120234;
														}
														else
														{
															if(rsrp < -98.5)
															{
																if(velocity < 5.575)
																	return 2.10526;
																else
																{
																	if(rsrp < -101)
																		return 1.68599;
																	else
																		return 0.889729;
																}
															}
															else
															{
																if(rsrq < -12.5)
																	return 0.477897;
																else
																	return 1.28659;
															}
														}
													}
												}
												else
												{
													if(velocity < 14.85)
													{
														if(sinr < -7.5)
															return 0.884173;
														else
														{
															if(cqi < 3.5)
																return 0.932021;
															else
																return 0.3150791869;
														}
													}
													else
														return 1.6979077358;
												}
											}
											else
												return 4.11311;
										}
										else
										{
											if(ta < 18.5)
											{
												if(cqi < 7.5)
												{
													if(rsrp < -98.5)
													{
														if(sinr < -1.5)
														{
															if(ta < 8.5)
																return 1.97645;
															else
															{
																if(payload < 1.5)
																	return 1.15825;
																else
																	return 1.6276875;
															}
														}
														else
														{
															if(payload < 1.05)
																return 4.04042;
															else
															{
																if(payload < 2.5)
																	return 1.64626;
																else
																	return 2.71801;
															}
														}
													}
													else
													{
														if(velocity < 16.375)
														{
															if(sinr < -1.5)
															{
																if(rsrq < -12.5)
																	return 1.379745;
																else
																	return 0.932727;
															}
															else
																return 1.682338;
														}
														else
															return 2.38478;
													}
												}
												else
												{
													if(ta < 13)
														return 0.490497;
													else
														return 1.15482;
												}
											}
											else
												return 5.36283;
										}
									}
								}
							}
							else
							{
								if(ta < 46.5)
								{
									if(rsrp < -117)
										return 16.3934;
									else
									{
										if(f < 1347.5)
										{
											if(cell < 13553922)
											{
												if(payload < 8.5)
												{
													if(cqi < 7)
													{
														if(cell < 13524737.5)
														{
															if(sinr < -0.5)
															{
																if(sinr < -3)
																{
																	if(rsrp < -96.5)
																	{
																		if(payload < 6.5)
																			return 1.16913;
																		else
																			return 1.878645;
																	}
																	else
																		return 2.150125;
																}
																else
																{
																	if(cqi < 4.5)
																		return 4.4069433333;
																	else
																	{
																		if(velocity < 22.04)
																		{
																			if(velocity < 13.98)
																				return 2.32545;
																			else
																				return 1.26036;
																		}
																		else
																			return 3.59939;
																	}
																}
															}
															else
															{
																if(rsrp < -95)
																	return 0.546691;
																else
																{
																	if(velocity < 15.035)
																		return 1.22847125;
																	else
																		return 0.8173753333;
																}
															}
														}
														else
														{
															if(rsrq < -18.5)
															{
																if(sinr < -7)
																	return 0.776861;
																else
																	return 0.366502;
															}
															else
															{
																if(velocity < 12.565)
																{
																	if(payload < 7.5)
																	{
																		if(rsrp < -97.5)
																		{
																			if(velocity < 4.975)
																			{
																				if(ta < 10)
																					return 1.05026;
																				else
																				{
																					if(rsrp < -103)
																						return 2.26987;
																					else
																						return 1.50028;
																				}
																			}
																			else
																			{
																				if(sinr < -5.5)
																					return 1.0319;
																				else
																					return 0.542365;
																			}
																		}
																		else
																		{
																			if(rsrp < -94)
																				return 0.4007196667;
																			else
																				return 0.99194;
																		}
																	}
																	else
																		return 1.89464;
																}
																else
																{
																	if(ta < 11)
																	{
																		if(cqi < 3.5)
																			return 0.4881325;
																		else
																			return 1.49934;
																	}
																	else
																		return 2.51873;
																}
															}
														}
													}
													else
														return 6.35425;
												}
												else
												{
													if(rsrp < -100.5)
													{
														if(cqi < 4.5)
														{
															if(rsrp < -102.5)
															{
																if(rsrp < -105.5)
																	return 2.01476;
																else
																	return 2.45821;
															}
															else
																return 0.407641;
														}
														else
														{
															if(velocity < 6.68)
																return 2.51151;
															else
																return 4.06607;
														}
													}
													else
													{
														if(cqi < 5.5)
														{
															if(ta < 10.5)
																return 0.583235;
															else
															{
																if(rsrq < -18)
																	return 1.87261;
																else
																	return 1.3650644561;
															}
														}
														else
														{
															if(payload < 9.5)
															{
																if(rsrp < -94.5)
																	return 4.34442;
																else
																	return 3.45125;
															}
															else
															{
																if(rsrp < -91)
																	return 0.510728;
																else
																	return 2.64769;
															}
														}
													}
												}
											}
											else
											{
												if(ta < 37)
												{
													if(sinr < 0.5)
													{
														if(payload < 6.5)
														{
															if(rsrp < -98)
																return 0.8155874;
															else
															{
																if(sinr < -1)
																{
																	if(rsrq < -13.5)
																		return 1.18154;
																	else
																		return 2.08252;
																}
																else
																	return 2.46268;
															}
														}
														else
														{
															if(cell < 13884289.5)
															{
																if(sinr < -2)
																{
																	if(velocity < 13.055)
																	{
																		if(velocity < 10.635)
																			return 3.8135825;
																		else
																			return 3.0267633333;
																	}
																	else
																		return 1.45549;
																}
																else
																	return 1.5374;
															}
															else
																return 1.0601802118;
														}
													}
													else
													{
														if(cell < 13884418)
															return 4.5865;
														else
															return 3.37517;
													}
												}
												else
													return 14.771;
											}
										}
										else
										{
											if(rsrp < -93.5)
											{
												if(rsrp < -101.5)
												{
													if(rsrp < -109.5)
														return 4.99237;
													else
													{
														if(cell < 13856153.5)
														{
															if(payload < 9.5)
															{
																if(rsrp < -107.5)
																{
																	if(rsrp < -108.5)
																		return 3.18562;
																	else
																		return 2.78009;
																}
																else
																{
																	if(ta < 29.5)
																	{
																		if(ta < 4.5)
																			return 2.1742866667;
																		else
																		{
																			if(rsrp < -103.5)
																			{
																				if(sinr < -4.5)
																					return 0.860387125;
																				else
																					return 0.396983;
																			}
																			else
																			{
																				if(payload < 8)
																				{
																					if(sinr < -3.5)
																						return 2.50031;
																					else
																					{
																						if(rsrp < -102.5)
																							return 1.75115;
																						else
																							return 1.13376;
																					}
																				}
																				else
																					return 0.514234;
																			}
																		}
																	}
																	else
																		return 2.6205;
																}
															}
															else
															{
																if(sinr < -3.5)
																	return 2.84434;
																else
																	return 3.38653;
															}
														}
														else
															return 3.51463;
													}
												}
												else
												{
													if(cell < 13163290.5)
													{
														if(payload < 6)
															return 12.3077;
														else
														{
															if(cqi < 6)
																return 1.7723655556;
															else
																return 3.79381;
														}
													}
													else
													{
														if(payload < 7.5)
														{
															if(rsrp < -100.5)
															{
																if(cqi < 5)
																	return 4.29969;
																else
																	return 5.64732;
															}
															else
															{
																if(payload < 5.5)
																{
																	if(ta < 9.5)
																		return 4.06339;
																	else
																	{
																		if(velocity < 5.09)
																			return 2.7604128571;
																		else
																			return 2.26078;
																	}
																}
																else
																{
																	if(rsrq < -12.5)
																	{
																		if(cqi < 6.5)
																		{
																			if(rsrq < -16.5)
																				return 3.08523;
																			else
																			{
																				if(ta < 6.5)
																				{
																					if(rsrp < -99)
																						return 1.45421;
																					else
																						return 2.087202;
																				}
																				else
																				{
																					if(ta < 12.5)
																					{
																						if(velocity < 4.775)
																						{
																							if(sinr < -3)
																								return 2.07182;
																							else
																								return 1.33178;
																						}
																						else
																							return 0.491224;
																					}
																					else
																					{
																						if(rsrq < -14.5)
																							return 1.6647;
																						else
																							return 2.1098;
																					}
																				}
																			}
																		}
																		else
																			return 4.39009;
																	}
																	else
																	{
																		if(velocity < 10.85)
																			return 0.309338;
																		else
																			return 1.00821;
																	}
																}
															}
														}
														else
														{
															if(ta < 8.5)
																return 0.898806;
															else
															{
																if(ta < 14)
																{
																	if(rsrp < -95.5)
																		return 8.59199;
																	else
																		return 8.01202;
																}
																else
																{
																	if(rsrp < -100.5)
																		return 5.19106;
																	else
																		return 3.61918;
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
													if(rsrq < -14)
														return 10.6866;
													else
													{
														if(cell < 13367578)
															return 6.28931;
														else
															return 3.1594363602;
													}
												}
												else
													return 11.4641;
											}
										}
									}
								}
								else
								{
									if(sinr < -1)
										return 13.8498;
									else
										return 2.50279;
								}
							}
						}
						else
						{
							if(payload < 4.5)
							{
								if(cell < 13884162.5)
								{
									if(rsrp < -86.5)
									{
										if(cqi < 14.5)
										{
											if(cell < 12895513.5)
												return 4.73373;
											else
											{
												if(ta < 7.5)
												{
													if(rsrp < -98.5)
													{
														if(velocity < 15.46)
														{
															if(cqi < 8)
																return 1.6055033333;
															else
																return 0.851154;
														}
														else
															return 2.76818;
													}
													else
													{
														if(cqi < 6)
														{
															if(rsrq < -9.5)
																return 1.70916;
															else
																return 1.00673;
														}
														else
														{
															if(rsrp < -95)
																return 2.91174;
															else
															{
																if(cqi < 7.5)
																	return 4.10678;
																else
																{
																	if(payload < 3)
																		return 3.76471;
																	else
																		return 3.13203;
																}
															}
														}
													}
												}
												else
												{
													if(payload < 0.75)
													{
														if(velocity < 12.64)
															return 0.3892835;
														else
															return 1.243505;
													}
													else
													{
														if(ta < 11)
														{
															if(cell < 13685262)
																return 0.8673325;
															else
																return 1.31105;
														}
														else
														{
															if(payload < 1.5)
															{
																if(ta < 24.5)
																{
																	if(rsrq < -10)
																		return 1.58447;
																	else
																		return 2.168845;
																}
																else
																	return 2.52685;
															}
															else
																return 1.38207;
														}
													}
												}
											}
										}
										else
											return 6.9808;
									}
									else
									{
										if(ta < 8)
											return 5.6948175;
										else
										{
											if(rsrp < -84.5)
											{
												if(rsrq < -10)
													return 4.23282;
												else
													return 3.68579;
											}
											else
												return 4.89122;
										}
									}
								}
								else
								{
									if(sinr < 0.5)
									{
										if(velocity < 10.095)
											return 10.0671;
										else
											return 6.93241;
									}
									else
									{
										if(rsrp < -96.5)
										{
											if(rsrq < -10)
												return 8.83002;
											else
											{
												if(sinr < 1.5)
													return 6.0241;
												else
													return 6.75105;
											}
										}
										else
										{
											if(rsrp < -93)
												return 2.81426;
											else
												return 1.98167;
										}
									}
								}
							}
							else
							{
								if(rsrp < -84.5)
								{
									if(cell < 13518990.5)
									{
										if(rsrp < -104.5)
											return 11.1328;
										else
										{
											if(rsrq < -7.5)
											{
												if(sinr < -3)
													return 8.79282;
												else
												{
													if(ta < 6.5)
													{
														if(rsrp < -98)
															return 2.33483;
														else
															return 0.953743;
													}
													else
													{
														if(rsrp < -90)
														{
															if(velocity < 12.385)
																return 6.7923957143;
															else
															{
																if(rsrp < -96)
																	return 5.14848;
																else
																	return 5.5973533333;
															}
														}
														else
															return 3.12663;
													}
												}
											}
											else
												return 12.3098;
										}
									}
									else
									{
										if(sinr < 1.5)
										{
											if(velocity < 6.745)
											{
												if(rsrp < -91.5)
													return 2.35623;
												else
													return 4.3071;
											}
											else
											{
												if(rsrq < -8.5)
												{
													if(velocity < 11.035)
														return 2.38178;
													else
														return 1.92031;
												}
												else
													return 0.62498;
											}
										}
										else
										{
											if(cell < 14323732)
											{
												if(ta < 37)
													return 6.87403;
												else
													return 6.27303;
											}
											else
												return 1.34211;
										}
									}
								}
								else
								{
									if(rsrq < -7.5)
										return 12.343;
									else
										return 10.6121;
								}
							}
						}
					}
					else
						return 18.8813;
				}
				else
				{
					if(velocity < 31.995)
					{
						if(rsrp < -96)
							return 19.6223;
						else
						{
							if(cqi < 6.5)
								return 3.95788;
							else
								return 8.4674;
						}
					}
					else
					{
						if(rsrp < -82.5)
						{
							if(rsrq < -19.5)
								return 1.98376;
							else
							{
								if(cqi < 7.5)
								{
									if(rsrp < -99.5)
									{
										if(ta < 37.5)
										{
											if(cell < 13816217.5)
											{
												if(rsrq < -11)
												{
													if(sinr < -6.5)
														return 3.98059;
													else
														return 5.04255;
												}
												else
													return 5.83153;
											}
											else
												return 1.83909;
										}
										else
											return 1.90932;
									}
									else
									{
										if(sinr < -6.5)
										{
											if(rsrq < -12)
												return 4.76596;
											else
												return 3.63174;
										}
										else
										{
											if(ta < 17.5)
											{
												if(velocity < 34.625)
												{
													if(rsrq < -9)
														return 9.95988;
													else
														return 10.7239;
												}
												else
												{
													if(velocity < 35.335)
														return 6.07626;
													else
													{
														if(sinr < -2.5)
															return 8.76712;
														else
															return 7.998;
													}
												}
											}
											else
											{
												if(rsrp < -97)
													return 6.28239;
												else
													return 6.77201;
											}
										}
									}
								}
								else
								{
									if(payload < 2.5)
										return 3.37695;
									else
										return 1.90794;
								}
							}
						}
						else
						{
							if(ta < 8)
							{
								if(velocity < 34.71)
									return 13.4369;
								else
									return 11.7302;
							}
							else
								return 8.50681;
						}
					}
				}
			}
		}
		else
		{
			if(payload < 3.5)
			{
				if(rsrp < -89.5)
				{
					if(rsrq < -10.5)
					{
						if(rsrq < -12.5)
						{
							if(rsrp < -99)
								return 11.0957;
							else
							{
								if(payload < 1.5)
								{
									if(rsrp < -93.5)
										return 0.132251;
									else
									{
										if(rsrq < -14)
											return 1.68777;
										else
											return 1.21914;
									}
								}
								else
								{
									if(ta < 12)
									{
										if(velocity < 3.47)
										{
											if(payload < 2.5)
												return 4.30339;
											else
												return 3.75235;
										}
										else
										{
											if(cell < 13416974.5)
											{
												if(rsrp < -94.5)
													return 2.69209;
												else
												{
													if(cell < 13163150.5)
														return 2.03649;
													else
														return 2.56492;
												}
											}
											else
												return 1.30612;
										}
									}
									else
										return 6.16491;
								}
							}
						}
						else
						{
							if(f < 1347.5)
								return 0.637141;
							else
							{
								if(ta < 6.5)
								{
									if(sinr < 5.5)
									{
										if(payload < 0.55)
											return 1.74293;
										else
										{
											if(ta < 5.5)
												return 1.74102;
											else
											{
												if(payload < 2.5)
													return 0.8273976667;
												else
													return 1.41501;
											}
										}
									}
									else
									{
										if(rsrp < -93)
											return 4.25534;
										else
											return 2.38096;
									}
								}
								else
								{
									if(sinr < 3.5)
									{
										if(payload < 0.75)
											return 0.727141;
										else
										{
											if(rsrq < -11.5)
												return 2.37883;
											else
												return 3.27735;
										}
									}
									else
									{
										if(rsrp < -94)
											return 1.6678366667;
										else
										{
											if(velocity < 6.07)
											{
												if(payload < 0.75)
													return 2.10637;
												else
												{
													if(payload < 1.5)
														return 3.77003;
													else
														return 3.28677;
												}
											}
											else
											{
												if(rsrp < -90.5)
												{
													if(ta < 14)
														return 6.02864;
													else
														return 4.60299;
												}
												else
													return 2.82919;
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if(velocity < 12.995)
						{
							if(rsrp < -103.5)
							{
								if(velocity < 9.44)
								{
									if(ta < 4.5)
										return 0.697898;
									else
									{
										if(payload < 0.3)
											return 3.36136;
										else
										{
											if(ta < 5.5)
												return 4.89297;
											else
												return 4.15369;
										}
									}
								}
								else
								{
									if(cqi < 8.5)
										return 10.3359;
									else
										return 8.84956;
								}
							}
							else
							{
								if(payload < 1.5)
								{
									if(f < 1347.5)
										return 4.34546;
									else
									{
										if(rsrp < -96.5)
										{
											if(f < 2262.5)
											{
												if(velocity < 10.92)
													return 3.95257;
												else
												{
													if(payload < 0.55)
														return 3.18726;
													else
														return 2.78843;
												}
											}
											else
												return 1.76212;
										}
										else
											return 2.242835;
									}
								}
								else
								{
									if(cqi < 8)
										return 1.9688833333;
									else
										return 0.881348;
								}
							}
						}
						else
						{
							if(velocity < 15.765)
							{
								if(cell < 13884186.5)
								{
									if(cqi < 6.5)
										return 8.63465;
									else
										return 4.2750275;
								}
								else
									return 14.9254;
							}
							else
							{
								if(velocity < 33.04)
								{
									if(ta < 1.5)
									{
										if(rsrq < -9)
											return 2.61097;
										else
											return 4.37637;
									}
									else
									{
										if(payload < 0.55)
											return 0.503147;
										else
											return 2.1451625;
									}
								}
								else
									return 5.97015;
							}
						}
					}
				}
				else
				{
					if(velocity < 34.985)
					{
						if(rsrq < -8.5)
						{
							if(velocity < 12.055)
							{
								if(cqi < 9.5)
								{
									if(velocity < 8.665)
									{
										if(f < 2262.5)
										{
											if(velocity < 4.885)
											{
												if(velocity < 1.455)
												{
													if(rsrp < -86.5)
													{
														if(rsrq < -12.5)
															return 4.72534;
														else
															return 3.3637;
													}
													else
														return 3.11526;
												}
												else
													return 1.01339;
											}
											else
												return 5.57103;
										}
										else
										{
											if(cqi < 8.5)
												return 1.01339;
											else
												return 2.35294;
										}
									}
									else
									{
										if(cqi < 6.5)
											return 0.396434;
										else
										{
											if(rsrp < -88.5)
												return 1.43241;
											else
												return 2.21076;
										}
									}
								}
								else
								{
									if(rsrq < -10)
										return 5.37273;
									else
										return 4.46929;
								}
							}
							else
							{
								if(rsrp < -78)
								{
									if(velocity < 12.565)
										return 6.4;
									else
									{
										if(cell < 13823002.5)
										{
											if(ta < 1.5)
												return 3.724075;
											else
												return 4.26102;
										}
										else
										{
											if(rsrp < -88)
												return 3.4154;
											else
												return 5.33065;
										}
									}
								}
								else
									return 7.27273;
							}
						}
						else
						{
							if(f < 2262.5)
							{
								if(ta < 8)
								{
									if(velocity < 18.595)
									{
										if(payload < 1.25)
											return 6.14441;
										else
										{
											if(rsrq < -6.5)
												return 3.86038;
											else
												return 4.92156;
										}
									}
									else
									{
										if(cqi < 9)
											return 9.69305;
										else
											return 6.10532;
									}
								}
								else
								{
									if(payload < 2.5)
									{
										if(cqi < 10.5)
										{
											if(payload < 1.25)
											{
												if(rsrp < -87)
													return 2.75292;
												else
												{
													if(ta < 24.5)
														return 3.84787;
													else
														return 2.86328;
												}
											}
											else
												return 4.24403;
										}
										else
											return 6.6778;
									}
									else
									{
										if(rsrp < -86)
											return 5.68855;
										else
											return 5.17799;
									}
								}
							}
							else
							{
								if(rsrp < -82)
									return 11.168;
								else
									return 7.67386;
							}
						}
					}
					else
						return 9.65795;
				}
			}
			else
			{
				if(cell < 13856141.5)
				{
					if(ta < 5.5)
					{
						if(ta < 0.5)
						{
							if(payload < 6.5)
								return 5.5788;
							else
								return 1.9761;
						}
						else
						{
							if(rsrq < -10.5)
							{
								if(rsrp < -89.5)
								{
									if(velocity < 8.19)
										return 10.0851;
									else
									{
										if(cell < 12914202.5)
										{
											if(rsrq < -11.5)
												return 5.775455;
											else
												return 5.04668;
										}
										else
											return 3.60036;
									}
								}
								else
								{
									if(rsrq < -12.5)
										return 6.88666;
									else
									{
										if(velocity < 16.375)
										{
											if(payload < 7.5)
											{
												if(payload < 6.5)
												{
													if(velocity < 15.705)
													{
														if(rsrp < -76)
															return 8.69376;
														else
															return 9.42285;
													}
													else
														return 10.5587;
												}
												else
													return 11.7008;
											}
											else
												return 9.002795;
										}
										else
											return 16.0275;
									}
								}
							}
							else
							{
								if(cqi < 5.5)
								{
									if(rsrp < -99)
										return 10.2433;
									else
										return 6.33341;
								}
								else
								{
									if(ta < 1.5)
									{
										if(sinr < 3.5)
										{
											if(cqi < 8.5)
												return 10.5611;
											else
												return 7.62995;
										}
										else
										{
											if(cell < 12896782)
												return 10.1574;
											else
											{
												if(rsrq < -9)
													return 13.8129;
												else
													return 14.2433;
											}
										}
									}
									else
									{
										if(cell < 13161621)
										{
											if(rsrq < -7.5)
											{
												if(cell < 12909593.5)
												{
													if(payload < 5.5)
														return 10.5332;
													else
														return 8.18833;
												}
												else
												{
													if(rsrp < -95)
														return 14.1689333333;
													else
														return 18.2163;
												}
											}
											else
											{
												if(payload < 8)
													return 20.0753;
												else
													return 16.4914;
											}
										}
										else
											return 20.2532;
									}
								}
							}
						}
					}
					else
					{
						if(rsrq < -9.5)
						{
							if(velocity < 13.04)
							{
								if(cell < 12904590.5)
									return 17.192;
								else
								{
									if(cell < 13416974.5)
									{
										if(payload < 8.5)
										{
											if(rsrp < -93.5)
												return 8.60369;
											else
											{
												if(cqi < 5.5)
												{
													if(sinr < 6.5)
														return 4.70754;
													else
														return 6.96409;
												}
												else
												{
													if(ta < 10)
													{
														if(velocity < 2.935)
															return 6.353305;
														else
															return 4.82073;
													}
													else
													{
														if(payload < 4.5)
														{
															if(ta < 15)
																return 1.67645;
															else
																return 2.12837;
														}
														else
														{
															if(cqi < 6.5)
															{
																if(ta < 15.5)
																{
																	if(payload < 6)
																		return 2.99401;
																	else
																		return 2.58672;
																}
																else
																{
																	if(rsrq < -11.5)
																		return 4.37009;
																	else
																		return 3.83914;
																}
															}
															else
																return 3.1619633333;
														}
													}
												}
											}
										}
										else
										{
											if(payload < 9.5)
												return 9.48742;
											else
												return 5.84924;
										}
									}
									else
									{
										if(velocity < 6.38)
										{
											if(cell < 13542402.5)
											{
												if(sinr < 5.5)
												{
													if(cqi < 8)
													{
														if(cqi < 5.5)
														{
															if(rsrq < -12.5)
																return 1.50875;
															else
																return 1.08812;
														}
														else
														{
															if(rsrp < -90.5)
															{
																if(sinr < 3.5)
																	return 2.44873;
																else
																	return 3.766035;
															}
															else
																return 1.81637;
														}
													}
													else
														return 0.566045;
												}
												else
												{
													if(payload < 6.5)
													{
														if(payload < 4.5)
															return 3.02086;
														else
															return 3.83509;
													}
													else
														return 5.39493;
												}
											}
											else
											{
												if(cell < 13824282)
												{
													if(rsrp < -92)
														return 5.11727;
													else
													{
														if(rsrq < -11)
															return 7.28597;
														else
															return 6.55141;
													}
												}
												else
												{
													if(rsrq < -11)
														return 3.3442;
													else
														return 5.28402;
												}
											}
										}
										else
										{
											if(payload < 4.5)
												return 5.22278;
											else
											{
												if(f < 1347.5)
													return 0.730747125;
												else
												{
													if(sinr < 3.5)
														return 3.37325;
													else
														return 1.3610575;
												}
											}
										}
									}
								}
							}
							else
							{
								if(cqi < 6.5)
								{
									if(ta < 10)
									{
										if(sinr < 3.5)
											return 3.54296;
										else
										{
											if(rsrp < -97)
												return 3.25998;
											else
												return 2.56363;
										}
									}
									else
										return 1.21244;
								}
								else
								{
									if(payload < 9.5)
									{
										if(rsrq < -11)
										{
											if(payload < 5.5)
												return 6.86342;
											else
												return 6.18397;
										}
										else
											return 4.35967;
									}
									else
									{
										if(cqi < 9.5)
											return 10.62408;
										else
											return 5.65411;
									}
								}
							}
						}
						else
						{
							if(f < 1347.5)
							{
								if(rsrp < -89.5)
								{
									if(payload < 5)
									{
										if(sinr < 3.5)
											return 2.46723;
										else
											return 4.20168;
									}
									else
									{
										if(cqi < 6.5)
											return 5.61572;
										else
											return 6.71047;
									}
								}
								else
								{
									if(velocity < 3.89)
										return 2.65062;
									else
									{
										if(cqi < 4.5)
											return 6.10454;
										else
										{
											if(ta < 8.5)
											{
												if(payload < 8)
													return 7.63602;
												else
												{
													if(rsrq < -8.5)
														return 12.7247;
													else
														return 10.4357;
												}
											}
											else
												return 8.21355;
										}
									}
								}
							}
							else
							{
								if(rsrq < -8.5)
								{
									if(rsrp < -104.5)
										return 19.0099;
									else
									{
										if(rsrp < -94.5)
										{
											if(cqi < 5.5)
												return 5.52486;
											else
												return 2.92951;
										}
										else
										{
											if(cell < 12903066)
												return 5.15227;
											else
											{
												if(cqi < 8.5)
												{
													if(payload < 5)
														return 12.9817;
													else
														return 14.37025;
												}
												else
													return 10.1266;
											}
										}
									}
								}
								else
								{
									if(rsrp < -92.5)
									{
										if(ta < 10)
											return 5.42189;
										else
										{
											if(sinr < 6.5)
												return 3.36205;
											else
												return 2.63259;
										}
									}
									else
									{
										if(rsrp < -91.5)
										{
											if(cqi < 7)
												return 7.52587;
											else
												return 5.69851;
										}
										else
										{
											if(sinr < 6.5)
											{
												if(sinr < 5.5)
													return 9.5454;
												else
													return 10.0503;
											}
											else
												return 8.2144;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if(rsrq < -11.5)
					{
						if(cqi < 8.5)
						{
							if(rsrp < -91.5)
							{
								if(payload < 5.5)
									return 12.2652;
								else
								{
									if(cell < 14345742)
										return 7.25737;
									else
										return 11.5345;
								}
							}
							else
							{
								if(rsrq < -12.5)
									return 1.84373;
								else
									return 6.05373;
							}
						}
						else
						{
							if(velocity < 8.27)
								return 1.39616;
							else
							{
								if(payload < 8)
									return 3.75029;
								else
									return 4.25509;
							}
						}
					}
					else
					{
						if(cell < 14092942)
						{
							if(rsrq < -9.5)
							{
								if(ta < 12.5)
									return 6.93498;
								else
									return 13.7339;
							}
							else
							{
								if(rsrq < -7.5)
								{
									if(sinr < 3.5)
									{
										if(cqi < 7)
											return 15.4589;
										else
											return 16.6263;
									}
									else
									{
										if(f < 1347.5)
											return 17.1812;
										else
										{
											if(payload < 6.5)
												return 20.1005;
											else
												return 18.799;
										}
									}
								}
								else
									return 11.5607;
							}
						}
						else
						{
							if(cell < 14345742)
							{
								if(rsrp < -105)
									return 2.12508;
								else
								{
									if(rsrq < -7.5)
										return 11.1966;
									else
										return 7.51997;
								}
							}
							else
							{
								if(rsrp < -101.5)
								{
									if(sinr < 3.5)
										return 11.5053;
									else
										return 12.0437;
								}
								else
								{
									if(payload < 7)
										return 12.3235;
									else
										return 13.4539;
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
		if(cell < 12914202)
		{
			if(f < 2262.5)
			{
				if(rsrp < -66.5)
				{
					if(payload < 6.5)
					{
						if(payload < 2.5)
						{
							if(rsrp < -89.5)
							{
								if(cell < 12909466.5)
								{
									if(ta < 7.5)
									{
										if(cqi < 11.5)
										{
											if(cqi < 7.5)
											{
												if(payload < 0.55)
													return 3.38984;
												else
													return 5.55556;
											}
											else
											{
												if(cell < 12903066.5)
												{
													if(velocity < 15.55)
													{
														if(payload < 1.5)
														{
															if(payload < 0.75)
																return 2.32423;
															else
															{
																if(velocity < 7.425)
																	return 1.21341;
																else
																	return 1.7301;
															}
														}
														else
															return 2.56451;
													}
													else
														return 2.97841;
												}
												else
													return 0.950796;
											}
										}
										else
											return 7.44879;
									}
									else
									{
										if(cqi < 8.5)
											return 5.0898266667;
										else
										{
											if(velocity < 3.16)
												return 1.93283;
											else
												return 3.7881325;
										}
									}
								}
								else
								{
									if(rsrq < -7.5)
									{
										if(sinr < 12)
											return 1.62338;
										else
										{
											if(rsrp < -93)
												return 5.62588;
											else
												return 4;
										}
									}
									else
									{
										if(rsrp < -92.5)
											return 4.37278;
										else
										{
											if(payload < 0.75)
												return 7.20721;
											else
												return 6.50485;
										}
									}
								}
							}
							else
							{
								if(sinr < 20.5)
								{
									if(velocity < 10.74)
									{
										if(rsrp < -81)
										{
											if(velocity < 9.92)
											{
												if(payload < 0.3)
												{
													if(rsrq < -8.5)
														return 3.49346;
													else
													{
														if(f < 1347.5)
															return 4.96896;
														else
															return 5.63382;
													}
												}
												else
												{
													if(rsrq < -7.5)
													{
														if(cqi < 9.5)
														{
															if(payload < 1.25)
																return 8.69565;
															else
															{
																if(ta < 7.5)
																	return 3.1917;
																else
																	return 9.93172;
															}
														}
														else
														{
															if(velocity < 2.965)
																return 7.64088;
															else
															{
																if(rsrq < -10)
																	return 10.6596;
																else
																	return 10.1652;
															}
														}
													}
													else
													{
														if(rsrp < -86)
															return 5.33333;
														else
															return 6.75676;
													}
												}
											}
											else
												return 2.24404;
										}
										else
										{
											if(payload < 0.75)
											{
												if(payload < 0.3)
												{
													if(sinr < 12.5)
														return 4.3716;
													else
														return 3.802225;
												}
												else
												{
													if(ta < 8.5)
														return 3.92157;
													else
													{
														if(sinr < 19.5)
														{
															if(rsrp < -68.5)
															{
																if(cqi < 11)
																	return 7.0922;
																else
																	return 11.0193;
															}
															else
																return 4.89596;
														}
														else
															return 8.08081;
													}
												}
											}
											else
											{
												if(cqi < 9.5)
													return 6.48824;
												else
												{
													if(sinr < 15.5)
													{
														if(velocity < 3.805)
															return 0.759842;
														else
															return 1.87793;
													}
													else
													{
														if(cqi < 11.5)
														{
															if(cqi < 10.5)
																return 4.11417;
															else
																return 5.46075;
														}
														else
														{
															if(rsrp < -77)
																return 1.45428;
															else
																return 3.50186;
														}
													}
												}
											}
										}
									}
									else
									{
										if(sinr < 17.5)
										{
											if(ta < 15.5)
											{
												if(velocity < 12.125)
												{
													if(sinr < 16)
														return 2.64288;
													else
														return 2.24845;
												}
												else
												{
													if(payload < 0.75)
													{
														if(rsrq < -9.5)
															return 3.9801;
														else
															return 3.4086966667;
													}
													else
													{
														if(rsrp < -82)
														{
															if(velocity < 14.17)
																return 3.8558566667;
															else
															{
																if(velocity < 15.715)
																	return 4.34075;
																else
																	return 4.75059;
															}
														}
														else
															return 7.64818;
													}
												}
											}
											else
											{
												if(rsrp < -85)
													return 1.91939;
												else
													return 2.59319;
											}
										}
										else
										{
											if(cell < 12909466)
											{
												if(velocity < 16.775)
												{
													if(rsrp < -73.5)
													{
														if(rsrp < -80.5)
															return 5.13479;
														else
															return 4.24178;
													}
													else
														return 5.33335;
												}
												else
													return 7.44879;
											}
											else
											{
												if(rsrp < -74.5)
													return 9.68523;
												else
													return 9.1954;
											}
										}
									}
								}
								else
								{
									if(velocity < 5.565)
									{
										if(rsrp < -85)
											return 5.08421;
										else
										{
											if(sinr < 29.5)
												return 8.67679;
											else
												return 6.77966;
										}
									}
									else
									{
										if(cqi < 10.5)
										{
											if(payload < 1.25)
												return 2.75672;
											else
												return 4.23841;
										}
										else
										{
											if(sinr < 23.5)
											{
												if(sinr < 21.5)
													return 1.43472;
												else
												{
													if(rsrp < -77)
														return 2.62037;
													else
													{
														if(rsrp < -74)
															return 1.74711;
														else
															return 2.331;
													}
												}
											}
											else
												return 3.86475;
										}
									}
								}
							}
						}
						else
						{
							if(rsrp < -88.5)
							{
								if(rsrq < -7.5)
								{
									if(cqi < 7.5)
									{
										if(rsrq < -8.5)
											return 3.01796;
										else
											return 2.54642;
									}
									else
									{
										if(payload < 4.5)
										{
											if(ta < 13.5)
											{
												if(rsrp < -93.5)
													return 5.71531;
												else
												{
													if(velocity < 17.755)
													{
														if(cqi < 9.5)
															return 3.882645;
														else
															return 2.94686;
													}
													else
														return 5.23732;
												}
											}
											else
												return 1.88472;
										}
										else
										{
											if(cell < 12903066.5)
											{
												if(velocity < 11.91)
													return 9.67118;
												else
												{
													if(velocity < 14.66)
														return 7.19683;
													else
														return 5.06714;
												}
											}
											else
											{
												if(rsrp < -92)
													return 5.08313;
												else
													return 6.23701;
											}
										}
									}
								}
								else
								{
									if(sinr < 18.5)
									{
										if(rsrp < -89.5)
											return 10.9863;
										else
											return 9.00394;
									}
									else
										return 4.47219;
								}
							}
							else
							{
								if(rsrp < -87.5)
								{
									if(ta < 13.5)
										return 11.68626;
									else
										return 6.02107;
								}
								else
								{
									if(rsrp < -75.5)
									{
										if(ta < 6)
										{
											if(rsrp < -77.5)
											{
												if(sinr < 15)
												{
													if(sinr < 11.5)
													{
														if(cell < 12903193.5)
															return 6.2186933333;
														else
															return 5.4071833333;
													}
													else
													{
														if(velocity < 13.485)
															return 3.47222;
														else
															return 4.804115;
													}
												}
												else
												{
													if(rsrp < -82)
													{
														if(rsrq < -8.5)
															return 9.03527;
														else
														{
															if(f < 1347.5)
															{
																if(payload < 4.5)
																	return 9.72053;
																else
																	return 7.59253;
															}
															else
																return 5.51851;
														}
													}
													else
													{
														if(rsrp < -80.5)
															return 5.04414;
														else
															return 6.09663;
													}
												}
											}
											else
											{
												if(rsrp < -76.5)
													return 10.7335;
												else
													return 16.7481;
											}
										}
										else
										{
											if(rsrp < -86.5)
											{
												if(cqi < 8.5)
													return 6.91842;
												else
													return 8.39983;
											}
											else
											{
												if(cqi < 10.5)
													return 13.1796;
												else
												{
													if(sinr < 17)
													{
														if(velocity < 5.185)
														{
															if(rsrp < -81)
																return 5.23475;
															else
																return 7.02124;
														}
														else
															return 10.8932;
													}
													else
													{
														if(sinr < 23)
														{
															if(ta < 10.5)
																return 16.6182;
															else
																return 10.1458;
														}
														else
															return 8.2713;
													}
												}
											}
										}
									}
									else
									{
										if(rsrq < -9)
										{
											if(velocity < 15.155)
												return 6.30915;
											else
											{
												if(rsrp < -72.5)
													return 10.1497;
												else
													return 6.8699;
											}
										}
										else
										{
											if(payload < 3.5)
											{
												if(rsrp < -67.5)
												{
													if(ta < 1.5)
														return 5.26431;
													else
													{
														if(rsrq < -7.5)
															return 3.78788;
														else
															return 4.452856;
													}
												}
												else
													return 7.08801;
											}
											else
											{
												if(f < 1347.5)
													return 12.5737;
												else
												{
													if(sinr < 18)
													{
														if(cqi < 6.5)
															return 7.91452;
														else
														{
															if(velocity < 13.015)
															{
																if(sinr < 15)
																	return 5.292502;
																else
																	return 5.84297;
															}
															else
																return 4.2584;
														}
													}
													else
													{
														if(velocity < 5.27)
															return 5.82411;
														else
															return 8.1142966667;
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
						if(ta < 12.5)
						{
							if(ta < 9)
							{
								if(velocity < 15.235)
								{
									if(cell < 12898318)
									{
										if(payload < 9.5)
										{
											if(payload < 7.5)
												return 12.4528;
											else
											{
												if(ta < 1.5)
												{
													if(cqi < 8.5)
														return 11.8091;
													else
													{
														if(rsrq < -6.5)
														{
															if(rsrq < -9.5)
																return 8.40532;
															else
															{
																if(rsrp < -86.5)
																	return 9.4857;
																else
																	return 7.45834;
															}
														}
														else
															return 9.65105;
													}
												}
												else
													return 12.1993;
											}
										}
										else
										{
											if(rsrp < -85)
												return 5.33725;
											else
												return 8.29962;
										}
									}
									else
									{
										if(rsrq < -11.5)
										{
											if(cell < 12909467)
											{
												if(cell < 12904590.5)
													return 3.05157;
												else
													return 4.62428;
											}
											else
											{
												if(ta < 7.5)
												{
													if(cqi < 8.5)
														return 6.8578;
													else
														return 5.17369;
												}
												else
													return 7.57268;
											}
										}
										else
										{
											if(rsrp < -91.5)
											{
												if(rsrp < -92.5)
													return 5.18068;
												else
													return 6.86916;
											}
											else
											{
												if(sinr < 18)
												{
													if(cqi < 9.5)
													{
														if(cell < 12909466)
															return 5.77386;
														else
															return 7.16662;
													}
													else
													{
														if(rsrp < -76.5)
															return 9.32537;
														else
															return 8.10361;
													}
												}
												else
												{
													if(payload < 8.5)
														return 9.56366;
													else
														return 8.92746;
												}
											}
										}
									}
								}
								else
								{
									if(velocity < 15.405)
										return 23.0358;
									else
									{
										if(ta < 4.5)
										{
											if(sinr < 14.5)
											{
												if(sinr < 8.5)
													return 10.7817;
												else
												{
													if(rsrq < -9)
														return 7.6467933333;
													else
														return 6.335246;
												}
											}
											else
											{
												if(payload < 8.5)
												{
													if(velocity < 16.3)
													{
														if(payload < 7.5)
															return 9.33022;
														else
															return 9.81294;
													}
													else
													{
														if(sinr < 22.5)
															return 10.2581;
														else
															return 10.7185;
													}
												}
												else
													return 16.1038;
											}
										}
										else
											return 18.7189;
									}
								}
							}
							else
							{
								if(sinr < 23.5)
								{
									if(ta < 10.5)
									{
										if(payload < 8.5)
											return 7.96384;
										else
										{
											if(cqi < 14.5)
											{
												if(velocity < 7.4)
												{
													if(rsrq < -9)
														return 17.8571;
													else
														return 18.2417;
												}
												else
													return 14.7692;
											}
											else
												return 22.3256;
										}
									}
									else
									{
										if(rsrq < -5.5)
										{
											if(rsrq < -10)
												return 15.0858;
											else
											{
												if(rsrp < -68)
												{
													if(sinr < 15)
													{
														if(payload < 9)
															return 7.94538;
														else
															return 8.75848;
													}
													else
													{
														if(ta < 11.5)
															return 10.3312;
														else
															return 11.8149;
													}
												}
												else
													return 6.17284;
											}
										}
										else
											return 18.4067;
									}
								}
								else
								{
									if(payload < 8)
										return 17.5055;
									else
										return 20.2532;
								}
							}
						}
						else
						{
							if(cqi < 10.5)
							{
								if(ta < 15.5)
								{
									if(rsrq < -9.5)
									{
										if(payload < 9.5)
										{
											if(cqi < 8.5)
												return 3.48905;
											else
												return 5.02287;
										}
										else
										{
											if(cqi < 7.5)
												return 9.98129;
											else
											{
												if(sinr < 9.5)
													return 8.09143;
												else
													return 6.80504;
											}
										}
									}
									else
									{
										if(payload < 7.5)
											return 7.17949;
										else
										{
											if(sinr < 17.5)
											{
												if(velocity < 9.81)
													return 13.1989;
												else
												{
													if(rsrp < -88.5)
														return 11.4531;
													else
														return 10.9664;
												}
											}
											else
											{
												if(ta < 14)
													return 10.9256;
												else
													return 10.3463;
											}
										}
									}
								}
								else
								{
									if(sinr < 11)
										return 5.28003;
									else
										return 3.62956;
								}
							}
							else
							{
								if(rsrq < -10.5)
									return 3.584625;
								else
								{
									if(payload < 7.5)
									{
										if(ta < 13.5)
											return 5.49504;
										else
											return 4.51977;
									}
									else
									{
										if(cqi < 13.5)
											return 7.8359933333;
										else
											return 9.04722;
									}
								}
							}
						}
					}
				}
				else
				{
					if(cqi < 11.5)
					{
						if(ta < 5.5)
							return 13.4499;
						else
						{
							if(payload < 0.55)
								return 5.33335;
							else
							{
								if(rsrq < -5.5)
									return 6.28437;
								else
									return 5.54895;
							}
						}
					}
					else
					{
						if(rsrp < -59.5)
						{
							if(cqi < 14)
							{
								if(sinr < 20)
									return 10.9589;
								else
								{
									if(payload < 7.5)
										return 15.1515;
									else
									{
										if(cqi < 12.5)
											return 22.1071;
										else
											return 24.2241;
									}
								}
							}
							else
							{
								if(payload < 2.5)
								{
									if(rsrq < -8)
										return 2.77971;
									else
										return 6.3745;
								}
								else
								{
									if(rsrq < -6.5)
									{
										if(sinr < 15)
											return 14.9848;
										else
										{
											if(payload < 4.5)
												return 13.0346;
											else
											{
												if(payload < 6)
													return 7.2767;
												else
												{
													if(rsrp < -65.5)
														return 12.8323;
													else
													{
														if(velocity < 9.155)
															return 11.0752;
														else
															return 10.2715;
													}
												}
											}
										}
									}
									else
									{
										if(payload < 9.5)
											return 16.7286;
										else
											return 18.9215;
									}
								}
							}
						}
						else
							return 25.2565;
					}
				}
			}
			else
			{
				if(rsrq < -9.5)
				{
					if(rsrp < -89)
						return 15.788;
					else
						return 20.9424;
				}
				else
				{
					if(payload < 6)
					{
						if(rsrp < -90.5)
							return 4.21054;
						else
						{
							if(rsrp < -82.5)
							{
								if(payload < 2.5)
								{
									if(cqi < 11.5)
									{
										if(velocity < 3.355)
											return 8.17996;
										else
										{
											if(rsrp < -85)
												return 6.13732;
											else
												return 5.40543;
										}
									}
									else
										return 8.51067;
								}
								else
									return 9.56175;
							}
							else
							{
								if(payload < 3.5)
									return 7.74818;
								else
									return 10.923;
							}
						}
					}
					else
					{
						if(rsrp < -83.5)
							return 12.3812;
						else
						{
							if(ta < 4.5)
								return 18.014;
							else
								return 14.175;
						}
					}
				}
			}
		}
		else
		{
			if(cqi < 13.5)
			{
				if(payload < 2.5)
				{
					if(cqi < 11.5)
					{
						if(velocity < 11.67)
						{
							if(cell < 13404046)
							{
								if(ta < 5.5)
								{
									if(rsrq < -7.5)
										return 1.344565;
									else
										return 0.48852;
								}
								else
								{
									if(cqi < 7)
									{
										if(payload < 1.05)
											return 7.20723;
										else
											return 6.70297;
									}
									else
										return 4.15909;
								}
							}
							else
							{
								if(rsrq < -12.5)
									return 2.58398;
								else
								{
									if(payload < 1.5)
									{
										if(cell < 13456270.5)
											return 1.94363;
										else
										{
											if(cqi < 10.5)
											{
												if(sinr < 11.5)
													return 3.96196;
												else
												{
													if(rsrp < -100)
														return 6.82594;
													else
													{
														if(rsrp < -77)
														{
															if(ta < 4)
																return 4.46927;
															else
																return 5.5275555556;
														}
														else
															return 4.08998;
													}
												}
											}
											else
												return 8.10537;
										}
									}
									else
									{
										if(rsrq < -6.5)
										{
											if(rsrq < -8)
												return 7.7557;
											else
												return 3.96138;
										}
										else
											return 11.5858;
									}
								}
							}
						}
						else
						{
							if(cell < 12918810)
							{
								if(rsrq < -10)
								{
									if(cqi < 8.5)
										return 3.91198;
									else
										return 6.0015;
								}
								else
								{
									if(payload < 0.75)
									{
										if(rsrq < -7)
											return 7.20721;
										else
											return 9.30236;
									}
									else
										return 15.26848;
								}
							}
							else
							{
								if(rsrp < -87.5)
								{
									if(cell < 14323732)
									{
										if(rsrp < -94.5)
										{
											if(rsrq < -6.5)
											{
												if(rsrp < -95.5)
													return 0.994901;
												else
													return 1.48011;
											}
											else
												return 2.1467325;
										}
										else
										{
											if(velocity < 29.195)
												return 2.696755;
											else
											{
												if(cqi < 10)
												{
													if(sinr < 17.5)
														return 4.57145;
													else
														return 3.79867;
												}
												else
													return 3.29083;
											}
										}
									}
									else
									{
										if(velocity < 13.86)
										{
											if(payload < 1.25)
												return 6.65557;
											else
												return 5.25279;
										}
										else
										{
											if(sinr < 20.5)
												return 4.04449;
											else
												return 3.37554;
										}
									}
								}
								else
								{
									if(f < 1347.5)
									{
										if(payload < 1.5)
										{
											if(velocity < 35.695)
											{
												if(rsrq < -5.5)
												{
													if(ta < 12.5)
													{
														if(rsrp < -78.5)
															return 9.09094;
														else
															return 8.60218;
													}
													else
														return 10.4987;
												}
												else
													return 6.47773;
											}
											else
												return 12.6382;
										}
										else
										{
											if(velocity < 11.855)
												return 7.64088;
											else
											{
												if(rsrq < -7)
													return 7.50117;
												else
												{
													if(rsrq < -5.5)
														return 5.67779;
													else
														return 6.31164;
												}
											}
										}
									}
									else
									{
										if(cqi < 6)
											return 3.15804;
										else
										{
											if(rsrq < -5.5)
											{
												if(rsrp < -79)
												{
													if(sinr < 14)
													{
														if(rsrq < -9.5)
															return 6.89658;
														else
															return 8.69565;
													}
													else
														return 5.26318;
												}
												else
													return 4.38116;
											}
											else
												return 9.23788;
										}
									}
								}
							}
						}
					}
					else
					{
						if(velocity < 21.45)
						{
							if(ta < 13.5)
							{
								if(rsrq < -8.5)
								{
									if(cqi < 12.5)
									{
										if(cell < 14114952)
										{
											if(f < 2262.5)
											{
												if(cell < 12918810.5)
												{
													if(rsrq < -10.5)
														return 2.76865;
													else
													{
														if(cell < 12918809.5)
															return 3.39415;
														else
															return 3.89105;
													}
												}
												else
												{
													if(rsrq < -9.5)
														return 5.19483;
													else
														return 4.67838;
												}
											}
											else
												return 1.20992;
										}
										else
										{
											if(velocity < 8.835)
												return 6.66669;
											else
												return 7.07967;
										}
									}
									else
									{
										if(f < 1765)
											return 5.59443;
										else
											return 8.31777;
									}
								}
								else
								{
									if(ta < 4.5)
									{
										if(rsrp < -72.5)
										{
											if(velocity < 19.02)
											{
												if(rsrq < -5.5)
												{
													if(payload < 0.3)
													{
														if(rsrp < -77.5)
															return 4.27908;
														else
															return 5.40543;
													}
													else
													{
														if(rsrp < -80)
														{
															if(rsrp < -85)
																return 3.2582266667;
															else
																return 3.74444;
														}
														else
														{
															if(rsrq < -6.5)
																return 3.91007;
															else
																return 5.39447;
														}
													}
												}
												else
												{
													if(payload < 1.05)
														return 4.6243;
													else
														return 7.25624;
												}
											}
											else
												return 8.60218;
										}
										else
											return 12.7389;
									}
									else
									{
										if(sinr < 13.5)
										{
											if(rsrp < -92)
												return 14.1343;
											else
												return 14.6252;
										}
										else
										{
											if(ta < 9.5)
											{
												if(sinr < 15)
													return 6.95652;
												else
												{
													if(cell < 13370906)
														return 10.5263;
													else
													{
														if(rsrp < -73)
															return 9.6677366667;
														else
															return 10.2828;
													}
												}
											}
											else
											{
												if(sinr < 22.5)
												{
													if(ta < 11.5)
													{
														if(sinr < 15.5)
															return 5.29801;
														else
															return 6.64728;
													}
													else
														return 5.364645;
												}
												else
												{
													if(rsrq < -6.5)
														return 8.90869;
													else
														return 8.19672;
												}
											}
										}
									}
								}
							}
							else
							{
								if(rsrq < -6)
									return 12.4031;
								else
									return 8.60218;
							}
						}
						else
						{
							if(ta < 3)
								return 20;
							else
							{
								if(rsrp < -85.5)
									return 17.4672;
								else
								{
									if(cqi < 12.5)
										return 11.69834;
									else
										return 9.4118;
								}
							}
						}
					}
				}
				else
				{
					if(rsrp < -102.5)
					{
						if(velocity < 2.05)
						{
							if(cqi < 9.5)
							{
								if(payload < 6.5)
								{
									if(sinr < 12)
										return 16.586;
									else
										return 15.8416;
								}
								else
								{
									if(rsrp < -108.5)
										return 13.485;
									else
									{
										if(payload < 8.5)
											return 14.6635;
										else
											return 15.4232;
									}
								}
							}
							else
							{
								if(payload < 7.5)
									return 16.8563;
								else
									return 8.12595;
							}
						}
						else
						{
							if(payload < 7.5)
							{
								if(sinr < 15.5)
								{
									if(ta < 3)
									{
										if(cqi < 11)
											return 3.25512;
										else
											return 9.54654;
									}
									else
									{
										if(cqi < 12)
										{
											if(sinr < 11.5)
											{
												if(rsrq < -10.5)
													return 10.146;
												else
													return 8.51064;
											}
											else
											{
												if(rsrq < -9.5)
													return 8.29445;
												else
													return 7.73134;
											}
										}
										else
											return 5.53123;
									}
								}
								else
								{
									if(cell < 13632276)
									{
										if(ta < 3.5)
											return 3.10301;
										else
										{
											if(payload < 5.5)
												return 5.1241;
											else
												return 4.21496;
										}
									}
									else
										return 1.33645;
								}
							}
							else
							{
								if(ta < 3.5)
								{
									if(rsrp < -104.5)
										return 7.46826;
									else
										return 5.5948;
								}
								else
								{
									if(cell < 13632275)
									{
										if(sinr < 14.5)
											return 14.6074;
										else
											return 15.2599;
									}
									else
									{
										if(cqi < 7)
											return 11.6908;
										else
											return 11.2695;
									}
								}
							}
						}
					}
					else
					{
						if(cell < 13168783)
						{
							if(rsrp < -96.5)
							{
								if(payload < 9.5)
								{
									if(sinr < 17)
									{
										if(payload < 4.5)
											return 6.44901;
										else
										{
											if(sinr < 12)
											{
												if(velocity < 25.68)
												{
													if(cell < 12918810)
													{
														if(rsrp < -99)
															return 9.09435;
														else
															return 8.42993;
													}
													else
														return 9.74421;
												}
												else
													return 11.2045;
											}
											else
											{
												if(rsrp < -98)
												{
													if(rsrp < -100)
														return 10.643;
													else
														return 7.77454;
												}
												else
													return 14.7977;
											}
										}
									}
									else
									{
										if(payload < 6.5)
										{
											if(cqi < 11)
												return 5.62489;
											else
												return 7.01754;
										}
										else
											return 4.22585;
									}
								}
								else
								{
									if(sinr < 8.5)
										return 12.5059;
									else
										return 16.4948;
								}
							}
							else
							{
								if(sinr < 16.5)
								{
									if(cell < 12918810.5)
									{
										if(payload < 6)
										{
											if(payload < 4)
												return 7.32601;
											else
											{
												if(rsrq < -7.5)
													return 8.42637;
												else
													return 8.98876;
											}
										}
										else
										{
											if(sinr < 10.5)
											{
												if(payload < 7.5)
													return 19.1518;
												else
													return 21.9103;
											}
											else
											{
												if(velocity < 21.255)
												{
													if(sinr < 14.5)
													{
														if(cqi < 11.5)
														{
															if(rsrp < -83.5)
																return 17.1858;
															else
																return 16.5375;
														}
														else
															return 15.18075;
													}
													else
														return 17.229;
												}
												else
													return 10.8755;
											}
										}
									}
									else
									{
										if(payload < 4.5)
											return 11.9314;
										else
										{
											if(rsrq < -5.5)
											{
												if(rsrq < -6.5)
												{
													if(payload < 7.5)
														return 29.9401;
													else
														return 32.0384;
												}
												else
												{
													if(rsrp < -83.5)
													{
														if(rsrp < -90)
															return 24.9653;
														else
															return 21.7786;
													}
													else
														return 25.95;
												}
											}
											else
											{
												if(sinr < 15.5)
													return 11.0092;
												else
													return 15.7;
											}
										}
									}
								}
								else
								{
									if(velocity < 17.325)
									{
										if(rsrq < -7.5)
											return 30.581;
										else
										{
											if(sinr < 24.5)
											{
												if(cqi < 7.5)
													return 9.60192;
												else
												{
													if(rsrq < -6.5)
													{
														if(rsrp < -85.5)
															return 22.0872;
														else
															return 16.9731;
													}
													else
													{
														if(rsrq < -5.5)
														{
															if(sinr < 22)
																return 15.9257;
															else
																return 11.6839;
														}
														else
														{
															if(sinr < 18.5)
																return 16.9942;
															else
															{
																if(payload < 6)
																	return 12.4546;
																else
																	return 16.0107;
															}
														}
													}
												}
											}
											else
											{
												if(cqi < 12.5)
												{
													if(rsrp < -90.5)
														return 17.9775;
													else
													{
														if(rsrp < -85.5)
															return 22.2119;
														else
															return 20.9424;
													}
												}
												else
													return 17.1612;
											}
										}
									}
									else
									{
										if(ta < 2.5)
										{
											if(cqi < 6.5)
												return 11.4613;
											else
											{
												if(velocity < 20.3)
													return 6.77201;
												else
												{
													if(rsrp < -91.5)
														return 7.94123;
													else
														return 8.44476;
												}
											}
										}
										else
										{
											if(cqi < 10)
											{
												if(cqi < 7.5)
													return 17.1858;
												else
													return 21.843;
											}
											else
											{
												if(rsrq < -5.5)
												{
													if(velocity < 24.41)
														return 13.7076333333;
													else
													{
														if(sinr < 19)
															return 9.18133;
														else
														{
															if(payload < 6.5)
																return 6.04686;
															else
																return 3.85617;
														}
													}
												}
												else
												{
													if(rsrp < -88)
														return 26.393;
													else
													{
														if(payload < 7)
														{
															if(sinr < 23)
																return 15.9046;
															else
															{
																if(payload < 5)
																	return 13.9555;
																else
																	return 13.4907;
															}
														}
														else
															return 8.60678;
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
							if(cell < 13404045)
							{
								if(cqi < 7.5)
								{
									if(payload < 7)
										return 5;
									else
										return 6.66445;
								}
								else
								{
									if(rsrp < -87)
										return 0.7843353333;
									else
									{
										if(rsrq < -10.5)
											return 2.99451;
										else
											return 1.9719;
									}
								}
							}
							else
							{
								if(f < 2262.5)
								{
									if(rsrq < -10.5)
									{
										if(ta < 4.5)
											return 11.3475;
										else
										{
											if(rsrp < -71)
											{
												if(sinr < 8.5)
													return 6.6968;
												else
												{
													if(rsrp < -86)
														return 0.650533;
													else
													{
														if(rsrp < -79)
															return 4.62428;
														else
														{
															if(payload < 6.5)
																return 1.39264;
															else
																return 2.455095;
														}
													}
												}
											}
											else
												return 6.37196;
										}
									}
									else
									{
										if(velocity < 10.945)
										{
											if(sinr < 10.5)
											{
												if(sinr < 8.5)
												{
													if(rsrq < -8.5)
														return 9.25008;
													else
														return 14.9673;
												}
												else
												{
													if(velocity < 2.99)
													{
														if(cqi < 8.5)
														{
															if(sinr < 9.5)
																return 8.8476;
															else
																return 10.9619;
														}
														else
															return 9.08704;
													}
													else
													{
														if(cqi < 8.5)
															return 9.21925;
														else
														{
															if(rsrq < -9)
																return 6.11154;
															else
																return 6.81576;
														}
													}
												}
											}
											else
											{
												if(cqi < 7.5)
												{
													if(rsrq < -6)
													{
														if(sinr < 16)
															return 14.9254;
														else
															return 15.4016;
													}
													else
														return 20.0334;
												}
												else
												{
													if(payload < 8.5)
													{
														if(sinr < 13.5)
														{
															if(rsrp < -78.5)
															{
																if(ta < 9)
																	return 3.72411;
																else
																{
																	if(ta < 12.5)
																	{
																		if(rsrq < -7.5)
																			return 7.99201;
																		else
																			return 7.37327;
																	}
																	else
																		return 6.42312;
																}
															}
															else
															{
																if(rsrp < -72)
																	return 11.1317;
																else
																	return 12.6084;
															}
														}
														else
														{
															if(rsrp < -68.5)
															{
																if(ta < 11.5)
																{
																	if(velocity < 9.595)
																		return 14.1374;
																	else
																	{
																		if(velocity < 10.24)
																			return 12.8;
																		else
																			return 12.3014;
																	}
																}
																else
																{
																	if(cqi < 10)
																		return 11.6167;
																	else
																	{
																		if(payload < 7.5)
																		{
																			if(ta < 12.5)
																				return 11.3983;
																			else
																				return 10.2696;
																		}
																		else
																			return 6.8223;
																	}
																}
															}
															else
																return 15.9216;
														}
													}
													else
													{
														if(cell < 13884174.5)
														{
															if(ta < 12)
															{
																if(cqi < 11.5)
																{
																	if(velocity < 1.125)
																		return 15.0066;
																	else
																	{
																		if(cell < 13823002.5)
																			return 16.3299;
																		else
																			return 17.0298;
																	}
																}
																else
																	return 12.8949;
															}
															else
																return 10.4753;
														}
														else
															return 27.1903;
													}
												}
											}
										}
										else
										{
											if(cqi < 7.5)
											{
												if(cell < 13817101.5)
												{
													if(rsrp < -77.5)
														return 6.89457;
													else
														return 8.25849;
												}
												else
												{
													if(rsrp < -86.5)
														return 3.58905;
													else
														return 4.6948366667;
												}
											}
											else
											{
												if(ta < 4.5)
												{
													if(f < 1347.5)
													{
														if(cqi < 11)
															return 6.57489;
														else
														{
															if(velocity < 32.365)
															{
																if(rsrp < -78.5)
																	return 12.4472;
																else
																	return 12.9324;
															}
															else
															{
																if(payload < 8.5)
																	return 14.9733;
																else
																	return 14.4875;
															}
														}
													}
													else
													{
														if(rsrq < -6.5)
														{
															if(velocity < 13.875)
															{
																if(cqi < 10)
																	return 6.92042;
																else
																{
																	if(sinr < 16.5)
																	{
																		if(rsrq < -8)
																			return 13.6112;
																		else
																			return 14.3541;
																	}
																	else
																	{
																		if(payload < 9)
																			return 11.0938;
																		else
																			return 11.8273;
																	}
																}
															}
															else
															{
																if(payload < 5)
																{
																	if(velocity < 14.295)
																		return 6.27615;
																	else
																		return 6.6983;
																}
																else
																	return 11.1376;
															}
														}
														else
														{
															if(velocity < 14.355)
																return 10.1885;
															else
																return 6.42406;
														}
													}
												}
												else
												{
													if(ta < 11.5)
													{
														if(velocity < 34.075)
														{
															if(payload < 5.5)
															{
																if(rsrp < -86.5)
																	return 14.9589;
																else
																	return 14.4796;
															}
															else
															{
																if(rsrq < -7.5)
																	return 15.1;
																else
																{
																	if(sinr < 12.5)
																		return 13.6054;
																	else
																	{
																		if(cell < 13884174.5)
																		{
																			if(cqi < 10.5)
																				return 13.4936;
																			else
																			{
																				if(payload < 7.5)
																					return 13.8923;
																				else
																					return 11.6342;
																			}
																		}
																		else
																		{
																			if(sinr < 17.5)
																			{
																				if(rsrp < -88.5)
																					return 9.33178;
																				else
																					return 8.92857;
																			}
																			else
																				return 11.7492;
																		}
																	}
																}
															}
														}
														else
														{
															if(cell < 13806081.5)
															{
																if(payload < 7.5)
																	return 11.4216;
																else
																	return 13.7398;
															}
															else
															{
																if(cell < 13806093.5)
																	return 6.44065;
																else
																	return 9.37647;
															}
														}
													}
													else
													{
														if(sinr < 18)
														{
															if(sinr < 12)
																return 9.69305;
															else
															{
																if(cell < 13884302)
																	return 6.7086;
																else
																	return 4.33565;
															}
														}
														else
															return 12.3267;
													}
												}
											}
										}
									}
								}
								else
								{
									if(cell < 14345742)
									{
										if(payload < 6.5)
										{
											if(rsrp < -74)
											{
												if(sinr < 21.5)
												{
													if(rsrq < -10)
													{
														if(rsrp < -99.5)
															return 13.6016;
														else
														{
															if(rsrq < -11.5)
																return 9.1359;
															else
																return 7.25185;
														}
													}
													else
													{
														if(velocity < 4.78)
														{
															if(rsrq < -7.5)
															{
																if(rsrp < -99.5)
																	return 11.0345;
																else
																{
																	if(rsrp < -79.5)
																	{
																		if(sinr < 10)
																			return 14.9719;
																		else
																			return 13.9657333333;
																	}
																	else
																		return 15.3355;
																}
															}
															else
															{
																if(sinr < 11.5)
																	return 6.6102;
																else
																	return 9.34579;
															}
														}
														else
														{
															if(rsrq < -7.5)
																return 14.8653;
															else
															{
																if(velocity < 12.975)
																	return 15.5885;
																else
																	return 16.2767;
															}
														}
													}
												}
												else
												{
													if(rsrq < -8.5)
														return 2.5533;
													else
														return 6.49175;
												}
											}
											else
												return 1.39264;
										}
										else
										{
											if(rsrp < -78)
											{
												if(rsrp < -101.5)
												{
													if(ta < 4.5)
														return 13.2621;
													else
														return 10.0939;
												}
												else
												{
													if(rsrp < -81.5)
													{
														if(sinr < 10.5)
														{
															if(sinr < 8.5)
																return 17.8685;
															else
															{
																if(rsrq < -8.5)
																	return 9.73828;
																else
																	return 12.2538;
															}
														}
														else
														{
															if(rsrq < -9.5)
															{
																if(ta < 5.5)
																{
																	if(ta < 4.5)
																	{
																		if(rsrp < -94.5)
																		{
																			if(sinr < 24)
																				return 20.8266;
																			else
																				return 19.2446;
																		}
																		else
																			return 17.0535;
																	}
																	else
																		return 11.925;
																}
																else
																	return 21.0637;
															}
															else
															{
																if(sinr < 14)
																	return 19.8708;
																else
																{
																	if(sinr < 17)
																		return 15.1947;
																	else
																		return 14.5456;
																}
															}
														}
													}
													else
													{
														if(ta < 2)
														{
															if(velocity < 10.785)
																return 14.9848;
															else
															{
																if(rsrp < -80.5)
																	return 22.147;
																else
																	return 18.6047;
															}
														}
														else
														{
															if(rsrq < -9)
																return 22.9812;
															else
																return 22.4579;
														}
													}
												}
											}
											else
											{
												if(payload < 8)
												{
													if(cqi < 6)
														return 10.5541;
													else
														return 16.98;
												}
												else
													return 2.455095;
											}
										}
									}
									else
									{
										if(sinr < 18.5)
										{
											if(velocity < 12.52)
											{
												if(rsrp < -92)
													return 12.5117;
												else
													return 11.9225;
											}
											else
											{
												if(velocity < 13.695)
													return 16.7131;
												else
													return 14.8423;
											}
										}
										else
										{
											if(rsrq < -7.5)
												return 20.15022;
											else
												return 16.27165;
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
				if(velocity < 14.875)
				{
					if(payload < 0.75)
					{
						if(rsrq < -6.5)
						{
							if(f < 2262.5)
							{
								if(ta < 3)
									return 5.29803;
								else
								{
									if(velocity < 10.035)
									{
										if(rsrq < -8.5)
											return 4.1470666667;
										else
											return 4.69567;
									}
									else
									{
										if(rsrp < -86)
											return 3.39559;
										else
											return 4.41991;
									}
								}
							}
							else
								return 5.87372;
						}
						else
						{
							if(sinr < 28.5)
							{
								if(rsrp < -88.5)
									return 7.27273;
								else
								{
									if(ta < 3)
									{
										if(rsrp < -80)
											return 4.40044;
										else
											return 5.19483;
									}
									else
									{
										if(velocity < 6.49)
											return 7.0922;
										else
											return 5.79712;
									}
								}
							}
							else
								return 16.5289;
						}
					}
					else
					{
						if(rsrq < -9.5)
						{
							if(sinr < 13.5)
								return 2.02846;
							else
							{
								if(payload < 8)
									return 9.42655;
								else
									return 6.93662;
							}
						}
						else
						{
							if(payload < 4.5)
							{
								if(rsrq < -5.5)
								{
									if(ta < 2.5)
									{
										if(rsrp < -75.5)
										{
											if(rsrq < -6.5)
												return 3.13316;
											else
												return 5.87372;
										}
										else
										{
											if(payload < 3)
												return 7.91687;
											else
												return 10.306;
										}
									}
									else
									{
										if(rsrp < -89)
										{
											if(rsrq < -6.5)
											{
												if(sinr < 17.5)
													return 13.8648;
												else
													return 10.568;
											}
											else
												return 22.7596;
										}
										else
										{
											if(payload < 1.5)
											{
												if(velocity < 5.695)
												{
													if(rsrp < -84.5)
														return 5.73888;
													else
														return 4.64576;
												}
												else
													return 6.84346;
											}
											else
											{
												if(velocity < 10.12)
												{
													if(sinr < 26.5)
													{
														if(ta < 9.5)
														{
															if(ta < 4.5)
																return 14.6319;
															else
																return 16.3934;
														}
														else
															return 12.8102;
													}
													else
														return 9.6231;
												}
												else
												{
													if(rsrp < -83.5)
														return 9.55224;
													else
													{
														if(rsrq < -7.5)
															return 11.8387;
														else
															return 10.3292;
													}
												}
											}
										}
									}
								}
								else
								{
									if(ta < 1.5)
										return 7.33945;
									else
									{
										if(ta < 13)
										{
											if(cell < 13401613)
												return 16.9957571429;
											else
												return 15.748;
										}
										else
											return 22.6629;
									}
								}
							}
							else
							{
								if(velocity < 12.35)
								{
									if(ta < 13.5)
									{
										if(ta < 11.5)
										{
											if(rsrq < -8.5)
												return 14.3911;
											else
											{
												if(velocity < 1.405)
												{
													if(payload < 8.5)
														return 26.1194;
													else
														return 18.6611;
												}
												else
												{
													if(rsrp < -98)
														return 23.753;
													else
													{
														if(velocity < 11.505)
														{
															if(cqi < 14.5)
																return 21.838;
															else
																return 20.04288;
														}
														else
														{
															if(f < 2262.5)
																return 17.8838;
															else
																return 19.0386;
														}
													}
												}
											}
										}
										else
										{
											if(payload < 5.5)
												return 8.18331;
											else
											{
												if(cell < 13853595)
												{
													if(rsrq < -6.5)
														return 22.1484;
													else
													{
														if(rsrp < -102.5)
															return 15.8993;
														else
															return 18.0655;
													}
												}
												else
													return 11.4449;
											}
										}
									}
									else
										return 32.0802;
								}
								else
								{
									if(sinr < 23)
									{
										if(sinr < 14.5)
										{
											if(sinr < 11)
												return 8.56837;
											else
												return 9.88468;
										}
										else
											return 11.504;
									}
									else
									{
										if(rsrq < -4.5)
										{
											if(ta < 2.5)
											{
												if(velocity < 13.565)
												{
													if(rsrq < -7)
														return 13.587;
													else
														return 13.979;
												}
												else
												{
													if(rsrp < -75)
														return 15.2236;
													else
														return 16.5221;
												}
											}
											else
											{
												if(rsrp < -76.5)
													return 16.6725;
												else
													return 18.1818;
											}
										}
										else
											return 11.6754;
									}
								}
							}
						}
					}
				}
				else
				{
					if(velocity < 14.93)
						return 32.9369;
					else
					{
						if(ta < 9.5)
						{
							if(payload < 6.5)
							{
								if(sinr < 35.5)
								{
									if(velocity < 22.115)
									{
										if(cqi < 14.5)
											return 4.92005;
										else
										{
											if(payload < 0.3)
											{
												if(rsrp < -76)
													return 7.07967;
												else
												{
													if(velocity < 19.18)
														return 8.51067;
													else
														return 9.30236;
												}
											}
											else
											{
												if(rsrp < -72)
												{
													if(sinr < 30.5)
													{
														if(rsrp < -79.5)
															return 11.3154;
														else
														{
															if(rsrp < -76)
																return 15.4143;
															else
																return 14.5455;
														}
													}
													else
														return 9.02425;
												}
												else
													return 9.87654;
											}
										}
									}
									else
									{
										if(ta < 6)
										{
											if(velocity < 25.235)
											{
												if(payload < 2)
												{
													if(rsrp < -88)
														return 8.57449;
													else
														return 5.71837;
												}
												else
												{
													if(velocity < 25.08)
													{
														if(payload < 3.5)
															return 6.7701;
														else
														{
															if(cqi < 14.5)
																return 6.79579;
															else
															{
																if(rsrp < -82)
																	return 9.02904;
																else
																	return 8.26873;
															}
														}
													}
													else
														return 13.1507;
												}
											}
											else
											{
												if(velocity < 37.47)
												{
													if(sinr < 28.5)
													{
														if(rsrp < -75)
															return 4.19654;
														else
															return 4.79044;
													}
													else
													{
														if(rsrp < -82.5)
															return 3.48356;
														else
															return 5.843655;
													}
												}
												else
													return 10.3093;
											}
										}
										else
											return 12.1581;
									}
								}
								else
									return 18.2857;
							}
							else
							{
								if(rsrp < -77.5)
								{
									if(velocity < 24.015)
									{
										if(sinr < 31)
										{
											if(cell < 13161621)
											{
												if(payload < 9.5)
												{
													if(sinr < 23.5)
														return 16.9811;
													else
														return 25.9379;
												}
												else
												{
													if(rsrp < -89.5)
														return 25.3165;
													else
														return 26.6756;
												}
											}
											else
												return 18.9349;
										}
										else
										{
											if(rsrp < -85)
												return 13.1067;
											else
												return 21.4823;
										}
									}
									else
									{
										if(rsrq < -5.5)
											return 14.4256;
										else
										{
											if(velocity < 29.295)
												return 22.082;
											else
												return 19.1789;
										}
									}
								}
								else
								{
									if(velocity < 16.28)
									{
										if(rsrp < -69.5)
										{
											if(cqi < 14.5)
												return 27.5981;
											else
												return 27.2109;
										}
										else
											return 15.4525;
									}
									else
									{
										if(sinr < 23)
										{
											if(velocity < 21.33)
												return 8.37321;
											else
												return 12.7085;
										}
										else
										{
											if(rsrq < -5.5)
												return 14.3209;
											else
												return 13.8271666667;
										}
									}
								}
							}
						}
						else
						{
							if(ta < 10.5)
								return 30.6775;
							else
							{
								if(rsrp < -72.5)
								{
									if(rsrp < -82)
									{
										if(payload < 9.5)
											return 17.8971;
										else
											return 25.8065;
									}
									else
									{
										if(rsrq < -4.5)
										{
											if(rsrq < -6.5)
												return 21.9479;
											else
											{
												if(ta < 13.5)
												{
													if(payload < 9.5)
														return 17.991;
													else
														return 12.3362;
												}
												else
												{
													if(rsrq < -5.5)
													{
														if(sinr < 23.5)
														{
															if(rsrp < -78.5)
																return 9.50966;
															else
																return 8.08898;
														}
														else
															return 3.69004;
													}
													else
													{
														if(payload < 5.5)
															return 11.7199;
														else
															return 12.6249;
													}
												}
											}
										}
										else
										{
											if(sinr < 24)
												return 20.8605;
											else
												return 17.316;
										}
									}
								}
								else
								{
									if(payload < 4.55)
										return 6.6116;
									else
									{
										if(rsrq < -6.5)
											return 17.8731;
										else
										{
											if(rsrq < -5.5)
												return 24.7253;
											else
												return 25.5591;
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

float o2_dl_tree_2(float payload, float rsrp, float rsrq, float sinr, float cqi, float ta, float velocity, float cell, float f)
{
	if(cqi < 9.5)
	{
		if(f < 2262.5)
		{
			if(rsrq < -11.5)
			{
				if(cell < 13409678.5)
				{
					if(payload < 4.5)
					{
						if(ta < 29)
						{
							if(velocity < 35.375)
							{
								if(ta < 13.5)
								{
									if(cell < 12909593.5)
									{
										if(velocity < 12.175)
										{
											if(velocity < 10.705)
											{
												if(velocity < 10.145)
												{
													if(velocity < 4.485)
													{
														if(rsrp < -91.5)
														{
															if(sinr < -5.5)
																return 1.73762;
															else
																return 1.09193;
														}
														else
															return 3.28677;
													}
													else
													{
														if(payload < 0.3)
															return 0.147957;
														else
															return 0.727141;
													}
												}
												else
													return 3.64797;
											}
											else
												return 0.6711512;
										}
										else
										{
											if(f < 1347.5)
											{
												if(sinr < 2.5)
												{
													if(velocity < 13.58)
														return 2.16803;
													else
													{
														if(rsrp < -94.5)
															return 1.545;
														else
														{
															if(cell < 12899457.5)
																return 0.15654;
															else
																return 0.7867233333;
														}
													}
												}
												else
												{
													if(payload < 1.5)
														return 2.72294;
													else
														return 3.73832;
												}
											}
											else
											{
												if(sinr < 9)
												{
													if(rsrp < -99.5)
														return 3.46921;
													else
													{
														if(sinr < 5.5)
															return 2.294545;
														else
															return 0.950796;
													}
												}
												else
												{
													if(payload < 1.55)
														return 4.96896;
													else
														return 6.91842;
												}
											}
										}
									}
									else
									{
										if(cell < 12909594.5)
										{
											if(sinr < 2.5)
												return 9.66184;
											else
												return 5.80131;
										}
										else
										{
											if(cqi < 7.5)
											{
												if(ta < 1.5)
												{
													if(rsrp < -70.5)
														return 5;
													else
														return 6.96561;
												}
												else
												{
													if(rsrp < -111.5)
													{
														if(ta < 3)
															return 4.5977;
														else
															return 0.968992;
													}
													else
													{
														if(cqi < 5.5)
														{
															if(rsrp < -99.5)
															{
																if(ta < 5)
																	return 3.52734;
																else
																{
																	if(rsrp < -101.5)
																		return 4.397395;
																	else
																		return 5.14387;
																}
															}
															else
																return 2.7840666667;
														}
														else
														{
															if(cqi < 6.5)
																return 2.769768;
															else
																return 1.56413;
														}
													}
												}
											}
											else
											{
												if(cell < 13155995)
												{
													if(ta < 7.5)
													{
														if(payload < 1.25)
															return 2.10637;
														else
														{
															if(velocity < 8.09)
																return 3.976414;
															else
																return 2.97508;
														}
													}
													else
														return 1.6242;
												}
												else
													return 0.712563;
											}
										}
									}
								}
								else
								{
									if(ta < 14.5)
									{
										if(rsrp < -95)
											return 9.44882;
										else
										{
											if(payload < 3.5)
												return 6.02107;
											else
												return 6.96409;
										}
									}
									else
									{
										if(sinr < -0.5)
										{
											if(payload < 0.55)
												return 4.10258;
											else
											{
												if(ta < 17.5)
													return 5.17632;
												else
													return 6.34417;
											}
										}
										else
										{
											if(payload < 1.25)
												return 4.60299;
											else
											{
												if(rsrp < -93.5)
													return 2.56369;
												else
												{
													if(ta < 15.5)
														return 4.165385;
													else
														return 3.11102;
												}
											}
										}
									}
								}
							}
							else
								return 8.691585;
						}
						else
						{
							if(sinr < -9)
								return 2.76593;
							else
							{
								if(rsrp < -111.5)
									return 1.04248;
								else
								{
									if(cqi < 4.5)
										return 0.1083214991;
									else
										return 0.5775231921;
								}
							}
						}
					}
					else
					{
						if(cqi < 4.5)
						{
							if(rsrp < -91)
							{
								if(rsrq < -18.5)
								{
									if(sinr < -10)
										return 1.87261;
									else
										return 1.16913;
								}
								else
								{
									if(rsrp < -99.5)
									{
										if(rsrq < -16)
											return 4.46453;
										else
										{
											if(sinr < -6)
												return 3.98059;
											else
												return 3.36761;
										}
									}
									else
									{
										if(rsrq < -14)
											return 2.063;
										else
											return 3.29218;
									}
								}
							}
							else
							{
								if(rsrq < -16)
									return 5.11182;
								else
									return 4.31001;
							}
						}
						else
						{
							if(velocity < 34.97)
							{
								if(cell < 12896781.5)
									return 15.6678;
								else
								{
									if(rsrq < -14.5)
									{
										if(ta < 2.5)
											return 2.29456;
										else
										{
											if(ta < 10.5)
											{
												if(payload < 9.5)
													return 12.7029;
												else
													return 10.6866;
											}
											else
												return 8.32466;
										}
									}
									else
									{
										if(ta < 13.5)
										{
											if(cqi < 6.5)
											{
												if(payload < 9.5)
												{
													if(f < 1347.5)
													{
														if(cell < 12901121)
														{
															if(rsrp < -87.5)
																return 0.897402;
															else
																return 1.42835;
														}
														else
															return 3.5247890334;
													}
													else
													{
														if(sinr < -2.5)
															return 12.3077;
														else
														{
															if(rsrq < -13.5)
															{
																if(ta < 2.5)
																	return 3.34808;
																else
																	return 4.34499;
															}
															else
															{
																if(cqi < 5.5)
																{
																	if(rsrp < -107.5)
																		return 14.8607;
																	else
																	{
																		if(velocity < 5.79)
																			return 9.48742;
																		else
																			return 3.60036;
																	}
																}
																else
																{
																	if(velocity < 13.97)
																	{
																		if(velocity < 4.565)
																		{
																			if(rsrq < -12.5)
																				return 4.20705;
																			else
																				return 7.01037;
																		}
																		else
																			return 4.99237;
																	}
																	else
																		return 4.16811;
																}
															}
														}
													}
												}
												else
												{
													if(velocity < 15.89)
														return 6.59576;
													else
														return 19.6223;
												}
											}
											else
											{
												if(f < 1347.5)
													return 15.8126297104;
												else
												{
													if(cqi < 8.5)
													{
														if(sinr < -3)
															return 3.92157;
														else
														{
															if(cell < 12914202)
															{
																if(velocity < 16.2)
																{
																	if(rsrq < -13.5)
																		return 9.62034;
																	else
																	{
																		if(sinr < 7.5)
																		{
																			if(ta < 10)
																			{
																				if(rsrp < -93)
																					return 8.60369;
																				else
																				{
																					if(rsrp < -90)
																						return 2.83487;
																					else
																					{
																						if(ta < 4)
																							return 6.88666;
																						else
																							return 6.47511;
																					}
																				}
																			}
																			else
																			{
																				if(rsrp < -93.5)
																					return 3.79381;
																				else
																					return 3.136625;
																			}
																		}
																		else
																		{
																			if(sinr < 15)
																				return 9.98129;
																			else
																				return 6.8578;
																		}
																	}
																}
																else
																	return 16.0275;
															}
															else
																return 18.6561453466;
														}
													}
													else
													{
														if(rsrq < -12.5)
															return 2.99451;
														else
															return 8.40532;
													}
												}
											}
										}
										else
										{
											if(rsrp < -99.5)
												return 4.9948125;
											else
											{
												if(sinr < 6)
												{
													if(rsrp < -92)
														return 1.4599086249;
													else
														return 2.58672;
												}
												else
													return 4.37009;
											}
										}
									}
								}
							}
							else
								return 16.2767;
						}
					}
				}
				else
				{
					if(sinr < 7.5)
					{
						if(cell < 13553922)
						{
							if(payload < 2.5)
							{
								if(cell < 13501326)
								{
									if(sinr < -2.5)
									{
										if(ta < 6.5)
										{
											if(rsrp < -103)
												return 0.98010325;
											else
											{
												if(velocity < 14.77)
													return 0.2663166667;
												else
													return 0.774446;
											}
										}
										else
										{
											if(rsrp < -101)
												return 0.2757295;
											else
											{
												if(velocity < 11.005)
													return 0.3997546667;
												else
													return 0.937427;
											}
										}
									}
									else
									{
										if(velocity < 2.305)
										{
											if(rsrq < -12.5)
											{
												if(cell < 13495566)
												{
													if(rsrq < -13.5)
													{
														if(payload < 1.5)
															return 1.26723;
														else
															return 0.852697;
													}
													else
													{
														if(payload < 1.25)
															return 2.10526;
														else
															return 1.67102;
													}
												}
												else
													return 3.16207;
											}
											else
											{
												if(payload < 1.25)
													return 1.44509;
												else
													return 4.11311;
											}
										}
										else
										{
											if(rsrp < -102.5)
												return 1.68599;
											else
											{
												if(velocity < 11.825)
												{
													if(sinr < 0.5)
														return 1.0888066667;
													else
														return 0.7996329;
												}
												else
												{
													if(velocity < 15.325)
														return 0.289332;
													else
														return 1.30612;
												}
											}
										}
									}
								}
								else
								{
									if(cell < 13542402.5)
									{
										if(rsrq < -16.5)
										{
											if(rsrp < -104.5)
											{
												if(cell < 13524737.5)
													return 1.30081;
												else
													return 0.495358;
											}
											else
												return 2.58901;
										}
										else
										{
											if(payload < 1.5)
												return 0.2449565;
											else
											{
												if(velocity < 1.875)
													return 0.510694;
												else
												{
													if(rsrp < -98.5)
													{
														if(ta < 11)
															return 1.09081;
														else
															return 0.572861;
													}
													else
														return 1.60032;
												}
											}
										}
									}
									else
										return 0.2717174375;
								}
							}
							else
							{
								if(ta < 10.5)
								{
									if(sinr < 3.5)
									{
										if(cell < 13416986.5)
										{
											if(payload < 9.5)
											{
												if(velocity < 10.83)
												{
													if(velocity < 10.105)
													{
														if(rsrp < -98.5)
														{
															if(payload < 6.5)
																return 0.807317;
															else
																return 1.45421;
														}
														else
															return 0.546691;
													}
													else
														return 1.226782;
												}
												else
												{
													if(cqi < 6.5)
													{
														if(velocity < 14.315)
														{
															if(payload < 4.5)
															{
																if(velocity < 13.41)
																{
																	if(ta < 7.5)
																		return 1.40851;
																	else
																		return 1.87999;
																}
																else
																	return 2.41929;
															}
															else
															{
																if(rsrp < -105.5)
																	return 2.78009;
																else
																	return 2.352825;
															}
														}
														else
															return 1.16582;
													}
													else
														return 0.598745;
												}
											}
											else
												return 3.38653;
										}
										else
										{
											if(payload < 6.5)
											{
												if(velocity < 0.52)
												{
													if(rsrp < -98)
														return 2.18998;
													else
													{
														if(f < 1347.5)
															return 0.5545925;
														else
														{
															if(rsrq < -12.5)
																return 0.772201;
															else
																return 1.41501;
														}
													}
												}
												else
												{
													if(velocity < 11.85)
														return 0.4401911818;
													else
													{
														if(rsrq < -13.5)
															return 0.58906;
														else
															return 1.022424;
													}
												}
											}
											else
											{
												if(ta < 9)
												{
													if(cqi < 8)
													{
														if(sinr < -1)
														{
															if(rsrq < -14.5)
															{
																if(velocity < 11.705)
																{
																	if(cqi < 4.5)
																		return 1.05026;
																	else
																		return 2.48292;
																}
																else
																	return 0.631157;
															}
															else
																return 0.583235;
														}
														else
														{
															if(ta < 6.5)
															{
																if(rsrp < -97.5)
																	return 2.44873;
																else
																	return 1.87059;
															}
															else
															{
																if(payload < 8.5)
																	return 4.39009;
																else
																	return 3.334545;
															}
														}
													}
													else
														return 0.7878856667;
												}
												else
												{
													if(payload < 9.5)
													{
														if(velocity < 5.875)
															return 0.99194;
														else
															return 0.4819361429;
													}
													else
													{
														if(velocity < 10.95)
															return 2.01476;
														else
															return 1.07152;
													}
												}
											}
										}
									}
									else
									{
										if(ta < 8.5)
										{
											if(sinr < 6)
											{
												if(payload < 7.5)
												{
													if(cqi < 5.5)
														return 1.08812;
													else
													{
														if(rsrp < -96.5)
															return 3.2183625;
														else
															return 2.56363;
													}
												}
												else
													return 3.74598;
											}
											else
												return 3.83509;
										}
										else
											return 0.7782824;
									}
								}
								else
								{
									if(cqi < 4.5)
									{
										if(rsrq < -18.5)
											return 0.366502;
										else
										{
											if(ta < 11.5)
											{
												if(payload < 5)
													return 1.0643;
												else
													return 4.45541;
											}
											else
											{
												if(cell < 13467278)
												{
													if(rsrp < -101.5)
														return 2.90289;
													else
														return 2.34719;
												}
												else
												{
													if(velocity < 14.385)
													{
														if(rsrq < -16.5)
														{
															if(ta < 13)
															{
																if(cqi < 2.5)
																	return 0.349467;
																else
																	return 0.8982605714;
															}
															else
																return 1.82108;
														}
														else
														{
															if(ta < 13)
															{
																if(velocity < 10.905)
																{
																	if(rsrq < -15.5)
																		return 1.5976528571;
																	else
																		return 2.26987;
																}
																else
																	return 0.283663;
															}
															else
															{
																if(payload < 6)
																	return 0.55394;
																else
																	return 1.2466;
															}
														}
													}
													else
													{
														if(rsrp < -103.5)
															return 0.938989;
														else
															return 2.51873;
													}
												}
											}
										}
									}
									else
									{
										if(f < 1347.5)
										{
											if(payload < 6.5)
											{
												if(sinr < 0.5)
												{
													if(payload < 3.5)
														return 1.78704;
													else
													{
														if(payload < 4.5)
															return 0.459269;
														else
														{
															if(velocity < 12.825)
																return 2.07308;
															else
																return 1.26036;
														}
													}
												}
												else
												{
													if(cqi < 6.5)
														return 5.11727;
													else
													{
														if(sinr < 3.5)
															return 2.14161;
														else
															return 0.646195;
													}
												}
											}
											else
											{
												if(sinr < -2.5)
													return 2.64769;
												else
												{
													if(velocity < 5.865)
													{
														if(rsrq < -13)
															return 0.764891;
														else
															return 1.2954;
													}
													else
														return 0.68830775;
												}
											}
										}
										else
										{
											if(cell < 13495578)
											{
												if(velocity < 16.09)
												{
													if(payload < 7.5)
													{
														if(rsrp < -100)
															return 5.64732;
														else
														{
															if(sinr < 0.5)
															{
																if(payload < 5.5)
																	return 2.739442;
																else
																	return 4.11876;
															}
															else
															{
																if(cell < 13461530)
																	return 2.62192;
																else
																	return 1.85744;
															}
														}
													}
													else
													{
														if(sinr < -1)
														{
															if(velocity < 7.555)
																return 3.61918;
															else
																return 4.37504;
														}
														else
															return 5.19106;
													}
												}
												else
												{
													if(payload < 5.5)
														return 0.978593;
													else
														return 1.6647;
												}
											}
											else
											{
												if(rsrq < -16.5)
													return 3.08523;
												else
													return 8.204806;
											}
										}
									}
								}
							}
						}
						else
						{
							if(cell < 13823002.5)
							{
								if(sinr < -8)
								{
									if(rsrq < -18.5)
										return 3.27785;
									else
										return 14.771;
								}
								else
								{
									if(rsrp < -103.5)
									{
										if(rsrp < -107)
											return 5.47196;
										else
										{
											if(rsrp < -104.5)
												return 2.07796;
											else
												return 0.541052;
										}
									}
									else
									{
										if(velocity < 15.23)
										{
											if(rsrp < -85)
											{
												if(rsrq < -15.5)
													return 8.53789;
												else
													return 9.38086;
											}
											else
												return 11.7008;
										}
										else
										{
											if(payload < 6)
											{
												if(payload < 1.75)
													return 4.70035;
												else
													return 6.79612;
											}
											else
											{
												if(velocity < 31.09)
													return 4.01462;
												else
													return 4.76596;
											}
										}
									}
								}
							}
							else
							{
								if(rsrp < -109.5)
									return 13.8498;
								else
								{
									if(sinr < 0.5)
									{
										if(ta < 10.5)
										{
											if(ta < 7.5)
											{
												if(rsrp < -103.5)
												{
													if(payload < 4.55)
														return 2.35989;
													else
														return 2.94491;
												}
												else
												{
													if(cqi < 3)
														return 3.03099;
													else
													{
														if(payload < 9)
														{
															if(rsrq < -15)
																return 2.07182;
															else
																return 1.375134045;
														}
														else
															return 2.33461;
													}
												}
											}
											else
											{
												if(payload < 2.5)
												{
													if(sinr < -5)
														return 1.87683;
													else
														return 0.932727;
												}
												else
												{
													if(rsrq < -12.5)
													{
														if(cqi < 6.5)
														{
															if(velocity < 0.645)
															{
																if(payload < 6.5)
																	return 1.33178;
																else
																{
																	if(ta < 9)
																		return 3.67623;
																	else
																		return 5.95365;
																}
															}
															else
															{
																if(rsrp < -95.5)
																{
																	if(payload < 5.5)
																		return 5.84197;
																	else
																		return 3.65714;
																}
																else
																	return 8.11085;
															}
														}
														else
															return 2.47372;
													}
													else
														return 1.75115;
												}
											}
										}
										else
										{
											if(payload < 4.5)
											{
												if(rsrq < -13.5)
												{
													if(payload < 0.3)
														return 0.2804441111;
													else
													{
														if(cell < 13882115)
														{
															if(payload < 3.5)
															{
																if(rsrp < -102.5)
																	return 0.7506406667;
																else
																	return 0.3743581667;
															}
															else
																return 1.36869;
														}
														else
														{
															if(rsrp < -90.5)
																return 0.844297;
															else
																return 2.67559;
														}
													}
												}
												else
												{
													if(payload < 2.05)
														return 2.054322;
													else
													{
														if(rsrq < -12.5)
															return 1.34941;
														else
															return 0.345688;
													}
												}
											}
											else
											{
												if(rsrp < -106)
												{
													if(velocity < 14.08)
														return 3.96488;
													else
														return 2.50279;
												}
												else
												{
													if(cell < 13852814)
													{
														if(rsrp < -93.5)
															return 2.108275;
														else
															return 4.00842;
													}
													else
													{
														if(cell < 13880579)
														{
															if(sinr < -2.5)
																return 0.7205097143;
															else
															{
																if(payload < 8)
																	return 0.93289;
																else
																	return 1.63142;
															}
														}
														else
														{
															if(sinr < -4)
															{
																if(sinr < -7)
																	return 1.45549;
																else
																	return 0.983681;
															}
															else
															{
																if(cell < 13884289)
																	return 2.85753;
																else
																{
																	if(ta < 16.5)
																		return 2.46268;
																	else
																	{
																		if(velocity < 21.3)
																			return 1.12295;
																		else
																			return 2.08252;
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
											if(sinr < 5.5)
											{
												if(rsrp < -91.5)
												{
													if(rsrq < -13.5)
													{
														if(payload < 2)
															return 1.75786;
														else
															return 2.2069;
													}
													else
													{
														if(cell < 13856141.5)
															return 1.49708;
														else
														{
															if(velocity < 22.11)
															{
																if(payload < 1.75)
																	return 0.4643075;
																else
																	return 0.993049;
															}
															else
																return 1.71969;
														}
													}
												}
												else
												{
													if(cell < 13854873)
													{
														if(rsrq < -12.5)
															return 2.2973566667;
														else
															return 3.3481;
													}
													else
													{
														if(rsrp < -89)
														{
															if(rsrp < -90.5)
																return 1.39106;
															else
															{
																if(rsrq < -12.5)
																	return 1.86032;
																else
																	return 2.82919;
															}
														}
														else
															return 1.1942566667;
													}
												}
											}
											else
												return 6.05373;
										}
										else
										{
											if(rsrq < -12.5)
											{
												if(rsrp < -93)
													return 8.59199;
												else
												{
													if(rsrp < -84)
														return 3.75352;
													else
														return 1.82714;
												}
											}
											else
											{
												if(velocity < 6.375)
													return 8.86795;
												else
												{
													if(rsrp < -90)
														return 7.13467;
													else
														return 6.23701;
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
						if(rsrp < -75)
						{
							if(sinr < 11)
								return 6.746745;
							else
								return 2.44707;
						}
						else
							return 11.3475;
					}
				}
			}
			else
			{
				if(payload < 4.5)
				{
					if(rsrq < -8.5)
					{
						if(sinr < 2.5)
						{
							if(cell < 13884186)
							{
								if(rsrp < -86.5)
								{
									if(velocity < 15.835)
									{
										if(cqi < 2.5)
											return 6.44468;
										else
										{
											if(ta < 17.5)
											{
												if(f < 1347.5)
												{
													if(payload < 1.5)
														return 0.557504;
													else
														return 0.9987828;
												}
												else
												{
													if(cell < 13167899)
													{
														if(sinr < -2)
															return 4.8142;
														else
														{
															if(rsrq < -10)
															{
																if(cqi < 6.5)
																{
																	if(rsrp < -102)
																		return 2.08225;
																	else
																		return 2.88462;
																}
																else
																	return 1.43177;
															}
															else
																return 3.76471;
														}
													}
													else
													{
														if(cqi < 5.5)
														{
															if(rsrq < -10.5)
																return 1.839055;
															else
															{
																if(ta < 12.5)
																	return 0.369175;
																else
																	return 1.07711;
															}
														}
														else
														{
															if(sinr < 0.5)
															{
																if(rsrq < -10.5)
																	return 2.19238;
																else
																	return 1.47936;
															}
															else
															{
																if(sinr < 1.5)
																	return 2.81426;
																else
																{
																	if(rsrp < -89)
																		return 1.58447;
																	else
																		return 2.22408;
																}
															}
														}
													}
												}
											}
											else
												return 6.34753;
										}
									}
									else
									{
										if(ta < 8)
											return 6.95655;
										else
										{
											if(rsrq < -9.5)
											{
												if(rsrq < -10.5)
													return 3.727;
												else
													return 2.97399;
											}
											else
												return 1.90932;
										}
									}
								}
								else
								{
									if(payload < 3)
									{
										if(cqi < 6.5)
											return 4.906768;
										else
										{
											if(cqi < 7.5)
												return 7.29594;
											else
											{
												if(cqi < 8.5)
													return 4.23282;
												else
													return 5.63382;
											}
										}
									}
									else
										return 3.94915;
								}
							}
							else
							{
								if(ta < 18)
								{
									if(rsrq < -10.5)
										return 8.83002;
									else
										return 7.998;
								}
								else
									return 2.47066;
							}
						}
						else
						{
							if(rsrp < -86.5)
							{
								if(velocity < 36.21)
								{
									if(cell < 12927002.5)
									{
										if(sinr < 3.5)
										{
											if(payload < 1.5)
											{
												if(rsrq < -10)
													return 3.27735;
												else
													return 8.84956;
											}
											else
												return 8.63465;
										}
										else
										{
											if(cqi < 8.5)
											{
												if(cell < 12918810)
												{
													if(payload < 3.5)
													{
														if(sinr < 9.5)
														{
															if(ta < 14.5)
															{
																if(cqi < 5.5)
																	return 2.23214;
																else
																{
																	if(velocity < 3.64)
																	{
																		if(payload < 0.55)
																			return 4.02012;
																		else
																			return 5.52486;
																	}
																	else
																	{
																		if(payload < 1.05)
																			return 3.18726;
																		else
																		{
																			if(cqi < 6.5)
																				return 4.36126;
																			else
																				return 3.8085916667;
																		}
																	}
																}
															}
															else
																return 1.91939;
														}
														else
														{
															if(rsrp < -88.5)
																return 5.33156;
															else
																return 4.65118;
														}
													}
													else
														return 5.71531;
												}
												else
													return 2.1692;
											}
											else
											{
												if(cell < 12903066.5)
													return 3.1917;
												else
												{
													if(ta < 14.5)
													{
														if(rsrq < -10.5)
														{
															if(cell < 12914201)
															{
																if(velocity < 8.65)
																	return 8.84956;
																else
																	return 9.93172;
															}
															else
																return 6.0015;
														}
														else
														{
															if(cell < 12914074)
																return 5.57103;
															else
																return 4.53001;
														}
													}
													else
														return 4.3838933333;
												}
											}
										}
									}
									else
									{
										if(sinr < 13)
										{
											if(velocity < 10.415)
											{
												if(payload < 2.5)
												{
													if(payload < 1.5)
													{
														if(sinr < 8)
														{
															if(cell < 13884174)
																return 4.34546;
															else
															{
																if(cqi < 7)
																	return 2.25353;
																else
																{
																	if(cell < 13884302)
																		return 3.95257;
																	else
																		return 3.43349;
																}
															}
														}
														else
															return 1.59872;
													}
													else
													{
														if(rsrp < -96)
															return 0.92539;
														else
															return 2.16949;
													}
												}
												else
												{
													if(cell < 13619995)
														return 3.02086;
													else
														return 8.18554;
												}
											}
											else
											{
												if(cqi < 8.5)
												{
													if(sinr < 3.5)
													{
														if(cqi < 5.5)
															return 2.46723;
														else
															return 3.12501;
													}
													else
														return 1.2628025;
												}
												else
													return 4.11734;
											}
										}
										else
											return 5.71431;
									}
								}
								else
									return 11.5984;
							}
							else
							{
								if(payload < 1.25)
								{
									if(rsrp < -78)
									{
										if(cqi < 6.5)
											return 3.84617;
										else
											return 3.11526;
									}
									else
										return 7.27273;
								}
								else
								{
									if(sinr < 9.5)
									{
										if(rsrq < -9.5)
										{
											if(sinr < 3.5)
											{
												if(rsrp < -85.5)
													return 6.24268;
												else
													return 8.28586;
											}
											else
												return 9.45349;
										}
										else
											return 14.0351;
									}
									else
									{
										if(sinr < 12)
										{
											if(cell < 13366299)
												return 4.51467;
											else
												return 6.24175;
										}
										else
											return 10.7431;
									}
								}
							}
						}
					}
					else
					{
						if(payload < 1.5)
						{
							if(rsrp < -75.5)
							{
								if(rsrp < -94.5)
								{
									if(sinr < 6.5)
									{
										if(rsrp < -105.5)
											return 0.503147;
										else
											return 1.2619633333;
									}
									else
									{
										if(ta < 18)
										{
											if(sinr < 11.5)
											{
												if(payload < 0.55)
												{
													if(rsrp < -103.5)
														return 4.32434;
													else
														return 3.75588;
												}
												else
													return 2.78843;
											}
											else
												return 7.20723;
										}
										else
											return 1.48011;
									}
								}
								else
								{
									if(velocity < 14.12)
									{
										if(velocity < 0.565)
										{
											if(rsrp < -90.5)
											{
												if(payload < 0.55)
													return 6.01506;
												else
													return 6.60611;
											}
											else
												return 4.68933;
										}
										else
										{
											if(rsrp < -91.5)
											{
												if(rsrp < -93.5)
													return 5.62588;
												else
												{
													if(payload < 0.75)
													{
														if(rsrp < -92.5)
															return 1.62338;
														else
															return 4;
													}
													else
														return 4.60564;
												}
											}
											else
											{
												if(sinr < 9)
												{
													if(sinr < 7.5)
														return 6.1475566667;
													else
														return 5.425035;
												}
												else
												{
													if(cell < 13368730)
													{
														if(ta < 7)
															return 4.21054;
														else
														{
															if(sinr < 14)
																return 4.73375;
															else
																return 5.13479;
														}
													}
													else
														return 3.93895;
												}
											}
										}
									}
									else
									{
										if(rsrp < -87.5)
										{
											if(payload < 0.55)
											{
												if(sinr < 7.5)
													return 3.13727;
												else
													return 4.57145;
											}
											else
											{
												if(rsrq < -7.5)
													return 1.46826;
												else
												{
													if(f < 1347.5)
														return 2.77008;
													else
														return 2.1455;
												}
											}
										}
										else
										{
											if(cqi < 8.5)
											{
												if(rsrp < -85.5)
													return 8.13008;
												else
												{
													if(cqi < 7)
													{
														if(sinr < 0.5)
															return 1.77069;
														else
															return 2.9262975;
													}
													else
														return 3.99601;
												}
											}
											else
												return 9.09094;
										}
									}
								}
							}
							else
							{
								if(f < 1347.5)
								{
									if(rsrp < -69)
										return 8.60218;
									else
										return 9.85222;
								}
								else
								{
									if(sinr < 7)
										return 8.99888;
									else
									{
										if(payload < 0.75)
											return 5.6338;
										else
											return 6.28437;
									}
								}
							}
						}
						else
						{
							if(cell < 12903066.5)
							{
								if(rsrq < -7.5)
								{
									if(rsrp < -79)
									{
										if(sinr < 13.5)
											return 4.4108833333;
										else
											return 5.38721;
									}
									else
										return 3.21673;
								}
								else
								{
									if(ta < 10.5)
										return 2.7492366667;
									else
										return 4.22219;
								}
							}
							else
							{
								if(f < 1347.5)
								{
									if(sinr < 14)
									{
										if(ta < 15.5)
										{
											if(cell < 13884289.5)
											{
												if(ta < 7.5)
													return 4.67973;
												else
													return 4.24403;
											}
											else
												return 3.74181;
										}
										else
											return 6.77201;
									}
									else
										return 2.25691;
								}
								else
								{
									if(ta < 4.5)
									{
										if(velocity < 18.5)
										{
											if(rsrp < -86)
												return 12.7389;
											else
												return 14.6386;
										}
										else
											return 17.1858;
									}
									else
									{
										if(velocity < 11.55)
										{
											if(rsrq < -6.5)
											{
												if(cell < 12909467)
													return 3.7829933333;
												else
												{
													if(ta < 8)
														return 11.0459;
													else
													{
														if(payload < 3.5)
														{
															if(rsrp < -103)
																return 6.70297;
															else
															{
																if(ta < 13)
																	return 5.68855;
																else
																	return 5.09554;
															}
														}
														else
															return 6.42312;
													}
												}
											}
											else
												return 12.8;
										}
										else
										{
											if(rsrq < -6.5)
											{
												if(cqi < 8.5)
												{
													if(payload < 3)
														return 6.49614;
													else
													{
														if(rsrq < -7.5)
															return 10.7239;
														else
															return 8.88149;
													}
												}
												else
												{
													if(velocity < 12.52)
														return 11.3261;
													else
														return 14.9254;
												}
											}
											else
											{
												if(payload < 2.5)
													return 4.3472366667;
												else
													return 5.56586;
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
					if(velocity < 0.14)
					{
						if(ta < 9.5)
						{
							if(ta < 8)
							{
								if(rsrq < -9.5)
								{
									if(rsrp < -92)
										return 5.39493;
									else
										return 4.70754;
								}
								else
								{
									if(rsrp < -90)
									{
										if(rsrp < -92)
											return 7.62995;
										else
											return 6.75393;
									}
									else
									{
										if(sinr < 12)
											return 9.4857;
										else
											return 8.66152;
									}
								}
							}
							else
							{
								if(payload < 8.5)
								{
									if(cqi < 8.5)
										return 10.9619;
									else
										return 9.08704;
								}
								else
									return 7.19424;
							}
						}
						else
						{
							if(ta < 12.5)
							{
								if(cell < 13359886)
									return 11.8149;
								else
								{
									if(sinr < 7.5)
										return 17.1812;
									else
										return 15.0877727273;
								}
							}
							else
							{
								if(rsrp < -94)
									return 6.81489;
								else
									return 9.03663;
							}
						}
					}
					else
					{
						if(sinr < -0.5)
						{
							if(cell < 12907930.5)
								return 11.118;
							else
							{
								if(ta < 2.5)
									return 7.24273;
								else
								{
									if(rsrp < -91.5)
									{
										if(ta < 5.5)
											return 4.3952;
										else
										{
											if(payload < 5.5)
												return 1.67098;
											else
											{
												if(payload < 9.5)
													return 2.4406225;
												else
													return 2.84961;
											}
										}
									}
									else
									{
										if(rsrp < -89)
											return 8.79282;
										else
										{
											if(rsrp < -87.5)
												return 4.3071;
											else
												return 3.63174;
										}
									}
								}
							}
						}
						else
						{
							if(rsrp < -88.5)
							{
								if(rsrq < -9.5)
								{
									if(rsrp < -91.5)
									{
										if(cell < 13416974)
										{
											if(velocity < 19.14)
											{
												if(payload < 8)
												{
													if(rsrp < -93)
													{
														if(ta < 11)
														{
															if(cqi < 5.5)
																return 10.568;
															else
																return 9.81354;
														}
														else
															return 5.6164;
													}
													else
													{
														if(cqi < 7)
															return 12.513;
														else
															return 12.0998;
													}
												}
												else
													return 6.71535;
											}
											else
												return 5.77909;
										}
										else
										{
											if(cqi < 6.5)
											{
												if(ta < 12.5)
												{
													if(rsrp < -94.5)
														return 2.135984;
													else
														return 0.609199;
												}
												else
												{
													if(rsrp < -102)
														return 5.96372;
													else
														return 5.36265;
												}
											}
											else
											{
												if(sinr < 5)
												{
													if(velocity < 14.515)
														return 10.6809;
													else
														return 14.079;
												}
												else
												{
													if(sinr < 7.5)
														return 6.93498;
													else
														return 7.77238;
												}
											}
										}
									}
									else
									{
										if(sinr < 10)
										{
											if(velocity < 17.685)
											{
												if(velocity < 10.76)
												{
													if(f < 1347.5)
														return 5.77548;
													else
														return 6.80041;
												}
												else
												{
													if(ta < 14)
													{
														if(rsrq < -10.5)
														{
															if(cqi < 8)
																return 4.5623;
															else
																return 5.04668;
														}
														else
															return 3.58905;
													}
													else
													{
														if(rsrp < -90.5)
															return 3.83914;
														else
															return 2.99401;
													}
												}
											}
											else
												return 7.54984;
										}
										else
										{
											if(ta < 10)
											{
												if(cell < 13163163)
													return 3.4962;
												else
													return 0.49250875;
											}
											else
											{
												if(rsrp < -89.5)
													return 4.33565;
												else
													return 5.02287;
											}
										}
									}
								}
								else
								{
									if(rsrq < -6.5)
									{
										if(sinr < 23.5)
										{
											if(rsrp < -89.5)
											{
												if(f < 1347.5)
												{
													if(cell < 13370625.5)
													{
														if(ta < 6.5)
															return 4.87329;
														else
															return 3.1901933333;
													}
													else
														return 5.61572;
												}
												else
												{
													if(sinr < 3.5)
													{
														if(cell < 14301722)
														{
															if(cqi < 5.5)
																return 5.52486;
															else
															{
																if(rsrp < -104.5)
																	return 11.1328;
																else
																{
																	if(sinr < 1.5)
																	{
																		if(payload < 6.5)
																			return 11.4204;
																		else
																			return 13.3111;
																	}
																	else
																	{
																		if(ta < 8)
																			return 14.4092;
																		else
																			return 16.6263;
																	}
																}
															}
														}
														else
															return 6.27303;
													}
													else
													{
														if(sinr < 7.5)
														{
															if(cell < 12927002.5)
															{
																if(ta < 2)
																	return 2.5700066667;
																else
																{
																	if(velocity < 15.18)
																	{
																		if(payload < 9)
																		{
																			if(ta < 10)
																			{
																				if(velocity < 7.435)
																					return 5.69851;
																				else
																					return 6.33341;
																			}
																			else
																				return 7.52587;
																		}
																		else
																			return 8.2144;
																	}
																	else
																	{
																		if(cqi < 5.5)
																			return 10.2433;
																		else
																			return 9.6911;
																	}
																}
															}
															else
															{
																if(rsrp < -95.5)
																	return 2.78105;
																else
																	return 2.03373;
															}
														}
														else
														{
															if(payload < 9.5)
															{
																if(velocity < 12.98)
																{
																	if(rsrp < -106.5)
																		return 7.11849;
																	else
																	{
																		if(payload < 7)
																			return 9.09435;
																		else
																		{
																			if(rsrq < -8.5)
																				return 10.6649;
																			else
																				return 9.90252;
																		}
																	}
																}
																else
																{
																	if(velocity < 13.97)
																	{
																		if(payload < 7)
																			return 3.01796;
																		else
																			return 4.22585;
																	}
																	else
																	{
																		if(cqi < 8.5)
																		{
																			if(sinr < 19.5)
																			{
																				if(velocity < 16.09)
																					return 7.19683;
																				else
																					return 6.63106;
																			}
																			else
																				return 4.21496;
																		}
																		else
																		{
																			if(ta < 3)
																				return 5.06714;
																			else
																			{
																				if(velocity < 20.87)
																					return 9.31496;
																				else
																					return 11.2045;
																			}
																		}
																	}
																}
															}
															else
															{
																if(sinr < 12.5)
																	return 16.4948;
																else
																	return 7.46826;
															}
														}
													}
												}
											}
											else
											{
												if(payload < 6.5)
													return 9.00394;
												else
												{
													if(payload < 8)
														return 14.9853;
													else
													{
														if(cqi < 6.5)
															return 12.7247;
														else
															return 11.8091;
													}
												}
											}
										}
										else
											return 17.943;
									}
									else
									{
										if(f < 1347.5)
										{
											if(sinr < 18.5)
												return 10.3093;
											else
												return 5.50269;
										}
										else
										{
											if(velocity < 14.56)
											{
												if(rsrp < -92.5)
													return 15.6863;
												else
													return 11.4531;
											}
											else
											{
												if(ta < 10)
													return 23.0358;
												else
													return 25.7471;
											}
										}
									}
								}
							}
							else
							{
								if(sinr < 16.5)
								{
									if(sinr < 11.5)
									{
										if(velocity < 14.785)
										{
											if(cell < 13823002.5)
											{
												if(velocity < 7.675)
												{
													if(rsrq < -9)
														return 6.68019;
													else
														return 5.32623;
												}
												else
												{
													if(sinr < 10)
													{
														if(velocity < 10.685)
															return 14.433;
														else
														{
															if(rsrp < -79.5)
															{
																if(sinr < 6.5)
																	return 9.4996485714;
																else
																	return 8.88999;
															}
															else
															{
																if(payload < 6)
																	return 10.16;
																else
																{
																	if(payload < 8)
																		return 8.18833;
																	else
																		return 6.69083;
																}
															}
														}
													}
													else
														return 5.77386;
												}
											}
											else
											{
												if(rsrp < -81.5)
												{
													if(payload < 5.5)
														return 4.68933;
													else
													{
														if(rsrq < -6.5)
														{
															if(cqi < 6.5)
																return 10.6121;
															else
																return 9.06589;
														}
														else
															return 13.7378;
													}
												}
												else
												{
													if(payload < 6.5)
														return 14.3326;
													else
														return 12.343;
												}
											}
										}
										else
										{
											if(rsrp < -87.5)
											{
												if(rsrq < -9)
													return 18.9524;
												else
													return 16.4914;
											}
											else
											{
												if(cell < 13853582.5)
												{
													if(cqi < 5)
														return 6.10454;
													else
													{
														if(cell < 13806081.5)
														{
															if(rsrq < -8.5)
																return 9.04773;
															else
															{
																if(payload < 7)
																{
																	if(sinr < 4.5)
																		return 11.7302;
																	else
																		return 13.7773;
																}
																else
																{
																	if(ta < 10.5)
																		return 10.4357;
																	else
																		return 10.9664;
																}
															}
														}
														else
														{
															if(f < 1347.5)
																return 8.21355;
															else
															{
																if(rsrp < -82.5)
																	return 10.1266;
																else
																	return 9.37647;
															}
														}
													}
												}
												else
													return 15.4589;
											}
										}
									}
									else
									{
										if(rsrq < -6.5)
										{
											if(velocity < 11.51)
											{
												if(payload < 8)
													return 13.1183;
												else
													return 10.4753;
											}
											else
											{
												if(payload < 7)
													return 17.0455;
												else
												{
													if(cell < 13390477.5)
														return 15.8455;
													else
														return 15.1;
												}
											}
										}
										else
										{
											if(payload < 7.5)
												return 25.95;
											else
												return 13.9342;
										}
									}
								}
								else
								{
									if(rsrq < -6)
									{
										if(sinr < 25.5)
										{
											if(cqi < 7)
												return 9.60192;
											else
											{
												if(ta < 10)
													return 6.9907628571;
												else
													return 6.10571;
											}
										}
										else
											return 4.80362;
									}
									else
										return 17.1184;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			if(velocity < 8.01)
			{
				if(sinr < 4)
				{
					if(cqi < 7.5)
					{
						if(sinr < 1.5)
						{
							if(payload < 2.05)
								return 0.076621;
							else
							{
								if(rsrp < -80.5)
								{
									if(rsrp < -88.5)
									{
										if(cqi < 5.5)
											return 11.7073;
										else
											return 12.135;
									}
									else
										return 1.23882;
								}
								else
									return 22.0521;
							}
						}
						else
						{
							if(ta < 1.5)
								return 8.19952;
							else
							{
								if(rsrp < -110.5)
									return 4.71559;
								else
									return 6.1799876341;
							}
						}
					}
					else
						return 1.24564;
				}
				else
				{
					if(payload < 4.5)
					{
						if(ta < 3)
							return 2.8272620612;
						else
						{
							if(rsrp < -104)
								return 12.1581;
							else
							{
								if(rsrq < -10.5)
									return 9.1359;
								else
								{
									if(payload < 0.55)
										return 5.03147;
									else
										return 3.79147;
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
								if(velocity < 2.775)
								{
									if(rsrq < -12.5)
										return 2.99451;
									else
									{
										if(sinr < 22)
										{
											if(ta < 4.5)
											{
												if(sinr < 13)
												{
													if(cell < 14345742)
														return 14.55845;
													else
														return 15.5604;
												}
												else
													return 15.32495;
											}
											else
												return 16.586;
										}
										else
											return 11.925;
									}
								}
								else
								{
									if(rsrp < -103)
										return 10.4004;
									else
									{
										if(sinr < 10)
											return 17.8042333333;
										else
											return 17.0535;
									}
								}
							}
							else
							{
								if(rsrp < -103.5)
									return 8.51064;
								else
									return 12.4966;
							}
						}
						else
							return 21.84;
					}
				}
			}
			else
			{
				if(payload < 5.5)
				{
					if(velocity < 13.58)
					{
						if(payload < 1.5)
						{
							if(sinr < 12.5)
							{
								if(sinr < 7)
								{
									if(rsrq < -10)
									{
										if(ta < 2.5)
											return 1.67365;
										else
										{
											if(cell < 13875086)
												return 2.245486;
											else
												return 1.74293;
										}
									}
									else
										return 1.752652;
								}
								else
									return 0.5620596979;
							}
							else
								return 6.35425;
						}
						else
						{
							if(cell < 14345742)
							{
								if(sinr < 6)
								{
									if(cell < 13875085)
									{
										if(payload < 3.5)
										{
											if(ta < 1.5)
												return 2.85816;
											else
												return 2.074605;
										}
										else
											return 1.1683877259;
									}
									else
									{
										if(ta < 5.5)
											return 2.82611;
										else
											return 6.93241;
									}
								}
								else
								{
									if(sinr < 8.5)
										return 9.48992;
									else
									{
										if(cqi < 7.5)
											return 5.28926;
										else
											return 6.13732;
									}
								}
							}
							else
								return 12.0437;
						}
					}
					else
					{
						if(rsrq < -11.5)
						{
							if(payload < 1.5)
								return 1.04248;
							else
							{
								if(rsrq < -15)
									return 5.11182;
								else
									return 3.04878;
							}
						}
						else
						{
							if(payload < 2.5)
							{
								if(cqi < 8.5)
									return 7.621885;
								else
									return 6.65557;
							}
							else
							{
								if(ta < 3)
								{
									if(sinr < 4.5)
										return 6.49878;
									else
										return 9.7108053501;
								}
								else
								{
									if(sinr < 5)
										return 15.544;
									else
									{
										if(rsrp < -93)
											return 10.0188;
										else
											return 12.3172;
									}
								}
							}
						}
					}
				}
				else
				{
					if(rsrp < -82.5)
					{
						if(rsrp < -106)
						{
							if(payload < 7.5)
								return 2.12508;
							else
								return 1.34211;
						}
						else
						{
							if(ta < 24)
							{
								if(payload < 9.5)
								{
									if(sinr < -5)
										return 1.20355;
									else
									{
										if(rsrp < -100.5)
										{
											if(rsrp < -103.5)
												return 11.45194;
											else
												return 9.30909;
										}
										else
										{
											if(sinr < 4.5)
												return 11.982;
											else
												return 13.4248;
										}
									}
								}
								else
								{
									if(rsrp < -98)
										return 11.1794;
									else
										return 6.66445;
								}
							}
							else
								return 1.57439;
						}
					}
					else
					{
						if(cell < 13873941)
						{
							if(cqi < 5)
							{
								if(cqi < 3)
									return 10.5541;
								else
									return 12.7157;
							}
							else
							{
								if(rsrq < -8.5)
								{
									if(payload < 8)
										return 18.6047;
									else
										return 20.2532;
								}
								else
									return 17.0576;
							}
						}
						else
							return 2.2404266667;
					}
				}
			}
		}
	}
	else
	{
		if(payload < 3.5)
		{
			if(rsrq < -8.5)
			{
				if(rsrp < -77.5)
				{
					if(cell < 14345742)
					{
						if(payload < 1.5)
						{
							if(cqi < 14.5)
							{
								if(cell < 14115079)
								{
									if(velocity < 25.17)
									{
										if(f < 2262.5)
										{
											if(rsrq < -10.5)
											{
												if(velocity < 0.62)
													return 1.13733;
												else
												{
													if(payload < 0.3)
													{
														if(f < 1347.5)
															return 5.59443;
														else
														{
															if(cqi < 10.5)
																return 3.73833;
															else
																return 4.16668;
														}
													}
													else
														return 5.8743175;
												}
											}
											else
											{
												if(sinr < 15.5)
												{
													if(cell < 12918810.5)
													{
														if(rsrp < -87)
															return 3.68665;
														else
															return 4.14938;
													}
													else
													{
														if(cell < 13825563)
															return 5.225535;
														else
															return 4.533505;
													}
												}
												else
													return 7.64088;
											}
										}
										else
										{
											if(rsrp < -86.5)
											{
												if(ta < 3)
													return 5.37273;
												else
													return 4.21054;
											}
											else
											{
												if(rsrp < -84.5)
													return 1.31991;
												else
													return 5.12821;
											}
										}
									}
									else
										return 2.59319;
								}
								else
								{
									if(rsrp < -98)
									{
										if(rsrp < -99.5)
											return 6.8574333333;
										else
											return 8.10537;
									}
									else
										return 5.54017;
								}
							}
							else
							{
								if(cell < 13362457)
									return 1.87793;
								else
								{
									if(rsrp < -93)
										return 3.25071;
									else
										return 4.21054;
								}
							}
						}
						else
						{
							if(velocity < 13.045)
							{
								if(cqi < 11.5)
								{
									if(cell < 13875086)
									{
										if(rsrq < -10)
										{
											if(rsrp < -82.5)
												return 10.6596;
											else
												return 9.1638;
										}
										else
										{
											if(rsrp < -87)
												return 5.80762;
											else
											{
												if(payload < 2.5)
													return 7.7557;
												else
													return 7.19856;
											}
										}
									}
									else
										return 13.1148;
								}
								else
								{
									if(rsrp < -81)
									{
										if(ta < 3)
										{
											if(cell < 13150215.5)
												return 3.49956;
											else
												return 0.848626;
										}
										else
										{
											if(rsrp < -102.5)
												return 2.76865;
											else
											{
												if(rsrp < -101)
													return 9.45068;
												else
												{
													if(rsrq < -11)
														return 6.87876;
													else
														return 8.04829;
												}
											}
										}
									}
									else
									{
										if(rsrp < -78.5)
											return 8.43882;
										else
											return 12.3014;
									}
								}
							}
							else
							{
								if(rsrp < -79)
								{
									if(ta < 6.5)
									{
										if(payload < 2.5)
											return 3.0195;
										else
											return 3.615;
									}
									else
										return 3.82318;
								}
								else
									return 4.74402;
							}
						}
					}
					else
						return 16.3934;
				}
				else
				{
					if(ta < 1.5)
						return 13.5135;
					else
					{
						if(rsrp < -72.5)
						{
							if(rsrp < -73.5)
							{
								if(velocity < 3.355)
								{
									if(payload < 1.25)
										return 2.95203;
									else
										return 3.50186;
								}
								else
									return 1.85175;
							}
							else
							{
								if(rsrq < -11)
									return 0.127005;
								else
									return 0.759842;
							}
						}
						else
						{
							if(cell < 13626522)
							{
								if(cqi < 13.5)
								{
									if(ta < 12.5)
									{
										if(payload < 2)
											return 3.871574;
										else
											return 5.46324;
									}
									else
									{
										if(payload < 0.3)
											return 5.33335;
										else
										{
											if(sinr < 18.5)
												return 10.9589;
											else
												return 4.89596;
										}
									}
								}
								else
									return 2.77971;
							}
							else
							{
								if(payload < 2)
									return 0.904773;
								else
									return 2.22243;
							}
						}
					}
				}
			}
			else
			{
				if(payload < 2.5)
				{
					if(velocity < 11.72)
					{
						if(rsrp < -100.5)
						{
							if(sinr < 24)
								return 4.93829;
							else
								return 12.4031;
						}
						else
						{
							if(sinr < 21.5)
							{
								if(ta < 2.5)
								{
									if(sinr < 16.5)
										return 0.48852;
									else
										return 1.43472;
								}
								else
								{
									if(sinr < 14.5)
									{
										if(sinr < 10.5)
										{
											if(payload < 0.75)
											{
												if(sinr < 7.5)
													return 6.6778;
												else
												{
													if(payload < 0.3)
														return 4.3716;
													else
														return 3.39559;
												}
											}
											else
											{
												if(payload < 1.5)
													return 1.93283;
												else
													return 6.45422;
											}
										}
										else
										{
											if(rsrp < -87.5)
											{
												if(rsrp < -92)
													return 14.1343;
												else
													return 14.6252;
											}
											else
											{
												if(cqi < 12.5)
												{
													if(rsrq < -7.5)
														return 8.2901966667;
													else
														return 5.40543;
												}
												else
													return 3.58746;
											}
										}
									}
									else
									{
										if(rsrp < -94)
											return 9.68523;
										else
										{
											if(velocity < 10.765)
											{
												if(rsrq < -7.5)
												{
													if(rsrp < -84)
														return 7.14605;
													else
													{
														if(rsrp < -81)
															return 5.63382;
														else
															return 4.23282;
													}
												}
												else
												{
													if(rsrp < -91)
														return 2.33134;
													else
													{
														if(velocity < 8.075)
														{
															if(rsrp < -81.5)
																return 6.75676;
															else
															{
																if(rsrq < -6.5)
																	return 4.3716;
																else
																{
																	if(payload < 1.05)
																		return 5.67378;
																	else
																		return 4.93066;
																}
															}
														}
														else
														{
															if(velocity < 8.695)
																return 3.3784866667;
															else
															{
																if(payload < 0.3)
																	return 3.88351;
																else
																	return 5.52939;
															}
														}
													}
												}
											}
											else
												return 2.64288;
										}
									}
								}
							}
							else
							{
								if(ta < 8.5)
								{
									if(rsrp < -72.5)
									{
										if(rsrp < -81.5)
										{
											if(payload < 0.75)
												return 6.77966;
											else
												return 5.73888;
										}
										else
										{
											if(velocity < 4.535)
											{
												if(sinr < 25)
													return 7.20156;
												else
													return 8.67679;
											}
											else
												return 9.63275;
										}
									}
									else
										return 10.2828;
								}
								else
								{
									if(ta < 11)
									{
										if(payload < 1.05)
											return 5.26318;
										else
										{
											if(rsrp < -72)
												return 2.62037;
											else
												return 3.72526;
										}
									}
									else
									{
										if(payload < 0.75)
										{
											if(velocity < 10.355)
											{
												if(cqi < 13)
													return 5.29803;
												else
												{
													if(payload < 0.3)
														return 4.16668;
													else
														return 4.65116;
												}
											}
											else
												return 8.90869;
										}
										else
										{
											if(cqi < 13.5)
											{
												if(rsrq < -6.5)
													return 5.08421;
												else
													return 8.19672;
											}
											else
												return 12.8102;
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
							if(payload < 0.75)
							{
								if(sinr < 12.5)
								{
									if(rsrq < -7.5)
									{
										if(payload < 0.3)
											return 4.23282;
										else
											return 2.67023;
									}
									else
									{
										if(cell < 13845134.5)
											return 1.57233;
										else
											return 1.12676;
									}
								}
								else
								{
									if(cell < 13362446.5)
									{
										if(rsrp < -81.5)
										{
											if(cqi < 10.5)
												return 7.18133;
											else
											{
												if(rsrp < -92)
												{
													if(sinr < 21)
														return 10.5263;
													else
													{
														if(ta < 13.5)
															return 9.30236;
														else
															return 8.60218;
													}
												}
												else
												{
													if(payload < 0.3)
														return 8.60218;
													else
														return 8.16327;
												}
											}
										}
										else
										{
											if(cell < 12918809.5)
											{
												if(sinr < 24)
													return 3.49366;
												else
													return 3.91007;
											}
											else
											{
												if(rsrp < -75.5)
													return 5.40543;
												else
													return 4.92005;
											}
										}
									}
									else
									{
										if(rsrp < -81)
										{
											if(payload < 0.3)
												return 5.83944;
											else
												return 8.69565;
										}
										else
										{
											if(cell < 14062349.5)
											{
												if(rsrp < -73)
													return 11.5607;
												else
													return 12.7389;
											}
											else
												return 10.3724333333;
										}
									}
								}
							}
							else
							{
								if(ta < 4.5)
								{
									if(sinr < 15)
									{
										if(ta < 3)
										{
											if(payload < 1.5)
												return 8.57449;
											else
												return 7.52587;
										}
										else
											return 6.38213;
									}
									else
									{
										if(rsrp < -80)
										{
											if(rsrp < -92)
												return 2.03926;
											else
											{
												if(sinr < 26.5)
													return 3.34169;
												else
													return 3.74444;
											}
										}
										else
										{
											if(rsrq < -7.5)
												return 3.87222;
											else
											{
												if(cell < 13853065)
												{
													if(velocity < 14.35)
														return 5.39447;
													else
														return 4.81348;
												}
												else
													return 6.31164;
											}
										}
									}
								}
								else
								{
									if(cqi < 11.5)
									{
										if(rsrp < -85.5)
											return 14.5852;
										else
										{
											if(rsrq < -7)
												return 7.50117;
											else
												return 5.67779;
										}
									}
									else
									{
										if(ta < 8)
										{
											if(f < 2262.5)
												return 9.68523;
											else
												return 7.74818;
										}
										else
										{
											if(rsrp < -90.5)
											{
												if(velocity < 14.65)
												{
													if(payload < 1.5)
														return 5.54401;
													else
														return 6.7086;
												}
												else
												{
													if(rsrq < -6)
														return 2.77874;
													else
														return 3.77893;
												}
											}
											else
											{
												if(payload < 1.5)
													return 2.02943;
												else
													return 3.46921;
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
									if(sinr < 13.5)
									{
										if(rsrq < -6.5)
											return 3.03951;
										else
											return 8.08898;
									}
									else
									{
										if(rsrp < -80)
										{
											if(rsrp < -94)
												return 7.27273;
											else
											{
												if(cell < 13856155)
													return 12.7796;
												else
													return 13.8648;
											}
										}
										else
										{
											if(rsrq < -6.5)
											{
												if(rsrp < -73)
												{
													if(rsrp < -76)
														return 7.01757;
													else
														return 7.44879;
												}
												else
													return 9.1954;
											}
											else
											{
												if(ta < 3.5)
												{
													if(payload < 1.25)
														return 7.31261;
													else
														return 7.91687;
												}
												else
													return 6.20396;
											}
										}
									}
								}
								else
								{
									if(rsrp < -74)
										return 3.5397328571;
									else
										return 9.87654;
								}
							}
							else
							{
								if(rsrp < -82.5)
								{
									if(ta < 3.5)
										return 18.2857;
									else
									{
										if(rsrp < -85.5)
											return 15.534;
										else
											return 14.3756;
									}
								}
								else
								{
									if(sinr < 27.5)
									{
										if(rsrq < -4.5)
										{
											if(payload < 0.55)
												return 5.19483;
											else
												return 5.71837;
										}
										else
											return 8.51067;
									}
									else
									{
										if(rsrp < -68)
										{
											if(payload < 0.3)
												return 10.1266;
											else
											{
												if(ta < 19.5)
													return 17.1868;
												else
													return 12.5392;
											}
										}
										else
										{
											if(ta < 1.5)
												return 7.33945;
											else
												return 8.51067;
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
						if(cell < 14345742)
						{
							if(cell < 12898318)
							{
								if(ta < 1.5)
								{
									if(cell < 12896782)
									{
										if(sinr < 28)
											return 9.72053;
										else
											return 5.04414;
									}
									else
										return 11.7763;
								}
								else
								{
									if(rsrq < -7.5)
										return 3.78788;
									else
										return 4.43931;
								}
							}
							else
							{
								if(rsrq < -5.5)
								{
									if(ta < 10.5)
									{
										if(rsrp < -76.5)
										{
											if(rsrq < -7.5)
											{
												if(velocity < 11.525)
													return 9.56175;
												else
													return 12.018;
											}
											else
											{
												if(cell < 12914201)
													return 3.86038;
												else
												{
													if(cqi < 13.5)
													{
														if(velocity < 25.36)
														{
															if(sinr < 13)
																return 9.446165;
															else
															{
																if(sinr < 23)
																{
																	if(sinr < 17.5)
																		return 7.32601;
																	else
																		return 8.44476;
																}
																else
																{
																	if(sinr < 26)
																		return 7.242;
																	else
																	{
																		if(sinr < 32)
																			return 6.77201;
																		else
																			return 7.1535;
																	}
																}
															}
														}
														else
															return 6.061475;
													}
													else
													{
														if(cell < 13161236)
														{
															if(rsrq < -6.5)
																return 6.7701;
															else
																return 2.70088;
														}
														else
															return 3.13316;
													}
												}
											}
										}
										else
										{
											if(velocity < 11.545)
											{
												if(sinr < 12)
													return 9.97506;
												else
													return 9.27491;
											}
											else
												return 16.7481;
										}
									}
									else
									{
										if(rsrp < -91)
											return 9.47486;
										else
										{
											if(sinr < 22.5)
											{
												if(rsrp < -80.5)
												{
													if(rsrq < -7)
														return 11.7763;
													else
														return 12.3267;
												}
												else
													return 10.3181;
											}
											else
												return 16.9731;
										}
									}
								}
								else
								{
									if(ta < 8.5)
									{
										if(rsrp < -75)
											return 15.5089666667;
										else
											return 17.2538;
									}
									else
										return 5.75402;
								}
							}
						}
						else
						{
							if(ta < 4.5)
								return 11.3744;
							else
							{
								if(rsrp < -88)
									return 16.1834;
								else
									return 17.531;
							}
						}
					}
					else
					{
						if(rsrp < -85.5)
							return 18.5615;
						else
							return 22.6629;
					}
				}
			}
		}
		else
		{
			if(cell < 12914202)
			{
				if(payload < 7.5)
				{
					if(rsrp < -89.5)
					{
						if(velocity < 14.365)
						{
							if(cell < 12903066.5)
								return 9.67118;
							else
							{
								if(velocity < 11.765)
								{
									if(cqi < 10.5)
										return 4.82073;
									else
									{
										if(payload < 6)
											return 6.2315;
										else
											return 5.49504;
									}
								}
								else
									return 7.3105533333;
							}
						}
						else
						{
							if(velocity < 15.41)
								return 4.51977;
							else
								return 2.94686;
						}
					}
					else
					{
						if(velocity < 16.505)
						{
							if(velocity < 14.215)
							{
								if(cell < 12896769.5)
								{
									if(sinr < 25)
									{
										if(rsrp < -67.5)
											return 13.9477;
										else
											return 12.8323;
									}
									else
										return 15.1515;
								}
								else
								{
									if(payload < 5.5)
									{
										if(cell < 12904717.5)
										{
											if(cell < 12898318)
											{
												if(sinr < 22.5)
												{
													if(velocity < 13.3)
													{
														if(rsrp < -83.5)
														{
															if(rsrq < -8.5)
															{
																if(sinr < 13)
																	return 10.7132;
																else
																	return 10.1458;
															}
															else
																return 6.14628;
														}
														else
														{
															if(rsrq < -9)
																return 9.00436;
															else
															{
																if(cqi < 13.5)
																	return 5.23475;
																else
																	return 8.13215;
															}
														}
													}
													else
														return 16.6182;
												}
												else
												{
													if(ta < 10.5)
													{
														if(rsrq < -9)
															return 7.40056;
														else
															return 8.10537;
													}
													else
														return 5.82411;
												}
											}
											else
												return 12.5737;
										}
										else
										{
											if(rsrq < -7)
												return 5.37418;
											else
												return 6.09663;
										}
									}
									else
									{
										if(velocity < 8.85)
										{
											if(rsrp < -75.5)
											{
												if(velocity < 0.55)
													return 7.59253;
												else
												{
													if(sinr < 18)
														return 14.733;
													else
													{
														if(cqi < 11)
															return 12.4694;
														else
															return 11.8019;
													}
												}
											}
											else
												return 5.7427233333;
										}
										else
										{
											if(velocity < 12.3)
											{
												if(velocity < 11.465)
												{
													if(rsrp < -74.5)
														return 18.419;
													else
														return 17.5935;
												}
												else
													return 13.3492;
											}
											else
												return 20.0753;
										}
									}
								}
							}
							else
							{
								if(ta < 13)
								{
									if(cqi < 11.5)
									{
										if(velocity < 15.31)
											return 9.57051;
										else
										{
											if(rsrq < -11)
												return 10.5587;
											else
												return 10.1497;
										}
									}
									else
									{
										if(velocity < 15.095)
										{
											if(payload < 5.5)
												return 4.29461;
											else
												return 5.2144033333;
										}
										else
										{
											if(payload < 6)
												return 7.2767;
											else
												return 9.33022;
										}
									}
								}
								else
									return 4.04186;
							}
						}
						else
						{
							if(velocity < 24.75)
							{
								if(rsrp < -75)
									return 16.2933;
								else
								{
									if(payload < 4.5)
										return 13.0346;
									else
										return 13.4499;
								}
							}
							else
								return 8.2713;
						}
					}
				}
				else
				{
					if(cell < 12896793.5)
					{
						if(rsrp < -66.5)
						{
							if(sinr < 14.5)
							{
								if(rsrp < -82)
									return 7.94538;
								else
								{
									if(rsrp < -80.5)
										return 19.0225;
									else
									{
										if(rsrp < -79)
											return 7.03881;
										else
											return 10.6213;
									}
								}
							}
							else
							{
								if(ta < 5.5)
								{
									if(payload < 9.5)
										return 10.4606;
									else
										return 8.29962;
								}
								else
								{
									if(velocity < 15.43)
									{
										if(ta < 10.5)
										{
											if(payload < 8.5)
												return 14.3081;
											else
											{
												if(rsrq < -7.5)
												{
													if(rsrq < -9.5)
														return 17.8571;
													else
														return 16.3562;
												}
												else
													return 18.2417;
											}
										}
										else
										{
											if(sinr < 23.5)
											{
												if(velocity < 1.025)
													return 13.8063;
												else
												{
													if(rsrq < -8)
														return 10.2302;
													else
														return 10.834625;
												}
											}
											else
											{
												if(rsrq < -6)
													return 15.0066;
												else
													return 20.2532;
											}
										}
									}
									else
										return 18.4067;
								}
							}
						}
						else
						{
							if(payload < 8.5)
							{
								if(sinr < 24)
									return 24.2241;
								else
									return 22.1071;
							}
							else
							{
								if(cqi < 13.5)
									return 20.8225;
								else
								{
									if(rsrp < -65.5)
										return 9.94036;
									else
									{
										if(payload < 9.5)
											return 16.7286;
										else
											return 18.9215;
									}
								}
							}
						}
					}
					else
					{
						if(sinr < 10)
						{
							if(ta < 10)
							{
								if(payload < 9.5)
									return 12.3098;
								else
								{
									if(cqi < 10.5)
									{
										if(sinr < 5.5)
											return 6.28931;
										else
											return 7.69527;
									}
									else
										return 9.19118;
								}
							}
							else
							{
								if(payload < 9.5)
									return 4.42179;
								else
									return 3.48114;
							}
						}
						else
						{
							if(rsrp < -69.5)
							{
								if(velocity < 15.49)
								{
									if(cqi < 11.5)
									{
										if(f < 2262.5)
										{
											if(payload < 9.5)
											{
												if(sinr < 25.5)
												{
													if(rsrp < -86.5)
														return 9.6699933333;
													else
														return 9.153748;
												}
												else
													return 7.70899;
											}
											else
												return 13.2472;
										}
										else
											return 14.175;
									}
									else
									{
										if(velocity < 14.605)
										{
											if(payload < 8.5)
											{
												if(rsrq < -6.5)
													return 16.4609;
												else
													return 19.9626;
											}
											else
											{
												if(rsrp < -80)
													return 11.2694;
												else
													return 12.1993;
											}
										}
										else
											return 9.50683;
									}
								}
								else
								{
									if(sinr < 20)
									{
										if(cell < 12909593.5)
											return 18.7189;
										else
											return 16.1038;
									}
									else
									{
										if(f < 1347.5)
											return 15.2417;
										else
										{
											if(velocity < 17.47)
											{
												if(rsrq < -6)
													return 12.0603;
												else
													return 10.7185;
											}
											else
												return 5.93417;
										}
									}
								}
							}
							else
								return 3.05157;
						}
					}
				}
			}
			else
			{
				if(sinr < 27.5)
				{
					if(cqi < 14.5)
					{
						if(payload < 4.5)
						{
							if(rsrp < -83)
							{
								if(rsrp < -89.5)
								{
									if(f < 2262.5)
									{
										if(rsrq < -5.5)
										{
											if(cell < 13238798.5)
											{
												if(sinr < 13)
													return 6.44901;
												else
												{
													if(ta < 12.5)
														return 5.62489;
													else
														return 5.091295;
												}
											}
											else
												return 6.958266;
										}
										else
											return 16.9942;
									}
									else
									{
										if(cqi < 10.5)
										{
											if(rsrp < -96.5)
												return 10.5995;
											else
												return 9.409;
										}
										else
											return 14.1405;
									}
								}
								else
									return 1.082346;
							}
							else
							{
								if(rsrp < -79)
								{
									if(ta < 12.5)
									{
										if(rsrq < -5.5)
											return 14.4796;
										else
											return 15.78715;
									}
									else
										return 20.9424;
								}
								else
								{
									if(ta < 3)
										return 13.6112;
									else
									{
										if(sinr < 24.5)
										{
											if(f < 1347.5)
												return 8.72172;
											else
											{
												if(velocity < 10.47)
													return 6.7676533333;
												else
													return 5.88885;
											}
										}
										else
										{
											if(rsrp < -64.5)
												return 11.0117;
											else
												return 10.3292;
										}
									}
								}
							}
						}
						else
						{
							if(f < 2262.5)
							{
								if(rsrq < -10.5)
								{
									if(payload < 7)
									{
										if(rsrp < -92)
											return 17.3223;
										else
											return 29.9401;
									}
									else
										return 2.7795153287;
								}
								else
								{
									if(sinr < 26.5)
									{
										if(velocity < 14.725)
										{
											if(rsrp < -71.5)
											{
												if(ta < 32)
												{
													if(rsrq < -9.5)
														return 4.35967;
													else
													{
														if(velocity < 9.12)
														{
															if(rsrp < -83.5)
															{
																if(velocity < 8.17)
																{
																	if(velocity < 6.585)
																	{
																		if(rsrq < -7.5)
																			return 6.87403;
																		else
																		{
																			if(ta < 11.5)
																				return 8.42993;
																			else
																				return 7.77454;
																		}
																	}
																	else
																		return 14.7977;
																}
																else
																	return 3.72411;
															}
															else
																return 12.8949;
														}
														else
														{
															if(rsrq < -8.5)
															{
																if(velocity < 13.95)
																	return 15.2164;
																else
																	return 16.57;
															}
															else
															{
																if(payload < 7.5)
																{
																	if(ta < 9)
																	{
																		if(rsrq < -7.5)
																			return 7.09534;
																		else
																		{
																			if(cell < 13884174)
																				return 13.7615;
																			else
																				return 14.3541;
																		}
																	}
																	else
																	{
																		if(velocity < 14.195)
																		{
																			if(cell < 13370906)
																				return 8.98876;
																			else
																			{
																				if(rsrq < -7)
																					return 8.11547;
																				else
																					return 7.52502;
																			}
																		}
																		else
																			return 10.772;
																	}
																}
																else
																{
																	if(velocity < 14.5)
																	{
																		if(ta < 12.5)
																		{
																			if(rsrq < -6.5)
																			{
																				if(velocity < 12.515)
																					return 11.8273;
																				else
																					return 10.9305333333;
																			}
																			else
																			{
																				if(rsrp < -87)
																					return 14.1374;
																				else
																				{
																					if(velocity < 11.135)
																						return 14.0051;
																					else
																						return 13.4936;
																				}
																			}
																		}
																		else
																		{
																			if(sinr < 14.5)
																			{
																				if(rsrp < -93.5)
																				{
																					if(payload < 9.5)
																						return 10.643;
																					else
																						return 12.5059;
																				}
																				else
																					return 17.1858;
																			}
																			else
																				return 17.229;
																		}
																	}
																	else
																	{
																		if(sinr < 17.5)
																			return 6.46726;
																		else
																			return 8.61605;
																	}
																}
															}
														}
													}
												}
												else
													return 0.379873;
											}
											else
											{
												if(velocity < 13.945)
												{
													if(rsrq < -9.5)
													{
														if(velocity < 5.115)
															return 16.9412;
														else
															return 12.6084;
													}
													else
													{
														if(rsrq < -8)
															return 16.9599;
														else
															return 16.0779;
													}
												}
												else
												{
													if(rsrp < -63)
														return 10.1885;
													else
														return 11.0558;
												}
											}
										}
										else
										{
											if(velocity < 15.27)
											{
												if(velocity < 15.07)
												{
													if(payload < 7.5)
														return 14.1176;
													else
														return 15.1451;
												}
												else
													return 22.01644;
											}
											else
											{
												if(payload < 6.5)
												{
													if(velocity < 18.175)
													{
														if(rsrp < -93.5)
															return 11.0092;
														else
															return 14.9589;
													}
													else
													{
														if(payload < 5.5)
														{
															if(sinr < 24.5)
																return 6.89543;
															else
																return 7.94123;
														}
														else
														{
															if(sinr < 16.5)
															{
																if(ta < 10.5)
																{
																	if(rsrq < -7)
																		return 8.45219;
																	else
																		return 9.74421;
																}
																else
																	return 6.7086;
															}
															else
																return 13.337;
														}
													}
												}
												else
												{
													if(rsrp < -94.5)
														return 24.9653;
													else
													{
														if(ta < 13.5)
														{
															if(rsrq < -5.5)
															{
																if(cell < 12918810.5)
																{
																	if(ta < 6.5)
																		return 16.5375;
																	else
																		return 13.4842;
																}
																else
																{
																	if(rsrp < -91.5)
																	{
																		if(rsrp < -92.5)
																			return 6.51134;
																		else
																			return 3.85617;
																	}
																	else
																	{
																		if(velocity < 16.915)
																		{
																			if(rsrp < -82.5)
																				return 9.33178;
																			else
																				return 11.6839;
																		}
																		else
																		{
																			if(cqi < 12.5)
																			{
																				if(cell < 13845122)
																				{
																					if(rsrp < -82.5)
																						return 12.3887;
																					else
																						return 11.4216;
																				}
																				else
																				{
																					if(sinr < 22)
																					{
																						if(velocity < 27.125)
																							return 13.8923;
																						else
																							return 14.4875;
																					}
																					else
																						return 12.9324;
																				}
																			}
																			else
																				return 9.18133;
																		}
																	}
																}
															}
															else
															{
																if(sinr < 23)
																{
																	if(velocity < 25.775)
																		return 16.0107;
																	else
																		return 13.7398;
																}
																else
																	return 24.4009;
															}
														}
														else
														{
															if(rsrp < -79)
																return 16.2354;
															else
																return 21.9479;
														}
													}
												}
											}
										}
									}
									else
									{
										if(cell < 13610255)
											return 30.581;
										else
											return 11.6807;
									}
								}
							}
							else
							{
								if(payload < 6.5)
								{
									if(rsrp < -79.5)
									{
										if(sinr < 19)
										{
											if(velocity < 13.465)
											{
												if(velocity < 4.23)
												{
													if(sinr < 10)
														return 14.9719;
													else
													{
														if(rsrp < -99.5)
															return 13.6016;
														else
															return 13.9901666667;
													}
												}
												else
												{
													if(rsrp < -90.5)
														return 9.9975;
													else
														return 1.54071;
												}
											}
											else
											{
												if(velocity < 13.695)
													return 16.7131;
												else
													return 14.8423;
											}
										}
										else
										{
											if(ta < 2.5)
												return 2.5533;
											else
												return 7.25185;
										}
									}
									else
									{
										if(rsrp < -74.5)
											return 15.4077857143;
										else
											return 18.1818;
									}
								}
								else
								{
									if(rsrq < -6.5)
									{
										if(rsrp < -103)
										{
											if(velocity < 10.64)
												return 1.39616;
											else
											{
												if(payload < 7.5)
													return 10.6201;
												else
													return 11.5398;
											}
										}
										else
										{
											if(ta < 6.5)
											{
												if(rsrq < -9.5)
												{
													if(rsrp < -89)
														return 20.94515;
													else
														return 22.9812;
												}
												else
												{
													if(ta < 3.5)
													{
														if(sinr < 19.5)
														{
															if(ta < 0.5)
																return 17.0981;
															else
															{
																if(payload < 8.5)
																{
																	if(cqi < 11.5)
																		return 19.5003;
																	else
																		return 18.6232;
																}
																else
																{
																	if(sinr < 13.5)
																		return 18.6611;
																	else
																		return 22.4579;
																}
															}
														}
														else
															return 14.9848;
													}
													else
													{
														if(ta < 4.5)
															return 13.2621;
														else
														{
															if(velocity < 0.51)
																return 20.2077;
															else
															{
																if(payload < 9.5)
																	return 17.3703;
																else
																	return 16.3332;
															}
														}
													}
												}
											}
											else
												return 2.47917;
										}
									}
									else
										return 27.027;
								}
							}
						}
					}
					else
					{
						if(sinr < 7.5)
							return 7.51997;
						else
						{
							if(payload < 9.5)
							{
								if(cell < 13828122)
								{
									if(velocity < 7.7)
									{
										if(sinr < 17)
											return 15.8993;
										else
											return 18.0463;
									}
									else
									{
										if(rsrq < -4.5)
										{
											if(sinr < 13.5)
											{
												if(payload < 6.5)
													return 8.94354;
												else
													return 2.48937;
											}
											else
											{
												if(velocity < 21.33)
												{
													if(sinr < 20)
													{
														if(sinr < 18)
															return 16.9811;
														else
															return 13.1796;
													}
													else
													{
														if(velocity < 14.62)
														{
															if(f < 2262.5)
															{
																if(sinr < 25)
																{
																	if(payload < 6.5)
																		return 11.415;
																	else
																		return 12.0508;
																}
																else
																{
																	if(payload < 5.5)
																		return 10.306;
																	else
																		return 9.62696;
																}
															}
															else
															{
																if(rsrp < -80.5)
																	return 13.587;
																else
																	return 11.5886;
															}
														}
														else
														{
															if(velocity < 14.755)
																return 5.87372;
															else
															{
																if(rsrp < -76)
																{
																	if(payload < 5.5)
																	{
																		if(sinr < 21.5)
																			return 10.568;
																		else
																			return 9.50966;
																	}
																	else
																		return 8.37321;
																}
																else
																	return 14.3209;
															}
														}
													}
												}
												else
												{
													if(rsrp < -87)
														return 20.7388;
													else
													{
														if(payload < 6)
															return 8.96459;
														else
														{
															if(rsrq < -6.5)
																return 12.7085;
															else
																return 13.7999;
														}
													}
												}
											}
										}
										else
											return 20.8605;
									}
								}
								else
								{
									if(sinr < 21.5)
									{
										if(sinr < 12.5)
											return 14.6319;
										else
										{
											if(velocity < 11.505)
												return 20.0781333333;
											else
												return 19.1469166667;
										}
									}
									else
									{
										if(payload < 6)
											return 9.55224;
										else
										{
											if(rsrp < -82.5)
												return 14.7738;
											else
												return 17.991;
										}
									}
								}
							}
							else
							{
								if(velocity < 19.23)
								{
									if(rsrq < -8.5)
										return 6.93662;
									else
									{
										if(ta < 9.5)
										{
											if(cell < 13161620.5)
												return 14.2552;
											else
											{
												if(rsrp < -72)
													return 18.9349;
												else
													return 17.8771;
											}
										}
										else
										{
											if(rsrq < -6.5)
											{
												if(rsrp < -88.5)
													return 23.753;
												else
													return 22.1484;
											}
											else
												return 21.9901;
										}
									}
								}
								else
								{
									if(sinr < 19.5)
									{
										if(f < 1347.5)
											return 25.8065;
										else
											return 25.3165;
									}
									else
										return 26.6756;
								}
							}
						}
					}
				}
				else
				{
					if(payload < 8.5)
					{
						if(cell < 12918810.5)
						{
							if(rsrp < -74.5)
							{
								if(payload < 6.5)
								{
									if(rsrq < -5.5)
										return 15.4143;
									else
										return 16.6725;
								}
								else
								{
									if(velocity < 17.62)
										return 27.2109;
									else
										return 25.9379;
								}
							}
							else
							{
								if(rsrq < -4.5)
								{
									if(rsrp < -71.5)
										return 15.544;
									else
									{
										if(payload < 5.5)
											return 16.5221;
										else
											return 17.1612;
									}
								}
								else
								{
									if(ta < 2.5)
										return 11.6754;
									else
										return 15.4525;
								}
							}
						}
						else
						{
							if(velocity < 36.265)
							{
								if(velocity < 33.83)
								{
									if(payload < 6.5)
									{
										if(velocity < 30.195)
										{
											if(ta < 3.5)
											{
												if(rsrp < -81.5)
													return 9.02425;
												else
													return 8.39234;
											}
											else
											{
												if(ta < 8.5)
													return 13.4907;
												else
													return 11.065;
											}
										}
										else
											return 6.57489;
									}
									else
									{
										if(rsrp < -72.5)
										{
											if(rsrq < -6.5)
												return 11.1376;
											else
												return 13.1067;
										}
										else
											return 14.9733;
									}
								}
								else
								{
									if(rsrp < -71)
										return 1.64453;
									else
										return 11.8835;
								}
							}
							else
								return 17.9085;
						}
					}
					else
					{
						if(cqi < 12.5)
						{
							if(ta < 10)
							{
								if(rsrq < -8)
									return 19.2446;
								else
									return 17.9775;
							}
							else
								return 13.2768;
						}
						else
						{
							if(sinr < 30.5)
							{
								if(ta < 3)
									return 17.8838;
								else
								{
									if(cell < 13610254)
										return 26.393;
									else
									{
										if(sinr < 29.5)
										{
											if(ta < 10)
												return 31.0078;
											else
												return 29.9252;
										}
										else
											return 33.8839;
									}
								}
							}
							else
							{
								if(ta < 10)
								{
									if(sinr < 31.5)
										return 15.2236;
									else
									{
										if(ta < 4.5)
										{
											if(cell < 13161621)
												return 21.4823;
											else
												return 24.6381;
										}
										else
											return 15.9504;
									}
								}
								else
								{
									if(velocity < 36.545)
									{
										if(rsrq < -5.5)
											return 24.7253;
										else
											return 25.5591;
									}
									else
										return 28.0265;
								}
							}
						}
					}
				}
			}
		}
	}
}

float o2_dl_tree_3(float payload, float rsrp, float rsrq, float sinr, float cqi, float ta, float velocity, float cell, float f)
{
	if(cqi < 9.5)
	{
		if(sinr < 2.5)
		{
			if(rsrp < -80.5)
			{
				if(cell < 12989325.5)
				{
					if(cell < 12909593.5)
					{
						if(velocity < 15.955)
						{
							if(f < 1347.5)
							{
								if(payload < 5.5)
								{
									if(payload < 0.3)
										return 1.5189720345;
									else
									{
										if(rsrq < -17.5)
											return 0.296523;
										else
										{
											if(cell < 12904066)
												return 0.7769340833;
											else
												return 1.38708;
										}
									}
								}
								else
								{
									if(velocity < 8.14)
									{
										if(sinr < -2.5)
											return 3.45125;
										else
											return 4.31001;
									}
									else
									{
										if(payload < 9.5)
										{
											if(rsrq < -15)
												return 1.87572;
											else
											{
												if(velocity < 8.83)
													return 1.57439;
												else
													return 0.9316706667;
											}
										}
										else
											return 4.46453;
									}
								}
							}
							else
							{
								if(rsrp < -87.5)
								{
									if(rsrp < -97)
									{
										if(sinr < -0.5)
										{
											if(velocity < 6.535)
											{
												if(rsrp < -100)
													return 1.73762;
												else
													return 2.251;
											}
											else
											{
												if(velocity < 9.445)
													return 8.32466;
												else
												{
													if(rsrp < -98.5)
													{
														if(velocity < 11.34)
															return 2.76593;
														else
														{
															if(payload < 3.75)
																return 3.46921;
															else
																return 3.92157;
														}
													}
													else
														return 5.17632;
												}
											}
										}
										else
											return 9.44882;
									}
									else
									{
										if(rsrq < -10.5)
										{
											if(rsrq < -12.5)
											{
												if(payload < 9.5)
												{
													if(rsrp < -95.5)
														return 1.57439;
													else
														return 0.5302245165;
												}
												else
													return 3.79381;
											}
											else
											{
												if(payload < 3.5)
												{
													if(rsrq < -11.5)
													{
														if(ta < 11.5)
															return 0.824997;
														else
														{
															if(payload < 1.5)
															{
																if(sinr < -2.5)
																	return 2.63331;
																else
																	return 3.64797;
															}
															else
																return 2.56369;
														}
													}
													else
														return 2.88462;
												}
												else
													return 1.39437;
											}
										}
										else
										{
											if(payload < 5.25)
												return 4.73373;
											else
												return 3.57958;
										}
									}
								}
								else
									return 8.35655;
							}
						}
						else
						{
							if(cqi < 6.5)
							{
								if(velocity < 17.33)
								{
									if(rsrq < -11.5)
										return 3.29218;
									else
									{
										if(cqi < 5.5)
											return 10.568;
										else
											return 12.7762;
									}
								}
								else
								{
									if(payload < 1.05)
									{
										if(rsrq < -9.5)
										{
											if(cqi < 5)
												return 4.10258;
											else
												return 3.019194;
										}
										else
											return 1.90932;
									}
									else
									{
										if(sinr < -0.5)
											return 2.38403;
										else
											return 1.65529;
									}
								}
							}
							else
							{
								if(cell < 12897038.5)
									return 9.04773;
								else
									return 11.118;
							}
						}
					}
					else
					{
						if(payload < 8.5)
						{
							if(velocity < 16.595)
							{
								if(payload < 4.5)
								{
									if(rsrp < -99.5)
									{
										if(rsrp < -110.5)
										{
											if(rsrp < -111.5)
											{
												if(sinr < -3)
												{
													if(rsrq < -13.5)
														return 1.86111;
													else
														return 0.968992;
												}
												else
												{
													if(cqi < 6.5)
														return 6.23539;
													else
														return 4.5977;
												}
											}
											else
											{
												if(sinr < -0.5)
													return 3.0095;
												else
													return 2.08225;
											}
										}
										else
										{
											if(payload < 2.25)
												return 4.28266;
											else
												return 5.03398;
										}
									}
									else
									{
										if(cqi < 8.5)
										{
											if(velocity < 10)
											{
												if(rsrp < -92)
													return 3.76471;
												else
													return 6.23296;
											}
											else
											{
												if(cqi < 6.5)
												{
													if(payload < 2)
														return 6.34417;
													else
														return 5.4807;
												}
												else
												{
													if(rsrq < -11)
														return 9.66184;
													else
														return 6.95655;
												}
											}
										}
										else
											return 10.6242;
									}
								}
								else
								{
									if(rsrq < -9.5)
									{
										if(cqi < 5.5)
										{
											if(rsrq < -11.5)
											{
												if(payload < 5.5)
													return 12.3077;
												else
													return 14.8607;
											}
											else
												return 4.3952;
										}
										else
										{
											if(rsrp < -91.5)
											{
												if(payload < 6)
													return 4.34499;
												else
													return 2.83487;
											}
											else
												return 6.80041;
										}
									}
									else
										return 11.1328;
								}
							}
							else
							{
								if(payload < 4.5)
								{
									if(ta < 13)
										return 2.7680842857;
									else
										return 1.98376;
								}
								else
								{
									if(velocity < 35.085)
										return 3.44487;
									else
										return 3.98059;
								}
							}
						}
						else
						{
							if(rsrq < -12.5)
							{
								if(rsrp < -105.5)
								{
									if(rsrq < -14.5)
										return 12.7029;
									else
										return 5.39811;
								}
								else
								{
									if(rsrq < -13.5)
										return 16.2767;
									else
										return 19.6223;
								}
							}
							else
							{
								if(rsrq < -9)
								{
									if(rsrq < -11)
										return 8.78156;
									else
										return 6.71535;
								}
								else
									return 3.40764;
							}
						}
					}
				}
				else
				{
					if(payload < 9.5)
					{
						if(rsrp < -88.5)
						{
							if(velocity < 27.38)
							{
								if(f < 2262.5)
								{
									if(payload < 2.5)
									{
										if(cell < 13553922)
										{
											if(rsrq < -10)
											{
												if(ta < 42.5)
												{
													if(cqi < 6.5)
													{
														if(sinr < -3.5)
														{
															if(payload < 0.75)
															{
																if(cell < 13542402.5)
																{
																	if(rsrp < -103)
																	{
																		if(payload < 0.3)
																			return 2.58901;
																		else
																		{
																			if(sinr < -5.5)
																				return 0.590755;
																			else
																				return 0.15873;
																		}
																	}
																	else
																		return 0.4419425;
																}
																else
																	return 0.1965092;
															}
															else
															{
																if(ta < 14.5)
																{
																	if(velocity < 1.31)
																		return 0.246776;
																	else
																	{
																		if(sinr < -7.5)
																			return 1.46466;
																		else
																		{
																			if(rsrq < -14.5)
																			{
																				if(rsrp < -108.5)
																					return 0.386819;
																				else
																				{
																					if(cell < 13416974)
																						return 1.35823;
																					else
																					{
																						if(rsrp < -103)
																							return 1.012305;
																						else
																						{
																							if(sinr < -4.5)
																								return 1.09081;
																							else
																								return 0.572861;
																						}
																					}
																				}
																			}
																			else
																				return 1.60032;
																		}
																	}
																}
																else
																	return 1.8298322652;
															}
														}
														else
														{
															if(f < 1347.5)
															{
																if(ta < 28.5)
																{
																	if(velocity < 5.68)
																	{
																		if(cqi < 4.5)
																			return 0.4047576;
																		else
																		{
																			if(rsrp < -99.5)
																				return 1.0029123333;
																			else
																				return 0.533866;
																		}
																	}
																	else
																	{
																		if(sinr < -1)
																			return 0.19559575;
																		else
																		{
																			if(rsrp < -98.5)
																				return 0.2871035;
																			else
																			{
																				if(ta < 12.5)
																				{
																					if(rsrp < -97.5)
																						return 0.706152;
																					else
																						return 0.144577;
																				}
																				else
																					return 0.334672;
																			}
																		}
																	}
																}
																else
																	return 0.1129093209;
															}
															else
																return 0.2253800162;
														}
													}
													else
													{
														if(velocity < 2.305)
														{
															if(payload < 1.25)
																return 2.10526;
															else
																return 1.64254;
														}
														else
														{
															if(sinr < -1.5)
															{
																if(payload < 1.05)
																	return 0.160225;
																else
																	return 1.68599;
															}
															else
															{
																if(velocity < 11.095)
																	return 0.382593;
																else
																{
																	if(ta < 5.5)
																		return 0.840947;
																	else
																		return 0.430909;
																}
															}
														}
													}
												}
												else
													return 2.30017;
											}
											else
											{
												if(payload < 1.5)
													return 2.11361;
												else
													return 1.45059;
											}
										}
										else
										{
											if(rsrp < -105.5)
												return 0.4860074286;
											else
											{
												if(ta < 37.5)
												{
													if(sinr < 1.5)
													{
														if(f < 1347.5)
														{
															if(payload < 0.3)
															{
																if(velocity < 12.095)
																{
																	if(rsrp < -96.5)
																		return 1.66321;
																	else
																		return 0.2074255;
																}
																else
																	return 2.1325;
															}
															else
															{
																if(rsrq < -13)
																	return 0.4030867;
																else
																{
																	if(rsrq < -10.5)
																		return 2.56781;
																	else
																		return 1.00673;
																}
															}
														}
														else
														{
															if(velocity < 4.215)
															{
																if(payload < 1.5)
																	return 1.7159033333;
																else
																	return 6.76819;
															}
															else
															{
																if(cell < 13884186)
																{
																	if(payload < 1.5)
																	{
																		if(sinr < 0.5)
																			return 1.14006925;
																		else
																			return 0.490497;
																	}
																	else
																	{
																		if(sinr < -4)
																			return 2.19238;
																		else
																		{
																			if(cqi < 6)
																				return 1.11281;
																			else
																				return 1.64626;
																		}
																	}
																}
																else
																	return 3.84061;
															}
														}
													}
													else
													{
														if(cell < 13854874)
														{
															if(payload < 0.55)
																return 2.33237;
															else
																return 1.58447;
														}
														else
															return 8.83002;
													}
												}
												else
													return 8.53789;
											}
										}
									}
									else
									{
										if(payload < 8.5)
										{
											if(velocity < 14.585)
											{
												if(ta < 35)
												{
													if(rsrq < -12.5)
													{
														if(rsrq < -16.5)
														{
															if(velocity < 14.395)
															{
																if(payload < 6.5)
																{
																	if(ta < 19.5)
																	{
																		if(cell < 14111758.5)
																		{
																			if(velocity < 0.52)
																				return 0.44200475;
																			else
																				return 0.8062224;
																		}
																		else
																			return 1.10448;
																	}
																	else
																		return 1.36869;
																}
																else
																{
																	if(rsrp < -105)
																	{
																		if(sinr < -7.5)
																		{
																			if(cqi < 3.5)
																				return 1.752755;
																			else
																				return 2.90289;
																		}
																		else
																			return 3.18562;
																	}
																	else
																	{
																		if(rsrq < -18)
																		{
																			if(ta < 11)
																				return 0.776861;
																			else
																				return 0.366502;
																		}
																		else
																		{
																			if(rsrp < -96)
																				return 0.994106;
																			else
																				return 1.45549;
																		}
																	}
																}
															}
															else
																return 2.51873;
														}
														else
														{
															if(rsrp < -97.5)
															{
																if(cell < 13884173.5)
																{
																	if(velocity < 1.97)
																	{
																		if(payload < 3.5)
																			return 8.33333;
																		else
																		{
																			if(rsrq < -15.5)
																			{
																				if(payload < 5.5)
																					return 0.766049;
																				else
																				{
																					if(rsrp < -100.5)
																						return 1.05026;
																					else
																						return 2.07182;
																				}
																			}
																			else
																			{
																				if(payload < 4.5)
																					return 1.58463;
																				else
																				{
																					if(rsrq < -13.5)
																						return 5.7122033333;
																					else
																					{
																						if(rsrp < -101.5)
																							return 3.67623;
																						else
																							return 2.69815;
																					}
																				}
																			}
																		}
																	}
																	else
																	{
																		if(rsrp < -107.5)
																		{
																			if(cqi < 4.5)
																				return 2.78009;
																			else
																				return 1.23008;
																		}
																		else
																		{
																			if(cell < 13416986.5)
																			{
																				if(rsrp < -103.5)
																					return 2.2456033333;
																				else
																				{
																					if(cqi < 6.5)
																					{
																						if(rsrp < -101.5)
																							return 2.50031;
																						else
																						{
																							if(ta < 8)
																								return 1.31105;
																							else
																								return 1.87999;
																						}
																					}
																					else
																						return 0.598745;
																				}
																			}
																			else
																			{
																				if(rsrq < -15.5)
																				{
																					if(velocity < 9.795)
																					{
																						if(sinr < -4)
																							return 1.56699;
																						else
																							return 2.47339;
																					}
																					else
																					{
																						if(sinr < -3.5)
																						{
																							if(velocity < 11.655)
																								return 0.613162;
																							else
																							{
																								if(rsrp < -104)
																									return 0.631157;
																								else
																									return 1.49934;
																							}
																						}
																						else
																							return 2.0995;
																					}
																				}
																				else
																				{
																					if(cell < 13542402.5)
																						return 0.423281;
																					else
																					{
																						if(ta < 9)
																							return 1.52848;
																						else
																						{
																							if(rsrp < -103.5)
																							{
																								if(rsrp < -104.5)
																									return 0.915554;
																								else
																									return 1.38098;
																							}
																							else
																								return 0.95620425;
																						}
																					}
																				}
																			}
																		}
																	}
																}
																else
																	return 5.95365;
															}
															else
															{
																if(payload < 4.5)
																{
																	if(ta < 11)
																		return 0.534887125;
																	else
																	{
																		if(cell < 13713409.5)
																			return 0.459269;
																		else
																		{
																			if(sinr < -2.5)
																				return 0.844297;
																			else
																				return 1.34941;
																		}
																	}
																}
																else
																{
																	if(cqi < 5.5)
																	{
																		if(rsrp < -90)
																			return 1.08674;
																		else
																			return 2.07308;
																	}
																	else
																		return 4.00842;
																}
															}
														}
													}
													else
													{
														if(sinr < -1.5)
														{
															if(ta < 10.5)
															{
																if(cell < 13622554)
																	return 0.953743;
																else
																	return 1.8080133333;
															}
															else
																return 0.345688;
														}
														else
														{
															if(cqi < 3)
																return 6.44468;
															else
															{
																if(sinr < 1.5)
																{
																	if(cqi < 7.5)
																	{
																		if(sinr < -0.5)
																		{
																			if(cqi < 6.5)
																				return 6.34753;
																			else
																			{
																				if(rsrq < -10.5)
																					return 2.8215333333;
																				else
																					return 1.67098;
																			}
																		}
																		else
																		{
																			if(velocity < 11.09)
																			{
																				if(velocity < 4.36)
																				{
																					if(payload < 6.5)
																						return 2.7520488889;
																					else
																						return 1.01293;
																				}
																				else
																				{
																					if(f < 1347.5)
																						return 0.993049;
																					else
																						return 1.85744;
																				}
																			}
																			else
																				return 4.5865;
																		}
																	}
																	else
																	{
																		if(rsrq < -10.5)
																			return 6.35425;
																		else
																			return 2.38178;
																	}
																}
																else
																{
																	if(payload < 7)
																	{
																		if(cell < 13422235)
																			return 0.3969685;
																		else
																			return 1.07711;
																	}
																	else
																		return 2.33483;
																}
															}
														}
													}
												}
												else
												{
													if(velocity < 12.775)
													{
														if(rsrq < -18)
															return 3.27785;
														else
															return 2.5215;
													}
													else
														return 5.47196;
												}
											}
											else
											{
												if(velocity < 14.705)
													return 8.11085;
												else
												{
													if(rsrp < -91)
													{
														if(velocity < 18.53)
														{
															if(cell < 13713293.5)
															{
																if(cqi < 3.5)
																{
																	if(payload < 6.5)
																	{
																		if(rsrq < -16.5)
																			return 0.929157;
																		else
																			return 0.345108;
																	}
																	else
																		return 2.22717;
																}
																else
																{
																	if(cell < 13461531)
																	{
																		if(rsrp < -99.5)
																			return 1.130965;
																		else
																			return 1.7068157143;
																	}
																	else
																	{
																		if(velocity < 15.075)
																			return 2.00342;
																		else
																			return 3.08523;
																	}
																}
															}
															else
															{
																if(sinr < -3)
																{
																	if(rsrq < -15)
																		return 4.41928;
																	else
																		return 3.65714;
																}
																else
																{
																	if(rsrq < -15.5)
																		return 1.51448;
																	else
																		return 2.3592366667;
																}
															}
														}
														else
														{
															if(payload < 5)
																return 6.73212;
															else
																return 2.50279;
														}
													}
													else
														return 8.79282;
												}
											}
										}
										else
										{
											if(sinr < -2.5)
											{
												if(rsrp < -106.5)
													return 3.64834;
												else
												{
													if(ta < 15)
													{
														if(ta < 9)
														{
															if(rsrq < -15.5)
																return 1.16582;
															else
															{
																if(cqi < 3.5)
																	return 2.94491;
																else
																	return 2.358425;
															}
														}
														else
														{
															if(f < 1347.5)
															{
																if(rsrp < -100)
																	return 0.407641;
																else
																	return 0.8466275;
															}
															else
																return 2.03126;
														}
													}
													else
													{
														if(rsrq < -13)
															return 3.61918;
														else
															return 2.48182;
													}
												}
											}
											else
											{
												if(cell < 13854873)
												{
													if(cqi < 6.5)
													{
														if(rsrq < -13.5)
															return 4.04881;
														else
															return 5.14222;
													}
													else
													{
														if(rsrp < -96.5)
															return 2.87081;
														else
														{
															if(rsrq < -13.5)
																return 4.34442;
															else
																return 3.75352;
														}
													}
												}
												else
												{
													if(velocity < 6.785)
														return 15.7102;
													else
														return 6.10376;
												}
											}
										}
									}
								}
								else
								{
									if(sinr < -3)
										return 10.5088823762;
									else
									{
										if(cqi < 5.5)
										{
											if(cqi < 3.5)
												return 3.04878;
											else
												return 1.348015;
										}
										else
										{
											if(sinr < 0.5)
											{
												if(ta < 21.5)
													return 1.97385;
												else
													return 0.144851;
											}
											else
											{
												if(ta < 24.5)
												{
													if(rsrp < -104)
														return 6.75105;
													else
														return 6.0241;
												}
												else
													return 2.30017;
											}
										}
									}
								}
							}
							else
							{
								if(sinr < -1.5)
								{
									if(rsrp < -106)
										return 13.8498;
									else
									{
										if(sinr < -2.5)
										{
											if(cell < 13845250.5)
												return 4.70035;
											else
												return 3.22582;
										}
										else
											return 6.77201;
									}
								}
								else
								{
									if(rsrp < -92.5)
									{
										if(velocity < 33.02)
											return 3.95788;
										else
											return 4.5472066667;
									}
									else
									{
										if(sinr < 0.5)
											return 2.34475;
										else
											return 1.90794;
									}
								}
							}
						}
						else
						{
							if(velocity < 11.775)
							{
								if(ta < 11.5)
								{
									if(ta < 8.5)
									{
										if(rsrp < -82)
											return 1.2153066667;
										else
										{
											if(payload < 0.75)
												return 2.15517;
											else
												return 1.74634;
										}
									}
									else
									{
										if(velocity < 7.69)
											return 4.81348;
										else
										{
											if(payload < 2.25)
												return 2.67559;
											else
												return 2.14161;
										}
									}
								}
								else
								{
									if(rsrq < -10.5)
										return 4.23282;
									else
									{
										if(rsrq < -9.5)
											return 7.29594;
										else
											return 4.3071;
									}
								}
							}
							else
							{
								if(ta < 9.5)
								{
									if(velocity < 14.425)
									{
										if(ta < 1.5)
											return 9.38086;
										else
										{
											if(payload < 6.5)
											{
												if(cqi < 4.5)
													return 5.11182;
												else
													return 5.986834;
											}
											else
												return 7.94326;
										}
									}
									else
										return 10.6121;
								}
								else
								{
									if(velocity < 31.26)
										return 1.3206775;
									else
										return 3.63174;
								}
							}
						}
					}
					else
					{
						if(cqi < 2)
							return 26.1352;
						else
						{
							if(f < 2262.5)
							{
								if(cell < 13843074.5)
								{
									if(velocity < 12.355)
									{
										if(ta < 28.5)
										{
											if(velocity < 4.695)
												return 6.81489;
											else
												return 2.01476;
										}
										else
											return 14.771;
									}
									else
									{
										if(rsrq < -11.5)
										{
											if(cqi < 4.5)
											{
												if(rsrq < -16)
													return 1.07459;
												else
													return 1.75786;
											}
											else
											{
												if(rsrp < -97)
													return 4.06607;
												else
													return 0.510728;
											}
										}
										else
										{
											if(rsrq < -9)
											{
												if(velocity < 16.67)
													return 4.7784;
												else
													return 5.36265;
											}
											else
												return 6.28239;
										}
									}
								}
								else
								{
									if(cell < 14093071)
									{
										if(cqi < 6.5)
										{
											if(rsrp < -99.5)
												return 1.63142;
											else
												return 2.33461;
										}
										else
										{
											if(rsrp < -93.5)
												return 1.20591;
											else
												return 0.62498;
										}
									}
									else
										return 6.27303;
								}
							}
							else
								return 18.8813;
						}
					}
				}
			}
			else
			{
				if(payload < 3)
				{
					if(velocity < 14.8)
						return 6.96561;
					else
						return 3.36134;
				}
				else
				{
					if(velocity < 13.99)
					{
						if(rsrq < -14.5)
							return 7.17811;
						else
						{
							if(rsrp < -73)
								return 10.4952;
							else
								return 9.73236;
						}
					}
					else
					{
						if(velocity < 34.71)
						{
							if(sinr < 1.5)
								return 12.343;
							else
								return 13.4369;
						}
						else
							return 11.7302;
					}
				}
			}
		}
		else
		{
			if(sinr < 7.5)
			{
				if(velocity < 34.515)
				{
					if(payload < 3.5)
					{
						if(rsrq < -10.5)
						{
							if(rsrp < -98.5)
							{
								if(rsrq < -12.5)
									return 11.0957;
								else
								{
									if(rsrp < -100.5)
									{
										if(velocity < 28.65)
										{
											if(ta < 4)
												return 2.1692;
											else
												return 1.7274366667;
										}
										else
											return 0.527983;
									}
									else
									{
										if(sinr < 3.5)
											return 3.27735;
										else
											return 8.84956;
									}
								}
							}
							else
							{
								if(rsrp < -85.5)
								{
									if(cell < 13156628)
									{
										if(velocity < 11.46)
										{
											if(payload < 0.75)
											{
												if(rsrp < -92)
													return 0.727141;
												else
													return 2.10637;
											}
											else
											{
												if(rsrq < -12.5)
												{
													if(payload < 2)
														return 1.21914;
													else
													{
														if(cqi < 5.5)
															return 3.75235;
														else
															return 2.69209;
													}
												}
												else
												{
													if(rsrp < -92)
														return 3.99002;
													else
													{
														if(cell < 12909467)
															return 3.1696033333;
														else
															return 3.77003;
													}
												}
											}
										}
										else
										{
											if(velocity < 11.855)
												return 0.396434;
											else
											{
												if(velocity < 13.62)
													return 2.637445;
												else
													return 1.888755;
											}
										}
									}
									else
									{
										if(f < 1347.5)
										{
											if(sinr < 3.5)
												return 1.43241;
											else
											{
												if(cqi < 7)
													return 0.3157712;
												else
												{
													if(ta < 11)
													{
														if(payload < 1.25)
															return 0.127105;
														else
															return 0.69448;
													}
													else
														return 1.31752;
												}
											}
										}
										else
										{
											if(rsrp < -92.5)
											{
												if(ta < 9)
												{
													if(sinr < 3.5)
													{
														if(cqi < 5.5)
														{
															if(rsrq < -11.5)
																return 1.3708133333;
															else
																return 0.92539;
														}
														else
															return 0.885152;
													}
													else
														return 1.67102;
												}
												else
													return 2.99775;
											}
											else
											{
												if(ta < 11)
												{
													if(payload < 2)
													{
														if(rsrp < -87)
															return 1.1581333333;
														else
															return 1.67365;
													}
													else
														return 2.21076;
												}
												else
												{
													if(cqi < 6.5)
														return 3.3637;
													else
													{
														if(rsrp < -90)
															return 6.02864;
														else
															return 4.72534;
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
										if(rsrp < -75)
										{
											if(rsrp < -83.5)
												return 3.11526;
											else
											{
												if(rsrq < -11.5)
													return 5.47947;
												else
													return 3.84617;
											}
										}
										else
											return 1.01339;
									}
									else
										return 8.28586;
								}
							}
						}
						else
						{
							if(sinr < 5.5)
							{
								if(ta < 4.5)
								{
									if(ta < 1.5)
									{
										if(velocity < 18.25)
										{
											if(sinr < 4)
												return 3.75588;
											else
												return 4.36126;
										}
										else
											return 2.61097;
									}
									else
									{
										if(cell < 13874701)
											return 2.1541975;
										else
											return 0.697898;
									}
								}
								else
								{
									if(rsrp < -91)
									{
										if(f < 2262.5)
										{
											if(cqi < 7.5)
											{
												if(payload < 1.25)
													return 1.20373;
												else
													return 2.0691866667;
											}
											else
												return 3.18726;
										}
										else
										{
											if(rsrq < -9.5)
												return 3.36136;
											else
											{
												if(rsrp < -109.5)
													return 4.15369;
												else
													return 4.89297;
											}
										}
									}
									else
									{
										if(f < 1347.5)
										{
											if(rsrq < -5.5)
											{
												if(rsrp < -81)
													return 3.12501;
												else
													return 4.24403;
											}
											else
												return 1.13395;
										}
										else
										{
											if(velocity < 17.995)
											{
												if(rsrq < -9.5)
													return 7.27273;
												else
													return 5.606705;
											}
											else
												return 9.69305;
										}
									}
								}
							}
							else
							{
								if(payload < 1.5)
								{
									if(velocity < 12.45)
									{
										if(ta < 1.5)
											return 4.02012;
										else
										{
											if(f < 1347.5)
												return 4.34546;
											else
												return 2.392385;
										}
									}
									else
									{
										if(ta < 5.5)
											return 6.1475566667;
										else
											return 3.99202;
									}
								}
								else
								{
									if(rsrp < -97.5)
									{
										if(cqi < 8.5)
										{
											if(rsrq < -8.5)
												return 10.3359;
											else
												return 12.7389;
										}
										else
											return 14.9254;
									}
									else
									{
										if(rsrq < -9)
										{
											if(cqi < 8)
												return 9.48992;
											else
												return 5.57103;
										}
										else
										{
											if(sinr < 6.5)
												return 6.49614;
											else
											{
												if(rsrp < -89.5)
													return 4.37637;
												else
													return 4.9856675;
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if(rsrq < -11.5)
						{
							if(payload < 7.5)
							{
								if(velocity < 14.045)
								{
									if(payload < 4.5)
									{
										if(f < 1347.5)
											return 6.05373;
										else
											return 6.96409;
									}
									else
									{
										if(cqi < 6.5)
										{
											if(sinr < 3.5)
											{
												if(cqi < 5.5)
													return 1.2954;
												else
												{
													if(cell < 13472399)
													{
														if(rsrp < -82.5)
															return 4.20705;
														else
															return 3.34808;
													}
													else
														return 5.11727;
												}
											}
											else
											{
												if(ta < 5)
													return 3.60036;
												else
												{
													if(sinr < 6)
													{
														if(rsrp < -89)
															return 1.33537;
														else
															return 1.82714;
													}
													else
														return 0.68598;
												}
											}
										}
										else
										{
											if(sinr < 4.5)
											{
												if(payload < 6)
													return 1.24564;
												else
													return 0.5897405;
											}
											else
												return 3.202405;
										}
									}
								}
								else
								{
									if(f < 2262.5)
									{
										if(sinr < 4.5)
										{
											if(ta < 7.5)
												return 2.56363;
											else
												return 7.13467;
										}
										else
										{
											if(cqi < 7)
												return 11.7008;
											else
												return 5.80131;
										}
									}
									else
										return 11.5345;
								}
							}
							else
							{
								if(cqi < 8.5)
								{
									if(cell < 13416974.5)
									{
										if(sinr < 3.5)
										{
											if(rsrp < -91)
												return 5.77451;
											else
												return 6.47511;
										}
										else
										{
											if(payload < 8.5)
												return 10.4661;
											else
											{
												if(rsrq < -12.5)
													return 6.88666;
												else
													return 9.48742;
											}
										}
									}
									else
									{
										if(ta < 8)
										{
											if(cqi < 6.5)
												return 3.5512875;
											else
												return 7.38007;
										}
										else
										{
											if(cqi < 5.5)
												return 1.50875;
											else
												return 0.8008516667;
										}
									}
								}
								else
								{
									if(rsrp < -85)
										return 8.86795;
									else
										return 17.192;
								}
							}
						}
						else
						{
							if(velocity < 14.705)
							{
								if(rsrp < -86)
								{
									if(cqi < 7.5)
									{
										if(cell < 13410695.5)
										{
											if(rsrp < -104.5)
												return 14.0488;
											else
											{
												if(sinr < 6.5)
												{
													if(cqi < 5.5)
													{
														if(sinr < 4)
															return 5.52486;
														else
															return 6.33341;
													}
													else
													{
														if(payload < 5)
															return 3.36205;
														else
															return 2.49506;
													}
												}
												else
												{
													if(ta < 15)
													{
														if(payload < 8.5)
														{
															if(payload < 5)
																return 10.0851;
															else
																return 12.41625;
														}
														else
															return 8.27918;
													}
													else
														return 3.70628;
												}
											}
										}
										else
										{
											if(ta < 3.5)
												return 9.37866;
											else
											{
												if(cell < 13479694.5)
												{
													if(ta < 8)
													{
														if(payload < 6.5)
															return 4.70754;
														else
															return 5.42189;
													}
													else
														return 2.46723;
												}
												else
												{
													if(f < 1765)
													{
														if(cqi < 6.5)
															return 0.622473;
														else
															return 1.81637;
													}
													else
													{
														if(cqi < 5.5)
															return 2.82611;
														else
															return 2.12508;
													}
												}
											}
										}
									}
									else
									{
										if(ta < 9.5)
										{
											if(velocity < 1.84)
											{
												if(cell < 13881365)
												{
													if(cqi < 8.5)
													{
														if(payload < 8.5)
															return 5.54672;
														else
															return 7.19424;
													}
													else
														return 7.62995;
												}
												else
													return 11.5053;
											}
											else
												return 12.3235;
										}
										else
										{
											if(rsrq < -9.5)
											{
												if(rsrp < -95)
													return 6.93498;
												else
													return 10.6809;
											}
											else
											{
												if(cell < 13689871)
												{
													if(velocity < 5.66)
														return 12.9817;
													else
														return 14.4079;
												}
												else
												{
													if(sinr < 6)
														return 18.799;
													else
														return 17.1812;
												}
											}
										}
									}
								}
								else
								{
									if(rsrq < -9.5)
										return 20.2532;
									else
									{
										if(velocity < 14.145)
										{
											if(cell < 13613716.5)
											{
												if(ta < 4.5)
												{
													if(cell < 13404430)
													{
														if(rsrp < -78.5)
															return 11.0155;
														else
															return 10.1652;
													}
													else
														return 12.3172;
												}
												else
												{
													if(rsrp < -80)
														return 9.5454;
													else
														return 8.18833;
												}
											}
											else
												return 6.69083;
										}
										else
										{
											if(rsrp < -83.5)
												return 13.8504;
											else
												return 13.3891;
										}
									}
								}
							}
							else
							{
								if(ta < 8.5)
								{
									if(ta < 2)
									{
										if(ta < 0.5)
											return 5.5788;
										else
										{
											if(sinr < 4)
												return 10.5611;
											else
												return 10.1574;
										}
									}
									else
									{
										if(payload < 4.5)
										{
											if(cqi < 5.5)
												return 20.1005;
											else
												return 15.9681;
										}
										else
										{
											if(cqi < 4.5)
												return 10.2433;
											else
											{
												if(sinr < 6)
												{
													if(sinr < 4.5)
													{
														if(payload < 7)
														{
															if(rsrq < -8.5)
																return 14.4092;
															else
																return 15.4589;
														}
														else
														{
															if(ta < 6.5)
																return 13.4539;
															else
																return 12.7247;
														}
													}
													else
														return 16.4914;
												}
												else
													return 9.6911;
											}
										}
									}
								}
								else
								{
									if(sinr < 3.5)
										return 14.079;
									else
									{
										if(cell < 13845133.5)
										{
											if(rsrp < -85.5)
											{
												if(velocity < 30.965)
												{
													if(sinr < 4.5)
														return 4.20168;
													else
														return 2.78105;
												}
												else
													return 6.71047;
											}
											else
											{
												if(rsrp < -75.5)
													return 10.5862;
												else
													return 8.21355;
											}
										}
										else
										{
											if(payload < 5)
												return 11.5607;
											else
												return 13.7339;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if(rsrq < -8)
					{
						if(ta < 14.5)
						{
							if(rsrq < -16)
								return 13.4713;
							else
								return 9.65795;
						}
						else
						{
							if(payload < 2.55)
								return 1.68777;
							else
								return 6.86342;
						}
					}
					else
						return 30.5489;
				}
			}
			else
			{
				if(payload < 2.5)
				{
					if(sinr < 9.5)
					{
						if(velocity < 14.645)
						{
							if(rsrq < -7.5)
							{
								if(rsrp < -90.5)
								{
									if(ta < 6.5)
									{
										if(rsrp < -94)
											return 0.994901;
										else
											return 2.5352666667;
									}
									else
										return 4.09731;
								}
								else
								{
									if(ta < 6)
									{
										if(rsrp < -78.5)
											return 5.55556;
										else
											return 4.58453;
									}
									else
									{
										if(cqi < 8)
										{
											if(payload < 1.25)
												return 1.59872;
											else
												return 3.68579;
										}
										else
											return 4.086572;
									}
								}
							}
							else
							{
								if(sinr < 8.5)
									return 5.464155;
								else
									return 6.60611;
							}
						}
						else
						{
							if(payload < 1.5)
							{
								if(velocity < 23.435)
									return 1.912562;
								else
									return 2.46915;
							}
							else
								return 3.91198;
						}
					}
					else
					{
						if(rsrp < -102.5)
						{
							if(payload < 0.75)
							{
								if(cell < 13632275)
									return 15.0944;
								else
								{
									if(rsrq < -8.5)
										return 12.1581;
									else
										return 7.60456;
								}
							}
							else
							{
								if(rsrp < -104)
									return 6.70297;
								else
									return 3.79147;
							}
						}
						else
						{
							if(rsrq < -10.5)
							{
								if(cqi < 7.5)
								{
									if(payload < 0.3)
									{
										if(rsrp < -88)
											return 4.96896;
										else
											return 6.89658;
									}
									else
									{
										if(velocity < 21.44)
											return 2.3602933333;
										else
											return 3.79867;
									}
								}
								else
								{
									if(velocity < 25.6)
									{
										if(ta < 14.5)
										{
											if(ta < 13.5)
											{
												if(rsrp < -91.5)
													return 6.0015;
												else
												{
													if(velocity < 8.745)
														return 6.48824;
													else
														return 7.5563766667;
												}
											}
											else
												return 9.93172;
										}
										else
											return 4.34075;
									}
									else
										return 12.6382;
								}
							}
							else
							{
								if(cell < 14345742)
								{
									if(rsrq < -6.5)
									{
										if(sinr < 11.5)
										{
											if(cell < 14115079)
											{
												if(cell < 12909467)
												{
													if(rsrp < -82.5)
													{
														if(rsrq < -7.5)
															return 4.46929;
														else
															return 4.863755;
													}
													else
														return 3.29218;
												}
												else
												{
													if(velocity < 8.725)
														return 1.602205;
													else
													{
														if(velocity < 14.285)
															return 3.75119;
														else
															return 3.31194;
													}
												}
											}
											else
												return 5.03147;
										}
										else
										{
											if(f < 2262.5)
											{
												if(velocity < 17.185)
												{
													if(rsrp < -87)
													{
														if(cqi < 6.5)
															return 7.57576;
														else
														{
															if(cqi < 7.5)
																return 4;
															else
															{
																if(ta < 5.5)
																	return 6.40002;
																else
																	return 5.3743642857;
															}
														}
													}
													else
													{
														if(payload < 1.5)
														{
															if(ta < 9.5)
															{
																if(rsrp < -77.5)
																{
																	if(cqi < 8.5)
																		return 3.959525;
																	else
																		return 3.49346;
																}
																else
																	return 4.38116;
															}
															else
																return 5.177858;
														}
														else
															return 1.93167;
													}
												}
												else
												{
													if(cell < 13806093)
													{
														if(payload < 0.55)
															return 3.38984;
														else
															return 4;
													}
													else
													{
														if(payload < 0.75)
															return 3.0303;
														else
															return 1.38098;
													}
												}
											}
											else
											{
												if(velocity < 12.505)
												{
													if(rsrp < -101)
														return 5.25279;
													else
														return 4.76192;
												}
												else
													return 6.35425;
											}
										}
									}
									else
									{
										if(sinr < 12)
										{
											if(ta < 6)
												return 4.96896;
											else
											{
												if(rsrp < -78.5)
													return 9.09094;
												else
													return 8.60218;
											}
										}
										else
										{
											if(velocity < 18.405)
											{
												if(velocity < 12.48)
													return 6.28437;
												else
												{
													if(ta < 14.5)
													{
														if(payload < 1.05)
															return 5.33335;
														else
															return 5.82242;
													}
													else
														return 4.23841;
												}
											}
											else
											{
												if(velocity < 32.52)
												{
													if(cqi < 7)
														return 3.22191;
													else
														return 2.77008;
												}
												else
													return 4.57145;
											}
										}
									}
								}
								else
									return 6.65557;
							}
						}
					}
				}
				else
				{
					if(cell < 12914202)
					{
						if(cell < 12896781.5)
						{
							if(rsrq < -8.5)
							{
								if(payload < 8)
									return 17.0455;
								else
									return 15.6678;
							}
							else
							{
								if(rsrp < -79.5)
									return 9.31496;
								else
									return 11.8149;
							}
						}
						else
						{
							if(rsrq < -7.5)
							{
								if(ta < 3.5)
								{
									if(payload < 5)
									{
										if(velocity < 12.845)
											return 5.22445;
										else
											return 4.647534;
									}
									else
									{
										if(rsrq < -11.5)
											return 8.40532;
										else
										{
											if(sinr < 11.5)
												return 6.4527;
											else
												return 5.33725;
										}
									}
								}
								else
								{
									if(f < 2262.5)
									{
										if(sinr < 24)
										{
											if(sinr < 12.5)
											{
												if(rsrq < -9.5)
												{
													if(rsrp < -90)
														return 8.17937;
													else
													{
														if(sinr < 11.5)
														{
															if(sinr < 8.5)
																return 3.24456;
															else
															{
																if(payload < 8)
																	return 6.799305;
																else
																{
																	if(rsrp < -87)
																	{
																		if(rsrq < -11.5)
																			return 6.80504;
																		else
																			return 3.48905;
																	}
																	else
																		return 5.77386;
																}
															}
														}
														else
															return 8.39983;
													}
												}
												else
												{
													if(velocity < 10.11)
														return 10.6649;
													else
														return 6.86916;
												}
											}
											else
											{
												if(sinr < 15)
												{
													if(payload < 6.5)
														return 2.54642;
													else
														return 4.62428;
												}
												else
												{
													if(rsrq < -8.5)
													{
														if(payload < 9)
														{
															if(cqi < 7.5)
																return 5.76535;
															else
															{
																if(payload < 7.5)
																	return 5.02287;
																else
																	return 6.10571;
															}
														}
														else
															return 5.18068;
													}
													else
														return 6.91264;
												}
											}
										}
										else
											return 12.4494;
									}
									else
									{
										if(payload < 5.5)
											return 12.2605;
										else
											return 13.1332;
									}
								}
							}
							else
							{
								if(sinr < 8.5)
								{
									if(rsrp < -91)
										return 10.7817;
									else
										return 23.0358;
								}
								else
								{
									if(sinr < 10.5)
									{
										if(cell < 12896793.5)
										{
											if(rsrp < -72)
												return 4.22219;
											else
												return 5.32623;
										}
										else
										{
											if(payload < 5.5)
												return 7.91452;
											else
												return 9.00394;
										}
									}
									else
									{
										if(sinr < 24)
										{
											if(velocity < 16.96)
											{
												if(rsrq < -5.5)
												{
													if(ta < 9)
													{
														if(velocity < 5.975)
														{
															if(sinr < 11.5)
																return 9.4857;
															else
															{
																if(cell < 12903194.5)
																{
																	if(velocity < 1.3)
																		return 12.4362;
																	else
																		return 11.9225;
																}
																else
																	return 11.0459;
															}
														}
														else
														{
															if(rsrp < -91)
																return 8.25783;
															else
																return 9.81294;
														}
													}
													else
													{
														if(ta < 12)
															return 15.8455;
														else
														{
															if(payload < 8.5)
																return 11.4531;
															else
																return 13.1989;
														}
													}
												}
												else
													return 5.54895;
											}
											else
												return 6.16536;
										}
										else
											return 4.47219;
									}
								}
							}
						}
					}
					else
					{
						if(rsrq < -9.5)
						{
							if(rsrp < -103.5)
							{
								if(velocity < 2.05)
								{
									if(rsrp < -104.5)
										return 15.748;
									else
										return 14.6635;
								}
								else
								{
									if(cqi < 7.5)
									{
										if(rsrq < -10.5)
											return 10.0188;
										else
											return 8.51064;
									}
									else
										return 1.33645;
								}
							}
							else
							{
								if(velocity < 4.92)
								{
									if(rsrp < -94.5)
										return 9.1359;
									else
									{
										if(ta < 1.5)
											return 5;
										else
										{
											if(cqi < 8)
												return 0.650533;
											else
												return 2.99451;
										}
									}
								}
								else
								{
									if(cell < 13410708)
									{
										if(payload < 7.5)
											return 10.16;
										else
											return 10.6938;
									}
									else
									{
										if(cell < 13619994.5)
											return 0.5050166667;
										else
										{
											if(f < 1347.5)
											{
												if(rsrp < -92)
												{
													if(cell < 14093058)
														return 6.6968;
													else
														return 5.5948;
												}
												else
												{
													if(cqi < 7.5)
														return 3.58905;
													else
														return 4.33565;
												}
											}
											else
											{
												if(velocity < 8.72)
													return 6.11154;
												else
												{
													if(rsrp < -92.5)
														return 7.77238;
													else
													{
														if(payload < 4.5)
															return 11.1317;
														else
														{
															if(ta < 6.5)
																return 14.433;
															else
																return 13.1183;
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
							if(ta < 13.5)
							{
								if(rsrp < -80.5)
								{
									if(sinr < 12.5)
									{
										if(sinr < 9.5)
										{
											if(ta < 11.5)
											{
												if(velocity < 20.565)
												{
													if(f < 2262.5)
													{
														if(cell < 13373467)
															return 16.4948;
														else
															return 14.9763;
													}
													else
														return 17.79138;
												}
												else
													return 11.2045;
											}
											else
											{
												if(payload < 5.5)
													return 8.8476;
												else
													return 7.11849;
											}
										}
										else
										{
											if(ta < 3)
											{
												if(rsrq < -7.5)
												{
													if(rsrp < -87)
														return 0.821271;
													else
														return 1.9719;
												}
												else
													return 6.66445;
											}
											else
											{
												if(velocity < 19.71)
												{
													if(rsrq < -8.5)
													{
														if(payload < 7)
														{
															if(velocity < 7.155)
															{
																if(payload < 5.5)
																	return 17.6523;
																else
																	return 16.586;
															}
															else
																return 14.7493;
														}
														else
														{
															if(rsrp < -102)
																return 9.30909;
															else
																return 9.73828;
														}
													}
													else
													{
														if(velocity < 12.65)
														{
															if(f < 1765)
															{
																if(velocity < 10.07)
																	return 9.1861975;
																else
																	return 7.74443;
															}
															else
															{
																if(payload < 8.5)
																	return 12.6697;
																else
																	return 11.1794;
															}
														}
														else
														{
															if(cqi < 5.5)
																return 4.68933;
															else
																return 5.38146;
														}
													}
												}
												else
													return 32.0384;
											}
										}
									}
									else
									{
										if(ta < 2.5)
										{
											if(sinr < 15.5)
											{
												if(rsrq < -7)
												{
													if(payload < 9)
													{
														if(rsrp < -88)
															return 16.5534;
														else
															return 15.1947;
													}
													else
														return 19.8708;
												}
												else
													return 10.3093;
											}
											else
												return 25.95;
										}
										else
										{
											if(rsrp < -102)
											{
												if(rsrq < -8.5)
												{
													if(cqi < 7.5)
														return 11.6908;
													else
														return 15.8416;
												}
												else
												{
													if(rsrq < -7.5)
														return 7.46826;
													else
														return 4.21496;
												}
											}
											else
											{
												if(velocity < 21.665)
												{
													if(cqi < 4)
														return 20.0334;
													else
													{
														if(ta < 10.5)
														{
															if(ta < 9.5)
															{
																if(cqi < 6)
																{
																	if(cell < 14084372)
																		return 15.4143;
																	else
																		return 14.5341;
																}
																else
																{
																	if(cqi < 7.5)
																		return 11.0345;
																	else
																	{
																		if(rsrp < -84.5)
																			return 14.8598666667;
																		else
																			return 12.8;
																	}
																}
															}
															else
																return 17.943;
														}
														else
														{
															if(ta < 12.5)
															{
																if(cell < 13689871)
																	return 9.03955;
																else
																{
																	if(payload < 7.5)
																		return 15.3762;
																	else
																		return 12.8695;
																}
															}
															else
																return 9.03663;
														}
													}
												}
												else
													return 21.843;
											}
										}
									}
								}
								else
								{
									if(rsrp < -79.5)
										return 4.81058;
									else
									{
										if(rsrq < -8)
										{
											if(rsrp < -77.5)
												return 14.0351;
											else
												return 10.6092;
										}
										else
										{
											if(sinr < 12)
											{
												if(f < 2262.5)
													return 9.37647;
												else
													return 10.5541;
											}
											else
											{
												if(cell < 13814542)
													return 8.25849;
												else
												{
													if(sinr < 18)
														return 7.52688;
													else
														return 6.92042;
												}
											}
										}
									}
								}
							}
							else
							{
								if(payload < 8.5)
									return 25.7471;
								else
									return 19.7482;
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
			if(rsrq < -6.5)
			{
				if(cqi < 11.5)
				{
					if(payload < 1.5)
					{
						if(ta < 16)
						{
							if(cell < 12899848)
							{
								if(ta < 10.5)
								{
									if(cell < 12898318)
									{
										if(sinr < 16.5)
										{
											if(payload < 0.75)
											{
												if(velocity < 7.72)
													return 2.95203;
												else
													return 3.466955;
											}
											else
												return 2.476564;
										}
										else
											return 1.13733;
									}
									else
										return 3.7878166667;
								}
								else
									return 7.64088;
							}
							else
							{
								if(ta < 11.5)
								{
									if(velocity < 13.61)
									{
										if(ta < 3)
										{
											if(rsrq < -9.5)
											{
												if(ta < 1.5)
													return 6.4;
												else
													return 5.37273;
											}
											else
												return 1.15741;
										}
										else
										{
											if(sinr < 18.5)
											{
												if(velocity < 12.295)
												{
													if(sinr < 7)
														return 5.90842;
													else
													{
														if(velocity < 3.355)
														{
															if(rsrp < -85.5)
															{
																if(rsrp < -89.5)
																	return 7.20721;
																else
																	return 6.29924;
															}
															else
																return 8.17996;
														}
														else
														{
															if(rsrp < -86.5)
																return 6.8347075;
															else
																return 5.40543;
														}
													}
												}
												else
													return 5.77201;
											}
											else
											{
												if(payload < 0.55)
													return 4.59772;
												else
													return 5.54017;
											}
										}
									}
									else
										return 3.89141;
								}
								else
								{
									if(rsrq < -7.5)
									{
										if(sinr < 9.5)
										{
											if(velocity < 2.57)
												return 2.75292;
											else
											{
												if(rsrq < -10)
													return 4.16668;
												else
												{
													if(rsrp < -93)
														return 5.97015;
													else
														return 6.6778;
												}
											}
										}
										else
											return 2.67023;
									}
									else
										return 1.12676;
								}
							}
						}
						else
							return 2.59319;
					}
					else
					{
						if(rsrp < -88.5)
						{
							if(f < 2262.5)
							{
								if(cqi < 10.5)
								{
									if(sinr < 14)
										return 2.34707;
									else
									{
										if(rsrp < -90.5)
											return 2.33134;
										else
											return 3.94089;
									}
								}
								else
								{
									if(ta < 13)
										return 3.8958833333;
									else
										return 1.88472;
								}
							}
							else
								return 7.242;
						}
						else
						{
							if(rsrp < -85.5)
							{
								if(cell < 13156884)
								{
									if(cell < 12896782)
										return 2.96809;
									else
									{
										if(velocity < 13.04)
										{
											if(ta < 7)
												return 7.52587;
											else
												return 5.08421;
										}
										else
										{
											if(sinr < 10)
												return 4.26667;
											else
												return 3.47222;
										}
									}
								}
								else
								{
									if(sinr < 5.5)
										return 3.68579;
									else
									{
										if(sinr < 11.5)
											return 11.7763;
										else
											return 9.34579;
									}
								}
							}
							else
							{
								if(cell < 13161620)
								{
									if(sinr < 5.5)
										return 13.2231;
									else
									{
										if(rsrp < -80.5)
										{
											if(ta < 7)
												return 9.513916;
											else
												return 7.262285;
										}
										else
											return 4.11417;
									}
								}
								else
								{
									if(cell < 14085786)
									{
										if(rsrq < -11)
											return 3.37695;
										else
										{
											if(cell < 13825562)
											{
												if(velocity < 13.045)
													return 7.907656;
												else
													return 6.38213;
											}
											else
												return 6.27615;
										}
									}
									else
										return 2.22243;
								}
							}
						}
					}
				}
				else
				{
					if(cell < 13814541.5)
					{
						if(cell < 12896769.5)
						{
							if(payload < 0.75)
							{
								if(rsrq < -10)
								{
									if(rsrp < -68.5)
										return 11.0193;
									else
										return 4.89596;
								}
								else
									return 10.9589;
							}
							else
								return 2.77971;
						}
						else
						{
							if(velocity < 13.34)
							{
								if(sinr < 19.5)
								{
									if(ta < 1.5)
									{
										if(velocity < 0.74)
										{
											if(payload < 0.3)
												return 4.96896;
											else
												return 5.87372;
										}
										else
											return 7.38039;
									}
									else
									{
										if(rsrp < -89.5)
										{
											if(cell < 12904723.5)
												return 8.04829;
											else
											{
												if(payload < 1.05)
													return 5.142222;
												else
													return 2.91174;
											}
										}
										else
										{
											if(rsrq < -8.5)
											{
												if(cqi < 13.5)
													return 1.307664;
												else
													return 1.87793;
											}
											else
											{
												if(rsrp < -85)
													return 2.64288;
												else
												{
													if(ta < 10.5)
													{
														if(ta < 7.5)
														{
															if(payload < 1.05)
															{
																if(sinr < 14)
																	return 3.33335;
																else
																	return 4.23282;
															}
															else
																return 7.74818;
														}
														else
														{
															if(rsrp < -71.5)
															{
																if(rsrp < -77)
																	return 1.97775;
																else
																	return 2.91971;
															}
															else
																return 3.78788;
														}
													}
													else
														return 5.63382;
												}
											}
										}
									}
								}
								else
								{
									if(rsrq < -10)
										return 3.07338;
									else
									{
										if(ta < 13.5)
										{
											if(ta < 5.5)
											{
												if(rsrp < -81)
													return 6.77966;
												else
													return 8.43882;
											}
											else
											{
												if(rsrp < -72)
												{
													if(sinr < 23)
														return 1.74711;
													else
													{
														if(payload < 0.3)
															return 5.22878;
														else
															return 4.55508;
													}
												}
												else
												{
													if(sinr < 22.5)
														return 8.08081;
													else
														return 3.86475;
												}
											}
										}
										else
											return 12.4031;
									}
								}
							}
							else
							{
								if(cqi < 14.5)
								{
									if(velocity < 15.505)
									{
										if(cell < 12914201)
										{
											if(payload < 2)
											{
												if(velocity < 14.08)
													return 3.57144;
												else
													return 9.68523;
											}
											else
											{
												if(sinr < 8.5)
													return 3.86038;
												else
												{
													if(rsrp < -79)
														return 3.615;
													else
														return 4.74402;
												}
											}
										}
										else
										{
											if(rsrp < -88.5)
												return 9.550815;
											else
												return 16.9731;
										}
									}
									else
									{
										if(ta < 3.5)
										{
											if(velocity < 19.165)
											{
												if(cqi < 13.5)
												{
													if(rsrp < -89.5)
														return 3.18218;
													else
														return 3.8235375;
												}
												else
													return 4.81203;
											}
											else
												return 2.16567;
										}
										else
										{
											if(sinr < 18.5)
											{
												if(rsrp < -77.5)
													return 6.10532;
												else
													return 5.40543;
											}
											else
												return 8.16327;
										}
									}
								}
								else
								{
									if(ta < 10)
									{
										if(velocity < 18.215)
										{
											if(payload < 0.75)
												return 13.5135;
											else
											{
												if(sinr < 22.5)
												{
													if(payload < 2)
														return 11.3154;
													else
														return 12.018;
												}
												else
													return 10.3448;
											}
										}
										else
										{
											if(payload < 1.55)
												return 9.30236;
											else
												return 6.7701;
										}
									}
									else
										return 2.331;
								}
							}
						}
					}
					else
					{
						if(rsrq < -9.5)
						{
							if(rsrp < -77)
							{
								if(rsrq < -11.5)
								{
									if(rsrp < -98)
										return 6.7197075;
									else
										return 8.19672;
								}
								else
								{
									if(f < 1347.5)
										return 5.59443;
									else
										return 4.46866;
								}
							}
							else
								return 0.127005;
						}
						else
						{
							if(payload < 0.3)
							{
								if(cell < 14114952)
									return 4.5060666667;
								else
									return 7.07967;
							}
							else
							{
								if(sinr < 22.5)
								{
									if(sinr < 14.5)
									{
										if(payload < 1.5)
										{
											if(velocity < 13.28)
												return 8.54701;
											else
											{
												if(rsrp < -90)
													return 6.95652;
												else
													return 6.21601;
											}
										}
										else
										{
											if(sinr < 13.5)
												return 10.3181;
											else
												return 13.8648;
										}
									}
									else
									{
										if(velocity < 9.63)
										{
											if(payload < 1.25)
												return 5.64972;
											else
												return 9.63275;
										}
										else
										{
											if(rsrp < -88)
												return 16.1834;
											else
											{
												if(rsrq < -8.5)
													return 12.3014;
												else
													return 12.75518;
											}
										}
									}
								}
								else
								{
									if(sinr < 28)
									{
										if(velocity < 12.935)
										{
											if(sinr < 25)
												return 6.05602;
											else
											{
												if(rsrp < -78.5)
													return 3.74444;
												else
													return 4.78469;
											}
										}
										else
											return 8.46561;
									}
									else
									{
										if(payload < 2.5)
										{
											if(rsrq < -8)
												return 9.45068;
											else
												return 4.64576;
										}
										else
										{
											if(rsrq < -8)
												return 9.6231;
											else
												return 17.531;
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
					if(sinr < 28.5)
					{
						if(velocity < 10.285)
						{
							if(velocity < 9.74)
							{
								if(rsrp < -71.5)
								{
									if(velocity < 5.4)
									{
										if(rsrq < -5.5)
										{
											if(velocity < 2.04)
											{
												if(f < 1347.5)
													return 8.67679;
												else
												{
													if(rsrp < -95.5)
														return 8.19672;
													else
													{
														if(sinr < 19.5)
															return 6.42712;
														else
															return 7.0922;
													}
												}
											}
											else
												return 5.59441;
										}
										else
											return 4.2135883333;
									}
									else
									{
										if(cell < 13856154.5)
										{
											if(rsrp < -79.5)
												return 4.46927;
											else
												return 5.0415;
										}
										else
											return 3.29625;
									}
								}
								else
								{
									if(rsrq < -5.5)
									{
										if(payload < 1.25)
											return 10.2828;
										else
											return 12.8102;
									}
									else
										return 7.5142466667;
								}
							}
							else
							{
								if(rsrp < -74.5)
									return 1.43472;
								else
									return 3.72526;
							}
						}
						else
						{
							if(velocity < 32.53)
							{
								if(sinr < 11)
								{
									if(f < 1347.5)
										return 1.57233;
									else
									{
										if(ta < 9)
											return 4.75059;
										else
											return 6.7086;
									}
								}
								else
								{
									if(cqi < 13.5)
									{
										if(rsrp < -89.5)
										{
											if(sinr < 25)
											{
												if(cell < 12918810)
												{
													if(velocity < 14.845)
														return 5.12164;
													else
													{
														if(sinr < 17)
															return 10.5263;
														else
															return 8.60218;
													}
												}
												else
												{
													if(rsrp < -91.5)
														return 5.54401;
													else
														return 3.89674;
												}
											}
											else
											{
												if(velocity < 19.91)
												{
													if(ta < 13.5)
														return 3.77893;
													else
														return 8.60218;
												}
												else
													return 20;
											}
										}
										else
										{
											if(rsrp < -81.5)
											{
												if(cell < 14092941.5)
												{
													if(cqi < 11.5)
													{
														if(ta < 5)
															return 11.5858;
														else
															return 12.6183;
													}
													else
													{
														if(payload < 1.25)
															return 11.9048;
														else
														{
															if(sinr < 17.5)
																return 14.6252;
															else
																return 17.4672;
														}
													}
												}
												else
													return 8.69565;
											}
											else
											{
												if(sinr < 18)
													return 6.58478;
												else
													return 9.50119;
											}
										}
									}
									else
									{
										if(sinr < 21)
										{
											if(velocity < 24.81)
											{
												if(cell < 12914201.5)
													return 14.3756;
												else
												{
													if(rsrp < -95)
														return 7.27273;
													else
														return 8.57449;
												}
											}
											else
												return 6.29921;
										}
										else
										{
											if(ta < 3)
											{
												if(velocity < 14.745)
													return 5.19483;
												else
												{
													if(rsrp < -71.5)
													{
														if(rsrq < -5.5)
														{
															if(velocity < 14.995)
																return 7.91687;
															else
																return 7.31261;
														}
														else
														{
															if(ta < 1.5)
																return 8.51067;
															else
																return 5.71837;
														}
													}
													else
														return 4.79044;
												}
											}
											else
											{
												if(rsrq < -5.5)
													return 2.62037;
												else
													return 4.3944;
											}
										}
									}
								}
							}
							else
							{
								if(sinr < 15.5)
									return 8.08898;
								else
								{
									if(sinr < 22)
										return 12.1581;
									else
										return 10.3093;
								}
							}
						}
					}
					else
					{
						if(rsrq < -5.5)
						{
							if(velocity < 17.76)
							{
								if(payload < 0.75)
								{
									if(rsrp < -72)
										return 3.25733;
									else
										return 4.16668;
								}
								else
									return 2.02943;
							}
							else
								return 9.87654;
						}
						else
						{
							if(cqi < 14.5)
							{
								if(rsrp < -79)
									return 9.23788;
								else
								{
									if(payload < 1.25)
										return 4.92005;
									else
										return 6.31164;
								}
							}
							else
							{
								if(rsrp < -85.5)
									return 7.45226;
								else
								{
									if(payload < 0.3)
									{
										if(cell < 12918809.5)
											return 8.51067;
										else
											return 7.07967;
									}
									else
									{
										if(velocity < 28.355)
										{
											if(rsrp < -80)
												return 18.2857;
											else
											{
												if(sinr < 30.5)
													return 17.1868;
												else
													return 16.5289;
											}
										}
										else
										{
											if(ta < 19)
											{
												if(ta < 15.5)
													return 11.236;
												else
													return 11.6959;
											}
											else
												return 12.5392;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if(sinr < 29.5)
					{
						if(cell < 13856153.5)
						{
							if(rsrp < -80)
							{
								if(sinr < 12)
									return 18.5615;
								else
								{
									if(velocity < 16.505)
									{
										if(rsrq < -5.5)
											return 11.7763;
										else
											return 12.4546;
									}
									else
									{
										if(ta < 3)
											return 6.77201;
										else
											return 6.04686;
									}
								}
							}
							else
							{
								if(ta < 9.5)
								{
									if(ta < 3)
										return 18.9873;
									else
									{
										if(velocity < 14.31)
										{
											if(rsrq < -5.5)
												return 16.7481;
											else
												return 17.2538;
										}
										else
											return 15.625;
									}
								}
								else
									return 22.6629;
							}
						}
						else
						{
							if(ta < 5)
							{
								if(sinr < 27)
									return 15.0376;
								else
									return 11.3744;
							}
							else
							{
								if(sinr < 16.5)
									return 9.74026;
								else
								{
									if(rsrp < -88.5)
										return 3.7325;
									else
										return 5.75402;
								}
							}
						}
					}
					else
					{
						if(sinr < 34.5)
						{
							if(sinr < 30.5)
								return 4.37158;
							else
								return 5.19092;
						}
						else
							return 7.1535;
					}
				}
			}
		}
		else
		{
			if(cqi < 12.5)
			{
				if(payload < 8.5)
				{
					if(sinr < 10.5)
					{
						if(ta < 5.5)
						{
							if(rsrp < -87.5)
							{
								if(cell < 13643923.5)
								{
									if(f < 2262.5)
									{
										if(payload < 6.5)
										{
											if(rsrp < -92)
												return 5.23732;
											else
											{
												if(rsrq < -8)
												{
													if(payload < 4.5)
														return 10.5332;
													else
														return 9.67118;
												}
												else
													return 11.9314;
											}
										}
										else
											return 2.98382;
									}
									else
										return 0.710464;
								}
								else
								{
									if(cqi < 11.5)
										return 14.1761;
									else
									{
										if(payload < 7.5)
											return 10.6201;
										else
											return 6.51134;
									}
								}
							}
							else
							{
								if(cqi < 11.5)
								{
									if(velocity < 15.145)
									{
										if(f < 2262.5)
											return 20.0753;
										else
										{
											if(rsrp < -83)
												return 19.5003;
											else
											{
												if(velocity < 7.54)
													return 15.3355;
												else
													return 16.4002;
											}
										}
									}
									else
									{
										if(sinr < 3.5)
											return 10.5587;
										else
											return 9.42285;
									}
								}
								else
								{
									if(velocity < 4.175)
										return 14.9719;
									else
									{
										if(cell < 13157013)
										{
											if(rsrq < -6.5)
												return 4.29461;
											else
												return 7.73694;
										}
										else
											return 8.69376;
									}
								}
							}
						}
						else
						{
							if(rsrq < -9.5)
							{
								if(cell < 14113934)
								{
									if(payload < 4.5)
										return 1.67645;
									else
									{
										if(ta < 12.5)
										{
											if(cell < 13396890)
											{
												if(velocity < 2.935)
												{
													if(payload < 5.5)
														return 6.2315;
													else
													{
														if(rsrp < -81)
															return 5.17369;
														else
															return 5.6926;
													}
												}
												else
													return 4.95193;
											}
											else
											{
												if(sinr < 9)
													return 3.9863;
												else
													return 4.62428;
											}
										}
										else
											return 3.89508;
									}
								}
								else
									return 1.39264;
							}
							else
							{
								if(rsrp < -107)
									return 19.0099;
								else
								{
									if(cqi < 11.5)
									{
										if(ta < 11.5)
										{
											if(f < 1347.5)
											{
												if(rsrp < -85)
													return 9.25008;
												else
													return 8.45219;
											}
											else
												return 10.8932;
										}
										else
										{
											if(velocity < 6.28)
											{
												if(rsrq < -7)
													return 6.87403;
												else
													return 6.44901;
											}
											else
											{
												if(rsrq < -6.5)
													return 9.78234;
												else
													return 7.17949;
											}
										}
									}
									else
									{
										if(velocity < 2.99)
											return 2.65062;
										else
										{
											if(rsrp < -84.5)
												return 6.81576;
											else
												return 5.15227;
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
								if(sinr < 21)
								{
									if(f < 1347.5)
									{
										if(velocity < 26.77)
										{
											if(velocity < 12.335)
												return 3.7609978788;
											else
												return 2.94686;
										}
										else
											return 7.09471;
									}
									else
									{
										if(ta < 4.5)
										{
											if(velocity < 13.13)
											{
												if(sinr < 15.5)
												{
													if(rsrp < -95.5)
														return 8.29445;
													else
													{
														if(rsrp < -81.5)
															return 1.29445;
														else
															return 4.8893810345;
													}
												}
												else
												{
													if(rsrp < -81.5)
													{
														if(rsrp < -91)
															return 7.25185;
														else
															return 9.06618;
													}
													else
														return 13.9413;
												}
											}
											else
											{
												if(cqi < 11.5)
													return 9.71817;
												else
													return 13.6112;
											}
										}
										else
										{
											if(rsrq < -10.5)
											{
												if(sinr < 14.5)
												{
													if(rsrp < -93)
														return 10.5995;
													else
														return 13.1796;
												}
												else
												{
													if(cqi < 10.5)
														return 13.6016;
													else
														return 14.733;
												}
											}
											else
											{
												if(ta < 8)
												{
													if(ta < 5.5)
														return 14.9813;
													else
														return 14.0146;
												}
												else
												{
													if(sinr < 12.5)
													{
														if(payload < 5.5)
															return 10.1497;
														else
															return 7.99201;
													}
													else
													{
														if(rsrq < -8.5)
															return 7.02124;
														else
															return 5.23475;
													}
												}
											}
										}
									}
								}
								else
								{
									if(payload < 4.5)
										return 7.40056;
									else
										return 2.5533;
								}
							}
							else
							{
								if(ta < 12.5)
								{
									if(cqi < 10.5)
									{
										if(rsrp < -77.5)
										{
											if(cell < 13373465.5)
											{
												if(rsrp < -89)
													return 15.788;
												else
												{
													if(rsrq < -9.5)
														return 20.9424;
													else
														return 16.5375;
												}
											}
											else
											{
												if(sinr < 26.5)
													return 11.5398;
												else
													return 11.1376;
											}
										}
										else
											return 8.07877;
									}
									else
									{
										if(f < 1347.5)
										{
											if(payload < 7.5)
												return 14.6138;
											else
												return 17.6454;
										}
										else
										{
											if(rsrq < -9)
												return 20.8266;
											else
												return 22.1071;
										}
									}
								}
								else
								{
									if(sinr < 13)
										return 15.2164;
									else
									{
										if(rsrq < -9)
											return 8.09;
										else
										{
											if(cqi < 11.5)
											{
												if(rsrp < -88.5)
													return 4.51977;
												else
													return 4.04186;
											}
											else
												return 5.93417;
										}
									}
								}
							}
						}
						else
						{
							if(velocity < 13.79)
							{
								if(rsrp < -79.5)
								{
									if(sinr < 21)
									{
										if(rsrp < -82.5)
										{
											if(payload < 4.5)
												return 5.62489;
											else
											{
												if(sinr < 12.5)
													return 7.37327;
												else
												{
													if(f < 2262.5)
													{
														if(sinr < 15.5)
														{
															if(rsrq < -6.5)
																return 8.98876;
															else
																return 7.52502;
														}
														else
														{
															if(payload < 7)
																return 8.92857;
															else
																return 9.56366;
														}
													}
													else
														return 10.8328;
												}
											}
										}
										else
										{
											if(cell < 12904723.5)
												return 10.923;
											else
											{
												if(payload < 7.5)
													return 13.3492;
												else
													return 14.5686;
											}
										}
									}
									else
									{
										if(payload < 6.5)
											return 6.09663;
										else
											return 7.70899;
									}
								}
								else
								{
									if(sinr < 21.5)
									{
										if(cell < 13613717)
										{
											if(f < 2262.5)
											{
												if(ta < 8)
													return 19.9626;
												else
													return 18.419;
											}
											else
											{
												if(payload < 6)
													return 15.5885;
												else
													return 16.98;
											}
										}
										else
										{
											if(cqi < 11.5)
											{
												if(ta < 10.5)
													return 10.5021;
												else
													return 12.1212;
											}
											else
												return 15.8595;
										}
									}
									else
									{
										if(ta < 10.5)
										{
											if(velocity < 6.305)
												return 8.10537;
											else
												return 7.24146;
										}
										else
											return 5.82411;
									}
								}
							}
							else
							{
								if(cell < 13845133.5)
								{
									if(velocity < 16.1)
									{
										if(sinr < 17.5)
										{
											if(velocity < 14.925)
											{
												if(rsrp < -83.5)
													return 14.1176;
												else
													return 10.772;
											}
											else
											{
												if(rsrq < -5.5)
													return 18.7189;
												else
													return 16.9942;
											}
										}
										else
										{
											if(velocity < 14.65)
											{
												if(ta < 6.5)
													return 18.6232;
												else
													return 16.6182;
											}
											else
											{
												if(velocity < 15.425)
													return 22.1287666667;
												else
													return 20.9424;
											}
										}
									}
									else
									{
										if(sinr < 24.5)
										{
											if(rsrp < -79.5)
											{
												if(cell < 12914202.5)
													return 10.2581;
												else
												{
													if(rsrq < -6.5)
														return 12.3887;
													else
													{
														if(velocity < 17.745)
															return 15.9257;
														else
														{
															if(sinr < 23)
															{
																if(velocity < 22.02)
																	return 13.5747;
																else
																{
																	if(ta < 6.5)
																	{
																		if(rsrq < -5.5)
																			return 15.4515;
																		else
																			return 15.9046;
																	}
																	else
																		return 14.4796;
																}
															}
															else
																return 13.8950333333;
														}
													}
												}
											}
											else
											{
												if(sinr < 23)
												{
													if(ta < 13)
														return 13.59485;
													else
														return 15.2417;
												}
												else
													return 24.4009;
											}
										}
										else
										{
											if(rsrp < -87.5)
												return 7.94123;
											else
											{
												if(ta < 4)
													return 10.7185;
												else
													return 13.4907;
											}
										}
									}
								}
								else
								{
									if(payload < 6.5)
									{
										if(ta < 3.5)
										{
											if(cqi < 10.5)
												return 6.755905;
											else
												return 3.58744;
										}
										else
										{
											if(payload < 5.5)
												return 14.8423;
											else
												return 11.065;
										}
									}
									else
									{
										if(velocity < 31.505)
										{
											if(f < 1347.5)
												return 12.4472;
											else
												return 9.33178;
										}
										else
										{
											if(payload < 7.5)
												return 17.9085;
											else
												return 16.2354;
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
						if(cell < 14344596)
						{
							if(cqi < 11.5)
							{
								if(rsrp < -81)
								{
									if(rsrq < -11.5)
										return 6.28931;
									else
										return 13.6622;
								}
								else
								{
									if(payload < 9.5)
									{
										if(ta < 6)
											return 1.84096;
										else
											return 2.47917;
									}
									else
									{
										if(sinr < 10)
											return 4.25509;
										else
											return 8.17912;
									}
								}
							}
							else
								return 13.8063;
						}
						else
							return 21.0637;
					}
					else
					{
						if(cell < 12909593.5)
						{
							if(velocity < 9.81)
							{
								if(sinr < 14.5)
									return 7.03881;
								else
								{
									if(rsrq < -6.5)
										return 10.79484;
									else
									{
										if(rsrp < -81)
											return 9.72316;
										else
											return 8.92746;
									}
								}
							}
							else
							{
								if(sinr < 13)
								{
									if(ta < 26.5)
									{
										if(ta < 13.5)
										{
											if(cell < 12896781.5)
												return 10.6213;
											else
												return 11.2694;
										}
										else
											return 13.2472;
									}
									else
										return 4.42179;
								}
								else
								{
									if(sinr < 14.5)
										return 19.0225;
									else
										return 16.3562;
								}
							}
						}
						else
						{
							if(rsrp < -84.5)
							{
								if(velocity < 19.695)
								{
									if(rsrp < -101.5)
									{
										if(rsrq < -8.5)
											return 14.6074;
										else
										{
											if(ta < 9)
												return 13.2621;
											else
												return 12.5059;
										}
									}
									else
									{
										if(ta < 2.5)
										{
											if(rsrp < -87)
												return 17.0981;
											else
												return 11.8273;
										}
										else
										{
											if(rsrp < -89)
											{
												if(ta < 9.5)
												{
													if(sinr < 18.5)
														return 12.5117;
													else
													{
														if(f < 2262.5)
															return 17.9775;
														else
														{
															if(cqi < 10.5)
																return 19.2446;
															else
																return 20.2077;
														}
													}
												}
												else
												{
													if(velocity < 13.15)
														return 17.229;
													else
													{
														if(sinr < 18.5)
															return 15.1451;
														else
															return 11.3154;
													}
												}
											}
											else
											{
												if(sinr < 10)
													return 27.8649;
												else
												{
													if(sinr < 17.5)
													{
														if(rsrq < -7)
															return 17.1858;
														else
															return 27.1903;
													}
													else
														return 16.1038;
												}
											}
										}
									}
								}
								else
								{
									if(f < 1347.5)
										return 31.6623;
									else
									{
										if(sinr < 12)
											return 16.3666;
										else
										{
											if(sinr < 15)
												return 24.9653;
											else
												return 21.7786;
										}
									}
								}
							}
							else
							{
								if(velocity < 13.945)
								{
									if(cell < 13825562)
									{
										if(rsrp < -71)
											return 16.3299;
										else
											return 16.95055;
									}
									else
									{
										if(rsrp < -83)
											return 15.0066;
										else
											return 12.8949;
									}
								}
								else
								{
									if(sinr < 18.5)
										return 6.44065;
									else
									{
										if(velocity < 23.455)
											return 10.1207666667;
										else
											return 13.0472;
									}
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
					if(payload < 6.5)
					{
						if(ta < 4.5)
						{
							if(velocity < 15.01)
							{
								if(rsrp < -88.5)
									return 22.7596;
								else
								{
									if(sinr < 29.5)
									{
										if(cqi < 14.5)
											return 18.1818;
										else
										{
											if(velocity < 13.71)
											{
												if(sinr < 14)
													return 14.6319;
												else
												{
													if(cell < 13404430)
													{
														if(ta < 1.5)
															return 14.4796;
														else
															return 13.41084;
													}
													else
														return 11.8387;
												}
											}
											else
											{
												if(sinr < 22.5)
													return 13.3417333333;
												else
												{
													if(rsrp < -70)
														return 5.87372;
													else
														return 10.306;
												}
											}
										}
									}
									else
									{
										if(ta < 2.5)
											return 16.5221;
										else
										{
											if(rsrp < -74)
												return 16.6725;
											else
												return 17.1612;
										}
									}
								}
							}
							else
							{
								if(sinr < 8)
								{
									if(rsrq < -7.5)
										return 18.2163;
									else
										return 18.8457;
								}
								else
								{
									if(velocity < 23.09)
									{
										if(payload < 4.5)
										{
											if(sinr < 25.5)
											{
												if(rsrq < -8.5)
													return 8.94354;
												else
													return 13.0346;
											}
											else
												return 7.09063;
										}
										else
											return 13.3597;
									}
									else
									{
										if(sinr < 15)
											return 9.74421;
										else
										{
											if(rsrp < -82)
												return 8.96459;
											else
												return 8.2996325;
										}
									}
								}
							}
						}
						else
						{
							if(velocity < 12.76)
							{
								if(cell < 13853582.5)
								{
									if(rsrp < -95)
									{
										if(rsrp < -102.5)
											return 15.8993;
										else
											return 18.0655;
									}
									else
									{
										if(ta < 13)
										{
											if(velocity < 11.495)
											{
												if(rsrq < -5.5)
												{
													if(ta < 11.5)
														return 5.84297;
													else
													{
														if(payload < 5)
														{
															if(rsrp < -64)
																return 6.84638;
															else
																return 10.3292;
														}
														else
															return 8.23893;
													}
												}
												else
													return 11.0117;
											}
											else
											{
												if(rsrp < -68)
													return 13.2144;
												else
													return 11.415;
											}
										}
										else
											return 6.23701;
									}
								}
								else
								{
									if(velocity < 8.39)
										return 19.9203;
									else
									{
										if(sinr < 16.5)
											return 10.7614;
										else
										{
											if(velocity < 11.68)
											{
												if(cqi < 14.5)
													return 13.7615;
												else
													return 9.55224;
											}
											else
												return 19.0386;
										}
									}
								}
							}
							else
							{
								if(sinr < 28)
								{
									if(sinr < 10.5)
									{
										if(velocity < 15.675)
										{
											if(sinr < 9)
												return 8.56837;
											else
												return 15.2381;
										}
										else
											return 6.8699;
									}
									else
									{
										if(cell < 14092955)
										{
											if(ta < 7.5)
											{
												if(rsrq < -8.5)
													return 5.33867;
												else
													return 4.19654;
											}
											else
											{
												if(cqi < 14)
												{
													if(payload < 5.5)
														return 8.2713;
													else
														return 6.7086;
												}
												else
													return 9.88468;
											}
										}
										else
										{
											if(rsrq < -8.5)
												return 5.53123;
											else
												return 0.379873;
										}
									}
								}
								else
								{
									if(ta < 16)
										return 11.7744333333;
									else
										return 12.6249;
								}
							}
						}
					}
					else
					{
						if(cell < 12914074)
						{
							if(payload < 9.5)
							{
								if(rsrq < -7.5)
								{
									if(sinr < 17.5)
										return 12.975;
									else
									{
										if(ta < 11)
											return 22.3256;
										else
										{
											if(rsrp < -61.5)
												return 24.2241;
											else
												return 25.2565;
										}
									}
								}
								else
								{
									if(velocity < 5.415)
									{
										if(sinr < 23)
										{
											if(sinr < 20)
												return 14.3081;
											else
												return 12.8323;
										}
										else
										{
											if(velocity < 4.285)
												return 17.5055;
											else
												return 20.2532;
										}
									}
									else
									{
										if(rsrq < -5.5)
										{
											if(f < 1347.5)
												return 16.7286;
											else
											{
												if(rsrq < -6.5)
												{
													if(rsrp < -67.5)
													{
														if(rsrp < -73)
															return 12.0603;
														else
															return 17.5935;
													}
													else
														return 11.0752;
												}
												else
												{
													if(velocity < 7.47)
														return 10.8043;
													else
														return 9.3036225;
												}
											}
										}
										else
											return 18.4067;
									}
								}
							}
							else
							{
								if(f < 2262.5)
								{
									if(velocity < 15.3)
									{
										if(velocity < 14.09)
										{
											if(velocity < 5.995)
												return 9.52041;
											else
												return 10.08528;
										}
										else
											return 15.0066;
									}
									else
										return 6.29327;
								}
								else
									return 18.014;
							}
						}
						else
						{
							if(rsrq < -9.5)
							{
								if(sinr < 13.5)
									return 2.02846;
								else
									return 6.93662;
							}
							else
							{
								if(cqi < 14.5)
								{
									if(payload < 7.5)
									{
										if(sinr < 24)
										{
											if(rsrq < -7)
												return 12.2538;
											else
												return 13.4842;
										}
										else
											return 11.3983;
									}
									else
									{
										if(velocity < 24.695)
										{
											if(f < 2262.5)
											{
												if(sinr < 20.5)
													return 32.9369;
												else
												{
													if(rsrq < -7)
														return 30.581;
													else
													{
														if(ta < 8)
														{
															if(rsrp < -84)
																return 26.393;
															else
																return 27.5981;
														}
														else
														{
															if(rsrp < -72.5)
																return 24.565;
															else
																return 25.37;
														}
													}
												}
											}
											else
											{
												if(rsrp < -83.5)
												{
													if(rsrp < -87)
														return 18.6611;
													else
														return 16.3599;
												}
												else
													return 22.147;
											}
										}
										else
											return 9.18133;
									}
								}
								else
								{
									if(sinr < 28.5)
									{
										if(cell < 12918809.5)
										{
											if(ta < 13.5)
											{
												if(rsrq < -6.5)
													return 23.753;
												else
													return 21.9901;
											}
											else
												return 32.0802;
										}
										else
										{
											if(sinr < 12)
												return 2.48937;
											else
											{
												if(rsrp < -77.5)
												{
													if(ta < 8)
													{
														if(sinr < 21.5)
														{
															if(sinr < 19.5)
																return 19.1789;
															else
															{
																if(rsrp < -85.5)
																	return 16.1649;
																else
																{
																	if(rsrp < -80)
																		return 18.0079;
																	else
																		return 18.9349;
																}
															}
														}
														else
															return 14.4256;
													}
													else
														return 11.4449;
												}
												else
												{
													if(rsrp < -69)
													{
														if(velocity < 19.385)
														{
															if(cell < 13373465.5)
															{
																if(velocity < 15.275)
																	return 11.8343;
																else
																	return 14.29462;
															}
															else
															{
																if(rsrp < -74.5)
																	return 12.3362;
																else
																	return 9.62696;
															}
														}
														else
														{
															if(sinr < 23.5)
																return 8.37321;
															else
																return 13.7999;
														}
													}
													else
														return 17.8771;
												}
											}
										}
									}
									else
									{
										if(f < 2262.5)
										{
											if(velocity < 15.465)
											{
												if(rsrp < -68.5)
												{
													if(rsrp < -74)
													{
														if(rsrp < -80.5)
															return 15.2236;
														else
															return 14.2005333333;
													}
													else
														return 15.9504;
												}
												else
													return 17.8838;
											}
											else
											{
												if(cell < 14301710)
												{
													if(sinr < 34.5)
													{
														if(ta < 9)
														{
															if(rsrq < -5.5)
																return 21.4823;
															else
															{
																if(sinr < 31.5)
																	return 13.8408;
																else
																	return 13.1067;
															}
														}
														else
														{
															if(rsrp < -64.5)
																return 17.8731;
															else
																return 24.7253;
														}
													}
													else
													{
														if(sinr < 37)
															return 22.082;
														else
															return 27.2109;
													}
												}
												else
													return 25.5591;
											}
										}
										else
										{
											if(payload < 8.5)
												return 26.1194;
											else
												return 24.6381;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if(payload < 8.5)
						return 22.49;
					else
						return 33.8839;
				}
			}
		}
	}
}

float o2_dl_tree_4(float payload, float rsrp, float rsrq, float sinr, float cqi, float ta, float velocity, float cell, float f)
{
	if(sinr < 5.5)
	{
		if(ta < 4.5)
		{
			if(payload < 4.5)
			{
				if(sinr < 1.5)
				{
					if(rsrq < -14)
					{
						if(cqi < 2)
							return 3.46921;
						else
						{
							if(rsrq < -16)
								return 0.041942;
							else
							{
								if(sinr < -5)
									return 1.01298;
								else
									return 1.86111;
							}
						}
					}
					else
					{
						if(rsrp < -112.5)
							return 6.23539;
						else
						{
							if(cqi < 7.5)
							{
								if(sinr < -4.5)
									return 6.96561;
								else
								{
									if(ta < 1.5)
									{
										if(cell < 13156628)
										{
											if(rsrp < -84.5)
											{
												if(rsrp < -97)
													return 1.65529;
												else
												{
													if(rsrq < -11.5)
														return 2.38403;
													else
														return 2.88462;
												}
											}
											else
											{
												if(rsrp < -70)
													return 3.94915;
												else
													return 3.36134;
											}
										}
										else
										{
											if(rsrq < -10.5)
												return 1.35392;
											else
												return 1.837344;
										}
									}
									else
									{
										if(rsrq < -9)
										{
											if(payload < 3.5)
											{
												if(rsrq < -12.5)
													return 4.5977;
												else
												{
													if(rsrp < -87.5)
														return 6.0241;
													else
														return 5.4807;
												}
											}
											else
											{
												if(rsrp < -110.5)
													return 3.0095;
												else
													return 4.8142;
											}
										}
										else
										{
											if(payload < 0.55)
												return 1.91388;
											else
												return 1.3459;
										}
									}
								}
							}
							else
							{
								if(rsrq < -8)
									return 6.95655;
								else
									return 3.13727;
							}
						}
					}
				}
				else
				{
					if(velocity < 19.28)
					{
						if(payload < 3.5)
						{
							if(rsrp < -103)
							{
								if(rsrp < -108.5)
									return 2.1692;
								else
									return 8.84956;
							}
							else
							{
								if(cell < 13404045)
								{
									if(sinr < 3.5)
									{
										if(cell < 13161235.5)
										{
											if(payload < 1.5)
											{
												if(cqi < 10)
													return 3.75588;
												else
													return 4.14938;
											}
											else
												return 3.21673;
										}
										else
											return 1.91365;
									}
									else
									{
										if(velocity < 14.3)
										{
											if(rsrq < -10)
												return 1.67365;
											else
												return 0.881348;
										}
										else
										{
											if(velocity < 18.25)
												return 4.36126;
											else
											{
												if(rsrp < -93.5)
													return 2.61097;
												else
													return 2.04656;
											}
										}
									}
								}
								else
								{
									if(f < 2262.5)
										return 3.97219;
									else
										return 8.19952;
								}
							}
						}
						else
							return 11.0155;
					}
					else
						return 13.2231;
				}
			}
			else
			{
				if(sinr < 3.5)
				{
					if(sinr < -4.5)
					{
						if(ta < 3.5)
						{
							if(sinr < -5.5)
								return 3.29218;
							else
							{
								if(rsrq < -12)
									return 3.92157;
								else
									return 4.3952;
							}
						}
						else
							return 2.15876;
					}
					else
					{
						if(velocity < 9.195)
						{
							if(rsrp < -93.5)
							{
								if(rsrp < -101)
								{
									if(rsrp < -107)
									{
										if(payload < 7)
											return 4.34499;
										else
										{
											if(velocity < 8.505)
												return 5.39811;
											else
												return 4.99237;
										}
									}
									else
										return 11.4309;
								}
								else
								{
									if(sinr < -2.5)
										return 2.29456;
									else
										return 1.0996915;
								}
							}
							else
							{
								if(sinr < 0)
									return 22.0521;
								else
								{
									if(sinr < 2)
									{
										if(cqi < 6.5)
											return 11.7073;
										else
											return 13.1517;
									}
									else
									{
										if(rsrq < -11)
											return 3.34808;
										else
											return 7.62995;
									}
								}
							}
						}
						else
						{
							if(rsrp < -80)
							{
								if(velocity < 10.975)
								{
									if(rsrp < -100)
									{
										if(payload < 7.5)
											return 14.8607;
										else
											return 14.0488;
									}
									else
										return 11.982;
								}
								else
								{
									if(cell < 14086931)
									{
										if(payload < 8)
										{
											if(rsrq < -11)
											{
												if(rsrq < -13)
													return 9.4606866667;
												else
													return 4.16811;
											}
											else
											{
												if(velocity < 15.425)
												{
													if(rsrp < -83.5)
														return 9.38527;
													else
														return 7.09534;
												}
												else
												{
													if(cqi < 7)
														return 12.7762;
													else
														return 14.4092;
												}
											}
										}
										else
										{
											if(rsrp < -90)
											{
												if(rsrp < -94.5)
													return 3.57958;
												else
													return 4.87329;
											}
											else
											{
												if(rsrp < -83.5)
													return 8.09717;
												else
													return 8.78156;
											}
										}
									}
									else
										return 1.34211;
								}
							}
							else
								return 16.4002;
						}
					}
				}
				else
				{
					if(f < 2262.5)
					{
						if(ta < 3.5)
						{
							if(rsrp < -85.5)
							{
								if(rsrp < -90)
								{
									if(velocity < 16.87)
										return 10.2433;
									else
										return 12.0998;
								}
								else
								{
									if(payload < 8.5)
										return 13.67626;
									else
										return 16.4914;
								}
							}
							else
							{
								if(rsrq < -12.5)
									return 6.88666;
								else
								{
									if(sinr < 4.5)
										return 9.42285;
									else
										return 11.7008;
								}
							}
						}
						else
							return 3.60036;
					}
					else
					{
						if(ta < 2.5)
						{
							if(rsrp < -83.5)
								return 14.2433;
							else
								return 17.0576;
						}
						else
							return 20.2532;
					}
				}
			}
		}
		else
		{
			if(rsrq < -11.5)
			{
				if(velocity < 30.66)
				{
					if(rsrp < -118.5)
						return 16.3934;
					else
					{
						if(cqi < 5.5)
						{
							if(velocity < 15.175)
							{
								if(rsrp < -76.5)
								{
									if(f < 1347.5)
									{
										if(rsrq < -19.5)
										{
											if(payload < 2.5)
												return 7.36648;
											else
												return 1.26891;
										}
										else
										{
											if(payload < 6.5)
											{
												if(rsrp < -86.5)
												{
													if(rsrp < -94.5)
													{
														if(cell < 13882114.5)
														{
															if(sinr < -3.5)
															{
																if(payload < 1.5)
																{
																	if(rsrp < -105.5)
																		return 0.1957666;
																	else
																	{
																		if(rsrq < -18.5)
																			return 0.147957;
																		else
																			return 0.626199;
																	}
																}
																else
																{
																	if(velocity < 14.24)
																	{
																		if(ta < 12.5)
																		{
																			if(rsrq < -15.5)
																			{
																				if(velocity < 13.225)
																				{
																					if(rsrq < -16.5)
																						return 0.427255;
																					else
																						return 1.5167225;
																				}
																				else
																				{
																					if(rsrq < -17)
																						return 0.7782316;
																					else
																						return 0.283663;
																				}
																			}
																			else
																			{
																				if(ta < 8.5)
																					return 0.356482;
																				else
																				{
																					if(rsrp < -99.5)
																					{
																						if(sinr < -4.5)
																							return 1.09081;
																						else
																							return 0.572861;
																					}
																					else
																					{
																						if(rsrq < -13.5)
																							return 1.7248;
																						else
																							return 1.0319;
																					}
																				}
																			}
																		}
																		else
																			return 0.5319175714;
																	}
																	else
																		return 2.34719;
																}
															}
															else
															{
																if(velocity < 4.26)
																	return 0.9152701667;
																else
																{
																	if(ta < 12.5)
																		return 0.2423999474;
																	else
																	{
																		if(cell < 13711235)
																			return 0.6712643333;
																		else
																			return 0.2229255;
																	}
																}
															}
														}
														else
														{
															if(ta < 12)
															{
																if(sinr < -4.5)
																	return 1.66321;
																else
																	return 2.35989;
															}
															else
																return 0.6621015;
														}
													}
													else
													{
														if(ta < 13.5)
														{
															if(rsrq < -17)
																return 0.427716;
															else
																return 1.080860875;
														}
														else
														{
															if(rsrp < -91)
																return 1.3185666667;
															else
																return 2.32545;
														}
													}
												}
												else
												{
													if(rsrp < -82.5)
													{
														if(payload < 1.25)
															return 2.67559;
														else
															return 3.73832;
													}
													else
														return 0.734484;
												}
											}
											else
											{
												if(cell < 13501069.5)
												{
													if(payload < 7.5)
														return 4.38271;
													else
													{
														if(payload < 9.5)
															return 1.3377850254;
														else
															return 3.41384;
													}
												}
												else
												{
													if(rsrp < -100)
													{
														if(payload < 8.5)
														{
															if(rsrp < -107.5)
															{
																if(velocity < 13.4)
																	return 1.92261;
																else
																	return 3.28426;
															}
															else
															{
																if(rsrq < -13.5)
																{
																	if(rsrq < -18)
																		return 0.46909175;
																	else
																	{
																		if(ta < 18.5)
																		{
																			if(velocity < 9.88)
																			{
																				if(rsrp < -102.5)
																				{
																					if(ta < 13)
																						return 2.37163;
																					else
																						return 1.82108;
																				}
																				else
																				{
																					if(payload < 7.5)
																						return 1.05026;
																					else
																						return 1.47336;
																				}
																			}
																			else
																				return 0.5658535;
																		}
																		else
																			return 0.898977;
																	}
																}
																else
																	return 3.67623;
															}
														}
														else
														{
															if(rsrp < -108.5)
																return 1.07459;
															else
															{
																if(ta < 18)
																{
																	if(ta < 11)
																	{
																		if(velocity < 12.12)
																		{
																			if(ta < 9.5)
																			{
																				if(rsrq < -16.5)
																					return 2.45821;
																				else
																				{
																					if(sinr < -3.5)
																						return 2.94491;
																					else
																						return 2.51151;
																				}
																			}
																			else
																				return 2.01476;
																		}
																		else
																			return 0.407641;
																	}
																	else
																		return 4.06607;
																}
																else
																	return 1.63142;
															}
														}
													}
													else
													{
														if(cell < 13542402.5)
															return 0.4729186667;
														else
														{
															if(ta < 14)
															{
																if(rsrp < -92)
																	return 1.45549;
																else
																	return 0.99194;
															}
															else
																return 1.01413575;
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
											if(cell < 13163290.5)
											{
												if(velocity < 10.305)
													return 5.14387;
												else
													return 4.28266;
											}
											else
											{
												if(rsrp < -97.5)
												{
													if(sinr < 1)
													{
														if(sinr < -2)
														{
															if(rsrq < -14.5)
															{
																if(payload < 6.5)
																{
																	if(rsrp < -100.5)
																	{
																		if(rsrq < -19.5)
																			return 1.66104;
																		else
																		{
																			if(sinr < -3.5)
																			{
																				if(velocity < 1.31)
																					return 0.4656165;
																				else
																					return 0.8517209231;
																			}
																			else
																				return 0.222333;
																		}
																	}
																	else
																	{
																		if(payload < 4)
																			return 1.56067;
																		else
																			return 2.07182;
																	}
																}
																else
																{
																	if(rsrp < -107)
																		return 3.18562;
																	else
																		return 1.16582;
																}
															}
															else
															{
																if(sinr < -5.5)
																{
																	if(payload < 1.5)
																		return 1.09185;
																	else
																		return 0.186369;
																}
																else
																{
																	if(velocity < 8.21)
																	{
																		if(ta < 7)
																		{
																			if(payload < 3.5)
																				return 1.0651;
																			else
																				return 0.396983;
																		}
																		else
																			return 1.75115;
																	}
																	else
																	{
																		if(payload < 3.5)
																			return 1.23008;
																		else
																		{
																			if(cell < 13416986.5)
																				return 2.73363;
																			else
																				return 1.50126;
																		}
																	}
																}
															}
														}
														else
														{
															if(rsrp < -103)
																return 0.047809;
															else
																return 1.33178;
														}
													}
													else
													{
														if(payload < 6.5)
														{
															if(velocity < 8.84)
																return 1.33537;
															else
																return 1.74293;
														}
														else
															return 2.23161;
													}
												}
												else
												{
													if(rsrp < -96.5)
													{
														if(rsrq < -12.5)
															return 3.03099;
														else
															return 4.06339;
													}
													else
													{
														if(velocity < 14.015)
															return 1.0726366667;
														else
															return 2.82919;
													}
												}
											}
										}
										else
										{
											if(ta < 15.5)
											{
												if(rsrp < -98)
												{
													if(cqi < 4.5)
														return 4.29969;
													else
														return 8.328995;
												}
												else
												{
													if(rsrq < -12.5)
														return 1.8583;
													else
														return 2.99775;
												}
											}
											else
											{
												if(sinr < -4)
												{
													if(rsrq < -16.5)
													{
														if(cell < 13461274.5)
															return 2.80876;
														else
															return 3.41384;
													}
													else
														return 1.37143;
												}
												else
													return 1.3107908727;
											}
										}
									}
								}
								else
									return 7.17811;
							}
							else
							{
								if(rsrp < -110.5)
								{
									if(payload < 5)
										return 1.30081;
									else
										return 13.8498;
								}
								else
								{
									if(rsrq < -12.5)
									{
										if(velocity < 15.365)
										{
											if(cell < 13202587)
											{
												if(payload < 2.5)
													return 6.34417;
												else
													return 5.17632;
											}
											else
											{
												if(rsrq < -15)
													return 3.08523;
												else
													return 4.04042;
											}
										}
										else
										{
											if(rsrp < -102)
											{
												if(rsrp < -104)
												{
													if(rsrp < -106)
													{
														if(payload < 6.5)
															return 2.98675;
														else
															return 2.50279;
													}
													else
													{
														if(payload < 2.05)
															return 2.06719;
														else
															return 0.924241;
													}
												}
												else
												{
													if(ta < 24.5)
														return 4.47499;
													else
														return 6.76247;
												}
											}
											else
											{
												if(cell < 12917121.5)
												{
													if(rsrp < -87)
														return 0.15654;
													else
														return 0.657322;
												}
												else
												{
													if(rsrp < -100.5)
													{
														if(ta < 20.5)
															return 1.46466;
														else
															return 3.22582;
													}
													else
													{
														if(cell < 13884302)
														{
															if(sinr < -7)
																return 2.79086;
															else
																return 1.6312275;
														}
														else
														{
															if(payload < 3.05)
																return 0.14906;
															else
															{
																if(ta < 30.5)
																	return 2.08252;
																else
																	return 1.18769;
															}
														}
													}
												}
											}
										}
									}
									else
									{
										if(payload < 5)
											return 1.14438;
										else
											return 7.13467;
									}
								}
							}
						}
						else
						{
							if(payload < 7.5)
							{
								if(rsrp < -91.5)
								{
									if(payload < 0.75)
									{
										if(rsrp < -96.5)
										{
											if(rsrq < -12.5)
											{
												if(velocity < 14.54)
													return 0.177338;
												else
													return 0.774446;
											}
											else
												return 1.28659;
										}
										else
										{
											if(f < 1347.5)
											{
												if(ta < 14)
													return 0.276194;
												else
													return 2.19781;
											}
											else
											{
												if(payload < 0.3)
													return 3.16207;
												else
												{
													if(cqi < 7)
														return 2.07577;
													else
													{
														if(rsrp < -95)
															return 1.44509;
														else
															return 0.727141;
													}
												}
											}
										}
									}
									else
									{
										if(cell < 13422235)
										{
											if(velocity < 14.355)
											{
												if(cell < 12976538)
												{
													if(payload < 6.5)
													{
														if(velocity < 12.44)
														{
															if(payload < 3)
															{
																if(rsrp < -97)
																	return 1.9049783333;
																else
																{
																	if(ta < 11.5)
																		return 0.824997;
																	else
																		return 3.64797;
																}
															}
															else
															{
																if(velocity < 5.92)
																{
																	if(rsrq < -13)
																		return 2.12837;
																	else
																		return 1.35697;
																}
																else
																	return 0.555016;
															}
														}
														else
														{
															if(payload < 1.5)
																return 3.7123;
															else
																return 2.56369;
														}
													}
													else
														return 4.20705;
												}
												else
												{
													if(velocity < 12.7)
													{
														if(rsrp < -96.5)
														{
															if(ta < 7.5)
															{
																if(ta < 5.5)
																	return 1.3551366667;
																else
																{
																	if(rsrq < -12.5)
																		return 2.3796733333;
																	else
																		return 3.20449;
																}
															}
															else
																return 0.292439;
														}
														else
														{
															if(velocity < 11.855)
															{
																if(payload < 3)
																	return 0.954994;
																else
																	return 0.4468016;
															}
															else
																return 1.00821;
														}
													}
													else
													{
														if(sinr < -0.5)
															return 0.5365483333;
														else
															return 0.1251445;
													}
												}
											}
											else
											{
												if(ta < 11)
												{
													if(cqi < 7)
													{
														if(velocity < 15.495)
															return 3.25998;
														else
														{
															if(payload < 4)
																return 2.72758;
															else
																return 1.87059;
														}
													}
													else
														return 1.43747;
												}
												else
													return 5.86941;
											}
										}
										else
										{
											if(sinr < 1.5)
											{
												if(cqi < 6.5)
												{
													if(rsrq < -13.5)
													{
														if(ta < 21.5)
														{
															if(payload < 3)
																return 6.76819;
															else
																return 5.505075;
														}
														else
															return 1.38098;
													}
													else
													{
														if(rsrp < -97.5)
														{
															if(f < 1347.5)
																return 1.07889;
															else
															{
																if(sinr < -3.5)
																{
																	if(ta < 17.5)
																		return 2.043125;
																	else
																		return 2.69815;
																}
																else
																{
																	if(rsrp < -100)
																		return 3.04559;
																	else
																		return 2.62192;
																}
															}
														}
														else
															return 4.0104866667;
													}
												}
												else
												{
													if(ta < 20)
													{
														if(ta < 17)
														{
															if(rsrq < -13.5)
															{
																if(payload < 2)
																	return 1.75786;
																else
																	return 2.362576;
															}
															else
															{
																if(velocity < 14.6)
																{
																	if(cell < 13856269.5)
																		return 1.75185;
																	else
																		return 1.34941;
																}
																else
																	return 1.15482;
															}
														}
														else
															return 2.843065;
													}
													else
														return 1.0214626667;
												}
											}
											else
											{
												if(ta < 9)
													return 12.2652;
												else
												{
													if(cell < 13824282)
													{
														if(sinr < 3.5)
															return 5.11727;
														else
														{
															if(velocity < 12.625)
																return 6.02864;
															else
																return 6.58436;
														}
													}
													else
													{
														if(payload < 4.5)
														{
															if(sinr < 3.5)
															{
																if(cqi < 6.5)
																	return 5.22278;
																else
																	return 6.73212;
															}
															else
																return 1.71969;
														}
														else
															return 1.43812;
													}
												}
											}
										}
									}
								}
								else
								{
									if(cell < 13165070.5)
									{
										if(ta < 8.5)
										{
											if(rsrq < -12.5)
												return 9.66184;
											else
												return 6.1048716667;
										}
										else
										{
											if(rsrq < -12.5)
												return 0.527902;
											else
											{
												if(cell < 12896153)
													return 4.60299;
												else
													return 3.031525;
											}
										}
									}
									else
									{
										if(sinr < -1.5)
										{
											if(rsrp < -86)
											{
												if(payload < 4)
													return 2.56781;
												else
													return 4.11876;
											}
											else
												return 6.14035;
										}
										else
										{
											if(cqi < 6.5)
											{
												if(velocity < 11.86)
												{
													if(sinr < 3.5)
														return 2.33237;
													else
														return 1.82714;
												}
												else
													return 3.4154;
											}
											else
											{
												if(velocity < 12.01)
												{
													if(sinr < 0)
														return 1.23882;
													else
													{
														if(rsrq < -12.5)
															return 2.24529;
														else
															return 1.43241;
													}
												}
												else
												{
													if(sinr < 3)
														return 1.27055;
													else
														return 0.646195;
												}
											}
										}
									}
								}
							}
							else
							{
								if(cell < 14345742)
								{
									if(rsrp < -88.5)
									{
										if(cell < 13163278.5)
										{
											if(velocity < 5.245)
											{
												if(velocity < 1.455)
													return 6.59576;
												else
													return 10.6866;
											}
											else
											{
												if(sinr < -0.5)
													return 3.45125;
												else
													return 5.84924;
											}
										}
										else
										{
											if(cell < 13713294)
											{
												if(rsrp < -93.5)
												{
													if(rsrp < -101)
														return 0.514234;
													else
													{
														if(velocity < 14.21)
														{
															if(payload < 8.5)
																return 0.546691;
															else
															{
																if(cqi < 7.5)
																	return 3.4269175;
																else
																	return 0.898806;
															}
														}
														else
														{
															if(rsrq < -13.5)
																return 4.2858275;
															else
																return 5.65411;
														}
													}
												}
												else
												{
													if(rsrp < -92)
														return 0.510728;
													else
														return 1.05199;
												}
											}
											else
											{
												if(velocity < 4.13)
												{
													if(rsrp < -103.5)
														return 7.38007;
													else
														return 8.59199;
												}
												else
												{
													if(velocity < 10.745)
														return 1.39616;
													else
													{
														if(velocity < 13.865)
															return 4.5865;
														else
															return 3.02858;
													}
												}
											}
										}
									}
									else
									{
										if(sinr < 1.5)
											return 1.42835;
										else
										{
											if(f < 1347.5)
												return 10.4661;
											else
												return 6.47511;
										}
									}
								}
								else
									return 18.8813;
							}
						}
					}
				}
				else
				{
					if(sinr < -6.5)
						return 16.2767;
					else
					{
						if(velocity < 31.835)
						{
							if(payload < 7.5)
								return 8.4674;
							else
								return 19.6223;
						}
						else
						{
							if(velocity < 36.78)
							{
								if(sinr < 2)
								{
									if(rsrp < -82.5)
									{
										if(rsrq < -17.5)
											return 1.98376;
										else
										{
											if(velocity < 32.05)
												return 2.38521;
											else
											{
												if(rsrq < -14.5)
													return 3.36761;
												else
												{
													if(ta < 15.5)
														return 3.59055;
													else
														return 4.749122;
												}
											}
										}
									}
									else
										return 8.61605;
								}
								else
									return 1.68777;
							}
							else
								return 8.76712;
						}
					}
				}
			}
			else
			{
				if(velocity < 38.12)
				{
					if(sinr < 0.5)
					{
						if(velocity < 28.49)
						{
							if(rsrp < -90.5)
							{
								if(payload < 1.5)
								{
									if(cell < 13461531)
									{
										if(rsrp < -103.5)
											return 1.35547;
										else
											return 0.3543543333;
									}
									else
									{
										if(cqi < 6.5)
										{
											if(ta < 24)
												return 2.11361;
											else
												return 2.52685;
										}
										else
											return 1.31105;
									}
								}
								else
								{
									if(cqi < 6.5)
									{
										if(payload < 6.5)
										{
											if(rsrp < -95.5)
												return 9.81354;
											else
												return 6.86641;
										}
										else
											return 2.3942666667;
									}
									else
									{
										if(sinr < -0.5)
										{
											if(cell < 13882126)
											{
												if(sinr < -5.5)
													return 0.62498;
												else
													return 1.551375;
											}
											else
												return 2.84961;
										}
										else
											return 4.7784;
									}
								}
							}
							else
							{
								if(cqi < 6.5)
								{
									if(sinr < -1)
									{
										if(payload < 3.5)
										{
											if(payload < 0.75)
												return 4.81348;
											else
												return 1.77069;
										}
										else
										{
											if(rsrp < -86.5)
												return 7.5594;
											else
												return 8.35655;
										}
									}
									else
									{
										if(payload < 4.5)
											return 10.0671;
										else
											return 11.4204;
									}
								}
								else
								{
									if(cell < 12904333)
										return 0.986862;
									else
									{
										if(ta < 22)
										{
											if(rsrp < -85.5)
											{
												if(rsrp < -88.5)
													return 3.12663;
												else
												{
													if(ta < 12.5)
														return 3.68579;
													else
														return 4.3071;
												}
											}
											else
											{
												if(payload < 2.5)
													return 7.29594;
												else
													return 5.46324;
											}
										}
										else
											return 1.47106;
									}
								}
							}
						}
						else
						{
							if(sinr < -1.5)
							{
								if(sinr < -3)
									return 11.118;
								else
								{
									if(rsrq < -8.5)
										return 2.51711;
									else
										return 6.77201;
								}
							}
							else
								return 10.7239;
						}
					}
					else
					{
						if(ta < 13.5)
						{
							if(payload < 2.5)
							{
								if(cqi < 6.5)
								{
									if(cell < 14085651)
									{
										if(rsrp < -91.5)
										{
											if(payload < 0.3)
												return 0.369175;
											else
												return 0.93253075;
										}
										else
											return 1.58447;
									}
									else
										return 4.7747166667;
								}
								else
								{
									if(ta < 12.5)
									{
										if(ta < 6.5)
										{
											if(sinr < 4.5)
											{
												if(cell < 13163289.5)
												{
													if(velocity < 13.205)
													{
														if(payload < 0.75)
															return 7.27273;
														else
															return 8.84956;
													}
													else
														return 5.77201;
												}
												else
												{
													if(rsrq < -10)
														return 0.851154;
													else
														return 4.21568;
												}
											}
											else
												return 10.4439;
										}
										else
										{
											if(velocity < 11.755)
											{
												if(sinr < 3.5)
												{
													if(cqi < 7.5)
														return 2.16949;
													else
													{
														if(payload < 0.55)
															return 4.23282;
														else
															return 3.707615;
													}
												}
												else
												{
													if(cell < 13368859)
														return 5.52486;
													else
													{
														if(cqi < 10.5)
															return 3.95257;
														else
															return 4.59772;
													}
												}
											}
											else
												return 3.232305;
										}
									}
									else
									{
										if(rsrp < -95)
										{
											if(rsrq < -8.5)
												return 6.9808;
											else
												return 5.97015;
										}
										else
											return 8.28586;
									}
								}
							}
							else
							{
								if(cell < 13854861.5)
								{
									if(payload < 8.5)
									{
										if(cell < 13674242)
										{
											if(cqi < 7.5)
											{
												if(cell < 12927002.5)
												{
													if(rsrp < -91)
														return 5.6164;
													else
														return 9.69305;
												}
												else
												{
													if(cell < 13542402.5)
													{
														if(ta < 11.5)
														{
															if(velocity < 14.84)
																return 2.21738;
															else
																return 2.92951;
														}
														else
														{
															if(payload < 4.5)
																return 1.21244;
															else
																return 1.8631325;
														}
													}
													else
														return 0.609199;
												}
											}
											else
											{
												if(rsrp < -92.5)
													return 12.9817;
												else
												{
													if(sinr < 4.5)
													{
														if(payload < 7.5)
															return 8.18833;
														else
															return 6.45552;
													}
													else
													{
														if(rsrq < -7.5)
														{
															if(payload < 7.5)
																return 4.903615;
															else
																return 5.69851;
														}
														else
															return 3.86038;
													}
												}
											}
										}
										else
										{
											if(velocity < 36.265)
											{
												if(ta < 8.5)
												{
													if(cqi < 6.5)
													{
														if(rsrp < -82.5)
															return 15.9681;
														else
															return 11.7302;
													}
													else
														return 14.3326;
												}
												else
												{
													if(cell < 13824282)
													{
														if(velocity < 4.45)
														{
															if(rsrp < -89.5)
																return 8.18554;
															else
															{
																if(payload < 4)
																	return 5.68855;
																else
																	return 6.87403;
															}
														}
														else
														{
															if(rsrp < -89.5)
																return 6.44468;
															else
															{
																if(ta < 9.5)
																	return 8.45219;
																else
																{
																	if(rsrp < -80.5)
																		return 9.06589;
																	else
																		return 9.65795;
																}
															}
														}
													}
													else
														return 5.28402;
												}
											}
											else
												return 1.90794;
										}
									}
									else
									{
										if(cqi < 5.5)
											return 12.7247;
										else
										{
											if(velocity < 8.39)
											{
												if(ta < 11)
													return 7.19424;
												else
													return 6.55141;
											}
											else
											{
												if(cqi < 8.5)
												{
													if(ta < 8.5)
														return 6.71535;
													else
													{
														if(rsrq < -9)
															return 10.3292;
														else
															return 9.5454;
													}
												}
												else
												{
													if(cqi < 9.5)
														return 10.5862;
													else
														return 12.3098;
												}
											}
										}
									}
								}
								else
								{
									if(sinr < 2.5)
									{
										if(ta < 6.5)
											return 6.75105;
										else
										{
											if(sinr < 1.5)
												return 12.343;
											else
												return 10.6121;
										}
									}
									else
									{
										if(cell < 14345742)
										{
											if(cqi < 7.5)
											{
												if(velocity < 13.985)
													return 15.544;
												else
												{
													if(ta < 8)
														return 15.4589;
													else
														return 13.9150857143;
												}
											}
											else
												return 18.799;
										}
										else
										{
											if(velocity < 12.135)
											{
												if(sinr < 3.5)
													return 11.5053;
												else
													return 12.0437;
											}
											else
												return 13.4539;
										}
									}
								}
							}
						}
						else
						{
							if(sinr < 1.5)
							{
								if(velocity < 35.38)
								{
									if(cell < 13390746.5)
									{
										if(ta < 31.5)
											return 5.56715;
										else
											return 2.97399;
									}
									else
										return 4.49522;
								}
								else
								{
									if(payload < 7)
										return 7.998;
									else
										return 6.28239;
								}
							}
							else
							{
								if(cell < 12914075)
								{
									if(rsrp < -90)
									{
										if(ta < 17)
											return 5.52486;
										else
											return 8.63465;
									}
									else
									{
										if(rsrp < -85.5)
											return 2.02788;
										else
											return 2.86328;
									}
								}
								else
								{
									if(payload < 0.3)
										return 0.503147;
									else
									{
										if(velocity < 28.17)
										{
											if(cell < 13864591)
												return 1.3260966667;
											else
												return 2.278165;
										}
										else
											return 1.186285;
									}
								}
							}
						}
					}
				}
				else
					return 18.9524;
			}
		}
	}
	else
	{
		if(cqi < 13.5)
		{
			if(payload < 3.5)
			{
				if(rsrq < -5.5)
				{
					if(cell < 14345742)
					{
						if(sinr < 12.5)
						{
							if(f < 1347.5)
							{
								if(cell < 13674242.5)
								{
									if(rsrp < -87.5)
									{
										if(rsrp < -92)
											return 0.703482;
										else
											return 0.2168813333;
									}
									else
									{
										if(rsrp < -77)
										{
											if(velocity < 11.4)
												return 1.94363;
											else
												return 2.658065;
										}
										else
											return 0.7504713874;
									}
								}
								else
								{
									if(rsrq < -10.5)
									{
										if(rsrp < -78)
											return 9.35126;
										else
											return 0.904773;
									}
									else
									{
										if(velocity < 33.485)
										{
											if(cell < 13845122)
											{
												if(velocity < 29.385)
													return 1.09409;
												else
													return 3.99202;
											}
											else
											{
												if(cqi < 9.5)
												{
													if(rsrq < -6.5)
													{
														if(payload < 1.5)
															return 4.26942;
														else
															return 3.74181;
													}
													else
														return 4.67973;
												}
												else
												{
													if(rsrp < -88)
														return 6.83763;
													else
														return 4.46929;
												}
											}
										}
										else
											return 8.60218;
									}
								}
							}
							else
							{
								if(velocity < 15.44)
								{
									if(payload < 1.5)
									{
										if(ta < 1.5)
										{
											if(rsrq < -8.5)
											{
												if(velocity < 9.155)
													return 10.1652;
												else
												{
													if(cell < 13613716.5)
														return 6.4;
													else
														return 3.84617;
												}
											}
											else
											{
												if(cqi < 11.5)
												{
													if(payload < 0.3)
													{
														if(sinr < 10.5)
															return 4.22725;
														else
															return 3.72094;
													}
													else
													{
														if(payload < 0.75)
															return 2.86328;
														else
														{
															if(velocity < 5.015)
																return 1.21341;
															else
															{
																if(velocity < 12.44)
																	return 2.24404;
																else
																	return 1.7301;
															}
														}
													}
												}
												else
													return 7.44879;
											}
										}
										else
										{
											if(cell < 14344596)
											{
												if(rsrp < -83.5)
												{
													if(cqi < 4.5)
														return 7.20723;
													else
													{
														if(ta < 3)
														{
															if(rsrq < -9.5)
																return 1.38519;
															else
															{
																if(velocity < 9.995)
																	return 1.15741;
																else
																	return 0.529079;
															}
														}
														else
														{
															if(rsrq < -7.5)
															{
																if(rsrp < -90.5)
																{
																	if(rsrp < -93.5)
																		return 4.96896;
																	else
																	{
																		if(rsrq < -11.5)
																			return 0.950796;
																		else
																		{
																			if(sinr < 9.5)
																				return 2.2353866667;
																			else
																			{
																				if(cell < 12909467)
																				{
																					if(payload < 0.3)
																						return 3.68665;
																					else
																						return 2.67023;
																				}
																				else
																					return 1.62338;
																			}
																		}
																	}
																}
																else
																{
																	if(cqi < 10.5)
																	{
																		if(cqi < 6.5)
																			return 4.68933;
																		else
																		{
																			if(cqi < 8)
																			{
																				if(rsrp < -88)
																					return 2.58398;
																				else
																					return 1.59872;
																			}
																			else
																			{
																				if(payload < 0.3)
																					return 3.889375;
																				else
																					return 2.6686133333;
																			}
																		}
																	}
																	else
																		return 5.25624;
																}
															}
															else
															{
																if(ta < 8.5)
																{
																	if(velocity < 5.63)
																	{
																		if(sinr < 10)
																			return 6.60611;
																		else
																			return 6.01506;
																	}
																	else
																		return 5.131735;
																}
																else
																{
																	if(ta < 11.5)
																		return 3.7298;
																	else
																		return 1.12676;
																}
															}
														}
													}
												}
												else
												{
													if(cqi < 9.5)
													{
														if(ta < 2.5)
															return 0.411736;
														else
														{
															if(velocity < 6.495)
																return 8.847265;
															else
															{
																if(payload < 0.55)
																	return 6.89658;
																else
																	return 7.64818;
															}
														}
													}
													else
													{
														if(payload < 0.75)
														{
															if(ta < 6.5)
																return 8.54701;
															else
															{
																if(rsrp < -80)
																	return 6.6778;
																else
																{
																	if(rsrp < -74)
																		return 4.3716;
																	else
																		return 3.58746;
																}
															}
														}
														else
														{
															if(rsrq < -10)
																return 0.904773;
															else
															{
																if(rsrp < -78)
																	return 1.97775;
																else
																	return 2.63158;
															}
														}
													}
												}
											}
											else
											{
												if(payload < 0.3)
													return 7.07967;
												else
													return 8.13582;
											}
										}
									}
									else
									{
										if(cell < 13613716.5)
										{
											if(rsrp < -94)
												return 14.1343;
											else
											{
												if(rsrq < -8)
												{
													if(ta < 3)
													{
														if(ta < 1.5)
														{
															if(rsrq < -11.5)
																return 1.01339;
															else
															{
																if(sinr < 11)
																	return 4.556586;
																else
																	return 3.1917;
															}
														}
														else
															return 0.821271;
													}
													else
													{
														if(f < 2262.5)
														{
															if(cell < 12903066)
																return 7.19856;
															else
															{
																if(velocity < 13.895)
																{
																	if(velocity < 6.655)
																	{
																		if(rsrq < -11.5)
																			return 3.24456;
																		else
																			return 4.33369;
																	}
																	else
																	{
																		if(rsrp < -87.5)
																		{
																			if(rsrp < -88.5)
																				return 5.689325;
																			else
																				return 4.4843;
																		}
																		else
																			return 6.91842;
																	}
																}
																else
																{
																	if(payload < 2.5)
																		return 4.34075;
																	else
																		return 3.615;
																}
															}
														}
														else
														{
															if(cqi < 9.5)
																return 9.48992;
															else
																return 8.04829;
														}
													}
												}
												else
												{
													if(payload < 2.5)
													{
														if(sinr < 9.5)
														{
															if(cqi < 9)
																return 7.67386;
															else
																return 6.418175;
														}
														else
															return 4.99376;
													}
													else
													{
														if(cqi < 10.5)
															return 10.7479;
														else
															return 9.97506;
													}
												}
											}
										}
										else
										{
											if(rsrp < -98.5)
												return 5.3571466667;
											else
											{
												if(rsrp < -71.5)
												{
													if(rsrp < -90)
													{
														if(rsrp < -93)
														{
															if(cell < 14114964)
																return 9.74026;
															else
																return 9.1359;
														}
														else
															return 6.49614;
													}
													else
													{
														if(payload < 2.5)
															return 14.6386;
														else
															return 11.7763;
													}
												}
												else
													return 4.92156;
											}
										}
									}
								}
								else
								{
									if(velocity < 19.18)
									{
										if(payload < 2.5)
										{
											if(velocity < 17.49)
											{
												if(rsrp < -88.5)
													return 4.57374875;
												else
													return 6.40002;
											}
											else
												return 8.14664;
										}
										else
										{
											if(rsrp < -102)
												return 9.54654;
											else
											{
												if(rsrq < -8.5)
													return 14.0351;
												else
													return 12.7389;
											}
										}
									}
									else
									{
										if(velocity < 37.455)
										{
											if(velocity < 35.53)
											{
												if(sinr < 7.5)
													return 4.3398033333;
												else
												{
													if(ta < 2)
														return 2.46915;
													else
													{
														if(payload < 0.55)
															return 4.32434;
														else
															return 3.8310625;
													}
												}
											}
											else
												return 1.38098;
										}
										else
											return 8.13008;
									}
								}
							}
						}
						else
						{
							if(velocity < 17.235)
							{
								if(velocity < 15.255)
								{
									if(sinr < 16.5)
									{
										if(payload < 0.3)
										{
											if(velocity < 3.33)
											{
												if(sinr < 14.5)
												{
													if(cqi < 11.5)
														return 6.29924;
													else
														return 5.06331;
												}
												else
												{
													if(ta < 8.5)
													{
														if(ta < 4.5)
															return 4.3716;
														else
															return 4.76192;
													}
													else
														return 5.64381;
												}
											}
											else
											{
												if(velocity < 8.275)
													return 3.49346;
												else
												{
													if(cqi < 12.5)
													{
														if(sinr < 15.5)
															return 4.76344;
														else
															return 5.33335;
													}
													else
														return 5.59443;
												}
											}
										}
										else
										{
											if(cell < 12918810)
											{
												if(cell < 12914202)
												{
													if(velocity < 10.035)
													{
														if(payload < 1.5)
														{
															if(sinr < 14.5)
																return 8.17996;
															else
															{
																if(rsrq < -8.5)
																	return 7.64088;
																else
																	return 7.20721;
															}
														}
														else
														{
															if(sinr < 14)
																return 9.56175;
															else
																return 10.6596;
														}
													}
													else
													{
														if(rsrq < -8.5)
														{
															if(velocity < 13.485)
																return 3.47222;
															else
																return 4.86421;
														}
														else
														{
															if(rsrp < -86.5)
																return 7.3536;
															else
															{
																if(velocity < 14.36)
																{
																	if(ta < 2.5)
																		return 5.38721;
																	else
																		return 6.0323533333;
																}
																else
																	return 8.04829;
															}
														}
													}
												}
												else
												{
													if(rsrp < -92)
													{
														if(ta < 11)
															return 10.5263;
														else
															return 6.0015;
													}
													else
														return 14.6252;
												}
											}
											else
											{
												if(ta < 3)
												{
													if(rsrp < -93.5)
														return 2.03926;
													else
														return 1.20992;
												}
												else
												{
													if(payload < 2.5)
													{
														if(rsrp < -86.5)
														{
															if(payload < 0.75)
															{
																if(velocity < 5.62)
																	return 8.09717;
																else
																{
																	if(ta < 5.5)
																		return 6.9129933333;
																	else
																		return 7.60456;
																}
															}
															else
															{
																if(rsrp < -102)
																	return 3.79147;
																else
																	return 6.35425;
															}
														}
														else
														{
															if(cell < 13884290)
															{
																if(rsrq < -10)
																	return 7.64088;
																else
																	return 5.362856;
															}
															else
																return 1.93167;
														}
													}
													else
													{
														if(sinr < 14)
															return 8.13559;
														else
															return 12.3014;
													}
												}
											}
										}
									}
									else
									{
										if(cell < 12896781.5)
										{
											if(sinr < 18.5)
												return 10.9589;
											else
											{
												if(rsrq < -10)
												{
													if(rsrp < -82.5)
														return 3.49956;
													else
													{
														if(payload < 1.25)
														{
															if(rsrp < -68.5)
																return 11.0193;
															else
																return 4.89596;
														}
														else
															return 9.1638;
													}
												}
												else
												{
													if(cqi < 10.5)
													{
														if(cqi < 5.5)
															return 6.28437;
														else
															return 8.67679;
													}
													else
													{
														if(payload < 0.75)
															return 6.77966;
														else
														{
															if(ta < 6.5)
																return 5.04414;
															else
																return 3.87222;
														}
													}
												}
											}
										}
										else
										{
											if(ta < 5.5)
											{
												if(cell < 12904723.5)
												{
													if(rsrq < -6.5)
													{
														if(payload < 0.3)
															return 4.21054;
														else
															return 5.38841;
													}
													else
														return 1.43472;
												}
												else
												{
													if(f < 2262.5)
													{
														if(rsrq < -6.5)
														{
															if(ta < 1.5)
																return 12.7389;
															else
															{
																if(cell < 13368857)
																	return 9.68523;
																else
																{
																	if(rsrp < -75.5)
																		return 3.8478;
																	else
																	{
																		if(payload < 1.75)
																			return 8.42105;
																		else
																			return 6.6983;
																	}
																}
															}
														}
														else
														{
															if(sinr < 30.5)
															{
																if(rsrp < -81)
																	return 11.5858;
																else
																	return 16.7481;
															}
															else
																return 7.1535;
														}
													}
													else
													{
														if(cqi < 11.5)
														{
															if(cell < 13875086)
																return 3.16832;
															else
																return 4.59772;
														}
														else
														{
															if(rsrq < -8.5)
															{
																if(cqi < 12.5)
																	return 9.45068;
																else
																	return 8.43882;
															}
															else
															{
																if(payload < 1.05)
																	return 4.23282;
																else
																{
																	if(rsrq < -6.5)
																		return 6.05602;
																	else
																		return 5.39447;
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
													if(cell < 12898317.5)
														return 1.55189;
													else
													{
														if(cell < 13919515)
														{
															if(payload < 1.5)
															{
																if(payload < 0.3)
																{
																	if(rsrp < -81)
																		return 5.71431;
																	else
																		return 3.72094;
																}
																else
																{
																	if(payload < 0.75)
																		return 3.92157;
																	else
																		return 3.39415;
																}
															}
															else
																return 5.46075;
														}
														else
															return 2.22243;
													}
												}
												else
												{
													if(ta < 11.5)
													{
														if(cqi < 10.5)
															return 2.33134;
														else
														{
															if(rsrq < -7.5)
																return 3.57144;
															else
															{
																if(velocity < 10.755)
																{
																	if(ta < 10.5)
																	{
																		if(payload < 0.3)
																			return 5.22878;
																		else
																			return 6.75676;
																	}
																	else
																		return 4.50704;
																}
																else
																{
																	if(ta < 8)
																		return 3.7325;
																	else
																		return 4.24178;
																}
															}
														}
													}
													else
													{
														if(rsrp < -86.5)
														{
															if(payload < 2.5)
															{
																if(cqi < 7.5)
																	return 7.57576;
																else
																{
																	if(cqi < 11.5)
																	{
																		if(velocity < 9.04)
																			return 5.14115;
																		else
																			return 3.82135;
																	}
																	else
																	{
																		if(velocity < 4.65)
																			return 8.19672;
																		else
																			return 5.5030133333;
																	}
																}
															}
															else
															{
																if(rsrp < -92.5)
																{
																	if(rsrq < -6.5)
																		return 5.09554;
																	else
																		return 7.01754;
																}
																else
																	return 11.3261;
															}
														}
														else
														{
															if(payload < 2.5)
															{
																if(velocity < 11.185)
																{
																	if(payload < 1.5)
																		return 5.13479;
																	else
																		return 6.20636;
																}
																else
																{
																	if(payload < 1.25)
																		return 8.90869;
																	else
																		return 7.50117;
																}
															}
															else
																return 11.6167;
														}
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
										if(rsrp < -80)
										{
											if(sinr < 14.5)
												return 3.89105;
											else
												return 3.365366;
										}
										else
										{
											if(rsrp < -75)
												return 4.81493;
											else
												return 5.33335;
										}
									}
									else
									{
										if(payload < 2)
											return 2.77874;
										else
											return 1.88472;
									}
								}
							}
							else
							{
								if(cqi < 7.5)
								{
									if(velocity < 32.335)
										return 3.79867;
									else
										return 3.0303;
								}
								else
								{
									if(velocity < 36.075)
									{
										if(sinr < 23)
										{
											if(sinr < 21.5)
											{
												if(ta < 7)
												{
													if(velocity < 25.36)
													{
														if(cqi < 10.5)
															return 10.7431;
														else
															return 8.44476;
													}
													else
														return 6.04686;
												}
												else
												{
													if(rsrp < -71)
													{
														if(payload < 1.75)
															return 11.5607;
														else
															return 12.3267;
													}
													else
														return 10.4987;
												}
											}
											else
												return 17.4672;
										}
										else
										{
											if(payload < 2)
												return 3.89674;
											else
												return 6.77201;
										}
									}
									else
										return 4.57145;
								}
							}
						}
					}
					else
					{
						if(ta < 5.5)
						{
							if(rsrp < -97)
							{
								if(rsrp < -100.5)
									return 8.81057;
								else
									return 3.8835;
							}
							else
								return 16.1834;
						}
						else
						{
							if(rsrp < -95.5)
								return 6.65557;
							else
							{
								if(payload < 0.75)
									return 5.64972;
								else
									return 4.04449;
							}
						}
					}
				}
				else
				{
					if(ta < 7.5)
					{
						if(payload < 1.5)
						{
							if(payload < 0.75)
							{
								if(rsrp < -74.5)
									return 9.23788;
								else
									return 9.85222;
							}
							else
								return 12.6183;
						}
						else
						{
							if(cell < 12914202.5)
								return 15.2769;
							else
								return 20.00668;
						}
					}
					else
					{
						if(ta < 13.5)
						{
							if(rsrp < -95)
							{
								if(payload < 2.5)
									return 4.15909;
								else
									return 12.4546;
							}
							else
							{
								if(sinr < 22.5)
								{
									if(cqi < 12.5)
									{
										if(cell < 14062350)
											return 5.26535;
										else
											return 6.47773;
									}
									else
										return 3.46921;
								}
								else
									return 3.746728;
							}
						}
						else
						{
							if(sinr < 21.5)
								return 9.4118;
							else
								return 8.60218;
						}
					}
				}
			}
			else
			{
				if(sinr < 13.5)
				{
					if(cell < 12909466)
					{
						if(f < 2262.5)
						{
							if(ta < 12.5)
							{
								if(velocity < 10.11)
								{
									if(rsrp < -78.5)
									{
										if(rsrp < -91.5)
										{
											if(payload < 4.5)
												return 10.0851;
											else
												return 11.9225;
										}
										else
											return 9.57844;
									}
									else
										return 12.5737;
								}
								else
								{
									if(ta < 10.5)
									{
										if(rsrp < -92.5)
										{
											if(cell < 12903066.5)
												return 2.811108;
											else
												return 5.05636;
										}
										else
										{
											if(cqi < 11)
											{
												if(ta < 8.5)
												{
													if(rsrq < -11.5)
													{
														if(cell < 12904590.5)
															return 3.05157;
														else
															return 4.62428;
													}
													else
													{
														if(velocity < 14.83)
														{
															if(f < 1347.5)
																return 8.17912;
															else
															{
																if(payload < 9.5)
																	return 6.02214;
																else
																	return 5.33725;
															}
														}
														else
														{
															if(velocity < 19.415)
															{
																if(velocity < 16.655)
																{
																	if(sinr < 10.5)
																		return 7.91452;
																	else
																		return 8.39983;
																}
																else
																{
																	if(velocity < 18.19)
																		return 6.49729;
																	else
																		return 7.54984;
																}
															}
															else
																return 5.77909;
														}
													}
												}
												else
													return 2.54642;
											}
											else
												return 11.2694;
										}
									}
									else
									{
										if(cqi < 12.5)
										{
											if(rsrq < -7.5)
											{
												if(cqi < 9)
													return 8.75848;
												else
													return 10.1497;
											}
											else
											{
												if(payload < 9)
													return 15.8455;
												else
													return 10.6213;
											}
										}
										else
											return 6.8699;
									}
								}
							}
							else
							{
								if(payload < 5.5)
								{
									if(cqi < 8)
									{
										if(velocity < 12.805)
											return 3.77271;
										else
											return 2.99401;
									}
									else
										return 1.67645;
								}
								else
								{
									if(velocity < 8.825)
									{
										if(velocity < 6.56)
										{
											if(sinr < 7.5)
												return 3.06061;
											else
												return 3.62173;
										}
										else
										{
											if(payload < 7.5)
												return 5.28003;
											else
												return 4.37009;
										}
									}
									else
									{
										if(sinr < 8.5)
										{
											if(rsrq < -9)
											{
												if(rsrp < -91)
													return 12.513;
												else
													return 9.98129;
											}
											else
												return 8.34396;
										}
										else
										{
											if(rsrq < -9.5)
											{
												if(payload < 9.5)
												{
													if(cqi < 7.5)
														return 4.5623;
													else
														return 3.48905;
												}
												else
													return 6.80504;
											}
											else
											{
												if(rsrp < -88.5)
													return 7.17949;
												else
													return 10.9664;
											}
										}
									}
								}
							}
						}
						else
						{
							if(ta < 5)
								return 15.788;
							else
							{
								if(payload < 5.5)
									return 12.2605;
								else
									return 13.1332;
							}
						}
					}
					else
					{
						if(rsrq < -9.5)
						{
							if(cell < 14345742)
							{
								if(ta < 14)
								{
									if(rsrp < -73.5)
									{
										if(cell < 14344596)
										{
											if(velocity < 36.765)
											{
												if(cqi < 11)
												{
													if(ta < 1.5)
													{
														if(rsrp < -77.5)
														{
															if(f < 2262.5)
															{
																if(cqi < 7)
																	return 5.5948;
																else
																	return 7.69527;
															}
															else
																return 10.6938;
														}
														else
															return 5;
													}
													else
													{
														if(ta < 10.5)
														{
															if(rsrq < -10.5)
															{
																if(sinr < 10.5)
																{
																	if(payload < 4.5)
																		return 3.0056;
																	else
																	{
																		if(ta < 4)
																			return 2.99451;
																		else
																		{
																			if(velocity < 2.125)
																			{
																				if(f < 1347.5)
																					return 4.70754;
																				else
																					return 5.17369;
																			}
																			else
																			{
																				if(sinr < 6.5)
																					return 3.51278;
																				else
																					return 4.0198942857;
																			}
																		}
																	}
																}
																else
																{
																	if(payload < 8)
																		return 0.454985;
																	else
																		return 2.44707;
																}
															}
															else
															{
																if(payload < 4.5)
																	return 1.10497;
																else
																	return 0.60508;
															}
														}
														else
														{
															if(sinr < 11.5)
															{
																if(rsrp < -90.5)
																{
																	if(sinr < 7)
																		return 7.28597;
																	else
																		return 6.6968;
																}
																else
																{
																	if(f < 1347.5)
																	{
																		if(payload < 7)
																			return 3.66967;
																		else
																			return 4.62428;
																	}
																	else
																		return 6.11154;
																}
															}
															else
															{
																if(velocity < 10.91)
																	return 13.1183;
																else
																	return 4.33565;
															}
														}
													}
												}
												else
												{
													if(cell < 13157013)
														return 7.57268;
													else
														return 8.69376;
												}
											}
											else
												return 11.5984;
										}
										else
										{
											if(cqi < 12.5)
											{
												if(payload < 4.5)
												{
													if(velocity < 5.42)
														return 10.5995;
													else
													{
														if(ta < 5)
															return 8.29445;
														else
															return 10.0188;
													}
												}
												else
													return 10.51025;
											}
											else
												return 5.53123;
										}
									}
									else
									{
										if(velocity < 12.18)
										{
											if(payload < 7.5)
												return 14.433;
											else
												return 12.6084;
										}
										else
											return 10.16;
									}
								}
								else
									return 13.6622;
							}
							else
								return 20.48;
						}
						else
						{
							if(ta < 2.5)
							{
								if(payload < 5.5)
								{
									if(cell < 13404045)
									{
										if(cqi < 11.5)
										{
											if(sinr < 11.5)
											{
												if(velocity < 10.67)
													return 1.29445;
												else
													return 0.710464;
											}
											else
												return 1.9719;
										}
										else
										{
											if(rsrp < -75.5)
												return 8.42637;
											else
											{
												if(rsrq < -7.5)
													return 5.37418;
												else
													return 4.29461;
											}
										}
									}
									else
									{
										if(f < 2262.5)
										{
											if(rsrq < -7)
												return 9.37866;
											else
												return 6.93692;
										}
										else
											return 16.32905;
									}
								}
								else
								{
									if(rsrq < -7.5)
									{
										if(payload < 7.5)
										{
											if(rsrp < -87.5)
												return 12.2538;
											else
												return 14.9719;
										}
										else
										{
											if(velocity < 7.85)
												return 19.8708;
											else
												return 16.5375;
										}
									}
									else
									{
										if(cqi < 8.5)
										{
											if(rsrp < -89.5)
												return 6.66445;
											else
											{
												if(payload < 8.5)
												{
													if(cqi < 3)
														return 10.5541;
													else
													{
														if(cqi < 7.5)
														{
															if(rsrp < -84)
																return 12.3195;
															else
																return 12.7157;
														}
														else
															return 13.3891;
													}
												}
												else
													return 6.69083;
											}
										}
										else
										{
											if(ta < 1)
												return 1.9761;
											else
												return 3.25512;
										}
									}
								}
							}
							else
							{
								if(ta < 5.5)
								{
									if(sinr < 10.5)
									{
										if(rsrq < -6.5)
										{
											if(rsrp < -88.5)
											{
												if(velocity < 15.52)
												{
													if(rsrp < -96)
													{
														if(payload < 5.5)
															return 17.6757;
														else
														{
															if(rsrp < -104)
																return 15.5604;
															else
																return 16.529;
														}
													}
													else
													{
														if(payload < 6.5)
															return 14.3541;
														else
															return 14.9853;
													}
												}
												else
												{
													if(payload < 5.5)
													{
														if(velocity < 26.335)
															return 11.9314;
														else
															return 11.2045;
													}
													else
														return 9.00394;
												}
											}
											else
											{
												if(sinr < 9)
												{
													if(payload < 6.5)
														return 15.3355;
													else
														return 17.8685;
												}
												else
													return 32.0384;
											}
										}
										else
										{
											if(payload < 8.5)
												return 23.0358;
											else
												return 27.8649;
										}
									}
									else
									{
										if(rsrp < -97.5)
											return 17.3703;
										else
										{
											if(cqi < 8.5)
												return 6.16536;
											else
											{
												if(ta < 4.5)
													return 6.6102;
												else
												{
													if(velocity < 12.58)
														return 13.3492;
													else
														return 9.9975;
												}
											}
										}
									}
								}
								else
								{
									if(rsrp < -85.5)
									{
										if(velocity < 13.61)
										{
											if(rsrp < -86.5)
											{
												if(cqi < 5.5)
													return 3.01796;
												else
												{
													if(velocity < 1.47)
													{
														if(cell < 13650562.5)
														{
															if(payload < 8.5)
															{
																if(ta < 8)
																{
																	if(rsrp < -92)
																		return 11.0459;
																	else
																		return 10.0503;
																}
																else
																{
																	if(rsrp < -96)
																	{
																		if(rsrq < -8.5)
																			return 13.485;
																		else
																			return 16.8563;
																	}
																	else
																		return 10.9619;
																}
															}
															else
																return 8.27794;
														}
														else
														{
															if(cell < 13884175)
															{
																if(rsrq < -8.5)
																	return 17.6523;
																else
																	return 17.1812;
															}
															else
															{
																if(rsrp < -97.5)
																	return 14.0146;
																else
																	return 8.8476;
															}
														}
													}
													else
													{
														if(rsrp < -95)
														{
															if(cqi < 7.5)
																return 7.11849;
															else
															{
																if(sinr < 9)
																	return 12.4147;
																else
																{
																	if(payload < 7)
																		return 10.8328;
																	else
																		return 9.73828;
																}
															}
														}
														else
														{
															if(rsrq < -8.5)
															{
																if(rsrp < -89.5)
																	return 10.6649;
																else
																	return 9.25008;
															}
															else
															{
																if(ta < 12)
																{
																	if(velocity < 6.88)
																		return 6.81576;
																	else
																	{
																		if(payload < 9)
																			return 6.86916;
																		else
																			return 8.2144;
																	}
																}
																else
																	return 7.66179;
															}
														}
													}
												}
											}
											else
											{
												if(cqi < 11)
												{
													if(payload < 5)
														return 8.88149;
													else
														return 7.55885;
												}
												else
													return 2.65062;
											}
										}
										else
										{
											if(cqi < 7.5)
											{
												if(payload < 6)
													return 7.30594;
												else
													return 5.61572;
											}
											else
											{
												if(velocity < 22.18)
												{
													if(ta < 10.5)
													{
														if(velocity < 14.995)
														{
															if(velocity < 14.635)
																return 14.7803;
															else
																return 13.6054;
														}
														else
															return 11.5607;
													}
													else
													{
														if(cqi < 10.5)
															return 19.1045;
														else
														{
															if(rsrq < -7.5)
																return 16.57;
															else
																return 15.1451;
														}
													}
												}
												else
													return 2.63259;
											}
										}
									}
									else
									{
										if(cqi < 10.5)
										{
											if(cell < 13853583)
											{
												if(rsrp < -79.5)
												{
													if(payload < 8.5)
													{
														if(velocity < 17.86)
															return 14.9254;
														else
															return 13.7773;
													}
													else
														return 10.4357;
												}
												else
												{
													if(sinr < 11.5)
														return 9.5875233333;
													else
														return 7.99201;
												}
											}
											else
											{
												if(rsrp < -82.5)
													return 15.1467;
												else
													return 16.2354;
											}
										}
										else
										{
											if(velocity < 14.47)
											{
												if(velocity < 13.595)
													return 15.09052;
												else
													return 16.9599;
											}
											else
												return 21.9103;
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
						if(rsrp < -99.5)
						{
							if(velocity < 4.34)
								return 13.6016;
							else
							{
								if(cqi < 9)
									return 1.33645;
								else
								{
									if(sinr < 20)
									{
										if(sinr < 17)
											return 5.05849;
										else
										{
											if(rsrq < -8)
												return 5.1241;
											else
												return 5.62489;
										}
									}
									else
										return 6.49175;
								}
							}
						}
						else
						{
							if(velocity < 11.47)
							{
								if(f < 2262.5)
								{
									if(cell < 12903066)
									{
										if(rsrp < -85)
											return 19.0295;
										else
										{
											if(ta < 5.5)
											{
												if(sinr < 18)
													return 7.59253;
												else
													return 8.94254;
											}
											else
											{
												if(rsrq < -10)
													return 14.733;
												else
												{
													if(sinr < 27.5)
													{
														if(rsrq < -8)
															return 10.1458;
														else
															return 8.10537;
													}
													else
														return 12.2982;
												}
											}
										}
									}
									else
									{
										if(ta < 12.5)
										{
											if(rsrp < -67)
											{
												if(rsrp < -87.5)
													return 9.03955;
												else
												{
													if(ta < 7)
														return 6.09663;
													else
													{
														if(velocity < 11.115)
															return 7.314855;
														else
															return 6.89457;
													}
												}
											}
											else
												return 4.33276;
										}
										else
										{
											if(sinr < 22.5)
												return 5.76535;
											else
												return 4.47219;
										}
									}
								}
								else
								{
									if(rsrp < -97.5)
										return 7.25185;
									else
									{
										if(rsrq < -10.5)
											return 4.33276;
										else
										{
											if(cqi < 11.5)
											{
												if(sinr < 16.5)
													return 10.923;
												else
													return 11.9225;
											}
											else
											{
												if(ta < 4)
												{
													if(rsrq < -7.5)
														return 13.9413;
													else
														return 13.3835;
												}
												else
													return 14.9813;
											}
										}
									}
								}
							}
							else
							{
								if(sinr < 19.5)
								{
									if(velocity < 13.835)
									{
										if(payload < 5.5)
											return 12.1212;
										else
											return 16.8239;
									}
									else
									{
										if(ta < 12.5)
										{
											if(cqi < 11.5)
											{
												if(ta < 6.5)
												{
													if(rsrp < -94)
														return 11.0092;
													else
														return 9.548002;
												}
												else
													return 14.4796;
											}
											else
											{
												if(sinr < 16.5)
												{
													if(rsrp < -76)
														return 6.9660066667;
													else
														return 5.88885;
												}
												else
												{
													if(f < 1347.5)
														return 8.72172;
													else
														return 10.7335;
												}
											}
										}
										else
										{
											if(payload < 5)
												return 16.9942;
											else
												return 12.2794;
										}
									}
								}
								else
								{
									if(cell < 14092955)
									{
										if(rsrq < -8)
										{
											if(ta < 2.5)
												return 7.40056;
											else
											{
												if(sinr < 24)
													return 11.3475;
												else
													return 12.4494;
											}
										}
										else
										{
											if(ta < 12)
											{
												if(velocity < 23.915)
												{
													if(sinr < 24.5)
													{
														if(sinr < 22.5)
														{
															if(rsrp < -91)
																return 14.9589;
															else
																return 15.48575;
														}
														else
															return 13.7741;
													}
													else
													{
														if(rsrp < -83.5)
															return 22.2119;
														else
															return 17.18088;
													}
												}
												else
												{
													if(velocity < 28.84)
													{
														if(sinr < 32)
															return 11.4613;
														else
															return 13.4907;
													}
													else
														return 15.9046;
												}
											}
											else
												return 22.0872;
										}
									}
									else
										return 6.38086;
								}
							}
						}
					}
					else
					{
						if(rsrq < -6.5)
						{
							if(f < 2262.5)
							{
								if(ta < 9.5)
								{
									if(ta < 1.5)
									{
										if(f < 1347.5)
										{
											if(rsrp < -84.5)
												return 17.6454;
											else
											{
												if(payload < 9.5)
												{
													if(velocity < 4.545)
														return 14.6138;
													else
														return 10.4606;
												}
												else
													return 14.4875;
											}
										}
										else
										{
											if(sinr < 18.5)
												return 8.25783;
											else
											{
												if(rsrp < -74)
													return 7.45834;
												else
													return 6.92042;
											}
										}
									}
									else
									{
										if(ta < 4.5)
										{
											if(rsrp < -96.5)
											{
												if(payload < 8)
													return 3.10301;
												else
													return 4.22585;
											}
											else
											{
												if(cqi < 9.5)
													return 7.52688;
												else
												{
													if(rsrq < -8.5)
														return 8.9101;
													else
													{
														if(rsrq < -7.5)
															return 11.0938;
														else
														{
															if(ta < 3)
																return 11.8273;
															else
																return 12.3887;
														}
													}
												}
											}
										}
										else
										{
											if(cqi < 10.5)
											{
												if(sinr < 17.5)
													return 6.9973;
												else
												{
													if(sinr < 19.5)
														return 1.84096;
													else
													{
														if(rsrq < -11)
															return 6.8578;
														else
														{
															if(rsrp < -98)
																return 4.21496;
															else
																return 5.18068;
														}
													}
												}
											}
											else
												return 10.5021;
										}
									}
								}
								else
								{
									if(rsrp < -66.5)
									{
										if(velocity < 22.55)
										{
											if(sinr < 14.5)
											{
												if(ta < 11)
													return 19.0225;
												else
												{
													if(payload < 8)
														return 15.8595;
													else
														return 14.6074;
												}
											}
											else
											{
												if(rsrp < -83.5)
												{
													if(ta < 12.5)
													{
														if(payload < 7.5)
															return 15.3762;
														else
															return 10.8788;
													}
													else
													{
														if(cqi < 7.5)
															return 9.03663;
														else
														{
															if(velocity < 7.86)
																return 6.10571;
															else
															{
																if(payload < 8)
																	return 4.51977;
																else
																	return 4.90965;
															}
														}
													}
												}
												else
												{
													if(rsrp < -78.5)
														return 17.8571;
													else
													{
														if(payload < 7.5)
														{
															if(rsrp < -68.5)
																return 13.9477;
															else
																return 16.0458;
														}
														else
														{
															if(sinr < 25)
															{
																if(cell < 12896781)
																{
																	if(rsrp < -68)
																	{
																		if(rsrq < -7.5)
																			return 11.8149;
																		else
																			return 10.9256;
																	}
																	else
																		return 13.8063;
																}
																else
																{
																	if(payload < 9)
																		return 8.07877;
																	else
																		return 10.35275;
																}
															}
															else
																return 15.6678;
														}
													}
												}
											}
										}
										else
											return 21.843;
									}
									else
									{
										if(rsrp < -65.5)
											return 20.8225;
										else
											return 22.1071;
									}
								}
							}
							else
							{
								if(rsrp < -72.5)
								{
									if(ta < 4.5)
									{
										if(ta < 2.5)
										{
											if(rsrp < -88)
												return 16.5534;
											else
												return 15.1942;
										}
										else
										{
											if(rsrq < -9.5)
												return 20.8266;
											else
											{
												if(rsrp < -81)
													return 14.6141666667;
												else
												{
													if(velocity < 7.31)
														return 22.4579;
													else
														return 18.6232;
												}
											}
										}
									}
									else
									{
										if(sinr < 18.5)
										{
											if(rsrp < -98.5)
											{
												if(sinr < 17)
													return 10.0939;
												else
													return 8.71555;
											}
											else
												return 13.4605;
										}
										else
										{
											if(payload < 8)
												return 11.925;
											else
											{
												if(rsrp < -100)
													return 20.2077;
												else
													return 16.3332;
											}
										}
									}
								}
								else
									return 1.84096;
							}
						}
						else
						{
							if(ta < 14.5)
							{
								if(rsrp < -78)
								{
									if(cqi < 7.5)
									{
										if(rsrq < -5.5)
											return 25.95;
										else
											return 12.8695;
									}
									else
									{
										if(velocity < 16.855)
										{
											if(cell < 12896793.5)
												return 21.8953;
											else
											{
												if(rsrp < -87.5)
												{
													if(velocity < 15.44)
													{
														if(rsrp < -94.5)
															return 17.229;
														else
														{
															if(sinr < 14.5)
																return 6.46726;
															else
															{
																if(ta < 3)
																	return 9.72316;
																else
																	return 11.5518;
															}
														}
													}
													else
													{
														if(ta < 11)
														{
															if(rsrq < -5.5)
																return 19.0074;
															else
																return 16.0107;
														}
														else
															return 13.4842;
													}
												}
												else
												{
													if(cell < 13396890)
													{
														if(cqi < 11.5)
														{
															if(sinr < 17)
																return 14.175;
															else
																return 16.1038;
														}
														else
															return 10.2581;
													}
													else
														return 27.1903;
												}
											}
										}
										else
										{
											if(velocity < 25.805)
											{
												if(cqi < 12.5)
												{
													if(ta < 4.5)
													{
														if(sinr < 24.5)
														{
															if(rsrp < -87)
																return 24.9653;
															else
																return 24.4009;
														}
														else
														{
															if(cqi < 11.5)
																return 17.9775;
															else
																return 17.4055;
														}
													}
													else
													{
														if(payload < 8)
															return 13.8923;
														else
															return 15.7;
													}
												}
												else
													return 26.393;
											}
											else
											{
												if(rsrp < -87)
													return 10.3093;
												else
													return 8.60678;
											}
										}
									}
								}
								else
								{
									if(rsrq < -5.5)
									{
										if(cell < 12914202)
											return 8.92746;
										else
										{
											if(f < 1347.5)
												return 12.9324;
											else
												return 11.45542;
										}
									}
									else
									{
										if(rsrp < -63.5)
											return 16.1871;
										else
											return 14.9733;
									}
								}
							}
							else
							{
								if(rsrp < -80.5)
								{
									if(velocity < 30.59)
										return 31.6623;
									else
										return 25.7471;
								}
								else
								{
									if(payload < 7.5)
										return 17.9085;
									else
										return 15.2417;
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
				if(payload < 2.5)
				{
					if(ta < 3.5)
					{
						if(rsrq < -4.5)
						{
							if(sinr < 25)
							{
								if(rsrq < -7.5)
								{
									if(rsrp < -85.5)
										return 5.96125;
									else
										return 5.29803;
								}
								else
								{
									if(cqi < 14.5)
									{
										if(rsrq < -5.5)
										{
											if(rsrq < -6.5)
												return 9.55224;
											else
												return 10.3093;
										}
										else
											return 8.57449;
									}
									else
									{
										if(rsrp < -73.5)
										{
											if(velocity < 12.64)
												return 4.40044;
											else
											{
												if(rsrq < -5.5)
												{
													if(payload < 1.25)
														return 7.253602;
													else
														return 7.91687;
												}
												else
													return 5.71837;
											}
										}
										else
											return 9.27562;
									}
								}
							}
							else
							{
								if(cell < 12918809.5)
								{
									if(payload < 0.75)
										return 10.00157;
									else
									{
										if(velocity < 15.525)
											return 7.33945;
										else
											return 4.81203;
									}
								}
								else
								{
									if(rsrp < -85)
										return 7.45226;
									else
									{
										if(payload < 0.3)
										{
											if(cell < 13610266.5)
												return 5.19483;
											else
												return 5.67378;
										}
										else
											return 3.347822;
									}
								}
							}
						}
						else
						{
							if(sinr < 29)
							{
								if(rsrp < -75.5)
									return 8.51067;
								else
									return 4.79044;
							}
							else
							{
								if(payload < 0.75)
									return 14.5455;
								else
									return 16.9133;
							}
						}
					}
					else
					{
						if(cell < 13828122)
						{
							if(rsrq < -8.5)
							{
								if(rsrp < -83)
									return 4.11533;
								else
								{
									if(payload < 1.5)
										return 1.87793;
									else
										return 3.50186;
								}
							}
							else
							{
								if(velocity < 14.32)
								{
									if(velocity < 10.035)
									{
										if(sinr < 28)
										{
											if(rsrq < -5.5)
											{
												if(rsrp < -90)
													return 4.65116;
												else
												{
													if(sinr < 24.5)
														return 6.3915133333;
													else
														return 5.26318;
												}
											}
											else
												return 7.64818;
										}
										else
											return 4.16668;
									}
									else
									{
										if(sinr < 10.5)
											return 3.39559;
										else
											return 2.9596433333;
									}
								}
								else
								{
									if(cell < 12914201)
									{
										if(rsrp < -73)
										{
											if(rsrq < -6.5)
												return 7.44879;
											else
												return 6.20396;
										}
										else
											return 2.331;
									}
									else
									{
										if(rsrp < -88)
											return 7.27273;
										else
											return 11.3154;
									}
								}
							}
						}
						else
						{
							if(ta < 6.5)
							{
								if(payload < 0.55)
									return 0.127005;
								else
								{
									if(rsrp < -91.5)
										return 3.25071;
									else
										return 4.64576;
								}
							}
							else
							{
								if(velocity < 20.46)
								{
									if(rsrp < -87)
										return 13.8648;
									else
										return 12.7796;
								}
								else
								{
									if(velocity < 29.895)
									{
										if(sinr < 20.5)
											return 6.29921;
										else
											return 3.69004;
									}
									else
									{
										if(ta < 18.5)
											return 6.6116;
										else
											return 12.5392;
									}
								}
							}
						}
					}
				}
				else
				{
					if(velocity < 8.71)
					{
						if(f < 2262.5)
						{
							if(sinr < 13)
							{
								if(sinr < 10.5)
									return 15.748;
								else
									return 14.6319;
							}
							else
							{
								if(rsrq < -7)
									return 6.23701;
								else
								{
									if(sinr < 25)
									{
										if(sinr < 22.5)
											return 6.84638;
										else
											return 8.18331;
									}
									else
										return 18.0655;
								}
							}
						}
						else
						{
							if(sinr < 27)
							{
								if(payload < 3.5)
								{
									if(cell < 13875087)
										return 17.2538;
									else
										return 16.3934;
								}
								else
								{
									if(sinr < 22)
										return 19.99;
									else
									{
										if(cqi < 14.5)
											return 21.838;
										else
											return 22.7596;
									}
								}
							}
							else
							{
								if(rsrq < -7.5)
									return 9.6231;
								else
									return 11.3744;
							}
						}
					}
					else
					{
						if(sinr < 20.5)
						{
							if(sinr < 17)
							{
								if(velocity < 35.83)
								{
									if(velocity < 23.075)
									{
										if(ta < 3)
											return 2.70088;
										else
										{
											if(rsrp < -81.5)
											{
												if(sinr < 13)
													return 8.6621625;
												else
													return 10.7614;
											}
											else
												return 5.33867;
										}
									}
									else
									{
										if(rsrq < -8.5)
											return 18.2163;
										else
											return 7.51997;
									}
								}
								else
									return 18.8457;
							}
							else
							{
								if(rsrq < -4.5)
								{
									if(cell < 13605255)
										return 13.28502;
									else
									{
										if(rsrq < -7)
											return 13.1796;
										else
										{
											if(velocity < 11.67)
												return 13.7615;
											else
											{
												if(velocity < 25.605)
													return 19.0454333333;
												else
													return 19.8314;
											}
										}
									}
								}
								else
									return 20.8605;
							}
						}
						else
						{
							if(rsrp < -88)
							{
								if(ta < 3)
									return 9.09349;
								else
									return 20.7388;
							}
							else
							{
								if(rsrp < -80.5)
								{
									if(sinr < 24.5)
									{
										if(rsrp < -83)
											return 3.13316;
										else
											return 4.19654;
									}
									else
									{
										if(velocity < 10.935)
											return 5.75402;
										else
										{
											if(payload < 5.5)
												return 13.587;
											else
											{
												if(rsrp < -85)
													return 9.02425;
												else
													return 9.42655;
											}
										}
									}
								}
								else
								{
									if(ta < 3.5)
									{
										if(rsrp < -67)
										{
											if(velocity < 14.91)
											{
												if(rsrq < -5.5)
													return 5.87372;
												else
												{
													if(rsrp < -69.5)
														return 5.26431;
													else
														return 4.37158;
												}
											}
											else
											{
												if(sinr < 28)
													return 10.3448;
												else
												{
													if(sinr < 30.5)
													{
														if(payload < 3.5)
															return 6.01353;
														else
															return 7.09063;
													}
													else
														return 8.26873;
												}
											}
										}
										else
										{
											if(rsrp < -62)
											{
												if(velocity < 13.71)
													return 14.4796;
												else
												{
													if(sinr < 24)
														return 13.0346;
													else
														return 10.306;
												}
											}
											else
												return 7.2767;
										}
									}
									else
									{
										if(rsrq < -7)
										{
											if(rsrp < -70)
												return 6.30915;
											else
												return 7.08801;
										}
										else
										{
											if(payload < 3.5)
											{
												if(rsrq < -4.5)
													return 22.6629;
												else
													return 15.625;
											}
											else
											{
												if(ta < 8)
												{
													if(payload < 5)
														return 15.4143;
													else
														return 16.6725;
												}
												else
												{
													if(rsrp < -71.5)
														return 12.6249;
													else
													{
														if(rsrp < -66.5)
															return 9.54426;
														else
															return 10.3292;
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
				if(sinr < 28.5)
				{
					if(rsrq < -9.5)
					{
						if(cell < 13410324)
						{
							if(payload < 8.5)
								return 5.49504;
							else
							{
								if(f < 2262.5)
								{
									if(rsrp < -68)
										return 9.52041;
									else
										return 9.94036;
								}
								else
									return 6.93662;
							}
						}
						else
							return 2.02846;
					}
					else
					{
						if(cqi < 14.5)
						{
							if(cell < 12907801.5)
							{
								if(sinr < 22.5)
								{
									if(rsrq < -6.5)
										return 14.3081;
									else
									{
										if(rsrp < -77)
											return 10.8043;
										else
											return 9.33022;
									}
								}
								else
									return 18.2417;
							}
							else
							{
								if(cell < 13161619.5)
								{
									if(sinr < 22)
										return 32.9369;
									else
									{
										if(payload < 8.5)
											return 27.5981;
										else
											return 24.565;
									}
								}
								else
								{
									if(rsrq < -7.5)
										return 12.1704;
									else
									{
										if(rsrq < -6.5)
										{
											if(payload < 9)
												return 21.9479;
											else
												return 18.6611;
										}
										else
											return 25.37;
									}
								}
							}
						}
						else
						{
							if(rsrq < -6.5)
							{
								if(velocity < 22.615)
								{
									if(cell < 13613717)
									{
										if(velocity < 6.28)
										{
											if(sinr < 18.5)
											{
												if(rsrp < -81)
													return 18.014;
												else
													return 22.3256;
											}
											else
											{
												if(cell < 12896781)
													return 12.8323;
												else
													return 10.4322;
											}
										}
										else
										{
											if(rsrp < -83.5)
												return 2.48937;
											else
											{
												if(sinr < 23.5)
												{
													if(rsrp < -65.5)
													{
														if(payload < 9.5)
														{
															if(rsrq < -8.5)
																return 14.9848;
															else
															{
																if(payload < 8.5)
																	return 12.7085;
																else
																{
																	if(sinr < 21.5)
																		return 12.1298;
																	else
																		return 11.5886;
																}
															}
														}
														else
															return 14.2552;
													}
													else
														return 10.2715;
												}
												else
												{
													if(cell < 12896781.5)
														return 15.0066;
													else
														return 16.4609;
												}
											}
										}
									}
									else
									{
										if(rsrp < -73.5)
										{
											if(rsrp < -81.5)
											{
												if(rsrq < -8)
													return 14.3911;
												else
													return 14.7738;
											}
											else
											{
												if(sinr < 11.5)
													return 22.1484;
												else
													return 20.1222;
											}
										}
										else
											return 9.62696;
									}
								}
								else
									return 26.6756;
							}
							else
							{
								if(ta < 3.5)
								{
									if(sinr < 14)
										return 6.29327;
									else
									{
										if(f < 1347.5)
										{
											if(rsrq < -5.5)
												return 16.7286;
											else
												return 19.1789;
										}
										else
										{
											if(rsrq < -5.5)
											{
												if(sinr < 22.5)
												{
													if(payload < 9)
														return 18.0079;
													else
														return 18.9349;
												}
												else
												{
													if(rsrp < -81)
														return 15.1556;
													else
														return 14.3209;
												}
											}
											else
											{
												if(cell < 12918810.5)
													return 11.8343;
												else
												{
													if(sinr < 24)
														return 12.8146;
													else
														return 13.7999;
												}
											}
										}
									}
								}
								else
								{
									if(f < 1347.5)
										return 12.3362;
									else
									{
										if(velocity < 17.12)
										{
											if(ta < 10.5)
												return 30.6775;
											else
											{
												if(sinr < 24.5)
												{
													if(cell < 12907801)
													{
														if(rsrq < -5.5)
															return 17.5055;
														else
															return 18.4067;
													}
													else
														return 21.9901;
												}
												else
												{
													if(ta < 12.5)
														return 20.2532;
													else
														return 32.0802;
												}
											}
										}
										else
										{
											if(rsrp < -87)
												return 22.49;
											else
											{
												if(sinr < 20.5)
													return 16.9811;
												else
													return 17.9284;
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
					if(payload < 8.5)
					{
						if(rsrp < -79.5)
						{
							if(sinr < 34)
							{
								if(velocity < 15.16)
									return 9.04722;
								else
									return 13.1067;
							}
							else
								return 1.64453;
						}
						else
						{
							if(ta < 3.5)
							{
								if(ta < 2)
									return 13.8408;
								else
									return 15.4525;
							}
							else
							{
								if(ta < 7)
									return 25.9379;
								else
									return 17.5935;
							}
						}
					}
					else
					{
						if(cell < 14092929.5)
						{
							if(cell < 13644296.5)
							{
								if(rsrp < -79)
									return 24.6381;
								else
								{
									if(rsrp < -73.5)
										return 21.4823;
									else
										return 23.9282;
								}
							}
							else
								return 15.9504;
						}
						else
						{
							if(ta < 9)
								return 31.0078;
							else
							{
								if(velocity < 35.695)
								{
									if(rsrq < -6.5)
										return 17.8731;
									else
									{
										if(sinr < 32.5)
											return 24.7253;
										else
											return 25.5591;
									}
								}
								else
								{
									if(velocity < 36.65)
										return 29.9252;
									else
										return 28.0265;
								}
							}
						}
					}
				}
			}
		}
	}
}

float o2_dl_tree_5(float payload, float rsrp, float rsrq, float sinr, float cqi, float ta, float velocity, float cell, float f)
{
	if(rsrq < -11.5)
	{
		if(ta < 4.5)
		{
			if(payload < 2.5)
			{
				if(sinr < 9.5)
				{
					if(rsrp < -69)
					{
						if(f < 1347.5)
							return 0.1159008;
						else
						{
							if(rsrp < -76)
							{
								if(rsrq < -17)
									return 3.46921;
								else
								{
									if(velocity < 11.465)
									{
										if(ta < 3.5)
											return 2.00814;
										else
											return 0.990986;
									}
									else
									{
										if(payload < 1.05)
											return 4.25534;
										else
											return 3.52734;
									}
								}
							}
							else
								return 0.411736;
						}
					}
					else
						return 6.96561;
				}
				else
				{
					if(payload < 1.05)
						return 6.89658;
					else
						return 9.1638;
				}
			}
			else
			{
				if(ta < 2.5)
				{
					if(sinr < 0.5)
					{
						if(rsrp < -90)
						{
							if(cqi < 5.5)
							{
								if(rsrp < -99.5)
									return 4.46453;
								else
								{
									if(payload < 7)
										return 1.89678;
									else
										return 0.71823;
								}
							}
							else
							{
								if(cell < 12907802.5)
									return 4.08593;
								else
									return 3.0095;
							}
						}
						else
							return 9.38086;
					}
					else
					{
						if(cqi < 6.5)
						{
							if(ta < 1.5)
							{
								if(payload < 5)
								{
									if(rsrp < -94.5)
										return 11.0957;
									else
									{
										if(payload < 3.5)
											return 8.19952;
										else
											return 10.4952;
									}
								}
								else
									return 11.7051333333;
							}
							else
								return 5.11182;
						}
						else
						{
							if(cell < 13149594.5)
							{
								if(velocity < 15.315)
								{
									if(sinr < 7)
										return 10.5346;
									else
									{
										if(payload < 7)
											return 8.94254;
										else
											return 8.40532;
									}
								}
								else
									return 5.7496;
							}
							else
							{
								if(sinr < 7)
									return 1.1682233333;
								else
									return 5;
							}
						}
					}
				}
				else
				{
					if(cqi < 6.5)
					{
						if(sinr < -2.5)
							return 12.7029;
						else
						{
							if(sinr < 12.5)
							{
								if(sinr < 1.5)
									return 5.439405;
								else
									return 3.60036;
							}
							else
								return 11.3475;
						}
					}
					else
					{
						if(ta < 3.5)
						{
							if(rsrq < -12.5)
								return 17.0535;
							else
								return 16.0275;
						}
						else
						{
							if(sinr < 4)
								return 11.982;
							else
								return 8.5939325;
						}
					}
				}
			}
		}
		else
		{
			if(cell < 14344596)
			{
				if(cell < 13410696.5)
				{
					if(rsrp < -117)
						return 16.3934;
					else
					{
						if(ta < 9.5)
						{
							if(ta < 8)
							{
								if(payload < 4.5)
								{
									if(cell < 12904723.5)
									{
										if(rsrp < -83.5)
										{
											if(rsrp < -104.5)
												return 3.7123;
											else
											{
												if(sinr < 4)
													return 1.794944;
												else
													return 0.396434;
											}
										}
										else
											return 3.73832;
									}
									else
									{
										if(velocity < 15.435)
										{
											if(cqi < 5.5)
											{
												if(rsrq < -16.5)
													return 5.14387;
												else
													return 4.28266;
											}
											else
											{
												if(cqi < 7.5)
												{
													if(rsrp < -89.5)
													{
														if(rsrp < -95.5)
															return 1.633526;
														else
															return 2.69209;
													}
													else
														return 6.03546;
												}
												else
												{
													if(sinr < 2.5)
														return 6.23296;
													else
													{
														if(sinr < 4.5)
														{
															if(cqi < 8.5)
																return 3.77003;
															else
																return 2.10637;
														}
														else
														{
															if(sinr < 6)
																return 5.90842;
															else
															{
																if(cqi < 8.5)
																	return 3.94619;
																else
																{
																	if(payload < 3.5)
																		return 3.615;
																	else
																		return 2.97508;
																}
															}
														}
													}
												}
											}
										}
										else
											return 9.66184;
									}
								}
								else
								{
									if(rsrq < -13.5)
									{
										if(payload < 7.5)
											return 12.3077;
										else
											return 10.6866;
									}
									else
									{
										if(ta < 6)
											return 3.8059;
										else
										{
											if(velocity < 5.745)
											{
												if(sinr < 3.5)
													return 4.20705;
												else
												{
													if(sinr < 5)
													{
														if(rsrp < -92.5)
															return 8.60369;
														else
															return 9.19118;
													}
													else
														return 6.9595133333;
												}
											}
											else
											{
												if(sinr < 4)
													return 6.28931;
												else
												{
													if(payload < 6)
														return 3.51278;
													else
														return 4.62428;
												}
											}
										}
									}
								}
							}
							else
								return 15.748;
						}
						else
						{
							if(cell < 13223956)
							{
								if(velocity < 35.38)
								{
									if(f < 1347.5)
									{
										if(cqi < 3.5)
										{
											if(payload < 4)
											{
												if(payload < 0.75)
													return 0.16533;
												else
													return 0.654664;
											}
											else
												return 1.86399;
										}
										else
										{
											if(rsrq < -13.5)
											{
												if(sinr < -3.5)
												{
													if(velocity < 32.495)
													{
														if(payload < 3.5)
															return 4.51213;
														else
														{
															if(velocity < 18.67)
																return 3.45125;
															else
																return 2.79086;
														}
													}
													else
													{
														if(cqi < 4.5)
															return 3.98059;
														else
															return 2.78067;
													}
												}
												else
												{
													if(rsrp < -89)
													{
														if(payload < 3.5)
															return 0.7033215;
														else
															return 3.2555923529;
													}
													else
														return 4.10258;
												}
											}
											else
											{
												if(cell < 12919426.5)
												{
													if(sinr < -2.5)
														return 0.076621;
													else
													{
														if(rsrp < -92)
															return 1.99343;
														else
															return 1.0391076667;
													}
												}
												else
												{
													if(cqi < 5.5)
														return 3.59939;
													else
														return 2.3601982353;
												}
											}
										}
									}
									else
									{
										if(rsrp < -88)
										{
											if(velocity < 7.6)
											{
												if(rsrp < -92)
												{
													if(payload < 8.5)
													{
														if(cqi < 6.5)
															return 1.96289;
														else
														{
															if(ta < 13.5)
																return 0.727141;
															else
																return 1.35697;
														}
													}
													else
													{
														if(rsrq < -14.5)
															return 2.22922;
														else
															return 3.79381;
													}
												}
												else
												{
													if(ta < 13.5)
													{
														if(sinr < 5)
															return 9.48742;
														else
															return 3.1560781818;
													}
													else
														return 0.7982119474;
												}
											}
											else
											{
												if(payload < 2.5)
												{
													if(velocity < 11.165)
													{
														if(sinr < 2)
															return 3.64797;
														else
															return 3.11102;
													}
													else
													{
														if(ta < 14.5)
															return 0.7668965;
														else
															return 2.4666036842;
													}
												}
												else
												{
													if(rsrp < -105.5)
														return 2.8472847368;
													else
													{
														if(ta < 14.5)
														{
															if(rsrq < -12.5)
																return 9.44882;
															else
																return 6.96409;
														}
														else
														{
															if(rsrp < -94.5)
																return 3.7648068421;
															else
															{
																if(velocity < 11.605)
																	return 4.180055;
																else
																	return 6.16491;
															}
														}
													}
												}
											}
										}
										else
										{
											if(ta < 14)
											{
												if(cqi < 9)
													return 7.048265;
												else
													return 5.6926;
											}
											else
												return 4.34075;
										}
									}
								}
								else
								{
									if(rsrp < -91.5)
										return 16.2767;
									else
										return 8.61605;
								}
							}
							else
								return 11.4313;
						}
					}
				}
				else
				{
					if(payload < 8.5)
					{
						if(cell < 13553922)
						{
							if(sinr < 4.5)
							{
								if(payload < 2.5)
								{
									if(velocity < 4.12)
									{
										if(f < 1347.5)
										{
											if(velocity < 1.875)
											{
												if(ta < 11)
													return 0.4390128333;
												else
												{
													if(sinr < -6.5)
														return 0.4982036667;
													else
														return 0.867601;
												}
											}
											else
												return 1.60032;
										}
										else
										{
											if(payload < 0.3)
												return 3.16207;
											else
											{
												if(rsrp < -103.5)
													return 1.01163;
												else
												{
													if(rsrp < -98)
													{
														if(payload < 0.75)
															return 2.10526;
														else
															return 2.59151;
													}
													else
													{
														if(ta < 13)
															return 1.67102;
														else
															return 1.26723;
													}
												}
											}
										}
									}
									else
									{
										if(cell < 13501326)
										{
											if(rsrp < -106)
												return 0.2030543333;
											else
											{
												if(rsrp < -98.5)
												{
													if(velocity < 15.06)
													{
														if(velocity < 13.02)
														{
															if(sinr < -6)
															{
																if(rsrp < -101.5)
																	return 0.884173;
																else
																	return 0.430804;
															}
															else
															{
																if(cqi < 4.5)
																	return 0.695169;
																else
																{
																	if(rsrp < -102.5)
																		return 1.68599;
																	else
																		return 0.9249366667;
																}
															}
														}
														else
															return 0.5045296;
													}
													else
													{
														if(ta < 8.5)
															return 1.86047;
														else
															return 1.46466;
													}
												}
												else
												{
													if(payload < 0.3)
													{
														if(rsrq < -13.5)
															return 0.774446;
														else
															return 0.18559675;
													}
													else
													{
														if(velocity < 15.6)
														{
															if(velocity < 11.825)
															{
																if(rsrq < -12.5)
																	return 0.4785125;
																else
																	return 1.0876324;
															}
															else
																return 0.3493882;
														}
														else
															return 1.30612;
													}
												}
											}
										}
										else
										{
											if(cqi < 3.5)
											{
												if(rsrp < -102.5)
													return 0.308914;
												else
												{
													if(sinr < -4.5)
														return 1.09081;
													else
														return 0.572861;
												}
											}
											else
												return 0.1565028421;
										}
									}
								}
								else
								{
									if(cqi < 5.5)
									{
										if(cell < 13524737.5)
										{
											if(ta < 9.5)
											{
												if(rsrp < -107.5)
												{
													if(cqi < 4.5)
														return 2.78009;
													else
														return 1.23008;
												}
												else
												{
													if(rsrq < -13.5)
														return 0.6697390769;
													else
													{
														if(velocity < 12.315)
														{
															if(ta < 7.5)
																return 1.400404;
															else
																return 0.826169;
														}
														else
															return 2.41929;
													}
												}
											}
											else
											{
												if(ta < 13)
												{
													if(rsrp < -97)
														return 8.33333;
													else
													{
														if(rsrp < -92)
															return 4.45541;
														else
															return 1.26036;
													}
												}
												else
												{
													if(rsrp < -97.5)
														return 1.0982;
													else
														return 2.246826;
												}
											}
										}
										else
										{
											if(cell < 13542402.5)
											{
												if(rsrp < -92)
												{
													if(velocity < 7.99)
													{
														if(rsrp < -97.5)
														{
															if(ta < 10)
																return 1.05026;
															else
																return 1.6027633333;
														}
														else
														{
															if(sinr < 2)
																return 0.5028315;
															else
																return 1.2954;
														}
													}
													else
													{
														if(sinr < -3.5)
														{
															if(rsrp < -99.5)
																return 0.6855013333;
															else
																return 1.78704;
														}
														else
															return 0.4696181667;
													}
												}
												else
													return 1.9682;
											}
											else
											{
												if(sinr < -4.5)
												{
													if(payload < 6.5)
													{
														if(payload < 5.5)
															return 0.58418;
														else
															return 1.0319;
													}
													else
													{
														if(ta < 13)
															return 2.26987;
														else
															return 1.82108;
													}
												}
												else
												{
													if(velocity < 12.44)
														return 0.953747;
													else
														return 0.55394;
												}
											}
										}
									}
									else
									{
										if(sinr < -1.5)
										{
											if(sinr < -3.5)
											{
												if(rsrq < -12.5)
													return 2.59923;
												else
													return 1.15699;
											}
											else
											{
												if(payload < 4.5)
													return 1.58463;
												else
												{
													if(payload < 5.5)
														return 5.64732;
													else
													{
														if(velocity < 12.525)
															return 4.11876;
														else
															return 3.46771;
													}
												}
											}
										}
										else
										{
											if(velocity < 1.325)
											{
												if(f < 1347.5)
													return 5.11727;
												else
												{
													if(ta < 12)
														return 2.27623;
													else
														return 2.74156;
												}
											}
											else
											{
												if(sinr < 0.5)
													return 0.590408;
												else
												{
													if(rsrp < -95.5)
													{
														if(sinr < 2.5)
														{
															if(cqi < 7.5)
																return 1.85744;
															else
																return 1.3432533333;
														}
														else
														{
															if(rsrp < -96.5)
																return 3.232235;
															else
																return 2.56363;
														}
													}
													else
													{
														if(rsrp < -89)
														{
															if(cqi < 7.5)
																return 0.5490175;
															else
																return 1.00821;
														}
														else
															return 2.14161;
													}
												}
											}
										}
									}
								}
							}
							else
							{
								if(velocity < 9.885)
								{
									if(f < 1347.5)
									{
										if(cqi < 9)
											return 10.4661;
										else
											return 7.28597;
									}
									else
										return 3.8187566667;
								}
								else
									return 0.7576395;
							}
						}
						else
						{
							if(f < 1347.5)
							{
								if(velocity < 30.875)
								{
									if(ta < 33)
									{
										if(rsrp < -106)
										{
											if(payload < 3.55)
												return 0.479906;
											else
												return 3.96488;
										}
										else
										{
											if(payload < 5.5)
											{
												if(ta < 11.5)
												{
													if(ta < 8.5)
													{
														if(cell < 14343450.5)
															return 1.4696986341;
														else
															return 0.515889;
													}
													else
														return 2.67559;
												}
												else
												{
													if(sinr < -3.5)
														return 0.3712080909;
													else
													{
														if(rsrp < -99.5)
														{
															if(rsrq < -14)
																return 0.24092;
															else
																return 0.734147;
														}
														else
														{
															if(sinr < 3.5)
															{
																if(rsrq < -13.5)
																{
																	if(ta < 16.5)
																		return 0.394069;
																	else
																		return 1.345025;
																}
																else
																{
																	if(payload < 0.55)
																		return 2.19781;
																	else
																	{
																		if(rsrp < -91.5)
																			return 0.993049;
																		else
																			return 1.43241;
																	}
																}
															}
															else
																return 0.438118;
														}
													}
												}
											}
											else
											{
												if(rsrq < -15.5)
													return 0.87691725;
												else
												{
													if(sinr < -2.5)
													{
														if(velocity < 4.13)
															return 3.67623;
														else
															return 2.2846881463;
													}
													else
													{
														if(rsrp < -96.5)
															return 1.2916275;
														else
														{
															if(rsrp < -94)
																return 2.2726;
															else
															{
																if(payload < 7.5)
																	return 1.82714;
																else
																	return 1.08465;
															}
														}
													}
												}
											}
										}
									}
									else
									{
										if(rsrp < -103.5)
										{
											if(velocity < 13.985)
												return 0.586876;
											else
											{
												if(cqi < 4.5)
												{
													if(rsrp < -108.5)
														return 5.47196;
													else
													{
														if(ta < 35)
															return 3.28426;
														else
															return 2.06719;
													}
												}
												else
												{
													if(payload < 4)
														return 0.541052;
													else
														return 2.50279;
												}
											}
										}
										else
										{
											if(ta < 37)
												return 3.32651;
											else
												return 8.53789;
										}
									}
								}
								else
								{
									if(ta < 12.5)
										return 3.37695;
									else
										return 4.7472142857;
								}
							}
							else
							{
								if(cell < 13884185.5)
								{
									if(cell < 13826841.5)
									{
										if(rsrq < -12.5)
										{
											if(sinr < 4.5)
											{
												if(payload < 2)
													return 2.30611;
												else
												{
													if(cqi < 7)
													{
														if(sinr < 2)
															return 4.00842;
														else
															return 3.4154;
													}
													else
														return 4.72534;
												}
											}
											else
											{
												if(sinr < 7.5)
													return 1.43812;
												else
													return 2.58398;
											}
										}
										else
										{
											if(payload < 4.5)
											{
												if(cqi < 10)
												{
													if(rsrp < -93.5)
														return 5.22278;
													else
													{
														if(payload < 0.55)
															return 5.47947;
														else
															return 6.02864;
													}
												}
												else
													return 4.16668;
											}
											else
												return 3.3442;
										}
									}
									else
									{
										if(payload < 6.5)
										{
											if(rsrq < -15)
											{
												if(rsrp < -105)
													return 0.458085;
												else
												{
													if(rsrp < -101.5)
														return 1.73297;
													else
														return 1.3563316667;
												}
											}
											else
											{
												if(sinr < -0.5)
												{
													if(payload < 1.5)
													{
														if(payload < 0.55)
															return 4.04042;
														else
														{
															if(velocity < 4.415)
																return 1.63199;
															else
																return 0.932727;
														}
													}
													else
													{
														if(payload < 2.5)
															return 6.76819;
														else
														{
															if(payload < 4)
																return 1.97645;
															else
															{
																if(payload < 5.5)
																	return 3.03099;
																else
																	return 3.65714;
															}
														}
													}
												}
												else
												{
													if(sinr < 4.5)
													{
														if(payload < 3.5)
														{
															if(cqi < 6)
																return 2.99775;
															else
															{
																if(rsrp < -96.5)
																	return 1.64626;
																else
																	return 2.2069;
															}
														}
														else
															return 1.576045;
													}
													else
														return 1.2745966667;
												}
											}
										}
										else
										{
											if(payload < 7.5)
											{
												if(rsrq < -12.5)
													return 5.95365;
												else
													return 7.13467;
											}
											else
												return 0.525374;
										}
									}
								}
								else
								{
									if(cell < 13884186.5)
										return 12.2652;
									else
									{
										if(rsrp < -107.5)
											return 13.8498;
										else
										{
											if(rsrp < -102.5)
												return 6.73212;
											else
											{
												if(sinr < 7)
												{
													if(cqi < 4.5)
														return 1.10448;
													else
													{
														if(sinr < -2)
															return 1.20355;
														else
															return 1.7540521827;
													}
												}
												else
													return 0.515889;
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if(sinr < -8.5)
							return 14.771;
						else
						{
							if(rsrq < -14.5)
							{
								if(velocity < 13.465)
								{
									if(cqi < 4.5)
									{
										if(rsrq < -16)
										{
											if(sinr < -6)
												return 0.908403;
											else
												return 2.01476;
										}
										else
											return 2.94491;
									}
									else
									{
										if(f < 1347.5)
										{
											if(ta < 10)
												return 2.47613;
											else
											{
												if(payload < 9.5)
													return 3.64834;
												else
													return 4.06607;
											}
										}
										else
											return 3.61918;
									}
								}
								else
								{
									if(sinr < -3)
										return 1.120205;
									else
										return 1.75786;
								}
							}
							else
							{
								if(cell < 13854873)
								{
									if(sinr < 6)
									{
										if(ta < 12)
										{
											if(cqi < 9.5)
											{
												if(velocity < 13.205)
												{
													if(rsrp < -104)
														return 2.84434;
													else
													{
														if(cell < 13418766.5)
														{
															if(rsrp < -99.5)
																return 0.514234;
															else
																return 0.898806;
														}
														else
														{
															if(rsrq < -13.5)
																return 2.64769;
															else
															{
																if(rsrp < -91.5)
																	return 1.50875;
																else
																	return 1.07152;
															}
														}
													}
												}
												else
												{
													if(sinr < 1.5)
														return 4.04881;
													else
														return 3.54296;
												}
											}
											else
												return 5.65411;
										}
										else
										{
											if(velocity < 13.985)
												return 5.132452;
											else
												return 4.37504;
										}
									}
									else
										return 0.807746;
								}
								else
								{
									if(rsrp < -95.5)
										return 15.7102;
									else
									{
										if(ta < 7.5)
											return 2.44707;
										else
										{
											if(velocity < 11.33)
												return 6.6968;
											else
												return 6.10376;
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
				if(sinr < 15.5)
				{
					if(velocity < 13.625)
					{
						if(rsrp < -99)
						{
							if(payload < 5)
								return 6.772725;
							else
								return 7.38007;
						}
						else
						{
							if(ta < 5.5)
								return 9.1359;
							else
								return 8.19672;
						}
					}
					else
					{
						if(cqi < 9.5)
							return 11.5345;
						else
							return 10.6201;
					}
				}
				else
					return 13.4605;
			}
		}
	}
	else
	{
		if(payload < 4.5)
		{
			if(rsrp < -86.5)
			{
				if(rsrq < -6.5)
				{
					if(cell < 14323732)
					{
						if(velocity < 0.565)
						{
							if(payload < 2.5)
							{
								if(payload < 1.5)
								{
									if(sinr < 8.5)
									{
										if(rsrq < -10.5)
										{
											if(payload < 0.75)
												return 8.83002;
											else
												return 5.37273;
										}
										else
										{
											if(rsrp < -92)
												return 0.369175;
											else
											{
												if(rsrq < -8.5)
												{
													if(ta < 1.5)
														return 4.02012;
													else
														return 2.303235;
												}
												else
													return 4.68933;
											}
										}
									}
									else
									{
										if(f < 1347.5)
											return 7.57576;
										else
										{
											if(ta < 3)
											{
												if(cqi < 12)
													return 3.72094;
												else
													return 5.87372;
											}
											else
											{
												if(rsrp < -93.5)
													return 5.71431;
												else
												{
													if(rsrp < -91.5)
														return 6.60611;
													else
														return 6.15715;
												}
											}
										}
									}
								}
								else
								{
									if(sinr < 10.5)
									{
										if(ta < 14)
											return 0.8947046667;
										else
											return 1.45059;
									}
									else
									{
										if(cqi < 7)
											return 6.70297;
										else
										{
											if(rsrp < -97.5)
												return 2.76865;
											else
												return 2.33134;
										}
									}
								}
							}
							else
							{
								if(sinr < 2)
									return 2.81426;
								else
								{
									if(rsrp < -107)
										return 15.8416;
									else
									{
										if(ta < 12.5)
										{
											if(rsrq < -8.5)
												return 12.9817;
											else
											{
												if(rsrp < -88)
													return 11.137475;
												else
													return 9.34579;
											}
										}
										else
										{
											if(rsrp < -95.5)
												return 5.09554;
											else
												return 8.18554;
										}
									}
								}
							}
						}
						else
						{
							if(rsrp < -90.5)
							{
								if(cqi < 11.5)
								{
									if(rsrp < -101.5)
									{
										if(rsrq < -8.5)
										{
											if(ta < 27)
											{
												if(rsrp < -110)
													return 2.08225;
												else
												{
													if(payload < 2.5)
													{
														if(cqi < 5.5)
															return 0.527983;
														else
														{
															if(rsrp < -108)
																return 2.1692;
															else
																return 1.2505783333;
														}
													}
													else
														return 1.69644;
												}
											}
											else
											{
												if(payload < 0.55)
													return 2.97399;
												else
													return 2.343045;
											}
										}
										else
										{
											if(velocity < 33.04)
											{
												if(rsrq < -7.5)
													return 0.503147;
												else
												{
													if(rsrp < -105)
														return 4.32434;
													else
														return 2.78843;
												}
											}
											else
												return 5.97015;
										}
									}
									else
									{
										if(cell < 13169416)
										{
											if(cell < 12909466.5)
											{
												if(cqi < 5.5)
												{
													if(payload < 1.05)
														return 3.38984;
													else
														return 8.63465;
												}
												else
												{
													if(rsrp < -96.5)
													{
														if(cell < 12903067)
														{
															if(velocity < 11.345)
																return 0.881348;
															else
															{
																if(rsrq < -10)
																	return 1.65529;
																else
																{
																	if(ta < 20)
																		return 3.75588;
																	else
																		return 1.90932;
																}
															}
														}
														else
															return 3.3197;
													}
													else
													{
														if(payload < 2.5)
														{
															if(velocity < 14.755)
															{
																if(rsrq < -10)
																	return 2.19715;
																else
																{
																	if(ta < 2.5)
																	{
																		if(sinr < 8)
																		{
																			if(rsrp < -93)
																				return 4.23282;
																			else
																				return 3.13727;
																		}
																		else
																			return 2.56451;
																	}
																	else
																	{
																		if(cqi < 10.5)
																		{
																			if(ta < 14.5)
																			{
																				if(velocity < 8.115)
																					return 3.68665;
																				else
																				{
																					if(sinr < 14)
																						return 4.73375;
																					else
																						return 3.899188;
																				}
																			}
																			else
																				return 4.73373;
																		}
																		else
																			return 5.80762;
																	}
																}
															}
															else
															{
																if(velocity < 16.79)
																{
																	if(payload < 0.75)
																		return 2.67023;
																	else
																	{
																		if(rsrq < -9)
																			return 2.97841;
																		else
																			return 1.8730866667;
																	}
																}
																else
																{
																	if(velocity < 17.425)
																		return 4.46929;
																	else
																	{
																		if(sinr < 6)
																			return 2.44387;
																		else
																			return 4.37637;
																	}
																}
															}
														}
														else
														{
															if(rsrq < -8)
															{
																if(velocity < 4.41)
																	return 1.43177;
																else
																{
																	if(rsrp < -93.5)
																	{
																		if(velocity < 17.15)
																			return 5.71531;
																		else
																			return 4.36126;
																	}
																	else
																	{
																		if(payload < 3.5)
																			return 4.33369;
																		else
																			return 2.94686;
																	}
																}
															}
															else
																return 10.5611;
														}
													}
												}
											}
											else
											{
												if(payload < 2.5)
												{
													if(ta < 5.5)
														return 6.95655;
													else
													{
														if(velocity < 10.525)
														{
															if(sinr < 3)
																return 3.76471;
															else
															{
																if(payload < 1.25)
																{
																	if(rsrp < -94.5)
																		return 2.23214;
																	else
																		return 1.62338;
																}
																else
																	return 2.34707;
															}
														}
														else
														{
															if(payload < 0.75)
															{
																if(ta < 12)
																{
																	if(rsrq < -9)
																		return 3.18726;
																	else
																		return 3.87794;
																}
																else
																	return 4.8485;
															}
															else
															{
																if(payload < 1.5)
																	return 5.62588;
																else
																	return 3.727;
															}
														}
													}
												}
												else
												{
													if(sinr < 12.5)
														return 12.7389;
													else
														return 5.62489;
												}
											}
										}
										else
										{
											if(cqi < 1.5)
												return 6.44468;
											else
											{
												if(cell < 13884162.5)
												{
													if(velocity < 4.415)
														return 6.34753;
													else
													{
														if(rsrp < -92)
														{
															if(cqi < 7.5)
															{
																if(cell < 13674242)
																	return 0.7224213333;
																else
																{
																	if(rsrq < -9.5)
																		return 1.64767;
																	else
																		return 1.041674;
																}
															}
															else
															{
																if(f < 1347.5)
																	return 1.48011;
																else
																	return 3.57462;
															}
														}
														else
														{
															if(payload < 1.5)
																return 1.38098;
															else
															{
																if(velocity < 12.195)
																{
																	if(payload < 3)
																		return 2.85816;
																	else
																		return 2.46723;
																}
																else
																	return 4.10678;
															}
														}
													}
												}
												else
												{
													if(cqi < 8)
													{
														if(sinr < 2.5)
															return 4.49522;
														else
														{
															if(sinr < 5.5)
																return 2.87735;
															else
																return 4.34546;
														}
													}
													else
													{
														if(payload < 0.55)
															return 1.12676;
														else
															return 3.8434125;
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
										if(payload < 1.25)
											return 7.44879;
										else
											return 9.54844;
									}
									else
									{
										if(cqi < 14.5)
										{
											if(velocity < 12.535)
											{
												if(rsrq < -9)
													return 5.19483;
												else
													return 6.81576;
											}
											else
											{
												if(rsrp < -106)
													return 3.39415;
												else
													return 3.01371;
											}
										}
										else
										{
											if(payload < 1.5)
											{
												if(rsrp < -106.5)
													return 6.9808;
												else
													return 3.2768966667;
											}
											else
											{
												if(sinr < 12)
													return 9.34216;
												else
													return 13.8648;
											}
										}
									}
								}
							}
							else
							{
								if(velocity < 11.675)
								{
									if(rsrp < -88.5)
									{
										if(ta < 13)
										{
											if(rsrq < -9.5)
											{
												if(f < 1347.5)
													return 6.83763;
												else
												{
													if(velocity < 4.56)
														return 3.1917;
													else
														return 1.58103;
												}
											}
											else
											{
												if(payload < 0.75)
												{
													if(rsrq < -8.5)
														return 3.43349;
													else
														return 1.15741;
												}
												else
												{
													if(velocity < 5.475)
													{
														if(sinr < 7)
															return 5.6612683333;
														else
															return 3.97022;
													}
													else
													{
														if(cqi < 9.5)
															return 5.29451;
														else
															return 10.1652;
													}
												}
											}
										}
										else
											return 9.93172;
									}
									else
									{
										if(payload < 3.5)
										{
											if(rsrp < -87.5)
											{
												if(payload < 2.5)
													return 2.02788;
												else
													return 0.821271;
											}
											else
											{
												if(sinr < 11)
													return 4.560235;
												else
												{
													if(payload < 1.5)
														return 2.24404;
													else
														return 2.64288;
												}
											}
										}
										else
										{
											if(velocity < 7.9)
												return 12.2605;
											else
												return 1.29445;
										}
									}
								}
								else
								{
									if(payload < 3.5)
									{
										if(sinr < 27)
										{
											if(f < 2262.5)
											{
												if(sinr < 3.5)
													return 1.8001166667;
												else
												{
													if(velocity < 16.235)
													{
														if(sinr < 7.5)
														{
															if(payload < 1.25)
															{
																if(velocity < 13.65)
																	return 5.25624;
																else
																	return 6.15385;
															}
															else
																return 4.4843;
														}
														else
														{
															if(cqi < 8.5)
																return 2.0435166667;
															else
															{
																if(cqi < 13)
																{
																	if(f < 1347.5)
																		return 2.96809;
																	else
																		return 3.7862316667;
																}
																else
																	return 5.96125;
															}
														}
													}
													else
													{
														if(sinr < 8.5)
															return 9.69305;
														else
														{
															if(cqi < 7.5)
																return 3.79867;
															else
																return 6.40002;
														}
													}
												}
											}
											else
											{
												if(cell < 13152141.5)
													return 9.48992;
												else
													return 6.0241;
											}
										}
										else
											return 11.3261;
									}
									else
									{
										if(sinr < 3.5)
											return 7.998;
										else
										{
											if(rsrq < -8)
											{
												if(sinr < 8.5)
													return 10.5332;
												else
													return 9.68816;
											}
											else
												return 11.9314;
										}
									}
								}
							}
						}
					}
					else
					{
						if(rsrp < -104.5)
						{
							if(velocity < 13.22)
							{
								if(payload < 3)
								{
									if(cqi < 7)
										return 4.857494;
									else
										return 4.15369;
								}
								else
								{
									if(rsrq < -8.5)
										return 6.75105;
									else
										return 5.28926;
								}
							}
							else
							{
								if(rsrq < -9)
									return 2.82611;
								else
									return 3.37554;
							}
						}
						else
						{
							if(sinr < 9.5)
							{
								if(sinr < 2.5)
								{
									if(payload < 1.25)
										return 6.0241;
									else
										return 6.93241;
								}
								else
								{
									if(cell < 14345742)
										return 10.337625;
									else
										return 12.0437;
								}
							}
							else
							{
								if(cqi < 11.5)
								{
									if(payload < 3.5)
									{
										if(cqi < 8)
											return 7.60456;
										else
										{
											if(cqi < 10.5)
											{
												if(sinr < 15.5)
												{
													if(ta < 5.5)
													{
														if(rsrq < -8.5)
															return 5.03147;
														else
															return 3.8528233333;
													}
													else
													{
														if(velocity < 6.925)
															return 4.76192;
														else
															return 6.65557;
													}
												}
												else
												{
													if(rsrp < -98)
													{
														if(rsrq < -9.5)
															return 6.35425;
														else
														{
															if(payload < 1.75)
																return 6.82594;
															else
																return 7.242;
														}
													}
													else
														return 5.54017;
												}
											}
											else
											{
												if(payload < 0.55)
													return 4.59772;
												else
													return 4.04449;
											}
										}
									}
									else
									{
										if(rsrp < -99.5)
											return 10.5995;
										else
											return 9.81896;
									}
								}
								else
								{
									if(ta < 5.5)
									{
										if(rsrp < -95)
										{
											if(rsrq < -7.5)
											{
												if(sinr < 23.5)
													return 14.9813;
												else
													return 9.45068;
											}
											else
											{
												if(velocity < 8.525)
													return 6.05602;
												else
												{
													if(velocity < 11.685)
														return 9.68523;
													else
														return 6.95652;
												}
											}
										}
										else
											return 16.1834;
									}
									else
									{
										if(payload < 0.75)
										{
											if(velocity < 9.165)
												return 7.07967;
											else
												return 5.64972;
										}
										else
											return 3.25071;
									}
								}
							}
						}
					}
				}
				else
				{
					if(sinr < 19.5)
					{
						if(cell < 12918810)
						{
							if(cqi < 11.5)
							{
								if(sinr < 13.5)
								{
									if(payload < 2.5)
									{
										if(payload < 1.05)
											return 7.20723;
										else
											return 4.75059;
									}
									else
										return 11.7763;
								}
								else
								{
									if(payload < 0.75)
										return 2.32423;
									else
									{
										if(rsrp < -90.5)
											return 5.12164;
										else
											return 4.41379;
									}
								}
							}
							else
							{
								if(ta < 13.5)
								{
									if(rsrp < -89.5)
									{
										if(cqi < 13.5)
										{
											if(velocity < 13.82)
											{
												if(sinr < 14)
													return 6.45422;
												else
													return 7.01754;
											}
											else
											{
												if(payload < 0.3)
													return 8.60218;
												else
													return 10.5263;
											}
										}
										else
											return 5.59441;
									}
									else
										return 14.6252;
								}
								else
									return 18.5615;
							}
						}
						else
						{
							if(cell < 13884186.5)
							{
								if(ta < 3)
								{
									if(cqi < 12.5)
										return 2.03926;
									else
										return 2.70088;
								}
								else
								{
									if(rsrp < -90.5)
									{
										if(rsrp < -96.5)
											return 5.013725;
										else
											return 4.5375475;
									}
									else
										return 3.29625;
								}
							}
							else
							{
								if(payload < 2.5)
								{
									if(payload < 0.75)
									{
										if(sinr < 11)
											return 2.46915;
										else
										{
											if(sinr < 14)
												return 8.69565;
											else
											{
												if(rsrp < -88.5)
													return 6.29921;
												else
													return 5.26318;
											}
										}
									}
									else
									{
										if(sinr < 16)
										{
											if(ta < 6.5)
												return 2.77008;
											else
												return 3.38002;
										}
										else
											return 5.54401;
									}
								}
								else
								{
									if(rsrp < -96.5)
									{
										if(cqi < 8)
											return 5.56586;
										else
											return 6.93692;
									}
									else
										return 9.74026;
								}
							}
						}
					}
					else
					{
						if(velocity < 20.605)
						{
							if(rsrp < -91)
							{
								if(payload < 1.25)
								{
									if(velocity < 14.335)
									{
										if(rsrq < -5.5)
											return 9.30236;
										else
											return 8.60218;
									}
									else
										return 7.27273;
								}
								else
									return 3.8391475;
							}
							else
							{
								if(rsrp < -87.5)
									return 15.534;
								else
									return 7.45226;
							}
						}
						else
						{
							if(sinr < 20.5)
								return 15.4515;
							else
							{
								if(payload < 3)
									return 20;
								else
									return 20.7388;
							}
						}
					}
				}
			}
			else
			{
				if(payload < 2.5)
				{
					if(sinr < 27.5)
					{
						if(cell < 12909466)
						{
							if(ta < 12.5)
							{
								if(cqi < 9.5)
								{
									if(ta < 1.5)
									{
										if(velocity < 13.94)
										{
											if(rsrp < -81)
												return 4.21054;
											else
												return 6.13497;
										}
										else
										{
											if(velocity < 15.81)
											{
												if(velocity < 15.035)
													return 3.21673;
												else
													return 4.99376;
											}
											else
												return 3.29218;
										}
									}
									else
									{
										if(rsrp < -80.5)
										{
											if(f < 2262.5)
											{
												if(cqi < 8.5)
													return 8.69565;
												else
													return 8.04829;
											}
											else
												return 6.13732;
										}
										else
											return 6.48824;
									}
								}
								else
								{
									if(cell < 12899848)
									{
										if(velocity < 16.025)
										{
											if(rsrp < -69.5)
											{
												if(rsrp < -83.5)
													return 4.96896;
												else
												{
													if(velocity < 15.52)
													{
														if(sinr < 23)
														{
															if(ta < 6.5)
															{
																if(cell < 12896782)
																	return 3.49956;
																else
																{
																	if(velocity < 5.115)
																		return 0.759842;
																	else
																		return 1.43472;
																}
															}
															else
															{
																if(cqi < 11)
																{
																	if(cell < 12898317.5)
																		return 3.41588;
																	else
																		return 3.92157;
																}
																else
																{
																	if(rsrp < -75)
																	{
																		if(payload < 1.5)
																			return 1.81252;
																		else
																			return 3.50186;
																	}
																	else
																	{
																		if(rsrq < -6.5)
																			return 2.91971;
																		else
																			return 3.713235;
																	}
																}
															}
														}
														else
															return 5.22878;
													}
													else
													{
														if(payload < 1.5)
															return 3.60198;
														else
															return 6.95048;
													}
												}
											}
											else
											{
												if(cell < 12896781)
												{
													if(rsrp < -64.5)
														return 3.87222;
													else
														return 2.77971;
												}
												else
												{
													if(sinr < 19.5)
													{
														if(ta < 8.5)
														{
															if(velocity < 1.59)
																return 3.72094;
															else
																return 5.46075;
														}
														else
															return 3.57144;
													}
													else
													{
														if(payload < 0.75)
															return 8.08081;
														else
															return 6.3745;
													}
												}
											}
										}
										else
										{
											if(velocity < 16.76)
												return 2.331;
											else
												return 3.51803;
										}
									}
									else
									{
										if(rsrq < -7.5)
										{
											if(velocity < 6.31)
												return 7.14605;
											else
												return 7.74818;
										}
										else
											return 5.40543;
									}
								}
							}
							else
							{
								if(velocity < 5.48)
								{
									if(rsrp < -68.5)
										return 11.0193;
									else
									{
										if(rsrp < -67)
											return 4.89596;
										else
											return 10.9589;
									}
								}
								else
								{
									if(velocity < 35.07)
									{
										if(f < 1347.5)
											return 2.86328;
										else
										{
											if(rsrp < -85.5)
												return 4.23841;
											else
											{
												if(rsrq < -6.5)
													return 5.1181525;
												else
												{
													if(velocity < 12.785)
														return 6.28437;
													else
														return 5.82242;
												}
											}
										}
									}
									else
										return 8.13008;
								}
							}
						}
						else
						{
							if(rsrp < -83.5)
							{
								if(payload < 1.5)
								{
									if(sinr < 12.5)
									{
										if(f < 2262.5)
										{
											if(velocity < 14.23)
											{
												if(velocity < 12.61)
												{
													if(payload < 0.55)
													{
														if(rsrp < -85.5)
															return 3.70372;
														else
															return 4.59772;
													}
													else
													{
														if(velocity < 10.395)
															return 1.94363;
														else
															return 2.5;
													}
												}
												else
													return 6.21601;
											}
											else
											{
												if(sinr < 8)
												{
													if(sinr < 1)
														return 1.77069;
													else
														return 1.13395;
												}
												else
													return 4;
											}
										}
										else
											return 0.48852;
									}
									else
									{
										if(ta < 12.5)
										{
											if(rsrq < -9.5)
												return 4.21054;
											else
											{
												if(rsrp < -85)
													return 5.73888;
												else
												{
													if(cqi < 8)
														return 5.24246;
													else
														return 4.46927;
												}
											}
										}
										else
											return 8.16327;
									}
								}
								else
								{
									if(velocity < 11.73)
									{
										if(sinr < 15)
										{
											if(rsrp < -85.5)
												return 9.35126;
											else
												return 8.28586;
										}
										else
											return 11.5858;
									}
									else
									{
										if(ta < 9.5)
											return 5.67779;
										else
											return 7.50117;
									}
								}
							}
							else
							{
								if(velocity < 14.145)
								{
									if(ta < 12.5)
									{
										if(sinr < 4.5)
											return 1.829995;
										else
										{
											if(rsrp < -78.5)
											{
												if(ta < 0.5)
													return 8.43882;
												else
												{
													if(payload < 1.5)
													{
														if(payload < 0.75)
														{
															if(f < 1347.5)
															{
																if(rsrq < -7.5)
																	return 4.67838;
																else
																	return 5.29801;
															}
															else
																return 3.9403642857;
														}
														else
															return 6.4;
													}
													else
													{
														if(cqi < 12.5)
														{
															if(rsrp < -80.5)
																return 3.7426866667;
															else
																return 3.16832;
														}
														else
															return 5.39447;
													}
												}
											}
											else
											{
												if(rsrq < -6.5)
												{
													if(cqi < 12.5)
													{
														if(velocity < 10.8)
														{
															if(ta < 2)
																return 4.58453;
															else
															{
																if(rsrq < -8.5)
																	return 7.7557;
																else
																{
																	if(sinr < 14)
																		return 8.99888;
																	else
																		return 9.63275;
																}
															}
														}
														else
															return 12.7389;
													}
													else
													{
														if(velocity < 11.49)
															return 4.78469;
														else
															return 3.87222;
													}
												}
												else
												{
													if(cqi < 11.5)
													{
														if(rsrq < -5.5)
															return 4.92156;
														else
															return 3.9684066667;
													}
													else
													{
														if(ta < 8.5)
														{
															if(ta < 6)
															{
																if(payload < 0.3)
																	return 4.6243;
																else
																	return 7.35176;
															}
															else
																return 10.2828;
														}
														else
														{
															if(cqi < 14)
																return 3.58746;
															else
															{
																if(rsrp < -66.5)
																	return 5.26318;
																else
																	return 5.79712;
															}
														}
													}
												}
											}
										}
									}
									else
										return 12.8102;
								}
								else
								{
									if(sinr < 17)
									{
										if(velocity < 33.18)
										{
											if(rsrp < -75.5)
											{
												if(ta < 7.5)
												{
													if(cqi < 12.5)
													{
														if(velocity < 14.745)
															return 4.67973;
														else
														{
															if(rsrq < -9)
																return 3.89105;
															else
																return 3.1023666667;
														}
													}
													else
													{
														if(rsrp < -78.5)
															return 4.14938;
														else
															return 5.40543;
													}
												}
												else
												{
													if(cell < 13401486)
													{
														if(payload < 0.75)
															return 7.20721;
														else
															return 11.3154;
													}
													else
													{
														if(sinr < 15.5)
															return 4.08685;
														else
															return 6.51164;
													}
												}
											}
											else
											{
												if(rsrp < -74)
													return 7.67386;
												else
													return 9.30236;
											}
										}
										else
										{
											if(velocity < 35.695)
											{
												if(velocity < 34.92)
												{
													if(cell < 14301698)
														return 10.4987;
													else
														return 9.85222;
												}
												else
												{
													if(velocity < 35.065)
														return 8.08898;
													else
														return 8.60218;
												}
											}
											else
												return 12.6382;
										}
									}
									else
									{
										if(velocity < 22.645)
										{
											if(rsrp < -81)
											{
												if(cell < 12914202.5)
													return 14.3756;
												else
												{
													if(sinr < 21)
														return 12.71508;
													else
														return 11.9048;
												}
											}
											else
											{
												if(cell < 12914202)
												{
													if(ta < 3)
														return 9.1954;
													else
														return 9.68523;
												}
												else
												{
													if(rsrp < -77)
													{
														if(rsrp < -79.5)
															return 5.4422;
														else
															return 4.81493;
													}
													else
													{
														if(payload < 1.25)
															return 7.31261;
														else
															return 7.91687;
													}
												}
											}
										}
										else
										{
											if(velocity < 28.795)
											{
												if(rsrq < -5.5)
													return 3.69004;
												else
													return 5.71837;
											}
											else
											{
												if(rsrp < -68)
												{
													if(payload < 0.3)
														return 8.51067;
													else
													{
														if(cell < 14301698)
															return 9.50119;
														else
															return 10.3093;
													}
												}
												else
													return 12.1581;
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
							if(cell < 13610254)
							{
								if(velocity < 15.695)
								{
									if(payload < 1.5)
										return 7.33945;
									else
										return 9.60961;
								}
								else
									return 4.81203;
							}
							else
							{
								if(sinr < 32)
									return 5.67378;
								else
									return 6.31164;
							}
						}
						else
						{
							if(velocity < 7.39)
							{
								if(payload < 0.55)
									return 4.16668;
								else
									return 4.64576;
							}
							else
							{
								if(rsrp < -68)
								{
									if(payload < 1.5)
									{
										if(rsrp < -74.5)
											return 17.316;
										else
										{
											if(payload < 0.75)
												return 14.5455;
											else
												return 17.0576;
										}
									}
									else
										return 18.2857;
								}
								else
								{
									if(rsrq < -4.5)
									{
										if(velocity < 23.045)
											return 8.51067;
										else
											return 11.236;
									}
									else
									{
										if(ta < 9)
											return 16.9133;
										else
											return 11.6959;
									}
								}
							}
						}
					}
				}
				else
				{
					if(cell < 13404045)
					{
						if(sinr < 8.5)
						{
							if(rsrq < -9.5)
							{
								if(cell < 12903193)
									return 6.8699;
								else
									return 5.4127;
							}
							else
								return 3.91956;
						}
						else
						{
							if(velocity < 15.635)
							{
								if(velocity < 10.2)
								{
									if(ta < 13)
									{
										if(cell < 12898317.5)
										{
											if(velocity < 3.15)
												return 5.139445;
											else
											{
												if(payload < 3.5)
													return 7.19856;
												else
													return 8.10537;
											}
										}
										else
										{
											if(payload < 3.5)
											{
												if(cell < 12904724.5)
													return 9.42115;
												else
													return 9.97506;
											}
											else
												return 12.5737;
										}
									}
									else
										return 13.1796;
								}
								else
								{
									if(rsrq < -7.5)
									{
										if(rsrp < -68)
										{
											if(payload < 3.5)
											{
												if(ta < 7.5)
												{
													if(velocity < 12.52)
														return 5.38721;
													else
													{
														if(velocity < 13.485)
															return 3.47222;
														else
															return 4.722188;
													}
												}
												else
													return 3.78788;
											}
											else
												return 0.976294;
										}
										else
											return 7.1921933333;
									}
									else
									{
										if(cell < 12918809.5)
										{
											if(cell < 12903193.5)
											{
												if(sinr < 18.5)
													return 2.63071;
												else
												{
													if(cell < 12896793.5)
													{
														if(payload < 3.5)
															return 9.72053;
														else
															return 8.13215;
													}
													else
														return 5.26431;
												}
											}
											else
											{
												if(cell < 12914201.5)
												{
													if(sinr < 9.5)
														return 7.73694;
													else
													{
														if(sinr < 14)
															return 15.2769;
														else
															return 16.7481;
													}
												}
												else
												{
													if(payload < 3.5)
														return 7.32601;
													else
														return 10.306;
												}
											}
										}
										else
										{
											if(f < 2262.5)
												return 5.87372;
											else
												return 3.13316;
										}
									}
								}
							}
							else
							{
								if(velocity < 20.935)
								{
									if(rsrq < -5)
									{
										if(ta < 3)
										{
											if(payload < 3.5)
												return 14.0351;
											else
												return 13.0346;
										}
										else
										{
											if(rsrp < -81.5)
												return 16.2933;
											else
												return 17.1858;
										}
									}
									else
										return 20.8605;
								}
								else
								{
									if(rsrp < -84.5)
										return 6.04686;
									else
									{
										if(rsrq < -6.5)
											return 6.87013;
										else
										{
											if(sinr < 26.5)
											{
												if(payload < 3.5)
													return 13.1507;
												else
													return 15.9046;
											}
											else
												return 8.330535;
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
							if(velocity < 7.87)
							{
								if(rsrp < -84.5)
									return 11.3744;
								else
								{
									if(sinr < 17.5)
										return 20.0334;
									else
									{
										if(ta < 3.5)
											return 13.3835;
										else
										{
											if(rsrp < -82.5)
												return 16.3934;
											else
												return 17.35775;
										}
									}
								}
							}
							else
							{
								if(velocity < 9.88)
									return 1.39264;
								else
								{
									if(rsrp < -77)
									{
										if(rsrp < -79)
										{
											if(velocity < 26.035)
											{
												if(rsrq < -7.5)
												{
													if(sinr < 22.5)
													{
														if(rsrp < -84)
															return 11.0155;
														else
														{
															if(sinr < 12)
																return 12.3172;
															else
																return 11.92835;
														}
													}
													else
														return 10.3448;
												}
												else
												{
													if(velocity < 12.755)
														return 9.55224;
													else
														return 6.27615;
												}
											}
											else
												return 15.0376;
										}
										else
											return 16.2767;
									}
									else
									{
										if(rsrq < -7.5)
										{
											if(payload < 3.5)
												return 10.7431;
											else
												return 13.1796;
										}
										else
										{
											if(velocity < 14.37)
												return 10.1652;
											else
												return 6.636595;
										}
									}
								}
							}
						}
						else
						{
							if(rsrp < -72.5)
							{
								if(sinr < 23)
								{
									if(sinr < 6.5)
										return 6.10532;
									else
									{
										if(cqi < 13.5)
										{
											if(cqi < 6)
												return 15.4143;
											else
											{
												if(ta < 8.5)
												{
													if(cqi < 11)
														return 7.90709;
													else
														return 8.72172;
												}
												else
												{
													if(sinr < 14)
													{
														if(cqi < 8)
															return 5.17799;
														else
														{
															if(rsrp < -77)
															{
																if(sinr < 9.5)
																	return 11.5607;
																else
																	return 11.1317;
															}
															else
																return 10.3181;
														}
													}
													else
													{
														if(rsrp < -85.5)
															return 11.6167;
														else
															return 12.3098333333;
													}
												}
											}
										}
										else
											return 15.748;
									}
								}
								else
									return 5.75402;
							}
							else
							{
								if(rsrq < -7)
								{
									if(rsrp < -67)
										return 6.37196;
									else
										return 5.88885;
								}
								else
								{
									if(sinr < 24.5)
										return 6.84638;
									else
										return 10.3292;
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
				if(sinr < 8.5)
				{
					if(cell < 13884161.5)
					{
						if(velocity < 38.275)
						{
							if(f < 2262.5)
							{
								if(cell < 13828121.5)
								{
									if(cqi < 6.5)
									{
										if(rsrp < -89.5)
										{
											if(velocity < 15.5)
											{
												if(payload < 8.5)
												{
													if(sinr < 1)
													{
														if(ta < 6)
															return 4.3952;
														else
															return 9.81354;
													}
													else
													{
														if(f < 1347.5)
															return 0.6180483333;
														else
														{
															if(rsrq < -8.5)
															{
																if(cell < 13660569)
																{
																	if(velocity < 13.275)
																		return 2.99401;
																	else
																	{
																		if(ta < 8.5)
																			return 2.33483;
																		else
																			return 2.92951;
																	}
																}
																else
																	return 5.28402;
															}
															else
															{
																if(rsrp < -92.5)
																{
																	if(ta < 5.5)
																		return 6.33341;
																	else
																		return 5.2168325;
																}
																else
																	return 7.52587;
															}
														}
													}
												}
												else
												{
													if(ta < 2)
														return 2.60748;
													else
													{
														if(cell < 12914203)
														{
															if(rsrq < -8.5)
															{
																if(rsrp < -93.5)
																	return 5.81301;
																else
																	return 6.71535;
															}
															else
																return 8.34396;
														}
														else
														{
															if(velocity < 5.345)
																return 6.81489;
															else
															{
																if(payload < 9.5)
																	return 14.0488;
																else
																	return 10.3292;
															}
														}
													}
												}
											}
											else
											{
												if(ta < 12)
												{
													if(sinr < -1.5)
														return 8.79282;
													else
														return 10.4597666667;
												}
												else
												{
													if(cell < 13650830.5)
														return 5.4649;
													else
														return 6.1543966667;
												}
											}
										}
										else
										{
											if(cell < 13650830)
											{
												if(ta < 0.5)
													return 5.5788;
												else
												{
													if(payload < 5.5)
														return 9.38527;
													else
													{
														if(sinr < -3.5)
															return 7.5594;
														else
															return 8.35655;
													}
												}
											}
											else
											{
												if(f < 1347.5)
												{
													if(rsrp < -84.5)
														return 12.7247;
													else
														return 11.7302;
												}
												else
													return 9.37866;
											}
										}
									}
									else
									{
										if(rsrp < -109)
											return 19.0099;
										else
										{
											if(sinr < 2.5)
											{
												if(payload < 7.5)
												{
													if(cell < 12896910.5)
														return 13.1517;
													else
													{
														if(sinr < -1.5)
															return 4.3071;
														else
														{
															if(rsrq < -8.5)
																return 9.0537833333;
															else
															{
																if(velocity < 23.16)
																	return 7.02157;
																else
																	return 8.45219;
															}
														}
													}
												}
												else
												{
													if(sinr < -3)
														return 11.118;
													else
													{
														if(velocity < 6.77)
															return 6.45552;
														else
														{
															if(ta < 12.5)
																return 3.4233575;
															else
																return 4.7784;
														}
													}
												}
											}
											else
											{
												if(rsrp < -90.5)
												{
													if(rsrp < -101.5)
													{
														if(payload < 8)
														{
															if(rsrp < -104)
																return 3.25512;
															else
																return 2.63259;
														}
														else
															return 9.6911;
													}
													else
													{
														if(rsrp < -97)
														{
															if(rsrp < -99.5)
																return 14.4092;
															else
																return 11.2045;
														}
														else
														{
															if(ta < 10)
															{
																if(cqi < 10.5)
																{
																	if(payload < 5.5)
																		return 5.04668;
																	else
																	{
																		if(cell < 12903194.5)
																		{
																			if(rsrq < -10)
																				return 12.0998;
																			else
																			{
																				if(velocity < 9)
																					return 7.62995;
																				else
																					return 4.87329;
																			}
																		}
																		else
																			return 5.4961233333;
																	}
																}
																else
																	return 10.0503;
															}
															else
															{
																if(velocity < 14.25)
																{
																	if(payload < 9)
																		return 14.4079;
																	else
																		return 10.6809;
																}
																else
																{
																	if(rsrp < -94.5)
																		return 8.56837;
																	else
																		return 6.7886166667;
																}
															}
														}
													}
												}
												else
												{
													if(ta < 3.5)
													{
														if(velocity < 15.73)
														{
															if(payload < 8)
															{
																if(payload < 6.5)
																	return 13.8129;
																else
																	return 14.433;
															}
															else
																return 6.69083;
														}
														else
														{
															if(rsrq < -8.5)
																return 18.2163;
															else
																return 16.4914;
														}
													}
													else
													{
														if(payload < 6.5)
														{
															if(rsrp < -82)
																return 10.8932;
															else
															{
																if(rsrq < -8.5)
																	return 14.3326;
																else
																	return 13.7773;
															}
														}
														else
														{
															if(cqi < 11.5)
															{
																if(cell < 12903193)
																{
																	if(payload < 9.5)
																		return 14.7692;
																	else
																	{
																		if(rsrp < -80)
																			return 9.5454;
																		else
																			return 10.5862;
																	}
																}
																else
																{
																	if(rsrp < -83)
																		return 10.1266;
																	else
																	{
																		if(rsrp < -79.5)
																			return 8.88999;
																		else
																			return 8.1639322222;
																	}
																}
															}
															else
															{
																if(payload < 8.5)
																	return 5.15227;
																else
																	return 3.48114;
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
									if(f < 1347.5)
										return 2.35623;
									else
										return 1.67098;
								}
							}
							else
							{
								if(sinr < 0.5)
									return 8.09717;
								else
								{
									if(rsrp < -82.5)
									{
										if(ta < 0.5)
											return 12.3195;
										else
										{
											if(rsrq < -7.5)
												return 14.2433;
											else
												return 13.3891;
										}
									}
									else
									{
										if(rsrp < -80.5)
											return 17.8685;
										else
											return 15.3355;
									}
								}
							}
						}
						else
							return 18.9524;
					}
					else
					{
						if(rsrp < -107.5)
						{
							if(sinr < 3)
								return 1.34211;
							else
								return 2.12508;
						}
						else
						{
							if(sinr < 2.5)
							{
								if(ta < 23)
								{
									if(cell < 14301709)
									{
										if(payload < 8)
											return 10.6121;
										else
											return 9.95988;
									}
									else
									{
										if(cqi < 5)
											return 11.4309;
										else
											return 13.3111;
									}
								}
								else
								{
									if(payload < 9.5)
										return 2.413285;
									else
										return 6.27303;
								}
							}
							else
							{
								if(rsrp < -88.5)
								{
									if(cqi < 8.5)
									{
										if(payload < 7)
										{
											if(rsrp < -98.5)
											{
												if(rsrp < -103)
													return 13.7339;
												else
													return 12.3235;
											}
											else
												return 16.6263;
										}
										else
										{
											if(rsrp < -103)
												return 15.5604;
											else
											{
												if(cell < 14114965)
												{
													if(payload < 8.5)
														return 17.1812;
													else
														return 18.799;
												}
												else
													return 20.48;
											}
										}
									}
									else
									{
										if(velocity < 13.745)
										{
											if(cell < 14114963.5)
												return 14.3541;
											else
												return 11.1966;
										}
										else
											return 7.77238;
									}
								}
								else
								{
									if(f < 1347.5)
									{
										if(cqi < 13)
										{
											if(payload < 8.5)
												return 14.9673;
											else
												return 13.7876666667;
										}
										else
											return 7.51997;
									}
									else
										return 3.9863;
								}
							}
						}
					}
				}
				else
				{
					if(rsrq < -9.5)
					{
						if(velocity < 0.395)
						{
							if(rsrq < -10.5)
							{
								if(rsrp < -92.5)
								{
									if(cqi < 10.5)
										return 13.6016;
									else
									{
										if(payload < 8)
											return 7.25185;
										else
											return 8.71555;
									}
								}
								else
								{
									if(payload < 6)
										return 19.0295;
									else
									{
										if(rsrp < -81)
											return 14.6138;
										else
											return 15.0858;
									}
								}
							}
							else
							{
								if(cqi < 11.5)
									return 19.2446;
								else
									return 24.2241;
							}
						}
						else
						{
							if(cqi < 8.5)
							{
								if(rsrp < -107.5)
									return 1.33645;
								else
								{
									if(cqi < 7.5)
									{
										if(cell < 14323720)
										{
											if(cell < 12896782)
												return 7.54984;
											else
											{
												if(cqi < 6.5)
													return 5.7085;
												else
												{
													if(payload < 9)
														return 4.5623;
													else
														return 5.77909;
												}
											}
										}
										else
											return 8.51064;
									}
									else
										return 3.48905;
								}
							}
							else
							{
								if(f < 2262.5)
								{
									if(rsrq < -10.5)
									{
										if(payload < 9.5)
										{
											if(ta < 1.5)
											{
												if(sinr < 10.5)
													return 17.3223;
												else
													return 6.36352;
											}
											else
											{
												if(ta < 3)
												{
													if(velocity < 10.98)
														return 4.33276;
													else
														return 10.16;
												}
												else
												{
													if(cell < 12914202)
													{
														if(sinr < 16.5)
														{
															if(rsrp < -82.5)
																return 8.39983;
															else
															{
																if(payload < 6.5)
																	return 5.44144;
																else
																	return 8.07877;
															}
														}
														else
														{
															if(payload < 7.5)
																return 5.02287;
															else
																return 6.10571;
														}
													}
													else
													{
														if(velocity < 11.8)
															return 1.9712566102;
														else
														{
															if(payload < 8.5)
																return 2.98382;
															else
																return 2.47917;
														}
													}
												}
											}
										}
										else
										{
											if(cell < 13352974)
											{
												if(velocity < 10.4)
												{
													if(sinr < 23.5)
														return 9.94036;
													else
														return 9.52041;
												}
												else
													return 8.17912;
											}
											else
												return 12.7755;
										}
									}
									else
									{
										if(velocity < 8.91)
										{
											if(sinr < 20.5)
												return 12.6084;
											else
												return 15.1515;
										}
										else
										{
											if(cell < 13366299)
											{
												if(cell < 12903066.5)
												{
													if(velocity < 12.755)
													{
														if(payload < 6.5)
															return 9.06618;
														else
															return 8.09;
													}
													else
														return 11.2694;
												}
												else
												{
													if(payload < 8.5)
														return 5.49504;
													else
														return 7.69527;
												}
											}
											else
											{
												if(velocity < 10.92)
													return 13.1183;
												else
												{
													if(ta < 11.5)
														return 11.415;
													else
														return 9.64785;
												}
											}
										}
									}
								}
								else
								{
									if(cell < 13873941)
									{
										if(cell < 13403413)
											return 12.9874688525;
										else
											return 22.9812;
									}
									else
									{
										if(cell < 14344596)
											return 2.160065;
										else
										{
											if(velocity < 14.08)
											{
												if(velocity < 11.86)
													return 11.9225;
												else
													return 10.0939;
											}
											else
												return 14.553;
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
							if(f < 2262.5)
							{
								if(rsrp < -67.5)
								{
									if(cell < 13856143)
									{
										if(ta < 13.5)
										{
											if(ta < 11.5)
											{
												if(velocity < 11.655)
												{
													if(rsrq < -8.5)
													{
														if(rsrp < -90)
															return 10.6649;
														else
														{
															if(velocity < 4.44)
																return 7.030025;
															else
																return 3.72411;
														}
													}
													else
													{
														if(rsrp < -75)
														{
															if(velocity < 8.985)
															{
																if(payload < 7.5)
																{
																	if(cell < 12896781.5)
																		return 7.59253;
																	else
																	{
																		if(sinr < 11.5)
																			return 10.9619;
																		else
																		{
																			if(payload < 5.5)
																				return 11.9225;
																			else
																				return 12.3838;
																		}
																	}
																}
																else
																{
																	if(cell < 12896793.5)
																	{
																		if(ta < 10.5)
																			return 14.3081;
																		else
																			return 7.94538;
																	}
																	else
																	{
																		if(rsrp < -85.5)
																			return 9.2199266667;
																		else
																			return 7.45834;
																	}
																}
															}
															else
															{
																if(rsrp < -89)
																	return 8.25783;
																else
																{
																	if(payload < 5.5)
																		return 6.14628;
																	else
																		return 6.89457;
																}
															}
														}
														else
														{
															if(sinr < 24)
															{
																if(cqi < 10)
																	return 5.32623;
																else
																	return 5.83354;
															}
															else
																return 12.1704;
														}
													}
												}
												else
												{
													if(cell < 12896793.5)
													{
														if(rsrp < -73.5)
														{
															if(rsrp < -77.5)
																return 16.6182;
															else
																return 15.8455;
														}
														else
															return 13.2144;
													}
													else
													{
														if(sinr < 31.5)
														{
															if(rsrp < -101)
															{
																if(velocity < 21.155)
																	return 3.10301;
																else
																	return 4.21496;
															}
															else
															{
																if(rsrp < -95)
																	return 17.943;
																else
																{
																	if(sinr < 15.5)
																	{
																		if(velocity < 17.625)
																		{
																			if(cqi < 7)
																				return 14.9853;
																			else
																			{
																				if(velocity < 12.095)
																					return 13.3492;
																				else
																				{
																					if(rsrp < -76.5)
																					{
																						if(cell < 12914202)
																						{
																							if(cell < 12903193.5)
																								return 9.71817;
																							else
																								return 9.2182266667;
																						}
																						else
																						{
																							if(payload < 7.5)
																								return 8.9101;
																							else
																								return 16.5375;
																						}
																					}
																					else
																					{
																						if(payload < 6)
																							return 5.37418;
																						else
																							return 7.52688;
																					}
																				}
																			}
																		}
																		else
																		{
																			if(rsrq < -7.5)
																				return 6.63106;
																			else
																				return 6.2571233333;
																		}
																	}
																	else
																	{
																		if(payload < 7.5)
																		{
																			if(rsrp < -74.5)
																				return 10.8682;
																			else
																				return 9.62696;
																		}
																		else
																		{
																			if(sinr < 17)
																				return 12.7085;
																			else
																				return 12.31294;
																		}
																	}
																}
															}
														}
														else
															return 4.69759;
													}
												}
											}
											else
											{
												if(cqi < 10.5)
												{
													if(payload < 6.5)
													{
														if(sinr < 9.5)
															return 3.08147;
														else
														{
															if(rsrp < -73.5)
															{
																if(rsrp < -90.5)
																	return 7.30594;
																else
																	return 7.99201;
															}
															else
																return 9.78234;
														}
													}
													else
													{
														if(f < 1347.5)
															return 21.843;
														else
														{
															if(payload < 8.5)
															{
																if(payload < 7.5)
																{
																	if(ta < 12.5)
																		return 14.9254;
																	else
																		return 9.03663;
																}
																else
																	return 9.90252;
															}
															else
															{
																if(velocity < 13.655)
																{
																	if(sinr < 12)
																		return 13.1989;
																	else
																	{
																		if(rsrp < -85)
																			return 10.643;
																		else
																			return 11.8149;
																	}
																}
																else
																	return 14.6074;
															}
														}
													}
												}
												else
												{
													if(rsrp < -81)
													{
														if(velocity < 14.55)
															return 15.2338;
														else
															return 21.99875;
													}
													else
													{
														if(rsrq < -7.5)
															return 8.23893;
														else
														{
															if(rsrp < -75.5)
																return 12.1212;
															else
																return 10.772;
														}
													}
												}
											}
										}
										else
										{
											if(velocity < 14.86)
											{
												if(rsrq < -7.5)
													return 10.9664;
												else
												{
													if(cell < 12914074)
														return 7.70899;
													else
													{
														if(rsrp < -95)
															return 7.77454;
														else
															return 8.98876;
													}
												}
											}
											else
												return 4.81218;
										}
									}
									else
									{
										if(rsrp < -81)
										{
											if(velocity < 34.93)
											{
												if(cqi < 7)
												{
													if(rsrq < -8)
														return 15.3762;
													else
														return 10.8788;
												}
												else
												{
													if(ta < 10.5)
														return 17.6477;
													else
													{
														if(payload < 7.5)
															return 15.1467;
														else
															return 16.2565;
													}
												}
											}
											else
												return 7.09471;
										}
										else
										{
											if(cqi < 14.5)
												return 21.9479;
											else
												return 20.1222;
										}
									}
								}
								else
								{
									if(rsrq < -7.5)
									{
										if(ta < 12.5)
											return 22.1071;
										else
											return 25.2565;
									}
									else
									{
										if(rsrp < -65.5)
											return 18.06275;
										else
										{
											if(rsrp < -64.5)
												return 11.0752;
											else
												return 13.4499;
										}
									}
								}
							}
							else
							{
								if(cqi < 12.5)
								{
									if(cell < 13404045)
									{
										if(payload < 6)
											return 1.54071;
										else
											return 13.1332;
									}
									else
									{
										if(payload < 8.5)
										{
											if(rsrp < -80.5)
											{
												if(rsrp < -81.5)
												{
													if(ta < 2.5)
													{
														if(payload < 7.5)
															return 16.398225;
														else
															return 15.2989;
													}
													else
													{
														if(payload < 6.5)
														{
															if(sinr < 10.5)
																return 16.586;
															else
																return 14.7958;
														}
														else
														{
															if(cell < 14345742)
																return 14.559975;
															else
																return 12.6697;
														}
													}
												}
												else
													return 12.7157;
											}
											else
											{
												if(velocity < 6.605)
												{
													if(payload < 6.5)
														return 13.9413;
													else
														return 16.98;
												}
												else
													return 18.609325;
											}
										}
										else
										{
											if(rsrp < -101.5)
												return 17.3703;
											else
											{
												if(ta < 4.5)
													return 22.4579;
												else
													return 20.2077;
											}
										}
									}
								}
								else
								{
									if(sinr < 23.5)
									{
										if(velocity < 13.66)
										{
											if(rsrp < -94.5)
												return 6.49175;
											else
											{
												if(payload < 8)
												{
													if(rsrp < -82.5)
														return 12.2538;
													else
														return 12.975;
												}
												else
													return 11.5886;
											}
										}
										else
										{
											if(payload < 7)
												return 15.2381;
											else
												return 14.7738;
										}
									}
									else
									{
										if(cqi < 14)
											return 19.9203;
										else
											return 13.587;
									}
								}
							}
						}
						else
						{
							if(rsrp < -84.5)
							{
								if(cell < 12914202)
								{
									if(rsrp < -90.5)
									{
										if(velocity < 5.88)
											return 6.91264;
										else
											return 5.33725;
									}
									else
									{
										if(rsrp < -89)
											return 10.7368;
										else
											return 13.2472;
									}
								}
								else
								{
									if(cqi < 6.5)
										return 32.0384;
									else
									{
										if(velocity < 12.04)
										{
											if(ta < 5.5)
											{
												if(rsrq < -7.5)
												{
													if(rsrp < -86.5)
													{
														if(ta < 3.5)
															return 19.8708;
														else
															return 21.84;
													}
													else
														return 24.2498;
												}
												else
													return 31.0078;
											}
											else
											{
												if(ta < 10)
												{
													if(rsrp < -98.5)
														return 14.3911;
													else
														return 12.5117;
												}
												else
													return 19.7482;
											}
										}
										else
										{
											if(rsrp < -103)
											{
												if(sinr < 13.5)
													return 11.1794;
												else
													return 7.46826;
											}
											else
											{
												if(rsrp < -85.5)
												{
													if(rsrp < -87.5)
														return 16.40452;
													else
														return 17.1858;
												}
												else
													return 15.1;
											}
										}
									}
								}
							}
							else
							{
								if(velocity < 10.5)
									return 22.1484;
								else
								{
									if(cqi < 14)
									{
										if(sinr < 18)
										{
											if(velocity < 12.225)
												return 8.75848;
											else
											{
												if(rsrq < -8.5)
													return 10.2302;
												else
													return 10.7551571429;
											}
										}
										else
											return 14.4875;
									}
									else
									{
										if(rsrp < -68.5)
										{
											if(velocity < 15.425)
												return 15.0066;
											else
												return 14.2552;
										}
										else
											return 17.8731;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				if(cell < 12909466)
				{
					if(velocity < 6.76)
					{
						if(cell < 12896793.5)
						{
							if(velocity < 4.285)
								return 17.5055;
							else
							{
								if(rsrp < -76.5)
									return 21.8953;
								else
									return 20.2532;
							}
						}
						else
							return 9.72316;
					}
					else
					{
						if(f < 1347.5)
						{
							if(sinr < 22.5)
							{
								if(rsrq < -5.5)
									return 16.7286;
								else
									return 15.2417;
							}
							else
								return 8.2713;
						}
						else
						{
							if(payload < 7.5)
							{
								if(rsrp < -69.5)
								{
									if(sinr < 15)
									{
										if(rsrp < -81)
											return 7.17949;
										else
											return 7.91452;
									}
									else
										return 9.33022;
								}
								else
								{
									if(sinr < 18.5)
										return 5.54895;
									else
										return 6.17284;
								}
							}
							else
							{
								if(rsrq < -5.5)
								{
									if(sinr < 11.5)
									{
										if(payload < 9.5)
											return 4.42179;
										else
											return 6.29327;
									}
									else
									{
										if(velocity < 9.875)
										{
											if(cqi < 14.5)
												return 10.8043;
											else
												return 9.04722;
										}
										else
										{
											if(rsrp < -79)
											{
												if(sinr < 14)
													return 13.9342;
												else
													return 11.4531;
											}
											else
												return 9.50683;
										}
									}
								}
								else
									return 18.4067;
							}
						}
					}
				}
				else
				{
					if(cqi < 13.5)
					{
						if(sinr < 9.5)
						{
							if(rsrp < -74.5)
							{
								if(ta < 4.5)
								{
									if(rsrp < -88)
										return 23.0358;
									else
									{
										if(cqi < 8.5)
											return 30.5489;
										else
											return 27.8649;
									}
								}
								else
									return 20.0753;
							}
							else
								return 9.73236;
						}
						else
						{
							if(ta < 13.5)
							{
								if(velocity < 24.495)
								{
									if(sinr < 27.5)
									{
										if(rsrp < -87.5)
										{
											if(rsrp < -89.5)
											{
												if(rsrp < -96.5)
												{
													if(rsrp < -97.5)
													{
														if(velocity < 13.905)
															return 10.863;
														else
															return 11.3154;
													}
													else
													{
														if(velocity < 11.04)
															return 14.7977;
														else
														{
															if(cqi < 11.5)
																return 8.61605;
															else
																return 9.74421;
														}
													}
												}
												else
												{
													if(cell < 13401498.5)
													{
														if(payload < 7.5)
														{
															if(rsrp < -91.5)
																return 15.9257;
															else
																return 13.337;
														}
														else
														{
															if(rsrp < -95.5)
																return 17.229;
															else
																return 15.7449333333;
														}
													}
													else
													{
														if(sinr < 16)
														{
															if(cell < 13884186.5)
															{
																if(cqi < 10.5)
																	return 14.1374;
																else
																{
																	if(payload < 8)
																		return 13.6054;
																	else
																		return 6.46726;
																}
															}
															else
															{
																if(payload < 6.5)
																	return 6.7086;
																else
																	return 7.66179;
															}
														}
														else
														{
															if(cqi < 9)
																return 11.7492;
															else
															{
																if(payload < 5.5)
																	return 14.9589;
																else
																	return 16.7131;
															}
														}
													}
												}
											}
											else
											{
												if(cqi < 11.5)
												{
													if(ta < 5)
														return 13.7741;
													else
														return 8.92857;
												}
												else
													return 4.96702;
											}
										}
										else
										{
											if(rsrp < -75.5)
											{
												if(cell < 13884174.5)
												{
													if(cell < 13613716)
													{
														if(rsrp < -83.5)
														{
															if(sinr < 16)
																return 9.17197;
															else
																return 16.1038;
														}
														else
														{
															if(sinr < 17.5)
																return 25.95;
															else
															{
																if(cqi < 12.5)
																	return 19.9626;
																else
																	return 22.147;
															}
														}
													}
													else
													{
														if(sinr < 26)
														{
															if(ta < 10.5)
															{
																if(velocity < 4.79)
																	return 12.8949;
																else
																	return 13.8689818182;
															}
															else
																return 9.21925;
														}
														else
															return 11.6342;
													}
												}
												else
													return 27.1903;
											}
											else
											{
												if(ta < 12.5)
												{
													if(cqi < 12)
													{
														if(ta < 3)
															return 10.3713;
														else
															return 8.92746;
													}
													else
														return 11.3983;
												}
												else
													return 6.8223;
											}
										}
									}
									else
									{
										if(rsrp < -79.5)
										{
											if(payload < 7.5)
												return 22.2119;
											else
												return 26.393;
										}
										else
											return 17.1612;
									}
								}
								else
								{
									if(sinr < 33)
									{
										if(cqi < 11.5)
										{
											if(cqi < 8.5)
											{
												if(payload < 5.5)
													return 9.37647;
												else
													return 11.4613;
											}
											else
											{
												if(sinr < 22.5)
													return 5.50269;
												else
													return 3.85617;
											}
										}
										else
										{
											if(f < 1347.5)
											{
												if(sinr < 23)
													return 11.4216;
												else
													return 12.9324;
											}
											else
											{
												if(payload < 6.5)
													return 7.94123;
												else
												{
													if(payload < 8.5)
														return 8.60678;
													else
														return 9.18133;
												}
											}
										}
									}
									else
										return 13.4907;
								}
							}
							else
							{
								if(rsrp < -66)
								{
									if(rsrp < -91)
									{
										if(velocity < 14.54)
											return 19.1518;
										else
											return 15.1451;
									}
									else
									{
										if(payload < 8)
											return 17.9085;
										else
											return 31.6623;
									}
								}
								else
									return 13.2768;
							}
						}
					}
					else
					{
						if(ta < 9.5)
						{
							if(payload < 6.5)
							{
								if(velocity < 8.71)
									return 21.838;
								else
								{
									if(cell < 13161621)
									{
										if(rsrp < -80)
										{
											if(ta < 2.5)
											{
												if(rsrq < -5.5)
													return 9.45068;
												else
													return 9.02425;
											}
											else
												return 8.96459;
										}
										else
										{
											if(rsrp < -69.5)
												return 13.3824;
											else
												return 11.6754;
										}
									}
									else
									{
										if(velocity < 10.865)
										{
											if(cell < 14114952.5)
												return 13.7615;
											else
												return 10.7614;
										}
										else
										{
											if(cell < 13853077)
												return 18.1818;
											else
												return 19.0153333333;
										}
									}
								}
							}
							else
							{
								if(sinr < 20)
								{
									if(cell < 12918810.5)
									{
										if(cqi < 14.5)
											return 32.9369;
										else
											return 25.3165;
									}
									else
									{
										if(rsrp < -86.5)
											return 22.49;
										else
										{
											if(rsrp < -83.5)
												return 19.1789;
											else
												return 16.9811;
										}
									}
								}
								else
								{
									if(velocity < 13.865)
									{
										if(sinr < 25.5)
											return 18.0079;
										else
										{
											if(payload < 7.5)
												return 26.1194;
											else
												return 28.3061;
										}
									}
									else
									{
										if(sinr < 26.5)
										{
											if(velocity < 14.96)
											{
												if(payload < 8.5)
													return 12.0508;
												else
													return 11.0558;
											}
											else
											{
												if(rsrp < -77.5)
												{
													if(cell < 13161621)
													{
														if(sinr < 23)
															return 16.1649;
														else
															return 15.1556;
													}
													else
														return 18.9349;
												}
												else
												{
													if(sinr < 23)
														return 8.37321;
													else
													{
														if(rsrp < -76)
															return 13.7999;
														else
															return 14.3209;
													}
												}
											}
										}
										else
										{
											if(rsrp < -85.5)
												return 13.1067;
											else
											{
												if(velocity < 15.465)
												{
													if(rsrp < -70.5)
														return 14.3113;
													else
														return 15.4525;
												}
												else
												{
													if(cell < 13610255)
													{
														if(sinr < 31.5)
														{
															if(rsrp < -77.5)
																return 25.9379;
															else
																return 27.5981;
														}
														else
														{
															if(payload < 8.5)
																return 22.082;
															else
																return 21.4823;
														}
													}
													else
														return 13.8408;
												}
											}
										}
									}
								}
							}
						}
						else
						{
							if(velocity < 17.12)
							{
								if(payload < 9.5)
								{
									if(cqi < 14.5)
										return 25.37;
									else
									{
										if(payload < 8.5)
											return 32.0802;
										else
											return 30.6775;
									}
								}
								else
									return 21.9901;
							}
							else
							{
								if(ta < 19.5)
								{
									if(payload < 7.5)
									{
										if(velocity < 28.97)
											return 12.6249;
										else
											return 11.8017;
									}
									else
									{
										if(sinr < 27.5)
											return 17.991;
										else
										{
											if(ta < 14.5)
												return 28.0265;
											else
											{
												if(rsrq < -5.5)
													return 24.7253;
												else
													return 25.5591;
											}
										}
									}
								}
								else
									return 9.54426;
							}
						}
					}
				}
			}
		}
	}
}

float o2_dl_tree_6(float payload, float rsrp, float rsrq, float sinr, float cqi, float ta, float velocity, float cell, float f)
{
	if(sinr < 7.5)
	{
		if(sinr < -0.5)
		{
			if(cell < 13410696.5)
			{
				if(rsrp < -75)
				{
					if(payload < 8.5)
					{
						if(velocity < 36.78)
						{
							if(f < 1347.5)
							{
								if(cqi < 3.5)
								{
									if(payload < 0.55)
										return 0.147957;
									else
									{
										if(sinr < -10)
											return 1.86399;
										else
											return 1.0084241728;
									}
								}
								else
								{
									if(payload < 6.5)
									{
										if(rsrp < -85)
										{
											if(cell < 12919169.5)
											{
												if(ta < 5.5)
													return 1.89678;
												else
												{
													if(rsrq < -13)
													{
														if(rsrp < -92)
															return 0.851973;
														else
															return 0.15654;
													}
													else
														return 0.960707;
												}
											}
											else
												return 2.7840666667;
										}
										else
											return 3.20001;
									}
									else
									{
										if(rsrp < -95)
											return 3.4775233333;
										else
											return 4.31001;
									}
								}
							}
							else
							{
								if(cell < 12896781)
									return 8.35655;
								else
								{
									if(ta < 6.5)
									{
										if(velocity < 14.035)
										{
											if(velocity < 8.875)
											{
												if(rsrp < -111.5)
													return 4.5977;
												else
												{
													if(rsrq < -13.5)
														return 2.29456;
													else
														return 2.94464;
												}
											}
											else
											{
												if(cqi < 8.5)
												{
													if(rsrp < -96)
														return 1.88689;
													else
													{
														if(ta < 1)
															return 1.35392;
														else
															return 1.91388;
													}
												}
												else
													return 2.15517;
											}
										}
										else
										{
											if(sinr < -2.5)
											{
												if(rsrq < -9)
													return 4.3952;
												else
													return 1.3459;
											}
											else
											{
												if(rsrq < -9.5)
												{
													if(payload < 1.75)
														return 6.0241;
													else
														return 5.4807;
												}
												else
													return 3.94915;
											}
										}
									}
									else
									{
										if(cell < 13223956)
										{
											if(rsrp < -105)
											{
												if(rsrp < -113)
													return 1.04248;
												else
													return 2.568805;
											}
											else
											{
												if(payload < 4.5)
												{
													if(cqi < 5.5)
													{
														if(rsrp < -95.5)
														{
															if(sinr < -6.5)
																return 5.14387;
															else
															{
																if(rsrp < -100.5)
																	return 4.28266;
																else
																	return 5.17632;
															}
														}
														else
															return 2.63331;
													}
													else
													{
														if(rsrp < -88)
															return 1.98474;
														else
															return 2.95203;
													}
												}
												else
												{
													if(payload < 6.5)
														return 8.32466;
													else
														return 5.04255;
												}
											}
										}
										else
											return 11.4313;
									}
								}
							}
						}
						else
							return 8.76712;
					}
					else
					{
						if(sinr < -3.5)
						{
							if(rsrp < -100.5)
							{
								if(rsrq < -13.5)
									return 16.2767;
								else
									return 4.96617;
							}
							else
							{
								if(rsrp < -99.5)
									return 4.46453;
								else
								{
									if(payload < 9.5)
									{
										if(rsrq < -17)
											return 1.87261;
										else
											return 3.45125;
									}
									else
										return 2.22922;
								}
							}
						}
						else
						{
							if(sinr < -1.5)
							{
								if(rsrp < -103)
									return 12.7029;
								else
									return 10.6866;
							}
							else
							{
								if(cqi < 5.5)
									return 8.78156;
								else
									return 7.24273;
							}
						}
					}
				}
				else
				{
					if(rsrq < -12.5)
						return 22.0521;
					else
					{
						if(cell < 13155995)
						{
							if(payload < 4)
								return 6.96561;
							else
								return 5.6926;
						}
						else
							return 9.73236;
					}
				}
			}
			else
			{
				if(ta < 45.5)
				{
					if(rsrq < -11.5)
					{
						if(cell < 13553922)
						{
							if(payload < 2.5)
							{
								if(sinr < -4.5)
								{
									if(sinr < -5.5)
									{
										if(rsrp < -106.5)
											return 0.2834246667;
										else
										{
											if(rsrp < -98.5)
											{
												if(cell < 13456283)
												{
													if(cell < 13416974)
														return 0.356482;
													else
														return 0.9131536667;
												}
												else
												{
													if(velocity < 7.54)
														return 0.4952495;
													else
													{
														if(payload < 1.05)
															return 2.58901;
														else
															return 1.46466;
													}
												}
											}
											else
												return 0.284139;
										}
									}
									else
									{
										if(rsrq < -15.5)
											return 2.59151;
										else
										{
											if(payload < 1.25)
												return 0.426212;
											else
											{
												if(rsrp < -98.5)
													return 1.09081;
												else
													return 1.60032;
											}
										}
									}
								}
								else
								{
									if(payload < 0.75)
										return 0.2171277222;
									else
									{
										if(ta < 5.5)
											return 1.68599;
										else
										{
											if(cell < 13524737.5)
											{
												if(ta < 17)
												{
													if(cqi < 8)
													{
														if(rsrq < -13)
														{
															if(cell < 13416986.5)
																return 0.4694286667;
															else
																return 0.895062;
														}
														else
															return 1.0149766667;
													}
													else
														return 0.337709;
												}
												else
													return 1.2784233333;
											}
											else
												return 0.3991762;
										}
									}
								}
							}
							else
							{
								if(f < 1347.5)
								{
									if(cqi < 6.5)
									{
										if(rsrp < -91)
										{
											if(rsrp < -100.5)
											{
												if(payload < 8.5)
												{
													if(velocity < 13.335)
													{
														if(rsrq < -16.5)
															return 0.70778325;
														else
														{
															if(rsrp < -104.5)
																return 0.915554;
															else
															{
																if(rsrp < -102)
																{
																	if(payload < 6.5)
																		return 1.49934;
																	else
																		return 2.37163;
																}
																else
																{
																	if(velocity < 6.56)
																		return 1.05026;
																	else
																		return 1.87999;
																}
															}
														}
													}
													else
													{
														if(rsrq < -17)
															return 0.8280775;
														else
															return 0.4163518;
													}
												}
												else
												{
													if(velocity < 11.375)
													{
														if(rsrp < -105.5)
															return 2.01476;
														else
															return 2.48486;
													}
													else
														return 4.06607;
												}
											}
											else
											{
												if(ta < 28.5)
												{
													if(rsrp < -97.5)
													{
														if(velocity < 14.425)
														{
															if(ta < 9)
																return 0.583235;
															else
															{
																if(ta < 14)
																{
																	if(payload < 4.5)
																	{
																		if(rsrp < -99.5)
																			return 0.789811;
																		else
																			return 1.677015;
																	}
																	else
																	{
																		if(rsrp < -98.5)
																			return 0.448069;
																		else
																			return 0.9907343333;
																	}
																}
																else
																	return 1.2466;
															}
														}
														else
															return 0.226676;
													}
													else
														return 0.4891133333;
												}
												else
													return 2.22717;
											}
										}
										else
										{
											if(velocity < 13.98)
												return 2.060626;
											else
												return 1.26036;
										}
									}
									else
									{
										if(rsrp < -94.5)
											return 4.34442;
										else
											return 1.60121;
									}
								}
								else
								{
									if(ta < 9.5)
									{
										if(ta < 4.5)
											return 2.20534;
										else
										{
											if(rsrq < -15.5)
											{
												if(sinr < -7.5)
													return 1.68443;
												else
													return 0.7914445;
											}
											else
											{
												if(cell < 13416986.5)
												{
													if(payload < 4.5)
														return 1.2718783333;
													else
													{
														if(rsrp < -105)
															return 2.812215;
														else
														{
															if(ta < 5.5)
																return 1.39398;
															else
																return 2.50031;
														}
													}
												}
												else
												{
													if(velocity < 9.745)
													{
														if(rsrp < -99)
															return 0.4012186667;
														else
															return 0.898806;
													}
													else
														return 1.50126;
												}
											}
										}
									}
									else
									{
										if(rsrp < -103)
											return 1.028452;
										else
										{
											if(sinr < -4.5)
												return 1.4691866667;
											else
											{
												if(payload < 4)
													return 8.33333;
												else
												{
													if(rsrq < -14.5)
													{
														if(payload < 7.5)
															return 3.08523;
														else
															return 3.61918;
													}
													else
													{
														if(ta < 17.5)
														{
															if(velocity < 1.745)
																return 5.64732;
															else
																return 4.242388;
														}
														else
															return 2.69815;
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
							if(ta < 37.5)
							{
								if(rsrp < -81.5)
								{
									if(cqi < 1.5)
									{
										if(cell < 13724801.5)
											return 3.27785;
										else
											return 7.36648;
									}
									else
									{
										if(velocity < 34.99)
										{
											if(ta < 33)
											{
												if(ta < 12.5)
												{
													if(sinr < -1.5)
													{
														if(payload < 5.5)
														{
															if(rsrq < -15)
															{
																if(ta < 7.5)
																	return 1.58000875;
																else
																{
																	if(rsrq < -18)
																		return 0.458085;
																	else
																		return 1.32765625;
																}
															}
															else
															{
																if(rsrq < -12.5)
																{
																	if(rsrp < -97.5)
																		return 1.35731;
																	else
																	{
																		if(ta < 8.5)
																			return 3.03099;
																		else
																			return 2.6251225;
																	}
																}
																else
																{
																	if(payload < 1.5)
																		return 0.932727;
																	else
																	{
																		if(rsrp < -95)
																			return 1.97645;
																		else
																			return 2.56781;
																	}
																}
															}
														}
														else
														{
															if(ta < 7.5)
															{
																if(sinr < -7)
																	return 1.20355;
																else
																	return 2.07182;
															}
															else
															{
																if(rsrp < -91)
																	return 3.666685;
																else
																	return 6.14035;
															}
														}
													}
													else
													{
														if(cqi < 6.5)
														{
															if(rsrq < -13.5)
																return 6.76819;
															else
																return 5.95365;
														}
														else
															return 1.3698766667;
													}
												}
												else
												{
													if(rsrp < -106)
													{
														if(ta < 28)
															return 3.64834;
														else
															return 0.479906;
													}
													else
													{
														if(payload < 3.5)
														{
															if(rsrq < -13.5)
															{
																if(payload < 2.5)
																	return 0.33633325;
																else
																	return 0.838868;
															}
															else
																return 1.9586633333;
														}
														else
														{
															if(f < 1347.5)
															{
																if(ta < 16.5)
																{
																	if(rsrp < -102)
																		return 0.807293;
																	else
																	{
																		if(rsrq < -14.5)
																			return 0.784852;
																		else
																			return 0.354209;
																	}
																}
																else
																{
																	if(velocity < 21.455)
																	{
																		if(payload < 7.5)
																			return 1.0208002222;
																		else
																		{
																			if(sinr < -2.5)
																				return 2.85753;
																			else
																			{
																				if(cqi < 4.5)
																					return 1.75786;
																				else
																					return 1.13617;
																			}
																		}
																	}
																	else
																	{
																		if(sinr < -1.5)
																			return 2.08252;
																		else
																			return 4.01462;
																	}
																}
															}
															else
															{
																if(cell < 13854873)
																{
																	if(ta < 15)
																		return 2.14602;
																	else
																		return 3.04559;
																}
																else
																{
																	if(payload < 4.5)
																		return 4.41928;
																	else
																		return 3.51463;
																}
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
													{
														if(rsrp < -104.5)
														{
															if(rsrq < -15.5)
																return 0.586876;
															else
																return 2.06719;
														}
														else
															return 0.541052;
													}
													else
														return 3.28426;
												}
												else
													return 6.76247;
											}
										}
										else
											return 4.733155;
									}
								}
								else
									return 11.4641;
							}
							else
							{
								if(payload < 5.5)
									return 8.53789;
								else
									return 14.771;
							}
						}
					}
					else
					{
						if(cqi < 4.5)
						{
							if(rsrp < -103)
								return 11.4309;
							else
							{
								if(rsrp < -99.5)
									return 1.69644;
								else
									return 10.7239;
							}
						}
						else
						{
							if(cell < 14093058)
							{
								if(velocity < 14.86)
								{
									if(rsrp < -90)
									{
										if(rsrp < -94)
											return 2.3753925;
										else
											return 0.5595255;
									}
									else
									{
										if(sinr < -2.5)
											return 4.3071;
										else
										{
											if(rsrp < -86.5)
												return 3.12663;
											else
												return 1.77069;
										}
									}
								}
								else
								{
									if(ta < 24.5)
									{
										if(f < 1347.5)
											return 6.21708;
										else
											return 7.5594;
									}
									else
									{
										if(sinr < -4.5)
											return 3.63174;
										else
										{
											if(cqi < 6.5)
												return 2.4358;
											else
												return 1.47106;
										}
									}
								}
							}
							else
							{
								if(rsrq < -10.5)
									return 6.93241;
								else
									return 9.95988;
							}
						}
					}
				}
				else
					return 13.8498;
			}
		}
		else
		{
			if(rsrp < -85.5)
			{
				if(payload < 4.5)
				{
					if(ta < 5.5)
					{
						if(payload < 2.5)
						{
							if(rsrq < -12.5)
								return 9.66184;
							else
							{
								if(velocity < 11.05)
								{
									if(velocity < 3.705)
									{
										if(payload < 0.75)
										{
											if(cqi < 8.5)
												return 4.02012;
											else
												return 2.35294;
										}
										else
											return 5.37273;
									}
									else
									{
										if(rsrp < -106.5)
											return 4.89297;
										else
										{
											if(payload < 1.5)
												return 8.8235666667;
											else
												return 10.3359;
										}
									}
								}
								else
								{
									if(sinr < 5.5)
									{
										if(rsrq < -10.5)
										{
											if(cqi < 7)
											{
												if(payload < 1.5)
												{
													if(rsrq < -11.5)
														return 0.105438;
													else
														return 0.527983;
												}
												else
													return 1.65529;
											}
											else
												return 1.74102;
										}
										else
										{
											if(sinr < 1)
												return 6.95655;
											else
											{
												if(payload < 0.3)
													return 3.75588;
												else
												{
													if(sinr < 3.5)
														return 1.0296;
													else
														return 2.46595;
												}
											}
										}
									}
									else
									{
										if(payload < 0.75)
										{
											if(cqi < 10)
											{
												if(rsrq < -9.5)
													return 4.25534;
												else
													return 6.15385;
											}
											else
												return 4.23282;
										}
										else
										{
											if(rsrq < -7.5)
											{
												if(sinr < 6.5)
													return 8.14664;
												else
												{
													if(payload < 1.5)
														return 2.72294;
													else
														return 4.37637;
												}
											}
											else
												return 2.79512;
										}
									}
								}
							}
						}
						else
						{
							if(cqi < 4.5)
								return 2.82611;
							else
							{
								if(payload < 3.5)
								{
									if(rsrp < -98)
										return 11.0957;
									else
									{
										if(ta < 4)
											return 4.23157;
										else
											return 9.69305;
									}
								}
								else
								{
									if(velocity < 13.955)
									{
										if(ta < 3.5)
										{
											if(rsrp < -90.5)
												return 10.0851;
											else
												return 10.5332;
										}
										else
											return 12.08935;
									}
									else
									{
										if(sinr < 4)
											return 10.5611;
										else
											return 5.80131;
									}
								}
							}
						}
					}
					else
					{
						if(sinr < 4.5)
						{
							if(rsrp < -103)
							{
								if(payload < 0.75)
								{
									if(rsrq < -11)
										return 2.30017;
									else
									{
										if(rsrp < -109.5)
											return 3.36136;
										else
											return 2.97399;
									}
								}
								else
								{
									if(velocity < 24.595)
									{
										if(velocity < 14.105)
										{
											if(sinr < 1)
												return 3.7123;
											else
											{
												if(rsrp < -110.5)
													return 4.71559;
												else
													return 6.75105;
											}
										}
										else
											return 6.85646;
									}
									else
										return 2.72758;
								}
							}
							else
							{
								if(cell < 13806081.5)
								{
									if(cqi < 6.5)
									{
										if(sinr < 2.5)
										{
											if(payload < 2.5)
											{
												if(velocity < 25.41)
													return 0.3143322143;
												else
													return 1.90932;
											}
											else
											{
												if(ta < 7.5)
													return 2.18998;
												else
												{
													if(cell < 12896513.5)
														return 0.60788;
													else
													{
														if(rsrq < -12.5)
															return 0.678473;
														else
															return 1.0995333333;
													}
												}
											}
										}
										else
										{
											if(payload < 2.5)
											{
												if(rsrp < -90.5)
												{
													if(f < 1347.5)
														return 0.132251;
													else
													{
														if(payload < 0.75)
														{
															if(velocity < 11.91)
																return 2.23214;
															else
																return 1.39131;
														}
														else
														{
															if(ta < 6.5)
																return 0.885152;
															else
																return 1.284375;
														}
													}
												}
												else
													return 2.56492;
											}
											else
											{
												if(sinr < 3.5)
												{
													if(rsrp < -92.5)
														return 2.2536;
													else
														return 1.86858;
												}
												else
												{
													if(rsrq < -12.5)
														return 6.16491;
													else
														return 3.20449;
												}
											}
										}
									}
									else
									{
										if(cell < 12922382.5)
										{
											if(cqi < 7.5)
											{
												if(rsrq < -10.5)
												{
													if(sinr < 2)
														return 5.86941;
													else
													{
														if(payload < 1.75)
															return 4.60299;
														else
															return 3.99002;
													}
												}
												else
													return 5.52486;
											}
											else
											{
												if(payload < 0.75)
												{
													if(velocity < 6.77)
														return 2.10637;
													else
														return 0.592595;
												}
												else
												{
													if(ta < 7.5)
													{
														if(sinr < 1.5)
															return 6.23296;
														else
															return 3.767902;
													}
													else
													{
														if(payload < 1.5)
															return 3.27735;
														else
														{
															if(rsrp < -91)
																return 2.56369;
															else
																return 2.02788;
														}
													}
												}
											}
										}
										else
										{
											if(velocity < 3.825)
											{
												if(rsrp < -95.5)
												{
													if(rsrq < -12.5)
														return 2.10526;
													else
														return 1.44509;
												}
												else
												{
													if(cqi < 8)
														return 2.16949;
													else
														return 4.11311;
												}
											}
											else
											{
												if(ta < 9.5)
												{
													if(cell < 13611534)
													{
														if(ta < 7.5)
														{
															if(payload < 0.55)
																return 0.14793;
															else
																return 0.6981653333;
														}
														else
															return 1.28659;
													}
													else
														return 1.90794;
												}
												else
												{
													if(cqi < 7.5)
														return 2.20251;
													else
														return 1.15482;
												}
											}
										}
									}
								}
								else
								{
									if(velocity < 35.38)
									{
										if(cell < 13824282)
										{
											if(velocity < 9.99)
											{
												if(sinr < 2)
													return 3.641322;
												else
													return 4.72534;
											}
											else
											{
												if(cell < 13814542.5)
													return 4.20168;
												else
												{
													if(ta < 12.5)
														return 6.02864;
													else
														return 6.58436;
												}
											}
										}
										else
										{
											if(payload < 2.5)
											{
												if(cell < 14115080)
												{
													if(sinr < 2.5)
													{
														if(velocity < 23.7)
														{
															if(cqi < 7.5)
															{
																if(sinr < 0.5)
																{
																	if(rsrp < -97.5)
																		return 1.4227866667;
																	else
																		return 1.00673;
																}
																else
																{
																	if(sinr < 1.5)
																		return 1.75786;
																	else
																		return 2.2511525;
																}
															}
															else
																return 3.84061;
														}
														else
															return 4.65118;
													}
													else
													{
														if(rsrp < -90.5)
															return 0.438118;
														else
															return 1.2544575;
													}
												}
												else
													return 6.0241;
											}
											else
											{
												if(rsrp < -90.5)
												{
													if(cell < 13854861)
														return 5.22278;
													else
													{
														if(cell < 13884161.5)
															return 0.993049;
														else
														{
															if(rsrp < -99)
																return 1.71969;
															else
															{
																if(rsrq < -10.5)
																{
																	if(rsrq < -13)
																		return 2.2069;
																	else
																		return 2.9813466667;
																}
																else
																{
																	if(rsrp < -93.5)
																		return 4.49522;
																	else
																		return 4.10678;
																}
															}
														}
													}
												}
												else
												{
													if(rsrq < -11.5)
													{
														if(rsrp < -89.5)
															return 2.82919;
														else
															return 3.3637;
													}
													else
														return 10.0671;
												}
											}
										}
									}
									else
										return 7.998;
								}
							}
						}
						else
						{
							if(rsrp < -86.5)
							{
								if(velocity < 13.525)
								{
									if(rsrp < -97.5)
									{
										if(payload < 1.25)
										{
											if(payload < 0.3)
												return 1.74293;
											else
												return 5.59441;
										}
										else
										{
											if(rsrp < -98.5)
												return 14.9254;
											else
												return 10.4439;
										}
									}
									else
									{
										if(rsrp < -88.5)
										{
											if(payload < 3.5)
											{
												if(rsrq < -10.5)
												{
													if(rsrq < -12.5)
													{
														if(payload < 2.5)
															return 4.30339;
														else
															return 3.75235;
													}
													else
													{
														if(velocity < 10.815)
															return 3.2281866667;
														else
															return 2.38096;
													}
												}
												else
												{
													if(payload < 2)
													{
														if(sinr < 6)
															return 3.95257;
														else
															return 4.34546;
													}
													else
														return 5.62979;
												}
											}
											else
											{
												if(rsrp < -90)
												{
													if(sinr < 5.5)
														return 12.9817;
													else
													{
														if(ta < 9.5)
															return 2.97508;
														else
															return 7.04456;
													}
												}
												else
												{
													if(rsrq < -9.5)
														return 6.05373;
													else
														return 3.70628;
												}
											}
										}
										else
										{
											if(cell < 12904590.5)
												return 0.396434;
											else
											{
												if(cqi < 10.5)
												{
													if(velocity < 1.86)
													{
														if(sinr < 6.5)
															return 1.67645;
														else
															return 2.75292;
													}
													else
														return 4.4742933333;
												}
												else
													return 5.25624;
											}
										}
									}
								}
								else
								{
									if(cell < 13884185.5)
									{
										if(cqi < 9.5)
										{
											if(f < 1347.5)
												return 0.703482;
											else
												return 1.127055;
										}
										else
											return 4.16668;
									}
									else
										return 6.49614;
								}
							}
							else
							{
								if(velocity < 5.745)
									return 3.70372;
								else
								{
									if(velocity < 24.365)
									{
										if(payload < 3)
											return 9.35126;
										else
											return 11.5607;
									}
									else
										return 4.26667;
								}
							}
						}
					}
				}
				else
				{
					if(rsrq < -11.5)
					{
						if(ta < 5.5)
						{
							if(rsrp < -92)
							{
								if(velocity < 9.195)
								{
									if(rsrq < -13.5)
										return 0.71823;
									else
									{
										if(cqi < 7)
											return 4.99237;
										else
											return 1.3209;
									}
								}
								else
								{
									if(rsrp < -108)
										return 14.8607;
									else
									{
										if(rsrp < -99)
											return 11.5345;
										else
											return 10.5346;
									}
								}
							}
							else
							{
								if(velocity < 26.41)
								{
									if(rsrp < -88.5)
										return 11.7073;
									else
										return 10.5587;
								}
								else
									return 13.4713;
							}
						}
						else
						{
							if(velocity < 31.615)
							{
								if(sinr < 2.5)
								{
									if(cell < 13422235)
									{
										if(velocity < 5.43)
										{
											if(rsrp < -97)
												return 2.23161;
											else
												return 3.79381;
										}
										else
										{
											if(payload < 8.5)
											{
												if(payload < 6.5)
												{
													if(velocity < 10.055)
														return 0.3699666667;
													else
														return 0.913234;
												}
												else
												{
													if(sinr < 1)
													{
														if(rsrp < -87.5)
															return 0.6635946667;
														else
															return 1.42835;
													}
													else
													{
														if(rsrq < -12.5)
															return 1.87059;
														else
															return 2.83487;
													}
												}
											}
											else
											{
												if(cell < 13160335)
													return 1.57439;
												else
												{
													if(payload < 9.5)
														return 2.7828733333;
													else
														return 3.29584;
												}
											}
										}
									}
									else
									{
										if(cqi < 5.5)
										{
											if(rsrp < -104.5)
												return 2.50279;
											else
											{
												if(rsrq < -13.5)
													return 1.47336;
												else
													return 0.99194;
											}
										}
										else
										{
											if(payload < 8.5)
											{
												if(cqi < 8.5)
												{
													if(cqi < 7.5)
													{
														if(rsrp < -94.5)
														{
															if(ta < 16.5)
															{
																if(sinr < 0.5)
																	return 2.46268;
																else
																	return 1.85744;
															}
															else
															{
																if(rsrp < -98.5)
																	return 2.7795175;
																else
																	return 3.37517;
															}
														}
														else
															return 3.98315;
													}
													else
														return 6.35425;
												}
												else
													return 1.27055;
											}
											else
												return 5.19106;
										}
									}
								}
								else
								{
									if(cell < 13416974.5)
									{
										if(ta < 13.5)
										{
											if(sinr < 3.5)
											{
												if(payload < 8.5)
													return 4.20705;
												else
													return 5.84924;
											}
											else
											{
												if(payload < 7)
												{
													if(cell < 12909594)
														return 6.18397;
													else
													{
														if(sinr < 5)
															return 8.60369;
														else
															return 7.01037;
													}
												}
												else
												{
													if(payload < 8.5)
														return 10.4661;
													else
														return 9.3886733333;
												}
											}
										}
										else
											return 2.58672;
									}
									else
									{
										if(rsrp < -104.5)
											return 7.38007;
										else
										{
											if(velocity < 17.285)
											{
												if(cell < 13479694.5)
												{
													if(cqi < 5.5)
														return 1.2735575;
													else
													{
														if(rsrp < -95.5)
														{
															if(rsrp < -97)
															{
																if(rsrq < -12.5)
																	return 2.44873;
																else
																	return 3.54296;
															}
															else
																return 2.56363;
														}
														else
															return 3.787868;
													}
												}
												else
												{
													if(velocity < 6.36)
													{
														if(rsrp < -94)
															return 1.2954;
														else
														{
															if(sinr < 4)
																return 5.11727;
															else
																return 3.3442;
														}
													}
													else
													{
														if(cell < 13683982)
															return 0.7293426667;
														else
														{
															if(cqi < 5.5)
																return 1.86032;
															else
																return 1.43812;
														}
													}
												}
											}
											else
												return 7.13467;
										}
									}
								}
							}
							else
							{
								if(rsrp < -94.5)
									return 19.6223;
								else
									return 6.86342;
							}
						}
					}
					else
					{
						if(f < 1347.5)
						{
							if(velocity < 16.42)
							{
								if(cell < 13479682)
								{
									if(rsrp < -93)
										return 9.81354;
									else
									{
										if(sinr < 6.5)
											return 4.70754;
										else
											return 5.77548;
									}
								}
								else
								{
									if(ta < 11)
										return 0.5011365;
									else
										return 1.909895;
								}
							}
							else
							{
								if(rsrq < -8.5)
								{
									if(cqi < 7)
										return 12.7247;
									else
										return 4.87329;
								}
								else
								{
									if(cell < 13370625.5)
										return 3.40764;
									else
									{
										if(rsrp < -92)
										{
											if(rsrp < -96.5)
												return 6.28239;
											else
												return 6.71047;
										}
										else
										{
											if(cqi < 5)
												return 6.10454;
											else
												return 5.61572;
										}
									}
								}
							}
						}
						else
						{
							if(rsrp < -96.5)
							{
								if(rsrp < -102)
								{
									if(cell < 12927002.5)
									{
										if(ta < 9.5)
										{
											if(payload < 9.5)
											{
												if(velocity < 11.08)
													return 14.0488;
												else
													return 11.1328;
											}
											else
												return 9.6911;
										}
										else
											return 19.0099;
									}
									else
									{
										if(rsrq < -10.5)
										{
											if(payload < 7.5)
												return 13.7339;
											else
												return 11.5053;
										}
										else
										{
											if(payload < 8.5)
											{
												if(rsrq < -9)
													return 1.34211;
												else
												{
													if(cell < 13640467.5)
														return 2.63259;
													else
														return 2.12508;
												}
											}
											else
												return 5.96372;
										}
									}
								}
								else
								{
									if(cell < 13655835)
									{
										if(rsrq < -8.5)
										{
											if(cqi < 6.5)
												return 10.40565;
											else
												return 14.4092;
										}
										else
										{
											if(payload < 8.5)
												return 6.33341;
											else
												return 6.81489;
										}
									}
									else
									{
										if(rsrq < -8.5)
										{
											if(f < 2262.5)
											{
												if(rsrp < -97.5)
												{
													if(velocity < 14.9)
														return 16.5887666667;
													else
														return 14.079;
												}
												else
													return 18.799;
											}
											else
												return 20.48;
										}
										else
										{
											if(payload < 6.5)
												return 12.3235;
											else
												return 13.3111;
										}
									}
								}
							}
							else
							{
								if(rsrp < -89.5)
								{
									if(rsrp < -94.5)
									{
										if(sinr < 3.5)
										{
											if(cqi < 7)
												return 5.5157925;
											else
												return 3.504965;
										}
										else
											return 2.03373;
									}
									else
									{
										if(rsrq < -9.5)
										{
											if(velocity < 12.34)
											{
												if(sinr < 4.5)
													return 6.716895;
												else
												{
													if(payload < 5.5)
														return 6.2315;
													else
													{
														if(payload < 7)
															return 4.82073;
														else
															return 5.28402;
													}
												}
											}
											else
											{
												if(sinr < 4)
													return 5.6164;
												else
												{
													if(cqi < 7.5)
														return 3.83914;
													else
													{
														if(cell < 13361177.5)
															return 5.04668;
														else
															return 4.35967;
													}
												}
											}
										}
										else
										{
											if(payload < 7)
											{
												if(rsrp < -90.5)
													return 10.0503;
												else
													return 11.4204;
											}
											else
											{
												if(cqi < 6.5)
													return 8.34396;
												else
												{
													if(sinr < 4)
														return 6.7036333333;
													else
														return 5.69851;
												}
											}
										}
									}
								}
								else
								{
									if(rsrp < -86.5)
									{
										if(ta < 4.5)
										{
											if(rsrp < -88.5)
												return 9.37866;
											else
											{
												if(rsrp < -87.5)
													return 13.8129;
												else
													return 12.3195;
											}
										}
										else
											return 18.9524;
									}
									else
									{
										if(cell < 13613332)
											return 6.49878;
										else
										{
											if(payload < 8.5)
												return 9.06589;
											else
												return 10.1266;
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
					if(velocity < 17.615)
					{
						if(cqi < 6.5)
						{
							if(sinr < 0.5)
								return 4.96896;
							else
							{
								if(rsrp < -74)
								{
									if(sinr < 3.5)
									{
										if(payload < 1.25)
											return 0.734484;
										else
											return 1.81389;
									}
									else
										return 3.73832;
								}
								else
									return 3.2649333333;
							}
						}
						else
						{
							if(rsrp < -78)
							{
								if(velocity < 14.145)
								{
									if(f < 1347.5)
										return 3.11526;
									else
									{
										if(rsrp < -84)
											return 8.28586;
										else
										{
											if(ta < 2)
												return 6.4;
											else
											{
												if(cell < 13366298)
													return 5.77201;
												else
												{
													if(ta < 7.5)
														return 4.46429;
													else
														return 5.17799;
												}
											}
										}
									}
								}
								else
								{
									if(cell < 13823002.5)
									{
										if(rsrp < -80)
										{
											if(velocity < 15.345)
												return 4.14938;
											else
												return 3.60198;
										}
										else
											return 2.86328;
									}
									else
										return 5.47947;
								}
							}
							else
							{
								if(ta < 1.5)
									return 6.13497;
								else
								{
									if(rsrq < -8.5)
										return 7.27273;
									else
										return 8.54701;
								}
							}
						}
					}
					else
					{
						if(payload < 2.5)
							return 13.2231;
						else
							return 6.10532;
					}
				}
				else
				{
					if(velocity < 34.575)
					{
						if(rsrq < -11.5)
						{
							if(cell < 12904718.5)
								return 17.192;
							else
							{
								if(rsrp < -76.5)
								{
									if(cell < 13853709.5)
									{
										if(cell < 13814541.5)
										{
											if(rsrp < -83.5)
											{
												if(rsrq < -15)
													return 5.11182;
												else
													return 3.95788;
											}
											else
											{
												if(payload < 7)
													return 8.69376;
												else
													return 6.88666;
											}
										}
										else
											return 11.7008;
									}
									else
									{
										if(sinr < 3)
											return 5.96199;
										else
										{
											if(rsrp < -79.5)
											{
												if(payload < 8)
													return 3.75029;
												else
													return 4.25509;
											}
											else
												return 1.82714;
										}
									}
								}
								else
									return 10.4952;
							}
						}
						else
						{
							if(velocity < 15.43)
							{
								if(ta < 0.5)
								{
									if(rsrp < -83.5)
										return 1.9761;
									else
										return 5.5788;
								}
								else
								{
									if(rsrq < -9.5)
									{
										if(rsrq < -10.5)
										{
											if(payload < 8)
												return 9.42285;
											else
												return 14.0326;
										}
										else
											return 20.2532;
									}
									else
									{
										if(payload < 8)
										{
											if(sinr < 6)
											{
												if(cqi < 9)
												{
													if(cell < 13150611.5)
														return 9.38527;
													else
													{
														if(sinr < 1.5)
															return 12.343;
														else
														{
															if(cqi < 6.5)
																return 10.6121;
															else
																return 11.0155;
														}
													}
												}
												else
													return 6.87403;
											}
											else
											{
												if(rsrp < -82.5)
													return 13.3891;
												else
													return 12.3172;
											}
										}
										else
										{
											if(rsrp < -74)
												return 9.5454;
											else
												return 6.69083;
										}
									}
								}
							}
							else
							{
								if(ta < 8)
								{
									if(velocity < 32.005)
									{
										if(rsrp < -81.5)
											return 15.9681;
										else
											return 17.0576;
									}
									else
										return 13.4369;
								}
								else
								{
									if(rsrq < -9.5)
										return 10.5862;
									else
										return 8.45219;
								}
							}
						}
					}
					else
					{
						if(sinr < 5.5)
							return 30.5489;
						else
						{
							if(rsrp < -79)
								return 13.6622;
							else
								return 18.8457;
						}
					}
				}
			}
		}
	}
	else
	{
		if(cqi < 12.5)
		{
			if(velocity < 13.125)
			{
				if(payload < 2.5)
				{
					if(sinr < 20.5)
					{
						if(sinr < 12.5)
						{
							if(rsrq < -6.5)
							{
								if(cqi < 10.5)
								{
									if(rsrq < -8.5)
									{
										if(cell < 12898318)
										{
											if(ta < 6)
												return 10.1652;
											else
											{
												if(sinr < 10.5)
													return 7.64818;
												else
													return 6.48824;
											}
										}
										else
										{
											if(payload < 0.55)
											{
												if(cell < 13368730)
												{
													if(rsrp < -90)
														return 3.68665;
													else
														return 4.65118;
												}
												else
													return 6.87693;
											}
											else
											{
												if(rsrp < -99)
													return 5.25279;
												else
												{
													if(sinr < 8.5)
														return 4.09731;
													else
														return 0.8773715;
												}
											}
										}
									}
									else
									{
										if(cqi < 8.5)
										{
											if(sinr < 10.5)
											{
												if(payload < 0.75)
												{
													if(ta < 4)
														return 4.21054;
													else
														return 4.71154;
												}
												else
													return 5.55556;
											}
											else
											{
												if(rsrp < -98)
													return 6.70297;
												else
													return 6.01506;
											}
										}
										else
										{
											if(rsrp < -86.5)
												return 2.404275;
											else
												return 4.04042;
										}
									}
								}
								else
								{
									if(cell < 14344596)
									{
										if(ta < 10.5)
										{
											if(cell < 12896793.5)
											{
												if(cqi < 11.5)
													return 2.63158;
												else
													return 1.97775;
											}
											else
											{
												if(sinr < 11.5)
													return 1.1112552;
												else
													return 0.48852;
											}
										}
										else
										{
											if(ta < 13.5)
											{
												if(sinr < 11.5)
												{
													if(rsrp < -92)
														return 5.80762;
													else
													{
														if(rsrp < -85)
															return 3.96138;
														else
															return 4.3716;
													}
												}
												else
													return 2.76865;
											}
											else
												return 1.93283;
										}
									}
									else
									{
										if(rsrp < -102)
											return 7.07967;
										else
											return 6.66669;
									}
								}
							}
							else
							{
								if(sinr < 10.5)
									return 6.45422;
								else
									return 14.1343;
							}
						}
						else
						{
							if(cell < 12896781.5)
							{
								if(sinr < 18.5)
									return 10.80925;
								else
								{
									if(rsrp < -75.5)
										return 3.49956;
									else
										return 4.89596;
								}
							}
							else
							{
								if(rsrp < -104)
									return 12.1581;
								else
								{
									if(velocity < 8.7)
									{
										if(ta < 10.5)
										{
											if(f < 2262.5)
											{
												if(rsrp < -81)
												{
													if(velocity < 3.33)
													{
														if(rsrp < -87)
															return 2.32897;
														else
															return 1.13733;
													}
													else
													{
														if(rsrq < -5.5)
															return 3.3455525;
														else
															return 4.46927;
													}
												}
												else
												{
													if(f < 1347.5)
													{
														if(rsrq < -10.5)
														{
															if(payload < 1.05)
																return 3.72094;
															else
																return 5.46075;
														}
														else
															return 3.92157;
													}
													else
														return 7.0922;
												}
											}
											else
											{
												if(cqi < 11.5)
												{
													if(payload < 0.3)
														return 4.76192;
													else
													{
														if(payload < 1.25)
															return 8.17996;
														else
															return 8.58369;
													}
												}
												else
												{
													if(sinr < 13.5)
														return 1.20992;
													else
													{
														if(cell < 13875086)
														{
															if(rsrp < -81.5)
																return 5.12821;
															else
																return 4.495464;
														}
														else
															return 6.87876;
													}
												}
											}
										}
										else
										{
											if(velocity < 1.805)
											{
												if(payload < 0.3)
												{
													if(ta < 12.5)
														return 5.7008;
													else
														return 5.06331;
												}
												else
													return 7.60832;
											}
											else
											{
												if(rsrq < -6.5)
													return 1.93167;
												else
												{
													if(sinr < 17.5)
														return 4.93066;
													else
														return 3.54296;
												}
											}
										}
									}
									else
									{
										if(f < 1347.5)
										{
											if(cqi < 10.5)
												return 7.5058225;
											else
											{
												if(rsrp < -82)
													return 5.67779;
												else
													return 4.67838;
											}
										}
										else
										{
											if(rsrq < -10.5)
												return 2.24845;
											else
											{
												if(velocity < 12.77)
												{
													if(rsrp < -101.5)
														return 6.82594;
													else
													{
														if(sinr < 13.5)
															return 6.13732;
														else
														{
															if(cell < 12904596.5)
																return 4.162355;
															else
															{
																if(payload < 0.3)
																	return 5.021665;
																else
																{
																	if(cell < 12909467)
																		return 5.13479;
																	else
																		return 5.6025633333;
																}
															}
														}
													}
												}
												else
												{
													if(cqi < 9.5)
														return 6.35425;
													else
														return 7.52587;
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
						if(sinr < 32.5)
						{
							if(cell < 13828122)
							{
								if(f < 1347.5)
								{
									if(cqi < 11.5)
									{
										if(rsrp < -81)
											return 9.1638;
										else
											return 8.67679;
									}
									else
										return 6.77966;
								}
								else
								{
									if(velocity < 11.51)
									{
										if(rsrp < -67.5)
										{
											if(payload < 0.3)
												return 5.0582033333;
											else
											{
												if(rsrq < -5.5)
												{
													if(rsrp < -100.5)
														return 12.4031;
													else
													{
														if(ta < 10)
														{
															if(rsrp < -73)
																return 9.63275;
															else
																return 10.2828;
														}
														else
														{
															if(rsrq < -6.5)
																return 8.90869;
															else
																return 8.19672;
														}
													}
												}
												else
												{
													if(f < 2262.5)
														return 4.15909;
													else
														return 7.25624;
												}
											}
										}
										else
										{
											if(ta < 10.5)
												return 3.72526;
											else
											{
												if(cqi < 9.5)
													return 6.2648675;
												else
													return 5.40906;
											}
										}
									}
									else
									{
										if(cqi < 11.5)
											return 3.16832;
										else
											return 3.74444;
									}
								}
							}
							else
							{
								if(rsrq < -7.5)
									return 9.45068;
								else
									return 11.5858;
							}
						}
						else
						{
							if(velocity < 8.135)
								return 5.08421;
							else
								return 3.82135;
						}
					}
				}
				else
				{
					if(cell < 13404045)
					{
						if(cell < 12918810)
						{
							if(cell < 12914202)
							{
								if(rsrq < -10.5)
								{
									if(cell < 12898318)
									{
										if(rsrq < -11.5)
											return 8.29962;
										else
										{
											if(sinr < 13)
												return 9.67118;
											else
											{
												if(payload < 6)
													return 19.0295;
												else
												{
													if(ta < 7)
														return 14.6138;
													else
														return 13.9477;
												}
											}
										}
									}
									else
									{
										if(ta < 10)
										{
											if(rsrp < -76)
											{
												if(payload < 5)
													return 3.79507;
												else
												{
													if(payload < 6.5)
														return 5.08313;
													else
														return 4.62428;
												}
											}
											else
												return 3.05157;
										}
										else
										{
											if(rsrq < -11.5)
											{
												if(rsrp < -89.5)
												{
													if(rsrp < -90.5)
														return 8.09143;
													else
														return 9.98129;
												}
												else
												{
													if(rsrp < -88.5)
														return 3.24456;
													else
														return 6.02107;
												}
											}
											else
											{
												if(rsrp < -86.5)
												{
													if(ta < 14)
													{
														if(payload < 7.5)
														{
															if(sinr < 14.5)
																return 6.68019;
															else
																return 5.76535;
														}
														else
														{
															if(rsrp < -90.5)
																return 4.5623;
															else
																return 3.89508;
														}
													}
													else
														return 6.10571;
												}
												else
													return 3.48114;
											}
										}
									}
								}
								else
								{
									if(f < 2262.5)
									{
										if(sinr < 9.5)
										{
											if(rsrq < -6.5)
												return 10.784225;
											else
												return 27.8649;
										}
										else
										{
											if(rsrp < -82)
											{
												if(sinr < 20.5)
												{
													if(cqi < 7.5)
													{
														if(velocity < 10.49)
															return 8.25783;
														else
														{
															if(rsrq < -8.5)
																return 3.01796;
															else
																return 2.54642;
														}
													}
													else
													{
														if(rsrp < -85.5)
														{
															if(ta < 14.5)
															{
																if(rsrp < -88.5)
																{
																	if(sinr < 16.5)
																	{
																		if(sinr < 13.5)
																		{
																			if(sinr < 12.5)
																			{
																				if(rsrq < -7.5)
																					return 9.90252;
																				else
																					return 9.4857;
																			}
																			else
																				return 8.66152;
																		}
																		else
																			return 6.59522;
																	}
																	else
																	{
																		if(rsrp < -90.5)
																			return 9.56366;
																		else
																			return 10.7368;
																	}
																}
																else
																{
																	if(velocity < 10.36)
																	{
																		if(ta < 7)
																		{
																			if(rsrp < -87)
																				return 11.7763;
																			else
																				return 12.4583333333;
																		}
																		else
																			return 13.1989;
																	}
																	else
																		return 13.9342;
																}
															}
															else
																return 3.62956;
														}
														else
														{
															if(payload < 8.5)
															{
																if(sinr < 17)
																{
																	if(velocity < 11.925)
																	{
																		if(cell < 12896793.5)
																			return 5.23475;
																		else
																		{
																			if(sinr < 13)
																				return 6.14628;
																			else
																				return 5.38721;
																		}
																	}
																	else
																		return 9.06618;
																}
																else
																{
																	if(payload < 6)
																		return 10.1458;
																	else
																		return 7.45834;
																}
															}
															else
																return 10.4606;
														}
													}
												}
												else
												{
													if(rsrp < -89)
													{
														if(rsrp < -92)
															return 5.18068;
														else
															return 4.47219;
													}
													else
														return 2.96809;
												}
											}
											else
											{
												if(rsrp < -80.5)
													return 19.0225;
												else
												{
													if(ta < 3)
													{
														if(rsrp < -75.5)
															return 17.0455;
														else
															return 9.97506;
													}
													else
													{
														if(velocity < 3.145)
														{
															if(rsrq < -8)
																return 7.030025;
															else
															{
																if(cell < 12896781)
																	return 10.9256;
																else
																{
																	if(velocity < 0.55)
																		return 12.2982;
																	else
																		return 11.8019;
																}
															}
														}
														else
														{
															if(ta < 11.5)
															{
																if(rsrp < -73.5)
																	return 8.84297;
																else
																{
																	if(velocity < 6.035)
																	{
																		if(cqi < 10)
																			return 5.32623;
																		else
																			return 5.82411;
																	}
																	else
																	{
																		if(cqi < 10.5)
																			return 5.54895;
																		else
																			return 8.10537;
																	}
																}
															}
															else
																return 9.78234;
														}
													}
												}
											}
										}
									}
									else
									{
										if(sinr < 18)
										{
											if(velocity < 8.275)
											{
												if(ta < 5.5)
												{
													if(cqi < 10.5)
														return 15.788;
													else
														return 14.175;
												}
												else
													return 12.3409666667;
											}
											else
											{
												if(rsrp < -85.5)
													return 13.1332;
												else
													return 9.56175;
											}
										}
										else
											return 20.9424;
									}
								}
							}
							else
							{
								if(cqi < 9.5)
								{
									if(payload < 6.5)
									{
										if(payload < 4.5)
											return 15.8416;
										else
											return 7.11849;
									}
									else
									{
										if(rsrq < -9.5)
											return 15.748;
										else
										{
											if(rsrp < -99.5)
												return 19.7482;
											else
												return 17.943;
										}
									}
								}
								else
								{
									if(velocity < 11.975)
									{
										if(rsrp < -97.5)
										{
											if(payload < 7)
												return 10.8932;
											else
											{
												if(rsrp < -98.5)
													return 7.77454;
												else
													return 8.42993;
											}
										}
										else
										{
											if(cqi < 11)
												return 14.7977;
											else
												return 17.229;
										}
									}
									else
									{
										if(rsrp < -99)
											return 5.62489;
										else
											return 7.01754;
									}
								}
							}
						}
						else
						{
							if(rsrp < -71.5)
							{
								if(payload < 5.5)
								{
									if(payload < 4.5)
										return 0.90324975;
									else
									{
										if(cqi < 10.5)
											return 1.9719;
										else
											return 1.54071;
									}
								}
								else
									return 3.1537133333;
							}
							else
								return 4.33276;
						}
					}
					else
					{
						if(payload < 8.5)
						{
							if(payload < 4.5)
							{
								if(cell < 14345742)
								{
									if(payload < 3.5)
									{
										if(sinr < 22.5)
										{
											if(cqi < 6)
												return 15.4143;
											else
											{
												if(ta < 12.5)
												{
													if(ta < 5.5)
													{
														if(ta < 4.5)
															return 11.0345;
														else
															return 9.1359;
													}
													else
													{
														if(ta < 11.5)
														{
															if(rsrp < -94)
																return 13.1148;
															else
																return 11.7763;
														}
														else
														{
															if(rsrp < -77)
																return 11.1317;
															else
																return 10.3181;
														}
													}
												}
												else
													return 8.13559;
											}
										}
										else
											return 7.242;
									}
									else
									{
										if(sinr < 11.5)
										{
											if(velocity < 10.275)
											{
												if(velocity < 4.345)
													return 6.55064;
												else
													return 6.11154;
											}
											else
											{
												if(ta < 9)
													return 5.28926;
												else
													return 8.88149;
											}
										}
										else
										{
											if(velocity < 3.155)
											{
												if(rsrp < -99.5)
													return 10.5995;
												else
													return 9.81896;
											}
											else
											{
												if(rsrp < -89)
													return 8.29445;
												else
													return 7.24146;
											}
										}
									}
								}
								else
									return 14.1405;
							}
							else
							{
								if(rsrq < -9.5)
								{
									if(f < 1347.5)
										return 4.52807;
									else
									{
										if(rsrp < -107.5)
											return 1.33645;
										else
										{
											if(cqi < 7.5)
											{
												if(payload < 5.5)
													return 10.4004;
												else
													return 8.51064;
											}
											else
											{
												if(cqi < 10.5)
												{
													if(ta < 4.5)
														return 14.54825;
													else
													{
														if(ta < 5.5)
															return 11.925;
														else
														{
															if(rsrp < -92)
																return 13.6016;
															else
																return 13.1183;
														}
													}
												}
												else
													return 7.25185;
											}
										}
									}
								}
								else
								{
									if(ta < 12.5)
									{
										if(f < 2262.5)
										{
											if(velocity < 8.26)
											{
												if(ta < 9.5)
												{
													if(payload < 6.5)
														return 10.9619;
													else
														return 9.08704;
												}
												else
												{
													if(rsrq < -7.5)
													{
														if(payload < 5.5)
															return 17.6523;
														else
														{
															if(rsrq < -8.5)
																return 16.0458;
															else
																return 15.0869;
														}
													}
													else
													{
														if(velocity < 1.13)
														{
															if(sinr < 13)
																return 7.37327;
															else
															{
																if(rsrp < -78)
																	return 15.0416;
																else
																	return 15.8595;
															}
														}
														else
															return 14.9254;
													}
												}
											}
											else
											{
												if(cell < 13884174.5)
												{
													if(velocity < 12.38)
													{
														if(velocity < 9.25)
															return 3.72411;
														else
														{
															if(velocity < 9.92)
																return 9.2398033333;
															else
																return 7.6769183333;
														}
													}
													else
													{
														if(cell < 13825563)
														{
															if(rsrp < -79)
																return 13.4936;
															else
																return 12.1212;
														}
														else
															return 8.9101;
													}
												}
												else
													return 14.1374;
											}
										}
										else
										{
											if(cqi < 7.5)
											{
												if(payload < 7.5)
													return 10.5541;
												else
													return 9.30909;
											}
											else
											{
												if(payload < 7.5)
												{
													if(rsrq < -8.5)
													{
														if(rsrp < -101)
															return 16.586;
														else
															return 17.6757;
													}
													else
													{
														if(cell < 13875086)
														{
															if(ta < 3.5)
															{
																if(rsrp < -81)
																	return 14.9719;
																else
																	return 15.5885;
															}
															else
																return 16.98;
														}
														else
														{
															if(rsrp < -99.5)
																return 12.6697;
															else
																return 14.0146;
														}
													}
												}
												else
												{
													if(rsrp < -100)
														return 9.73828;
													else
														return 15.01976;
												}
											}
										}
									}
									else
									{
										if(rsrq < -6.5)
										{
											if(cqi < 8.5)
												return 9.03663;
											else
												return 10.2696;
										}
										else
											return 6.8223;
									}
								}
							}
						}
						else
						{
							if(cell < 14113818.5)
							{
								if(rsrp < -78)
								{
									if(velocity < 8.015)
									{
										if(sinr < 17.5)
										{
											if(payload < 9.5)
												return 17.0535;
											else
												return 12.8949;
										}
										else
											return 22.4579;
									}
									else
									{
										if(cqi < 9.5)
											return 17.1184;
										else
										{
											if(rsrq < -7)
											{
												if(payload < 9.5)
													return 22.9812;
												else
													return 24.2498;
											}
											else
												return 27.1903;
										}
									}
								}
								else
								{
									if(ta < 11.5)
									{
										if(cqi < 11.5)
										{
											if(payload < 9.5)
												return 16.9412;
											else
												return 16.3299;
										}
										else
											return 14.0051;
									}
									else
									{
										if(payload < 9.5)
											return 16.1871;
										else
											return 10.4753;
									}
								}
							}
							else
							{
								if(rsrq < -10)
								{
									if(ta < 5.5)
									{
										if(velocity < 8.99)
											return 1.84096;
										else
											return 2.44707;
									}
									else
									{
										if(rsrp < -98.5)
											return 8.71555;
										else
											return 13.4605;
									}
								}
								else
								{
									if(rsrp < -103)
										return 11.1794;
									else
									{
										if(rsrp < -101)
											return 17.3703;
										else
											return 21.84;
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
					if(rsrp < -81.5)
					{
						if(rsrq < -5.5)
						{
							if(sinr < 12.5)
							{
								if(cell < 13806081.5)
								{
									if(sinr < 9.5)
										return 1.824745;
									else
									{
										if(cell < 12903195)
										{
											if(velocity < 26.395)
												return 4.99376;
											else
												return 8.13008;
										}
										else
										{
											if(payload < 0.55)
											{
												if(sinr < 11.5)
												{
													if(rsrq < -11.5)
														return 4.96896;
													else
													{
														if(sinr < 10.5)
														{
															if(rsrq < -9)
																return 3.73833;
															else
																return 4.32434;
														}
														else
															return 4.96896;
													}
												}
												else
													return 6.40002;
											}
											else
											{
												if(rsrq < -6.5)
												{
													if(sinr < 11)
														return 4.356765;
													else
														return 3.94106;
												}
												else
													return 4.75059;
											}
										}
									}
								}
								else
								{
									if(cell < 13845134)
										return 1.4288175;
									else
									{
										if(rsrq < -6.5)
											return 3.8399428571;
										else
										{
											if(payload < 0.55)
												return 2.46915;
											else
												return 3.29083;
										}
									}
								}
							}
							else
							{
								if(sinr < 16.5)
								{
									if(ta < 3.5)
									{
										if(rsrp < -93.5)
											return 2.03926;
										else
											return 4.86421;
									}
									else
									{
										if(sinr < 15.5)
										{
											if(cqi < 9.5)
											{
												if(sinr < 13.5)
													return 7.60456;
												else
												{
													if(payload < 0.55)
														return 4.57145;
													else
													{
														if(velocity < 13.855)
															return 5.33156;
														else
															return 5.9418066667;
													}
												}
											}
											else
											{
												if(sinr < 13.5)
													return 8.69565;
												else
												{
													if(rsrq < -6.5)
														return 7.141265;
													else
														return 5.26318;
												}
											}
										}
										else
										{
											if(rsrp < -104)
												return 15.0943;
											else
											{
												if(velocity < 14.46)
													return 7.18133;
												else
													return 10.5263;
											}
										}
									}
								}
								else
								{
									if(rsrq < -6.5)
									{
										if(cell < 12903066.5)
											return 5.51851;
										else
										{
											if(ta < 11.5)
											{
												if(sinr < 21.5)
													return 3.903946;
												else
													return 3.37554;
											}
											else
											{
												if(payload < 2)
												{
													if(rsrp < -106)
														return 3.39415;
													else
														return 2.77874;
												}
												else
													return 1.88472;
											}
										}
									}
									else
									{
										if(velocity < 14.005)
											return 9.30236;
										else
										{
											if(cell < 13401487)
											{
												if(sinr < 22.5)
													return 8.52347;
												else
												{
													if(rsrp < -87)
														return 3.89674;
													else
														return 6.77201;
												}
											}
											else
											{
												if(rsrp < -88)
													return 3.7325;
												else
													return 2.02943;
											}
										}
									}
								}
							}
						}
						else
						{
							if(cqi < 10.5)
								return 12.6183;
							else
							{
								if(payload < 2)
								{
									if(cqi < 11.5)
										return 5.12164;
									else
										return 5.83944;
								}
								else
									return 12.4546;
							}
						}
					}
					else
					{
						if(cell < 12903310)
						{
							if(ta < 14.5)
							{
								if(payload < 1.25)
								{
									if(rsrp < -75)
										return 3.29218;
									else
										return 5.33335;
								}
								else
								{
									if(velocity < 14.89)
										return 4.24178;
									else
										return 6.95048;
								}
							}
							else
								return 2.75672;
						}
						else
						{
							if(velocity < 13.245)
								return 16.7481;
							else
							{
								if(velocity < 20.425)
								{
									if(ta < 12)
									{
										if(ta < 1.5)
											return 10.7431;
										else
										{
											if(ta < 2.5)
											{
												if(sinr < 21.5)
												{
													if(rsrp < -77.5)
														return 3.89105;
													else
														return 5.6338;
												}
												else
												{
													if(rsrq < -9)
														return 8.42105;
													else
													{
														if(rsrp < -76.5)
															return 7.1535;
														else
															return 6.6983;
													}
												}
											}
											else
											{
												if(ta < 9)
												{
													if(rsrp < -71)
													{
														if(cqi < 6.5)
															return 3.22191;
														else
															return 4.6738142857;
													}
													else
														return 2.22243;
												}
												else
													return 6.64728;
											}
										}
									}
									else
									{
										if(sinr < 19)
											return 7.20721;
										else
											return 16.9731;
									}
								}
								else
								{
									if(f < 1347.5)
									{
										if(rsrp < -72.5)
											return 11.5607;
										else
										{
											if(ta < 13.5)
												return 9.676705;
											else
												return 10.4987;
										}
									}
									else
										return 15.3846;
								}
							}
						}
					}
				}
				else
				{
					if(ta < 1.5)
					{
						if(rsrp < -86.5)
						{
							if(cqi < 11.5)
							{
								if(f < 1347.5)
								{
									if(rsrq < -9.5)
									{
										if(rsrp < -97)
											return 5.5948;
										else
											return 7.54984;
									}
									else
									{
										if(sinr < 18.5)
										{
											if(payload < 5)
												return 2.94686;
											else
												return 3.58744;
										}
										else
											return 5.50269;
									}
								}
								else
								{
									if(f < 2262.5)
									{
										if(velocity < 14.66)
											return 7.19683;
										else
										{
											if(velocity < 15.84)
												return 5.06714;
											else
											{
												if(rsrq < -9)
												{
													if(sinr < 10)
														return 5.77909;
													else
														return 6.36352;
												}
												else
													return 6.78399;
											}
										}
									}
									else
										return 9.68816;
								}
							}
							else
								return 17.3223;
						}
						else
						{
							if(rsrq < -9.5)
							{
								if(rsrp < -83)
								{
									if(velocity < 13.625)
										return 11.2694;
									else
										return 10.6938;
								}
								else
								{
									if(sinr < 8.5)
										return 5.33689;
									else
										return 7.518444;
								}
							}
							else
							{
								if(sinr < 9.5)
									return 7.91452;
								else
								{
									if(sinr < 10.5)
										return 18.6047;
									else
									{
										if(sinr < 11.5)
											return 8.42637;
										else
										{
											if(rsrq < -8.5)
											{
												if(velocity < 23.905)
													return 16.5375;
												else
													return 17.6454;
											}
											else
											{
												if(velocity < 14.145)
													return 10.1885;
												else
												{
													if(velocity < 14.47)
														return 16.2767;
													else
													{
														if(rsrq < -7.5)
															return 14.4875;
														else
															return 12.74868;
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
						if(cell < 12909466)
						{
							if(rsrp < -81.5)
							{
								if(payload < 6.5)
								{
									if(cqi < 8.5)
									{
										if(sinr < 10)
										{
											if(rsrp < -95)
												return 5.05636;
											else
												return 5.71531;
										}
										else
											return 6.97016;
									}
									else
									{
										if(cell < 12902426)
											return 9.31496;
										else
											return 8.39983;
									}
								}
								else
								{
									if(velocity < 14.365)
										return 7.1046;
									else
									{
										if(sinr < 16.5)
											return 4.48711;
										else
											return 4.937955;
									}
								}
							}
							else
							{
								if(payload < 7)
									return 10.7335;
								else
								{
									if(sinr < 16.5)
									{
										if(rsrp < -79)
											return 14.7692;
										else
											return 10.6213;
									}
									else
									{
										if(rsrp < -74)
											return 15.2417;
										else
											return 15.6678;
									}
								}
							}
						}
						else
						{
							if(velocity < 14.97)
							{
								if(cell < 14345742)
								{
									if(ta < 2.5)
									{
										if(velocity < 14.59)
										{
											if(rsrq < -8)
												return 13.6112;
											else
												return 9.60192;
										}
										else
										{
											if(payload < 5.5)
												return 10.16;
											else
											{
												if(sinr < 22)
													return 25.95;
												else
													return 22.2119;
											}
										}
									}
									else
									{
										if(payload < 5.5)
										{
											if(cqi < 6.5)
												return 4.694286;
											else
											{
												if(velocity < 14.295)
												{
													if(cell < 13884289.5)
													{
														if(rsrq < -7.5)
															return 5.88885;
														else
														{
															if(rsrp < -91.5)
																return 7.30594;
															else
																return 7.8645525;
														}
													}
													else
														return 4.81058;
												}
												else
												{
													if(rsrp < -103)
														return 7.73134;
													else
														return 14.7493;
												}
											}
										}
										else
										{
											if(velocity < 14.8)
											{
												if(ta < 13.5)
												{
													if(cell < 13884174.5)
													{
														if(velocity < 13.51)
														{
															if(ta < 9)
																return 11.51952;
															else
																return 9.69305;
														}
														else
														{
															if(cqi < 11.5)
															{
																if(rsrp < -106)
																	return 14.6074;
																else
																{
																	if(sinr < 19)
																	{
																		if(velocity < 13.915)
																		{
																			if(payload < 8)
																				return 13.7378;
																			else
																			{
																				if(cqi < 6.5)
																					return 15.6863;
																				else
																					return 15.1;
																			}
																		}
																		else
																		{
																			if(rsrq < -6.5)
																				return 10.772;
																			else
																			{
																				if(payload < 7)
																					return 12.2794;
																				else
																					return 12.8695;
																			}
																		}
																	}
																	else
																	{
																		if(payload < 8.5)
																		{
																			if(rsrq < -6.5)
																			{
																				if(payload < 7.5)
																					return 11.1376;
																				else
																					return 10.5021;
																			}
																			else
																				return 8.61605;
																		}
																		else
																			return 11.3154;
																	}
																}
															}
															else
																return 18.6232;
														}
													}
													else
													{
														if(rsrp < -103)
															return 14.553;
														else
														{
															if(payload < 6.5)
																return 14.3541;
															else
															{
																if(velocity < 13.525)
																	return 10.0939;
																else
																{
																	if(sinr < 13.5)
																		return 7.7447325;
																	else
																		return 6.46726;
																}
															}
														}
													}
												}
												else
												{
													if(payload < 6.5)
														return 14.1176;
													else
														return 19.1518;
												}
											}
											else
											{
												if(rsrq < -8.5)
													return 2.47917;
												else
													return 4.96702;
											}
										}
									}
								}
								else
								{
									if(payload < 6)
										return 14.8423;
									else
										return 27.027;
								}
							}
							else
							{
								if(cqi < 11.5)
								{
									if(ta < 11)
									{
										if(velocity < 26.585)
										{
											if(sinr < 10.5)
											{
												if(ta < 3.5)
													return 9.00394;
												else
													return 32.0384;
											}
											else
											{
												if(velocity < 16.175)
												{
													if(cell < 12914202.5)
													{
														if(rsrp < -86.5)
															return 9.81294;
														else
															return 9.17197;
													}
													else
													{
														if(ta < 8)
															return 11.685625;
														else
															return 10.8788;
													}
												}
												else
												{
													if(sinr < 13.5)
														return 6.16536;
													else
													{
														if(sinr < 31)
														{
															if(sinr < 26)
															{
																if(sinr < 24.5)
																{
																	if(cell < 12914202.5)
																		return 16.19855;
																	else
																	{
																		if(velocity < 17.06)
																			return 15.9257;
																		else
																		{
																			if(payload < 7.5)
																				return 13.83402;
																			else
																				return 12.3887;
																		}
																	}
																}
																else
																	return 17.1858;
															}
															else
															{
																if(cell < 12914201.5)
																	return 10.7185;
																else
																	return 11.4613;
															}
														}
														else
															return 17.9775;
													}
												}
											}
										}
										else
										{
											if(rsrp < -90.5)
												return 4.0953633333;
											else
											{
												if(rsrp < -88)
												{
													if(cqi < 10.5)
														return 16.3666;
													else
														return 12.7755;
												}
												else
												{
													if(sinr < 14)
													{
														if(rsrq < -9)
															return 11.5984;
														else
															return 10.8755;
													}
													else
													{
														if(payload < 9.5)
															return 6.44065;
														else
															return 8.25849;
													}
												}
											}
										}
									}
									else
									{
										if(rsrp < -96.5)
											return 5.05849;
										else
										{
											if(rsrp < -76)
											{
												if(payload < 4.5)
													return 16.9942;
												else
												{
													if(rsrq < -6.5)
														return 22.0058;
													else
														return 25.7471;
												}
											}
											else
												return 11.065;
										}
									}
								}
								else
								{
									if(ta < 14)
									{
										if(velocity < 24.535)
										{
											if(cell < 13632276)
											{
												if(velocity < 20.28)
												{
													if(velocity < 15.63)
													{
														if(payload < 6)
															return 20.9424;
														else
															return 21.9103;
													}
													else
													{
														if(rsrp < -82)
														{
															if(payload < 8.5)
																return 17.4055;
															else
																return 16.0107;
														}
														else
															return 18.7189;
													}
												}
												else
												{
													if(rsrp < -87)
														return 24.9653;
													else
														return 24.4009;
												}
											}
											else
												return 10.6201;
										}
										else
										{
											if(rsrq < -5.5)
											{
												if(velocity < 30.065)
													return 7.94123;
												else
												{
													if(payload < 5.5)
														return 8.72172;
													else
														return 11.4216;
												}
											}
											else
											{
												if(payload < 5)
													return 15.9046;
												else
													return 13.61525;
											}
										}
									}
									else
										return 31.6623;
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
				if(cell < 14345742)
				{
					if(payload < 2.5)
					{
						if(velocity < 11.72)
						{
							if(sinr < 11)
							{
								if(cqi < 14)
									return 0.848626;
								else
									return 0.127005;
							}
							else
							{
								if(payload < 0.75)
								{
									if(cell < 13613717)
									{
										if(velocity < 10.305)
										{
											if(velocity < 6.72)
											{
												if(rsrp < -78)
												{
													if(rsrq < -6.5)
														return 5.87372;
													else
														return 6.40002;
												}
												else
												{
													if(sinr < 23.5)
														return 7.0922;
													else
														return 7.64818;
												}
											}
											else
											{
												if(sinr < 21.5)
													return 3.88351;
												else
													return 5.22878;
											}
										}
										else
											return 8.08081;
									}
									else
									{
										if(cqi < 13.5)
											return 3.58746;
										else
										{
											if(sinr < 19.5)
												return 4.21054;
											else
											{
												if(ta < 11)
												{
													if(payload < 0.3)
														return 5.26318;
													else
														return 4.78469;
												}
												else
													return 4.16668;
											}
										}
									}
								}
								else
								{
									if(sinr < 20.5)
										return 3.376285;
									else
										return 2.62037;
								}
							}
						}
						else
						{
							if(ta < 15.5)
							{
								if(velocity < 15.3)
								{
									if(rsrp < -70.5)
									{
										if(rsrp < -86)
										{
											if(cqi < 14.5)
											{
												if(payload < 1.25)
												{
													if(payload < 0.3)
														return 8.60218;
													else
														return 8.19672;
												}
												else
													return 6.7086;
											}
											else
											{
												if(payload < 1.5)
													return 15.534;
												else
													return 13.8648;
											}
										}
										else
										{
											if(velocity < 14.23)
											{
												if(ta < 1.5)
												{
													if(rsrq < -7)
														return 8.43882;
													else
														return 10.1266;
												}
												else
												{
													if(cqi < 14.5)
													{
														if(rsrp < -83)
															return 6.21601;
														else
															return 5.34625;
													}
													else
													{
														if(rsrq < -5.5)
															return 3.03225;
														else
															return 4.40044;
													}
												}
											}
											else
											{
												if(sinr < 21)
												{
													if(cell < 12914202)
													{
														if(velocity < 14.61)
															return 9.68523;
														else
															return 9.1954;
													}
													else
													{
														if(sinr < 16.5)
															return 11.3154;
														else
															return 12.7796;
													}
												}
												else
												{
													if(velocity < 14.655)
														return 9.60961;
													else
													{
														if(rsrq < -5.5)
															return 7.91687;
														else
															return 7.07967;
													}
												}
											}
										}
									}
									else
									{
										if(ta < 1.5)
										{
											if(payload < 0.75)
												return 13.5135;
											else
												return 7.33945;
										}
										else
											return 16.98545;
									}
								}
								else
								{
									if(rsrq < -5.5)
									{
										if(payload < 0.75)
										{
											if(rsrq < -6.5)
											{
												if(ta < 8.5)
												{
													if(payload < 0.3)
														return 5.40543;
													else
														return 3.91007;
												}
												else
													return 8.16327;
											}
											else
												return 9.87654;
										}
										else
										{
											if(sinr < 20)
												return 6.1230566667;
											else
											{
												if(rsrp < -71)
												{
													if(rsrp < -74.5)
														return 3.42070125;
													else
														return 2.331;
												}
												else
													return 4.81203;
											}
										}
									}
									else
									{
										if(velocity < 16.52)
										{
											if(velocity < 16.04)
												return 4.92005;
											else
												return 3.46921;
										}
										else
										{
											if(sinr < 35.5)
											{
												if(velocity < 16.805)
													return 14.3756;
												else
												{
													if(ta < 5)
													{
														if(cell < 12918810)
															return 8.51067;
														else
														{
															if(velocity < 21.28)
																return 7.45226;
															else
															{
																if(rsrp < -88)
																	return 8.57449;
																else
																	return 5.696075;
															}
														}
													}
													else
													{
														if(payload < 0.3)
														{
															if(sinr < 24.5)
																return 9.4118;
															else
																return 6.6116;
														}
														else
														{
															if(rsrp < -61.5)
																return 12.1581;
															else
																return 11.236;
														}
													}
												}
											}
											else
												return 18.2857;
										}
									}
								}
							}
							else
							{
								if(sinr < 30)
									return 17.316;
								else
								{
									if(rsrp < -70)
										return 12.5392;
									else
										return 11.6959;
								}
							}
						}
					}
					else
					{
						if(f < 2262.5)
						{
							if(velocity < 13.905)
							{
								if(rsrp < -92.5)
								{
									if(velocity < 6.72)
										return 15.8993;
									else
										return 18.5615;
								}
								else
								{
									if(velocity < 13.35)
									{
										if(ta < 9)
										{
											if(rsrq < -8.5)
												return 11.415;
											else
											{
												if(rsrp < -81)
													return 14.6319;
												else
												{
													if(payload < 5)
														return 13.3668;
													else
														return 13.7615;
												}
											}
										}
										else
										{
											if(ta < 10.5)
												return 3.78788;
											else
											{
												if(payload < 3.5)
													return 12.3014;
												else
												{
													if(velocity < 10.98)
													{
														if(rsrp < -81)
															return 6.23701;
														else
															return 8.197215;
													}
													else
													{
														if(rsrp < -67.5)
															return 13.2144;
														else
															return 10.3292;
													}
												}
											}
										}
									}
									else
									{
										if(rsrq < -7)
											return 13.1796;
										else
										{
											if(rsrq < -5.5)
												return 18.9873;
											else
												return 17.1612;
										}
									}
								}
							}
							else
							{
								if(cell < 14092942)
								{
									if(rsrp < -79.5)
									{
										if(velocity < 15.175)
										{
											if(rsrq < -6.5)
											{
												if(rsrp < -104)
													return 10.568;
												else
													return 8.56837;
											}
											else
											{
												if(cell < 12918810)
													return 9.88468;
												else
													return 2.70088;
											}
										}
										else
										{
											if(payload < 3.5)
												return 12.3267;
											else
											{
												if(cell < 13401499)
												{
													if(sinr < 18.5)
													{
														if(sinr < 14.5)
														{
															if(sinr < 10.5)
																return 8.94354;
															else
																return 9.74421;
														}
														else
															return 13.337;
													}
													else
													{
														if(sinr < 25.5)
														{
															if(ta < 2.5)
																return 6.79579;
															else
															{
																if(rsrq < -5.5)
																	return 8.96459;
																else
																	return 8.2713;
															}
														}
														else
															return 9.1894733333;
													}
												}
												else
													return 6.7086;
											}
										}
									}
									else
									{
										if(ta < 1.5)
										{
											if(velocity < 15.55)
												return 16.5221;
											else
												return 7.183665;
										}
										else
										{
											if(sinr < 30.5)
											{
												if(velocity < 14.54)
												{
													if(payload < 4.5)
														return 4.37158;
													else
														return 5.33867;
												}
												else
												{
													if(velocity < 15.185)
													{
														if(rsrq < -8)
															return 6.30915;
														else
															return 5.87372;
													}
													else
														return 6.8994775;
												}
											}
											else
												return 8.330535;
										}
									}
								}
								else
								{
									if(payload < 4)
										return 15.0376;
									else
										return 11.8835;
								}
							}
						}
						else
						{
							if(rsrp < -77)
							{
								if(sinr < 20)
								{
									if(rsrp < -93.5)
										return 15.2381;
									else
									{
										if(rsrp < -81)
											return 11.973175;
										else
											return 13.4228;
									}
								}
								else
								{
									if(cqi < 14)
									{
										if(rsrq < -7.5)
											return 6.49175;
										else
											return 6.05602;
									}
									else
									{
										if(payload < 4)
											return 10.3448;
										else
											return 13.587;
									}
								}
							}
							else
							{
								if(payload < 4)
									return 17.2538;
								else
									return 18.1818;
							}
						}
					}
				}
				else
				{
					if(rsrp < -89)
					{
						if(rsrq < -6.5)
						{
							if(velocity < 11.7)
							{
								if(rsrp < -93)
									return 16.1834;
								else
									return 19.9203;
							}
							else
								return 9.9975;
						}
						else
						{
							if(payload < 4.5)
								return 22.7596;
							else
								return 19.10015;
						}
					}
					else
					{
						if(rsrq < -8)
							return 9.5903416667;
						else
						{
							if(rsrp < -84.5)
								return 11.3744;
							else
							{
								if(ta < 5)
									return 6.84346;
								else
									return 4.64576;
							}
						}
					}
				}
			}
			else
			{
				if(cell < 12914202)
				{
					if(cell < 12896793.5)
					{
						if(sinr < 25.5)
						{
							if(ta < 10.5)
							{
								if(cqi < 14.5)
								{
									if(rsrp < -75)
										return 14.3081;
									else
										return 18.2417;
								}
								else
								{
									if(rsrp < -72.5)
										return 22.3256;
									else
										return 10.2715;
								}
							}
							else
							{
								if(rsrq < -5.5)
								{
									if(velocity < 2.92)
									{
										if(rsrq < -9)
											return 15.0858;
										else
										{
											if(cell < 12896781)
												return 12.8323;
											else
												return 10.4322;
										}
									}
									else
									{
										if(sinr < 22.5)
										{
											if(sinr < 19.5)
												return 10.2302;
											else
												return 10.8043;
										}
										else
										{
											if(rsrq < -6.5)
											{
												if(sinr < 24)
													return 9.94036;
												else
													return 11.0752;
											}
											else
												return 6.17284;
										}
									}
								}
								else
									return 18.4067;
							}
						}
						else
						{
							if(rsrp < -61.5)
							{
								if(ta < 12)
								{
									if(payload < 8.5)
										return 17.5935;
									else
										return 18.9215;
								}
								else
									return 15.0066;
							}
							else
								return 25.2565;
						}
					}
					else
					{
						if(rsrp < -82.5)
						{
							if(ta < 13.5)
							{
								if(cqi < 14)
									return 7.57268;
								else
								{
									if(rsrp < -88.5)
										return 5.49504;
									else
										return 6.29327;
								}
							}
							else
								return 9.04722;
						}
						else
						{
							if(rsrq < -6.5)
							{
								if(rsrp < -78)
									return 16.4609;
								else
								{
									if(payload < 8.5)
										return 14.9848;
									else
										return 12.1993;
								}
							}
							else
								return 9.471508;
						}
					}
				}
				else
				{
					if(sinr < 24.5)
					{
						if(payload < 8.5)
						{
							if(ta < 3.5)
							{
								if(rsrq < -5.5)
								{
									if(rsrq < -7)
									{
										if(payload < 7.5)
											return 12.2538;
										else
											return 12.7085;
									}
									else
										return 14.3907;
								}
								else
								{
									if(rsrp < -81)
										return 12.8146;
									else
									{
										if(rsrp < -76)
											return 8.37321;
										else
											return 11.8343;
									}
								}
							}
							else
							{
								if(velocity < 20.27)
								{
									if(sinr < 20)
									{
										if(cqi < 14)
											return 15.2599;
										else
											return 11.4053;
									}
									else
									{
										if(cqi < 14)
											return 16.3599;
										else
											return 14.7738;
									}
								}
								else
									return 22.49;
							}
						}
						else
						{
							if(sinr < 16.5)
							{
								if(payload < 9.5)
									return 2.48937;
								else
								{
									if(velocity < 15.075)
									{
										if(f < 2262.5)
										{
											if(rsrp < -99.5)
												return 23.753;
											else
												return 22.06925;
										}
										else
											return 18.6611;
									}
									else
									{
										if(rsrq < -6.5)
											return 14.2552;
										else
											return 12.3362;
									}
								}
							}
							else
							{
								if(cell < 12918810.5)
								{
									if(payload < 9.5)
									{
										if(rsrp < -78.5)
											return 30.6775;
										else
											return 32.9369;
									}
									else
										return 25.3165;
								}
								else
								{
									if(ta < 3)
									{
										if(payload < 9.5)
											return 22.147;
										else
											return 26.6756;
									}
									else
									{
										if(rsrp < -76)
										{
											if(velocity < 24.05)
												return 16.1649;
											else
												return 9.18133;
										}
										else
											return 17.8771;
									}
								}
							}
						}
					}
					else
					{
						if(rsrp < -68)
						{
							if(sinr < 31)
							{
								if(ta < 10)
								{
									if(payload < 9.5)
									{
										if(sinr < 28)
											return 27.5981;
										else
											return 26.06522;
									}
									else
										return 31.0078;
								}
								else
								{
									if(payload < 8.5)
										return 32.0802;
									else
										return 29.9252;
								}
							}
							else
							{
								if(rsrp < -86)
									return 13.1067;
								else
								{
									if(rsrq < -5.5)
									{
										if(payload < 9.5)
											return 14.3113;
										else
										{
											if(rsrp < -79)
												return 24.6381;
											else
												return 21.4823;
										}
									}
									else
									{
										if(rsrp < -73.5)
										{
											if(velocity < 14.595)
												return 28.3061;
											else
											{
												if(payload < 8.5)
													return 27.2109;
												else
													return 28.0265;
											}
										}
										else
										{
											if(ta < 10)
												return 23.9282;
											else
												return 25.5591;
										}
									}
								}
							}
						}
						else
						{
							if(rsrq < -5.5)
								return 17.875775;
							else
								return 15.4525;
						}
					}
				}
			}
		}
	}
}

float o2_dl_tree_7(float payload, float rsrp, float rsrq, float sinr, float cqi, float ta, float velocity, float cell, float f)
{
	if(rsrq < -11.5)
	{
		if(ta < 4.5)
		{
			if(rsrp < -93)
			{
				if(sinr < 8)
				{
					if(sinr < -2.5)
					{
						if(cqi < 4.5)
						{
							if(payload < 7.5)
								return 3.380695;
							else
								return 4.46453;
						}
						else
						{
							if(rsrp < -101)
							{
								if(payload < 5.5)
									return 0.9983173333;
								else
									return 2.20534;
							}
							else
								return 3.92157;
						}
					}
					else
					{
						if(ta < 3.5)
						{
							if(rsrp < -111.5)
								return 4.446074;
							else
							{
								if(ta < 1.5)
								{
									if(payload < 5.5)
										return 1.24564;
									else
										return 1.89678;
								}
								else
								{
									if(ta < 2.5)
										return 3.0095;
									else
										return 3.52734;
								}
							}
						}
						else
						{
							if(payload < 6.5)
								return 6.23539;
							else
							{
								if(sinr < -0.5)
									return 5.39811;
								else
									return 4.99237;
							}
						}
					}
				}
				else
					return 8.29445;
			}
			else
			{
				if(sinr < -3)
				{
					if(sinr < -4.5)
						return 6.96561;
					else
						return 16.4002;
				}
				else
				{
					if(ta < 0.5)
						return 1.35392;
					else
					{
						if(payload < 3.5)
						{
							if(cqi < 5.5)
							{
								if(payload < 2)
									return 6.43087;
								else
									return 8.19952;
							}
							else
							{
								if(rsrp < -76.5)
								{
									if(rsrp < -86.5)
									{
										if(payload < 2)
											return 2.72294;
										else
											return 5.4807;
									}
									else
									{
										if(sinr < 5.5)
											return 4.46429;
										else
										{
											if(rsrq < -12.5)
												return 6.89658;
											else
												return 7.34619;
										}
									}
								}
								else
									return 0.411736;
							}
						}
						else
						{
							if(cell < 13403412)
							{
								if(sinr < 2.5)
								{
									if(rsrp < -88)
										return 11.982;
									else
									{
										if(sinr < 1.5)
										{
											if(sinr < 0.5)
											{
												if(payload < 8.5)
													return 9.62034;
												else
													return 8.78156;
											}
											else
												return 5.11182;
										}
										else
											return 10.4952;
									}
								}
								else
								{
									if(cell < 13155995)
									{
										if(ta < 2)
										{
											if(cell < 12903194.5)
											{
												if(rsrp < -88.5)
													return 8.40532;
												else
												{
													if(cqi < 9.5)
														return 9.13764;
													else
													{
														if(sinr < 19.5)
															return 8.29962;
														else
															return 8.94254;
													}
												}
											}
											else
												return 6.88666;
										}
										else
											return 10.5587;
									}
									else
									{
										if(payload < 5.5)
											return 5;
										else
											return 3.171295;
									}
								}
							}
							else
							{
								if(cqi < 7.5)
									return 11.5841166667;
								else
									return 17.0535;
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
				if(cell < 14344596)
				{
					if(cell < 12989325.5)
					{
						if(cell < 12907151)
						{
							if(velocity < 35.41)
							{
								if(rsrp < -74.5)
								{
									if(rsrp < -83.5)
									{
										if(sinr < -10)
											return 1.86399;
										else
										{
											if(cell < 12899841.5)
											{
												if(sinr < -0.5)
													return 0.38252;
												else
												{
													if(rsrq < -12.5)
														return 0.5545613333;
													else
														return 1.14438;
												}
											}
											else
											{
												if(sinr < -1.5)
												{
													if(sinr < -5.5)
														return 1.3720725;
													else
														return 0.793216;
												}
												else
												{
													if(payload < 5)
													{
														if(rsrp < -88.5)
															return 2.05324;
														else
															return 1.61437;
													}
													else
														return 1.17938;
												}
											}
										}
									}
									else
									{
										if(sinr < 0)
											return 3.100818;
										else
										{
											if(velocity < 13.76)
												return 3.73832;
											else
											{
												if(rsrq < -12.5)
													return 2.59319;
												else
													return 0.734484;
											}
										}
									}
								}
								else
								{
									if(rsrp < -71.5)
										return 5.6926;
									else
										return 7.17811;
								}
							}
							else
								return 8.61605;
						}
						else
						{
							if(cqi < 5.5)
							{
								if(rsrp < -101)
								{
									if(velocity < 29.915)
										return 4.35915;
									else
									{
										if(velocity < 35.085)
											return 3.413966;
										else
											return 3.83897;
									}
								}
								else
								{
									if(sinr < -8)
										return 2.78067;
									else
									{
										if(payload < 6)
										{
											if(velocity < 10.28)
											{
												if(rsrp < -99.5)
													return 12.3077;
												else
												{
													if(payload < 4)
														return 9.44882;
													else
														return 8.32466;
												}
											}
											else
											{
												if(payload < 0.75)
													return 2.63331;
												else
												{
													if(rsrq < -17.5)
														return 8.76712;
													else
													{
														if(payload < 3.5)
															return 6.25454;
														else
															return 5.17632;
													}
												}
											}
										}
										else
											return 1.8583;
									}
								}
							}
							else
							{
								if(payload < 1.5)
								{
									if(cqi < 9.5)
									{
										if(velocity < 15.325)
										{
											if(payload < 0.75)
											{
												if(velocity < 11.21)
												{
													if(rsrp < -93.5)
														return 0.727141;
													else
														return 2.09617;
												}
												else
													return 0.7119953333;
											}
											else
											{
												if(rsrq < -13.5)
													return 1.73762;
												else
												{
													if(ta < 6)
														return 2.32761;
													else
														return 3.7293433333;
												}
											}
										}
										else
										{
											if(payload < 0.55)
												return 4.96896;
											else
												return 2.72758;
										}
									}
									else
										return 5.90842;
								}
								else
								{
									if(rsrp < -93.5)
									{
										if(sinr < 1.5)
										{
											if(payload < 2.5)
												return 2.56369;
											else
											{
												if(velocity < 22.685)
													return 5.86941;
												else
												{
													if(rsrp < -105)
														return 3.8059;
													else
														return 2.38521;
												}
											}
										}
										else
										{
											if(cqi < 8)
											{
												if(ta < 7.5)
													return 1.56413;
												else
													return 2.20766;
											}
											else
												return 2.97508;
										}
									}
									else
									{
										if(ta < 7.5)
										{
											if(velocity < 15)
											{
												if(rsrp < -92.5)
													return 7.01037;
												else
												{
													if(velocity < 12.745)
													{
														if(rsrp < -91.5)
														{
															if(payload < 4.5)
																return 4.30339;
															else
																return 2.83487;
														}
														else
														{
															if(rsrp < -86)
																return 6.3136766667;
															else
																return 4.62428;
														}
													}
													else
														return 6.109715;
												}
											}
											else
												return 3.615;
										}
										else
										{
											if(rsrp < -88.5)
											{
												if(velocity < 1.57)
												{
													if(rsrp < -92)
														return 2.12837;
													else
														return 3.144605;
												}
												else
												{
													if(cqi < 6.5)
														return 2.58672;
													else
														return 1.490585;
												}
											}
											else
											{
												if(rsrp < -87.5)
													return 6.02107;
												else
													return 4.34075;
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if(cell < 13553922)
						{
							if(rsrp < -87.5)
							{
								if(rsrp < -94.5)
								{
									if(ta < 16.5)
									{
										if(sinr < 0.5)
										{
											if(cell < 13518990.5)
											{
												if(ta < 9)
												{
													if(rsrq < -13.5)
													{
														if(sinr < -3.5)
														{
															if(payload < 7)
															{
																if(cell < 13416986.5)
																{
																	if(sinr < -4.5)
																	{
																		if(rsrp < -99.5)
																		{
																			if(rsrp < -107)
																				return 1.23008;
																			else
																			{
																				if(cqi < 5.5)
																					return 0.9675124545;
																				else
																					return 0.426212;
																			}
																		}
																		else
																		{
																			if(payload < 1.05)
																				return 0.774446;
																			else
																				return 0.186369;
																		}
																	}
																	else
																		return 2.50031;
																}
																else
																	return 0.4181412;
															}
															else
																return 1.68443;
														}
														else
														{
															if(payload < 0.75)
																return 0.196524;
															else
															{
																if(velocity < 11.005)
																	return 0.3675768333;
																else
																{
																	if(cqi < 6.5)
																		return 1.0355935;
																	else
																		return 0.524109;
																}
															}
														}
													}
													else
													{
														if(rsrp < -107.5)
															return 2.78009;
														else
														{
															if(rsrp < -105)
																return 0.047809;
															else
															{
																if(payload < 7.5)
																{
																	if(rsrp < -96.5)
																	{
																		if(rsrp < -101.5)
																		{
																			if(velocity < 6.815)
																				return 1.15699;
																			else
																				return 0.598745;
																		}
																		else
																			return 1.4023311111;
																	}
																	else
																	{
																		if(payload < 3)
																			return 0.989915;
																		else
																			return 0.39629;
																	}
																}
																else
																	return 0.546691;
															}
														}
													}
												}
												else
												{
													if(rsrp < -95.5)
													{
														if(cell < 13495566)
														{
															if(sinr < -5.5)
															{
																if(rsrq < -16)
																	return 2.34719;
																else
																	return 1.87999;
															}
															else
															{
																if(rsrp < -98)
																	return 0.915645;
																else
																	return 1.6647;
															}
														}
														else
														{
															if(rsrq < -17.5)
																return 1.0643;
															else
															{
																if(ta < 11.5)
																	return 3.08523;
																else
																	return 4.29969;
															}
														}
													}
													else
														return 4.45541;
												}
											}
											else
											{
												if(payload < 2.5)
												{
													if(cell < 13542402.5)
													{
														if(rsrq < -17.5)
														{
															if(sinr < -7.5)
																return 0.495358;
															else
															{
																if(payload < 0.55)
																	return 2.58901;
																else
																	return 1.00025;
															}
														}
														else
														{
															if(payload < 0.75)
																return 0.4060110909;
															else
															{
																if(velocity < 4.445)
																{
																	if(velocity < 1.875)
																	{
																		if(payload < 1.5)
																			return 1.07802;
																		else
																			return 0.514347;
																	}
																	else
																		return 1.60032;
																}
																else
																	return 0.4532023333;
															}
														}
													}
													else
														return 0.30813975;
												}
												else
												{
													if(rsrp < -104.5)
														return 0.588962;
													else
													{
														if(cqi < 3.5)
															return 0.6084571111;
														else
														{
															if(rsrq < -14.5)
															{
																if(rsrq < -15.5)
																{
																	if(velocity < 14.225)
																	{
																		if(rsrp < -97.5)
																		{
																			if(sinr < -3.5)
																			{
																				if(sinr < -4.5)
																				{
																					if(payload < 4.5)
																						return 1.56699;
																					else
																					{
																						if(velocity < 6.98)
																							return 1.50028;
																						else
																							return 0.283663;
																					}
																				}
																				else
																				{
																					if(payload < 7)
																						return 1.49934;
																					else
																						return 0.613162;
																				}
																			}
																			else
																				return 2.47339;
																		}
																		else
																			return 0.5597776667;
																	}
																	else
																		return 2.51873;
																}
																else
																{
																	if(rsrp < -101.5)
																		return 2.26987;
																	else
																		return 1.78704;
																}
															}
															else
															{
																if(cell < 13542402.5)
																	return 0.61608175;
																else
																	return 1.0319;
															}
														}
													}
												}
											}
										}
										else
										{
											if(cell < 13479694.5)
											{
												if(payload < 3.5)
												{
													if(velocity < 2.305)
														return 1.4350633333;
													else
													{
														if(velocity < 13.975)
														{
															if(velocity < 7.88)
																return 0.477897;
															else
															{
																if(ta < 6.5)
																	return 0.942315;
																else
																	return 1.39131;
															}
														}
														else
															return 0.5464326667;
													}
												}
												else
												{
													if(sinr < 1.5)
													{
														if(payload < 5.5)
															return 0.826169;
														else
															return 4.39009;
													}
													else
													{
														if(cqi < 6.5)
														{
															if(payload < 5.5)
															{
																if(cqi < 5.5)
																	return 4.06339;
																else
																	return 3.20449;
															}
															else
															{
																if(payload < 6.5)
																	return 1.33537;
																else
																{
																	if(ta < 6.5)
																	{
																		if(velocity < 16.2)
																			return 2.3422833333;
																		else
																			return 1.87059;
																	}
																	else
																		return 3.25998;
																}
															}
														}
														else
														{
															if(cqi < 7.5)
																return 0.484599;
															else
																return 1.00821;
														}
													}
												}
											}
											else
											{
												if(payload < 5.5)
													return 0.4460375;
												else
													return 1.2954;
											}
										}
									}
									else
									{
										if(payload < 2.5)
										{
											if(ta < 17.5)
												return 2.59151;
											else
											{
												if(payload < 0.75)
													return 0.15873;
												else
													return 1.2035066667;
											}
										}
										else
										{
											if(rsrq < -13.5)
											{
												if(payload < 5.5)
													return 5.505075;
												else
													return 2.98675;
											}
											else
												return 2.765488;
										}
									}
								}
								else
								{
									if(payload < 6.5)
									{
										if(cell < 13542402.5)
										{
											if(sinr < 2.5)
											{
												if(velocity < 4.915)
													return 3.16207;
												else
												{
													if(cqi < 5.5)
													{
														if(velocity < 12.825)
															return 2.07308;
														else
															return 1.26036;
													}
													else
														return 0.21889675;
												}
											}
											else
											{
												if(sinr < 5)
													return 2.56492;
												else
													return 3.83509;
											}
										}
										else
										{
											if(rsrp < -90)
											{
												if(rsrp < -92)
													return 5.11727;
												else
													return 6.35425;
											}
											else
												return 0.299738;
										}
									}
									else
									{
										if(sinr < -0.5)
											return 1.9682;
										else
											return 0.8461213333;
									}
								}
							}
							else
							{
								if(sinr < 3.5)
								{
									if(payload < 5)
										return 2.14161;
									else
										return 4.11876;
								}
								else
									return 10.4661;
							}
						}
						else
						{
							if(velocity < 14.08)
							{
								if(ta < 37)
								{
									if(cell < 13826841.5)
									{
										if(rsrq < -12.5)
										{
											if(cqi < 6.5)
											{
												if(velocity < 8.87)
													return 4.00842;
												else
												{
													if(payload < 7)
														return 2.25818;
													else
														return 3.27785;
												}
											}
											else
												return 2.27985;
										}
										else
										{
											if(velocity < 6.02)
												return 3.35395;
											else
											{
												if(payload < 2.5)
													return 6.02864;
												else
													return 5.22278;
											}
										}
									}
									else
									{
										if(payload < 1.5)
										{
											if(rsrq < -19.5)
												return 7.36648;
											else
											{
												if(cqi < 13)
												{
													if(ta < 12.5)
													{
														if(rsrq < -17.5)
															return 0.458085;
														else
														{
															if(cqi < 4.5)
															{
																if(rsrq < -15.5)
																	return 1.66321;
																else
																	return 2.35989;
															}
															else
															{
																if(rsrp < -88.5)
																{
																	if(sinr < -1.5)
																		return 0.932727;
																	else
																		return 1.49924;
																}
																else
																	return 0.93899725;
															}
														}
													}
													else
													{
														if(rsrq < -13.5)
															return 0.260163;
														else
															return 2.19781;
													}
												}
												else
													return 0.127005;
											}
										}
										else
										{
											if(cell < 13884161.5)
											{
												if(rsrp < -106.5)
													return 3.96488;
												else
												{
													if(cell < 13854094.5)
													{
														if(cqi < 2.5)
															return 3.03099;
														else
														{
															if(payload < 7)
															{
																if(rsrp < -99.5)
																	return 1.90476125;
																else
																	return 1.4150433333;
															}
															else
																return 0.525374;
														}
													}
													else
													{
														if(cell < 13880579)
														{
															if(velocity < 12.98)
																return 0.6821336667;
															else
															{
																if(rsrp < -103.5)
																{
																	if(rsrq < -15)
																	{
																		if(velocity < 13.625)
																			return 0.898977;
																		else
																			return 1.36869;
																	}
																	else
																		return 1.38098;
																}
																else
																	return 0.8666423333;
															}
														}
														else
														{
															if(velocity < 11.08)
															{
																if(rsrp < -96.5)
																	return 1.39952;
																else
																	return 0.993049;
															}
															else
															{
																if(payload < 7.5)
																	return 1.45549;
																else
																	return 2.85753;
															}
														}
													}
												}
											}
											else
											{
												if(cell < 13884301)
												{
													if(sinr < -2)
														return 3.6223633333;
													else
													{
														if(cqi < 5.5)
															return 5.95365;
														else
															return 6.76819;
													}
												}
												else
												{
													if(sinr < 0.5)
													{
														if(rsrq < -12.5)
														{
															if(rsrq < -15)
																return 0.9406946667;
															else
															{
																if(sinr < -0.5)
																	return 1.2035783333;
																else
																{
																	if(rsrp < -93.5)
																		return 2.46268;
																	else
																		return 1.34941;
																}
															}
														}
														else
															return 2.56781;
													}
													else
														return 4.5865;
												}
											}
										}
									}
								}
								else
									return 8.53789;
							}
							else
							{
								if(cqi < 5.5)
								{
									if(payload < 0.3)
									{
										if(rsrq < -14.5)
										{
											if(sinr < 0)
												return 0.2351223333;
											else
												return 1.68777;
										}
										else
											return 3.22582;
									}
									else
									{
										if(cell < 13817102)
										{
											if(payload < 5.5)
											{
												if(sinr < -5)
													return 5.47196;
												else
													return 4.70035;
											}
											else
												return 3.28426;
										}
										else
										{
											if(ta < 12.5)
											{
												if(rsrq < -12.5)
												{
													if(rsrp < -92.5)
														return 1.3725133333;
													else
														return 1.86032;
												}
												else
													return 2.82919;
											}
											else
											{
												if(rsrp < -99)
													return 4.41928;
												else
													return 2.08252;
											}
										}
									}
								}
								else
								{
									if(rsrp < -101)
										return 6.73212;
									else
									{
										if(cell < 13884173.5)
										{
											if(velocity < 20.74)
											{
												if(velocity < 14.585)
													return 4.16668;
												else
													return 8.11085;
											}
											else
												return 3.9767933333;
										}
										else
										{
											if(cqi < 7.5)
											{
												if(cqi < 6.5)
												{
													if(rsrp < -96)
														return 3.65714;
													else
														return 4.65118;
												}
												else
												{
													if(payload < 6)
														return 2.407015;
													else
														return 3.201875;
												}
											}
											else
												return 0.490497;
										}
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
						if(payload < 3.5)
						{
							if(payload < 2.5)
								return 6.87876;
							else
								return 9.1359;
						}
						else
						{
							if(velocity < 8.16)
								return 12.03;
							else
								return 11.5345;
						}
					}
					else
					{
						if(rsrp < -109.5)
							return 7.38007;
						else
							return 1.74293;
					}
				}
			}
			else
			{
				if(cqi < 2)
				{
					if(rsrq < -16)
						return 2.45821;
					else
						return 26.1352;
				}
				else
				{
					if(cell < 13176066)
					{
						if(ta < 12.5)
						{
							if(rsrp < -76)
							{
								if(f < 1347.5)
								{
									if(velocity < 33.675)
									{
										if(cqi < 7.5)
											return 19.6223;
										else
											return 17.192;
									}
									else
										return 16.2767;
								}
								else
								{
									if(sinr < 13)
									{
										if(rsrp < -92)
											return 10.6866;
										else
											return 9.19118;
									}
									else
										return 6.8578;
								}
							}
							else
								return 3.05157;
						}
						else
						{
							if(sinr < -5)
								return 2.22922;
							else
							{
								if(f < 1347.5)
									return 4.96617;
								else
									return 6.80504;
							}
						}
					}
					else
					{
						if(ta < 34.5)
						{
							if(sinr < -1.5)
							{
								if(velocity < 14.75)
								{
									if(rsrp < -99.5)
									{
										if(rsrq < -15.5)
										{
											if(velocity < 13.465)
											{
												if(payload < 9.5)
													return 1.2466;
												else
												{
													if(rsrq < -16.5)
														return 3.3956333333;
													else
														return 4.06607;
												}
											}
											else
												return 1.120205;
										}
										else
										{
											if(rsrp < -100.5)
											{
												if(payload < 9.5)
												{
													if(velocity < 6.215)
														return 2.51151;
													else
													{
														if(f < 1347.5)
															return 0.407641;
														else
															return 1.33375;
													}
												}
												else
													return 1.63142;
											}
											else
												return 3.61918;
										}
									}
									else
									{
										if(sinr < -8.5)
											return 2.03126;
										else
										{
											if(ta < 6.5)
												return 1.60121;
											else
												return 0.8640203333;
										}
									}
								}
								else
									return 4.37504;
							}
							else
							{
								if(cell < 14345742)
								{
									if(cqi < 6.5)
									{
										if(cell < 13854873)
										{
											if(f < 1347.5)
												return 1.50875;
											else
											{
												if(ta < 10)
												{
													if(ta < 6.5)
														return 4.04881;
													else
														return 3.37325;
												}
												else
													return 5.1178;
											}
										}
										else
										{
											if(rsrp < -91.5)
											{
												if(rsrq < -12.5)
													return 8.59199;
												else
													return 15.7102;
											}
											else
												return 6.23701;
										}
									}
									else
									{
										if(cell < 13854990)
										{
											if(cqi < 8.5)
											{
												if(rsrp < -94)
													return 2.607;
												else
													return 3.75352;
											}
											else
												return 5.65411;
										}
										else
										{
											if(cqi < 10.5)
											{
												if(rsrp < -88)
													return 1.20591;
												else
													return 4.25509;
											}
											else
												return 1.39616;
										}
									}
								}
								else
								{
									if(rsrp < -99.5)
										return 18.8813;
									else
										return 13.4605;
								}
							}
						}
						else
							return 14.771;
					}
				}
			}
		}
	}
	else
	{
		if(payload < 2.5)
		{
			if(rsrq < -6.5)
			{
				if(sinr < 12.5)
				{
					if(rsrp < -90.5)
					{
						if(velocity < 14.89)
						{
							if(cell < 12918810)
							{
								if(rsrp < -104)
									return 6.70297;
								else
								{
									if(rsrq < -7.5)
									{
										if(sinr < 8)
										{
											if(ta < 10.5)
											{
												if(cqi < 6.5)
													return 2.23214;
												else
												{
													if(sinr < 4.5)
														return 3.76471;
													else
														return 4.23282;
												}
											}
											else
												return 2.01334;
										}
										else
										{
											if(rsrp < -98)
												return 2.76865;
											else
											{
												if(sinr < 9.5)
												{
													if(cqi < 10.5)
														return 2.56451;
													else
														return 1.93283;
												}
												else
												{
													if(ta < 4)
														return 1.21341;
													else
														return 1.62338;
												}
											}
										}
									}
									else
									{
										if(ta < 7)
										{
											if(payload < 0.3)
												return 3.13727;
											else
												return 7.44879;
										}
										else
										{
											if(rsrp < -94)
											{
												if(sinr < 10.5)
													return 3.3677066667;
												else
													return 2.34707;
											}
											else
												return 4.73375;
										}
									}
								}
							}
							else
							{
								if(ta < 15)
								{
									if(f < 1347.5)
										return 0.920421;
									else
									{
										if(f < 2262.5)
										{
											if(rsrp < -99.5)
											{
												if(payload < 0.75)
													return 2.1692;
												else
												{
													if(sinr < -1.5)
														return 1.3459;
													else
														return 0.851154;
												}
											}
											else
											{
												if(cqi < 10.5)
												{
													if(rsrq < -10.5)
														return 3.84061;
													else
													{
														if(rsrq < -7.5)
															return 2.2316166667;
														else
															return 1.12676;
													}
												}
												else
													return 3.96138;
											}
										}
										else
										{
											if(rsrp < -99.5)
											{
												if(payload < 0.75)
												{
													if(rsrp < -106)
														return 3.36136;
													else
														return 3.8835;
												}
												else
													return 4.89297;
											}
											else
											{
												if(payload < 1.05)
													return 1.76212;
												else
													return 2.85816;
											}
										}
									}
								}
								else
								{
									if(payload < 1.05)
										return 0.284496;
									else
										return 1.45059;
								}
							}
						}
						else
						{
							if(velocity < 15.515)
							{
								if(sinr < 4)
								{
									if(payload < 1.5)
									{
										if(rsrq < -8.5)
											return 6.9808;
										else
											return 6.0241;
									}
									else
										return 8.63465;
								}
								else
								{
									if(cell < 13396890)
									{
										if(payload < 0.75)
											return 2.67023;
										else
											return 1.74102;
									}
									else
										return 6.49614;
								}
							}
							else
							{
								if(rsrq < -10.5)
									return 8.14664;
								else
								{
									if(cqi < 8.5)
									{
										if(rsrp < -106)
										{
											if(ta < 23)
												return 4.32434;
											else
												return 2.97399;
										}
										else
										{
											if(velocity < 22.62)
											{
												if(sinr < 9.5)
												{
													if(rsrq < -9)
														return 2.781435;
													else
														return 2.4053433333;
												}
												else
													return 4.46929;
											}
											else
												return 1.3183933333;
										}
									}
									else
									{
										if(rsrp < -92.5)
										{
											if(velocity < 29.765)
											{
												if(ta < 29)
													return 4.37278;
												else
													return 3.80409;
											}
											else
												return 5.97015;
										}
										else
											return 2.04656;
									}
								}
							}
						}
					}
					else
					{
						if(rsrq < -9.5)
						{
							if(rsrp < -75)
							{
								if(velocity < 17.28)
								{
									if(cell < 12904596.5)
									{
										if(sinr < 11.5)
										{
											if(sinr < 8.5)
												return 9.48992;
											else
											{
												if(sinr < 10.5)
													return 7.64818;
												else
													return 6.48824;
											}
										}
										else
											return 3.1917;
									}
									else
									{
										if(velocity < 13.41)
										{
											if(cell < 14003458.5)
											{
												if(cell < 13404430)
												{
													if(cqi < 10.5)
													{
														if(rsrq < -10.5)
														{
															if(velocity < 8.885)
															{
																if(payload < 1.5)
																	return 5.37273;
																else
																	return 2.02788;
															}
															else
															{
																if(cqi < 8.5)
																{
																	if(payload < 1.05)
																		return 4.65118;
																	else
																		return 3.68579;
																}
																else
																{
																	if(rsrp < -84.5)
																		return 9.93172;
																	else
																		return 5.77201;
																}
															}
														}
														else
														{
															if(ta < 10.5)
																return 7.27273;
															else
																return 6.24268;
														}
													}
													else
														return 1.31991;
												}
												else
												{
													if(rsrq < -10.5)
													{
														if(rsrp < -82.5)
														{
															if(cqi < 8.5)
																return 4.23282;
															else
																return 5.63382;
														}
														else
															return 6.4;
													}
													else
													{
														if(payload < 1.05)
															return 6.83763;
														else
															return 7.29594;
													}
												}
											}
											else
												return 2.47066;
										}
										else
										{
											if(sinr < 3.5)
											{
												if(payload < 0.3)
													return 4.96896;
												else
													return 6.0241;
											}
											else
											{
												if(payload < 0.55)
													return 3.81921;
												else
												{
													if(payload < 1.5)
														return 1.91939;
													else
														return 3.82318;
												}
											}
										}
									}
								}
								else
									return 13.2231;
							}
							else
								return 0.759842;
						}
						else
						{
							if(velocity < 7.77)
							{
								if(f < 2262.5)
								{
									if(velocity < 5.535)
									{
										if(cqi < 8.5)
										{
											if(rsrp < -85)
											{
												if(cqi < 7.5)
													return 5.52486;
												else
													return 4.02012;
											}
											else
												return 8.7967266667;
										}
										else
										{
											if(ta < 11.5)
											{
												if(cqi < 10.5)
													return 3.71233;
												else
												{
													if(rsrq < -7.5)
														return 1.97775;
													else
														return 2.63158;
												}
											}
											else
											{
												if(rsrq < -8.5)
													return 3.68579;
												else
												{
													if(rsrp < -84.5)
														return 2.75292;
													else
														return 6.6778;
												}
											}
										}
									}
									else
										return 10.1652;
								}
								else
								{
									if(ta < 2.5)
									{
										if(payload < 1.25)
											return 2.35294;
										else
											return 1.91365;
									}
									else
										return 3.33335;
								}
							}
							else
							{
								if(velocity < 11.555)
								{
									if(cell < 13410311.5)
									{
										if(rsrq < -7.5)
										{
											if(cqi < 7)
												return 1.74634;
											else
											{
												if(rsrq < -8.5)
													return 0.569638;
												else
													return 1.15741;
											}
										}
										else
											return 0.48852;
									}
									else
										return 2.05581;
								}
								else
								{
									if(sinr < 7.5)
									{
										if(payload < 1.5)
										{
											if(cqi < 5.5)
												return 1.91388;
											else
											{
												if(cell < 13814542)
												{
													if(sinr < 4.5)
														return 3.243175;
													else
													{
														if(payload < 0.75)
															return 3.99202;
														else
															return 3.60198;
													}
												}
												else
													return 2.86328;
											}
										}
										else
										{
											if(cell < 13150612.5)
												return 3.21673;
											else
												return 7.67386;
										}
									}
									else
									{
										if(f < 1347.5)
											return 4.035195;
										else
										{
											if(velocity < 12.81)
												return 4.0971266667;
											else
											{
												if(rsrq < -8.5)
													return 3.29218;
												else
												{
													if(rsrp < -89)
														return 5.55556;
													else
														return 6.322838;
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
					if(velocity < 15.33)
					{
						if(rsrp < -63)
						{
							if(velocity < 14.49)
							{
								if(rsrp < -104)
								{
									if(ta < 8.5)
										return 12.1581;
									else
										return 4.53001;
								}
								else
								{
									if(velocity < 3.97)
									{
										if(payload < 0.75)
										{
											if(ta < 9)
											{
												if(rsrp < -81.5)
												{
													if(payload < 0.3)
													{
														if(ta < 4.5)
														{
															if(cell < 13362445.5)
																return 4.96896;
															else
																return 4.365412;
														}
														else
															return 6.29924;
													}
													else
													{
														if(cqi < 13)
														{
															if(rsrp < -88)
																return 7.20721;
															else
																return 8.17996;
														}
														else
															return 5.87372;
													}
												}
												else
													return 3.9918816667;
											}
											else
											{
												if(f < 1347.5)
												{
													if(rsrp < -90)
														return 7.57576;
													else
														return 8.09717;
												}
												else
												{
													if(rsrq < -9.5)
													{
														if(rsrp < -68.5)
															return 11.0193;
														else
															return 4.89596;
													}
													else
													{
														if(rsrq < -7.5)
															return 5.63382;
														else
															return 4.93829;
													}
												}
											}
										}
										else
										{
											if(velocity < 1.41)
											{
												if(cell < 12904724.5)
													return 7.14605;
												else
												{
													if(cell < 13627668)
														return 2.33134;
													else
													{
														if(sinr < 22)
															return 3.79147;
														else
															return 4.64576;
													}
												}
											}
											else
											{
												if(cqi < 10)
													return 1.93167;
												else
													return 1.20992;
											}
										}
									}
									else
									{
										if(cell < 13161620)
										{
											if(rsrp < -80.5)
											{
												if(velocity < 9.085)
												{
													if(velocity < 5.015)
														return 5.40543;
													else
													{
														if(ta < 9)
														{
															if(ta < 2.5)
																return 10.6596;
															else
																return 8.51067;
														}
														else
															return 5.33333;
													}
												}
												else
												{
													if(cqi < 11)
													{
														if(sinr < 16.5)
														{
															if(rsrp < -89)
															{
																if(velocity < 13.855)
																{
																	if(rsrp < -95)
																		return 4.8485;
																	else
																		return 5.33156;
																}
																else
																	return 6.0015;
															}
															else
																return 7.3536;
														}
														else
															return 3.88112;
													}
													else
													{
														if(payload < 1.05)
															return 5.24643;
														else
														{
															if(sinr < 21.5)
																return 2.64288;
															else
																return 3.07338;
														}
													}
												}
											}
											else
											{
												if(sinr < 16)
													return 7.0922;
												else
												{
													if(ta < 10.5)
														return 1.600695;
													else
													{
														if(cqi < 13.5)
															return 3.6717;
														else
															return 2.77971;
													}
												}
											}
										}
										else
										{
											if(sinr < 17.5)
											{
												if(cqi < 14)
												{
													if(payload < 0.3)
													{
														if(rsrp < -80.5)
															return 5.59443;
														else
															return 4.67838;
													}
													else
													{
														if(rsrq < -7.5)
														{
															if(cqi < 7.5)
																return 5.24246;
															else
																return 7.6293157143;
														}
														else
														{
															if(rsrp < -91.5)
																return 9.68523;
															else
																return 8.58369;
														}
													}
												}
												else
													return 13.8648;
											}
											else
											{
												if(cell < 13823002.5)
													return 12.7389;
												else
												{
													if(payload < 1.5)
													{
														if(cqi < 11.5)
														{
															if(sinr < 22)
																return 3.97413;
															else
																return 4.38116;
														}
														else
														{
															if(ta < 7.5)
																return 5.53249;
															else
																return 4.78469;
														}
													}
													else
														return 6.20636;
												}
											}
										}
									}
								}
							}
							else
							{
								if(rsrq < -7.5)
									return 7.20721;
								else
								{
									if(ta < 8)
										return 12.7796;
									else
										return 11.3154;
								}
							}
						}
						else
							return 13.5135;
					}
					else
					{
						if(ta < 11.5)
						{
							if(cqi < 14.5)
							{
								if(sinr < 25.5)
								{
									if(rsrp < -91.5)
										return 3.306605;
									else
										return 3.7359166667;
								}
								else
									return 4.81203;
							}
							else
								return 2.331;
						}
						else
						{
							if(sinr < 23)
							{
								if(ta < 15)
								{
									if(sinr < 19.5)
										return 7.44879;
									else
										return 8.16327;
								}
								else
									return 4.08685;
							}
							else
								return 2.77874;
						}
					}
				}
			}
			else
			{
				if(rsrp < -73.5)
				{
					if(cell < 12909466)
					{
						if(sinr < 19.5)
						{
							if(cell < 12896793.5)
							{
								if(payload < 1.25)
									return 2.86328;
								else
									return 4.24178;
							}
							else
							{
								if(sinr < 14)
									return 6.95048;
								else
									return 4.41379;
							}
						}
						else
						{
							if(cell < 12903183)
							{
								if(sinr < 21.5)
									return 1.43472;
								else
									return 2.6544575;
							}
							else
								return 4.23841;
						}
					}
					else
					{
						if(cell < 13884162.5)
						{
							if(rsrp < -97.5)
							{
								if(payload < 1.5)
								{
									if(rsrp < -99.5)
										return 8.19672;
									else
									{
										if(sinr < 11.5)
											return 4.96896;
										else
											return 7.20723;
									}
								}
								else
								{
									if(rsrp < -100.5)
										return 2.03926;
									else
										return 4.15909;
								}
							}
							else
							{
								if(rsrp < -81)
								{
									if(velocity < 14.45)
									{
										if(ta < 10)
										{
											if(rsrp < -83.5)
											{
												if(rsrp < -87.5)
													return 6.45422;
												else
													return 4.46927;
											}
											else
												return 12.6183;
										}
										else
										{
											if(velocity < 12.6)
											{
												if(rsrq < -5.5)
												{
													if(rsrp < -91)
														return 14.1343;
													else
														return 14.5852;
												}
												else
													return 15.534;
											}
											else
												return 8.60218;
										}
									}
									else
									{
										if(sinr < 22.5)
										{
											if(cqi < 11.5)
												return 4.9979566667;
											else
											{
												if(velocity < 23.895)
												{
													if(cell < 12914201.5)
														return 14.3756;
													else
													{
														if(cqi < 13)
															return 11.9048;
														else
														{
															if(payload < 0.75)
																return 7.27273;
															else
																return 8.57449;
														}
													}
												}
												else
													return 17.4672;
											}
										}
										else
										{
											if(sinr < 30)
											{
												if(rsrp < -82.5)
												{
													if(velocity < 25.135)
														return 3.837835;
													else
														return 3.34169;
												}
												else
													return 5.71837;
											}
											else
											{
												if(rsrp < -85)
													return 7.45226;
												else
													return 9.23788;
											}
										}
									}
								}
								else
								{
									if(velocity < 18.495)
									{
										if(cell < 12914201)
											return 6.20396;
										else
										{
											if(velocity < 6.24)
											{
												if(cqi < 13)
												{
													if(payload < 1.05)
														return 4.6243;
													else
														return 7.25624;
												}
												else
													return 7.0922;
											}
											else
											{
												if(rsrp < -74.5)
												{
													if(payload < 0.3)
														return 5.3597433333;
													else
													{
														if(ta < 3.5)
															return 4.856978;
														else
															return 5.39447;
													}
												}
												else
													return 5.6338;
											}
										}
									}
									else
										return 15.3846;
								}
							}
						}
						else
						{
							if(cqi < 10.5)
							{
								if(velocity < 20.98)
									return 4.4599328571;
								else
								{
									if(ta < 15.5)
										return 2.619615;
									else
										return 1.13395;
								}
							}
							else
							{
								if(velocity < 37.4)
								{
									if(sinr < 13)
										return 8.08898;
									else
									{
										if(cell < 14301698)
										{
											if(payload < 1.5)
											{
												if(velocity < 14.03)
												{
													if(sinr < 16.5)
													{
														if(rsrp < -85)
															return 3.29625;
														else
															return 5.29801;
													}
													else
														return 5.54401;
												}
												else
												{
													if(sinr < 27.5)
														return 3.69004;
													else
														return 2.02943;
												}
											}
											else
												return 6.64728;
										}
										else
										{
											if(rsrp < -88)
												return 6.29921;
											else
												return 5.747745;
										}
									}
								}
								else
									return 10.3093;
							}
						}
					}
				}
				else
				{
					if(velocity < 11.975)
					{
						if(sinr < 23)
						{
							if(sinr < 20)
								return 3.70588;
							else
							{
								if(velocity < 9.37)
									return 5.40906;
								else
								{
									if(rsrq < -5.5)
										return 6.28437;
									else
										return 7.24638;
								}
							}
						}
						else
							return 10.2828;
					}
					else
					{
						if(sinr < 8)
							return 4.24403;
						else
						{
							if(f < 1347.5)
							{
								if(sinr < 26)
								{
									if(rsrq < -4.5)
									{
										if(sinr < 12)
											return 8.60218;
										else
										{
											if(rsrq < -5.5)
												return 10.4987;
											else
											{
												if(rsrp < -67.5)
													return 9.456495;
												else
													return 9.85222;
											}
										}
									}
									else
										return 12.1581;
								}
								else
								{
									if(velocity < 31.91)
										return 11.236;
									else
										return 6.38663;
								}
							}
							else
							{
								if(cqi < 14.5)
									return 4.79044;
								else
								{
									if(ta < 1.5)
									{
										if(payload < 0.55)
											return 10.1266;
										else
										{
											if(payload < 1.5)
												return 7.33945;
											else
												return 9.60961;
										}
									}
									else
									{
										if(velocity < 15.78)
										{
											if(rsrp < -71)
												return 16.5289;
											else
												return 17.0576;
										}
										else
										{
											if(ta < 9)
												return 8.51067;
											else
												return 11.6959;
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
			if(rsrq < -6.5)
			{
				if(f < 2262.5)
				{
					if(cqi < 9.5)
					{
						if(rsrp < -89.5)
						{
							if(rsrq < -9.5)
							{
								if(cell < 13674242.5)
								{
									if(f < 1347.5)
									{
										if(cell < 13156866)
											return 7.54984;
										else
										{
											if(ta < 8.5)
											{
												if(rsrq < -10.5)
													return 4.70754;
												else
													return 1.70916;
											}
											else
											{
												if(payload < 5.5)
													return 0.393074;
												else
													return 2.00342;
											}
										}
									}
									else
									{
										if(velocity < 15.955)
										{
											if(velocity < 1.185)
											{
												if(sinr < 7.5)
													return 5.39493;
												else
													return 8.26731;
											}
											else
											{
												if(rsrp < -112.5)
													return 7.24273;
												else
												{
													if(velocity < 6.18)
														return 1.43177;
													else
													{
														if(sinr < 0.5)
														{
															if(velocity < 11.7)
																return 6.80041;
															else
															{
																if(cqi < 5.5)
																	return 4.3952;
																else
																	return 4.7963;
															}
														}
														else
														{
															if(rsrp < -97)
																return 2.20854;
															else
															{
																if(payload < 4)
																	return 2.88462;
																else
																	return 3.517045;
															}
														}
													}
												}
											}
										}
										else
										{
											if(sinr < -3)
												return 11.118;
											else
											{
												if(ta < 1.5)
													return 10.568;
												else
												{
													if(rsrp < -109)
														return 2.51711;
													else
														return 5.340356;
												}
											}
										}
									}
								}
								else
								{
									if(payload < 9.5)
									{
										if(ta < 8.5)
										{
											if(rsrp < -96.5)
												return 1.69644;
											else
												return 4.10678;
										}
										else
										{
											if(cell < 13884302)
											{
												if(cqi < 7)
												{
													if(rsrp < -90.5)
													{
														if(cell < 13854873)
														{
															if(rsrp < -92)
															{
																if(rsrp < -105.5)
																	return 5.96372;
																else
																	return 6.33088;
															}
															else
																return 5.28402;
														}
														else
															return 2.81426;
													}
													else
														return 10.0671;
												}
												else
												{
													if(cqi < 8.5)
														return 6.8071233333;
													else
														return 7.77238;
												}
											}
											else
											{
												if(sinr < 0)
													return 2.34475;
												else
													return 4.415435;
											}
										}
									}
									else
									{
										if(sinr < 7)
											return 10.50505;
										else
											return 5.5948;
									}
								}
							}
							else
							{
								if(f < 1347.5)
								{
									if(velocity < 31.455)
									{
										if(cell < 12915970)
											return 4.87329;
										else
										{
											if(payload < 9)
											{
												if(cell < 13176066)
													return 3.08147;
												else
													return 2.42047;
											}
											else
												return 0.62498;
										}
									}
									else
									{
										if(velocity < 35.23)
										{
											if(cqi < 6.5)
											{
												if(payload < 6)
													return 6.07626;
												else
													return 5.61572;
											}
											else
												return 6.71047;
										}
										else
										{
											if(rsrp < -98.5)
												return 6.28239;
											else
											{
												if(rsrp < -94)
													return 3.40764;
												else
													return 1.90794;
											}
										}
									}
								}
								else
								{
									if(payload < 3.5)
									{
										if(velocity < 5.06)
											return 3.97022;
										else
										{
											if(ta < 5.5)
												return 0.881348;
											else
											{
												if(sinr < 3.5)
													return 2.15924;
												else
													return 2.87735;
											}
										}
									}
									else
									{
										if(ta < 9)
										{
											if(cell < 13845145.5)
											{
												if(payload < 5.5)
												{
													if(rsrq < -8.5)
														return 3.01796;
													else
													{
														if(rsrp < -92)
														{
															if(rsrp < -98)
																return 11.2045;
															else
															{
																if(velocity < 8.325)
																	return 11.0459;
																else
																	return 10.6696333333;
															}
														}
														else
														{
															if(rsrp < -90.5)
																return 6.59522;
															else
																return 7.19683;
														}
													}
												}
												else
												{
													if(cqi < 6.5)
													{
														if(payload < 6.5)
														{
															if(rsrp < -95.5)
																return 5.05636;
															else
																return 2.49506;
														}
														else
														{
															if(payload < 9.5)
																return 6.4184528571;
															else
																return 2.60748;
														}
													}
													else
													{
														if(cqi < 7.5)
														{
															if(velocity < 21.535)
															{
																if(velocity < 11.445)
																	return 8.2433533333;
																else
																	return 7.46826;
															}
															else
																return 9.6911;
														}
														else
														{
															if(ta < 1.5)
															{
																if(cqi < 8.5)
																	return 13.1517;
																else
																{
																	if(velocity < 5.88)
																		return 7.62995;
																	else
																		return 5.33725;
																}
															}
															else
															{
																if(ta < 6)
																{
																	if(rsrp < -103.5)
																		return 3.10301;
																	else
																		return 4.21859;
																}
																else
																{
																	if(velocity < 0.14)
																		return 6.91264;
																	else
																	{
																		if(payload < 9)
																		{
																			if(velocity < 6.1)
																				return 5.69851;
																			else
																				return 6.86916;
																		}
																		else
																			return 5.18068;
																	}
																}
															}
														}
													}
												}
											}
											else
												return 20.1005;
										}
										else
										{
											if(payload < 8.5)
											{
												if(ta < 10.5)
													return 17.943;
												else
												{
													if(cell < 13689883)
													{
														if(cqi < 6.5)
														{
															if(sinr < 4)
																return 5.27394;
															else
																return 2.92951;
														}
														else
														{
															if(rsrq < -7.5)
															{
																if(sinr < 6.5)
																{
																	if(velocity < 5.66)
																		return 12.9817;
																	else
																		return 14.4079;
																}
																else
																{
																	if(sinr < 9.5)
																		return 7.11849;
																	else
																	{
																		if(rsrp < -102.5)
																			return 13.485;
																		else
																			return 9.177255;
																	}
																}
															}
															else
															{
																if(rsrp < -102.5)
																	return 2.63259;
																else
																{
																	if(payload < 5.5)
																		return 7.30594;
																	else
																		return 4.47219;
																}
															}
														}
													}
													else
													{
														if(rsrp < -98.5)
															return 13.3111;
														else
															return 16.6263;
													}
												}
											}
											else
											{
												if(cell < 13173146)
													return 19.7482;
												else
												{
													if(sinr < 3.5)
														return 6.81489;
													else
													{
														if(rsrq < -8.5)
															return 18.799;
														else
															return 16.2565;
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
							if(velocity < 24.235)
							{
								if(ta < 14.5)
								{
									if(velocity < 0.315)
									{
										if(ta < 12.5)
										{
											if(rsrq < -7.5)
											{
												if(cell < 13650562.5)
												{
													if(payload < 9.5)
													{
														if(payload < 7)
															return 10.9619;
														else
															return 11.8149;
													}
													else
														return 14.0326;
												}
												else
												{
													if(payload < 7)
														return 15.1467;
													else
														return 17.1812;
												}
											}
											else
											{
												if(payload < 7.5)
												{
													if(sinr < 17.5)
														return 12.4362;
													else
														return 15.0416;
												}
												else
												{
													if(cell < 13156878)
													{
														if(sinr < 12)
															return 9.4857;
														else
															return 8.66152;
													}
													else
														return 9.08704;
												}
											}
										}
										else
										{
											if(sinr < 19)
											{
												if(rsrp < -78.5)
													return 9.03663;
												else
													return 6.37196;
											}
											else
												return 11.6167;
										}
									}
									else
									{
										if(velocity < 5.78)
										{
											if(payload < 6)
											{
												if(sinr < 1)
													return 4.3071;
												else
												{
													if(velocity < 4.575)
														return 5.72695;
													else
														return 5.32623;
												}
											}
											else
												return 6.68019;
										}
										else
										{
											if(cell < 13659290.5)
											{
												if(cell < 13416974.5)
												{
													if(payload < 7.5)
													{
														if(rsrq < -9.5)
														{
															if(rsrp < -69.5)
															{
																if(velocity < 16.51)
																{
																	if(cell < 12903066.5)
																		return 4.86421;
																	else
																		return 5.4729042857;
																}
																else
																	return 8.39983;
															}
															else
																return 10.16;
														}
														else
														{
															if(payload < 3.5)
															{
																if(ta < 3.5)
																	return 14.0351;
																else
																{
																	if(cqi < 7.5)
																		return 9.69305;
																	else
																		return 11.3261;
																}
															}
															else
															{
																if(rsrp < -75.5)
																{
																	if(payload < 4.5)
																		return 3.94915;
																	else
																	{
																		if(ta < 4)
																			return 9.194605;
																		else
																		{
																			if(rsrq < -8.5)
																				return 8.255618;
																			else
																			{
																				if(rsrp < -84.5)
																					return 7.63602;
																				else
																					return 7.0500271429;
																			}
																		}
																	}
																}
																else
																	return 9.60192;
															}
														}
													}
													else
													{
														if(sinr < 11.5)
														{
															if(ta < 12)
															{
																if(sinr < 10.5)
																	return 8.8461533333;
																else
																	return 5.77386;
															}
															else
															{
																if(sinr < 10)
																	return 10.9664;
																else
																	return 13.1989;
															}
														}
														else
														{
															if(cqi < 8.5)
																return 11.8091;
															else
																return 15.8455;
														}
													}
												}
												else
												{
													if(rsrp < -88.5)
													{
														if(sinr < 4.5)
															return 3.12663;
														else
															return 0.60508;
													}
													else
														return 7.5594;
												}
											}
											else
											{
												if(rsrp < -88.5)
													return 14.9853;
												else
												{
													if(velocity < 10.375)
													{
														if(rsrp < -85)
															return 9.06589;
														else
														{
															if(payload < 4.5)
																return 11.1317;
															else
															{
																if(ta < 6.5)
																	return 14.433;
																else
																	return 13.1183;
															}
														}
													}
													else
													{
														if(cell < 13884301)
														{
															if(velocity < 12.6)
															{
																if(cell < 13825562)
																	return 5.17799;
																else
																	return 7.5993966667;
															}
															else
															{
																if(velocity < 12.885)
																	return 14.3326;
																else
																{
																	if(rsrp < -87)
																		return 7.94326;
																	else
																	{
																		if(cell < 13884174)
																			return 10.711525;
																		else
																			return 11.5607;
																	}
																}
															}
														}
														else
															return 4.81058;
													}
												}
											}
										}
									}
								}
								else
								{
									if(ta < 23.5)
									{
										if(payload < 8.5)
											return 3.6551333333;
										else
											return 4.90965;
									}
									else
										return 1.47106;
								}
							}
							else
							{
								if(f < 1347.5)
								{
									if(velocity < 30.72)
									{
										if(rsrq < -9)
											return 15.9681;
										else
											return 21.843;
									}
									else
									{
										if(cqi < 4.5)
											return 6.10454;
										else
										{
											if(ta < 8.5)
											{
												if(velocity < 34.75)
												{
													if(rsrp < -84.5)
														return 12.7247;
													else
														return 13.6071;
												}
												else
												{
													if(sinr < 4.5)
														return 11.7302;
													else
														return 10.4357;
												}
											}
											else
											{
												if(cell < 14053889.5)
												{
													if(payload < 6.5)
														return 6.97016;
													else
														return 8.21355;
												}
												else
													return 9.95988;
											}
										}
									}
								}
								else
								{
									if(cqi < 7)
										return 32.0384;
									else
										return 11.5984;
								}
							}
						}
					}
					else
					{
						if(sinr < 20.5)
						{
							if(cell < 14301711)
							{
								if(payload < 8.5)
								{
									if(payload < 4.5)
									{
										if(cqi < 13.5)
										{
											if(cell < 13825562)
											{
												if(velocity < 12.775)
												{
													if(ta < 8)
													{
														if(sinr < 9.5)
															return 10.5332;
														else
															return 9.386;
													}
													else
													{
														if(rsrq < -10.5)
															return 13.1796;
														else
														{
															if(rsrq < -9.5)
																return 1.67645;
															else
															{
																if(rsrq < -8.5)
																	return 7.19856;
																else
																	return 5.3647966667;
															}
														}
													}
												}
												else
												{
													if(sinr < 11)
													{
														if(rsrp < -99)
															return 9.54654;
														else
														{
															if(ta < 9)
															{
																if(rsrq < -7.5)
																	return 5.23732;
																else
																	return 6.10532;
															}
															else
																return 6.8699;
														}
													}
													else
													{
														if(sinr < 13.5)
														{
															if(sinr < 12.5)
																return 4.74402;
															else
															{
																if(f < 1347.5)
																	return 2.94686;
																else
																	return 3.47222;
															}
														}
														else
														{
															if(sinr < 14.5)
																return 7.32601;
															else
															{
																if(velocity < 14.64)
																	return 5.7654033333;
																else
																	return 5.1241;
															}
														}
													}
												}
											}
											else
											{
												if(rsrp < -82.5)
													return 11.7763;
												else
													return 13.6112;
											}
										}
										else
										{
											if(cell < 13825562)
											{
												if(rsrp < -69.5)
												{
													if(velocity < 19.07)
													{
														if(velocity < 8.265)
															return 9.29002;
														else
														{
															if(rsrq < -8.5)
																return 8.94354;
															else
																return 8.13215;
														}
													}
													else
														return 6.7701;
												}
												else
													return 3.78788;
											}
											else
											{
												if(sinr < 15)
													return 14.6319;
												else
													return 13.1796;
											}
										}
									}
									else
									{
										if(sinr < 13.5)
										{
											if(cell < 12918810.5)
											{
												if(rsrq < -10.5)
												{
													if(cqi < 10.5)
													{
														if(cell < 12903066.5)
															return 9.5056266667;
														else
															return 5.08313;
													}
													else
													{
														if(ta < 10)
														{
															if(cell < 12909594)
																return 5.33867;
															else
																return 6.2315;
														}
														else
															return 3.89508;
													}
												}
												else
												{
													if(rsrp < -84.5)
													{
														if(ta < 1.5)
															return 3.43035;
														else
														{
															if(cqi < 14.5)
															{
																if(rsrq < -7.5)
																{
																	if(rsrp < -87.5)
																	{
																		if(rsrq < -8.5)
																		{
																			if(rsrq < -9.5)
																				return 18.2163;
																			else
																				return 19.0099;
																		}
																		else
																			return 16.8563;
																	}
																	else
																		return 15.2164;
																}
																else
																	return 21.9103;
															}
															else
																return 8.56837;
														}
													}
													else
													{
														if(rsrq < -8.5)
														{
															if(cell < 12914202.5)
															{
																if(cqi < 11.5)
																{
																	if(ta < 7)
																		return 8.0281;
																	else
																	{
																		if(velocity < 12.89)
																			return 10.8932;
																		else
																			return 10.1497;
																	}
																}
																else
																	return 5.15227;
															}
															else
																return 16.5375;
														}
														else
														{
															if(ta < 4)
															{
																if(velocity < 13.475)
																{
																	if(sinr < 12)
																		return 6.14628;
																	else
																		return 5.37418;
																}
																else
																	return 4.29461;
															}
															else
															{
																if(sinr < 12.5)
																{
																	if(rsrq < -7.5)
																		return 9.32537;
																	else
																		return 9.78234;
																}
																else
																	return 7.84891;
															}
														}
													}
												}
											}
											else
											{
												if(cell < 13674242)
												{
													if(rsrp < -87.5)
													{
														if(ta < 5.5)
															return 3.0742533333;
														else
															return 3.72411;
													}
													else
														return 2.65062;
												}
												else
												{
													if(ta < 4.5)
													{
														if(rsrp < -87.5)
															return 14.3541;
														else
															return 7.09534;
													}
													else
													{
														if(cqi < 10.5)
														{
															if(rsrp < -80)
															{
																if(rsrp < -84.5)
																	return 3.9863;
																else
																	return 4.62428;
															}
															else
															{
																if(sinr < 11.5)
																	return 9.69305;
																else
																	return 7.99201;
															}
														}
														else
														{
															if(rsrp < -91)
																return 6.51134;
															else
															{
																if(cqi < 13)
																{
																	if(ta < 13)
																	{
																		if(rsrp < -85)
																			return 9.3045466667;
																		else
																			return 8.45219;
																	}
																	else
																		return 9.64785;
																}
																else
																	return 7.51997;
															}
														}
													}
												}
											}
										}
										else
										{
											if(cell < 12918810)
											{
												if(velocity < 2.97)
												{
													if(cell < 12903066)
													{
														if(rsrq < -9)
														{
															if(rsrp < -84.5)
																return 19.0295;
															else
															{
																if(ta < 7)
																	return 14.6138;
																else
																	return 13.9477;
															}
														}
														else
														{
															if(sinr < 17)
																return 7.768955;
															else
															{
																if(rsrp < -81)
																	return 14.3081;
																else
																	return 11.8019;
															}
														}
													}
													else
														return 6.23701;
												}
												else
												{
													if(ta < 12.5)
													{
														if(cqi < 13.5)
														{
															if(cell < 12896781.5)
																return 13.4499;
															else
															{
																if(ta < 11)
																{
																	if(cell < 12896793.5)
																		return 8.07877;
																	else
																	{
																		if(rsrq < -9.5)
																			return 9.06618;
																		else
																		{
																			if(rsrp < -78)
																				return 9.656366;
																			else
																				return 10.7335;
																		}
																	}
																}
																else
																	return 10.772;
															}
														}
														else
														{
															if(rsrq < -8.5)
																return 10.2715;
															else
																return 5.84297;
														}
													}
													else
													{
														if(rsrq < -9)
															return 5.49504;
														else
															return 4.51977;
													}
												}
											}
											else
											{
												if(sinr < 14.5)
												{
													if(rsrp < -89)
														return 29.9401;
													else
													{
														if(rsrp < -86.5)
															return 7.09471;
														else
														{
															if(cqi < 11.5)
																return 12.1212;
															else
															{
																if(cqi < 13.5)
																{
																	if(payload < 7.5)
																		return 15.8595;
																	else
																		return 17.6454;
																}
																else
																	return 20.1222;
															}
														}
													}
												}
												else
												{
													if(rsrq < -9.5)
														return 4.33276;
													else
													{
														if(payload < 7)
														{
															if(cqi < 12.5)
																return 10.2696;
															else
																return 8.23893;
														}
														else
														{
															if(velocity < 12.655)
																return 11.4449;
															else
																return 12.5486;
														}
													}
												}
											}
										}
									}
								}
								else
								{
									if(cqi < 13.5)
									{
										if(payload < 9.5)
										{
											if(f < 1347.5)
											{
												if(ta < 13)
													return 6.44065;
												else
													return 13.6622;
											}
											else
											{
												if(rsrp < -90.5)
												{
													if(sinr < 7.5)
														return 12.3098;
													else
														return 14.6074;
												}
												else
												{
													if(cell < 12896781)
														return 10.9256;
													else
													{
														if(rsrp < -81.5)
														{
															if(velocity < 5.49)
																return 17.8571;
															else
																return 16.3562;
														}
														else
														{
															if(rsrq < -9)
																return 16.9412;
															else
																return 19.0225;
														}
													}
												}
											}
										}
										else
										{
											if(ta < 13.5)
											{
												if(cell < 12918810)
												{
													if(rsrq < -7.5)
													{
														if(rsrq < -9)
														{
															if(rsrq < -10.5)
																return 8.17912;
															else
																return 7.69527;
														}
														else
														{
															if(ta < 8.5)
																return 10.8755;
															else
																return 8.12595;
														}
													}
													else
														return 10.707925;
												}
												else
												{
													if(cqi < 10.5)
														return 16.3666;
													else
													{
														if(sinr < 11.5)
															return 10.8489;
														else
															return 12.7755;
													}
												}
											}
											else
											{
												if(rsrq < -7.5)
												{
													if(velocity < 13.715)
														return 13.2472;
													else
														return 17.1858;
												}
												else
													return 12.5059;
											}
										}
									}
									else
									{
										if(cell < 12918809.5)
										{
											if(rsrq < -9)
												return 15.0858;
											else
												return 23.753;
										}
										else
											return 14.2552;
									}
								}
							}
							else
							{
								if(rsrp < -87)
									return 0.379873;
								else
									return 2.3324614286;
							}
						}
						else
						{
							if(payload < 3.5)
							{
								if(cell < 12914074)
								{
									if(cqi < 10.5)
										return 9.72053;
									else
									{
										if(sinr < 23)
											return 7.08801;
										else
										{
											if(rsrq < -8)
												return 1.88472;
											else
												return 4.50704;
										}
									}
								}
								else
									return 16.9731;
							}
							else
							{
								if(rsrp < -85.5)
								{
									if(cell < 12914074)
									{
										if(velocity < 9.24)
										{
											if(rsrp < -87.5)
												return 10.3463;
											else
												return 7.70899;
										}
										else
										{
											if(rsrp < -86.5)
												return 5.93417;
											else
												return 4.04186;
										}
									}
									else
										return 22.0872;
								}
								else
								{
									if(ta < 11.5)
									{
										if(cell < 13825562)
										{
											if(ta < 10.5)
											{
												if(cqi < 14.5)
												{
													if(payload < 8)
													{
														if(rsrq < -8)
															return 16.0458;
														else
															return 16.6182;
													}
													else
														return 18.2417;
												}
												else
												{
													if(payload < 7.5)
													{
														if(sinr < 25)
															return 13.0346;
														else
															return 17.5935;
													}
													else
													{
														if(rsrq < -9)
															return 9.52041;
														else
														{
															if(rsrp < -78.5)
																return 16.4609;
															else
															{
																if(ta < 5.5)
																	return 12.0603;
																else
																	return 10.7131;
															}
														}
													}
												}
											}
											else
											{
												if(rsrp < -69)
												{
													if(velocity < 9.57)
														return 5.82411;
													else
														return 6.30915;
												}
												else
													return 11.0752;
											}
										}
										else
										{
											if(sinr < 29)
												return 24.2498;
											else
												return 11.1376;
										}
									}
									else
									{
										if(rsrq < -9)
											return 8.09;
										else
										{
											if(rsrq < -7.5)
											{
												if(cqi < 13.5)
													return 22.1071;
												else
													return 25.2565;
											}
											else
											{
												if(payload < 9)
												{
													if(rsrp < -79.5)
														return 20.9424;
													else
														return 21.9479;
												}
												else
												{
													if(rsrp < -68.5)
														return 15.0066;
													else
														return 17.8731;
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
					if(cell < 13404045)
					{
						if(cell < 13151124.5)
						{
							if(rsrq < -9.5)
								return 15.788;
							else
							{
								if(payload < 3.5)
									return 9.56175;
								else
								{
									if(velocity < 7.45)
										return 12.3409666667;
									else
										return 13.0541;
								}
							}
						}
						else
						{
							if(velocity < 12.045)
							{
								if(payload < 4.5)
									return 0.9983875714;
								else
								{
									if(rsrp < -72.5)
									{
										if(cqi < 12)
											return 1.9719;
										else
											return 2.48937;
									}
									else
										return 4.33276;
								}
							}
							else
							{
								if(payload < 4)
									return 3.13316;
								else
								{
									if(velocity < 14.435)
										return 6.691075;
									else
										return 10.16;
								}
							}
						}
					}
					else
					{
						if(payload < 8.5)
						{
							if(rsrp < -105.5)
							{
								if(velocity < 6.39)
								{
									if(payload < 5)
										return 6.75105;
									else
										return 8.51064;
								}
								else
								{
									if(rsrp < -107)
									{
										if(cqi < 7.5)
										{
											if(payload < 5.5)
												return 2.82611;
											else
												return 2.12508;
										}
										else
											return 1.33645;
									}
									else
										return 5.28926;
								}
							}
							else
							{
								if(rsrp < -82.5)
								{
									if(velocity < 10.35)
									{
										if(payload < 4.5)
										{
											if(sinr < 2)
												return 1.97385;
											else
											{
												if(sinr < 22.5)
												{
													if(velocity < 9.79)
													{
														if(rsrp < -101)
														{
															if(rsrp < -103)
																return 14.1405;
															else
																return 12.0437;
														}
														else
														{
															if(rsrp < -99.5)
																return 10.5995;
															else
															{
																if(ta < 2.5)
																	return 9.34579;
																else
																	return 9.81896;
															}
														}
													}
													else
														return 16.1834;
												}
												else
													return 16.3934;
											}
										}
										else
										{
											if(cqi < 12)
											{
												if(rsrq < -7.5)
												{
													if(cqi < 10.5)
													{
														if(sinr < 0.5)
															return 11.4309;
														else
														{
															if(cell < 14345742)
															{
																if(rsrp < -100.5)
																	return 9.73828;
																else
																{
																	if(sinr < 16.5)
																	{
																		if(rsrq < -8.5)
																			return 16.5534;
																		else
																		{
																			if(rsrp < -88)
																				return 14.2433;
																			else
																				return 15.1947;
																		}
																	}
																	else
																		return 13.6016;
																}
															}
															else
															{
																if(payload < 5.5)
																	return 17.6757;
																else
																	return 16.586;
															}
														}
													}
													else
													{
														if(payload < 6.5)
															return 2.5533;
														else
															return 19.5003;
													}
												}
												else
												{
													if(sinr < 10)
													{
														if(payload < 7)
															return 12.3235;
														else
															return 1.9761;
													}
													else
													{
														if(payload < 6.5)
															return 16.3465;
														else
															return 15.4031;
													}
												}
											}
											else
												return 19.9203;
										}
									}
									else
									{
										if(payload < 3.5)
											return 15.544;
										else
										{
											if(cqi < 11.5)
											{
												if(rsrp < -102.5)
												{
													if(cqi < 8)
													{
														if(rsrp < -103.5)
															return 10.0188;
														else
															return 9.30909;
													}
													else
													{
														if(payload < 7.5)
															return 14.553;
														else
															return 11.5398;
													}
												}
												else
												{
													if(rsrp < -97)
													{
														if(payload < 5.5)
															return 14.7958;
														else
															return 11.1966;
													}
													else
													{
														if(cqi < 8.5)
														{
															if(rsrq < -8)
																return 11.0155;
															else
																return 12.3195;
														}
														else
															return 9.409;
													}
												}
											}
											else
											{
												if(ta < 3)
													return 13.587;
												else
												{
													if(cell < 13875086)
														return 11.8387;
													else
													{
														if(rsrp < -97)
															return 6.49175;
														else
														{
															if(rsrq < -9)
																return 9.42655;
															else
																return 9.9975;
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
										return 6.8976403183;
									else
									{
										if(payload < 7.5)
										{
											if(rsrp < -79.5)
											{
												if(rsrq < -8)
												{
													if(velocity < 10.555)
														return 17.8685;
													else
														return 18.6047;
												}
												else
													return 18.6232;
											}
											else
											{
												if(sinr < 17)
												{
													if(rsrq < -7.5)
													{
														if(rsrp < -78.5)
															return 15.3355;
														else
															return 17.0576;
													}
													else
														return 16.98;
												}
												else
													return 13.3835;
											}
										}
										else
										{
											if(sinr < 19.5)
												return 14.5686;
											else
												return 14.9848;
										}
									}
								}
							}
						}
						else
						{
							if(sinr < 25)
							{
								if(rsrq < -10.5)
								{
									if(rsrp < -81.5)
									{
										if(ta < 6)
										{
											if(payload < 9.5)
												return 10.0939;
											else
												return 10.6938;
										}
										else
											return 11.5053;
									}
									else
										return 2.47917;
								}
								else
								{
									if(sinr < 10)
									{
										if(rsrq < -8.5)
										{
											if(rsrp < -91)
												return 21.84;
											else
												return 20.2532;
										}
										else
										{
											if(velocity < 6.48)
												return 18.6611;
											else
												return 17.0981;
										}
									}
									else
									{
										if(payload < 9.5)
										{
											if(velocity < 0.51)
												return 22.4579;
											else
												return 17.3703;
										}
										else
										{
											if(cqi < 12.5)
											{
												if(velocity < 13.34)
													return 12.5117;
												else
													return 11.6908;
											}
											else
												return 14.3911;
										}
									}
								}
							}
							else
							{
								if(rsrq < -8)
									return 24.6381;
								else
									return 31.0078;
							}
						}
					}
				}
			}
			else
			{
				if(velocity < 34.575)
				{
					if(payload < 8.5)
					{
						if(sinr < 35)
						{
							if(velocity < 26.575)
							{
								if(cell < 12898324)
								{
									if(payload < 7.5)
									{
										if(cell < 12896769.5)
											return 17.5055;
										else
										{
											if(rsrp < -84.5)
												return 11.7763;
											else
											{
												if(payload < 3.5)
												{
													if(rsrp < -72.5)
													{
														if(velocity < 6.955)
															return 5.04414;
														else
															return 2.63071;
													}
													else
														return 5.26431;
												}
												else
												{
													if(ta < 5.5)
													{
														if(rsrp < -67)
														{
															if(payload < 5.5)
																return 7.09063;
															else
																return 9.33022;
														}
														else
															return 14.4796;
													}
													else
													{
														if(sinr < 18.5)
															return 5.54895;
														else
															return 6.17284;
													}
												}
											}
										}
									}
									else
									{
										if(rsrp < -75)
											return 21.8953;
										else
											return 13.8859;
									}
								}
								else
								{
									if(ta < 6.5)
									{
										if(cell < 13403412)
										{
											if(rsrq < -5.5)
											{
												if(cqi < 7.5)
												{
													if(ta < 3)
														return 25.95;
													else
														return 23.0358;
												}
												else
												{
													if(rsrp < -88.5)
													{
														if(rsrp < -92.5)
														{
															if(rsrp < -94.5)
															{
																if(cqi < 12.5)
																	return 13.5747;
																else
																	return 9.74421;
															}
															else
																return 7.94123;
														}
														else
														{
															if(payload < 3.5)
																return 8.44476;
															else
															{
																if(velocity < 22.54)
																{
																	if(payload < 7)
																	{
																		if(rsrp < -89.5)
																			return 22.2119;
																		else
																			return 20.7388;
																	}
																	else
																		return 17.4055;
																}
																else
																	return 15.4515;
															}
														}
													}
													else
													{
														if(rsrp < -79.5)
														{
															if(velocity < 24.155)
															{
																if(sinr < 29.5)
																{
																	if(sinr < 19.5)
																	{
																		if(velocity < 6.98)
																			return 14.175;
																		else
																		{
																			if(rsrp < -82.5)
																				return 8.96459;
																			else
																				return 7.73694;
																		}
																	}
																	else
																	{
																		if(cqi < 9)
																			return 9.81294;
																		else
																		{
																			if(cqi < 14.5)
																			{
																				if(rsrp < -86.5)
																					return 4.96702;
																				else
																				{
																					if(rsrp < -81.5)
																						return 6.7799366667;
																					else
																						return 6.09663;
																				}
																			}
																			else
																				return 9.45068;
																		}
																	}
																}
																else
																	return 13.979;
															}
															else
															{
																if(sinr < 21)
																	return 13.1507;
																else
																	return 14.4256;
															}
														}
														else
														{
															if(ta < 4.5)
															{
																if(rsrp < -77.5)
																	return 15.4143;
																else
																{
																	if(rsrp < -75.5)
																	{
																		if(sinr < 26.5)
																			return 5.87372;
																		else
																			return 11.611;
																	}
																	else
																	{
																		if(velocity < 15.06)
																		{
																			if(rsrp < -68)
																				return 9.73236;
																			else
																				return 10.306;
																		}
																		else
																			return 14.3209;
																	}
																}
															}
															else
															{
																if(payload < 7)
																	return 20.0753;
																else
																	return 18.7189;
															}
														}
													}
												}
											}
											else
											{
												if(rsrp < -79.5)
												{
													if(rsrq < -4.5)
													{
														if(payload < 5)
														{
															if(payload < 3.5)
																return 15.2769;
															else
																return 13.9555;
														}
														else
														{
															if(cell < 12914202.5)
																return 10.2581;
															else
															{
																if(sinr < 31.5)
																	return 9.02425;
																else
																	return 13.3627;
															}
														}
													}
													else
														return 22.49;
												}
												else
												{
													if(rsrp < -78.5)
														return 24.4009;
													else
													{
														if(payload < 7)
														{
															if(sinr < 33.5)
															{
																if(cqi < 7)
																	return 11.4613;
																else
																{
																	if(payload < 4)
																		return 15.625;
																	else
																	{
																		if(payload < 5.5)
																			return 16.5221;
																		else
																			return 17.1612;
																	}
																}
															}
															else
																return 11.6754;
														}
														else
															return 27.5981;
													}
												}
											}
										}
										else
										{
											if(rsrp < -96.5)
												return 27.027;
											else
											{
												if(cqi < 6.5)
													return 20.0334;
												else
												{
													if(cell < 13856153.5)
													{
														if(velocity < 14.085)
														{
															if(cqi < 14.5)
																return 21.838;
															else
															{
																if(velocity < 10.125)
																{
																	if(velocity < 3.44)
																		return 17.2538;
																	else
																		return 18.0079;
																}
																else
																	return 18.9873;
															}
														}
														else
															return 13.4228;
													}
													else
													{
														if(sinr < 23.5)
														{
															if(cqi < 14)
															{
																if(sinr < 18.5)
																	return 14.1374;
																else
																	return 16.3599;
															}
															else
																return 19.0386;
														}
														else
														{
															if(ta < 4.5)
																return 11.3744;
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
										if(ta < 13.5)
										{
											if(cell < 13370906)
											{
												if(rsrq < -5.5)
												{
													if(velocity < 10.065)
													{
														if(cqi < 12.5)
														{
															if(velocity < 5.475)
															{
																if(payload < 4.5)
																	return 6.44901;
																else
																	return 10.8932;
															}
															else
																return 14.7977;
														}
														else
														{
															if(sinr < 20)
																return 15.8993;
															else
																return 18.0655;
														}
													}
													else
													{
														if(rsrp < -93)
														{
															if(rsrp < -98)
															{
																if(sinr < 14.5)
																	return 9.88468;
																else
																	return 12.2794;
															}
															else
															{
																if(sinr < 20)
																	return 7.01754;
																else
																	return 8.61605;
															}
														}
														else
														{
															if(sinr < 22.5)
																return 13.4842;
															else
																return 12.0508;
														}
													}
												}
												else
													return 16.9942;
											}
											else
											{
												if(ta < 12.5)
												{
													if(cqi < 5.5)
														return 4.68933;
													else
													{
														if(velocity < 18.565)
														{
															if(sinr < 17)
															{
																if(velocity < 4.995)
																	return 15.748;
																else
																{
																	if(ta < 9)
																	{
																		if(sinr < 12.5)
																			return 13.6054;
																		else
																		{
																			if(ta < 7.5)
																			{
																				if(velocity < 12.545)
																					return 8.92857;
																				else
																					return 10.8328;
																			}
																			else
																				return 13.4936;
																		}
																	}
																	else
																	{
																		if(sinr < 13.5)
																		{
																			if(payload < 5.5)
																				return 9.74026;
																			else
																				return 9.21925;
																		}
																		else
																			return 7.38825;
																	}
																}
															}
															else
															{
																if(rsrp < -88.5)
																	return 14.9589;
																else
																{
																	if(rsrp < -76.5)
																	{
																		if(cqi < 11)
																			return 12.8231666667;
																		else
																			return 12.3267;
																	}
																	else
																	{
																		if(payload < 5.5)
																			return 10.3292;
																		else
																			return 11.3983;
																	}
																}
															}
														}
														else
															return 6.7086;
													}
												}
												else
												{
													if(payload < 5)
														return 5.75402;
													else
													{
														if(payload < 7.5)
															return 7.66179;
														else
															return 6.8223;
													}
												}
											}
										}
										else
										{
											if(velocity < 14.6)
											{
												if(rsrp < -85.5)
												{
													if(payload < 5)
														return 18.5615;
													else
														return 19.1518;
												}
												else
													return 22.6629;
											}
											else
											{
												if(rsrq < -5.5)
													return 14.1176;
												else
													return 12.6249;
											}
										}
									}
								}
							}
							else
							{
								if(payload < 7.5)
								{
									if(rsrq < -5.5)
									{
										if(payload < 6.5)
										{
											if(sinr < 22)
											{
												if(velocity < 30.1)
													return 6.04686;
												else
													return 6.854465;
											}
											else
												return 4.19654;
										}
										else
											return 10.3093;
									}
									else
									{
										if(cell < 14301698)
										{
											if(f < 1347.5)
											{
												if(rsrp < -71.5)
													return 8.2713;
												else
													return 11.065;
											}
											else
												return 15.9046;
										}
										else
										{
											if(cqi < 11)
												return 6.5263825;
											else
												return 12.4472;
										}
									}
								}
								else
								{
									if(rsrp < -82.5)
										return 19.1789;
									else
										return 16.2354;
								}
							}
						}
						else
						{
							if(sinr < 39.5)
							{
								if(cell < 12918810)
								{
									if(sinr < 38.5)
										return 27.2109;
									else
										return 28.3061;
								}
								else
									return 22.082;
							}
							else
								return 15.4525;
						}
					}
					else
					{
						if(cell < 14301710)
						{
							if(cqi < 12.5)
							{
								if(cell < 13884174)
								{
									if(rsrp < -83.5)
									{
										if(cqi < 10.5)
										{
											if(velocity < 14.16)
											{
												if(payload < 9.5)
													return 17.1184;
												else
													return 15.6863;
											}
											else
											{
												if(rsrp < -92)
													return 11.3154;
												else
													return 9.17197;
											}
										}
										else
										{
											if(velocity < 5.865)
												return 9.72316;
											else
											{
												if(payload < 9.5)
												{
													if(cell < 12918810)
													{
														if(velocity < 13.385)
															return 17.229;
														else
														{
															if(rsrp < -91.5)
																return 15.1451;
															else
																return 16.1038;
														}
													}
													else
													{
														if(velocity < 23.765)
														{
															if(ta < 4.5)
																return 24.9653;
															else
																return 21.7786;
														}
														else
															return 15.7;
													}
												}
												else
												{
													if(rsrp < -88.5)
														return 17.9775;
													else
														return 27.8649;
												}
											}
										}
									}
									else
									{
										if(velocity < 20.965)
										{
											if(rsrq < -5.5)
											{
												if(rsrp < -76.5)
												{
													if(rsrp < -79.5)
														return 12.8949;
													else
														return 14.0051;
												}
												else
												{
													if(ta < 2.5)
														return 10.1885;
													else
													{
														if(velocity < 14.935)
															return 10.0869;
														else
															return 11.6839;
													}
												}
											}
											else
												return 16.1871;
										}
										else
											return 4.42179;
									}
								}
								else
								{
									if(velocity < 12.3)
										return 27.1903;
									else
									{
										if(payload < 9.5)
											return 31.6623;
										else
										{
											if(sinr < 22)
												return 11.7492;
											else
												return 12.9324;
										}
									}
								}
							}
							else
							{
								if(cell < 12918810.5)
								{
									if(ta < 6.5)
									{
										if(payload < 9.5)
											return 32.9369;
										else
											return 25.3165;
									}
									else
									{
										if(cell < 12907801)
										{
											if(rsrq < -5.5)
												return 18.9215;
											else
												return 20.2532;
										}
										else
											return 21.9901;
									}
								}
								else
								{
									if(sinr < 19.5)
									{
										if(cqi < 14)
											return 9.18133;
										else
										{
											if(payload < 9.5)
												return 16.9811;
											else
												return 12.3362;
										}
									}
									else
									{
										if(rsrp < -90.5)
											return 26.393;
										else
										{
											if(ta < 10.5)
											{
												if(payload < 9.5)
												{
													if(ta < 4)
														return 14.3113;
													else
														return 15.9504;
												}
												else
												{
													if(rsrp < -83.5)
														return 16.1649;
													else
													{
														if(sinr < 28.5)
														{
															if(sinr < 22.5)
																return 18.9349;
															else
																return 17.8771;
														}
														else
															return 21.4823;
													}
												}
											}
											else
											{
												if(rsrq < -5.5)
													return 25.37;
												else
													return 17.991;
											}
										}
									}
								}
							}
						}
						else
						{
							if(rsrp < -75.5)
								return 33.8839;
							else
								return 25.5591;
						}
					}
				}
				else
				{
					if(payload < 6.5)
					{
						if(cell < 14053889)
							return 19.8314;
						else
						{
							if(cqi < 13)
								return 3.58744;
							else
							{
								if(cell < 14301722)
								{
									if(f < 1347.5)
										return 11.8835;
									else
										return 9.54426;
								}
								else
									return 15.0376;
							}
						}
					}
					else
					{
						if(sinr < 29.5)
						{
							if(payload < 7.5)
								return 17.9085;
							else
							{
								if(rsrp < -76)
									return 30.5489;
								else
								{
									if(rsrp < -72)
										return 15.2417;
									else
										return 29.9252;
								}
							}
						}
						else
						{
							if(rsrp < -63)
							{
								if(payload < 8.5)
									return 13.8408;
								else
									return 13.2768;
							}
							else
								return 24.7253;
						}
					}
				}
			}
		}
	}
}

float o2_dl_tree_8(float payload, float rsrp, float rsrq, float sinr, float cqi, float ta, float velocity, float cell, float f)
{
	if(sinr < 12.5)
	{
		if(sinr < 2.5)
		{
			if(payload < 4.5)
			{
				if(cell < 14323732)
				{
					if(rsrq < -13.5)
					{
						if(f < 1347.5)
						{
							if(velocity < 33.415)
							{
								if(cell < 13553922)
								{
									if(sinr < -3.5)
									{
										if(payload < 2.5)
										{
											if(cell < 13542402.5)
											{
												if(cqi < 4.5)
												{
													if(cell < 12896898)
														return 0.16533;
													else
													{
														if(velocity < 13.985)
														{
															if(velocity < 2.475)
															{
																if(payload < 0.75)
																	return 0.632111;
																else
																	return 1.04609;
															}
															else
																return 0.6133385333;
														}
														else
															return 1.2180795402;
													}
												}
												else
													return 1.479275;
											}
											else
												return 0.1376496667;
										}
										else
										{
											if(rsrp < -97.5)
											{
												if(velocity < 13.615)
													return 1.72349;
												else
													return 0.857026;
											}
											else
											{
												if(ta < 13)
													return 2.79086;
												else
													return 2.165475;
											}
										}
									}
									else
									{
										if(ta < 11)
										{
											if(payload < 1.5)
												return 0.1793998182;
											else
												return 0.468998;
										}
										else
										{
											if(velocity < 2.57)
												return 0.9653585;
											else
											{
												if(cqi < 5.5)
													return 0.6451503;
												else
													return 0.144851;
											}
										}
									}
								}
								else
								{
									if(ta < 37.5)
									{
										if(ta < 12)
										{
											if(cqi < 5.5)
											{
												if(velocity < 9.495)
													return 2.51774;
												else
													return 1.66321;
											}
											else
												return 8.11085;
										}
										else
										{
											if(velocity < 21.575)
											{
												if(payload < 3)
													return 0.3757755714;
												else
													return 1.384105;
											}
											else
											{
												if(rsrp < -100.5)
												{
													if(sinr < -5)
														return 2.06719;
													else
														return 3.22582;
												}
												else
													return 0.14906;
											}
										}
									}
									else
										return 8.53789;
								}
							}
							else
							{
								if(sinr < -4.5)
									return 8.76712;
								else
								{
									if(cqi < 4.5)
										return 4.10258;
									else
										return 4.675765;
								}
							}
						}
						else
						{
							if(cell < 12976538)
							{
								if(rsrp < -100.5)
								{
									if(ta < 5.5)
										return 1.73762;
									else
									{
										if(payload < 1.5)
										{
											if(rsrp < -104.5)
												return 3.7123;
											else
												return 4.28266;
										}
										else
											return 1.93845;
									}
								}
								else
								{
									if(rsrp < -93)
										return 5.160095;
									else
										return 6.37307;
								}
							}
							else
							{
								if(ta < 9.5)
								{
									if(cell < 13622554.5)
									{
										if(sinr < 0)
										{
											if(ta < 6.5)
											{
												if(velocity < 1.31)
													return 0.186369;
												else
												{
													if(payload < 3)
														return 0.72540375;
													else
														return 1.0728055;
												}
											}
											else
												return 0.4282139;
										}
										else
											return 2.18998;
									}
									else
										return 1.677896;
								}
								else
								{
									if(cqi < 4.5)
										return 1.1549981374;
									else
									{
										if(ta < 15)
										{
											if(rsrq < -15)
												return 8.33333;
											else
											{
												if(rsrp < -96)
													return 6.76819;
												else
													return 1.75786;
											}
										}
										else
										{
											if(velocity < 13.915)
												return 0.8365015277;
											else
												return 5.36283;
										}
									}
								}
							}
						}
					}
					else
					{
						if(cell < 13410707.5)
						{
							if(cell < 12909593.5)
							{
								if(velocity < 32.265)
								{
									if(payload < 3.5)
									{
										if(velocity < 14.355)
										{
											if(velocity < 11.165)
											{
												if(payload < 0.75)
													return 2.95203;
												else
													return 3.64797;
											}
											else
											{
												if(velocity < 12.295)
													return 0.824997;
												else
												{
													if(rsrp < -88.5)
														return 2.6681116667;
													else
														return 1.61437;
												}
											}
										}
										else
										{
											if(cell < 12904206)
											{
												if(cell < 12898050)
												{
													if(cell < 12896153.5)
														return 4.73373;
													else
													{
														if(velocity < 23.295)
														{
															if(rsrq < -11.5)
																return 2.38403;
															else
																return 2.88462;
														}
														else
															return 3.20001;
													}
												}
												else
													return 0.527902;
											}
											else
											{
												if(payload < 1.55)
													return 4.96896;
												else
													return 5.86941;
											}
										}
									}
									else
									{
										if(rsrp < -96)
											return 1.98474;
										else
										{
											if(f < 1347.5)
												return 0.934552;
											else
												return 1.43177;
										}
									}
								}
								else
									return 8.61605;
							}
							else
							{
								if(rsrq < -12.5)
								{
									if(rsrp < -95.5)
									{
										if(f < 1347.5)
											return 2.38521;
										else
										{
											if(payload < 2.5)
												return 3.52734;
											else
												return 4.5977;
										}
									}
									else
									{
										if(cqi < 8)
										{
											if(velocity < 1.455)
												return 8.19952;
											else
											{
												if(cqi < 6)
													return 10.4952;
												else
													return 9.66184;
											}
										}
										else
											return 10.6242;
									}
								}
								else
								{
									if(cqi < 5.5)
									{
										if(velocity < 14.125)
										{
											if(payload < 2.05)
												return 1.91388;
											else
												return 1.35392;
										}
										else
											return 3.04878;
									}
									else
									{
										if(rsrp < -71.5)
										{
											if(payload < 0.75)
											{
												if(payload < 0.3)
													return 6.95655;
												else
													return 6.0241;
											}
											else
											{
												if(sinr < -0.5)
												{
													if(rsrp < -111.5)
														return 6.23539;
													else
													{
														if(cell < 12914203)
															return 3.94915;
														else
															return 4.8142;
													}
												}
												else
												{
													if(ta < 4)
														return 1.8303175;
													else
													{
														if(payload < 1.5)
															return 2.72758;
														else
															return 3.745855;
													}
												}
											}
										}
										else
										{
											if(payload < 1.25)
												return 3.36134;
											else
												return 6.96561;
										}
									}
								}
							}
						}
						else
						{
							if(rsrq < -11.5)
							{
								if(cell < 13553922)
								{
									if(f < 1347.5)
										return 0.2235025714;
									else
									{
										if(rsrp < -95.5)
										{
											if(rsrp < -98.5)
											{
												if(velocity < 12.735)
												{
													if(velocity < 2.245)
													{
														if(sinr < -0.5)
														{
															if(rsrp < -101)
																return 1.15699;
															else
																return 1.64254;
														}
														else
															return 2.10526;
													}
													else
													{
														if(rsrp < -104.5)
															return 0.047809;
														else
														{
															if(sinr < -6)
																return 0.430804;
															else
																return 0.88933;
														}
													}
												}
												else
												{
													if(payload < 3.5)
													{
														if(payload < 0.55)
															return 1.86047;
														else
															return 1.26466;
													}
													else
														return 2.41929;
												}
											}
											else
											{
												if(velocity < 11.385)
												{
													if(velocity < 7.77)
													{
														if(payload < 1.75)
															return 0.3665856667;
														else
															return 0.772201;
													}
													else
														return 0.826169;
												}
												else
													return 0.3116202;
											}
										}
										else
											return 4.11311;
									}
								}
								else
								{
									if(velocity < 13.82)
									{
										if(cell < 13825562.5)
										{
											if(rsrp < -94)
												return 3.04559;
											else
												return 2.27985;
										}
										else
										{
											if(payload < 1.05)
												return 2.19781;
											else
											{
												if(f < 1347.5)
												{
													if(ta < 17)
														return 1.34941;
													else
														return 0.863598;
												}
												else
													return 1.552382;
											}
										}
									}
									else
									{
										if(velocity < 24.63)
										{
											if(payload < 2.05)
												return 4.04042;
											else
												return 5.47196;
										}
										else
										{
											if(ta < 13.5)
												return 3.37695;
											else
												return 1.83909;
										}
									}
								}
							}
							else
							{
								if(cell < 13806081.5)
								{
									if(cell < 13553921.5)
									{
										if(rsrq < -8.5)
										{
											if(sinr < 0.5)
												return 0.284496;
											else
											{
												if(rsrq < -9.5)
													return 0.9208662;
												else
													return 0.369175;
											}
										}
										else
											return 1.45059;
									}
									else
									{
										if(rsrp < -96.5)
											return 2.52685;
										else
											return 1.90794;
									}
								}
								else
								{
									if(cqi < 3.5)
										return 10.7239;
									else
									{
										if(ta < 9.5)
										{
											if(rsrp < -93.5)
											{
												if(payload < 2.5)
													return 1.0219766667;
												else
													return 1.672055;
											}
											else
											{
												if(cell < 13884173.5)
													return 4.0170533333;
												else
													return 1.98167;
											}
										}
										else
										{
											if(sinr < -4.5)
												return 2.3779;
											else
											{
												if(f < 1347.5)
												{
													if(rsrq < -8.5)
														return 10.0671;
													else
														return 6.77201;
												}
												else
												{
													if(rsrq < -9.5)
													{
														if(sinr < 0.5)
														{
															if(cqi < 6.5)
																return 4.81348;
															else
																return 7.29594;
														}
														else
														{
															if(ta < 10.5)
																return 2.81426;
															else
															{
																if(ta < 11.5)
																	return 3.84061;
																else
																	return 4.36402;
															}
														}
													}
													else
													{
														if(ta < 12.5)
															return 3.68579;
														else
														{
															if(velocity < 12.58)
																return 2.22408;
															else
																return 1.77069;
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
					if(ta < 5.5)
						return 12.135;
					else
					{
						if(rsrp < -110.5)
							return 4.71559;
						else
						{
							if(payload < 1.25)
								return 6.0241;
							else
								return 6.84173;
						}
					}
				}
			}
			else
			{
				if(ta < 4.5)
				{
					if(velocity < 0.65)
					{
						if(f < 2262.5)
							return 14.0326;
						else
							return 11.7073;
					}
					else
					{
						if(f < 1347.5)
						{
							if(velocity < 7.52)
								return 9.73236;
							else
							{
								if(rsrq < -16.5)
									return 4.46453;
								else
								{
									if(payload < 7)
										return 1.89678;
									else
										return 0.71823;
								}
							}
						}
						else
						{
							if(sinr < 1.5)
							{
								if(ta < 1.5)
								{
									if(sinr < -3.5)
										return 3.29218;
									else
									{
										if(rsrp < -89)
										{
											if(rsrp < -97.5)
												return 10.568;
											else
												return 12.8513;
										}
										else
										{
											if(sinr < -0.5)
												return 8.78156;
											else
												return 9.38086;
										}
									}
								}
								else
								{
									if(rsrp < -111)
									{
										if(payload < 5.5)
											return 4.34499;
										else
										{
											if(rsrp < -112.5)
												return 12.7029;
											else
												return 14.8607;
										}
									}
									else
									{
										if(rsrp < -85)
										{
											if(f < 2262.5)
											{
												if(rsrp < -107)
												{
													if(payload < 7)
														return 11.1328;
													else
														return 4.99237;
												}
												else
												{
													if(velocity < 11.13)
													{
														if(rsrp < -101)
															return 2.15876;
														else
															return 0.953743;
													}
													else
													{
														if(rsrp < -101)
															return 2.20534;
														else
														{
															if(payload < 8.5)
																return 4.04484;
															else
																return 3.57958;
														}
													}
												}
											}
											else
											{
												if(payload < 6)
													return 6.49878;
												else
													return 11.4309;
											}
										}
										else
										{
											if(sinr < -0.5)
												return 9.73236;
											else
											{
												if(payload < 6.5)
													return 7.09534;
												else
													return 9.62034;
											}
										}
									}
								}
							}
							else
							{
								if(ta < 2.5)
								{
									if(rsrp < -90.5)
										return 3.43035;
									else
										return 9.38527;
								}
								else
									return 1.34211;
							}
						}
					}
				}
				else
				{
					if(cqi < 5.5)
					{
						if(cqi < 0.5)
							return 16.3934;
						else
						{
							if(f < 2262.5)
							{
								if(payload < 9.5)
								{
									if(cell < 12989325.5)
									{
										if(ta < 8.5)
											return 12.3077;
										else
										{
											if(rsrq < -14.5)
											{
												if(payload < 6.5)
												{
													if(cell < 12903054)
														return 7.17811;
													else
														return 8.32466;
												}
												else
												{
													if(rsrq < -16)
													{
														if(sinr < -9.5)
															return 1.86399;
														else
															return 2.6205;
													}
													else
														return 3.98059;
												}
											}
											else
											{
												if(cqi < 4.5)
													return 4.31001;
												else
												{
													if(rsrp < -99.5)
														return 3.59939;
													else
													{
														if(ta < 13.5)
															return 0.9411352;
														else
															return 1.7179642586;
													}
												}
											}
										}
									}
									else
									{
										if(cell < 13882626)
										{
											if(rsrp < -96.5)
											{
												if(ta < 28.5)
												{
													if(velocity < 9.34)
													{
														if(rsrp < -100.5)
														{
															if(ta < 7)
															{
																if(rsrp < -106.5)
																	return 0.396983;
																else
																	return 1.68443;
															}
															else
															{
																if(cell < 13542402.5)
																{
																	if(cell < 13518990.5)
																	{
																		if(rsrq < -15.5)
																			return 2.90289;
																		else
																			return 4.29969;
																	}
																	else
																		return 2.4860966667;
																}
																else
																{
																	if(velocity < 4.565)
																		return 0.702432;
																	else
																		return 1.82108;
																}
															}
														}
														else
														{
															if(payload < 8)
															{
																if(velocity < 3.475)
																	return 2.151715;
																else
																	return 1.74102;
															}
															else
																return 0.784852;
														}
													}
													else
													{
														if(ta < 11)
														{
															if(cqi < 4.5)
																return 0.5688145714;
															else
															{
																if(velocity < 10.705)
																	return 0.491224;
																else
																	return 0.985549;
															}
														}
														else
														{
															if(payload < 5.5)
															{
																if(rsrp < -103)
																{
																	if(cell < 13484943)
																		return 0.978593;
																	else
																		return 0.58418;
																}
																else
																	return 2.51873;
															}
															else
															{
																if(rsrp < -98.5)
																{
																	if(ta < 14)
																		return 0.4154422;
																	else
																		return 0.9641848889;
																}
																else
																	return 2.03126;
															}
														}
													}
												}
												else
												{
													if(cell < 13536257)
													{
														if(payload < 5.5)
															return 0.938989;
														else
														{
															if(cqi < 4.5)
															{
																if(payload < 6.5)
																	return 2.98675;
																else
																	return 2.5215;
															}
															else
																return 1.92261;
														}
													}
													else
													{
														if(rsrq < -16.5)
															return 3.2821233333;
														else
															return 2.0995;
													}
												}
											}
											else
											{
												if(rsrq < -13.5)
												{
													if(rsrp < -95.5)
													{
														if(ta < 13.5)
															return 3.08523;
														else
														{
															if(sinr < -7)
																return 2.22717;
															else
																return 1.6647;
														}
													}
													else
													{
														if(sinr < -2.5)
														{
															if(rsrp < -91)
																return 1.45549;
															else
																return 2.07308;
														}
														else
															return 0.764891;
													}
												}
												else
												{
													if(sinr < -1.5)
														return 8.01202;
													else
														return 2.00342;
												}
											}
										}
										else
										{
											if(rsrp < -89.5)
											{
												if(velocity < 4.905)
													return 3.67623;
												else
												{
													if(rsrp < -103.5)
													{
														if(rsrq < -14.5)
															return 2.94491;
														else
															return 2.50279;
													}
													else
													{
														if(cell < 13884161.5)
															return 2.85753;
														else
														{
															if(velocity < 17.07)
																return 1.2107115;
															else
																return 2.37092;
														}
													}
												}
											}
											else
											{
												if(rsrq < -9)
													return 7.94326;
												else
													return 12.343;
											}
										}
									}
								}
								else
								{
									if(ta < 30)
									{
										if(cell < 13542402.5)
										{
											if(rsrq < -17.5)
												return 2.45821;
											else
												return 3.4000292395;
										}
										else
										{
											if(rsrp < -108.5)
												return 1.07459;
											else
											{
												if(rsrp < -105.5)
													return 2.01476;
												else
													return 1.63142;
											}
										}
									}
									else
									{
										if(rsrp < -104.5)
											return 14.771;
										else
											return 26.1352;
									}
								}
							}
							else
							{
								if(ta < 14)
									return 11.4313;
								else
									return 2.3873425;
							}
						}
					}
					else
					{
						if(cell < 13674242)
						{
							if(velocity < 14.88)
							{
								if(rsrq < -11)
								{
									if(cqi < 9.5)
									{
										if(rsrq < -12.5)
										{
											if(rsrp < -101.5)
											{
												if(sinr < -3.5)
													return 2.50031;
												else
												{
													if(sinr < -2.5)
														return 1.33375;
													else
														return 0.514234;
												}
											}
											else
											{
												if(ta < 5.5)
													return 1.45421;
												else
												{
													if(velocity < 9.475)
													{
														if(ta < 17.5)
														{
															if(cell < 13163163)
																return 3.588274;
															else
															{
																if(rsrq < -14.5)
																	return 3.61918;
																else
																{
																	if(payload < 6)
																		return 5.64732;
																	else
																		return 4.39009;
																}
															}
														}
														else
															return 2.69815;
													}
													else
													{
														if(cell < 13542402.5)
														{
															if(velocity < 11.865)
																return 2.6205633333;
															else
															{
																if(sinr < -2.5)
																	return 3.46771;
																else
																	return 4.196615;
															}
														}
														else
															return 0.904963;
													}
												}
											}
										}
										else
										{
											if(payload < 5.5)
											{
												if(ta < 13.5)
													return 6.35425;
												else
													return 2.72665;
											}
											else
											{
												if(payload < 9)
												{
													if(velocity < 10.32)
													{
														if(ta < 8.5)
															return 0.3884556667;
														else
															return 1.18495;
													}
													else
														return 2.83487;
												}
												else
												{
													if(velocity < 12.275)
													{
														if(sinr < 0)
															return 0.898806;
														else
															return 3.29584;
													}
													else
														return 0.510728;
												}
											}
										}
									}
									else
									{
										if(rsrp < -81.5)
											return 6.28931;
										else
											return 5.6926;
									}
								}
								else
								{
									if(ta < 6.5)
										return 2.33483;
									else
									{
										if(payload < 7.5)
											return 5.14848;
										else
											return 6.6752775;
									}
								}
							}
							else
							{
								if(rsrp < -99.5)
								{
									if(rsrq < -12.5)
										return 16.2767;
									else
										return 11.118;
								}
								else
								{
									if(rsrp < -90.5)
									{
										if(cell < 13461530)
										{
											if(sinr < -1.5)
												return 4.37504;
											else
												return 3.40764;
										}
										else
										{
											if(rsrq < -10.5)
												return 5.36265;
											else
												return 4.7784;
										}
									}
									else
									{
										if(payload < 6.5)
										{
											if(rsrq < -11)
												return 8.4674;
											else
												return 8.9840025;
										}
										else
											return 7.5594;
									}
								}
							}
						}
						else
						{
							if(velocity < 5.765)
							{
								if(rsrp < -95.5)
								{
									if(cell < 14345742)
									{
										if(rsrp < -96.5)
											return 8.6807125;
										else
											return 15.7102;
									}
									else
										return 18.8813;
								}
								else
								{
									if(rsrq < -11)
										return 2.46268;
									else
										return 6.87403;
								}
							}
							else
							{
								if(rsrq < -12.5)
								{
									if(payload < 8)
									{
										if(rsrp < -88)
										{
											if(rsrp < -103)
												return 1.38098;
											else
											{
												if(velocity < 10.835)
												{
													if(rsrp < -93.5)
														return 2.26078;
													else
														return 4.00842;
												}
												else
												{
													if(payload < 6.5)
														return 3.5502575;
													else
														return 4.01462;
												}
											}
										}
										else
											return 1.20355;
									}
									else
									{
										if(velocity < 9.75)
											return 2.33461;
										else
										{
											if(rsrp < -93)
												return 6.10376;
											else
												return 5.09338;
										}
									}
								}
								else
								{
									if(rsrp < -84.5)
									{
										if(payload < 9.5)
										{
											if(cqi < 6.5)
											{
												if(rsrp < -92.5)
												{
													if(velocity < 33.88)
													{
														if(rsrp < -100)
															return 2.48182;
														else
															return 3.95788;
													}
													else
														return 5.96372;
												}
												else
													return 6.1484925;
											}
											else
											{
												if(sinr < 0)
												{
													if(ta < 23.5)
													{
														if(rsrp < -98.5)
														{
															if(cqi < 7.5)
																return 1.67098;
															else
																return 2.38178;
														}
														else
															return 3.02858;
													}
													else
													{
														if(payload < 7)
															return 1.07829;
														else
															return 1.47106;
													}
												}
												else
													return 4.5865;
											}
										}
										else
										{
											if(rsrq < -9)
												return 10.3292;
											else
												return 6.28239;
										}
									}
									else
									{
										if(rsrp < -75.5)
										{
											if(rsrp < -82)
												return 10.6121;
											else
												return 11.4641;
										}
										else
											return 13.4369;
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
			if(rsrq < -11.5)
			{
				if(rsrp < -98.5)
				{
					if(sinr < 7)
					{
						if(velocity < 12.93)
						{
							if(rsrp < -109.5)
								return 7.38007;
							else
							{
								if(velocity < 9.55)
									return 1.365765;
								else
									return 1.74293;
							}
						}
						else
						{
							if(payload < 5)
								return 11.0957;
							else
								return 11.5345;
						}
					}
					else
					{
						if(payload < 4)
						{
							if(cqi < 11.5)
								return 8.10537;
							else
								return 6.66669;
						}
						else
						{
							if(payload < 8.5)
								return 15.748;
							else
								return 21.0637;
						}
					}
				}
				else
				{
					if(ta < 3.5)
					{
						if(rsrp < -78)
						{
							if(rsrq < -17.5)
								return 13.4713;
							else
							{
								if(sinr < 4)
									return 10.5587;
								else
								{
									if(ta < 2)
									{
										if(velocity < 8.455)
											return 8.40532;
										else
											return 9.13764;
									}
									else
									{
										if(payload < 2.05)
											return 6.89658;
										else
											return 5.80131;
									}
								}
							}
						}
						else
						{
							if(ta < 1.5)
								return 5;
							else
								return 3.171295;
						}
					}
					else
					{
						if(cqi < 6.5)
						{
							if(cell < 13163278.5)
							{
								if(payload < 5)
								{
									if(velocity < 14.515)
									{
										if(rsrq < -12.5)
										{
											if(rsrp < -90.5)
											{
												if(sinr < 4)
													return 2.08243;
												else
													return 2.69209;
											}
											else
												return 0.396434;
										}
										else
										{
											if(rsrp < -93.5)
												return 2.37883;
											else
											{
												if(sinr < 5)
													return 3.73832;
												else
													return 3.28677;
											}
										}
									}
									else
									{
										if(payload < 1.05)
											return 4.96896;
										else
											return 6.03546;
									}
								}
								else
								{
									if(ta < 10.5)
										return 6.678682;
									else
										return 2.58672;
								}
							}
							else
							{
								if(payload < 7.5)
								{
									if(cell < 13683982)
									{
										if(cell < 13542402.5)
										{
											if(ta < 6.5)
											{
												if(payload < 3.5)
												{
													if(rsrp < -95)
														return 1.41501;
													else
														return 0.885152;
												}
												else
												{
													if(payload < 5.5)
														return 3.20449;
													else
														return 2.56363;
												}
											}
											else
											{
												if(payload < 4.5)
												{
													if(rsrp < -94)
														return 1.30612;
													else
														return 2.56492;
												}
												else
												{
													if(sinr < 6)
														return 1.19176;
													else
														return 0.68598;
												}
											}
										}
										else
											return 0.132251;
									}
									else
									{
										if(rsrp < -89.5)
										{
											if(sinr < 4.5)
											{
												if(payload < 4.5)
													return 2.91347;
												else
													return 1.86032;
											}
											else
												return 1.41459;
										}
										else
											return 3.3981666667;
									}
								}
								else
								{
									if(ta < 11)
									{
										if(f < 1347.5)
										{
											if(rsrq < -12.5)
												return 1.50875;
											else
												return 1.07152;
										}
										else
											return 3.64447;
									}
									else
										return 6.6968;
								}
							}
						}
						else
						{
							if(cqi < 9.5)
							{
								if(payload < 2.5)
								{
									if(velocity < 14.26)
									{
										if(sinr < 3.5)
										{
											if(cell < 13163163)
												return 0.727141;
											else
												return 1.43875;
										}
										else
										{
											if(f < 1347.5)
											{
												if(velocity < 9.23)
													return 0.127105;
												else
													return 0.703482;
											}
											else
											{
												if(velocity < 9.18)
												{
													if(payload < 0.75)
														return 2.10637;
													else
													{
														if(rsrp < -94)
															return 1.67102;
														else
														{
															if(rsrp < -84.5)
															{
																if(payload < 1.5)
																	return 3.77003;
																else
																	return 4.30339;
															}
															else
																return 2.32761;
														}
													}
												}
												else
												{
													if(cqi < 7.5)
														return 6.02864;
													else
														return 4.25534;
												}
											}
										}
									}
									else
									{
										if(sinr < 8)
										{
											if(payload < 0.3)
												return 5.47947;
											else
												return 4.60299;
										}
										else
											return 4.34075;
									}
								}
								else
								{
									if(f < 2262.5)
									{
										if(cell < 13416974.5)
										{
											if(cell < 13163278.5)
											{
												if(payload < 7.5)
												{
													if(rsrp < -88.5)
													{
														if(payload < 4)
														{
															if(rsrp < -92.5)
																return 1.56413;
															else
																return 3.24456;
														}
														else
														{
															if(ta < 10)
															{
																if(sinr < 5)
																	return 8.60369;
																else
																	return 3.51278;
															}
															else
																return 3.1746325;
														}
													}
													else
													{
														if(sinr < 9.5)
															return 6.02107;
														else
															return 6.91842;
													}
												}
												else
												{
													if(payload < 9)
														return 6.47511;
													else
														return 8.09143;
												}
											}
											else
												return 10.4661;
										}
										else
										{
											if(payload < 6)
											{
												if(f < 1347.5)
												{
													if(payload < 4.5)
														return 6.05373;
													else
														return 6.86342;
												}
												else
												{
													if(sinr < 4)
														return 4.72534;
													else
													{
														if(ta < 10)
															return 3.83509;
														else
															return 3.3442;
													}
												}
											}
											else
											{
												if(rsrp < -83.5)
													return 0.728906;
												else
													return 2.44707;
											}
										}
									}
									else
										return 8.8970132143;
								}
							}
							else
							{
								if(rsrp < -87.5)
								{
									if(velocity < 1.525)
									{
										if(f < 1347.5)
											return 7.28597;
										else
										{
											if(rsrp < -90.5)
												return 5.90842;
											else
												return 5.17369;
										}
									}
									else
									{
										if(velocity < 14.265)
										{
											if(payload < 8.5)
												return 7.57268;
											else
												return 9.19118;
										}
										else
											return 5.65411;
									}
								}
								else
								{
									if(ta < 5.5)
										return 0.127005;
									else
									{
										if(sinr < 8)
										{
											if(cell < 14113934)
												return 3.75029;
											else
												return 4.25509;
										}
										else
											return 2.59319;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				if(cell < 14345742)
				{
					if(payload < 2.5)
					{
						if(ta < 21)
						{
							if(rsrp < -77.5)
							{
								if(ta < 3.5)
								{
									if(f < 2262.5)
									{
										if(velocity < 0.74)
											return 1.21341;
										else
										{
											if(cqi < 9.5)
											{
												if(rsrq < -7.5)
												{
													if(rsrp < -97)
													{
														if(rsrp < -108.5)
															return 2.1692;
														else
														{
															if(cqi < 7.5)
															{
																if(rsrq < -10)
																	return 8.14664;
																else
																	return 3.75588;
															}
															else
																return 8.84956;
														}
													}
													else
													{
														if(sinr < 6)
														{
															if(sinr < 4.5)
																return 2.04656;
															else
																return 2.52742;
														}
														else
														{
															if(ta < 1.5)
															{
																if(velocity < 16.59)
																{
																	if(payload < 0.55)
																		return 3.84617;
																	else
																	{
																		if(sinr < 10.5)
																		{
																			if(payload < 1.5)
																				return 2.97841;
																			else
																				return 2.56451;
																		}
																		else
																			return 3.1917;
																	}
																}
																else
																	return 4.42283;
															}
															else
															{
																if(rsrq < -9.5)
																	return 3.91198;
																else
																	return 5.55556;
															}
														}
													}
												}
												else
												{
													if(sinr < 9.5)
													{
														if(payload < 1.5)
														{
															if(rsrp < -98.5)
																return 2.78843;
															else
																return 2.0724833333;
														}
														else
															return 2.8085;
													}
													else
													{
														if(cqi < 8.5)
															return 4.99376;
														else
															return 4.37278;
													}
												}
											}
											else
											{
												if(velocity < 7.98)
												{
													if(velocity < 3.705)
														return 7.44879;
													else
														return 10.1652;
												}
												else
												{
													if(cqi < 13.5)
													{
														if(rsrq < -7.5)
														{
															if(rsrp < -88.5)
																return 4.23282;
															else
																return 3.60198;
														}
														else
															return 2.24404;
													}
													else
														return 5.96125;
												}
											}
										}
									}
									else
									{
										if(cell < 13404045)
										{
											if(sinr < 9)
												return 0.569638;
											else
											{
												if(payload < 1.5)
													return 1.3092633333;
												else
													return 0.848626;
											}
										}
										else
										{
											if(ta < 1.5)
												return 6.4;
											else
												return 5.37273;
										}
									}
								}
								else
								{
									if(velocity < 21.785)
									{
										if(rsrp < -85.5)
										{
											if(ta < 18)
											{
												if(payload < 1.5)
												{
													if(rsrp < -98.5)
													{
														if(sinr < 3.5)
															return 3.27735;
														else
														{
															if(cell < 12914201)
																return 8.84956;
															else
															{
																if(rsrq < -9.5)
																	return 0.697898;
																else
																{
																	if(velocity < 9.145)
																	{
																		if(rsrp < -107)
																			return 4.15369;
																		else
																		{
																			if(rsrp < -100.5)
																			{
																				if(rsrp < -103)
																					return 7.07967;
																				else
																				{
																					if(cqi < 12)
																						return 5.03147;
																					else
																						return 5.59441;
																				}
																			}
																			else
																				return 7.20723;
																		}
																	}
																	else
																	{
																		if(cqi < 8.5)
																			return 4.930965;
																		else
																			return 3.75588;
																	}
																}
															}
														}
													}
													else
													{
														if(ta < 11.5)
														{
															if(sinr < 6.5)
															{
																if(rsrp < -97)
																	return 3.18726;
																else
																{
																	if(payload < 0.75)
																		return 2.30655;
																	else
																		return 1.74102;
																}
															}
															else
															{
																if(cell < 13366299)
																{
																	if(sinr < 8.5)
																		return 4.68933;
																	else
																		return 6.5374133333;
																}
																else
																{
																	if(ta < 5.5)
																		return 2.47678;
																	else
																	{
																		if(velocity < 6.9)
																		{
																			if(rsrq < -8.5)
																				return 4.18279;
																			else
																				return 3.70372;
																		}
																		else
																		{
																			if(velocity < 10.24)
																				return 6.83763;
																			else
																			{
																				if(payload < 0.75)
																					return 5.25624;
																				else
																					return 4.60564;
																			}
																		}
																	}
																}
															}
														}
														else
														{
															if(velocity < 1.475)
																return 1.665542;
															else
															{
																if(velocity < 10.415)
																{
																	if(ta < 12.5)
																	{
																		if(sinr < 5.5)
																		{
																			if(rsrp < -93.5)
																				return 3.95257;
																			else
																				return 3.43349;
																		}
																		else
																			return 4.46929;
																	}
																	else
																		return 4.73375;
																}
																else
																{
																	if(rsrq < -7.5)
																	{
																		if(payload < 0.3)
																			return 4.04042;
																		else
																		{
																			if(rsrp < -90)
																				return 2.67023;
																			else
																			{
																				if(payload < 0.75)
																					return 1.31752;
																				else
																					return 1.91939;
																			}
																		}
																	}
																	else
																		return 1.12676;
																}
															}
														}
													}
												}
												else
												{
													if(cqi < 9.5)
													{
														if(velocity < 13.875)
														{
															if(velocity < 12.57)
															{
																if(rsrp < -100)
																{
																	if(rsrp < -103.5)
																		return 6.70297;
																	else
																		return 5.25279;
																}
																else
																{
																	if(cqi < 6.5)
																		return 6.24268;
																	else
																	{
																		if(cell < 13627540)
																		{
																			if(sinr < 9)
																				return 9.48992;
																			else
																				return 9.93172;
																		}
																		else
																			return 10.4439;
																	}
																}
															}
															else
																return 14.9254;
														}
														else
														{
															if(rsrp < -92.5)
																return 2.01334;
															else
																return 6.49614;
														}
													}
													else
													{
														if(ta < 7)
														{
															if(cqi < 11)
																return 4.75059;
															else
																return 8.04829;
														}
														else
														{
															if(velocity < 7.01)
															{
																if(rsrp < -100)
																	return 2.76865;
																else
																	return 2.34707;
															}
															else
															{
																if(rsrp < -91.5)
																{
																	if(ta < 13.5)
																		return 5.80762;
																	else
																		return 6.7086;
																}
																else
																	return 3.82318;
															}
														}
													}
												}
											}
											else
												return 8.63465;
										}
										else
										{
											if(cell < 13884162.5)
											{
												if(rsrp < -84.5)
												{
													if(rsrq < -8.5)
														return 8.28586;
													else
														return 9.09094;
												}
												else
												{
													if(cqi < 8.5)
													{
														if(rsrp < -78.5)
															return 3.9801;
														else
															return 4.67973;
													}
													else
													{
														if(rsrp < -78.5)
														{
															if(payload < 0.3)
																return 4.3716;
															else
															{
																if(cell < 13825562)
																	return 6.6146133333;
																else
																	return 6.21601;
															}
														}
														else
															return 7.74818;
													}
												}
											}
											else
												return 3.11526;
										}
									}
									else
									{
										if(rsrq < -7.5)
										{
											if(rsrp < -94.5)
											{
												if(cqi < 6)
													return 0.527983;
												else
													return 1.09409;
											}
											else
												return 3.12501;
										}
										else
											return 4;
									}
								}
							}
							else
							{
								if(sinr < 5.5)
								{
									if(rsrp < -74.5)
										return 7.27273;
									else
										return 4.24403;
								}
								else
								{
									if(cqi < 9.5)
									{
										if(cqi < 8.5)
										{
											if(sinr < 9)
											{
												if(velocity < 3.105)
													return 8.99888;
												else
												{
													if(rsrq < -9.5)
														return 4.58453;
													else
													{
														if(rsrp < -75.5)
															return 6.13497;
														else
															return 5.6338;
													}
												}
											}
											else
											{
												if(payload < 0.55)
													return 8.60218;
												else
													return 7.64818;
											}
										}
										else
											return 14.6386;
									}
									else
									{
										if(rsrp < -72)
										{
											if(cell < 13616276)
											{
												if(rsrq < -6.5)
													return 6.38213;
												else
													return 6.95048;
											}
											else
											{
												if(rsrp < -75.5)
													return 8.08898;
												else
													return 8.54701;
											}
										}
										else
											return 3.58746;
									}
								}
							}
						}
						else
						{
							if(ta < 34)
								return 1.2493366667;
							else
							{
								if(sinr < 7)
									return 2.86328;
								else
									return 3.29083;
							}
						}
					}
					else
					{
						if(cell < 13806094)
						{
							if(rsrq < -6.5)
							{
								if(cell < 12927002.5)
								{
									if(cell < 12914202)
									{
										if(cqi < 6.5)
										{
											if(ta < 14.5)
											{
												if(ta < 10)
												{
													if(rsrp < -99)
														return 10.2433;
													else
													{
														if(velocity < 13.79)
														{
															if(payload < 4)
																return 1.86858;
															else
															{
																if(payload < 5.5)
																	return 3.01796;
																else
																	return 2.55127;
															}
														}
														else
														{
															if(cell < 12896782)
																return 4.36126;
															else
															{
																if(cell < 12909594.5)
																	return 6.4078225;
																else
																	return 5.5788;
															}
														}
													}
												}
												else
												{
													if(sinr < 6)
													{
														if(sinr < 4)
															return 5.52486;
														else
															return 7.52587;
													}
													else
													{
														if(rsrq < -9)
															return 12.513;
														else
															return 8.34396;
													}
												}
											}
											else
											{
												if(rsrq < -9)
													return 2.99401;
												else
													return 3.70628;
											}
										}
										else
										{
											if(sinr < 4.5)
											{
												if(payload < 3.5)
													return 0.881348;
												else
												{
													if(cqi < 8.5)
													{
														if(ta < 2.5)
														{
															if(sinr < 3.5)
																return 10.5611;
															else
															{
																if(rsrp < -90)
																	return 12.0998;
																else
																	return 13.8129;
															}
														}
														else
															return 14.408225;
													}
													else
													{
														if(payload < 8.5)
														{
															if(rsrq < -10)
																return 9.42285;
															else
																return 8.18833;
														}
														else
														{
															if(cqi < 9.5)
																return 4.87329;
															else
																return 6.82769;
														}
													}
												}
											}
											else
											{
												if(sinr < 11.5)
												{
													if(rsrq < -9.5)
													{
														if(rsrp < -96)
															return 10.1574;
														else
														{
															if(cell < 12896781.5)
																return 10.5862;
															else
															{
																if(ta < 1.5)
																{
																	if(velocity < 12.945)
																	{
																		if(payload < 4.5)
																			return 10.0851;
																		else
																			return 9.67118;
																	}
																	else
																	{
																		if(rsrp < -84)
																			return 5.77909;
																		else
																			return 5.33689;
																	}
																}
																else
																{
																	if(rsrp < -90.5)
																	{
																		if(sinr < 6.5)
																			return 6.2315;
																		else
																		{
																			if(ta < 10)
																				return 5.06126;
																			else
																				return 4.447995;
																		}
																	}
																	else
																	{
																		if(rsrq < -10.5)
																		{
																			if(payload < 7.5)
																				return 6.68019;
																			else
																			{
																				if(payload < 8.5)
																					return 3.89508;
																				else
																					return 3.485095;
																			}
																		}
																		else
																			return 1.67645;
																	}
																}
															}
														}
													}
													else
													{
														if(rsrp < -78.5)
														{
															if(payload < 8.5)
															{
																if(ta < 13.5)
																{
																	if(cqi < 7.5)
																	{
																		if(velocity < 11.69)
																			return 10.6649;
																		else
																			return 11.1304;
																	}
																	else
																	{
																		if(rsrp < -91.5)
																			return 5.69851;
																		else
																		{
																			if(rsrp < -82.5)
																			{
																				if(sinr < 9.5)
																				{
																					if(cell < 12909467)
																						return 10.72014;
																					else
																						return 10.0503;
																				}
																				else
																					return 9.00394;
																			}
																			else
																				return 7.19856;
																		}
																	}
																}
																else
																{
																	if(payload < 5.5)
																	{
																		if(rsrp < -93.5)
																			return 3.36205;
																		else
																			return 4.26667;
																	}
																	else
																		return 5.28003;
																}
															}
															else
															{
																if(cell < 12909593.5)
																{
																	if(cqi < 9.5)
																	{
																		if(velocity < 15.88)
																			return 8.824235;
																		else
																			return 10.7817;
																	}
																	else
																	{
																		if(payload < 9.5)
																			return 14.7692;
																		else
																			return 13.2472;
																	}
																}
																else
																	return 16.4914;
															}
														}
														else
														{
															if(velocity < 14.855)
															{
																if(cell < 12903193.5)
																{
																	if(ta < 10.5)
																		return 5.1359733333;
																	else
																		return 4.22219;
																}
																else
																{
																	if(payload < 4)
																		return 3.86038;
																	else
																		return 4.29461;
																}
															}
															else
															{
																if(payload < 5.5)
																	return 4.51467;
																else
																	return 8.0281;
															}
														}
													}
												}
												else
												{
													if(ta < 3.5)
														return 5.33725;
													else
													{
														if(payload < 6.5)
														{
															if(payload < 4.5)
															{
																if(rsrq < -7.5)
																{
																	if(f < 1347.5)
																		return 12.5737;
																	else
																		return 13.1796;
																}
																else
																	return 11.0459;
															}
															else
																return 10.1497;
														}
														else
															return 15.8455;
													}
												}
											}
										}
									}
									else
									{
										if(rsrq < -10.5)
											return 2.98382;
										else
										{
											if(ta < 11)
											{
												if(cell < 12918810.5)
												{
													if(rsrp < -84.5)
													{
														if(rsrp < -97.5)
															return 16.8563;
														else
															return 18.2163;
													}
													else
														return 14.0351;
												}
												else
												{
													if(velocity < 14.31)
													{
														if(payload < 9.5)
															return 14.0488;
														else
															return 16.4948;
													}
													else
													{
														if(velocity < 24.055)
														{
															if(rsrq < -8.5)
																return 8.94354;
															else
																return 9.619795;
														}
														else
														{
															if(payload < 7.5)
															{
																if(payload < 4.5)
																	return 11.9314;
																else
																	return 11.2045;
															}
															else
																return 9.6911;
														}
													}
												}
											}
											else
											{
												if(velocity < 1.47)
													return 13.485;
												else
												{
													if(rsrp < -108.5)
														return 7.11849;
													else
													{
														if(payload < 8)
														{
															if(cqi < 7.5)
																return 7.30594;
															else
															{
																if(rsrq < -7.5)
																	return 9.193474;
																else
																	return 8.56837;
															}
														}
														else
															return 12.5059;
													}
												}
											}
										}
									}
								}
								else
								{
									if(rsrp < -83.5)
									{
										if(velocity < 29.975)
										{
											if(ta < 1.5)
											{
												if(sinr < 9)
												{
													if(velocity < 5.32)
														return 1.9761;
													else
														return 12.3195;
												}
												else
													return 9.414264;
											}
											else
											{
												if(payload < 5.5)
												{
													if(rsrp < -89.5)
													{
														if(payload < 4.5)
														{
															if(rsrp < -91.5)
																return 4.20168;
															else
																return 2.46723;
														}
														else
															return 4.70754;
													}
													else
													{
														if(rsrq < -8.5)
														{
															if(ta < 10)
															{
																if(velocity < 8.84)
																	return 1.54071;
																else
																	return 0.7122716667;
															}
															else
																return 1.81637;
														}
														else
															return 1.9719;
													}
												}
												else
												{
													if(ta < 9.5)
													{
														if(f < 1347.5)
														{
															if(rsrp < -87.5)
															{
																if(velocity < 8.415)
																{
																	if(payload < 7.5)
																		return 7.63602;
																	else
																		return 7.19424;
																}
																else
																	return 5.77548;
															}
															else
																return 9.08704;
														}
														else
														{
															if(rsrp < -94.5)
																return 2.03373;
															else
															{
																if(rsrp < -89)
																{
																	if(rsrq < -7.5)
																		return 5.4129033333;
																	else
																		return 6.66445;
																}
																else
																	return 2.48937;
															}
														}
													}
													else
													{
														if(cell < 13542402.5)
															return 2.641605;
														else
															return 0.635747;
													}
												}
											}
										}
										else
										{
											if(rsrp < -89.5)
												return 6.71047;
											else
												return 15.9681;
										}
									}
									else
									{
										if(velocity < 10.845)
											return 17.8685;
										else
										{
											if(cqi < 10.5)
											{
												if(sinr < 6.5)
												{
													if(payload < 6.5)
													{
														if(cell < 13605255.5)
															return 10.1652;
														else
															return 9.65795;
													}
													else
														return 8.21355;
												}
												else
												{
													if(ta < 2.5)
														return 12.7157;
													else
														return 12.3172;
												}
											}
											else
												return 6.10532;
										}
									}
								}
							}
							else
							{
								if(payload < 9.5)
								{
									if(cell < 12909466)
									{
										if(ta < 26)
										{
											if(cqi < 8)
												return 7.91452;
											else
												return 7.17949;
										}
										else
											return 4.42179;
									}
									else
									{
										if(f < 2262.5)
										{
											if(sinr < 9)
											{
												if(payload < 6.5)
													return 20.0753;
												else
													return 23.0358;
											}
											else
											{
												if(cqi < 12.5)
												{
													if(ta < 11)
														return 8.42993;
													else
														return 6.44901;
												}
												else
													return 18.5615;
											}
										}
										else
										{
											if(payload < 5.5)
												return 6.6102;
											else
												return 10.5541;
										}
									}
								}
								else
									return 27.8649;
							}
						}
						else
						{
							if(cqi < 13)
							{
								if(rsrq < -9.5)
								{
									if(ta < 5)
									{
										if(cqi < 7.5)
										{
											if(cqi < 5.5)
												return 5.5948;
											else
												return 10.4004;
										}
										else
											return 14.5098333333;
									}
									else
									{
										if(velocity < 26.385)
										{
											if(cqi < 9.5)
											{
												if(sinr < 11)
												{
													if(rsrp < -91)
													{
														if(payload < 8.5)
														{
															if(velocity < 15.08)
															{
																if(payload < 6.5)
																	return 8.51064;
																else
																	return 7.77238;
															}
															else
																return 10.0188;
														}
														else
															return 10.6809;
													}
													else
													{
														if(f < 1347.5)
															return 3.58905;
														else
														{
															if(payload < 3.5)
																return 8.18554;
															else
															{
																if(rsrp < -86)
																	return 6.55141;
																else
																	return 6.11154;
															}
														}
													}
												}
												else
													return 11.1317;
											}
											else
											{
												if(velocity < 13.085)
													return 4.62428;
												else
													return 3.9863;
											}
										}
										else
										{
											if(payload < 7)
											{
												if(f < 1347.5)
													return 9.64785;
												else
													return 11.5984;
											}
											else
												return 13.6622;
										}
									}
								}
								else
								{
									if(rsrp < -105.5)
										return 2.12508;
									else
									{
										if(payload < 5.5)
										{
											if(velocity < 15.55)
											{
												if(sinr < 10.5)
												{
													if(rsrq < -8.5)
													{
														if(rsrp < -87.5)
															return 2.87735;
														else
															return 4.81058;
													}
													else
													{
														if(payload < 3.5)
														{
															if(rsrp < -86)
																return 5.68855;
															else
																return 5.17799;
														}
														else
														{
															if(rsrp < -84.5)
															{
																if(cqi < 9.5)
																{
																	if(sinr < 7.5)
																		return 9.37866;
																	else
																		return 8.864545;
																}
																else
																	return 6.81576;
															}
															else
																return 4.68933;
														}
													}
												}
												else
												{
													if(payload < 4)
														return 11.7763;
													else
														return 14.7493;
												}
											}
											else
												return 20.1005;
										}
										else
										{
											if(cell < 13853582.5)
											{
												if(velocity < 11.45)
												{
													if(rsrp < -82.5)
														return 7.37327;
													else
														return 7.99201;
												}
												else
												{
													if(rsrq < -7.5)
													{
														if(rsrp < -77)
															return 10.1266;
														else
															return 9.69305;
													}
													else
														return 10.8489;
												}
											}
											else
											{
												if(cell < 14114964)
												{
													if(rsrp < -95)
													{
														if(rsrp < -97.5)
															return 16.6263;
														else
															return 18.799;
													}
													else
													{
														if(rsrq < -6.5)
														{
															if(velocity < 6.79)
															{
																if(sinr < 7.5)
																	return 17.1812;
																else
																	return 15.0493125;
															}
															else
															{
																if(velocity < 14.595)
																{
																	if(rsrq < -7.5)
																		return 13.8504;
																	else
																		return 14.3541;
																}
																else
																	return 15.4589;
															}
														}
														else
														{
															if(ta < 9)
																return 13.6054;
															else
																return 9.21925;
														}
													}
												}
												else
												{
													if(rsrq < -8.5)
														return 9.6309825;
													else
														return 11.1966;
												}
											}
										}
									}
								}
							}
							else
							{
								if(sinr < 9.5)
								{
									if(sinr < 7.5)
										return 18.8457;
									else
										return 22.1484;
								}
								else
								{
									if(ta < 7.5)
										return 14.6319;
									else
										return 15.748;
								}
							}
						}
					}
				}
				else
				{
					if(cqi < 9.5)
					{
						if(payload < 2.5)
						{
							if(velocity < 3.705)
								return 3.8835;
							else
							{
								if(cqi < 8)
									return 8.81057;
								else
									return 6.65557;
							}
						}
						else
						{
							if(velocity < 12.28)
							{
								if(payload < 9.5)
								{
									if(sinr < 5)
									{
										if(sinr < 3.5)
											return 11.5053;
										else
											return 12.0437;
									}
									else
									{
										if(payload < 6.5)
											return 17.6757;
										else
											return 15.5604;
									}
								}
								else
									return 21.84;
							}
							else
								return 20.48;
						}
					}
					else
						return 27.027;
				}
			}
		}
	}
	else
	{
		if(cell < 12909466)
		{
			if(cell < 12904596.5)
			{
				if(cqi < 6.5)
				{
					if(payload < 5)
					{
						if(rsrp < -73.5)
						{
							if(rsrp < -85.5)
								return 3.38984;
							else
								return 2.75672;
						}
						else
						{
							if(velocity < 14.04)
								return 6.28437;
							else
								return 5.33335;
						}
					}
					else
						return 11.8149;
				}
				else
				{
					if(velocity < 5.585)
					{
						if(cqi < 14.5)
						{
							if(payload < 4.5)
							{
								if(rsrq < -9.5)
								{
									if(sinr < 20)
									{
										if(sinr < 16.5)
											return 7.64088;
										else
										{
											if(cell < 12896769.5)
												return 4.89596;
											else
											{
												if(cell < 12898317.5)
												{
													if(sinr < 18)
														return 1.13733;
													else
														return 3.50071;
												}
												else
												{
													if(rsrq < -10.5)
													{
														if(payload < 1.05)
															return 3.72094;
														else
															return 5.46075;
													}
													else
														return 3.92157;
												}
											}
										}
									}
									else
										return 9.1638;
								}
								else
								{
									if(cqi < 9.5)
										return 4.41379;
									else
									{
										if(rsrp < -86)
											return 11.7763;
										else
										{
											if(ta < 10.5)
											{
												if(cqi < 10.5)
													return 8.67679;
												else
												{
													if(payload < 1.75)
													{
														if(payload < 0.3)
														{
															if(rsrq < -6.5)
																return 5.40543;
															else
																return 6.40002;
														}
														else
														{
															if(velocity < 1.19)
																return 6.7643933333;
															else
																return 8.17996;
														}
													}
													else
														return 5.04414;
												}
											}
											else
											{
												if(payload < 2.25)
													return 10.9589;
												else
													return 10.1458;
											}
										}
									}
								}
							}
							else
							{
								if(rsrq < -9.5)
								{
									if(ta < 11)
									{
										if(rsrq < -10.5)
										{
											if(rsrp < -84.5)
												return 19.0295;
											else
												return 17.8571;
										}
										else
											return 20.9424;
									}
									else
										return 24.2241;
								}
								else
								{
									if(sinr < 17)
									{
										if(f < 2262.5)
										{
											if(payload < 6.5)
											{
												if(rsrp < -87)
													return 6.59522;
												else
													return 7.59253;
											}
											else
											{
												if(payload < 7.5)
													return 12.4362;
												else
												{
													if(ta < 5.5)
													{
														if(sinr < 14.5)
															return 8.66152;
														else
															return 9.72316;
													}
													else
													{
														if(rsrq < -8)
															return 7.03881;
														else
															return 7.84891;
													}
												}
											}
										}
										else
											return 12.3812;
									}
									else
									{
										if(rsrp < -68)
										{
											if(payload < 5.5)
												return 5.82411;
											else
											{
												if(cqi < 12.5)
												{
													if(rsrp < -73)
														return 12.2982;
													else
														return 10.9256;
												}
												else
													return 14.3081;
											}
										}
										else
										{
											if(payload < 8.5)
												return 22.1071;
											else
												return 18.2417;
										}
									}
								}
							}
						}
						else
						{
							if(velocity < 1.7)
							{
								if(rsrq < -9)
									return 15.0858;
								else
								{
									if(rsrp < -65.5)
										return 12.8323;
									else
										return 6.3745;
								}
							}
							else
							{
								if(velocity < 3.81)
								{
									if(payload < 8.5)
										return 17.5055;
									else
										return 18.014;
								}
								else
								{
									if(rsrq < -7)
										return 22.3256;
									else
										return 20.2532;
								}
							}
						}
					}
					else
					{
						if(velocity < 8.36)
						{
							if(payload < 6)
							{
								if(sinr < 14.5)
								{
									if(cqi < 9.5)
										return 3.49346;
									else
									{
										if(rsrp < -82)
											return 8.51067;
										else
											return 7.0922;
									}
								}
								else
								{
									if(ta < 10.5)
									{
										if(rsrq < -8)
											return 3.86475;
										else
										{
											if(sinr < 24.5)
												return 5.22878;
											else
												return 8.10537;
										}
									}
									else
									{
										if(rsrp < -77)
											return 1.87793;
										else
											return 3.54296;
									}
								}
							}
							else
							{
								if(cqi < 10.5)
									return 21.8953;
								else
								{
									if(velocity < 7.665)
										return 10.8043;
									else
										return 7.45834;
								}
							}
						}
						else
						{
							if(payload < 4.5)
							{
								if(rsrq < -10)
								{
									if(payload < 0.75)
										return 13.5135;
									else
									{
										if(cqi < 10.5)
											return 10.6596;
										else
											return 7.3643133333;
									}
								}
								else
								{
									if(sinr < 23.5)
									{
										if(velocity < 14.34)
										{
											if(sinr < 20.5)
											{
												if(rsrq < -8.5)
												{
													if(sinr < 19)
													{
														if(cqi < 10.5)
															return 4.21054;
														else
															return 5.33335;
													}
													else
														return 8.08081;
												}
												else
												{
													if(ta < 5.5)
													{
														if(velocity < 13.16)
															return 7.52587;
														else
															return 3.94089;
													}
													else
													{
														if(rsrp < -73)
															return 4.1992433333;
														else
															return 3.74761;
													}
												}
											}
											else
											{
												if(payload < 0.75)
													return 1.43472;
												else
												{
													if(rsrq < -8)
														return 3.87222;
													else
														return 2.8521833333;
												}
											}
										}
										else
										{
											if(cell < 12896781)
												return 7.232322;
											else
											{
												if(cqi < 12)
													return 8.04829;
												else
													return 2.331;
											}
										}
									}
									else
									{
										if(rsrq < -6.5)
										{
											if(rsrp < -77.5)
												return 9.72053;
											else
												return 4.81203;
										}
										else
											return 9.60961;
									}
								}
							}
							else
							{
								if(cell < 12896793.5)
								{
									if(rsrq < -8.5)
									{
										if(velocity < 14.555)
										{
											if(sinr < 15)
												return 17.0455;
											else
											{
												if(sinr < 25.5)
												{
													if(rsrq < -9.5)
														return 8.1598733333;
													else
														return 10.3207666667;
												}
												else
													return 15.6678;
											}
										}
										else
										{
											if(payload < 6.5)
												return 6.30915;
											else
												return 8.07877;
										}
									}
									else
									{
										if(velocity < 11.4)
										{
											if(sinr < 17)
												return 16.3562;
											else
											{
												if(sinr < 24)
													return 18.419;
												else
													return 17.5935;
											}
										}
										else
										{
											if(sinr < 15)
											{
												if(ta < 13)
													return 5.54895;
												else
													return 9.31496;
											}
											else
											{
												if(rsrp < -61)
												{
													if(payload < 6.5)
														return 13.3557;
													else
													{
														if(velocity < 15.43)
															return 15.0066;
														else
															return 18.4067;
													}
												}
												else
													return 25.2565;
											}
										}
									}
								}
								else
								{
									if(rsrp < -75.5)
									{
										if(payload < 6)
										{
											if(cqi < 10.5)
												return 7.19683;
											else
												return 8.2713;
										}
										else
										{
											if(cqi < 7.5)
												return 8.25783;
											else
											{
												if(velocity < 12.655)
												{
													if(payload < 9)
													{
														if(rsrq < -6.5)
														{
															if(cqi < 12.5)
																return 12.4694;
															else
																return 12.975;
														}
														else
															return 13.9342;
													}
													else
														return 10.7368;
												}
												else
													return 11.8928333333;
											}
										}
									}
									else
									{
										if(rsrq < -6.5)
										{
											if(payload < 7.5)
												return 7.2767;
											else
												return 8.17912;
										}
										else
											return 9.4626775;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				if(payload < 7.5)
				{
					if(sinr < 26)
					{
						if(cqi < 13.5)
						{
							if(cqi < 10.5)
							{
								if(ta < 11.5)
								{
									if(payload < 6.5)
										return 2.397435;
									else
										return 4.62428;
								}
								else
								{
									if(ta < 15.5)
									{
										if(ta < 14.5)
										{
											if(ta < 13.5)
												return 5.690006;
											else
												return 5.13479;
										}
										else
											return 4.47219;
									}
									else
										return 7.18133;
								}
							}
							else
							{
								if(rsrp < -88.5)
									return 1.88472;
								else
									return 2.64288;
							}
						}
						else
						{
							if(rsrq < -9)
								return 5.49504;
							else
								return 6.23701;
						}
					}
					else
					{
						if(cqi < 10)
						{
							if(payload < 4)
								return 11.3261;
							else
								return 12.4494;
						}
						else
						{
							if(velocity < 12.055)
								return 5.29803;
							else
								return 4.04186;
						}
					}
				}
				else
				{
					if(rsrp < -88.5)
					{
						if(sinr < 22.5)
							return 11.4531;
						else
							return 10.3463;
					}
					else
					{
						if(rsrq < -6.5)
						{
							if(sinr < 30)
							{
								if(rsrp < -87.5)
									return 3.62956;
								else
								{
									if(rsrp < -86.5)
										return 6.10571;
									else
										return 4.90965;
								}
							}
							else
								return 7.70899;
						}
						else
							return 9.04722;
					}
				}
			}
		}
		else
		{
			if(sinr < 22.5)
			{
				if(rsrp < -67.5)
				{
					if(payload < 2.5)
					{
						if(velocity < 8.635)
						{
							if(payload < 0.75)
							{
								if(cell < 12914202)
									return 7.20721;
								else
								{
									if(sinr < 13.5)
									{
										if(rsrp < -86)
											return 5.87372;
										else
											return 5.24246;
									}
									else
									{
										if(ta < 3.5)
											return 4.32534;
										else
										{
											if(rsrp < -77)
											{
												if(rsrq < -7)
													return 4.912615;
												else
													return 5.67378;
											}
											else
											{
												if(cell < 13644424)
													return 4.6243;
												else
													return 4.08998;
											}
										}
									}
								}
							}
							else
							{
								if(rsrq < -10.5)
									return 6.87876;
								else
								{
									if(payload < 1.5)
									{
										if(rsrp < -86.5)
										{
											if(rsrq < -8.5)
												return 3.25071;
											else
											{
												if(sinr < 15.5)
													return 3.79147;
												else
													return 3.29625;
											}
										}
										else
											return 4.46927;
									}
									else
									{
										if(cell < 13156628)
											return 2.33134;
										else
											return 1.20992;
									}
								}
							}
						}
						else
						{
							if(cell < 14301698)
							{
								if(payload < 0.3)
								{
									if(ta < 3)
									{
										if(sinr < 20)
										{
											if(sinr < 17)
												return 9.30236;
											else
												return 8.60218;
										}
										else
										{
											if(cell < 13616275)
												return 7.01757;
											else
												return 5.29803;
										}
									}
									else
									{
										if(ta < 14)
										{
											if(sinr < 18.5)
											{
												if(rsrq < -10.5)
													return 5.59443;
												else
												{
													if(cell < 13401487)
														return 5.293778;
													else
														return 4.67838;
												}
											}
											else
												return 4.41991;
										}
										else
											return 9.4118;
									}
								}
								else
								{
									if(cqi < 11.5)
									{
										if(rsrp < -83.5)
										{
											if(velocity < 14.15)
											{
												if(rsrq < -9.5)
												{
													if(rsrp < -91.5)
														return 6.0015;
													else
														return 7.38007;
												}
												else
												{
													if(rsrp < -88)
														return 4;
													else
														return 5.67779;
												}
											}
											else
											{
												if(cell < 12918810)
													return 5.12164;
												else
												{
													if(rsrp < -93)
														return 2.03926;
													else
														return 3.0303;
												}
											}
										}
										else
										{
											if(ta < 9)
												return 12.62825;
											else
											{
												if(payload < 1.5)
													return 6.47773;
												else
													return 7.64088;
											}
										}
									}
									else
									{
										if(rsrq < -9)
											return 3.89105;
										else
										{
											if(cell < 13362446.5)
											{
												if(rsrp < -95.5)
												{
													if(velocity < 14.17)
														return 3.03951;
													else
													{
														if(rsrq < -6.5)
														{
															if(cqi < 13.5)
																return 3.18218;
															else
																return 9.55224;
														}
														else
															return 7.27273;
													}
												}
												else
												{
													if(velocity < 13.06)
														return 14.6252;
													else
													{
														if(rsrq < -5.5)
														{
															if(sinr < 17)
															{
																if(rsrq < -6.5)
																	return 11.3154;
																else
																	return 10.5263;
															}
															else
															{
																if(sinr < 18.5)
																	return 6.20396;
																else
																{
																	if(rsrp < -73.5)
																		return 7.97847;
																	else
																		return 9.1954;
																}
															}
														}
														else
														{
															if(cell < 12914202.5)
																return 14.3756;
															else
																return 8.57449;
														}
													}
												}
											}
											else
											{
												if(velocity < 10.67)
													return 9.63275;
												else
												{
													if(f < 1347.5)
														return 11.5607;
													else
													{
														if(sinr < 17)
															return 13.8648;
														else
															return 12.7524666667;
													}
												}
											}
										}
									}
								}
							}
							else
							{
								if(velocity < 13.635)
								{
									if(sinr < 15)
										return 6.95652;
									else
									{
										if(ta < 4.5)
											return 6.8347;
										else
											return 6.35425;
									}
								}
								else
								{
									if(payload < 0.75)
									{
										if(sinr < 14.5)
										{
											if(ta < 11.5)
												return 7.60456;
											else
												return 8.69565;
										}
										else
										{
											if(payload < 0.3)
												return 5.83944;
											else
												return 6.29921;
										}
									}
									else
									{
										if(rsrq < -6.5)
											return 4.069906;
										else
											return 2.77008;
									}
								}
							}
						}
					}
					else
					{
						if(cqi < 14.5)
						{
							if(payload < 7.5)
							{
								if(rsrq < -10.5)
								{
									if(cqi < 10.5)
									{
										if(rsrp < -101.5)
											return 8.29445;
										else
										{
											if(sinr < 19.5)
												return 13.6016;
											else
												return 11.3475;
										}
									}
									else
										return 29.9401;
								}
								else
								{
									if(f < 2262.5)
									{
										if(sinr < 13.5)
										{
											if(f < 1347.5)
											{
												if(rsrp < -89.5)
													return 4.33565;
												else
													return 3.72411;
											}
											else
											{
												if(cqi < 11.5)
												{
													if(payload < 5.5)
													{
														if(cqi < 10.5)
														{
															if(rsrp < -91.5)
																return 6.93692;
															else
																return 6.42312;
														}
														else
															return 8.13559;
													}
													else
													{
														if(rsrp < -90.5)
															return 7.66179;
														else
															return 9.33178;
													}
												}
												else
													return 5.37418;
											}
										}
										else
										{
											if(rsrp < -96.5)
											{
												if(cell < 12918810)
												{
													if(payload < 3.5)
													{
														if(rsrp < -105)
															return 15.8416;
														else
															return 7.01754;
													}
													else
													{
														if(payload < 4.5)
															return 5.1241;
														else
															return 10.8932;
													}
												}
												else
												{
													if(rsrp < -98.5)
													{
														if(rsrp < -103.5)
															return 3.10301;
														else
														{
															if(velocity < 27.415)
																return 5.05849;
															else
																return 4.21496;
														}
													}
													else
														return 0.379873;
												}
											}
											else
											{
												if(sinr < 18.5)
												{
													if(cell < 13823002.5)
													{
														if(velocity < 34.64)
														{
															if(sinr < 14.5)
															{
																if(payload < 3.5)
																	return 10.7431;
																else
																	return 14.4796;
															}
															else
															{
																if(rsrq < -6.5)
																{
																	if(velocity < 14.195)
																		return 9.014155;
																	else
																		return 10.772;
																}
																else
																{
																	if(sinr < 15.5)
																		return 11.0092;
																	else
																	{
																		if(sinr < 17)
																			return 14.1176;
																		else
																			return 13.337;
																	}
																}
															}
														}
														else
															return 8.72172;
													}
													else
													{
														if(sinr < 17)
														{
															if(payload < 3.5)
																return 6.27615;
															else
															{
																if(f < 1347.5)
																{
																	if(velocity < 38.235)
																	{
																		if(rsrp < -88.5)
																			return 10.3093;
																		else
																		{
																			if(payload < 4.5)
																				return 7.90709;
																			else
																				return 7.09471;
																		}
																	}
																	else
																		return 3.58744;
																}
																else
																{
																	if(cqi < 12.5)
																	{
																		if(velocity < 5.925)
																			return 10.2696;
																		else
																			return 8.919335;
																	}
																	else
																	{
																		if(cell < 13853595)
																			return 8.23893;
																		else
																			return 6.7086;
																	}
																}
															}
														}
														else
															return 13.7615;
													}
												}
												else
												{
													if(ta < 12.5)
													{
														if(ta < 6)
															return 6.238745;
														else
														{
															if(cqi < 8.5)
																return 15.3116;
															else
															{
																if(velocity < 8.07)
																{
																	if(rsrp < -74)
																		return 7.24146;
																	else
																		return 9.23788;
																}
																else
																{
																	if(f < 1347.5)
																		return 11.4216;
																	else
																	{
																		if(rsrp < -90.5)
																			return 14.9589;
																		else
																		{
																			if(cqi < 11)
																				return 12.8;
																			else
																				return 13.4842;
																		}
																	}
																}
															}
														}
													}
													else
													{
														if(ta < 14.5)
														{
															if(payload < 4)
																return 12.4546;
															else
																return 22.0872;
														}
														else
															return 25.7471;
													}
												}
											}
										}
									}
									else
									{
										if(sinr < 21.5)
										{
											if(rsrq < -8.5)
											{
												if(sinr < 16)
													return 16.5534;
												else
												{
													if(payload < 3.5)
														return 13.1148;
													else
													{
														if(sinr < 19.5)
															return 11.9225;
														else
															return 9.81896;
													}
												}
											}
											else
											{
												if(ta < 3)
													return 16.3116;
												else
												{
													if(rsrp < -95)
														return 14.9813;
													else
														return 16.1834;
												}
											}
										}
										else
											return 2.5533;
									}
								}
							}
							else
							{
								if(cell < 12909593.5)
								{
									if(velocity < 14.185)
										return 19.9626;
									else
										return 18.7189;
								}
								else
								{
									if(payload < 9.5)
									{
										if(rsrp < -96.5)
										{
											if(ta < 4.5)
											{
												if(rsrp < -101.5)
												{
													if(sinr < 18)
														return 13.2621;
													else
														return 11.5398;
												}
												else
												{
													if(velocity < 6.26)
														return 20.8266;
													else
														return 14.7398;
												}
											}
											else
											{
												if(ta < 13.5)
												{
													if(rsrq < -6.5)
													{
														if(rsrp < -107.5)
														{
															if(payload < 8.5)
																return 15.2599;
															else
																return 14.6074;
														}
														else
														{
															if(cqi < 9.5)
																return 13.4605;
															else
															{
																if(sinr < 14.5)
																	return 10.643;
																else
																	return 10.0939;
															}
														}
													}
													else
														return 8.61605;
												}
												else
													return 7.77454;
											}
										}
										else
										{
											if(rsrp < -94.5)
											{
												if(rsrp < -95.5)
													return 17.229;
												else
													return 24.9653;
											}
											else
											{
												if(cqi < 10.5)
												{
													if(payload < 8.5)
													{
														if(rsrq < -7.5)
														{
															if(rsrq < -8.5)
																return 16.5375;
															else
																return 21.843;
														}
														else
														{
															if(velocity < 29.91)
															{
																if(sinr < 17)
																{
																	if(rsrq < -6.5)
																		return 15.4031;
																	else
																	{
																		if(sinr < 15)
																			return 14.1374;
																		else
																			return 13.4936;
																	}
																}
																else
																{
																	if(rsrq < -6)
																		return 12.3887;
																	else
																		return 12.8695;
																}
															}
															else
																return 16.2354;
														}
													}
													else
													{
														if(cell < 13884186.5)
														{
															if(rsrq < -8.5)
																return 22.9812;
															else
																return 27.1903;
														}
														else
															return 16.2565;
													}
												}
												else
												{
													if(rsrq < -6.5)
													{
														if(sinr < 20)
														{
															if(rsrq < -8)
															{
																if(rsrq < -9.5)
																	return 16.9412;
																else
																	return 17.6454;
															}
															else
																return 14.5686;
														}
														else
															return 21.9479;
													}
													else
													{
														if(rsrp < -82.5)
														{
															if(rsrp < -85.5)
															{
																if(sinr < 15)
																	return 6.46726;
																else
																{
																	if(cqi < 12.5)
																		return 15.92366;
																	else
																		return 9.18133;
																}
															}
															else
																return 21.7786;
														}
														else
														{
															if(sinr < 21)
															{
																if(rsrq < -5.5)
																	return 6.8223;
																else
																	return 10.2581;
															}
															else
															{
																if(rsrq < -5.5)
																	return 10.0869;
																else
																	return 13.7398;
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
											if(velocity < 13.55)
											{
												if(cell < 13373466)
												{
													if(sinr < 14.5)
														return 8.12595;
													else
													{
														if(sinr < 16.5)
															return 7.46826;
														else
															return 6.91264;
													}
												}
												else
												{
													if(rsrp < -98)
														return 8.71555;
													else
													{
														if(ta < 2.5)
															return 11.8273;
														else
														{
															if(rsrp < -89.5)
																return 12.5117;
															else
																return 12.8949;
														}
													}
												}
											}
											else
											{
												if(velocity < 14.515)
												{
													if(rsrq < -7)
														return 15.1;
													else
														return 15.6863;
												}
												else
												{
													if(ta < 8.5)
													{
														if(cqi < 10.5)
														{
															if(sinr < 16)
																return 10.8755;
															else
																return 11.7492;
														}
														else
															return 12.7755;
													}
													else
														return 8.25849;
												}
											}
										}
										else
											return 19.7482;
									}
								}
							}
						}
						else
						{
							if(ta < 12.5)
							{
								if(sinr < 17.5)
								{
									if(payload < 3.5)
									{
										if(rsrp < -86)
											return 2.70088;
										else
											return 6.7701;
									}
									else
									{
										if(velocity < 19.05)
										{
											if(sinr < 13.5)
												return 12.3362;
											else
											{
												if(rsrp < -91)
													return 9.88468;
												else
													return 11.8387;
											}
										}
										else
										{
											if(rsrq < -7)
												return 12.7085;
											else
												return 16.9811;
										}
									}
								}
								else
								{
									if(rsrq < -6.5)
									{
										if(cell < 14114964)
										{
											if(rsrq < -7.5)
												return 13.1796;
											else
												return 11.4928;
										}
										else
											return 14.54418;
									}
									else
									{
										if(rsrp < -86.5)
										{
											if(velocity < 22.355)
											{
												if(velocity < 20.33)
												{
													if(rsrp < -93.5)
														return 19.1617;
													else
														return 16.1649;
												}
												else
													return 20.7388;
											}
											else
											{
												if(rsrp < -90)
													return 25.3165;
												else
													return 22.49;
											}
										}
										else
										{
											if(cell < 13161620)
											{
												if(cell < 12918810)
													return 13.3824;
												else
													return 8.96459;
											}
											else
											{
												if(rsrq < -5.5)
												{
													if(rsrp < -83)
														return 19.99;
													else
													{
														if(rsrp < -77)
															return 18.0079;
														else
															return 19.8314;
													}
												}
												else
													return 17.2538;
											}
										}
									}
								}
							}
							else
							{
								if(ta < 14)
									return 21.9901;
								else
									return 25.8065;
							}
						}
					}
				}
				else
				{
					if(ta < 8.5)
					{
						if(cell < 14322575)
						{
							if(payload < 2.25)
								return 9.85222;
							else
							{
								if(rsrp < -61.5)
								{
									if(rsrp < -64.5)
										return 5.88885;
									else
										return 6.92042;
								}
								else
									return 4.33276;
							}
						}
						else
							return 2.0952733333;
					}
					else
					{
						if(cqi < 11.5)
						{
							if(velocity < 6.62)
								return 6.20636;
							else
							{
								if(rsrq < -8.5)
									return 12.6084;
								else
									return 10.5004;
							}
						}
						else
						{
							if(payload < 2.5)
								return 5.40906;
							else
								return 6.84638;
						}
					}
				}
			}
			else
			{
				if(sinr < 37.5)
				{
					if(payload < 8.5)
					{
						if(payload < 2.5)
						{
							if(rsrq < -4.5)
							{
								if(rsrp < -73.5)
								{
									if(cqi < 14.5)
									{
										if(velocity < 20.165)
										{
											if(velocity < 14.395)
											{
												if(sinr < 28)
												{
													if(ta < 9)
													{
														if(velocity < 11.41)
															return 11.5858;
														else
														{
															if(velocity < 12.595)
																return 5.39447;
															else
																return 8.44775;
														}
													}
													else
													{
														if(sinr < 24.5)
														{
															if(rsrp < -100.5)
																return 4.93829;
															else
																return 4.15909;
														}
														else
														{
															if(payload < 0.55)
																return 8.60218;
															else
																return 8.19672;
														}
													}
												}
												else
													return 14.5852;
											}
											else
											{
												if(payload < 1.5)
													return 2.77874;
												else
													return 3.77893;
											}
										}
										else
										{
											if(rsrq < -5.5)
												return 10.3093;
											else
												return 20;
										}
									}
									else
									{
										if(rsrp < -85)
											return 7.45226;
										else
										{
											if(rsrp < -75)
											{
												if(velocity < 28.47)
												{
													if(rsrq < -5.5)
													{
														if(velocity < 11.515)
															return 4.78469;
														else
															return 3.520906;
													}
													else
													{
														if(payload < 1.05)
															return 5.19483;
														else
															return 4.3944;
													}
												}
												else
													return 5.67378;
											}
											else
												return 7.31261;
										}
									}
								}
								else
								{
									if(velocity < 8.795)
									{
										if(payload < 0.3)
										{
											if(cqi < 14.5)
												return 4.16668;
											else
												return 5.26318;
										}
										else
											return 10.2828;
									}
									else
									{
										if(velocity < 31.91)
										{
											if(velocity < 12.435)
											{
												if(cqi < 13.5)
													return 8.90869;
												else
												{
													if(payload < 1.25)
														return 16.5289;
													else
														return 12.8102;
												}
											}
											else
											{
												if(rsrp < -61.5)
												{
													if(rsrp < -69)
														return 10.0908771429;
													else
														return 8.51067;
												}
												else
													return 11.236;
											}
										}
										else
											return 6.46162;
									}
								}
							}
							else
							{
								if(payload < 0.3)
								{
									if(sinr < 27)
										return 8.51067;
									else
										return 4.79044;
								}
								else
								{
									if(ta < 16.5)
									{
										if(rsrp < -65)
											return 11.6959;
										else
											return 16.9133;
									}
									else
										return 17.316;
								}
							}
						}
						else
						{
							if(sinr < 26.5)
							{
								if(ta < 13.5)
								{
									if(velocity < 8.93)
									{
										if(payload < 6.5)
										{
											if(payload < 3.5)
												return 16.3934;
											else
											{
												if(rsrq < -7)
													return 19.9203;
												else
												{
													if(rsrp < -86.5)
														return 22.7596;
													else
														return 21.838;
												}
											}
										}
										else
										{
											if(cell < 14084372)
												return 11.3983;
											else
												return 14.5341;
										}
									}
									else
									{
										if(rsrp < -82.5)
										{
											if(velocity < 12.37)
											{
												if(payload < 4.5)
												{
													if(rsrp < -91)
														return 7.242;
													else
														return 5.75402;
												}
												else
													return 9.42655;
											}
											else
											{
												if(ta < 5)
												{
													if(rsrp < -91)
														return 7.94123;
													else
													{
														if(sinr < 24.5)
														{
															if(ta < 2.5)
																return 6.79579;
															else
															{
																if(payload < 6.5)
																	return 13.7741;
																else
																	return 9.81294;
															}
														}
														else
															return 15.0966;
													}
												}
												else
												{
													if(rsrp < -93.5)
														return 17.943;
													else
													{
														if(ta < 7.5)
															return 16.3599;
														else
															return 12.0508;
													}
												}
											}
										}
										else
										{
											if(ta < 3.5)
											{
												if(payload < 5.5)
													return 5.87372;
												else
												{
													if(sinr < 24.5)
														return 14.3209;
													else
														return 13.7999;
												}
											}
											else
											{
												if(payload < 5.5)
												{
													if(rsrq < -6)
														return 17.1149;
													else
														return 13.9555;
												}
												else
													return 24.4009;
											}
										}
									}
								}
								else
									return 32.0802;
							}
							else
							{
								if(sinr < 27.5)
								{
									if(velocity < 17.565)
									{
										if(rsrp < -74)
										{
											if(cell < 12914202.5)
												return 10.7185;
											else
												return 11.6226;
										}
										else
										{
											if(cqi < 13.5)
												return 11.0117;
											else
											{
												if(rsrq < -6.5)
													return 9.62696;
												else
													return 10.3292;
											}
										}
									}
									else
									{
										if(payload < 4.5)
											return 6.77201;
										else
											return 9.45068;
									}
								}
								else
								{
									if(payload < 7.5)
									{
										if(payload < 5.5)
										{
											if(cqi < 13)
												return 6.6674475;
											else
											{
												if(sinr < 31)
												{
													if(rsrq < -8)
														return 9.6231;
													else
													{
														if(rsrp < -84)
															return 11.3744;
														else
														{
															if(cell < 12918809.5)
																return 13.3668;
															else
															{
																if(velocity < 7.73)
																	return 17.531;
																else
																	return 15.5547666667;
															}
														}
													}
												}
												else
												{
													if(payload < 4.5)
														return 9.09349;
													else
													{
														if(cell < 14301709)
															return 11.790575;
														else
															return 9.54426;
													}
												}
											}
										}
										else
										{
											if(cell < 14345742)
											{
												if(cqi < 10.5)
												{
													if(rsrq < -10)
														return 11.925;
													else
														return 11.29945;
												}
												else
												{
													if(rsrp < -85.5)
														return 22.2119;
													else
													{
														if(rsrp < -80)
															return 13.4907;
														else
														{
															if(sinr < 35)
															{
																if(rsrq < -5.5)
																	return 17.9085;
																else
																{
																	if(velocity < 15.9)
																	{
																		if(rsrp < -74)
																			return 16.6725;
																		else
																			return 17.1612;
																	}
																	else
																	{
																		if(payload < 6.5)
																			return 15.544;
																		else
																			return 14.9733;
																	}
																}
															}
															else
																return 22.082;
														}
													}
												}
											}
											else
												return 26.1194;
										}
									}
									else
									{
										if(rsrp < -86)
											return 13.1067;
										else
											return 1.64453;
									}
								}
							}
						}
					}
					else
					{
						if(ta < 13.5)
						{
							if(rsrq < -6.5)
							{
								if(cell < 14345742)
								{
									if(velocity < 11.205)
									{
										if(payload < 9.5)
											return 12.1704;
										else
											return 19.2446;
									}
									else
									{
										if(rsrp < -78)
											return 24.3792333333;
										else
											return 30.581;
									}
								}
								else
									return 31.0078;
							}
							else
							{
								if(rsrp < -91.5)
								{
									if(payload < 9.5)
										return 11.3154;
									else
										return 3.85617;
								}
								else
								{
									if(cell < 13613715.5)
									{
										if(sinr < 23.5)
											return 11.6839;
										else
										{
											if(payload < 9.5)
											{
												if(sinr < 35.5)
												{
													if(rsrp < -79)
														return 22.147;
													else
													{
														if(rsrp < -73)
															return 24.565;
														else
															return 23.9282;
													}
												}
												else
													return 14.3113;
											}
											else
											{
												if(rsrp < -79.5)
												{
													if(sinr < 31.5)
														return 15.2236;
													else
														return 17.9775;
												}
												else
													return 21.4823;
											}
										}
									}
									else
									{
										if(rsrp < -78)
										{
											if(cqi < 12)
												return 17.1184;
											else
												return 17.991;
										}
										else
										{
											if(sinr < 29.5)
											{
												if(rsrp < -76)
													return 12.9324;
												else
												{
													if(payload < 9.5)
														return 11.6807;
													else
														return 11.0558;
												}
											}
											else
												return 15.9504;
										}
									}
								}
							}
						}
						else
						{
							if(velocity < 28.04)
								return 25.5591;
							else
							{
								if(velocity < 36.65)
								{
									if(cqi < 13.5)
										return 31.6623;
									else
										return 29.9252;
								}
								else
									return 28.0265;
							}
						}
					}
				}
				else
				{
					if(sinr < 39.5)
					{
						if(rsrp < -77.5)
							return 28.3061;
						else
							return 27.2109;
					}
					else
						return 15.4525;
				}
			}
		}
	}
}

float o2_dl_tree_9(float payload, float rsrp, float rsrq, float sinr, float cqi, float ta, float velocity, float cell, float f)
{
	if(rsrq < -11.5)
	{
		if(f < 2262.5)
		{
			if(cell < 13409678.5)
			{
				if(rsrq < -14.5)
				{
					if(rsrp < -92.5)
					{
						if(cell < 12907151)
						{
							if(payload < 4)
							{
								if(payload < 1.25)
								{
									if(velocity < 12.805)
										return 0.103636;
									else
										return 0.851973;
								}
								else
								{
									if(rsrq < -16)
										return 1.38708;
									else
										return 0.812843;
								}
							}
							else
							{
								if(payload < 9.5)
								{
									if(cqi < 4.5)
										return 1.8782842857;
									else
										return 2.45753;
								}
								else
									return 4.46453;
							}
						}
						else
						{
							if(cqi < 5.5)
							{
								if(rsrq < -19)
								{
									if(ta < 28)
										return 1.98376;
									else
										return 1.04248;
								}
								else
								{
									if(payload < 5.5)
									{
										if(ta < 13)
										{
											if(ta < 4.5)
												return 1.86111;
											else
											{
												if(velocity < 20.285)
												{
													if(sinr < -6.5)
														return 5.14387;
													else
														return 4.28266;
												}
												else
													return 2.785765;
											}
										}
										else
											return 8.32466;
									}
									else
									{
										if(rsrp < -101)
										{
											if(ta < 27.5)
												return 3.98059;
											else
												return 2.98675;
										}
										else
											return 2.22922;
									}
								}
							}
							else
							{
								if(ta < 23.5)
									return 1.73762;
								else
									return 0.144851;
							}
						}
					}
					else
					{
						if(ta < 6.5)
							return 6.43087;
						else
							return 8.76712;
					}
				}
				else
				{
					if(cell < 12909466)
					{
						if(ta < 1.5)
						{
							if(sinr < 1.5)
							{
								if(rsrq < -13)
									return 0.71823;
								else
								{
									if(rsrp < -96)
										return 3.29218;
									else
										return 2.38403;
								}
							}
							else
							{
								if(payload < 1.5)
								{
									if(cqi < 9.5)
										return 2.72294;
									else
										return 7.34619;
								}
								else
								{
									if(cqi < 6)
										return 11.0957;
									else
									{
										if(payload < 9)
										{
											if(velocity < 12.98)
												return 9.15508;
											else
												return 10.5346;
										}
										else
											return 5.7496;
									}
								}
							}
						}
						else
						{
							if(payload < 9.5)
							{
								if(f < 1347.5)
								{
									if(velocity < 29.845)
									{
										if(velocity < 8.14)
										{
											if(payload < 3.55)
												return 0.076621;
											else
											{
												if(rsrp < -90.5)
													return 3.45125;
												else
													return 4.31001;
											}
										}
										else
										{
											if(velocity < 13.325)
											{
												if(cell < 12901505.5)
													return 0.502157;
												else
													return 1.0703770361;
											}
											else
											{
												if(sinr < 3)
												{
													if(payload < 0.3)
													{
														if(sinr < -4.5)
															return 3.20001;
														else
															return 2.16803;
													}
													else
													{
														if(payload < 1.5)
														{
															if(rsrp < -85)
																return 0.15654;
															else
																return 0.734484;
														}
														else
														{
															if(payload < 2.5)
																return 1.61437;
															else
																return 1.162378;
														}
													}
												}
												else
													return 3.73832;
											}
										}
									}
									else
									{
										if(payload < 3)
											return 2.59319;
										else
											return 8.4674;
									}
								}
								else
								{
									if(payload < 0.75)
									{
										if(cell < 12896153)
											return 4.60299;
										else
										{
											if(sinr < 9)
											{
												if(sinr < 1)
												{
													if(payload < 0.3)
														return 0.076621;
													else
														return 2.79267;
												}
												else
													return 0.8016926667;
											}
											else
												return 4.96896;
										}
									}
									else
									{
										if(rsrp < -88)
										{
											if(payload < 3.5)
											{
												if(sinr < 2)
												{
													if(rsrp < -96)
														return 9.44882;
													else
													{
														if(rsrq < -12.5)
															return 5.86941;
														else
															return 3.64797;
													}
												}
												else
												{
													if(velocity < 12.62)
													{
														if(rsrp < -92)
															return 3.99002;
														else
															return 3.11102;
													}
													else
														return 2.03649;
												}
											}
											else
											{
												if(sinr < 5.5)
												{
													if(velocity < 10.56)
													{
														if(cqi < 6.5)
														{
															if(rsrq < -12.5)
																return 1.8472791904;
															else
																return 2.58672;
														}
														else
															return 1.0485623318;
													}
													else
													{
														if(rsrq < -13)
															return 3.92157;
														else
															return 5.04255;
													}
												}
												else
												{
													if(rsrp < -91.5)
														return 6.96409;
													else
														return 3.091016;
												}
											}
										}
										else
										{
											if(ta < 14)
											{
												if(rsrp < -85.5)
													return 6.91842;
												else
												{
													if(payload < 6.5)
														return 5.6926;
													else
														return 4.62428;
												}
											}
											else
												return 4.34075;
										}
									}
								}
							}
							else
							{
								if(cqi < 7.5)
									return 9.98129;
								else
									return 6.80504;
							}
						}
					}
					else
					{
						if(rsrp < -119)
							return 16.3934;
						else
						{
							if(velocity < 33.73)
							{
								if(payload < 5.5)
								{
									if(rsrq < -13.5)
									{
										if(ta < 5)
											return 4.34499;
										else
											return 12.3077;
									}
									else
									{
										if(rsrp < -90.5)
										{
											if(velocity < 4.09)
											{
												if(sinr < 3)
													return 6.23296;
												else
												{
													if(payload < 1.25)
														return 5.90842;
													else
													{
														if(rsrp < -92.5)
															return 3.75235;
														else
															return 4.2346966667;
													}
												}
											}
											else
											{
												if(sinr < -4.5)
													return 0.968992;
												else
												{
													if(sinr < 8.5)
													{
														if(rsrp < -111.5)
															return 4.5977;
														else
														{
															if(payload < 4.5)
															{
																if(cell < 12926990.5)
																{
																	if(sinr < 1.5)
																	{
																		if(rsrp < -110.5)
																			return 3.0095;
																		else
																			return 3.52734;
																	}
																	else
																		return 2.79825;
																}
																else
																	return 2.3435772552;
															}
															else
																return 3.5344325;
														}
													}
													else
														return 1.6242;
												}
											}
										}
										else
										{
											if(sinr < 3)
											{
												if(ta < 4.5)
												{
													if(payload < 3.5)
													{
														if(cell < 12909594.5)
															return 5.4807;
														else
															return 6.96561;
													}
													else
														return 10.4952;
												}
												else
													return 10.14302;
											}
											else
											{
												if(cqi < 7.5)
												{
													if(velocity < 8.065)
														return 5;
													else
														return 6.03546;
												}
												else
													return 3.7312725;
											}
										}
									}
								}
								else
								{
									if(ta < 3.5)
									{
										if(cell < 13160603)
										{
											if(rsrp < -86)
											{
												if(sinr < 2)
													return 14.8607;
												else
													return 16.0275;
											}
											else
											{
												if(sinr < 2)
												{
													if(payload < 8.5)
														return 9.62034;
													else
														return 8.78156;
												}
												else
													return 6.88666;
											}
										}
										else
											return 3.171295;
									}
									else
									{
										if(rsrp < -91.5)
										{
											if(velocity < 9.345)
											{
												if(rsrp < -93.5)
												{
													if(rsrq < -12.5)
														return 5.39811;
													else
														return 5.84924;
												}
												else
													return 4.20705;
											}
											else
											{
												if(rsrp < -97.5)
													return 3.70313;
												else
													return 2.83487;
											}
										}
										else
										{
											if(cqi < 10.5)
											{
												if(payload < 7.5)
												{
													if(sinr < 6.5)
														return 6.18397;
													else
														return 5.17369;
												}
												else
												{
													if(rsrq < -12.5)
														return 6.8578;
													else
														return 6.42866;
												}
											}
											else
												return 9.19118;
										}
									}
								}
							}
							else
								return 16.2767;
						}
					}
				}
			}
			else
			{
				if(rsrp < -88.5)
				{
					if(payload < 3.5)
					{
						if(cell < 13553922)
						{
							if(payload < 1.5)
							{
								if(cqi < 7.5)
								{
									if(sinr < -3.5)
									{
										if(ta < 14.5)
										{
											if(velocity < 9.245)
											{
												if(rsrq < -14.5)
												{
													if(velocity < 3.785)
													{
														if(rsrp < -108)
															return 0.447127;
														else
															return 0.8190255;
													}
													else
														return 0.4825277143;
												}
												else
													return 0.3438325;
											}
											else
											{
												if(velocity < 10.345)
												{
													if(payload < 0.55)
														return 2.58901;
													else
														return 1.35823;
												}
												else
												{
													if(velocity < 11.79)
														return 0.122564;
													else
													{
														if(rsrp < -103)
															return 0.884173;
														else
															return 0.600329;
													}
												}
											}
										}
										else
										{
											if(payload < 0.75)
												return 0.15873;
											else
												return 2.59151;
										}
									}
									else
									{
										if(rsrp < -98.5)
										{
											if(rsrq < -13.5)
											{
												if(payload < 0.75)
													return 0.2358464;
												else
													return 1.07802;
											}
											else
											{
												if(rsrq < -12.5)
													return 1.86047;
												else
													return 0.318865;
											}
										}
										else
										{
											if(sinr < 2.5)
												return 0.1978248824;
											else
											{
												if(payload < 0.55)
													return 1.39131;
												else
											}
								}