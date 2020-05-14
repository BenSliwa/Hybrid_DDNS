#ifndef TMOBILE_DL_NS3
#define TMOBILE_DL_NS3

float tmobile_dl_ns3_tree_0(float payload, float rsrp, float rsrq, float sinr, float velocity, float f)
{
	if(payload < 3.5)
	{
		if(rsrp < -88.5)
		{
			if(payload < 0.75)
			{
				if(velocity < 31.59)
				{
					if(rsrq < -6.5)
					{
						if(payload < 0.3)
						{
							if(sinr < 10.5)
							{
								if(sinr < -1.5)
								{
									if(rsrp < -103.5)
									{
										if(rsrq < -14)
											return 2.17;
										else
											return 2.87;
									}
									else
									{
										if(velocity < 14.965)
										{
											if(rsrp < -100.5)
												return 4.68;
											else
												return 4.275;
										}
										else
											return 3.14;
									}
								}
								else
								{
									if(rsrp < -101.5)
									{
										if(sinr < 8.5)
										{
											if(sinr < 4.5)
											{
												if(sinr < 1.5)
													return 3.35;
												else
													return 4.168;
											}
											else
												return 2.57;
										}
										else
											return 6.02;
									}
									else
									{
										if(sinr < 0.5)
										{
											if(rsrp < -95)
											{
												if(rsrq < -12.5)
													return 6.78;
												else
													return 4.6;
											}
											else
												return 9.2;
										}
										else
										{
											if(velocity < 11.01)
											{
												if(sinr < 9.5)
												{
													if(rsrq < -7.5)
													{
														if(velocity < 9.745)
														{
															if(velocity < 1.18)
															{
																if(sinr < 5.5)
																	return 5.5466666667;
																else
																	return 4.3;
															}
															else
															{
																if(rsrp < -97)
																	return 7.21;
																else
																{
																	if(f < 2232.5)
																		return 5.67;
																	else
																		return 4.49;
																}
															}
														}
														else
														{
															if(rsrq < -10.5)
																return 5;
															else
																return 3.25;
														}
													}
													else
													{
														if(rsrp < -96)
															return 2.6;
														else
														{
															if(sinr < 4)
																return 5.06;
															else
																return 3.88;
														}
													}
												}
												else
													return 2.93;
											}
											else
											{
												if(rsrp < -100.5)
													return 8.25;
												else
												{
													if(rsrp < -91.5)
													{
														if(sinr < 7.5)
														{
															if(rsrp < -96.5)
																return 4.19;
															else
															{
																if(rsrp < -92.5)
																	return 5.13;
																else
																	return 4.49;
															}
														}
														else
															return 5.67;
													}
													else
													{
														if(rsrq < -8)
															return 8.42;
														else
														{
															if(sinr < 7)
																return 5.52;
															else
																return 4.6;
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
								if(rsrp < -93.5)
								{
									if(sinr < 19.5)
									{
										if(velocity < 11.215)
										{
											if(rsrq < -8)
												return 3.05;
											else
												return 4.21;
										}
										else
											return 3.162;
									}
									else
										return 3.92;
								}
								else
								{
									if(velocity < 12.5)
									{
										if(velocity < 10.975)
										{
											if(velocity < 9.72)
											{
												if(rsrp < -89.5)
												{
													if(rsrq < -8.5)
													{
														if(f < 2232.5)
															return 4.44;
														else
															return 3.736;
													}
													else
													{
														if(f < 2232.5)
														{
															if(rsrq < -7.5)
																return 4.82;
															else
																return 4.148;
														}
														else
															return 5.56;
													}
												}
												else
													return 3.59;
											}
											else
												return 4.79;
										}
										else
											return 2.89;
									}
									else
									{
										if(f < 2232.5)
											return 6.67;
										else
											return 6.06;
									}
								}
							}
						}
						else
						{
							if(rsrq < -14.5)
								return 0.84;
							else
							{
								if(velocity < 11.26)
								{
									if(rsrp < -102.5)
										return 1.19;
									else
									{
										if(sinr < 7.5)
										{
											if(rsrp < -98.5)
											{
												if(velocity < 4.34)
													return 10.42;
												else
													return 13.65;
											}
											else
											{
												if(velocity < 8.89)
												{
													if(rsrp < -96)
													{
														if(rsrp < -97.5)
															return 6.71;
														else
															return 7.71;
													}
													else
													{
														if(velocity < 6.33)
															return 4.62;
														else
															return 5.73;
													}
												}
												else
													return 8.62;
											}
										}
										else
										{
											if(sinr < 12)
											{
												if(rsrq < -10)
													return 7.17;
												else
												{
													if(rsrp < -96.5)
														return 7.75;
													else
														return 6.774;
												}
											}
											else
											{
												if(velocity < 7.51)
												{
													if(sinr < 19)
													{
														if(f < 2232.5)
														{
															if(rsrp < -91)
																return 4.09;
															else
																return 5.08;
														}
														else
															return 6.55;
													}
													else
														return 6.5;
												}
												else
													return 7.15;
											}
										}
									}
								}
								else
								{
									if(velocity < 16.49)
									{
										if(sinr < -4)
											return 2.02;
										else
										{
											if(sinr < 0.5)
											{
												if(rsrp < -101)
													return 6;
												else
													return 10.61;
											}
											else
											{
												if(sinr < 13.5)
												{
													if(rsrp < -100.5)
													{
														if(sinr < 3)
															return 1.71;
														else
														{
															if(velocity < 14.385)
															{
																if(rsrp < -104)
																	return 3.82;
																else
																	return 3.22;
															}
															else
																return 2.44;
														}
													}
													else
													{
														if(velocity < 15.745)
														{
															if(velocity < 14.555)
															{
																if(sinr < 11)
																{
																	if(sinr < 8.5)
																		return 4.49;
																	else
																	{
																		if(f < 2232.5)
																			return 6.2;
																		else
																		{
																			if(rsrq < -7.5)
																				return 4.11;
																			else
																				return 5.28;
																		}
																	}
																}
																else
																{
																	if(rsrp < -95.5)
																		return 5.81;
																	else
																		return 6.49;
																}
															}
															else
																return 7.515;
														}
														else
															return 3.16;
													}
												}
												else
												{
													if(velocity < 15.265)
														return 3.3166666667;
													else
														return 2.46;
												}
											}
										}
									}
									else
									{
										if(velocity < 23.365)
											return 9.64;
										else
											return 6.7;
									}
								}
							}
						}
					}
					else
					{
						if(payload < 0.3)
						{
							if(sinr < 20)
							{
								if(velocity < 13.36)
								{
									if(rsrp < -92.5)
									{
										if(rsrq < -5.5)
										{
											if(rsrp < -94.5)
												return 5.44;
											else
												return 6.67;
										}
										else
											return 5.16;
									}
									else
									{
										if(sinr < 17.5)
											return 5.5266666667;
										else
											return 2.74;
									}
								}
								else
									return 4.23;
							}
							else
								return 7.02;
						}
						else
						{
							if(sinr < 11.5)
							{
								if(velocity < 4.27)
									return 8.66;
								else
								{
									if(rsrp < -92.5)
										return 9.648;
									else
										return 8.7;
								}
							}
							else
							{
								if(rsrq < -5.5)
								{
									if(rsrp < -89.5)
									{
										if(rsrp < -91.5)
											return 5.77;
										else
											return 6.35;
									}
									else
										return 4.6;
								}
								else
									return 10.39;
							}
						}
					}
				}
				else
				{
					if(rsrq < -6.5)
					{
						if(rsrp < -99)
							return 2.67;
						else
							return 0.6357142857;
					}
					else
					{
						if(velocity < 36.435)
							return 4.5;
						else
							return 6.48;
					}
				}
			}
			else
			{
				if(rsrq < -7.5)
				{
					if(f < 2232.5)
					{
						if(payload < 1.5)
						{
							if(velocity < 16.755)
							{
								if(velocity < 10.625)
								{
									if(rsrp < -101.5)
									{
										if(rsrp < -105)
											return 2.61;
										else
											return 5.03;
									}
									else
									{
										if(rsrq < -11.5)
										{
											if(velocity < 9.105)
												return 3.03;
											else
												return 8.04;
										}
										else
											return 7.2155555556;
									}
								}
								else
								{
									if(velocity < 12.235)
									{
										if(velocity < 11.915)
										{
											if(rsrq < -11.5)
												return 4.72;
											else
												return 3.67;
										}
										else
										{
											if(velocity < 11.95)
												return 1.38;
											else
												return 2.655;
										}
									}
									else
									{
										if(sinr < 1)
										{
											if(rsrp < -99.5)
											{
												if(rsrq < -11.5)
													return 5.39;
												else
													return 3.57;
											}
											else
											{
												if(rsrp < -95)
													return 8.47;
												else
													return 9.62;
											}
										}
										else
										{
											if(rsrq < -8.5)
											{
												if(rsrp < -100)
													return 5.35;
												else
												{
													if(rsrp < -93.5)
													{
														if(rsrq < -9.5)
														{
															if(sinr < 2.5)
															{
																if(rsrp < -98.5)
																	return 4.15;
																else
																	return 2.99;
															}
															else
															{
																if(velocity < 14.4)
																	return 2.99;
																else
																	return 3.53;
															}
														}
														else
														{
															if(sinr < 5)
																return 2.12;
															else
																return 2.77;
														}
													}
													else
														return 4.6;
												}
											}
											else
												return 8.37;
										}
									}
								}
							}
							else
							{
								if(velocity < 34.025)
								{
									if(rsrq < -10)
									{
										if(rsrp < -98)
											return 9.22;
										else
											return 10.81;
									}
									else
									{
										if(rsrp < -96.5)
											return 7.655;
										else
											return 9.45;
									}
								}
								else
									return 0.22;
							}
						}
						else
						{
							if(sinr < 14)
							{
								if(payload < 2.5)
								{
									if(velocity < 33.165)
									{
										if(sinr < 10.5)
										{
											if(sinr < 9)
											{
												if(rsrp < -97.5)
												{
													if(sinr < -0.5)
													{
														if(velocity < 12.645)
														{
															if(rsrp < -105.5)
																return 1.91;
															else
															{
																if(rsrq < -10.5)
																	return 3.35;
																else
																	return 4.41;
															}
														}
														else
														{
															if(rsrq < -11.5)
																return 11.58;
															else
															{
																if(velocity < 15.74)
																	return 12.46;
																else
																	return 4.63;
															}
														}
													}
													else
													{
														if(rsrq < -8.5)
														{
															if(velocity < 14.77)
															{
																if(rsrp < -100.5)
																{
																	if(rsrp < -104)
																	{
																		if(velocity < 8.73)
																			return 3.49;
																		else
																			return 3.99;
																	}
																	else
																		return 4.56;
																}
																else
																	return 3.212;
															}
															else
															{
																if(sinr < 3)
																	return 5.15;
																else
																{
																	if(rsrp < -105.5)
																		return 3.72;
																	else
																		return 4.43;
																}
															}
														}
														else
															return 5.56;
													}
												}
												else
												{
													if(velocity < 13.895)
													{
														if(velocity < 12.19)
														{
															if(rsrp < -89.5)
															{
																if(rsrq < -10)
																{
																	if(rsrp < -92.5)
																		return 12.44;
																	else
																		return 9.54;
																}
																else
																{
																	if(rsrp < -94.5)
																		return 8.17;
																	else
																		return 7.08;
																}
															}
															else
																return 7.2233333333;
														}
														else
														{
															if(rsrp < -95)
																return 17.32;
															else
															{
																if(rsrp < -91.5)
																	return 6.02;
																else
																	return 8.34;
															}
														}
													}
													else
													{
														if(rsrq < -11.5)
															return 4.58;
														else
														{
															if(rsrq < -10)
																return 1.24;
															else
																return 2.87;
														}
													}
												}
											}
											else
											{
												if(rsrp < -100.5)
													return 1.81;
												else
													return 4.79;
											}
										}
										else
										{
											if(rsrq < -9)
												return 13.59;
											else
												return 6.9;
										}
									}
									else
									{
										if(rsrq < -10)
											return 9.25;
										else
											return 16.91;
									}
								}
								else
								{
									if(rsrq < -10.5)
									{
										if(rsrq < -13)
											return 13.48;
										else
										{
											if(rsrp < -100.5)
											{
												if(rsrp < -104)
												{
													if(rsrq < -11.5)
														return 5.3;
													else
														return 4.53;
												}
												else
													return 2.735;
											}
											else
											{
												if(velocity < 2.26)
													return 2.91;
												else
												{
													if(sinr < 2.5)
														return 7.78;
													else
													{
														if(velocity < 13.465)
														{
															if(rsrp < -95.5)
																return 5.64;
															else
																return 6.2;
														}
														else
															return 7.29;
													}
												}
											}
										}
									}
									else
									{
										if(velocity < 12.53)
										{
											if(sinr < 8)
											{
												if(rsrq < -9.5)
												{
													if(velocity < 10.575)
													{
														if(sinr < -1)
														{
															if(sinr < -3.5)
																return 4.06;
															else
																return 2.78;
														}
														else
														{
															if(sinr < 2.5)
																return 8.13;
															else
															{
																if(rsrp < -95.5)
																	return 3.3;
																else
																	return 4.89;
															}
														}
													}
													else
														return 10.51;
												}
												else
												{
													if(rsrp < -97)
													{
														if(sinr < 5.5)
															return 4.29;
														else
															return 5.76;
													}
													else
													{
														if(rsrp < -92)
															return 7.06;
														else
															return 5.99;
													}
												}
											}
											else
											{
												if(sinr < 11)
												{
													if(rsrp < -92.5)
													{
														if(sinr < 9.5)
														{
															if(rsrp < -94.5)
																return 11.03;
															else
																return 15.41;
														}
														else
															return 10.11;
													}
													else
														return 9.34;
												}
												else
													return 5.67;
											}
										}
										else
										{
											if(sinr < 8.5)
											{
												if(velocity < 22.885)
												{
													if(rsrp < -89.5)
													{
														if(velocity < 14.435)
														{
															if(velocity < 13.12)
															{
																if(rsrp < -91)
																	return 15;
																else
																	return 13.49;
															}
															else
															{
																if(rsrp < -100)
																	return 12.865;
																else
																{
																	if(rsrp < -97)
																		return 11.64;
																	else
																		return 10.88;
																}
															}
														}
														else
														{
															if(sinr < 3)
															{
																if(rsrp < -99.5)
																{
																	if(rsrq < -9.5)
																		return 12.07;
																	else
																		return 10.98;
																}
																else
																	return 14.74;
															}
															else
															{
																if(rsrq < -9.5)
																	return 8.425;
																else
																	return 4.87;
															}
														}
													}
													else
														return 7.76;
												}
												else
												{
													if(sinr < 1)
													{
														if(sinr < -2)
															return 6.62;
														else
															return 0.33;
													}
													else
														return 10.38;
												}
											}
											else
												return 3.58;
										}
									}
								}
							}
							else
							{
								if(velocity < 4.15)
								{
									if(rsrp < -97)
									{
										if(rsrq < -9)
											return 8.18;
										else
											return 5.53;
									}
									else
									{
										if(rsrq < -8.5)
											return 11.63;
										else
											return 14.68;
									}
								}
								else
								{
									if(payload < 2.5)
										return 7.46;
									else
										return 6.23;
								}
							}
						}
					}
					else
					{
						if(rsrp < -94.5)
						{
							if(rsrp < -96.5)
							{
								if(rsrq < -9)
								{
									if(payload < 2)
										return 8.96;
									else
										return 8.36;
								}
								else
									return 11.05;
							}
							else
							{
								if(payload < 2)
									return 5.67;
								else
									return 6.28;
							}
						}
						else
						{
							if(payload < 1.5)
								return 20.73;
							else
							{
								if(rsrp < -93)
									return 6.82;
								else
								{
									if(rsrp < -90.5)
										return 8.99;
									else
										return 8.48;
								}
							}
						}
					}
				}
				else
				{
					if(rsrp < -95.5)
					{
						if(rsrp < -96.5)
						{
							if(rsrp < -101)
							{
								if(rsrp < -103)
								{
									if(rsrq < -6.5)
										return 5.36;
									else
										return 10.28;
								}
								else
								{
									if(sinr < 6)
										return 5.07;
									else
										return 4.31;
								}
							}
							else
							{
								if(sinr < 5.5)
								{
									if(payload < 2.5)
									{
										if(payload < 1.5)
											return 10.75;
										else
											return 8.24;
									}
									else
									{
										if(sinr < 3)
											return 12.51;
										else
											return 11.74;
									}
								}
								else
								{
									if(rsrp < -99.5)
									{
										if(velocity < 33.54)
											return 9.51;
										else
											return 13.58;
									}
									else
									{
										if(velocity < 10.225)
											return 11;
										else
										{
											if(rsrq < -6.5)
												return 5.24;
											else
												return 6.07;
										}
									}
								}
							}
						}
						else
						{
							if(sinr < 11)
								return 3.02;
							else
								return 3.87;
						}
					}
					else
					{
						if(payload < 2.5)
						{
							if(velocity < 23.865)
							{
								if(f < 2232.5)
								{
									if(velocity < 10.39)
									{
										if(rsrq < -6.5)
										{
											if(rsrp < -91.5)
											{
												if(velocity < 4.44)
												{
													if(sinr < 18.5)
														return 12.34;
													else
														return 12.82;
												}
												else
													return 10.6;
											}
											else
											{
												if(rsrp < -89.5)
												{
													if(velocity < 4.2)
														return 6.82;
													else
													{
														if(payload < 1.5)
															return 12.05;
														else
															return 10.96;
													}
												}
												else
													return 8.27;
											}
										}
										else
										{
											if(payload < 1.5)
												return 9.51;
											else
											{
												if(velocity < 9.37)
													return 11.55;
												else
													return 9.74;
											}
										}
									}
									else
									{
										if(rsrq < -6.5)
										{
											if(payload < 1.5)
											{
												if(velocity < 13.37)
													return 5.63;
												else
													return 6.28;
											}
											else
												return 7.32;
										}
										else
										{
											if(velocity < 14.61)
											{
												if(sinr < 14.5)
												{
													if(sinr < 8)
														return 6.39;
													else
														return 6.89;
												}
												else
													return 10.83;
											}
											else
											{
												if(payload < 1.5)
												{
													if(velocity < 15.925)
														return 10.27;
													else
													{
														if(sinr < 14)
															return 7.01;
														else
															return 9.45;
													}
												}
												else
													return 12.95;
											}
										}
									}
								}
								else
								{
									if(rsrp < -91.5)
									{
										if(velocity < 4.6)
											return 4.32;
										else
										{
											if(sinr < 19.5)
											{
												if(rsrp < -93.5)
													return 7.46;
												else
												{
													if(rsrq < -6.5)
														return 6.555;
													else
														return 5.88;
												}
											}
											else
												return 8.95;
										}
									}
									else
									{
										if(rsrp < -90.5)
										{
											if(velocity < 7)
												return 9.66;
											else
												return 7.33;
										}
										else
										{
											if(velocity < 3.82)
												return 9.35;
											else
											{
												if(sinr < 14)
												{
													if(sinr < 10.5)
														return 6.6;
													else
														return 5.22;
												}
												else
												{
													if(payload < 1.5)
														return 5.54;
													else
														return 9.19;
												}
											}
										}
									}
								}
							}
							else
							{
								if(velocity < 33.225)
									return 13.63;
								else
									return 11.42;
							}
						}
						else
						{
							if(rsrq < -5.5)
							{
								if(velocity < 12.905)
								{
									if(f < 2232.5)
										return 13.39;
									else
									{
										if(rsrp < -89.5)
										{
											if(velocity < 9.99)
											{
												if(rsrp < -91)
													return 11.06;
												else
													return 13.26;
											}
											else
											{
												if(rsrq < -6.5)
													return 9.48;
												else
													return 6.98;
											}
										}
										else
										{
											if(sinr < 17.5)
												return 11.02;
											else
												return 7.46;
										}
									}
								}
								else
								{
									if(rsrp < -92.5)
									{
										if(sinr < 12.5)
											return 15.36;
										else
										{
											if(sinr < 20.5)
												return 11.67;
											else
												return 10.54;
										}
									}
									else
										return 11.274;
								}
							}
							else
							{
								if(sinr < 7.5)
									return 7.05;
								else
									return 4.84;
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
				if(payload < 0.3)
				{
					if(rsrq < -4.5)
					{
						if(velocity < 0.41)
						{
							if(rsrp < -74)
							{
								if(sinr < 18)
								{
									if(sinr < 16)
										return 5.0025;
									else
										return 8.33;
								}
								else
								{
									if(sinr < 25)
									{
										if(sinr < 20.5)
											return 3.33;
										else
											return 4.37;
									}
									else
										return 5.8;
								}
							}
							else
								return 22.86;
						}
						else
						{
							if(sinr < 11.5)
							{
								if(sinr < 10.5)
								{
									if(f < 2232.5)
									{
										if(rsrq < -6)
											return 8.08;
										else
											return 4.62;
									}
									else
									{
										if(sinr < 5.5)
											return 3.32;
										else
											return 4.79;
									}
								}
								else
								{
									if(velocity < 23.66)
									{
										if(rsrp < -86.5)
										{
											if(rsrq < -6)
												return 8.08;
											else
												return 6.3;
										}
										else
										{
											if(rsrp < -80)
												return 3.92;
											else
												return 5.3;
										}
									}
									else
										return 10.26;
								}
							}
							else
							{
								if(rsrq < -6.5)
								{
									if(velocity < 13.485)
									{
										if(rsrp < -84.5)
											return 6.15;
										else
											return 4.68;
									}
									else
									{
										if(sinr < 28)
										{
											if(velocity < 13.99)
												return 2.48;
											else
											{
												if(sinr < 17)
													return 4.045;
												else
													return 3.1433333333;
											}
										}
										else
											return 5.13;
									}
								}
								else
								{
									if(rsrq < -5.5)
									{
										if(velocity < 14.865)
										{
											if(f < 2232.5)
											{
												if(velocity < 13.23)
												{
													if(rsrp < -84)
													{
														if(velocity < 9.42)
															return 5.5;
														else
															return 7.69;
													}
													else
													{
														if(velocity < 12.355)
														{
															if(sinr < 23)
																return 2.56;
															else
																return 4.272;
														}
														else
														{
															if(rsrp < -71.5)
															{
																if(velocity < 12.725)
																	return 5.67;
																else
																	return 4.47;
															}
															else
																return 4.32;
														}
													}
												}
												else
												{
													if(sinr < 25)
														return 7.55;
													else
													{
														if(rsrp < -80)
															return 5.44;
														else
															return 4.85;
													}
												}
											}
											else
											{
												if(sinr < 19)
													return 5.88;
												else
												{
													if(velocity < 10.02)
														return 6.84;
													else
														return 4.42;
												}
											}
										}
										else
										{
											if(velocity < 17.685)
												return 4.1275;
											else
											{
												if(velocity < 27.625)
													return 5.59;
												else
													return 4.76;
											}
										}
									}
									else
									{
										if(velocity < 13.045)
										{
											if(velocity < 10.99)
												return 4.6;
											else
											{
												if(velocity < 12.18)
													return 6.84;
												else
												{
													if(sinr < 22.5)
														return 9.52;
													else
														return 7.14;
												}
											}
										}
										else
										{
											if(rsrp < -68)
											{
												if(rsrp < -82.5)
												{
													if(rsrp < -84)
													{
														if(rsrp < -86.5)
															return 5.52;
														else
															return 3.29;
													}
													else
													{
														if(sinr < 28.5)
															return 4.44;
														else
															return 7.27;
													}
												}
												else
												{
													if(velocity < 33)
													{
														if(velocity < 13.695)
															return 5.93;
														else
															return 4.9845454545;
													}
													else
														return 4.19;
												}
											}
											else
												return 6.25;
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
							if(sinr < 27)
								return 4.76;
							else
								return 5.49;
						}
						else
							return 22.22;
					}
				}
				else
				{
					if(rsrq < -15)
						return 0.47;
					else
					{
						if(rsrq < -10.5)
							return 18.74;
						else
						{
							if(f < 912)
							{
								if(rsrp < -69)
									return 5.44;
								else
									return 3.73;
							}
							else
							{
								if(rsrp < -80.5)
								{
									if(velocity < 14.18)
									{
										if(sinr < 9.5)
										{
											if(rsrp < -81.5)
											{
												if(rsrp < -85.5)
												{
													if(velocity < 10.965)
														return 4.74;
													else
													{
														if(payload < 0.75)
															return 12.62;
														else
														{
															if(rsrp < -86.5)
																return 12.29;
															else
																return 9.41;
														}
													}
												}
												else
												{
													if(rsrq < -6.5)
													{
														if(rsrp < -83)
														{
															if(payload < 0.75)
																return 10.36;
															else
															{
																if(velocity < 11.96)
																	return 8.64;
																else
																	return 9.2;
															}
														}
														else
															return 9.89;
													}
													else
														return 5.65;
												}
											}
											else
												return 6.18;
										}
										else
										{
											if(rsrp < -87.5)
											{
												if(rsrq < -5.5)
												{
													if(rsrq < -6.5)
													{
														if(payload < 0.75)
															return 5.94;
														else
															return 6.57;
													}
													else
														return 7.21;
												}
												else
													return 4.37;
											}
											else
											{
												if(payload < 0.75)
												{
													if(sinr < 21.5)
													{
														if(sinr < 13)
															return 9.39;
														else
														{
															if(rsrq < -8.5)
																return 2.76;
															else
															{
																if(velocity < 12.885)
																{
																	if(velocity < 11.64)
																	{
																		if(velocity < 7.125)
																		{
																			if(rsrq < -5.5)
																				return 6.2725;
																			else
																			{
																				if(rsrp < -83)
																					return 4.48;
																				else
																					return 5.87;
																			}
																		}
																		else
																		{
																			if(f < 2232.5)
																				return 8.53;
																			else
																				return 7.94;
																		}
																	}
																	else
																	{
																		if(rsrq < -5.5)
																			return 4.33;
																		else
																			return 5.49;
																	}
																}
																else
																{
																	if(rsrp < -84)
																		return 7.6;
																	else
																		return 6.23;
																}
															}
														}
													}
													else
													{
														if(velocity < 13.235)
														{
															if(velocity < 11.6)
															{
																if(velocity < 2.915)
																	return 7.31;
																else
																	return 8.21;
															}
															else
															{
																if(sinr < 27.5)
																	return 14.13;
																else
																	return 11.8;
															}
														}
														else
															return 5.3;
													}
												}
												else
												{
													if(velocity < 0.325)
													{
														if(sinr < 20.5)
															return 10.54;
														else
														{
															if(sinr < 21.5)
																return 13.45;
															else
																return 10.48;
														}
													}
													else
													{
														if(rsrp < -85.5)
														{
															if(f < 2232.5)
															{
																if(velocity < 12.9)
																{
																	if(sinr < 18.5)
																		return 6.36;
																	else
																		return 8.58;
																}
																else
																{
																	if(velocity < 13.26)
																		return 13.91;
																	else
																		return 10.5;
																}
															}
															else
																return 9.77;
														}
														else
														{
															if(velocity < 9.365)
															{
																if(velocity < 8.34)
																{
																	if(velocity < 4.675)
																		return 8.31;
																	else
																		return 7.41;
																}
																else
																	return 8.61;
															}
															else
															{
																if(velocity < 13.35)
																{
																	if(sinr < 28)
																		return 7.02;
																	else
																		return 8.03;
																}
																else
																{
																	if(rsrq < -6.5)
																		return 5.76;
																	else
																		return 6.29;
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
										if(rsrq < -9.5)
										{
											if(sinr < 9.5)
												return 7.25;
											else
												return 3.15;
										}
										else
										{
											if(velocity < 26.16)
											{
												if(velocity < 19.84)
												{
													if(f < 2232.5)
													{
														if(rsrq < -5.5)
														{
															if(payload < 0.75)
															{
																if(velocity < 14.76)
																	return 9.64;
																else
																{
																	if(rsrp < -84.5)
																		return 10.72;
																	else
																		return 10.2;
																}
															}
															else
															{
																if(sinr < 13.5)
																	return 7.12;
																else
																	return 9.015;
															}
														}
														else
															return 7.37;
													}
													else
														return 14.13;
												}
												else
												{
													if(payload < 0.75)
														return 8.57;
													else
													{
														if(rsrq < -5.5)
														{
															if(velocity < 24.085)
																return 18.26;
															else
																return 15.53;
														}
														else
															return 12.33;
													}
												}
											}
											else
											{
												if(rsrq < -8)
													return 10.04;
												else
												{
													if(sinr < 19.5)
														return 5.895;
													else
														return 7.26;
												}
											}
										}
									}
								}
								else
								{
									if(sinr < 28.5)
									{
										if(sinr < 27)
										{
											if(velocity < 8.75)
											{
												if(payload < 0.75)
												{
													if(rsrp < -75)
														return 21.16;
													else
														return 14.71;
												}
												else
													return 8.16;
											}
											else
											{
												if(rsrp < -79.5)
												{
													if(velocity < 34.165)
													{
														if(sinr < 20.5)
														{
															if(payload < 0.75)
																return 8.4;
															else
																return 7.4266666667;
														}
														else
														{
															if(velocity < 22.145)
																return 5.03;
															else
																return 7.09;
														}
													}
													else
														return 8.6;
												}
												else
												{
													if(sinr < 20.5)
													{
														if(f < 2232.5)
														{
															if(rsrq < -7.5)
																return 11.43;
															else
															{
																if(rsrq < -4.5)
																{
																	if(rsrq < -6.5)
																	{
																		if(sinr < 13)
																			return 6.09;
																		else
																			return 7.17;
																	}
																	else
																	{
																		if(velocity < 10.325)
																		{
																			if(sinr < 18.5)
																				return 6.42;
																			else
																				return 5.4;
																		}
																		else
																		{
																			if(sinr < 19)
																			{
																				if(rsrp < -75)
																					return 9.28;
																				else
																					return 10.905;
																			}
																			else
																			{
																				if(rsrp < -74.5)
																					return 6.7;
																				else
																					return 9.24;
																			}
																		}
																	}
																}
																else
																	return 6.02;
															}
														}
														else
															return 9.55;
													}
													else
													{
														if(rsrq < -4.5)
														{
															if(rsrp < -78.5)
																return 12.35;
															else
															{
																if(rsrp < -76)
																{
																	if(sinr < 25.5)
																		return 7.95;
																	else
																		return 8.89;
																}
																else
																{
																	if(sinr < 23)
																	{
																		if(payload < 0.75)
																			return 9.73;
																		else
																			return 7.46;
																	}
																	else
																	{
																		if(rsrp < -74)
																			return 9.8;
																		else
																		{
																			if(sinr < 25)
																				return 10.4;
																			else
																				return 11.49;
																		}
																	}
																}
															}
														}
														else
														{
															if(sinr < 23.5)
																return 19.8;
															else
																return 8.03;
														}
													}
												}
											}
										}
										else
										{
											if(rsrq < -5.5)
												return 10.77;
											else
												return 21.11;
										}
									}
									else
									{
										if(rsrp < -72.5)
										{
											if(rsrq < -5.5)
											{
												if(rsrq < -7)
													return 9.72;
												else
													return 8.37;
											}
											else
											{
												if(velocity < 10.865)
													return 9.4533333333;
												else
													return 10.0466666667;
											}
										}
										else
										{
											if(sinr < 39.5)
											{
												if(rsrq < -7)
													return 8.3;
												else
												{
													if(sinr < 35)
														return 6.558;
													else
													{
														if(rsrq < -5.5)
															return 7.255;
														else
															return 7.73;
													}
												}
											}
											else
												return 10.75;
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
					if(rsrp < -77.5)
					{
						if(rsrp < -82.5)
						{
							if(velocity < 20.935)
							{
								if(velocity < 13.39)
								{
									if(velocity < 12.725)
									{
										if(velocity < 12.62)
										{
											if(rsrq < -5.5)
											{
												if(rsrp < -87.5)
												{
													if(rsrq < -8)
														return 7.18;
													else
													{
														if(f < 2232.5)
															return 9.98;
														else
															return 9;
													}
												}
												else
												{
													if(f < 2232.5)
													{
														if(velocity < 0.49)
														{
															if(rsrq < -6.5)
																return 8.9;
															else
																return 7.77;
														}
														else
														{
															if(rsrp < -84.5)
																return 10.39;
															else
																return 9.67;
														}
													}
													else
														return 10.0066666667;
												}
											}
											else
											{
												if(sinr < 25.5)
													return 7.88;
												else
													return 7.09;
											}
										}
										else
										{
											if(sinr < 21.5)
												return 14.02;
											else
												return 11.68;
										}
									}
									else
									{
										if(rsrp < -84.5)
											return 6.92;
										else
											return 6;
									}
								}
								else
								{
									if(rsrp < -83.5)
									{
										if(rsrp < -87.5)
										{
											if(sinr < 10.5)
												return 8.76;
											else
												return 9.59;
										}
										else
										{
											if(sinr < 15)
											{
												if(velocity < 13.985)
												{
													if(rsrp < -85.5)
														return 13.41;
													else
														return 15.53;
												}
												else
												{
													if(rsrp < -85.5)
													{
														if(velocity < 15.645)
															return 10.7;
														else
															return 14.1;
													}
													else
														return 6.52;
												}
											}
											else
											{
												if(sinr < 28.5)
												{
													if(f < 2232.5)
													{
														if(rsrq < -6.5)
															return 6.86;
														else
														{
															if(velocity < 15.92)
																return 10.6;
															else
															{
																if(rsrp < -85)
																	return 8.21;
																else
																	return 6.19;
															}
														}
													}
													else
														return 10.51;
												}
												else
													return 12.99;
											}
										}
									}
									else
										return 14.49;
								}
							}
							else
							{
								if(rsrq < -7)
									return 12.23;
								else
								{
									if(rsrp < -87.5)
										return 16.18;
									else
										return 14.34;
								}
							}
						}
						else
						{
							if(rsrq < -6.5)
							{
								if(velocity < 12.605)
									return 10.4333333333;
								else
								{
									if(rsrq < -7.5)
										return 15.07;
									else
										return 13.4933333333;
								}
							}
							else
							{
								if(sinr < 28.5)
								{
									if(rsrq < -5.5)
									{
										if(rsrp < -81.5)
											return 7.31;
										else
										{
											if(velocity < 13.34)
											{
												if(rsrp < -78.5)
												{
													if(rsrp < -79.5)
														return 8.48;
													else
														return 8.97;
												}
												else
													return 11.51;
											}
											else
											{
												if(sinr < 11.5)
													return 11.04;
												else
													return 12.71;
											}
										}
									}
									else
									{
										if(rsrp < -80)
											return 11.59;
										else
											return 13.4333333333;
									}
								}
								else
									return 12.49;
							}
						}
					}
					else
					{
						if(f < 1384.5)
							return 2.99;
						else
						{
							if(velocity < 7.015)
							{
								if(rsrq < -5.5)
								{
									if(velocity < 1.215)
										return 6.98;
									else
										return 9.86;
								}
								else
									return 12.41;
							}
							else
							{
								if(sinr < 11)
									return 25.52;
								else
								{
									if(rsrq < -5.5)
									{
										if(f < 2232.5)
											return 21.51;
										else
											return 13.03;
									}
									else
									{
										if(rsrp < -76)
											return 18.22;
										else
										{
											if(sinr < 29.5)
												return 15.028;
											else
												return 13.8533333333;
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
						return 7.28;
					else
					{
						if(sinr < 10.5)
						{
							if(rsrq < -8.5)
								return 7.01;
							else
							{
								if(velocity < 13.405)
								{
									if(sinr < 7.5)
									{
										if(velocity < 8.535)
											return 11.1;
										else
											return 11.8033333333;
									}
									else
									{
										if(sinr < 9)
											return 13.34;
										else
											return 12.77;
									}
								}
								else
								{
									if(sinr < 2.5)
										return 10.05;
									else
									{
										if(velocity < 23.725)
											return 16.11;
										else
											return 13.6075;
									}
								}
							}
						}
						else
						{
							if(sinr < 17.5)
							{
								if(rsrp < -80.5)
								{
									if(velocity < 16.425)
									{
										if(sinr < 14.5)
										{
											if(rsrp < -85)
												return 15.324;
											else
											{
												if(sinr < 12.5)
													return 17.48;
												else
													return 15.92;
											}
										}
										else
										{
											if(rsrp < -84.5)
												return 14.92;
											else
												return 12.42;
										}
									}
									else
										return 21.78;
								}
								else
								{
									if(velocity < 10.805)
									{
										if(velocity < 4.4)
											return 22.12;
										else
											return 21.47;
									}
									else
										return 20.43;
								}
							}
							else
							{
								if(rsrq < -5.5)
								{
									if(rsrq < -7.5)
									{
										if(rsrp < -83.5)
										{
											if(rsrp < -86)
												return 15.09;
											else
												return 12.76;
										}
										else
											return 21.41;
									}
									else
									{
										if(sinr < 26.5)
										{
											if(sinr < 21.5)
											{
												if(rsrp < -86.5)
												{
													if(sinr < 20)
														return 10.02;
													else
														return 12.85;
												}
												else
												{
													if(sinr < 19.5)
													{
														if(rsrp < -85)
															return 13.48;
														else
														{
															if(rsrp < -79)
																return 15.32;
															else
																return 16.11;
														}
													}
													else
														return 14.2133333333;
												}
											}
											else
											{
												if(rsrp < -84.5)
												{
													if(sinr < 23)
														return 9.9;
													else
													{
														if(f < 2232.5)
															return 15.83;
														else
															return 14.71;
													}
												}
												else
												{
													if(velocity < 15.25)
													{
														if(rsrp < -78)
														{
															if(sinr < 25)
															{
																if(rsrq < -6.5)
																	return 11.85;
																else
																	return 12.54;
															}
															else
																return 10.66;
														}
														else
														{
															if(velocity < 13.945)
																return 10.66;
															else
																return 7.12;
														}
													}
													else
														return 13.47;
												}
											}
										}
										else
										{
											if(velocity < 0.57)
												return 24.42;
											else
											{
												if(velocity < 14.16)
												{
													if(rsrp < -75.5)
														return 14.97;
													else
														return 15.83;
												}
												else
													return 11.84;
											}
										}
									}
								}
								else
								{
									if(rsrp < -77.5)
									{
										if(rsrp < -81.5)
										{
											if(velocity < 28.565)
											{
												if(velocity < 17.51)
												{
													if(rsrp < -86)
														return 16.51;
													else
													{
														if(rsrq < -4.5)
														{
															if(sinr < 23)
															{
																if(rsrp < -83)
																{
																	if(rsrp < -84.5)
																		return 14.74;
																	else
																		return 13.78;
																}
																else
																	return 10.62;
															}
															else
																return 16.3;
														}
														else
															return 12.96;
													}
												}
												else
												{
													if(velocity < 21.345)
														return 25;
													else
														return 14.41;
												}
											}
											else
											{
												if(sinr < 26.5)
													return 14.79;
												else
													return 10.65;
											}
										}
										else
										{
											if(rsrq < -4.5)
											{
												if(rsrp < -80)
													return 22.14;
												else
													return 22.84;
											}
											else
												return 14.45;
										}
									}
									else
									{
										if(rsrp < -72)
										{
											if(velocity < 12.025)
												return 8.67;
											else
												return 9.86;
										}
										else
										{
											if(velocity < 4.15)
												return 11.19;
											else
												return 13.645;
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
			if(sinr < 11.5)
			{
				if(f < 1384.5)
				{
					if(payload < 7.5)
						return 2.385;
					else
					{
						if(sinr < 6)
							return 2.67;
						else
						{
							if(rsrp < -84)
								return 3.12;
							else
								return 8.09;
						}
					}
				}
				else
				{
					if(payload < 6.5)
					{
						if(rsrp < -97.5)
						{
							if(rsrp < -103.5)
							{
								if(velocity < 7)
								{
									if(payload < 4.5)
										return 9.28;
									else
									{
										if(sinr < -2.5)
										{
											if(payload < 5.5)
											{
												if(rsrq < -10.5)
													return 4.19;
												else
													return 2.21;
											}
											else
												return 3.63;
										}
										else
										{
											if(rsrp < -106.5)
											{
												if(velocity < 2.82)
													return 11.97;
												else
													return 4.65;
											}
											else
												return 2.6975;
										}
									}
								}
								else
								{
									if(sinr < -1)
										return 13.71;
									else
									{
										if(payload < 4.5)
										{
											if(sinr < 3.5)
												return 5.47;
											else
												return 4.945;
										}
										else
										{
											if(sinr < 8)
											{
												if(velocity < 22.135)
												{
													if(rsrq < -9.5)
													{
														if(rsrp < -108)
															return 8.98;
														else
															return 10.68;
													}
													else
													{
														if(velocity < 9.85)
															return 8.73;
														else
															return 7.28;
													}
												}
												else
													return 5.96;
											}
											else
												return 14.92;
										}
									}
								}
							}
							else
							{
								if(velocity < 14.43)
								{
									if(sinr < 3.5)
									{
										if(sinr < 2.5)
										{
											if(payload < 5.5)
											{
												if(sinr < -3.5)
													return 4.75;
												else
													return 5.74;
											}
											else
											{
												if(rsrp < -100.5)
													return 6.54;
												else
													return 9;
											}
										}
										else
											return 2.98;
									}
									else
									{
										if(rsrq < -10)
										{
											if(velocity < 10.325)
												return 9.9;
											else
												return 18.33;
										}
										else
										{
											if(sinr < 9.5)
											{
												if(velocity < 12.69)
													return 4.32;
												else
												{
													if(rsrp < -100.5)
														return 10.47;
													else
													{
														if(rsrp < -98.5)
															return 14.38;
														else
															return 12.53;
													}
												}
											}
											else
												return 5.43;
										}
									}
								}
								else
								{
									if(payload < 5.5)
									{
										if(sinr < 2.5)
										{
											if(rsrp < -98.5)
											{
												if(rsrq < -9.5)
													return 10.23;
												else
												{
													if(rsrp < -101.5)
														return 11.56;
													else
													{
														if(rsrp < -99.5)
															return 13.2;
														else
															return 12.57;
													}
												}
											}
											else
												return 6.89;
										}
										else
										{
											if(rsrq < -8.5)
												return 11.42;
											else
												return 15.505;
										}
									}
									else
									{
										if(rsrp < -100)
										{
											if(velocity < 15.17)
												return 10.61;
											else
												return 17.59;
										}
										else
										{
											if(sinr < 0.5)
												return 15.55;
											else
												return 16.53;
										}
									}
								}
							}
						}
						else
						{
							if(rsrp < -85)
							{
								if(velocity < 4.17)
								{
									if(rsrq < -10.5)
									{
										if(rsrp < -88.5)
										{
											if(velocity < 1.25)
											{
												if(rsrq < -11.5)
													return 10.27;
												else
												{
													if(rsrp < -91.5)
													{
														if(sinr < 8)
														{
															if(rsrp < -93.5)
																return 12.35;
															else
																return 15.37;
														}
														else
															return 11.96;
													}
													else
														return 9.89;
												}
											}
											else
											{
												if(rsrp < -92)
												{
													if(velocity < 4.08)
														return 10.47;
													else
														return 11.51;
												}
												else
													return 9.32;
											}
										}
										else
											return 2.73;
									}
									else
									{
										if(rsrp < -95.5)
										{
											if(sinr < 6)
												return 13.26;
											else
											{
												if(payload < 5.5)
													return 19.27;
												else
													return 20.07;
											}
										}
										else
										{
											if(rsrp < -94)
											{
												if(payload < 5)
													return 5.55;
												else
													return 9.96;
											}
											else
											{
												if(sinr < 9)
												{
													if(rsrp < -91.5)
														return 10.57;
													else
														return 11.21;
												}
												else
													return 12.11;
											}
										}
									}
								}
								else
								{
									if(rsrp < -88.5)
									{
										if(velocity < 12.565)
										{
											if(rsrp < -92.5)
											{
												if(rsrp < -96)
													return 11.83;
												else
												{
													if(payload < 4.5)
													{
														if(velocity < 7.84)
															return 16.22;
														else
															return 17.34;
													}
													else
													{
														if(sinr < 0.5)
														{
															if(rsrp < -94)
																return 15.39;
															else
																return 15.93;
														}
														else
														{
															if(sinr < 8)
																return 12.2733333333;
															else
																return 15.44;
														}
													}
												}
											}
											else
											{
												if(sinr < -0.5)
													return 10.03;
												else
												{
													if(velocity < 10.29)
													{
														if(payload < 4.5)
														{
															if(velocity < 8.225)
																return 11.58;
															else
																return 13.34;
														}
														else
														{
															if(rsrp < -91)
																return 10.39;
															else
																return 11.13;
														}
													}
													else
													{
														if(sinr < 3)
														{
															if(payload < 4.5)
																return 15.93;
															else
																return 17.06;
														}
														else
															return 13.14;
													}
												}
											}
										}
										else
										{
											if(velocity < 32.71)
											{
												if(rsrp < -96.5)
													return 5.77;
												else
												{
													if(rsrq < -10.5)
														return 6.14;
													else
													{
														if(rsrp < -93.5)
														{
															if(velocity < 14.91)
																return 16.68;
															else
																return 12.72;
														}
														else
														{
															if(rsrp < -90.5)
																return 9.35;
															else
															{
																if(velocity < 14.89)
																	return 15.79;
																else
																{
																	if(payload < 5.5)
																	{
																		if(velocity < 24.195)
																		{
																			if(rsrp < -89.5)
																				return 12.82;
																			else
																				return 11.98;
																		}
																		else
																			return 10.59;
																	}
																	else
																		return 10.57;
																}
															}
														}
													}
												}
											}
											else
												return 16.79;
										}
									}
									else
									{
										if(velocity < 13.81)
										{
											if(rsrp < -87)
												return 13.63;
											else
												return 14.4666666667;
										}
										else
										{
											if(rsrp < -86.5)
											{
												if(velocity < 14.08)
													return 18.89;
												else
												{
													if(rsrp < -87.5)
														return 11.68;
													else
														return 18.7;
												}
											}
											else
												return 20.84;
										}
									}
								}
							}
							else
							{
								if(sinr < 8.5)
								{
									if(f < 2232.5)
									{
										if(sinr < -0.5)
											return 18.29;
										else
										{
											if(payload < 4.5)
												return 14.86;
											else
												return 13.82;
										}
									}
									else
										return 20.55;
								}
								else
								{
									if(payload < 5.5)
									{
										if(rsrp < -83.5)
											return 20.94;
										else
										{
											if(rsrp < -82.5)
												return 22.42;
											else
												return 22.98;
										}
									}
									else
										return 18.11;
								}
							}
						}
					}
					else
					{
						if(rsrq < -8.5)
						{
							if(sinr < 4.5)
							{
								if(rsrq < -10.5)
								{
									if(sinr < 2.5)
									{
										if(sinr < 0.5)
										{
											if(rsrp < -93.5)
											{
												if(rsrq < -12.5)
												{
													if(rsrp < -102.5)
														return 4.8;
													else
													{
														if(rsrq < -13.5)
															return 6.59;
														else
															return 10.23;
													}
												}
												else
												{
													if(sinr < -0.5)
													{
														if(velocity < 2.5)
														{
															if(rsrp < -100.5)
																return 9.392;
															else
															{
																if(rsrp < -95)
																	return 12.68;
																else
																	return 9.87;
															}
														}
														else
														{
															if(payload < 9)
																return 21.81;
															else
															{
																if(rsrq < -11.5)
																{
																	if(velocity < 15.675)
																		return 13.82;
																	else
																		return 14.37;
																}
																else
																{
																	if(sinr < -2.5)
																		return 18.13;
																	else
																		return 15.59;
																}
															}
														}
													}
													else
														return 10.3466666667;
												}
											}
											else
											{
												if(rsrq < -12.5)
													return 18;
												else
												{
													if(rsrp < -90.5)
														return 14.02;
													else
														return 11.85;
												}
											}
										}
										else
										{
											if(velocity < 14.085)
											{
												if(velocity < 10.17)
												{
													if(rsrq < -11.5)
													{
														if(velocity < 2.95)
															return 19.79;
														else
															return 10.58;
													}
													else
													{
														if(rsrp < -93.5)
														{
															if(velocity < 9.375)
																return 9.47;
															else
																return 11.24;
														}
														else
															return 13.52;
													}
												}
												else
												{
													if(rsrq < -11.5)
														return 19.66;
													else
													{
														if(velocity < 12.085)
															return 20.39;
														else
															return 22.2;
													}
												}
											}
											else
											{
												if(rsrp < -98.5)
												{
													if(velocity < 14.645)
														return 7.62;
													else
													{
														if(payload < 7.5)
															return 13.44;
														else
														{
															if(rsrq < -11.5)
																return 6.93;
															else
																return 8.93;
														}
													}
												}
												else
												{
													if(payload < 8)
														return 14.63;
													else
														return 11.89;
												}
											}
										}
									}
									else
									{
										if(rsrq < -11.5)
										{
											if(rsrp < -100.5)
												return 11.91;
											else
												return 15.1;
										}
										else
										{
											if(payload < 9.5)
											{
												if(rsrp < -106.5)
													return 6.06;
												else
												{
													if(sinr < 3.5)
														return 8.89;
													else
													{
														if(payload < 8)
															return 10.36;
														else
															return 9.19;
													}
												}
											}
											else
												return 11.53;
										}
									}
								}
								else
								{
									if(sinr < 1.5)
									{
										if(rsrp < -96)
										{
											if(velocity < 5.39)
											{
												if(sinr < 0)
												{
													if(rsrp < -100.5)
														return 12.49;
													else
														return 22.21;
												}
												else
													return 8.11;
											}
											else
											{
												if(velocity < 13.475)
												{
													if(velocity < 12.24)
													{
														if(velocity < 11.075)
															return 8.57;
														else
															return 9.2;
													}
													else
														return 9.7;
												}
												else
												{
													if(payload < 8.5)
														return 12.35;
													else
														return 11.79;
												}
											}
										}
										else
										{
											if(velocity < 14.15)
											{
												if(payload < 9)
													return 15.31;
												else
													return 11.77;
											}
											else
											{
												if(rsrq < -9.5)
													return 20.69;
												else
													return 13.13;
											}
										}
									}
									else
									{
										if(payload < 8.5)
										{
											if(payload < 7.5)
											{
												if(velocity < 15.375)
												{
													if(rsrp < -96.5)
														return 24.53;
													else
													{
														if(rsrp < -91)
															return 14.21;
														else
															return 13.71;
													}
												}
												else
													return 12.24;
											}
											else
											{
												if(sinr < 2.5)
													return 14.7;
												else
												{
													if(velocity < 9.92)
														return 10.65;
													else
													{
														if(sinr < 3.5)
															return 7.92;
														else
															return 7.02;
													}
												}
											}
										}
										else
										{
											if(rsrp < -88)
											{
												if(payload < 9.5)
												{
													if(velocity < 0.515)
														return 13.25;
													else
													{
														if(sinr < 3)
															return 16.86;
														else
															return 14.25;
													}
												}
												else
												{
													if(rsrp < -94)
														return 15.5;
													else
														return 17.21;
												}
											}
											else
												return 20.82;
										}
									}
								}
							}
							else
							{
								if(rsrq < -10.5)
								{
									if(velocity < 25.465)
									{
										if(payload < 7.5)
										{
											if(rsrp < -90.5)
											{
												if(sinr < 9)
													return 17.86;
												else
													return 16.23;
											}
											else
												return 10.39;
										}
										else
										{
											if(payload < 9)
											{
												if(rsrq < -11.5)
													return 14.12;
												else
													return 15.92;
											}
											else
												return 13.5;
										}
									}
									else
										return 19.58;
								}
								else
								{
									if(velocity < 16.955)
									{
										if(payload < 9.5)
										{
											if(rsrp < -86.5)
											{
												if(rsrq < -9.5)
												{
													if(sinr < 8)
													{
														if(velocity < 11.99)
														{
															if(sinr < 5.5)
																return 12.17;
															else
															{
																if(rsrp < -100.5)
																	return 8.74;
																else
																{
																	if(payload < 8)
																		return 9.16;
																	else
																		return 10.8;
																}
															}
														}
														else
															return 21.16;
													}
													else
													{
														if(sinr < 9.5)
															return 17.4;
														else
															return 11.41;
													}
												}
												else
												{
													if(rsrp < -93)
													{
														if(velocity < 7.965)
														{
															if(velocity < 3.53)
															{
																if(payload < 8.5)
																{
																	if(payload < 7.5)
																		return 11.14;
																	else
																		return 14.4;
																}
																else
																	return 6.04;
															}
															else
															{
																if(rsrp < -94.5)
																	return 13.39;
																else
																	return 12.73;
															}
														}
														else
														{
															if(rsrp < -98.5)
																return 20.5;
															else
																return 12.38;
														}
													}
													else
													{
														if(velocity < 8.28)
															return 17.66;
														else
														{
															if(payload < 8.5)
																return 14.44;
															else
																return 15.08;
														}
													}
												}
											}
											else
												return 23.07;
										}
										else
										{
											if(rsrp < -98)
											{
												if(velocity < 5.115)
													return 4.79;
												else
												{
													if(velocity < 14.275)
													{
														if(velocity < 12.135)
															return 8.55;
														else
															return 14.98;
													}
													else
														return 9.13;
												}
											}
											else
											{
												if(sinr < 7.5)
													return 11.97;
												else
													return 22.19;
											}
										}
									}
									else
									{
										if(rsrp < -87.5)
										{
											if(sinr < 6.5)
											{
												if(rsrq < -9.5)
													return 18.35;
												else
												{
													if(velocity < 25.51)
														return 22.55;
													else
														return 19.84;
												}
											}
											else
												return 16.98;
										}
										else
											return 25.91;
									}
								}
							}
						}
						else
						{
							if(rsrp < -104)
							{
								if(payload < 8.5)
									return 8.82;
								else
								{
									if(velocity < 5.3)
									{
										if(payload < 9.5)
											return 5.74;
										else
											return 6.42;
									}
									else
										return 8.15;
								}
							}
							else
							{
								if(velocity < 25.34)
								{
									if(rsrp < -88.5)
									{
										if(velocity < 13.105)
										{
											if(rsrp < -100.5)
											{
												if(velocity < 8.195)
												{
													if(sinr < 7)
														return 9.47;
													else
														return 11.05;
												}
												else
													return 14.95;
											}
											else
											{
												if(sinr < 7.5)
												{
													if(velocity < 7.505)
													{
														if(rsrp < -90.5)
														{
															if(sinr < 5.5)
															{
																if(rsrp < -93.5)
																	return 20.28;
																else
																	return 19.74;
															}
															else
																return 22.53;
														}
														else
															return 13.12;
													}
													else
													{
														if(payload < 8.5)
														{
															if(payload < 7.5)
															{
																if(sinr < 0.5)
																	return 16.26;
																else
																	return 16.88;
															}
															else
																return 19.05;
														}
														else
														{
															if(velocity < 11.51)
															{
																if(payload < 9.5)
																	return 14.31;
																else
																	return 13.73;
															}
															else
															{
																if(rsrp < -95)
																	return 16.78;
																else
																	return 14.634;
															}
														}
													}
												}
												else
												{
													if(velocity < 6.575)
													{
														if(sinr < 9.5)
														{
															if(payload < 7.5)
																return 20.6;
															else
																return 18.74;
														}
														else
															return 21.66;
													}
													else
														return 24.3;
												}
											}
										}
										else
										{
											if(sinr < 5.5)
											{
												if(sinr < 4)
												{
													if(payload < 9)
													{
														if(rsrp < -93)
															return 20.64;
														else
															return 19.04;
													}
													else
														return 14.79;
												}
												else
													return 10.62;
											}
											else
											{
												if(sinr < 8)
												{
													if(sinr < 6.5)
														return 19.93;
													else
														return 21.3416666667;
												}
												else
													return 23.44;
											}
										}
									}
									else
									{
										if(payload < 7.5)
										{
											if(velocity < 11.315)
												return 22.27;
											else
												return 10.98;
										}
										else
										{
											if(rsrp < -86)
												return 24.68;
											else
												return 15.08;
										}
									}
								}
								else
								{
									if(payload < 8.5)
										return 7.38;
									else
										return 10.91;
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
					if(rsrq < -12)
						return 1.43;
					else
					{
						if(f < 2232.5)
						{
							if(rsrp < -106.5)
								return 5.52;
							else
							{
								if(velocity < 35.635)
								{
									if(payload < 4.5)
									{
										if(sinr < 23.5)
										{
											if(velocity < 4.72)
												return 13.16;
											else
												return 14.1633333333;
										}
										else
										{
											if(rsrq < -9)
												return 10.36;
											else
												return 6.3;
										}
									}
									else
									{
										if(rsrq < -10.5)
											return 10.89;
										else
										{
											if(sinr < 21.5)
											{
												if(rsrp < -93.5)
												{
													if(payload < 7.5)
													{
														if(payload < 6.5)
														{
															if(velocity < 21.485)
																return 18.33;
															else
																return 20.04;
														}
														else
															return 22.48;
													}
													else
													{
														if(rsrp < -100.5)
															return 11.3;
														else
														{
															if(rsrp < -97.5)
																return 20.54;
															else
															{
																if(velocity < 9.34)
																	return 16.46;
																else
																	return 17.29;
															}
														}
													}
												}
												else
												{
													if(payload < 7.5)
													{
														if(rsrq < -9.5)
														{
															if(payload < 6)
																return 22.14;
															else
															{
																if(rsrp < -92.5)
																	return 13.67;
																else
																	return 12.59;
															}
														}
														else
														{
															if(payload < 5.5)
															{
																if(rsrp < -91.5)
																	return 15.05;
																else
																	return 11.34;
															}
															else
															{
																if(sinr < 20)
																	return 8.76;
																else
																	return 15.58;
															}
														}
													}
													else
													{
														if(rsrp < -92.5)
															return 14.16;
														else
														{
															if(rsrq < -8.5)
																return 11.05;
															else
															{
																if(velocity < 3.98)
																	return 19.68;
																else
																	return 18.0125;
															}
														}
													}
												}
											}
											else
											{
												if(payload < 6.5)
													return 11.24;
												else
													return 10.4;
											}
										}
									}
								}
								else
									return 7.48;
							}
						}
						else
						{
							if(sinr < 18)
							{
								if(velocity < 4.455)
									return 22.06;
								else
								{
									if(rsrp < -93)
									{
										if(sinr < 13)
											return 17.67;
										else
											return 19.61;
									}
									else
										return 19.41;
								}
							}
							else
								return 15.54;
						}
					}
				}
				else
				{
					if(rsrp < -82.5)
					{
						if(sinr < 21.5)
						{
							if(rsrq < -8.5)
							{
								if(payload < 5.5)
									return 12.78;
								else
								{
									if(velocity < 10.66)
									{
										if(rsrp < -88.5)
											return 19.07;
										else
										{
											if(rsrp < -87.5)
												return 16.61;
											else
												return 18.1333333333;
										}
									}
									else
									{
										if(payload < 8.5)
										{
											if(rsrp < -88)
												return 16.64;
											else
												return 21.17;
										}
										else
											return 21.47;
									}
								}
							}
							else
							{
								if(payload < 6.5)
								{
									if(velocity < 2.905)
										return 8.34;
									else
									{
										if(sinr < 13)
											return 16.57;
										else
										{
											if(payload < 5)
											{
												if(sinr < 17)
													return 10.02;
												else
													return 12.15;
											}
											else
												return 14.79;
										}
									}
								}
								else
								{
									if(sinr < 17)
									{
										if(payload < 9)
											return 16.63;
										else
											return 12.68;
									}
									else
									{
										if(payload < 8.5)
											return 18.52;
										else
											return 22.81;
									}
								}
							}
						}
						else
						{
							if(sinr < 25.5)
							{
								if(velocity < 6.32)
									return 15.58;
								else
								{
									if(rsrp < -87.5)
									{
										if(velocity < 15.86)
											return 20.24;
										else
											return 22.96;
									}
									else
									{
										if(rsrq < -9.5)
											return 25.47;
										else
										{
											if(rsrq < -8.5)
												return 22.94;
											else
												return 23.54;
										}
									}
								}
							}
							else
							{
								if(velocity < 15.645)
								{
									if(velocity < 11.955)
									{
										if(sinr < 28)
											return 16.03;
										else
											return 17.29;
									}
									else
										return 19.38;
								}
								else
									return 14.04;
							}
						}
					}
					else
					{
						if(sinr < 21)
						{
							if(sinr < 15.5)
							{
								if(f < 1384.5)
									return 11.2;
								else
								{
									if(rsrp < -78.5)
									{
										if(rsrp < -80)
										{
											if(payload < 7)
												return 23.53;
											else
												return 24.19;
										}
										else
											return 21.54;
									}
									else
										return 33.26;
								}
							}
							else
							{
								if(rsrq < -9.5)
								{
									if(sinr < 17)
										return 11;
									else
										return 14.11;
								}
								else
								{
									if(sinr < 16.5)
									{
										if(velocity < 21.265)
										{
											if(velocity < 5.76)
												return 13.84;
											else
												return 15.13;
										}
										else
											return 10.53;
									}
									else
									{
										if(velocity < 18.81)
										{
											if(velocity < 12.985)
											{
												if(rsrq < -8.5)
													return 19.83;
												else
													return 18.39;
											}
											else
											{
												if(rsrp < -78)
													return 22.46;
												else
													return 23.23;
											}
										}
										else
											return 13.74;
									}
								}
							}
						}
						else
						{
							if(rsrp < -81.5)
							{
								if(sinr < 28)
								{
									if(velocity < 18.975)
										return 18.31;
									else
										return 16.06;
								}
								else
									return 24.48;
							}
							else
							{
								if(sinr < 25.5)
								{
									if(payload < 7.5)
										return 28.2;
									else
										return 26.89;
								}
								else
								{
									if(sinr < 30.5)
									{
										if(sinr < 27)
											return 18.76;
										else
											return 20.65;
									}
									else
									{
										if(velocity < 2.715)
											return 25.86;
										else
											return 26.43;
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
			if(payload < 7.5)
			{
				if(rsrp < -89.5)
				{
					if(velocity < 23.745)
					{
						if(velocity < 11.57)
						{
							if(rsrp < -92.5)
							{
								if(payload < 5.5)
								{
									if(sinr < 17.5)
									{
										if(velocity < 3.785)
										{
											if(rsrq < -6)
												return 12.55;
											else
												return 14.97;
										}
										else
										{
											if(sinr < 11.5)
												return 18.05;
											else
											{
												if(velocity < 9.405)
													return 17.25;
												else
													return 16.54;
											}
										}
									}
									else
										return 15.28;
								}
								else
								{
									if(rsrq < -5.5)
									{
										if(f < 2232.5)
										{
											if(velocity < 10.785)
											{
												if(velocity < 9.895)
												{
													if(velocity < 4.385)
														return 16.53;
													else
													{
														if(sinr < 11)
															return 19.0466666667;
														else
															return 20.36;
													}
												}
												else
													return 15.9233333333;
											}
											else
											{
												if(sinr < 7)
													return 19.19;
												else
												{
													if(payload < 6.5)
														return 21.5;
													else
														return 23.42;
												}
											}
										}
										else
											return 24.12;
									}
									else
										return 12.04;
								}
							}
							else
							{
								if(sinr < 23)
								{
									if(sinr < 15.5)
									{
										if(f < 2232.5)
										{
											if(rsrq < -6.5)
											{
												if(sinr < 9.5)
													return 17.21;
												else
												{
													if(rsrp < -91.5)
														return 16.34;
													else
													{
														if(rsrp < -90.5)
														{
															if(velocity < 10.31)
															{
																if(payload < 5)
																	return 14.65;
																else
																	return 16.41;
															}
															else
																return 17.37;
														}
														else
															return 15.77;
													}
												}
											}
											else
											{
												if(sinr < 12)
													return 10.76;
												else
													return 13.59;
											}
										}
										else
										{
											if(velocity < 8.55)
											{
												if(payload < 6.5)
													return 21.09;
												else
													return 13.45;
											}
											else
											{
												if(payload < 6.5)
												{
													if(rsrp < -90.5)
														return 13.85;
													else
														return 13.09;
												}
												else
													return 11.79;
											}
										}
									}
									else
									{
										if(sinr < 17.5)
										{
											if(payload < 5.5)
												return 17.74;
											else
												return 22.91;
										}
										else
										{
											if(rsrq < -5.5)
											{
												if(rsrp < -90.5)
												{
													if(velocity < 5.41)
													{
														if(payload < 6)
															return 16.65;
														else
															return 15.66;
													}
													else
														return 14.71;
												}
												else
													return 18.82;
											}
											else
											{
												if(sinr < 18.5)
													return 15.54;
												else
													return 9.28;
											}
										}
									}
								}
								else
								{
									if(payload < 6.5)
										return 12.27;
									else
										return 10.62;
								}
							}
						}
						else
						{
							if(velocity < 16.01)
							{
								if(rsrp < -93)
								{
									if(velocity < 14.31)
									{
										if(payload < 5)
										{
											if(sinr < 8.5)
												return 7.13;
											else
												return 8.67;
										}
										else
										{
											if(rsrq < -6.5)
												return 6.74;
											else
												return 5.7;
										}
									}
									else
									{
										if(sinr < 16)
										{
											if(payload < 5.5)
											{
												if(f < 2232.5)
													return 12.51;
												else
												{
													if(sinr < 6.5)
														return 11.06;
													else
														return 10.31;
												}
											}
											else
											{
												if(payload < 6.5)
													return 16.54;
												else
													return 14.04;
											}
										}
										else
											return 6.86;
									}
								}
								else
								{
									if(velocity < 15.345)
									{
										if(velocity < 14.39)
										{
											if(velocity < 12.535)
											{
												if(sinr < 11)
													return 15.73;
												else
												{
													if(f < 2232.5)
													{
														if(rsrp < -90.5)
														{
															if(velocity < 11.895)
																return 11.21;
															else
																return 10.53;
														}
														else
															return 8.55;
													}
													else
														return 12.51;
												}
											}
											else
											{
												if(f < 2232.5)
												{
													if(sinr < 20.5)
													{
														if(payload < 5.5)
															return 14.722;
														else
														{
															if(sinr < 10)
																return 18.88;
															else
																return 16.47;
														}
													}
													else
														return 18.93;
												}
												else
												{
													if(payload < 4.5)
														return 6.45;
													else
													{
														if(payload < 5.5)
															return 21.4;
														else
														{
															if(payload < 6.5)
																return 11.76;
															else
																return 12.45;
														}
													}
												}
											}
										}
										else
										{
											if(payload < 6.5)
											{
												if(sinr < 19)
													return 25.07;
												else
													return 21.68;
											}
											else
											{
												if(sinr < 9.5)
													return 18.08;
												else
													return 20.59;
											}
										}
									}
									else
									{
										if(payload < 4.5)
											return 6.79;
										else
										{
											if(sinr < 14)
												return 13.86;
											else
												return 12.946;
										}
									}
								}
							}
							else
							{
								if(velocity < 16.87)
									return 17.65;
								else
									return 21.37;
							}
						}
					}
					else
					{
						if(rsrp < -100.5)
						{
							if(payload < 5.5)
								return 9.08;
							else
								return 14.81;
						}
						else
						{
							if(velocity < 36.585)
							{
								if(rsrp < -97.5)
									return 8.41;
								else
								{
									if(payload < 5)
									{
										if(sinr < 6)
											return 8.25;
										else
											return 3.95;
									}
									else
										return 7.5;
								}
							}
							else
								return 17.69;
						}
					}
				}
				else
				{
					if(rsrp < -79.5)
					{
						if(velocity < 33.49)
						{
							if(sinr < 25.5)
							{
								if(rsrq < -6.5)
								{
									if(sinr < 24)
									{
										if(payload < 4.5)
										{
											if(sinr < 10.5)
											{
												if(rsrp < -86.5)
													return 9.7;
												else
													return 8.95;
											}
											else
											{
												if(rsrp < -83.5)
												{
													if(velocity < 11.39)
														return 13.32;
													else
														return 15.22;
												}
												else
													return 12.3;
											}
										}
										else
										{
											if(sinr < 18.5)
											{
												if(velocity < 7.915)
												{
													if(rsrp < -88.5)
														return 19.92;
													else
													{
														if(f < 2232.5)
															return 12.9;
														else
														{
															if(rsrp < -86.5)
																return 14.51;
															else
																return 15.95;
														}
													}
												}
												else
												{
													if(sinr < 12)
													{
														if(rsrp < -87)
															return 10.48;
														else
														{
															if(f < 2232.5)
															{
																if(sinr < 10.5)
																	return 20.5;
																else
																	return 15.17;
															}
															else
															{
																if(payload < 6.5)
																	return 12.4;
																else
																	return 14.82;
															}
														}
													}
													else
														return 13.286;
												}
											}
											else
											{
												if(velocity < 15.105)
												{
													if(rsrp < -83)
													{
														if(sinr < 21)
															return 20.43;
														else
															return 19.14;
													}
													else
														return 17.19;
												}
												else
													return 30.4;
											}
										}
									}
									else
										return 9.22;
								}
								else
								{
									if(payload < 5.5)
									{
										if(velocity < 16.145)
										{
											if(velocity < 14.69)
											{
												if(sinr < 18.5)
												{
													if(payload < 4.5)
													{
														if(f < 2232.5)
														{
															if(rsrq < -5.5)
															{
																if(velocity < 13.025)
																{
																	if(sinr < 11.5)
																		return 12.39;
																	else
																	{
																		if(sinr < 13.5)
																			return 6.19;
																		else
																		{
																			if(sinr < 15.5)
																				return 9.07;
																			else
																				return 9.7;
																		}
																	}
																}
																else
																{
																	if(rsrp < -84.5)
																		return 11.61;
																	else
																		return 17.49;
																}
															}
															else
															{
																if(sinr < 13.5)
																	return 11.6;
																else
																	return 15.85;
															}
														}
														else
														{
															if(rsrp < -85.5)
																return 15.53;
															else
															{
																if(rsrp < -84.5)
																	return 13.24;
																else
																	return 15.74;
															}
														}
													}
													else
													{
														if(sinr < 17.5)
														{
															if(velocity < 14.365)
															{
																if(rsrp < -83)
																{
																	if(sinr < 5.5)
																		return 10.44;
																	else
																	{
																		if(velocity < 0.805)
																		{
																			if(sinr < 13.5)
																				return 16.37;
																			else
																				return 14.05;
																		}
																		else
																		{
																			if(f < 2232.5)
																				return 14.52;
																			else
																				return 13.8425;
																		}
																	}
																}
																else
																{
																	if(sinr < 16.5)
																		return 11.92;
																	else
																		return 13.5;
																}
															}
															else
																return 22.11;
														}
														else
															return 9.63;
													}
												}
												else
												{
													if(sinr < 20)
													{
														if(f < 2232.5)
														{
															if(payload < 4.5)
															{
																if(velocity < 6.845)
																{
																	if(rsrq < -5.5)
																		return 15.81;
																	else
																		return 20.3;
																}
																else
																{
																	if(velocity < 13.87)
																		return 16.89;
																	else
																		return 19.38;
																}
															}
															else
																return 22.12;
														}
														else
														{
															if(rsrq < -5.5)
																return 14.54;
															else
																return 17.26;
														}
													}
													else
													{
														if(sinr < 21.5)
															return 10.56;
														else
														{
															if(rsrp < -85.5)
															{
																if(sinr < 22.5)
																{
																	if(f < 2232.5)
																		return 13.47;
																	else
																		return 16.61;
																}
																else
																	return 24.67;
															}
															else
															{
																if(velocity < 7.385)
																{
																	if(rsrq < -4.5)
																		return 14.425;
																	else
																	{
																		if(rsrp < -81)
																			return 15.53;
																		else
																			return 16.89;
																	}
																}
																else
																{
																	if(velocity < 11.6)
																		return 18.53;
																	else
																	{
																		if(sinr < 23.5)
																			return 16.66;
																		else
																			return 17.33;
																	}
																}
															}
														}
													}
												}
											}
											else
											{
												if(rsrp < -82)
												{
													if(velocity < 14.885)
														return 9.37;
													else
														return 11.74;
												}
												else
												{
													if(sinr < 14)
														return 10.06;
													else
													{
														if(velocity < 14.97)
															return 13.9;
														else
															return 19.26;
													}
												}
											}
										}
										else
										{
											if(sinr < 12.5)
											{
												if(rsrq < -5.5)
													return 16.13;
												else
												{
													if(sinr < 11.5)
														return 26.35;
													else
														return 22.79;
												}
											}
											else
											{
												if(rsrq < -5.5)
												{
													if(sinr < 14.5)
														return 9.4;
													else
													{
														if(velocity < 21.385)
															return 16.72;
														else
															return 15.79;
													}
												}
												else
												{
													if(rsrq < -4.5)
													{
														if(sinr < 21)
														{
															if(velocity < 21.71)
																return 19.27;
															else
																return 14.96;
														}
														else
														{
															if(velocity < 24.27)
																return 19.26;
															else
																return 19.74;
														}
													}
													else
														return 14.26;
												}
											}
										}
									}
									else
									{
										if(sinr < 19.5)
										{
											if(sinr < 18.5)
											{
												if(payload < 6.5)
												{
													if(rsrp < -88.5)
														return 11.08;
													else
													{
														if(velocity < 13.57)
														{
															if(rsrq < -5.5)
															{
																if(rsrp < -86.5)
																	return 25.75;
																else
																{
																	if(velocity < 13.065)
																	{
																		if(velocity < 6.45)
																			return 20.52;
																		else
																			return 17.88;
																	}
																	else
																		return 20.6125;
																}
															}
															else
																return 24.04;
														}
														else
														{
															if(velocity < 27.505)
															{
																if(sinr < 12)
																{
																	if(rsrp < -85.5)
																		return 17.61;
																	else
																		return 16.06;
																}
																else
																{
																	if(velocity < 24.275)
																		return 13.5566666667;
																	else
																		return 15.74;
																}
															}
															else
																return 18.99;
														}
													}
												}
												else
												{
													if(rsrp < -84.5)
													{
														if(velocity < 31.12)
														{
															if(rsrp < -87.5)
																return 15.49;
															else
															{
																if(sinr < 14.5)
																{
																	if(rsrp < -85.5)
																		return 18.14;
																	else
																		return 17.47;
																}
																else
																{
																	if(velocity < 5.92)
																		return 18.29;
																	else
																		return 19.14;
																}
															}
														}
														else
															return 13.72;
													}
													else
													{
														if(rsrq < -5.5)
														{
															if(sinr < 15.5)
															{
																if(rsrp < -82.5)
																	return 16.74;
																else
																	return 25.3;
															}
															else
																return 38.15;
														}
														else
														{
															if(velocity < 12.015)
																return 21.24;
															else
																return 20.06;
														}
													}
												}
											}
											else
											{
												if(rsrp < -86)
													return 14.7575;
												else
													return 8.88;
											}
										}
										else
										{
											if(sinr < 21.5)
											{
												if(sinr < 20.5)
												{
													if(rsrq < -5.5)
													{
														if(payload < 6.5)
															return 23.82;
														else
															return 21.41;
													}
													else
														return 21.71;
												}
												else
													return 28.69;
											}
											else
											{
												if(rsrp < -81)
												{
													if(velocity < 2.705)
													{
														if(sinr < 23.5)
															return 19.02;
														else
															return 34.74;
													}
													else
													{
														if(velocity < 5.085)
															return 14.54;
														else
														{
															if(rsrp < -88)
																return 23.17;
															else
															{
																if(rsrp < -83.5)
																{
																	if(sinr < 22.5)
																		return 18.37;
																	else
																		return 20.598;
																}
																else
																{
																	if(rsrq < -5.5)
																		return 21.05;
																	else
																		return 25.18;
																}
															}
														}
													}
												}
												else
													return 13.53;
											}
										}
									}
								}
							}
							else
							{
								if(velocity < 23)
								{
									if(payload < 5.5)
									{
										if(payload < 4.5)
										{
											if(rsrp < -87.5)
												return 26.34;
											else
											{
												if(sinr < 32.5)
													return 20.25;
												else
													return 16.02;
											}
										}
										else
										{
											if(velocity < 19.02)
											{
												if(rsrp < -80.5)
													return 15.044;
												else
													return 17.99;
											}
											else
												return 10.94;
										}
									}
									else
									{
										if(velocity < 10.89)
										{
											if(rsrp < -88.5)
												return 19.99;
											else
											{
												if(velocity < 3.645)
												{
													if(rsrp < -84)
														return 18.45;
													else
														return 15.89;
												}
												else
												{
													if(sinr < 31)
														return 13.82;
													else
														return 11.42;
												}
											}
										}
										else
										{
											if(velocity < 12.735)
												return 31.75;
											else
											{
												if(rsrp < -87.5)
													return 23.39;
												else
												{
													if(rsrq < -6.5)
														return 13.64;
													else
													{
														if(f < 2232.5)
														{
															if(payload < 6.5)
																return 24.1066666667;
															else
																return 19.77;
														}
														else
															return 19.89;
													}
												}
											}
										}
									}
								}
								else
								{
									if(sinr < 29)
										return 17.67;
									else
										return 38.17;
								}
							}
						}
						else
						{
							if(sinr < 4.5)
								return 33.83;
							else
							{
								if(payload < 6)
								{
									if(payload < 4.5)
									{
										if(rsrp < -80.5)
											return 13.36;
										else
											return 17.2;
									}
									else
										return 19.59;
								}
								else
									return 12.96;
							}
						}
					}
					else
					{
						if(velocity < 34.93)
						{
							if(payload < 5.5)
							{
								if(velocity < 33.895)
								{
									if(sinr < 11)
									{
										if(rsrq < -6.5)
											return 13.68;
										else
											return 7.32;
									}
									else
									{
										if(payload < 4.5)
										{
											if(rsrp < -69)
											{
												if(f < 2232.5)
												{
													if(velocity < 14.465)
													{
														if(velocity < 13.975)
														{
															if(rsrq < -5.5)
															{
																if(velocity < 9.77)
																{
																	if(rsrq < -6.5)
																	{
																		if(velocity < 4.125)
																			return 14.71;
																		else
																			return 16.01;
																	}
																	else
																	{
																		if(sinr < 28)
																			return 16.16;
																		else
																			return 17.45;
																	}
																}
																else
																	return 18.23;
															}
															else
															{
																if(rsrp < -73)
																	return 18.31;
																else
																	return 17.69;
															}
														}
														else
															return 21.33;
													}
													else
													{
														if(sinr < 23)
														{
															if(rsrp < -75.5)
															{
																if(velocity < 15.33)
																	return 17.09;
																else
																	return 15.62;
															}
															else
																return 11.23;
														}
														else
															return 17.12;
													}
												}
												else
													return 11.5;
											}
											else
												return 10.91;
										}
										else
										{
											if(velocity < 17.175)
											{
												if(sinr < 31.5)
												{
													if(f < 2232.5)
													{
														if(rsrp < -77.5)
															return 20.92;
														else
															return 18.2583333333;
													}
													else
														return 16.08;
												}
												else
													return 15.89;
											}
											else
											{
												if(rsrp < -76)
												{
													if(velocity < 33.405)
													{
														if(velocity < 25.28)
															return 20.38;
														else
															return 19.39;
													}
													else
														return 15.33;
												}
												else
												{
													if(sinr < 20.5)
														return 21.36;
													else
														return 22.08;
												}
											}
										}
									}
								}
								else
								{
									if(payload < 4.5)
										return 16.75;
									else
										return 11.59;
								}
							}
							else
							{
								if(f < 2232.5)
								{
									if(rsrp < -78.5)
									{
										if(rsrq < -6.5)
										{
											if(sinr < 21.5)
												return 29.74;
											else
												return 26.67;
										}
										else
											return 17.5633333333;
									}
									else
									{
										if(velocity < 10.005)
										{
											if(rsrq < -5.5)
											{
												if(rsrp < -76.5)
												{
													if(payload < 6.5)
														return 26.91;
													else
														return 19.05;
												}
												else
												{
													if(sinr < 28.5)
													{
														if(payload < 6.5)
															return 18.48;
														else
															return 16.01;
													}
													else
														return 13.81;
												}
											}
											else
											{
												if(velocity < 5.935)
												{
													if(rsrp < -77.5)
														return 20.4;
													else
													{
														if(sinr < 23.5)
															return 22.82;
														else
															return 22.06;
													}
												}
												else
												{
													if(payload < 6.5)
														return 18.06;
													else
														return 19.13;
												}
											}
										}
										else
										{
											if(rsrq < -4.5)
											{
												if(sinr < 28.5)
												{
													if(velocity < 11.92)
													{
														if(rsrp < -72)
															return 31.15;
														else
															return 22.32;
													}
													else
													{
														if(velocity < 13.15)
														{
															if(velocity < 12.52)
															{
																if(payload < 6.5)
																	return 18.22;
																else
																	return 20.79;
															}
															else
															{
																if(sinr < 19.5)
																	return 18.16;
																else
																	return 17.23;
															}
														}
														else
														{
															if(rsrp < -75.5)
															{
																if(velocity < 13.68)
																	return 23.43;
																else
																{
																	if(payload < 6.5)
																		return 20.17;
																	else
																		return 17.12;
																}
															}
															else
															{
																if(sinr < 21.5)
																	return 27.91;
																else
																{
																	if(rsrp < -71)
																		return 22.34;
																	else
																		return 23.0525;
																}
															}
														}
													}
												}
												else
												{
													if(velocity < 15.945)
													{
														if(sinr < 29.5)
															return 29.18;
														else
														{
															if(rsrp < -76)
																return 25.16;
															else
																return 27.55;
														}
													}
													else
														return 25.45;
												}
											}
											else
											{
												if(payload < 6.5)
												{
													if(sinr < 28.5)
														return 17.9;
													else
														return 19.43;
												}
												else
												{
													if(rsrp < -73)
														return 20.59;
													else
														return 23.38;
												}
											}
										}
									}
								}
								else
								{
									if(rsrq < -6)
										return 15.66;
									else
										return 11.39;
								}
							}
						}
						else
						{
							if(rsrp < -75.5)
							{
								if(sinr < 28.5)
									return 29.24;
								else
									return 21.51;
							}
							else
							{
								if(payload < 4.5)
									return 18.42;
								else
								{
									if(payload < 5.5)
										return 20.67;
									else
										return 22.46;
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
					if(payload < 9.5)
					{
						if(rsrp < -92.5)
						{
							if(payload < 8.5)
							{
								if(sinr < 16)
								{
									if(velocity < 13.365)
									{
										if(rsrp < -94)
										{
											if(sinr < 12)
												return 8.11;
											else
												return 20.11;
										}
										else
											return 17.31;
									}
									else
									{
										if(velocity < 22.24)
										{
											if(rsrp < -96.5)
												return 19.99;
											else
												return 19.33;
										}
										else
											return 23.25;
									}
								}
								else
									return 30.03;
							}
							else
							{
								if(sinr < 15.5)
								{
									if(rsrp < -101)
										return 22.61;
									else
									{
										if(f < 2232.5)
										{
											if(velocity < 11.525)
											{
												if(velocity < 7.76)
													return 14.05;
												else
													return 11.72;
											}
											else
												return 13.97;
										}
										else
										{
											if(velocity < 13.66)
												return 17.99;
											else
												return 16.79;
										}
									}
								}
								else
								{
									if(rsrp < -99.5)
										return 9.45;
									else
										return 10.23;
								}
							}
						}
						else
						{
							if(velocity < 30.485)
							{
								if(payload < 8.5)
								{
									if(velocity < 12.05)
									{
										if(rsrp < -90.5)
										{
											if(rsrp < -91.5)
												return 23.47;
											else
											{
												if(sinr < 16)
													return 25.44;
												else
													return 23.34;
											}
										}
										else
										{
											if(velocity < 1.64)
											{
												if(sinr < 7)
													return 17.52;
												else
												{
													if(rsrp < -86.5)
														return 27.36;
													else
														return 24.44;
												}
											}
											else
											{
												if(rsrq < -6.5)
												{
													if(sinr < 20)
													{
														if(velocity < 6.045)
															return 18.0733333333;
														else
															return 18.75;
													}
													else
														return 16.29;
												}
												else
												{
													if(velocity < 10.455)
													{
														if(rsrq < -5.5)
															return 19.41;
														else
															return 20.61;
													}
													else
														return 22.35;
												}
											}
										}
									}
									else
									{
										if(rsrp < -86.5)
										{
											if(velocity < 15.79)
											{
												if(rsrp < -90.5)
												{
													if(rsrp < -91.5)
														return 15.56;
													else
														return 11.18;
												}
												else
												{
													if(sinr < 10.5)
														return 12.4;
													else
														return 16.484;
												}
											}
											else
											{
												if(sinr < 14)
													return 24.36;
												else
													return 21.23;
											}
										}
										else
										{
											if(sinr < 18.5)
												return 16.71;
											else
												return 11.02;
										}
									}
								}
								else
								{
									if(velocity < 11.615)
									{
										if(rsrp < -86.5)
										{
											if(velocity < 2.675)
											{
												if(f < 2232.5)
													return 18.14;
												else
												{
													if(rsrp < -89)
														return 22.29;
													else
														return 23.14;
												}
											}
											else
											{
												if(velocity < 9.25)
												{
													if(f < 2232.5)
														return 16.3366666667;
													else
														return 15.26;
												}
												else
												{
													if(velocity < 9.605)
													{
														if(rsrp < -89.5)
															return 19.39;
														else
															return 22.19;
													}
													else
													{
														if(rsrp < -87.5)
														{
															if(rsrq < -6.5)
																return 18.24;
															else
															{
																if(rsrp < -88.5)
																	return 19.43;
																else
																	return 18.84;
															}
														}
														else
															return 14.62;
													}
												}
											}
										}
										else
										{
											if(rsrq < -5.5)
												return 22.8;
											else
												return 27.71;
										}
									}
									else
									{
										if(rsrp < -86.5)
										{
											if(rsrp < -90.5)
											{
												if(sinr < 17)
												{
													if(velocity < 14.095)
														return 21.1;
													else
														return 15.5;
												}
												else
													return 30.48;
											}
											else
											{
												if(rsrp < -89.5)
													return 30.06;
												else
												{
													if(sinr < 10)
														return 20.98;
													else
													{
														if(sinr < 15)
															return 31.14;
														else
														{
															if(sinr < 19)
																return 16.75;
															else
																return 26.0466666667;
														}
													}
												}
											}
										}
										else
										{
											if(rsrp < -85)
											{
												if(sinr < 10.5)
													return 20.45;
												else
													return 19.14;
											}
											else
											{
												if(sinr < 25.5)
												{
													if(velocity < 21.195)
														return 20.93;
													else
														return 17.5;
												}
												else
													return 21.92;
											}
										}
									}
								}
							}
							else
								return 29.21;
						}
					}
					else
					{
						if(sinr < 24.5)
						{
							if(velocity < 35.115)
							{
								if(sinr < 8.5)
								{
									if(f < 2232.5)
									{
										if(sinr < 2.5)
											return 23.13;
										else
										{
											if(rsrp < -91.5)
												return 21.6;
											else
												return 20.8766666667;
										}
									}
									else
									{
										if(sinr < 5.5)
											return 14.72;
										else
											return 15.39;
									}
								}
								else
								{
									if(rsrp < -96.5)
									{
										if(sinr < 12.5)
											return 10.5933333333;
										else
											return 19.56;
									}
									else
									{
										if(rsrp < -84.5)
										{
											if(rsrq < -6.5)
											{
												if(rsrp < -86.5)
												{
													if(f < 2232.5)
													{
														if(sinr < 10)
														{
															if(rsrp < -92)
															{
																if(velocity < 16.65)
																	return 26.2;
																else
																	return 23.76;
															}
															else
																return 27.43;
														}
														else
														{
															if(rsrp < -93.5)
																return 18.01;
															else
															{
																if(velocity < 18.485)
																{
																	if(velocity < 10.385)
																		return 23.8;
																	else
																	{
																		if(rsrp < -90.5)
																			return 26.16;
																		else
																			return 24.39;
																	}
																}
																else
																	return 22.25;
															}
														}
													}
													else
													{
														if(sinr < 12.5)
															return 30.41;
														else
															return 34.14;
													}
												}
												else
												{
													if(sinr < 11.5)
														return 19.73;
													else
													{
														if(rsrp < -85.5)
															return 21.35;
														else
															return 22.25;
													}
												}
											}
											else
											{
												if(f < 2232.5)
												{
													if(velocity < 7.765)
													{
														if(sinr < 19.5)
														{
															if(sinr < 16)
															{
																if(rsrp < -88.5)
																	return 25.92;
																else
																	return 22.79;
															}
															else
																return 26.56;
														}
														else
														{
															if(rsrp < -85.5)
																return 16.68;
															else
																return 20.26;
														}
													}
													else
													{
														if(rsrp < -90.5)
															return 32.39;
														else
														{
															if(velocity < 24.07)
																return 31.92;
															else
																return 25.37;
														}
													}
												}
												else
												{
													if(velocity < 10.92)
													{
														if(velocity < 3.955)
														{
															if(sinr < 21.5)
																return 20.0133333333;
															else
																return 17.69;
														}
														else
														{
															if(rsrp < -87.5)
																return 20.24;
															else
																return 26.6;
														}
													}
													else
														return 15.27;
												}
											}
										}
										else
										{
											if(rsrq < -5.5)
											{
												if(sinr < 15.5)
													return 29.98;
												else
													return 14.23;
											}
											else
												return 14.22;
										}
									}
								}
							}
							else
								return 6.05;
						}
						else
						{
							if(velocity < 18.49)
								return 41.78;
							else
								return 34.38;
						}
					}
				}
				else
				{
					if(f < 1384.5)
					{
						if(f < 912)
							return 11.25;
						else
							return 4.46;
					}
					else
					{
						if(velocity < 5.46)
						{
							if(f < 2232.5)
							{
								if(velocity < 1.455)
								{
									if(payload < 8.5)
									{
										if(sinr < 22.5)
											return 22.54;
										else
										{
											if(rsrq < -5.5)
												return 20.56;
											else
												return 18.59;
										}
									}
									else
									{
										if(sinr < 24)
										{
											if(rsrp < -78.5)
												return 23.89;
											else
												return 38.34;
										}
										else
										{
											if(rsrq < -5.5)
											{
												if(sinr < 31.5)
												{
													if(sinr < 30.5)
													{
														if(rsrq < -6.5)
															return 24.18;
														else
														{
															if(rsrp < -76.5)
																return 23.21;
															else
															{
																if(payload < 9.5)
																	return 20.49;
																else
																	return 21.8433333333;
															}
														}
													}
													else
														return 16.99;
												}
												else
													return 27.22;
											}
											else
											{
												if(sinr < 27.5)
													return 29.35;
												else
													return 33.15;
											}
										}
									}
								}
								else
								{
									if(velocity < 4.475)
									{
										if(sinr < 18)
											return 18.59;
										else
											return 23.19;
									}
									else
										return 17.12;
								}
							}
							else
								return 15.19;
						}
						else
						{
							if(payload < 9.5)
							{
								if(rsrq < -6.5)
								{
									if(velocity < 14.67)
									{
										if(velocity < 13.535)
											return 20.28;
										else
											return 23.58;
									}
									else
										return 15.36;
								}
								else
								{
									if(sinr < 20.5)
									{
										if(sinr < 18.5)
										{
											if(f < 2232.5)
											{
												if(rsrp < -79.5)
												{
													if(sinr < 17.5)
													{
														if(payload < 8.5)
														{
															if(rsrp < -81)
															{
																if(rsrp < -82.5)
																	return 20.96;
																else
																{
																	if(rsrq < -5.5)
																		return 22.08;
																	else
																		return 21.14;
																}
															}
															else
																return 23.71;
														}
														else
															return 23.98;
													}
													else
														return 28.03;
												}
												else
												{
													if(rsrp < -77)
														return 28.43;
													else
														return 26.06;
												}
											}
											else
												return 18.32;
										}
										else
										{
											if(rsrp < -80.5)
											{
												if(payload < 8.5)
												{
													if(velocity < 14.93)
														return 35.13;
													else
														return 27.67;
												}
												else
													return 27.51;
											}
											else
											{
												if(payload < 8.5)
													return 38.39;
												else
													return 37.23;
											}
										}
									}
									else
									{
										if(sinr < 21.5)
											return 18.8583333333;
										else
										{
											if(velocity < 8.515)
											{
												if(velocity < 7.33)
													return 28.82;
												else
													return 30.1;
											}
											else
											{
												if(velocity < 12.715)
												{
													if(rsrp < -70.5)
													{
														if(payload < 8.5)
															return 17.76;
														else
															return 19.09;
													}
													else
														return 20.68;
												}
												else
												{
													if(velocity < 24.865)
													{
														if(rsrp < -81.5)
															return 32.02;
														else
														{
															if(velocity < 18.19)
															{
																if(velocity < 15.695)
																{
																	if(velocity < 13.97)
																	{
																		if(sinr < 26)
																		{
																			if(sinr < 23)
																				return 25.54;
																			else
																				return 23.59;
																		}
																		else
																			return 19.08;
																	}
																	else
																	{
																		if(sinr < 26)
																			return 22.97;
																		else
																		{
																			if(sinr < 29.5)
																				return 24.9;
																			else
																			{
																				if(rsrq < -5.5)
																					return 25.84;
																				else
																					return 26.48;
																			}
																		}
																	}
																}
																else
																{
																	if(sinr < 31)
																		return 34.25;
																	else
																		return 29.15;
																}
															}
															else
																return 19.78;
														}
													}
													else
													{
														if(rsrq < -5.5)
															return 18.47;
														else
														{
															if(velocity < 32.89)
																return 22.88;
															else
																return 26.27;
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
								if(f < 2232.5)
								{
									if(rsrp < -74.5)
									{
										if(velocity < 12.365)
										{
											if(velocity < 11.22)
												return 21.96;
											else
											{
												if(sinr < 15.5)
													return 35.18;
												else
													return 39.04;
											}
										}
										else
										{
											if(sinr < 20)
											{
												if(sinr < 17.5)
												{
													if(rsrq < -5.5)
													{
														if(sinr < 15)
														{
															if(rsrp < -77.5)
																return 24.88;
															else
																return 26.93;
														}
														else
															return 29.37;
													}
													else
														return 26.65;
												}
												else
												{
													if(rsrp < -80)
														return 25.43;
													else
														return 24.54;
												}
											}
											else
											{
												if(velocity < 15.225)
												{
													if(rsrq < -5.5)
														return 25.15;
													else
														return 25.89;
												}
												else
												{
													if(sinr < 23.5)
														return 33.68;
													else
														return 31.705;
												}
											}
										}
									}
									else
									{
										if(rsrp < -71)
											return 34.895;
										else
										{
											if(rsrp < -69.5)
												return 32.6057142857;
											else
												return 34.74;
										}
									}
								}
								else
									return 20.71;
							}
						}
					}
				}
			}
		}
	}
}

float tmobile_dl_ns3_tree_1(float payload, float rsrp, float rsrq, float sinr, float velocity, float f)
{
	if(payload < 3.5)
	{
		if(payload < 1.5)
		{
			if(payload < 0.3)
			{
				if(rsrq < -4.5)
				{
					if(rsrp < -72)
					{
						if(rsrq < -6.5)
						{
							if(velocity < 5.405)
							{
								if(velocity < 5.085)
								{
									if(velocity < 0.495)
									{
										if(sinr < 1.5)
											return 5.405;
										else
										{
											if(sinr < 21.5)
											{
												if(rsrq < -10.5)
													return 5.3;
												else
												{
													if(sinr < 10)
													{
														if(rsrp < -95.5)
															return 2.6;
														else
														{
															if(rsrq < -8.5)
															{
																if(rsrp < -89.5)
																	return 4.23;
																else
																	return 3.7;
															}
															else
																return 4.62;
														}
													}
													else
													{
														if(rsrp < -89)
														{
															if(rsrp < -97)
																return 4.1;
															else
																return 4.42;
														}
														else
															return 5.1;
													}
												}
											}
											else
												return 3.03;
										}
									}
									else
									{
										if(velocity < 1.61)
											return 8.08;
										else
										{
											if(rsrq < -9.5)
												return 7.21;
											else
											{
												if(velocity < 2.28)
													return 3.98;
												else
													return 4.562;
											}
										}
									}
								}
								else
									return 38.1;
							}
							else
							{
								if(rsrp < -92.5)
								{
									if(rsrq < -13.5)
									{
										if(rsrp < -105.5)
											return 2.17;
										else
											return 0.72;
									}
									else
									{
										if(sinr < -1)
										{
											if(rsrq < -10.5)
											{
												if(rsrp < -103.5)
													return 2.87;
												else
												{
													if(sinr < -4)
														return 4.68;
													else
														return 3.14;
												}
											}
											else
												return 0.36;
										}
										else
										{
											if(velocity < 29.675)
											{
												if(sinr < 8)
												{
													if(rsrp < -101.5)
													{
														if(rsrp < -103)
														{
															if(rsrp < -107)
																return 3.27;
															else
																return 2.57;
														}
														else
														{
															if(rsrq < -10)
															{
																if(velocity < 13.325)
																	return 4.42;
																else
																	return 2.93;
															}
															else
																return 4;
														}
													}
													else
													{
														if(rsrp < -95)
														{
															if(sinr < 6)
															{
																if(velocity < 8.835)
																	return 5.67;
																else
																	return 5.0483333333;
															}
															else
																return 8.25;
														}
														else
														{
															if(velocity < 12.125)
																return 5.13;
															else
																return 3.43;
														}
													}
												}
												else
												{
													if(rsrp < -102.5)
														return 6.02;
													else
													{
														if(velocity < 12.935)
														{
															if(rsrq < -10.5)
																return 2.89;
															else
															{
																if(rsrq < -8)
																	return 3.94;
																else
																{
																	if(rsrp < -95.5)
																		return 3.7533333333;
																	else
																		return 3.07;
																}
															}
														}
														else
														{
															if(sinr < 10)
																return 2.32;
															else
																return 3.83;
														}
													}
												}
											}
											else
												return 2.48;
										}
									}
								}
								else
								{
									if(sinr < 11)
									{
										if(velocity < 13.74)
										{
											if(velocity < 12.89)
											{
												if(sinr < 4.5)
													return 9.2;
												else
												{
													if(rsrq < -9.5)
														return 3.52;
													else
														return 5.67;
												}
											}
											else
												return 4.21;
										}
										else
										{
											if(rsrq < -9.5)
												return 6.61;
											else
												return 8.1933333333;
										}
									}
									else
									{
										if(velocity < 18.795)
										{
											if(sinr < 14)
											{
												if(rsrp < -83.5)
												{
													if(rsrp < -88)
													{
														if(sinr < 12.5)
															return 4.49;
														else
														{
															if(velocity < 14.115)
																return 6.67;
															else
																return 6.06;
														}
													}
													else
														return 4.4;
												}
												else
													return 2.48;
											}
											else
											{
												if(rsrp < -87.5)
												{
													if(velocity < 9.72)
														return 3.59;
													else
														return 4.79;
												}
												else
												{
													if(f < 2232.5)
													{
														if(velocity < 14.615)
															return 4.9385714286;
														else
														{
															if(sinr < 24)
																return 7.62;
															else
																return 5.13;
														}
													}
													else
														return 4.6;
												}
											}
										}
										else
										{
											if(sinr < 17)
												return 3.86;
											else
												return 3.33;
										}
									}
								}
							}
						}
						else
						{
							if(velocity < 13.135)
							{
								if(rsrp < -93.5)
									return 9.88;
								else
								{
									if(velocity < 12.52)
									{
										if(rsrp < -82.5)
										{
											if(velocity < 0.41)
											{
												if(rsrp < -87)
													return 7.02;
												else
													return 8.33;
											}
											else
											{
												if(rsrp < -85.5)
												{
													if(sinr < 12)
													{
														if(velocity < 11.095)
														{
															if(rsrq < -5.5)
																return 3.92;
															else
																return 4.62;
														}
														else
															return 5.37;
													}
													else
													{
														if(rsrp < -86.5)
														{
															if(sinr < 20)
																return 5.828;
															else
																return 6.84;
														}
														else
															return 5.56;
													}
												}
												else
												{
													if(velocity < 7.09)
														return 4.32;
													else
													{
														if(rsrq < -5.5)
															return 7.69;
														else
															return 6.84;
													}
												}
											}
										}
										else
										{
											if(sinr < 26)
												return 4.5122222222;
											else
												return 5.13;
										}
									}
									else
									{
										if(rsrq < -5.5)
										{
											if(rsrp < -78.5)
											{
												if(f < 2232.5)
													return 4.47;
												else
													return 5.03;
											}
											else
												return 5.485;
										}
										else
										{
											if(velocity < 12.54)
												return 9.52;
											else
											{
												if(rsrp < -86.5)
													return 6.3;
												else
												{
													if(rsrp < -84.5)
														return 8.08;
													else
														return 7.41;
												}
											}
										}
									}
								}
							}
							else
							{
								if(sinr < 11.5)
									return 10.26;
								else
								{
									if(sinr < 12.5)
										return 3.29;
									else
									{
										if(rsrp < -75.5)
										{
											if(sinr < 24.5)
											{
												if(sinr < 22.5)
												{
													if(sinr < 21)
													{
														if(rsrq < -5.5)
														{
															if(velocity < 25.19)
																return 4.26;
															else
																return 4.76;
														}
														else
														{
															if(rsrp < -82.5)
																return 6.2;
															else
															{
																if(sinr < 19)
																	return 5;
																else
																	return 5.93;
															}
														}
													}
													else
														return 6.78;
												}
												else
													return 4.105;
											}
											else
											{
												if(sinr < 26)
												{
													if(rsrq < -5.5)
													{
														if(rsrp < -85)
															return 6.61;
														else
															return 7.14;
													}
													else
														return 4.44;
												}
												else
												{
													if(rsrp < -80)
														return 5.3516666667;
													else
														return 4.85;
												}
											}
										}
										else
											return 7.55;
									}
								}
							}
						}
					}
					else
					{
						if(f < 2232.5)
						{
							if(rsrp < -70.5)
							{
								if(sinr < 26.5)
									return 13.33;
								else
									return 3.57;
							}
							else
							{
								if(rsrq < -5.5)
								{
									if(rsrp < -68)
										return 4.32;
									else
										return 4.82;
								}
								else
									return 6.25;
							}
						}
						else
						{
							if(velocity < 1.595)
								return 22.86;
							else
								return 4.26;
						}
					}
				}
				else
				{
					if(rsrp < -80.5)
						return 4.76;
					else
					{
						if(sinr < 34)
							return 5.44;
						else
							return 22.22;
					}
				}
			}
			else
			{
				if(rsrp < -95.5)
				{
					if(rsrp < -102.5)
					{
						if(f < 1342.5)
							return 8.01;
						else
						{
							if(sinr < 4.5)
							{
								if(payload < 0.75)
									return 0.8825;
								else
								{
									if(rsrq < -10.5)
									{
										if(velocity < 14.14)
											return 6.22;
										else
										{
											if(rsrq < -12.5)
												return 1.43;
											else
												return 3.03;
										}
									}
									else
									{
										if(sinr < 3.5)
											return 2.5;
										else
										{
											if(velocity < 8.2)
												return 2.61;
											else
												return 1.31;
										}
									}
								}
							}
							else
							{
								if(rsrp < -104.5)
								{
									if(rsrp < -106.5)
										return 3.27;
									else
										return 7.64;
								}
								else
								{
									if(payload < 0.75)
										return 1.45;
									else
										return 2.74;
								}
							}
						}
					}
					else
					{
						if(rsrq < -6.5)
						{
							if(velocity < 34.425)
							{
								if(f < 1384.5)
									return 0.54;
								else
								{
									if(velocity < 14.595)
									{
										if(sinr < 1.5)
										{
											if(velocity < 13.27)
											{
												if(rsrq < -10)
												{
													if(rsrq < -12)
													{
														if(rsrq < -13.5)
															return 4.72;
														else
															return 3.61;
													}
													else
														return 7.12;
												}
												else
												{
													if(sinr < -2)
														return 8.95;
													else
														return 10.3033333333;
												}
											}
											else
											{
												if(velocity < 13.65)
												{
													if(sinr < -2.5)
														return 4.82;
													else
														return 1.92;
												}
												else
												{
													if(rsrq < -9.5)
														return 8.96;
													else
														return 3.06;
												}
											}
										}
										else
										{
											if(payload < 0.75)
											{
												if(f < 2232.5)
												{
													if(rsrq < -9.5)
														return 4.46;
													else
													{
														if(velocity < 4.64)
															return 10.42;
														else
														{
															if(velocity < 13.88)
															{
																if(sinr < 7.5)
																{
																	if(velocity < 11.34)
																		return 8.11;
																	else
																		return 8.6;
																}
																else
																{
																	if(rsrp < -98)
																		return 4.05;
																	else
																	{
																		if(rsrq < -8.5)
																			return 7.13;
																		else
																			return 5.81;
																	}
																}
															}
															else
																return 9.03;
														}
													}
												}
												else
													return 3.41;
											}
											else
											{
												if(rsrp < -101.5)
												{
													if(sinr < 7.5)
														return 5.03;
													else
														return 8.37;
												}
												else
												{
													if(sinr < 5.5)
													{
														if(sinr < 4.5)
														{
															if(velocity < 14.4)
																return 3.095;
															else
																return 3.53;
														}
														else
														{
															if(velocity < 11.36)
																return 4.15;
															else
																return 5.35;
														}
													}
													else
													{
														if(rsrq < -8)
														{
															if(rsrp < -99.5)
																return 1.38;
															else
																return 2.77;
														}
														else
															return 3.02;
													}
												}
											}
										}
									}
									else
									{
										if(sinr < 7.5)
										{
											if(rsrp < -97.5)
											{
												if(rsrq < -8)
												{
													if(velocity < 17.33)
													{
														if(rsrq < -10.5)
															return 7.31;
														else
															return 9.64;
													}
													else
													{
														if(payload < 0.75)
														{
															if(rsrq < -11.5)
																return 6.66;
															else
																return 7.56;
														}
														else
															return 7.6233333333;
													}
												}
												else
													return 5.07;
											}
											else
												return 11.75;
										}
										else
										{
											if(velocity < 15.325)
												return 7.72;
											else
												return 3.16;
										}
									}
								}
							}
							else
								return 0.22;
						}
						else
						{
							if(velocity < 33.01)
							{
								if(sinr < 7.5)
									return 10.75;
								else
								{
									if(sinr < 12)
									{
										if(payload < 0.75)
											return 9.64;
										else
											return 4.18;
									}
									else
										return 6.26;
								}
							}
							else
								return 4.5;
						}
					}
				}
				else
				{
					if(payload < 0.75)
					{
						if(sinr < 4)
						{
							if(velocity < 12.19)
							{
								if(sinr < 2)
								{
									if(rsrq < -9.5)
										return 7.89;
									else
										return 5.955;
								}
								else
									return 4.74;
							}
							else
							{
								if(sinr < -1.5)
									return 2.02;
								else
									return 0.72;
							}
						}
						else
						{
							if(f < 1384.5)
								return 2.98;
							else
							{
								if(rsrq < -7.5)
								{
									if(f < 2232.5)
									{
										if(sinr < 14.5)
										{
											if(rsrp < -87.5)
											{
												if(sinr < 12)
												{
													if(velocity < 1.455)
														return 6.91125;
													else
													{
														if(rsrq < -9.5)
															return 4.15;
														else
															return 6.2;
													}
												}
												else
												{
													if(rsrq < -8.5)
														return 8.66;
													else
														return 8.1;
												}
											}
											else
											{
												if(sinr < 8.5)
												{
													if(sinr < 5.5)
														return 11.36;
													else
														return 12.62;
												}
												else
													return 9.39;
											}
										}
										else
										{
											if(rsrp < -93.5)
												return 3.1533333333;
											else
												return 2.61;
										}
									}
									else
									{
										if(sinr < 12.5)
											return 11.63;
										else
											return 7.16;
									}
								}
								else
								{
									if(sinr < 7.5)
									{
										if(sinr < 6)
											return 8.66;
										else
										{
											if(rsrp < -90.5)
												return 2.03;
											else
												return 4.62;
										}
									}
									else
									{
										if(rsrp < -81.5)
										{
											if(velocity < 5.54)
											{
												if(velocity < 4.29)
												{
													if(rsrp < -84.5)
													{
														if(velocity < 2.58)
														{
															if(velocity < 0.94)
															{
																if(rsrp < -85.5)
																	return 6.255;
																else
																	return 7.31;
															}
															else
																return 5.77;
														}
														else
														{
															if(f < 2232.5)
																return 8.39;
															else
																return 6.55;
														}
													}
													else
														return 4.48;
												}
												else
													return 4.09;
											}
											else
											{
												if(rsrp < -93.5)
												{
													if(sinr < 13.5)
														return 11.59;
													else
														return 8.99;
												}
												else
												{
													if(rsrq < -5.5)
													{
														if(rsrp < -82.5)
														{
															if(velocity < 12.515)
															{
																if(rsrq < -6.5)
																{
																	if(sinr < 17)
																		return 4.65;
																	else
																		return 7.93;
																}
																else
																{
																	if(velocity < 11.835)
																	{
																		if(sinr < 11)
																			return 8.7;
																		else
																		{
																			if(f < 2232.5)
																			{
																				if(rsrp < -88)
																					return 8.81;
																				else
																				{
																					if(sinr < 22)
																						return 7.63;
																					else
																						return 8.23;
																				}
																			}
																			else
																				return 6.35;
																		}
																	}
																	else
																		return 4.33;
																}
															}
															else
															{
																if(velocity < 15.02)
																{
																	if(velocity < 13.255)
																		return 8.08;
																	else
																	{
																		if(rsrp < -91.5)
																			return 8.64;
																		else
																		{
																			if(rsrq < -6.5)
																			{
																				if(rsrp < -90)
																					return 11.53;
																				else
																					return 9.37;
																			}
																			else
																				return 10.72;
																		}
																	}
																}
																else
																{
																	if(velocity < 31.65)
																	{
																		if(velocity < 15.245)
																			return 6.27;
																		else
																		{
																			if(sinr < 13)
																				return 8.4633333333;
																			else
																				return 7.78;
																		}
																	}
																	else
																	{
																		if(rsrp < -87.5)
																			return 6.48;
																		else
																			return 5.84;
																	}
																}
															}
														}
														else
															return 11.8;
													}
													else
													{
														if(velocity < 10.76)
															return 8.53;
														else
														{
															if(rsrp < -85.5)
																return 7.6;
															else
															{
																if(rsrp < -83.5)
																	return 5.49;
																else
																{
																	if(sinr < 23)
																		return 6.534;
																	else
																		return 7.26;
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
												if(rsrq < -6)
												{
													if(velocity < 9.065)
														return 14.71;
													else
														return 10.2;
												}
												else
													return 21.16;
											}
											else
											{
												if(sinr < 20.5)
												{
													if(rsrp < -72.5)
													{
														if(rsrq < -6.5)
														{
															if(rsrp < -74)
																return 7.17;
															else
																return 5.46;
														}
														else
														{
															if(velocity < 13.215)
															{
																if(rsrp < -76.5)
																	return 8.4;
																else
																	return 9.24;
															}
															else
															{
																if(rsrp < -75.5)
																	return 6.7;
																else
																	return 8.32;
															}
														}
													}
													else
													{
														if(rsrp < -69.5)
															return 6.02;
														else
															return 5.4;
													}
												}
												else
												{
													if(rsrq < -6.5)
														return 15.62;
													else
													{
														if(rsrp < -70.5)
														{
															if(velocity < 8.305)
																return 12.46;
															else
															{
																if(velocity < 22.35)
																{
																	if(rsrp < -72.5)
																	{
																		if(sinr < 25.5)
																		{
																			if(rsrq < -5.5)
																			{
																				if(f < 2232.5)
																					return 9.46;
																				else
																					return 8.99;
																			}
																			else
																				return 7.95;
																		}
																		else
																		{
																			if(rsrp < -74)
																				return 9.8;
																			else
																				return 11.49;
																		}
																	}
																	else
																		return 7.1;
																}
																else
																	return 7.09;
															}
														}
														else
														{
															if(velocity < 9.87)
																return 6.07;
															else
																return 7.93;
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
						if(sinr < 16.5)
						{
							if(rsrq < -16.5)
								return 0.47;
							else
							{
								if(f < 1384.5)
									return 2.52;
								else
								{
									if(sinr < 5.5)
									{
										if(rsrq < -6.5)
										{
											if(rsrp < -88.5)
											{
												if(velocity < 13.355)
													return 12.05;
												else
													return 9.45;
											}
											else
											{
												if(rsrq < -9.5)
												{
													if(rsrq < -12)
														return 8.7;
													else
														return 7.25;
												}
												else
												{
													if(rsrp < -83.5)
														return 9.34;
													else
														return 9.89;
												}
											}
										}
										else
										{
											if(sinr < 2)
												return 7.07;
											else
												return 6.39;
										}
									}
									else
									{
										if(sinr < 7.5)
										{
											if(sinr < 6.5)
												return 4.6;
											else
												return 5.63;
										}
										else
										{
											if(velocity < 14.47)
											{
												if(velocity < 10.225)
												{
													if(rsrp < -77)
													{
														if(velocity < 9.665)
														{
															if(sinr < 13.5)
															{
																if(rsrq < -5.5)
																{
																	if(sinr < 11)
																	{
																		if(velocity < 9.215)
																		{
																			if(rsrq < -6.5)
																				return 8.6666666667;
																			else
																				return 9.51;
																		}
																		else
																			return 6.6;
																	}
																	else
																	{
																		if(rsrq < -7.5)
																		{
																			if(sinr < 12.5)
																				return 7.45;
																			else
																				return 10.24;
																		}
																		else
																			return 6.82;
																	}
																}
																else
																	return 7.41;
															}
															else
															{
																if(sinr < 15.5)
																	return 6.055;
																else
																{
																	if(rsrq < -5.5)
																		return 9.66;
																	else
																		return 6.8;
																}
															}
														}
														else
															return 15.53;
													}
													else
														return 5.23;
												}
												else
												{
													if(sinr < 8.5)
													{
														if(velocity < 13.28)
															return 9.63;
														else
															return 7.51;
													}
													else
													{
														if(rsrq < -5.5)
														{
															if(velocity < 13.555)
															{
																if(rsrq < -6.5)
																{
																	if(f < 2232.5)
																		return 6.11;
																	else
																		return 5.22;
																}
																else
																{
																	if(rsrp < -89.5)
																		return 2.92;
																	else
																		return 3.83;
																}
															}
															else
															{
																if(rsrq < -6.5)
																	return 6.185;
																else
																	return 5.65;
															}
														}
														else
														{
															if(velocity < 13.14)
															{
																if(rsrp < -85)
																	return 6.36;
																else
																	return 7.7;
															}
															else
																return 10.5;
														}
													}
												}
											}
											else
											{
												if(velocity < 15.22)
													return 14.44;
												else
												{
													if(sinr < 9.5)
													{
														if(velocity < 17.36)
															return 10.27;
														else
															return 9.28;
													}
													else
													{
														if(velocity < 28.895)
														{
															if(sinr < 15.5)
															{
																if(sinr < 13.5)
																{
																	if(rsrp < -88.5)
																		return 7.01;
																	else
																	{
																		if(rsrp < -84.5)
																			return 7.62;
																		else
																			return 7.12;
																	}
																}
																else
																	return 6.26;
															}
															else
																return 9.45;
														}
														else
														{
															if(rsrq < -6)
																return 13.63;
															else
																return 7.55;
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
							if(velocity < 13.82)
							{
								if(velocity < 8.825)
								{
									if(velocity < 0.325)
									{
										if(rsrq < -6.5)
										{
											if(rsrp < -84.5)
												return 12.82;
											else
												return 9.72;
										}
										else
										{
											if(sinr < 29)
											{
												if(sinr < 21.5)
													return 13.45;
												else
													return 10.6733333333;
											}
											else
												return 6.5933333333;
										}
									}
									else
									{
										if(rsrp < -87)
											return 4.3366666667;
										else
										{
											if(f < 2232.5)
											{
												if(velocity < 6.645)
													return 8.3716666667;
												else
													return 7.6233333333;
											}
											else
												return 9.77;
										}
									}
								}
								else
								{
									if(sinr < 29.5)
									{
										if(rsrq < -5.5)
										{
											if(velocity < 11.225)
											{
												if(sinr < 25.5)
													return 7.04;
												else
													return 8.58;
											}
											else
											{
												if(rsrp < -82.5)
												{
													if(rsrp < -88.5)
														return 12.88;
													else
														return 13.91;
												}
												else
													return 18.74;
											}
										}
										else
										{
											if(velocity < 10.95)
												return 21.11;
											else
											{
												if(sinr < 22)
													return 11.03;
												else
													return 12.35;
											}
										}
									}
									else
									{
										if(rsrp < -76.5)
											return 8.03;
										else
											return 6.62;
									}
								}
							}
							else
							{
								if(rsrq < -8.5)
									return 3.15;
								else
								{
									if(rsrp < -88.5)
										return 3.93;
									else
									{
										if(f < 912)
											return 5.44;
										else
										{
											if(sinr < 17.5)
												return 4.63;
											else
											{
												if(velocity < 18.595)
												{
													if(sinr < 23.5)
													{
														if(sinr < 18.5)
															return 9.39;
														else
														{
															if(rsrq < -5.5)
																return 7.58;
															else
																return 8.54;
														}
													}
													else
													{
														if(rsrp < -70.5)
															return 8.962;
														else
															return 10.43;
													}
												}
												else
												{
													if(velocity < 20.91)
														return 12.33;
													else
													{
														if(sinr < 23)
															return 6.23;
														else
															return 10.38;
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
			if(f < 1384.5)
			{
				if(rsrq < -10)
					return 1.24;
				else
				{
					if(velocity < 25.705)
					{
						if(payload < 2.5)
							return 6.02;
						else
							return 7.28;
					}
					else
						return 2.99;
				}
			}
			else
			{
				if(sinr < 8.5)
				{
					if(rsrq < -8.5)
					{
						if(rsrp < -94.5)
						{
							if(velocity < 8.625)
							{
								if(sinr < -0.5)
								{
									if(sinr < -3.5)
										return 4.06;
									else
										return 2.9714285714;
								}
								else
								{
									if(rsrp < -96.5)
										return 3.13;
									else
									{
										if(rsrp < -95.5)
										{
											if(rsrq < -9.5)
												return 10.08;
											else
												return 6.92;
										}
										else
											return 4.89;
									}
								}
							}
							else
							{
								if(velocity < 17.195)
								{
									if(velocity < 13.06)
									{
										if(velocity < 12.39)
										{
											if(rsrp < -96.5)
											{
												if(sinr < 1.5)
												{
													if(rsrp < -98.5)
														return 6.95;
													else
														return 7.82;
												}
												else
												{
													if(velocity < 10.31)
														return 6.24;
													else
														return 5.64;
												}
											}
											else
											{
												if(payload < 2.5)
													return 8.1533333333;
												else
												{
													if(sinr < 2.5)
														return 8.13;
													else
														return 10.51;
												}
											}
										}
										else
											return 17.32;
									}
									else
									{
										if(rsrq < -11.5)
										{
											if(rsrq < -12.5)
												return 1.98;
											else
											{
												if(velocity < 14.695)
													return 3.99;
												else
													return 2.6;
											}
										}
										else
										{
											if(velocity < 14.81)
											{
												if(payload < 2.5)
												{
													if(rsrp < -98)
														return 1.69;
													else
														return 2.87;
												}
												else
												{
													if(rsrp < -96.5)
													{
														if(sinr < 0)
															return 6.31;
														else
															return 4.5216666667;
													}
													else
														return 10.88;
												}
											}
											else
											{
												if(velocity < 15.11)
													return 12.2;
												else
												{
													if(rsrp < -100.5)
														return 10.98;
													else
													{
														if(rsrq < -9.5)
														{
															if(velocity < 15.24)
																return 4.4;
															else
															{
																if(sinr < 7.5)
																	return 7.29;
																else
																	return 8.5;
															}
														}
														else
															return 5.066;
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
										if(rsrq < -10.5)
											return 6.88;
										else
										{
											if(sinr < 3)
												return 4.85;
											else
												return 3.72;
										}
									}
									else
									{
										if(rsrq < -9.5)
										{
											if(rsrq < -11.5)
												return 11.28;
											else
											{
												if(sinr < 2.5)
												{
													if(rsrq < -10.5)
														return 7.76;
													else
														return 7.07;
												}
												else
													return 8.35;
											}
										}
										else
											return 15.26;
									}
								}
							}
						}
						else
						{
							if(rsrq < -10.5)
							{
								if(velocity < 3.075)
								{
									if(payload < 2.5)
										return 9.615;
									else
										return 11.98;
								}
								else
									return 6.668;
							}
							else
							{
								if(rsrp < -87.5)
								{
									if(rsrp < -93)
									{
										if(velocity < 22.435)
											return 7.08;
										else
											return 10.38;
									}
									else
									{
										if(rsrp < -91)
											return 15;
										else
											return 13.49;
									}
								}
								else
								{
									if(rsrp < -81.5)
										return 7.01;
									else
										return 10.57;
								}
							}
						}
					}
					else
					{
						if(rsrp < -92.5)
						{
							if(velocity < 10.945)
							{
								if(velocity < 3.32)
								{
									if(rsrp < -98.5)
										return 5.76;
									else
										return 4.29;
								}
								else
								{
									if(velocity < 9.72)
									{
										if(rsrp < -95.5)
										{
											if(rsrq < -7.5)
												return 9.655;
											else
												return 11.74;
										}
										else
											return 7.2;
									}
									else
									{
										if(rsrp < -95)
										{
											if(rsrp < -97.5)
												return 12.51;
											else
												return 13.1;
										}
										else
											return 9.48;
									}
								}
							}
							else
							{
								if(velocity < 14.995)
								{
									if(velocity < 12.725)
										return 5.24;
									else
										return 6.47;
								}
								else
								{
									if(payload < 2.5)
										return 2.56;
									else
										return 4.98;
								}
							}
						}
						else
						{
							if(sinr < 7.5)
							{
								if(payload < 2.5)
								{
									if(rsrq < -7.5)
									{
										if(velocity < 12.58)
										{
											if(sinr < 5)
												return 8.71;
											else
												return 6.95;
										}
										else
											return 10.11;
									}
									else
									{
										if(f < 2232.5)
										{
											if(sinr < 6.5)
												return 11.04;
											else
												return 12.47;
										}
										else
											return 9.79;
									}
								}
								else
								{
									if(velocity < 4.335)
										return 13.26;
									else
									{
										if(rsrp < -86)
										{
											if(velocity < 13.645)
												return 8.65;
											else
												return 11.33;
										}
										else
										{
											if(rsrp < -82.5)
											{
												if(velocity < 21.395)
												{
													if(f < 2232.5)
														return 11.85;
													else
														return 11.1;
												}
												else
													return 10.05;
											}
											else
												return 13.66;
										}
									}
								}
							}
							else
							{
								if(rsrp < -85)
								{
									if(rsrp < -89)
										return 12.95;
									else
										return 8.93;
								}
								else
									return 13.34;
							}
						}
					}
				}
				else
				{
					if(payload < 2.5)
					{
						if(rsrp < -92.5)
						{
							if(sinr < 17)
							{
								if(velocity < 11.845)
								{
									if(velocity < 5.625)
										return 4.79;
									else
										return 5.88;
								}
								else
								{
									if(sinr < 9.5)
										return 7.46;
									else
										return 6.9133333333;
								}
							}
							else
							{
								if(rsrq < -6.5)
								{
									if(sinr < 19.5)
										return 5.53;
									else
									{
										if(rsrp < -100)
											return 7.46;
										else
											return 8.66;
									}
								}
								else
									return 11;
							}
						}
						else
						{
							if(rsrp < -77.5)
							{
								if(rsrp < -86.5)
								{
									if(velocity < 15.225)
									{
										if(rsrp < -91.5)
										{
											if(sinr < 14)
												return 11.13;
											else
												return 6.54;
										}
										else
										{
											if(rsrq < -9.5)
												return 14.02;
											else
											{
												if(rsrq < -8.5)
												{
													if(sinr < 15.5)
														return 7.18;
													else
														return 10.32;
												}
												else
												{
													if(rsrq < -7.5)
													{
														if(rsrp < -89)
															return 14.76;
														else
															return 11.85;
													}
													else
													{
														if(sinr < 10.5)
															return 13.4;
														else
														{
															if(sinr < 28.5)
															{
																if(rsrp < -89.5)
																{
																	if(velocity < 9.37)
																		return 11.55;
																	else
																	{
																		if(sinr < 25)
																			return 10.9933333333;
																		else
																			return 9.74;
																	}
																}
																else
																{
																	if(velocity < 6.44)
																	{
																		if(sinr < 18)
																			return 8.27;
																		else
																			return 9;
																	}
																	else
																	{
																		if(velocity < 14.265)
																		{
																			if(rsrq < -6.5)
																			{
																				if(velocity < 10.96)
																					return 9.98;
																				else
																					return 13.41;
																			}
																			else
																			{
																				if(rsrp < -88)
																					return 10.83;
																				else
																				{
																					if(velocity < 13.795)
																						return 9.3;
																					else
																						return 10.51;
																				}
																			}
																		}
																		else
																		{
																			if(rsrp < -87.5)
																				return 9.55;
																			else
																				return 10.7;
																		}
																	}
																}
															}
															else
																return 7.32;
														}
													}
												}
											}
										}
									}
									else
									{
										if(sinr < 13.5)
											return 11.42;
										else
										{
											if(rsrp < -89.5)
												return 12.3;
											else
												return 14.1342857143;
										}
									}
								}
								else
								{
									if(velocity < 14.485)
									{
										if(velocity < 13.15)
										{
											if(sinr < 10.5)
												return 7.21;
											else
											{
												if(rsrp < -81.5)
												{
													if(velocity < 9.28)
													{
														if(sinr < 20.5)
														{
															if(rsrp < -85)
																return 9.85;
															else
																return 8.765;
														}
														else
														{
															if(rsrp < -84)
																return 7.88;
															else
																return 7.2366666667;
														}
													}
													else
													{
														if(velocity < 11.74)
															return 9.71;
														else
														{
															if(rsrp < -82.5)
																return 11.68;
															else
																return 9.41;
														}
													}
												}
												else
												{
													if(rsrq < -5.5)
													{
														if(f < 2232.5)
														{
															if(sinr < 15.5)
																return 8.64;
															else
															{
																if(rsrq < -6.5)
																	return 10.4866666667;
																else
																	return 11.51;
															}
														}
														else
															return 8.97;
													}
													else
													{
														if(sinr < 16.5)
															return 11.59;
														else
															return 13.68;
													}
												}
											}
										}
										else
										{
											if(sinr < 17.5)
												return 6.69;
											else
												return 6;
										}
									}
									else
									{
										if(rsrq < -6.5)
										{
											if(sinr < 14.5)
												return 12.23;
											else
											{
												if(sinr < 17)
													return 13.645;
												else
													return 14.49;
											}
										}
										else
										{
											if(rsrp < -80.5)
											{
												if(rsrp < -84.5)
													return 12.99;
												else
												{
													if(sinr < 31.5)
													{
														if(sinr < 25)
															return 10.14;
														else
															return 6.2433333333;
													}
													else
													{
														if(velocity < 17.725)
															return 12.49;
														else
															return 9.35;
													}
												}
											}
											else
												return 13.385;
										}
									}
								}
							}
							else
							{
								if(rsrp < -71)
								{
									if(rsrq < -6.5)
										return 25.52;
									else
									{
										if(velocity < 14.025)
										{
											if(sinr < 19)
												return 14.94;
											else
											{
												if(sinr < 22.5)
													return 9.86;
												else
												{
													if(sinr < 26.5)
														return 14.72;
													else
													{
														if(sinr < 31)
															return 12.41;
														else
															return 13.75;
													}
												}
											}
										}
										else
										{
											if(sinr < 27.5)
												return 21.51;
											else
												return 17.92;
										}
									}
								}
								else
								{
									if(rsrq < -6.5)
									{
										if(sinr < 22)
											return 9;
										else
											return 6.98;
									}
									else
									{
										if(rsrp < -68.5)
											return 22.54;
										else
										{
											if(rsrq < -4.5)
												return 9.55;
											else
												return 11.97;
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
							if(rsrq < -5.5)
							{
								if(rsrq < -6.5)
								{
									if(velocity < 14.555)
									{
										if(velocity < 12.335)
										{
											if(rsrp < -96)
											{
												if(rsrq < -9)
													return 8.18;
												else
												{
													if(rsrp < -100.5)
														return 5.67;
													else
														return 6.23;
												}
											}
											else
											{
												if(rsrp < -90)
												{
													if(velocity < 11.1)
													{
														if(sinr < 12.5)
														{
															if(rsrp < -92.5)
															{
																if(sinr < 9.5)
																	return 15.41;
																else
																	return 10.11;
															}
															else
																return 9.235;
														}
														else
														{
															if(rsrq < -7.5)
																return 14.52;
															else
																return 11.06;
														}
													}
													else
														return 14.6;
												}
												else
													return 7.46;
											}
										}
										else
										{
											if(rsrp < -94)
												return 3.87;
											else
												return 6.39;
										}
									}
									else
										return 14.69;
								}
								else
								{
									if(f < 2232.5)
									{
										if(velocity < 14.79)
											return 23.98;
										else
										{
											if(velocity < 33.54)
											{
												if(velocity < 22.76)
													return 11.4;
												else
												{
													if(rsrp < -102)
														return 10.28;
													else
														return 9.51;
												}
											}
											else
												return 13.58;
										}
									}
									else
									{
										if(rsrp < -93)
										{
											if(velocity < 14.97)
												return 11.67;
											else
												return 10.54;
										}
										else
										{
											if(rsrp < -90.5)
												return 9.1;
											else
											{
												if(sinr < 14.5)
													return 11.02;
												else
													return 9.1;
											}
										}
									}
								}
							}
							else
								return 4.75;
						}
						else
						{
							if(rsrp < -77.5)
							{
								if(rsrp < -79.5)
								{
									if(rsrp < -85.5)
									{
										if(rsrp < -87.5)
										{
											if(sinr < 23.5)
											{
												if(velocity < 14.85)
													return 12.85;
												else
												{
													if(rsrq < -6)
														return 15.36;
													else
														return 14.41;
												}
											}
											else
												return 15.83;
										}
										else
										{
											if(velocity < 13.28)
											{
												if(velocity < 8.93)
													return 12.77;
												else
													return 13.4833333333;
											}
											else
											{
												if(velocity < 22.685)
												{
													if(rsrq < -6.5)
														return 22.41;
													else
													{
														if(f < 2232.5)
															return 21.78;
														else
															return 14.71;
													}
												}
												else
													return 10.02;
											}
										}
									}
									else
									{
										if(velocity < 15.405)
										{
											if(velocity < 11.55)
											{
												if(velocity < 10.73)
												{
													if(rsrp < -81.5)
													{
														if(rsrq < -8.5)
															return 12.76;
														else
														{
															if(velocity < 9.7)
															{
																if(rsrq < -5.5)
																{
																	if(sinr < 29)
																	{
																		if(rsrp < -83)
																			return 15.12;
																		else
																			return 13.96;
																	}
																	else
																		return 14.97;
																}
																else
																	return 13.78;
															}
															else
																return 16.3;
														}
													}
													else
													{
														if(rsrq < -6.5)
															return 11.85;
														else
															return 12.54;
													}
												}
												else
													return 22.14;
											}
											else
											{
												if(sinr < 14.5)
													return 16.0933333333;
												else
												{
													if(sinr < 29)
													{
														if(rsrp < -83.5)
														{
															if(velocity < 13.17)
																return 12.42;
															else
																return 11.63;
														}
														else
														{
															if(rsrq < -7.5)
																return 12.13;
															else
																return 10.64;
														}
													}
													else
														return 12.96;
												}
											}
										}
										else
										{
											if(rsrq < -7)
												return 21.41;
											else
											{
												if(sinr < 27.5)
												{
													if(sinr < 26.5)
													{
														if(velocity < 16.06)
															return 17.48;
														else
														{
															if(velocity < 33.88)
															{
																if(velocity < 24.22)
																	return 14.74;
																else
																	return 13.59;
															}
															else
																return 14.79;
														}
													}
													else
													{
														if(rsrp < -84)
															return 10.65;
														else
															return 25;
													}
												}
												else
													return 11.84;
											}
										}
									}
								}
								else
								{
									if(velocity < 10.925)
									{
										if(rsrq < -5.5)
											return 22.12;
										else
											return 21.47;
									}
									else
									{
										if(velocity < 26.61)
										{
											if(sinr < 23.5)
												return 15.71;
											else
												return 14.45;
										}
										else
											return 19.83;
									}
								}
							}
							else
							{
								if(rsrq < -6.5)
								{
									if(f < 2232.5)
										return 15.83;
									else
									{
										if(sinr < 14)
											return 15.24;
										else
											return 13.38;
									}
								}
								else
								{
									if(velocity < 11.405)
									{
										if(velocity < 5.415)
											return 11.19;
										else
											return 8.67;
									}
									else
									{
										if(velocity < 12.4)
											return 16.11;
										else
										{
											if(velocity < 14.92)
											{
												if(velocity < 12.97)
													return 11.7;
												else
												{
													if(velocity < 13.17)
														return 10.66;
													else
														return 10.005;
												}
											}
											else
												return 13.47;
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
		if(rsrp < -88.5)
		{
			if(rsrq < -7.5)
			{
				if(payload < 5.5)
				{
					if(rsrq < -12.5)
						return 1.43;
					else
					{
						if(f < 1342.5)
							return 2.46;
						else
						{
							if(rsrp < -102.5)
							{
								if(sinr < 1.5)
								{
									if(rsrp < -105.5)
									{
										if(rsrp < -108.5)
											return 2.21;
										else
										{
											if(rsrq < -10.5)
											{
												if(payload < 4.5)
													return 7.88;
												else
													return 4.19;
											}
											else
												return 11.97;
										}
									}
									else
									{
										if(rsrp < -103.5)
											return 15.79;
										else
											return 10.23;
									}
								}
								else
								{
									if(rsrp < -104.5)
									{
										if(payload < 4.5)
										{
											if(rsrq < -9.5)
											{
												if(rsrq < -10.5)
													return 9.28;
												else
													return 10.22;
											}
											else
											{
												if(velocity < 15.13)
													return 8.76;
												else
													return 5.47;
											}
										}
										else
											return 5.52;
									}
									else
									{
										if(velocity < 8.555)
											return 2.96;
										else
										{
											if(payload < 4.5)
											{
												if(rsrq < -10.5)
													return 6.01;
												else
													return 4.974;
											}
											else
												return 8;
										}
									}
								}
							}
							else
							{
								if(sinr < 3.5)
								{
									if(velocity < 14.68)
									{
										if(velocity < 9.065)
										{
											if(velocity < 1.25)
												return 5.55;
											else
											{
												if(rsrp < -94)
													return 11.44;
												else
												{
													if(velocity < 5.755)
														return 9.3066666667;
													else
														return 11.13;
												}
											}
										}
										else
										{
											if(rsrp < -95.5)
											{
												if(rsrq < -10)
												{
													if(rsrq < -11.5)
														return 5.39;
													else
													{
														if(sinr < 0)
															return 5.78;
														else
															return 9.08;
													}
												}
												else
												{
													if(rsrq < -8.5)
														return 2.98;
													else
														return 5.39;
												}
											}
											else
											{
												if(rsrq < -11.5)
													return 9.28;
												else
												{
													if(rsrq < -10.5)
														return 12.95;
													else
														return 10.03;
												}
											}
										}
									}
									else
									{
										if(rsrp < -98.5)
										{
											if(rsrq < -8.5)
												return 12.57;
											else
												return 13.2;
										}
										else
										{
											if(velocity < 31.745)
											{
												if(sinr < 0.5)
													return 10.59;
												else
												{
													if(velocity < 16.98)
														return 11.98;
													else
														return 12.82;
												}
											}
											else
												return 6.89;
										}
									}
								}
								else
								{
									if(sinr < 12.5)
									{
										if(rsrp < -97.5)
										{
											if(sinr < 10.5)
											{
												if(payload < 4.5)
												{
													if(sinr < 5.5)
														return 18.33;
													else
													{
														if(sinr < 7.5)
															return 8.93;
														else
															return 14.6875;
													}
												}
												else
												{
													if(rsrq < -10.5)
														return 9.9;
													else
													{
														if(rsrp < -101)
															return 10.47;
														else
														{
															if(rsrq < -9.5)
																return 16.79;
															else
															{
																if(sinr < 7.5)
																	return 12.53;
																else
																	return 15.1866666667;
															}
														}
													}
												}
											}
											else
												return 5.43;
										}
										else
										{
											if(sinr < 7.5)
											{
												if(payload < 4.5)
												{
													if(velocity < 7.25)
														return 8.85;
													else
													{
														if(rsrp < -95.5)
															return 11.81;
														else
														{
															if(rsrp < -93)
																return 17.34;
															else
															{
																if(rsrq < -9)
																{
																	if(rsrp < -90.5)
																		return 13.34;
																	else
																		return 15.79;
																}
																else
																	return 13.14;
															}
														}
													}
												}
												else
												{
													if(rsrp < -94)
													{
														if(rsrq < -8.5)
														{
															if(rsrq < -9.5)
																return 5.42;
															else
																return 7.98;
														}
														else
															return 12.78;
													}
													else
														return 10.47;
												}
											}
											else
											{
												if(rsrp < -91.5)
												{
													if(sinr < 10.5)
													{
														if(rsrq < -8.5)
														{
															if(rsrq < -9.5)
															{
																if(rsrq < -10.5)
																{
																	if(velocity < 6.485)
																		return 11.96;
																	else
																		return 12.91;
																}
																else
																	return 14.31;
															}
															else
																return 19.27;
														}
														else
														{
															if(sinr < 9)
																return 11.83;
															else
																return 9.74;
														}
													}
													else
													{
														if(rsrp < -94)
															return 12.72;
														else
															return 15.64;
													}
												}
												else
												{
													if(rsrp < -89.5)
													{
														if(rsrp < -90.5)
														{
															if(payload < 4.5)
																return 9.35;
															else
																return 8.8;
														}
														else
														{
															if(payload < 4.5)
																return 10.49;
															else
																return 11.34;
														}
													}
													else
													{
														if(sinr < 10.5)
															return 11.58;
														else
															return 16.8;
													}
												}
											}
										}
									}
									else
									{
										if(sinr < 21)
										{
											if(payload < 4.5)
												return 14.16;
											else
											{
												if(rsrp < -96)
													return 14.91;
												else
												{
													if(rsrq < -8.5)
													{
														if(velocity < 2.565)
															return 15.05;
														else
														{
															if(velocity < 19.94)
																return 22.14;
															else
																return 20.04;
														}
													}
													else
														return 22.06;
												}
											}
										}
										else
										{
											if(rsrp < -93)
											{
												if(rsrq < -8.5)
													return 13.16;
												else
													return 15.75;
											}
											else
											{
												if(rsrq < -8.5)
													return 11.24;
												else
													return 6.3;
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
					if(sinr < 9.5)
					{
						if(rsrq < -12.5)
						{
							if(velocity < 1.53)
								return 3.63;
							else
							{
								if(sinr < 0.5)
								{
									if(velocity < 9)
									{
										if(rsrp < -101.5)
										{
											if(payload < 6.5)
												return 9.32;
											else
												return 10.23;
										}
										else
											return 6.59;
									}
									else
										return 4.8;
								}
								else
								{
									if(sinr < 2.5)
										return 10.58;
									else
										return 11.91;
								}
							}
						}
						else
						{
							if(rsrp < -103.5)
							{
								if(sinr < 0.5)
								{
									if(sinr < -4.5)
										return 2.91;
									else
									{
										if(velocity < 10.42)
										{
											if(payload < 9)
											{
												if(rsrp < -108.5)
													return 21.81;
												else
													return 19.02;
											}
											else
												return 9.46;
										}
										else
										{
											if(sinr < -3.5)
												return 18.13;
											else
											{
												if(rsrp < -105.5)
												{
													if(payload < 9.5)
														return 9.7;
													else
														return 10.28;
												}
												else
												{
													if(velocity < 14.1)
														return 11.79;
													else
														return 10.38;
												}
											}
										}
									}
								}
								else
								{
									if(velocity < 2.555)
									{
										if(payload < 9)
											return 8.11;
										else
											return 4.79;
									}
									else
									{
										if(rsrp < -106.5)
										{
											if(rsrq < -8.5)
											{
												if(rsrq < -9.5)
												{
													if(rsrq < -10.5)
														return 10.68;
													else
														return 12.06;
												}
												else
													return 14.22;
											}
											else
												return 8.82;
										}
										else
										{
											if(velocity < 15.975)
											{
												if(velocity < 6.735)
													return 10.55;
												else
												{
													if(rsrp < -104.5)
													{
														if(rsrq < -11.5)
															return 7.62;
														else
														{
															if(payload < 9.5)
																return 8.8;
															else
																return 8.15;
														}
													}
													else
													{
														if(sinr < 2)
															return 9.62;
														else
															return 8.89;
													}
												}
											}
											else
												return 14.42;
										}
									}
								}
							}
							else
							{
								if(sinr < -1.5)
								{
									if(rsrp < -101.5)
									{
										if(velocity < 6.95)
											return 12.49;
										else
											return 14.3775;
									}
									else
									{
										if(rsrq < -10.5)
										{
											if(rsrq < -11.5)
											{
												if(rsrp < -99.5)
													return 14.63;
												else
												{
													if(sinr < -2.5)
														return 8.755;
													else
														return 12.68;
												}
											}
											else
											{
												if(payload < 7)
													return 6.54;
												else
												{
													if(velocity < 12.05)
													{
														if(velocity < 10.805)
															return 8.93;
														else
															return 10.6;
													}
													else
														return 5.08;
												}
											}
										}
										else
											return 14.39;
									}
								}
								else
								{
									if(f < 1384.5)
										return 2.97;
									else
									{
										if(velocity < 12.79)
										{
											if(velocity < 12.37)
											{
												if(f < 2232.5)
												{
													if(velocity < 12.285)
													{
														if(payload < 8.5)
														{
															if(rsrq < -8.5)
															{
																if(rsrp < -94.5)
																{
																	if(rsrq < -9.5)
																	{
																		if(rsrp < -100)
																			return 11.05;
																		else
																		{
																			if(rsrp < -97)
																			{
																				if(payload < 7.5)
																				{
																					if(sinr < 2.5)
																						return 22.21;
																					else
																						return 21.16;
																				}
																				else
																					return 19.79;
																			}
																			else
																			{
																				if(rsrp < -95.5)
																					return 16.54;
																				else
																					return 17.94;
																			}
																		}
																	}
																	else
																	{
																		if(payload < 7.5)
																		{
																			if(sinr < 7)
																				return 11.14;
																			else
																			{
																				if(sinr < 8.5)
																					return 20.07;
																				else
																					return 15.79;
																			}
																		}
																		else
																			return 19.33;
																	}
																}
																else
																{
																	if(payload < 6.5)
																	{
																		if(sinr < -0.5)
																			return 15.93;
																		else
																		{
																			if(velocity < 6.665)
																			{
																				if(sinr < 8.5)
																				{
																					if(rsrp < -93.5)
																						return 12.31;
																					else
																					{
																						if(rsrp < -89.5)
																						{
																							if(rsrp < -92)
																								return 10.47;
																							else
																							{
																								if(sinr < 7.5)
																									return 10.4;
																								else
																									return 9.89;
																							}
																						}
																						else
																							return 11.06;
																					}
																				}
																				else
																					return 12.29;
																			}
																			else
																				return 10.23;
																		}
																	}
																	else
																	{
																		if(velocity < 9.44)
																		{
																			if(payload < 7.5)
																			{
																				if(velocity < 6.92)
																				{
																					if(rsrp < -90.5)
																					{
																						if(rsrp < -92.5)
																							return 12.73;
																						else
																							return 17.86;
																					}
																					else
																					{
																						if(sinr < 5)
																							return 13.52;
																						else
																							return 10.39;
																					}
																				}
																				else
																					return 9.16;
																			}
																			else
																			{
																				if(sinr < 7.5)
																				{
																					if(velocity < 0.53)
																					{
																						if(rsrq < -10.5)
																							return 15.67;
																						else
																							return 14.252;
																					}
																					else
																						return 11.87;
																				}
																				else
																					return 11.65;
																			}
																		}
																		else
																			return 20.39;
																	}
																}
															}
															else
															{
																if(velocity < 6.675)
																{
																	if(payload < 6.5)
																		return 12.12;
																	else
																	{
																		if(rsrp < -94.5)
																		{
																			if(payload < 7.5)
																				return 4.54;
																			else
																				return 9.47;
																		}
																		else
																			return 12.93;
																	}
																}
																else
																{
																	if(velocity < 10.72)
																	{
																		if(velocity < 9.985)
																		{
																			if(payload < 7.5)
																				return 19.74;
																			else
																				return 19.05;
																		}
																		else
																			return 16.26;
																	}
																	else
																		return 23.05;
																}
															}
														}
														else
														{
															if(rsrp < -95)
															{
																if(payload < 9.5)
																{
																	if(sinr < 5)
																		return 9.1925;
																	else
																		return 10.8;
																}
																else
																{
																	if(sinr < 5.5)
																	{
																		if(velocity < 9.92)
																		{
																			if(rsrp < -97.5)
																			{
																				if(velocity < 2.705)
																					return 12.72;
																				else
																					return 11.385;
																			}
																			else
																				return 9.47;
																		}
																		else
																			return 13.5;
																	}
																	else
																	{
																		if(sinr < 6.5)
																			return 16.78;
																		else
																			return 14.95;
																	}
																}
															}
															else
															{
																if(velocity < 7.53)
																{
																	if(velocity < 3.63)
																	{
																		if(rsrp < -93)
																		{
																			if(rsrq < -9.5)
																				return 16.86;
																			else
																				return 13.25;
																		}
																		else
																			return 17.435;
																	}
																	else
																		return 11.97;
																}
																else
																	return 18.47;
															}
														}
													}
													else
													{
														if(payload < 7)
															return 7.27;
														else
															return 10.36;
													}
												}
												else
												{
													if(velocity < 8.415)
														return 24.3;
													else
													{
														if(velocity < 10.76)
															return 12.41;
														else
														{
															if(rsrq < -10)
																return 15.1;
															else
																return 16.76;
														}
													}
												}
											}
											else
											{
												if(payload < 8)
													return 21.92;
												else
												{
													if(rsrq < -9.5)
														return 15.59;
													else
														return 14.67;
												}
											}
										}
										else
										{
											if(rsrp < -94.5)
											{
												if(sinr < 7)
												{
													if(payload < 8.5)
													{
														if(velocity < 18.005)
														{
															if(sinr < 0.5)
															{
																if(payload < 7)
																	return 15.55;
																else
																	return 13.23;
															}
															else
															{
																if(rsrp < -102.5)
																	return 7.02;
																else
																{
																	if(payload < 7.5)
																	{
																		if(rsrq < -9)
																		{
																			if(payload < 6.5)
																			{
																				if(velocity < 14.495)
																				{
																					if(sinr < 2.5)
																						return 9.19;
																					else
																						return 9.78;
																				}
																				else
																					return 10.61;
																			}
																			else
																			{
																				if(rsrp < -96.5)
																				{
																					if(velocity < 14.03)
																						return 10.36;
																					else
																					{
																						if(rsrq < -11.5)
																							return 13.44;
																						else
																							return 14.63;
																					}
																				}
																				else
																					return 14.21;
																			}
																		}
																		else
																			return 16.68;
																	}
																	else
																	{
																		if(rsrq < -10.5)
																			return 10.4;
																		else
																		{
																			if(velocity < 15.545)
																				return 8.46;
																			else
																				return 7.92;
																		}
																	}
																}
															}
														}
														else
														{
															if(rsrp < -97)
															{
																if(rsrp < -100.5)
																	return 19.34;
																else
																	return 16.53;
															}
															else
																return 7.38;
														}
													}
													else
													{
														if(rsrp < -97.5)
														{
															if(rsrq < -8.5)
															{
																if(velocity < 17.145)
																	return 19.46;
																else
																	return 18.35;
															}
															else
															{
																if(velocity < 23.235)
																	return 14.79;
																else
																	return 10.91;
															}
														}
														else
														{
															if(velocity < 15.875)
															{
																if(sinr < 0)
																	return 10.94;
																else
																{
																	if(rsrq < -10.5)
																		return 22.2;
																	else
																		return 20.69;
																}
															}
															else
															{
																if(payload < 9.5)
																	return 11.89;
																else
																	return 10.53;
															}
														}
													}
												}
												else
												{
													if(velocity < 24.07)
													{
														if(payload < 8)
															return 5.36;
														else
														{
															if(payload < 9.5)
																return 7.74;
															else
																return 9.13;
														}
													}
													else
														return 9.23;
												}
											}
											else
											{
												if(payload < 6.5)
													return 10.57;
												else
												{
													if(velocity < 14.4)
														return 10.58;
													else
													{
														if(sinr < 2.5)
														{
															if(payload < 9.5)
															{
																if(payload < 8.5)
																	return 18.39;
																else
																	return 16.21;
															}
															else
																return 14.02;
														}
														else
														{
															if(rsrp < -91.5)
															{
																if(rsrp < -93.5)
																	return 17.09;
																else
																{
																	if(payload < 9)
																		return 19.84;
																	else
																	{
																		if(rsrq < -9.5)
																			return 16.87;
																		else
																			return 22.55;
																	}
																}
															}
															else
																return 16.2866666667;
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
						if(f < 2232.5)
						{
							if(velocity < 29.75)
							{
								if(payload < 6.5)
								{
									if(rsrp < -97)
										return 18.33;
									else
									{
										if(rsrp < -90.5)
										{
											if(velocity < 8.055)
											{
												if(rsrp < -92.5)
													return 8.76;
												else
													return 15.58;
											}
											else
												return 8.87;
										}
										else
											return 14.79;
									}
								}
								else
								{
									if(velocity < 1.045)
									{
										if(rsrp < -93.5)
										{
											if(sinr < 12)
												return 20.13;
											else
												return 22.48;
										}
										else
										{
											if(rsrp < -92.5)
												return 13.67;
											else
											{
												if(rsrp < -91.5)
													return 19.68;
												else
												{
													if(sinr < 11)
														return 21.66;
													else
														return 12.03;
												}
											}
										}
									}
									else
									{
										if(velocity < 4.25)
											return 6.04;
										else
										{
											if(velocity < 11.865)
											{
												if(sinr < 12.5)
													return 16.38;
												else
												{
													if(payload < 9)
														return 20.54;
													else
														return 18.11;
												}
											}
											else
											{
												if(velocity < 14.58)
												{
													if(payload < 7.5)
													{
														if(rsrp < -96.5)
															return 11.46;
														else
															return 12.59;
													}
													else
													{
														if(rsrp < -100)
															return 11.3;
														else
															return 10.4;
													}
												}
												else
												{
													if(rsrp < -90)
														return 14.5825;
													else
													{
														if(payload < 9)
															return 16.64;
														else
															return 17.97;
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
									return 19.58;
								else
									return 24.43;
							}
						}
						else
						{
							if(sinr < 12.5)
							{
								if(rsrp < -89.5)
								{
									if(rsrp < -90.5)
									{
										if(sinr < 11)
											return 21.11;
										else
											return 17.67;
									}
									else
										return 16.95;
								}
								else
									return 12.11;
							}
							else
							{
								if(velocity < 4.455)
									return 19.07;
								else
									return 19.5433333333;
							}
						}
					}
				}
			}
			else
			{
				if(payload < 7.5)
				{
					if(velocity < 11.57)
					{
						if(rsrq < -5.5)
						{
							if(velocity < 3.295)
							{
								if(rsrq < -6.5)
								{
									if(sinr < 10.5)
										return 12.55;
									else
									{
										if(payload < 6.5)
										{
											if(f < 2232.5)
											{
												if(sinr < 17.5)
													return 16.41;
												else
													return 18.98;
											}
											else
												return 13.36;
										}
										else
										{
											if(rsrp < -92)
												return 16.53;
											else
											{
												if(rsrp < -90.5)
													return 13.45;
												else
													return 15.77;
											}
										}
									}
								}
								else
								{
									if(rsrp < -93)
										return 24.12;
									else
									{
										if(sinr < 23.5)
										{
											if(sinr < 16)
												return 13.59;
											else
											{
												if(sinr < 22)
												{
													if(rsrp < -89.5)
													{
														if(payload < 6)
														{
															if(sinr < 20)
																return 16.65;
															else
																return 18.82;
														}
														else
															return 15.66;
													}
													else
														return 10.56;
												}
												else
													return 16.63;
											}
										}
										else
										{
											if(rsrp < -90.5)
												return 21.19;
											else
												return 19.24;
										}
									}
								}
							}
							else
							{
								if(sinr < 24)
								{
									if(sinr < 19)
									{
										if(rsrp < -95.5)
										{
											if(velocity < 10.44)
											{
												if(payload < 6.5)
													return 20.36;
												else
													return 18.9;
											}
											else
												return 23.42;
										}
										else
										{
											if(sinr < 16.5)
											{
												if(sinr < 6.5)
												{
													if(rsrp < -89.5)
														return 23.52;
													else
														return 19.92;
												}
												else
												{
													if(rsrp < -90.5)
													{
														if(f < 2232.5)
														{
															if(payload < 5)
															{
																if(rsrp < -92)
																	return 17.25;
																else
																{
																	if(velocity < 10.31)
																		return 14.65;
																	else
																		return 17.37;
																}
															}
															else
															{
																if(rsrp < -94.5)
																	return 15.935;
																else
																	return 16.44;
															}
														}
														else
														{
															if(payload < 5.5)
																return 17.895;
															else
																return 21.09;
														}
													}
													else
													{
														if(rsrq < -6.5)
															return 17.21;
														else
															return 11.79;
													}
												}
											}
											else
												return 22.91;
										}
									}
									else
										return 10.17;
								}
								else
								{
									if(velocity < 7.41)
										return 19.99;
									else
										return 26.34;
								}
							}
						}
						else
						{
							if(rsrp < -92.5)
							{
								if(velocity < 11.285)
								{
									if(f < 2232.5)
										return 16.54;
									else
										return 14.97;
								}
								else
									return 6.8;
							}
							else
							{
								if(payload < 5.5)
								{
									if(payload < 4.5)
										return 9.28;
									else
										return 10.17;
								}
								else
								{
									if(sinr < 24)
										return 13.97;
									else
										return 12.39;
								}
							}
						}
					}
					else
					{
						if(rsrp < -95.5)
						{
							if(velocity < 14.12)
							{
								if(rsrq < -6.5)
									return 6.74;
								else
									return 5.7;
							}
							else
							{
								if(rsrp < -96.5)
								{
									if(rsrp < -99.5)
									{
										if(rsrp < -100.5)
										{
											if(payload < 5.5)
											{
												if(rsrp < -106.5)
													return 14.98;
												else
													return 9.08;
											}
											else
												return 14.81;
										}
										else
										{
											if(payload < 5)
												return 9.21;
											else
												return 8.41;
										}
									}
									else
									{
										if(rsrp < -97.5)
										{
											if(rsrp < -98.5)
												return 14.04;
											else
											{
												if(velocity < 25.09)
													return 16.6;
												else
													return 16.06;
											}
										}
										else
										{
											if(velocity < 16.25)
												return 11.06;
											else
												return 13.33;
										}
									}
								}
								else
									return 6.69;
							}
						}
						else
						{
							if(velocity < 12.54)
							{
								if(velocity < 11.84)
								{
									if(rsrp < -90.5)
										return 11.21;
									else
										return 12.65;
								}
								else
								{
									if(rsrq < -6.5)
										return 10.48;
									else
										return 9.28;
								}
							}
							else
							{
								if(velocity < 14.325)
								{
									if(velocity < 13.265)
									{
										if(rsrp < -90.5)
										{
											if(rsrq < -6.5)
												return 18.88;
											else
												return 21.4;
										}
										else
											return 11.76;
									}
									else
									{
										if(f < 2232.5)
										{
											if(sinr < 11.5)
												return 14.7833333333;
											else
											{
												if(rsrp < -89.5)
													return 16.47;
												else
													return 15.63;
											}
										}
										else
										{
											if(rsrp < -91.5)
											{
												if(velocity < 14.26)
												{
													if(payload < 5.5)
														return 10.09;
													else
														return 12.45;
												}
												else
													return 7.13;
											}
											else
												return 6.45;
										}
									}
								}
								else
								{
									if(sinr < 9.5)
									{
										if(rsrp < -93.5)
										{
											if(velocity < 16.435)
												return 12.51;
											else
												return 21.37;
										}
										else
										{
											if(payload < 6.5)
											{
												if(velocity < 15.705)
													return 12.66;
												else
												{
													if(velocity < 24.375)
														return 5.8;
													else
													{
														if(payload < 5)
															return 8.25;
														else
															return 7.5;
													}
												}
											}
											else
											{
												if(rsrp < -91)
													return 18.08;
												else
													return 13.35;
											}
										}
									}
									else
									{
										if(rsrp < -91.5)
										{
											if(rsrq < -6.5)
												return 17.6766666667;
											else
												return 25.07;
										}
										else
										{
											if(f < 2232.5)
											{
												if(payload < 4.5)
												{
													if(rsrp < -89.5)
														return 19.06;
													else
														return 18.6;
												}
												else
												{
													if(rsrp < -90)
													{
														if(payload < 6)
															return 12.87;
														else
															return 13.86;
													}
													else
														return 14.845;
												}
											}
											else
											{
												if(velocity < 15.18)
												{
													if(sinr < 22.5)
														return 17.26;
													else
														return 15.27;
												}
												else
													return 21.68;
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
					if(velocity < 17.315)
					{
						if(velocity < 7.36)
						{
							if(f < 2232.5)
							{
								if(rsrp < -95.5)
									return 11.55;
								else
								{
									if(velocity < 1.58)
									{
										if(rsrq < -6.5)
											return 25.84;
										else
										{
											if(payload < 9)
												return 20.11;
											else
												return 25.92;
										}
									}
									else
										return 21.58;
								}
							}
							else
							{
								if(rsrq < -6.5)
									return 34.14;
								else
								{
									if(rsrp < -89.5)
									{
										if(rsrq < -5.5)
										{
											if(sinr < 21.5)
											{
												if(payload < 9.5)
												{
													if(rsrp < -90.5)
														return 25.44;
													else
														return 21.94;
												}
												else
													return 27.88;
											}
											else
											{
												if(rsrp < -90.5)
													return 23.34;
												else
													return 24.02;
											}
										}
										else
										{
											if(payload < 9)
												return 20.61;
											else
												return 20.02;
										}
									}
									else
										return 17.69;
								}
							}
						}
						else
						{
							if(velocity < 8.645)
							{
								if(velocity < 7.825)
								{
									if(rsrp < -93)
									{
										if(velocity < 7.615)
											return 14.05;
										else
											return 16.66;
									}
									else
										return 11.35;
								}
								else
								{
									if(payload < 9.5)
										return 11.72;
									else
										return 10.51;
								}
							}
							else
							{
								if(payload < 9.5)
								{
									if(velocity < 10.7)
									{
										if(f < 2232.5)
										{
											if(sinr < 9.5)
												return 19.39;
											else
											{
												if(velocity < 9.585)
													return 30.03;
												else
												{
													if(rsrp < -97)
														return 22.61;
													else
														return 23.47;
												}
											}
										}
										else
										{
											if(rsrq < -6.5)
												return 18.24;
											else
												return 15.23;
										}
									}
									else
									{
										if(velocity < 15.385)
										{
											if(velocity < 14.74)
											{
												if(velocity < 13.48)
												{
													if(velocity < 12.945)
													{
														if(sinr < 8.5)
														{
															if(f < 2232.5)
																return 13.38;
															else
															{
																if(payload < 8.5)
																	return 16.22;
																else
																	return 17.84;
															}
														}
														else
														{
															if(velocity < 12.68)
															{
																if(rsrq < -5.5)
																{
																	if(rsrp < -91)
																		return 20.77;
																	else
																		return 19.43;
																}
																else
																	return 16.46;
															}
															else
																return 17.31;
														}
													}
													else
													{
														if(sinr < 14)
															return 11.18;
														else
															return 15.56;
													}
												}
												else
												{
													if(rsrp < -90.5)
													{
														if(sinr < 12.5)
														{
															if(sinr < 11)
															{
																if(rsrq < -6.5)
																	return 19.33;
																else
																	return 15.5;
															}
															else
																return 15.09;
														}
														else
															return 26.2;
													}
													else
													{
														if(rsrp < -89.5)
															return 28.21;
														else
															return 25.78;
													}
												}
											}
											else
											{
												if(rsrq < -6.5)
												{
													if(rsrp < -95.5)
														return 9.45;
													else
														return 10;
												}
												else
													return 13.97;
											}
										}
										else
										{
											if(payload < 8.5)
											{
												if(velocity < 16.34)
													return 21.23;
												else
													return 23.69;
											}
											else
											{
												if(rsrp < -91.5)
													return 21.47;
												else
													return 19.39;
											}
										}
									}
								}
								else
								{
									if(rsrp < -97.5)
										return 30.4;
									else
									{
										if(f < 2232.5)
										{
											if(rsrp < -95.5)
												return 18.01;
											else
											{
												if(sinr < 7.5)
												{
													if(velocity < 11.01)
														return 21;
													else
														return 21.77;
												}
												else
												{
													if(rsrp < -92)
														return 23.76;
													else
														return 27.43;
												}
											}
										}
										else
										{
											if(rsrp < -90.5)
											{
												if(rsrp < -92)
													return 21.75;
												else
													return 19.92;
											}
											else
											{
												if(rsrp < -89.5)
													return 15.39;
												else
												{
													if(rsrq < -6.5)
														return 19.32;
													else
														return 20.24;
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
						if(sinr < 10.5)
							return 13.65;
						else
						{
							if(sinr < 18)
							{
								if(payload < 9)
									return 8.45;
								else
									return 10.76;
							}
							else
								return 6.05;
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
					if(rsrq < -13)
						return 1.69;
					else
					{
						if(f < 1384.5)
						{
							if(rsrp < -66.5)
							{
								if(velocity < 29.475)
									return 7.328;
								else
									return 11.59;
							}
							else
								return 17.17;
						}
						else
						{
							if(sinr < 12.5)
							{
								if(rsrp < -84.5)
								{
									if(velocity < 29.435)
									{
										if(payload < 4.5)
										{
											if(sinr < 8.5)
											{
												if(rsrq < -6.5)
												{
													if(sinr < 6.5)
													{
														if(velocity < 12.9)
														{
															if(rsrp < -87.5)
																return 8.87;
															else
																return 11.01;
														}
														else
															return 12.85;
													}
													else
														return 8.95;
												}
												else
													return 15.55;
											}
											else
											{
												if(rsrq < -6.5)
													return 14.42;
												else
												{
													if(sinr < 11.5)
													{
														if(rsrp < -86.5)
															return 11.61;
														else
															return 12.39;
													}
													else
														return 13.24;
												}
											}
										}
										else
										{
											if(sinr < 9.5)
											{
												if(velocity < 14.795)
												{
													if(sinr < 0.5)
													{
														if(rsrq < -9)
														{
															if(f < 2232.5)
															{
																if(rsrq < -10.5)
																	return 11.85;
																else
																	return 13.86;
															}
															else
																return 13.63;
														}
														else
														{
															if(payload < 6)
																return 15.93;
															else
																return 22.27;
														}
													}
													else
													{
														if(rsrq < -9)
															return 17.69;
														else
														{
															if(velocity < 8.655)
																return 14.82;
															else
															{
																if(velocity < 13.775)
																{
																	if(velocity < 12.35)
																	{
																		if(payload < 5.5)
																			return 10.44;
																		else
																			return 12.4;
																	}
																	else
																		return 10.98;
																}
																else
																	return 14.23;
															}
														}
													}
												}
												else
												{
													if(payload < 6.5)
													{
														if(rsrq < -8.5)
															return 20.84;
														else
															return 17.61;
													}
													else
														return 16.58;
												}
											}
											else
											{
												if(rsrp < -87.5)
												{
													if(sinr < 11)
														return 11.68;
													else
														return 16.4;
												}
												else
												{
													if(rsrq < -6.5)
													{
														if(payload < 5.5)
															return 18.9;
														else
														{
															if(velocity < 13.67)
																return 20.5;
															else
																return 19.85;
														}
													}
													else
														return 16.37;
												}
											}
										}
									}
									else
									{
										if(velocity < 35.07)
											return 33.83;
										else
										{
											if(sinr < 6)
												return 12.96;
											else
											{
												if(rsrp < -87.5)
													return 18.92;
												else
													return 19.59;
											}
										}
									}
								}
								else
								{
									if(rsrp < -81.5)
									{
										if(sinr < 10.5)
										{
											if(velocity < 21.205)
											{
												if(velocity < 12.975)
													return 20.784;
												else
												{
													if(rsrp < -82.5)
														return 22.42;
													else
														return 22.98;
												}
											}
											else
											{
												if(rsrp < -82.5)
													return 16.13;
												else
													return 18.29;
											}
										}
										else
										{
											if(rsrp < -83.5)
												return 16.5042857143;
											else
												return 15.17;
										}
									}
									else
									{
										if(velocity < 13.675)
										{
											if(velocity < 9.71)
											{
												if(rsrq < -8.5)
													return 15.95;
												else
												{
													if(velocity < 9.145)
													{
														if(rsrq < -7.5)
															return 14.825;
														else
															return 13.68;
													}
													else
														return 13.1;
												}
											}
											else
											{
												if(velocity < 13.065)
													return 18.0716666667;
												else
													return 20.53;
											}
										}
										else
										{
											if(velocity < 24.8)
											{
												if(velocity < 14.705)
													return 12.56;
												else
													return 10.06;
											}
											else
												return 13.36;
										}
									}
								}
							}
							else
							{
								if(f < 2232.5)
								{
									if(rsrp < -87.5)
									{
										if(velocity < 16.74)
										{
											if(velocity < 11.985)
											{
												if(velocity < 5.14)
													return 24.73;
												else
													return 22.21;
											}
											else
											{
												if(payload < 5)
													return 16.89;
												else
													return 20.32;
											}
										}
										else
											return 30.77;
									}
									else
									{
										if(rsrp < -79.5)
										{
											if(payload < 6.5)
											{
												if(velocity < 18.745)
												{
													if(velocity < 14.76)
													{
														if(rsrp < -83.5)
														{
															if(rsrq < -7.5)
															{
																if(velocity < 14.09)
																{
																	if(payload < 5)
																		return 10.02;
																	else
																		return 8.34;
																}
																else
																	return 22.94;
															}
															else
															{
																if(velocity < 14.01)
																{
																	if(rsrq < -6.5)
																	{
																		if(sinr < 32.5)
																		{
																			if(rsrp < -84.5)
																			{
																				if(rsrp < -85.5)
																				{
																					if(payload < 5)
																						return 20.25;
																					else
																						return 16.86;
																				}
																				else
																					return 19.14;
																			}
																			else
																				return 24.95;
																		}
																		else
																			return 16.02;
																	}
																	else
																	{
																		if(velocity < 11.785)
																		{
																			if(sinr < 17.5)
																				return 9.7;
																			else
																			{
																				if(velocity < 10.035)
																				{
																					if(sinr < 26)
																					{
																						if(sinr < 22)
																							return 15.778;
																						else
																							return 15.09;
																					}
																					else
																						return 13.82;
																				}
																				else
																				{
																					if(payload < 4.5)
																						return 16.35;
																					else
																						return 19.13;
																				}
																			}
																		}
																		else
																		{
																			if(velocity < 12.815)
																			{
																				if(sinr < 16)
																					return 17.72;
																				else
																				{
																					if(payload < 5.5)
																						return 22.12;
																					else
																						return 20.59;
																				}
																			}
																			else
																			{
																				if(payload < 4.5)
																					return 13.47;
																				else
																					return 16.66;
																			}
																		}
																	}
																}
																else
																	return 9.23;
															}
														}
														else
														{
															if(sinr < 20.5)
															{
																if(sinr < 15.5)
																{
																	if(rsrp < -80.5)
																		return 18.04;
																	else
																		return 20.86;
																}
																else
																{
																	if(velocity < 14.32)
																	{
																		if(rsrq < -8.5)
																		{
																			if(rsrp < -82)
																				return 11.74;
																			else
																				return 11;
																		}
																		else
																			return 13.68;
																	}
																	else
																		return 22.11;
																}
															}
															else
															{
																if(rsrq < -7.5)
																{
																	if(payload < 5)
																		return 17.29;
																	else
																	{
																		if(rsrp < -82.5)
																			return 23.54;
																		else
																			return 24.48;
																	}
																}
																else
																{
																	if(velocity < 8.64)
																	{
																		if(rsrq < -6.5)
																		{
																			if(payload < 5.5)
																				return 17.99;
																			else
																				return 17.19;
																		}
																		else
																		{
																			if(velocity < 3.775)
																			{
																				if(rsrp < -81.5)
																					return 14.39;
																				else
																					return 15.89;
																			}
																			else
																				return 17.93;
																		}
																	}
																	else
																	{
																		if(sinr < 30.5)
																		{
																			if(velocity < 14.15)
																			{
																				if(rsrp < -82.5)
																					return 18.53;
																				else
																					return 23.3;
																			}
																			else
																			{
																				if(rsrq < -6.5)
																					return 16.75;
																				else
																					return 17.33;
																			}
																		}
																		else
																			return 24.1;
																	}
																}
															}
														}
													}
													else
													{
														if(payload < 5.5)
														{
															if(rsrp < -84.5)
															{
																if(payload < 4.5)
																	return 14.04;
																else
																	return 11.74;
															}
															else
															{
																if(rsrp < -82)
																	return 9.49;
																else
																	return 8.04;
															}
														}
														else
															return 13.33;
													}
												}
												else
												{
													if(rsrq < -6.5)
														return 30.4;
													else
													{
														if(payload < 5.5)
														{
															if(velocity < 28.705)
															{
																if(payload < 4.5)
																	return 15.79;
																else
																{
																	if(sinr < 24.5)
																		return 9.4;
																	else
																		return 10.89;
																}
															}
															else
																return 15.79;
														}
														else
															return 22.91;
													}
												}
											}
											else
											{
												if(rsrp < -85.5)
												{
													if(sinr < 13.5)
														return 21.17;
													else
													{
														if(velocity < 11.685)
														{
															if(velocity < 11.5)
																return 18.37;
															else
																return 16.12;
														}
														else
														{
															if(sinr < 14.5)
																return 18.14;
															else
																return 19.14;
														}
													}
												}
												else
												{
													if(rsrq < -7)
														return 18.52;
													else
													{
														if(velocity < 12.64)
															return 38.15;
														else
														{
															if(rsrp < -84.5)
																return 23.02;
															else
															{
																if(velocity < 13.99)
																	return 25.3;
																else
																	return 26.19;
															}
														}
													}
												}
											}
										}
										else
										{
											if(rsrq < -9.5)
												return 33.26;
											else
											{
												if(velocity < 15.97)
												{
													if(velocity < 14.14)
													{
														if(payload < 4.5)
														{
															if(rsrp < -69.5)
															{
																if(rsrp < -76)
																	return 19.83;
																else
																{
																	if(rsrp < -73)
																		return 17.45;
																	else
																		return 16.01;
																}
															}
															else
																return 10.91;
														}
														else
														{
															if(rsrp < -73.5)
															{
																if(payload < 6.5)
																{
																	if(velocity < 9.975)
																	{
																		if(rsrp < -78.5)
																			return 15.83;
																		else
																		{
																			if(rsrq < -7)
																				return 18.76;
																			else
																			{
																				if(rsrp < -76.5)
																				{
																					if(rsrp < -77.5)
																						return 20.92;
																					else
																					{
																						if(payload < 5.5)
																							return 18.54;
																						else
																							return 26.91;
																					}
																				}
																				else
																					return 18.48;
																			}
																		}
																	}
																	else
																	{
																		if(rsrp < -76.5)
																		{
																			if(rsrp < -78.5)
																				return 16.13;
																			else
																				return 18.42;
																		}
																		else
																			return 15.13;
																	}
																}
																else
																{
																	if(velocity < 6.815)
																	{
																		if(sinr < 26)
																			return 24.37;
																		else
																			return 19.05;
																	}
																	else
																		return 23.43;
																}
															}
															else
															{
																if(sinr < 32)
																{
																	if(velocity < 13.405)
																		return 22.285;
																	else
																		return 23.42;
																}
																else
																	return 25.86;
															}
														}
													}
													else
													{
														if(sinr < 18)
															return 9.79;
														else
															return 11.23;
													}
												}
												else
												{
													if(sinr < 16.5)
														return 29.74;
													else
														return 19.465;
												}
											}
										}
									}
								}
								else
								{
									if(rsrp < -85.5)
									{
										if(velocity < 4.295)
										{
											if(sinr < 16)
												return 23.88;
											else
											{
												if(rsrq < -9.5)
													return 16.61;
												else
												{
													if(sinr < 22.5)
														return 19.39;
													else
														return 18.45;
												}
											}
										}
										else
										{
											if(sinr < 29)
											{
												if(velocity < 11.555)
													return 24.67;
												else
												{
													if(sinr < 19)
														return 14;
													else
													{
														if(sinr < 21.5)
															return 18.4;
														else
														{
															if(rsrq < -6.5)
																return 15.22;
															else
																return 16.61;
														}
													}
												}
											}
											else
												return 11.42;
										}
									}
									else
									{
										if(rsrp < -75)
										{
											if(rsrp < -84)
											{
												if(payload < 6.5)
													return 11.81;
												else
													return 17.47;
											}
											else
											{
												if(payload < 6)
												{
													if(velocity < 3.825)
														return 9.63;
													else
													{
														if(rsrp < -81.5)
															return 10.74;
														else
															return 11.92;
													}
												}
												else
													return 8.88;
											}
										}
										else
											return 15.66;
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
						if(rsrq < -4.5)
							return 27.29;
						else
							return 19.93;
					}
					else
					{
						if(rsrp < -83.5)
						{
							if(sinr < 13.5)
								return 11.6;
							else
							{
								if(payload < 5.5)
								{
									if(velocity < 23.805)
									{
										if(payload < 4.5)
											return 16.1666666667;
										else
											return 14.8866666667;
									}
									else
										return 19.54;
								}
								else
								{
									if(rsrp < -84.5)
									{
										if(velocity < 14.165)
											return 14.18;
										else
											return 12.95;
									}
									else
									{
										if(velocity < 17.95)
											return 25.09;
										else
											return 13.67;
									}
								}
							}
						}
						else
						{
							if(payload < 4.5)
							{
								if(sinr < 29.5)
								{
									if(rsrp < -82.5)
										return 7.92;
									else
									{
										if(velocity < 15.33)
										{
											if(rsrq < -4.5)
											{
												if(rsrp < -78.5)
												{
													if(sinr < 22)
														return 20.3;
													else
													{
														if(rsrp < -79.5)
															return 17.72;
														else
															return 18.39;
													}
												}
												else
												{
													if(velocity < 14.17)
													{
														if(rsrp < -74.5)
															return 18.31;
														else
															return 19.75;
													}
													else
														return 17.1333333333;
												}
											}
											else
											{
												if(rsrp < -81)
													return 15.53;
												else
													return 16.89;
											}
										}
										else
										{
											if(rsrp < -75)
											{
												if(rsrp < -78)
													return 14.26;
												else
													return 15.62;
											}
											else
												return 17.12;
										}
									}
								}
								else
								{
									if(velocity < 22.185)
										return 21.33;
									else
									{
										if(rsrq < -4.5)
											return 18.42;
										else
											return 16.86;
									}
								}
							}
							else
							{
								if(rsrp < -82.5)
								{
									if(sinr < 15)
										return 26.35;
									else
									{
										if(sinr < 22)
											return 21.4;
										else
											return 25.18;
									}
								}
								else
								{
									if(payload < 5.5)
									{
										if(sinr < 26.5)
										{
											if(rsrp < -77)
											{
												if(rsrp < -81.5)
												{
													if(velocity < 17.6)
														return 10.67;
													else
														return 19.27;
												}
												else
													return 14.46;
											}
											else
												return 21.36;
										}
										else
										{
											if(sinr < 33)
											{
												if(rsrp < -70.5)
												{
													if(rsrp < -76)
														return 20.38;
													else
														return 18.26;
												}
												else
												{
													if(sinr < 30.5)
														return 22.08;
													else
														return 20.7;
												}
											}
											else
												return 15.89;
										}
									}
									else
									{
										if(rsrp < -81.5)
										{
											if(payload < 6.5)
												return 22.74;
											else
											{
												if(velocity < 14.25)
													return 19.77;
												else
													return 28.69;
											}
										}
										else
										{
											if(sinr < 20.5)
											{
												if(sinr < 18.5)
												{
													if(velocity < 12.015)
														return 21.24;
													else
														return 20.06;
												}
												else
													return 17.12;
											}
											else
											{
												if(rsrp < -74.5)
												{
													if(velocity < 22.755)
													{
														if(rsrp < -76)
														{
															if(rsrq < -4.5)
															{
																if(payload < 6.5)
																{
																	if(sinr < 28.5)
																	{
																		if(velocity < 14.78)
																		{
																			if(rsrp < -79)
																				return 27.38;
																			else
																				return 20.01;
																		}
																		else
																			return 20.0933333333;
																	}
																	else
																		return 25.16;
																}
																else
																{
																	if(rsrp < -78.5)
																		return 26.6;
																	else
																	{
																		if(rsrp < -77.5)
																			return 20.4;
																		else
																			return 22.06;
																	}
																}
															}
															else
																return 18.23;
														}
														else
														{
															if(velocity < 13.13)
															{
																if(sinr < 22.5)
																	return 22.82;
																else
																	return 18.2933333333;
															}
															else
															{
																if(velocity < 17.925)
																	return 20.59;
																else
																	return 21.95;
															}
														}
													}
													else
														return 17.71;
												}
												else
												{
													if(sinr < 27.5)
													{
														if(velocity < 24.59)
															return 23.08;
														else
															return 23.98;
													}
													else
													{
														if(rsrq < -4.5)
														{
															if(payload < 6.5)
																return 22.3933333333;
															else
															{
																if(velocity < 23.94)
																	return 22.9;
																else
																	return 21.82;
															}
														}
														else
															return 19.43;
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
				if(rsrq < -6.5)
				{
					if(rsrp < -87.5)
					{
						if(sinr < 9.5)
						{
							if(rsrq < -9)
							{
								if(f < 2232.5)
									return 23.69;
								else
									return 38.54;
							}
							else
							{
								if(payload < 9)
									return 24.56;
								else
									return 23.13;
							}
						}
						else
						{
							if(payload < 9.5)
							{
								if(payload < 8.5)
									return 20.07;
								else
									return 15.24;
							}
							else
							{
								if(sinr < 14.5)
									return 22.25;
								else
									return 23.8;
							}
						}
					}
					else
					{
						if(sinr < 6.5)
						{
							if(sinr < 1.5)
							{
								if(payload < 9.5)
								{
									if(rsrp < -86.5)
										return 16.28;
									else
										return 15.31;
								}
								else
									return 20.84;
							}
							else
							{
								if(velocity < 14.15)
								{
									if(velocity < 11.28)
									{
										if(rsrp < -77.5)
											return 14.84;
										else
											return 14.19;
									}
									else
										return 12.08;
								}
								else
									return 15.192;
							}
						}
						else
						{
							if(velocity < 36.26)
							{
								if(velocity < 28.67)
								{
									if(velocity < 2.63)
									{
										if(payload < 8.5)
										{
											if(f < 2232.5)
												return 24.42;
											else
												return 16.3;
										}
										else
										{
											if(payload < 9.5)
											{
												if(rsrq < -7.5)
													return 13.84;
												else
													return 17.79;
											}
											else
											{
												if(sinr < 20)
												{
													if(rsrq < -9)
														return 14.11;
													else
														return 13.56;
												}
												else
													return 17.93;
											}
										}
									}
									else
									{
										if(velocity < 12.32)
										{
											if(sinr < 14)
											{
												if(sinr < 10.5)
												{
													if(velocity < 11.92)
													{
														if(payload < 9)
															return 18.31;
														else
															return 19.73;
													}
													else
														return 24.92;
												}
												else
												{
													if(rsrq < -8)
													{
														if(rsrq < -9.5)
															return 23.07;
														else
															return 21.94;
													}
													else
													{
														if(payload < 9.5)
															return 31.14;
														else
															return 30.41;
													}
												}
											}
											else
											{
												if(sinr < 20.5)
												{
													if(rsrp < -84)
														return 12.68;
													else
													{
														if(payload < 9.5)
															return 18.39;
														else
															return 17.47;
													}
												}
												else
												{
													if(rsrp < -81)
													{
														if(rsrp < -86)
															return 16.45;
														else
															return 18.465;
													}
													else
													{
														if(sinr < 28.5)
															return 34.72;
														else
															return 26.43;
													}
												}
											}
										}
										else
										{
											if(payload < 8.5)
											{
												if(velocity < 12.935)
													return 16.236;
												else
												{
													if(rsrq < -8.5)
														return 25.46;
													else
													{
														if(velocity < 21.175)
															return 16.74;
														else
															return 16.06;
													}
												}
											}
											else
											{
												if(velocity < 13.38)
												{
													if(f < 2232.5)
													{
														if(velocity < 13.17)
														{
															if(payload < 9.5)
																return 21.54;
															else
																return 19.21;
														}
														else
															return 12.38;
													}
													else
														return 14.4;
												}
												else
												{
													if(payload < 9.5)
													{
														if(velocity < 20.585)
														{
															if(rsrq < -8)
															{
																if(rsrp < -83)
																	return 21.47;
																else
																	return 22.46;
															}
															else
																return 19.14;
														}
														else
															return 25.13;
													}
													else
													{
														if(rsrp < -85.5)
															return 29.04;
														else
															return 22.25;
													}
												}
											}
										}
									}
								}
								else
								{
									if(rsrq < -8.5)
										return 4.55;
									else
										return 14.23;
								}
							}
							else
								return 31.13;
						}
					}
				}
				else
				{
					if(payload < 9.5)
					{
						if(velocity < 14.675)
						{
							if(rsrp < -80.5)
							{
								if(f < 2232.5)
								{
									if(velocity < 13.16)
									{
										if(rsrq < -5.5)
										{
											if(payload < 8.5)
											{
												if(rsrp < -87.5)
													return 36.38;
												else
												{
													if(rsrp < -86.5)
													{
														if(velocity < 6.53)
															return 27.36;
														else
															return 21.07;
													}
													else
													{
														if(velocity < 12.27)
														{
															if(rsrp < -83.5)
																return 21.05;
															else
																return 19.06;
														}
														else
														{
															if(rsrp < -81.5)
																return 22.08;
															else
																return 24.71;
														}
													}
												}
											}
											else
											{
												if(velocity < 10.81)
												{
													if(rsrp < -85.5)
													{
														if(rsrp < -86.5)
															return 22.19;
														else
															return 19.41;
													}
													else
														return 22.8;
												}
												else
												{
													if(rsrp < -85.5)
														return 26.18;
													else
														return 25.18;
												}
											}
										}
										else
										{
											if(rsrp < -85.5)
												return 20.14;
											else
											{
												if(velocity < 0.59)
													return 18.31;
												else
												{
													if(rsrp < -82.5)
													{
														if(velocity < 6.205)
															return 23.93;
														else
															return 23.39;
													}
													else
														return 21.14;
												}
											}
										}
									}
									else
									{
										if(sinr < 29.5)
											return 12.52;
										else
											return 16.71;
									}
								}
								else
								{
									if(sinr < 13.5)
									{
										if(payload < 8.5)
										{
											if(rsrp < -86)
												return 15.48;
											else
												return 19.66;
										}
										else
											return 23.14;
									}
									else
									{
										if(payload < 8.5)
											return 19.07;
										else
										{
											if(rsrp < -84.5)
											{
												if(velocity < 3.56)
													return 17.24;
												else
													return 15.26;
											}
											else
												return 15.03;
										}
									}
								}
							}
							else
							{
								if(velocity < 9.63)
								{
									if(rsrp < -76.5)
									{
										if(rsrp < -79)
											return 22.91;
										else
										{
											if(velocity < 8.675)
											{
												if(sinr < 24)
													return 38.34;
												else
												{
													if(payload < 8.5)
														return 20.56;
													else
													{
														if(rsrp < -77.5)
															return 22.29;
														else
															return 33.15;
													}
												}
											}
											else
												return 32.33;
										}
									}
									else
									{
										if(rsrp < -73)
										{
											if(rsrp < -75.5)
												return 16.99;
											else
											{
												if(velocity < 3.455)
													return 20.49;
												else
													return 22.11;
											}
										}
										else
										{
											if(velocity < 3.635)
												return 25.16;
											else
											{
												if(sinr < 23.5)
													return 30.1;
												else
													return 28.82;
											}
										}
									}
								}
								else
								{
									if(velocity < 12.305)
										return 18.9733333333;
									else
									{
										if(velocity < 13.4)
										{
											if(rsrp < -78)
												return 23.65;
											else
											{
												if(velocity < 13.23)
												{
													if(rsrq < -5.5)
														return 26.06;
													else
														return 25.54;
												}
												else
													return 28.54;
											}
										}
										else
										{
											if(rsrp < -75.5)
											{
												if(rsrq < -5.5)
													return 19.34;
												else
													return 20.51;
											}
											else
											{
												if(velocity < 14.4)
													return 26.48;
												else
													return 24.9;
											}
										}
									}
								}
							}
						}
						else
						{
							if(rsrp < -82)
							{
								if(payload < 8.5)
								{
									if(rsrq < -5.5)
									{
										if(rsrp < -86.5)
										{
											if(sinr < 21)
												return 28.01;
											else
												return 29.98;
										}
										else
										{
											if(velocity < 19.225)
												return 22.08;
											else
												return 11.02;
										}
									}
									else
										return 25.59;
								}
								else
								{
									if(sinr < 13)
										return 25.7;
									else
									{
										if(rsrq < -5.5)
										{
											if(rsrp < -83.5)
												return 17.5;
											else
												return 12.58;
										}
										else
											return 21.92;
									}
								}
							}
							else
							{
								if(payload < 8.5)
								{
									if(velocity < 17.325)
										return 38.39;
									else
									{
										if(velocity < 26.49)
										{
											if(velocity < 22.715)
												return 19.78;
											else
												return 18.47;
										}
										else
										{
											if(sinr < 22)
												return 28.4075;
											else
												return 26.435;
										}
									}
								}
								else
								{
									if(velocity < 32.375)
									{
										if(velocity < 16.335)
											return 29.15;
										else
										{
											if(rsrp < -74.5)
											{
												if(rsrp < -78.5)
													return 37.23;
												else
													return 34.25;
											}
											else
												return 29.13;
										}
									}
									else
										return 43.01;
								}
							}
						}
					}
					else
					{
						if(velocity < 11.22)
						{
							if(sinr < 8.5)
								return 16.82;
							else
							{
								if(rsrp < -74.5)
								{
									if(sinr < 19.5)
									{
										if(rsrq < -5.5)
										{
											if(sinr < 15.5)
												return 29.98;
											else
											{
												if(velocity < 4.225)
													return 26.56;
												else
													return 24.15;
											}
										}
										else
											return 24.95;
									}
									else
									{
										if(sinr < 22.5)
										{
											if(rsrp < -85.5)
												return 16.68;
											else
												return 20.26;
										}
										else
										{
											if(sinr < 24.5)
												return 26.84;
											else
											{
												if(rsrq < -5.5)
												{
													if(sinr < 30.5)
													{
														if(sinr < 27)
															return 22.5;
														else
															return 21.71;
													}
													else
														return 27.22;
												}
												else
												{
													if(velocity < 7.42)
														return 19.33;
													else
														return 21.96;
												}
											}
										}
									}
								}
								else
								{
									if(rsrq < -5.5)
										return 21.91;
									else
									{
										if(rsrp < -72)
											return 29.35;
										else
											return 32.92;
									}
								}
							}
						}
						else
						{
							if(f < 1384.5)
							{
								if(f < 912)
									return 11.25;
								else
									return 4.46;
							}
							else
							{
								if(f < 2232.5)
								{
									if(sinr < 13.5)
									{
										if(velocity < 19.045)
										{
											if(rsrp < -82.5)
												return 31.92;
											else
												return 24.88;
										}
										else
										{
											if(velocity < 29.445)
												return 26.65;
											else
											{
												if(sinr < 11)
													return 25.37;
												else
													return 24.71;
											}
										}
									}
									else
									{
										if(velocity < 13.15)
										{
											if(sinr < 15.5)
												return 35.18;
											else
											{
												if(rsrq < -4.5)
												{
													if(sinr < 21)
														return 39.04;
													else
														return 41.78;
												}
												else
													return 34.74;
											}
										}
										else
										{
											if(sinr < 30)
											{
												if(rsrq < -5.5)
												{
													if(velocity < 13.675)
														return 23.59;
													else
													{
														if(rsrp < -76.5)
															return 29.37;
														else
															return 35.07;
													}
												}
												else
												{
													if(velocity < 30.23)
													{
														if(rsrp < -75.5)
															return 33.68;
														else
															return 32.48;
													}
													else
														return 31.5;
												}
											}
											else
											{
												if(rsrq < -5.5)
													return 31.91;
												else
												{
													if(velocity < 20.275)
														return 25.89;
													else
													{
														if(rsrp < -76)
															return 23.41;
														else
															return 24.44;
													}
												}
											}
										}
									}
								}
								else
									return 14.22;
							}
						}
					}
				}
			}
		}
	}
}

float tmobile_dl_ns3_tree_2(float payload, float rsrp, float rsrq, float sinr, float velocity, float f)
{
	if(rsrq < -7.5)
	{
		if(rsrp < -92.5)
		{
			if(payload < 4.5)
			{
				if(rsrq < -12.5)
				{
					if(payload < 0.75)
					{
						if(rsrq < -13.5)
						{
							if(velocity < 14.355)
								return 0.72;
							else
							{
								if(velocity < 16.405)
									return 2.17;
								else
									return 0.74;
							}
						}
						else
						{
							if(rsrp < -98.5)
							{
								if(rsrp < -103.5)
									return 2.87;
								else
									return 4.605;
							}
							else
								return 7.29;
						}
					}
					else
					{
						if(rsrp < -107.5)
							return 8.01;
						else
						{
							if(velocity < 15.55)
							{
								if(sinr < 0.5)
									return 4.82;
								else
									return 5.67;
							}
							else
								return 1.8066666667;
						}
					}
				}
				else
				{
					if(payload < 2.5)
					{
						if(rsrp < -99.5)
						{
							if(rsrp < -107.5)
							{
								if(velocity < 13.64)
								{
									if(rsrp < -109.5)
										return 6.22;
									else
									{
										if(rsrq < -10)
											return 3.49;
										else
											return 2.61;
									}
								}
								else
								{
									if(rsrq < -11.5)
										return 10;
									else
										return 12.46;
								}
							}
							else
							{
								if(payload < 0.75)
								{
									if(velocity < 13.86)
									{
										if(rsrp < -105.5)
											return 0.88;
										else
										{
											if(velocity < 13.44)
											{
												if(rsrp < -103)
													return 2.57;
												else
													return 4.31;
											}
											else
											{
												if(rsrq < -10.5)
													return 2.93;
												else
												{
													if(payload < 0.3)
														return 3.13;
													else
														return 1.815;
												}
											}
										}
									}
									else
									{
										if(sinr < -3.5)
											return 11.59;
										else
										{
											if(rsrp < -102.5)
											{
												if(sinr < 2)
												{
													if(velocity < 17.49)
														return 6;
													else
														return 7.74;
												}
												else
													return 3.82;
											}
											else
											{
												if(rsrq < -8.5)
												{
													if(rsrp < -101.5)
														return 1.75;
													else
													{
														if(payload < 0.3)
															return 4.29;
														else
															return 2.44;
													}
												}
												else
													return 6.72;
											}
										}
									}
								}
								else
								{
									if(sinr < 10.5)
									{
										if(velocity < 11.755)
										{
											if(rsrp < -104)
												return 9.55;
											else
											{
												if(rsrq < -10)
													return 6.9925;
												else
												{
													if(payload < 1.5)
													{
														if(rsrp < -101)
															return 5.03;
														else
															return 4.15;
													}
													else
													{
														if(rsrp < -101)
															return 4.56;
														else
															return 6.79;
													}
												}
											}
										}
										else
										{
											if(velocity < 12.925)
											{
												if(sinr < 5.5)
													return 5.35;
												else
													return 1.595;
											}
											else
											{
												if(rsrp < -104.5)
												{
													if(sinr < 4.5)
													{
														if(sinr < 2)
														{
															if(velocity < 14.07)
																return 5.39;
															else
															{
																if(velocity < 15.4)
																	return 3.99;
																else
																	return 4.63;
															}
														}
														else
															return 1.31;
													}
													else
														return 7.63;
												}
												else
												{
													if(payload < 1.5)
														return 8.95;
													else
													{
														if(rsrp < -102.5)
															return 6.88;
														else
														{
															if(rsrq < -8.5)
																return 4.7133333333;
															else
																return 5.56;
														}
													}
												}
											}
										}
									}
									else
									{
										if(rsrq < -8.5)
											return 6.13;
										else
											return 8.37;
									}
								}
							}
						}
						else
						{
							if(rsrp < -94.5)
							{
								if(rsrq < -10.5)
								{
									if(sinr < -0.5)
									{
										if(velocity < 10.6)
											return 38.1;
										else
										{
											if(rsrp < -96)
											{
												if(rsrp < -98)
													return 9.23;
												else
													return 10.81;
											}
											else
												return 3.14;
										}
									}
									else
									{
										if(velocity < 14.975)
										{
											if(sinr < 5)
											{
												if(velocity < 9.105)
													return 3.03;
												else
												{
													if(rsrp < -97)
														return 3.345;
													else
														return 8.04;
												}
											}
											else
											{
												if(rsrq < -11.5)
													return 4.3;
												else
													return 7.21;
											}
										}
										else
											return 7.31;
									}
								}
								else
								{
									if(velocity < 30.365)
									{
										if(sinr < 0.5)
										{
											if(velocity < 17.37)
											{
												if(payload < 0.75)
												{
													if(rsrp < -98.5)
														return 10.61;
													else
														return 9.64;
												}
												else
												{
													if(rsrq < -8.5)
														return 8.8375;
													else
														return 6.47;
												}
											}
											else
												return 3.15;
										}
										else
										{
											if(rsrp < -96.5)
											{
												if(payload < 1.5)
												{
													if(sinr < 7.5)
													{
														if(velocity < 13.835)
														{
															if(sinr < 6.5)
															{
																if(velocity < 1.665)
																	return 10.42;
																else
																{
																	if(rsrq < -8.5)
																	{
																		if(rsrp < -98)
																			return 7.05;
																		else
																			return 7.71;
																	}
																	else
																		return 10.15;
																}
															}
															else
																return 6.28;
														}
														else
														{
															if(velocity < 21.44)
															{
																if(payload < 0.55)
																	return 5.23;
																else
																	return 2.99;
															}
															else
																return 7.75;
														}
													}
													else
													{
														if(velocity < 2.34)
															return 7.75;
														else
														{
															if(sinr < 13.5)
															{
																if(rsrp < -98.5)
																	return 4.05;
																else
																	return 2.97;
															}
															else
															{
																if(rsrp < -97.5)
																	return 2.65;
																else
																	return 7.13;
															}
														}
													}
												}
												else
												{
													if(velocity < 14.285)
													{
														if(sinr < 5)
															return 3.17;
														else
														{
															if(rsrq < -9.5)
																return 1.69;
															else
																return 3.24;
														}
													}
													else
														return 4.4;
												}
											}
											else
											{
												if(rsrq < -8.5)
												{
													if(sinr < 16)
													{
														if(payload < 0.75)
															return 8.64;
														else
														{
															if(velocity < 13.025)
															{
																if(sinr < 7.5)
																	return 7.5433333333;
																else
																	return 8.17;
															}
															else
																return 3.04;
														}
													}
													else
														return 11.63;
												}
												else
												{
													if(velocity < 2.51)
														return 8.6;
													else
													{
														if(payload < 0.3)
														{
															if(velocity < 8.14)
																return 4.49;
															else
															{
																if(rsrp < -95.5)
																	return 4.68;
																else
																	return 5.84;
															}
														}
														else
															return 5.73;
													}
												}
											}
										}
									}
									else
										return 0.29;
								}
							}
							else
							{
								if(velocity < 2.305)
								{
									if(payload < 1.5)
									{
										if(rsrp < -93.5)
										{
											if(rsrq < -9.5)
												return 4.76;
											else
											{
												if(sinr < 11)
													return 6.72;
												else
													return 6.19;
											}
										}
										else
											return 4.82;
									}
									else
									{
										if(sinr < 11)
											return 12.44;
										else
											return 9.87;
									}
								}
								else
								{
									if(sinr < 2.5)
									{
										if(rsrq < -8.5)
										{
											if(sinr < -1.5)
												return 4.54;
											else
											{
												if(velocity < 11.32)
													return 7.08;
												else
													return 6.02;
											}
										}
										else
											return 3.56;
									}
									else
									{
										if(sinr < 18.5)
										{
											if(f < 2232.5)
											{
												if(velocity < 15.265)
													return 3.1877777778;
												else
													return 2.46;
											}
											else
												return 4.11;
										}
										else
											return 4.11;
									}
								}
							}
						}
					}
					else
					{
						if(rsrq < -9.5)
						{
							if(velocity < 15.155)
							{
								if(velocity < 7.19)
								{
									if(sinr < -0.5)
									{
										if(sinr < -2)
										{
											if(rsrq < -11)
												return 7.85;
											else
											{
												if(sinr < -3.5)
													return 4.06;
												else
													return 2.78;
											}
										}
										else
											return 2.91;
									}
									else
									{
										if(rsrp < -103)
											return 9.28;
										else
										{
											if(sinr < 8)
												return 10.08;
											else
												return 8.18;
										}
									}
								}
								else
								{
									if(sinr < 0)
										return 9.86;
									else
									{
										if(rsrp < -102.5)
										{
											if(rsrp < -106.5)
												return 7.88;
											else
											{
												if(velocity < 14.265)
												{
													if(rsrq < -11.5)
														return 2.87;
													else
														return 4.62;
												}
												else
												{
													if(rsrp < -104.5)
														return 5.3;
													else
														return 6.01;
												}
											}
										}
										else
										{
											if(velocity < 10.775)
											{
												if(velocity < 9.105)
												{
													if(sinr < 2.5)
														return 8.13;
													else
														return 4.89;
												}
												else
												{
													if(rsrp < -97)
														return 6.24;
													else
														return 3.3;
												}
											}
											else
											{
												if(velocity < 14.12)
												{
													if(rsrp < -94.5)
													{
														if(sinr < 7)
														{
															if(rsrq < -10.5)
																return 8.97;
															else
																return 10.51;
														}
														else
															return 7.81;
													}
													else
														return 6.82;
												}
												else
													return 4.4;
											}
										}
									}
								}
							}
							else
							{
								if(rsrp < -98.5)
								{
									if(velocity < 15.485)
										return 10.22;
									else
									{
										if(velocity < 16.79)
											return 14.74;
										else
											return 11.28;
									}
								}
								else
								{
									if(sinr < 4)
									{
										if(velocity < 18.215)
											return 7.76;
										else
											return 6.855;
									}
									else
										return 8.5;
								}
							}
						}
						else
						{
							if(velocity < 23.965)
							{
								if(velocity < 15.21)
								{
									if(sinr < 3.5)
									{
										if(rsrq < -8.5)
										{
											if(rsrp < -103.5)
											{
												if(rsrp < -106)
													return 3.19;
												else
													return 6.72;
											}
											else
											{
												if(velocity < 9.255)
													return 2.22;
												else
													return 2.98;
											}
										}
										else
										{
											if(rsrp < -98.5)
												return 11.64;
											else
											{
												if(rsrp < -96.5)
													return 5.39;
												else
													return 6.28;
											}
										}
									}
									else
									{
										if(f < 2232.5)
										{
											if(velocity < 13.03)
											{
												if(velocity < 9.505)
												{
													if(rsrp < -96.5)
													{
														if(velocity < 2.485)
														{
															if(sinr < 5.5)
																return 4.29;
															else
																return 5.76;
														}
														else
														{
															if(payload < 3.5)
																return 9.85;
															else
																return 10.5;
														}
													}
													else
													{
														if(payload < 3.5)
														{
															if(rsrp < -94.5)
																return 11.03;
															else
																return 15.41;
														}
														else
															return 8.85;
													}
												}
												else
												{
													if(payload < 3.5)
													{
														if(rsrq < -8.5)
															return 3.95;
														else
															return 5.67;
													}
													else
													{
														if(rsrp < -96.5)
															return 4.32;
														else
															return 14.15;
													}
												}
											}
											else
											{
												if(rsrp < -98)
												{
													if(rsrq < -8.5)
													{
														if(rsrp < -100)
														{
															if(velocity < 14.005)
																return 11.75;
															else
																return 13.04;
														}
														else
															return 8.8;
													}
													else
													{
														if(velocity < 13.425)
															return 12.69;
														else
															return 14.79;
													}
												}
												else
												{
													if(sinr < 4.5)
														return 10.88;
													else
													{
														if(sinr < 6)
															return 5.77;
														else
															return 5.01;
													}
												}
											}
										}
										else
										{
											if(velocity < 8.99)
												return 17.34;
											else
											{
												if(payload < 3.5)
													return 11.05;
												else
													return 11.81;
											}
										}
									}
								}
								else
								{
									if(rsrp < -96)
										return 15.465;
									else
										return 11.83;
								}
							}
							else
								return 5.135;
						}
					}
				}
			}
			else
			{
				if(rsrp < -102.5)
				{
					if(velocity < 1.19)
					{
						if(rsrp < -110.5)
							return 13.35;
						else
						{
							if(rsrp < -107.5)
							{
								if(rsrq < -9.5)
								{
									if(sinr < 0.5)
									{
										if(rsrq < -11.5)
											return 3.63;
										else
											return 2.66;
									}
									else
									{
										if(rsrq < -10.5)
											return 6.06;
										else
											return 8.11;
									}
								}
								else
								{
									if(payload < 5.5)
										return 2.21;
									else
										return 2.91;
								}
							}
							else
							{
								if(rsrq < -8.5)
								{
									if(rsrq < -10.5)
										return 4.19;
									else
										return 11.97;
								}
								else
								{
									if(sinr < 1.5)
										return 2.61;
									else
										return 6.42;
								}
							}
						}
					}
					else
					{
						if(velocity < 8.92)
						{
							if(rsrp < -106)
							{
								if(rsrq < -9.5)
									return 21.9;
								else
									return 19.02;
							}
							else
							{
								if(payload < 5.5)
									return 14.92;
								else
								{
									if(rsrp < -104)
										return 9.3;
									else
										return 11.53;
								}
							}
						}
						else
						{
							if(velocity < 9.59)
								return 3.54;
							else
							{
								if(payload < 9.5)
								{
									if(sinr < 8)
									{
										if(sinr < -3)
											return 14.4;
										else
										{
											if(rsrp < -108)
											{
												if(payload < 5.5)
													return 8.98;
												else
													return 14.22;
											}
											else
											{
												if(payload < 7.5)
												{
													if(velocity < 30.215)
													{
														if(sinr < 0.5)
															return 4.8;
														else
														{
															if(rsrp < -103.5)
															{
																if(velocity < 10.905)
																{
																	if(payload < 6)
																		return 9.86;
																	else
																		return 8.89;
																}
																else
																{
																	if(rsrp < -104.5)
																	{
																		if(velocity < 19.63)
																		{
																			if(velocity < 14.435)
																				return 7.3933333333;
																			else
																				return 6.93;
																		}
																		else
																			return 5.96;
																	}
																	else
																		return 8;
																}
															}
															else
																return 11.42;
														}
													}
													else
														return 10.23;
												}
												else
												{
													if(rsrq < -9.5)
													{
														if(sinr < 1.5)
														{
															if(sinr < 0.5)
															{
																if(rsrp < -105)
																	return 9.7;
																else
																	return 10.38;
															}
															else
																return 8.93;
														}
														else
														{
															if(rsrq < -11.5)
																return 11.91;
															else
																return 14.7;
														}
													}
													else
														return 7.02;
												}
											}
										}
									}
									else
										return 12.62;
								}
								else
								{
									if(velocity < 11.925)
									{
										if(rsrp < -104)
											return 8.35;
										else
											return 13.5;
									}
									else
									{
										if(rsrp < -106.5)
											return 10.28;
										else
										{
											if(rsrq < -8.5)
											{
												if(rsrp < -105.5)
													return 18.13;
												else
													return 14.98;
											}
											else
												return 21.8;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if(f < 1384.5)
						return 2.67;
					else
					{
						if(sinr < 7.5)
						{
							if(velocity < 14.735)
							{
								if(sinr < -1.5)
								{
									if(velocity < 12.05)
									{
										if(sinr < -2.5)
										{
											if(rsrq < -11)
											{
												if(sinr < -3.5)
													return 9.87;
												else
													return 8.81;
											}
											else
												return 12.49;
										}
										else
										{
											if(payload < 7)
											{
												if(rsrq < -11.5)
													return 15.39;
												else
													return 12.35;
											}
											else
												return 10.6;
										}
									}
									else
									{
										if(velocity < 14.11)
											return 4.97;
										else
											return 9.28;
									}
								}
								else
								{
									if(rsrp < -98.5)
									{
										if(payload < 7.5)
										{
											if(rsrq < -8.5)
											{
												if(rsrp < -99.5)
												{
													if(rsrq < -10.5)
														return 5.78;
													else
													{
														if(payload < 6.5)
														{
															if(rsrp < -100.5)
																return 10.575;
															else
																return 9.19;
														}
														else
															return 5.58;
													}
												}
												else
												{
													if(sinr < 0)
														return 22.21;
													else
														return 12.57;
												}
											}
											else
											{
												if(payload < 6.5)
													return 7.27;
												else
													return 4.54;
											}
										}
										else
										{
											if(sinr < 5.5)
											{
												if(payload < 9.5)
												{
													if(f < 2232.5)
													{
														if(payload < 8.5)
														{
															if(sinr < 4.5)
																return 11.05;
															else
																return 9.47;
														}
														else
															return 9.19;
													}
													else
														return 12.41;
												}
												else
													return 15.59;
											}
											else
											{
												if(rsrp < -99.5)
												{
													if(payload < 8.5)
														return 19.33;
													else
														return 20.5;
												}
												else
												{
													if(sinr < 6.5)
														return 13.73;
													else
													{
														if(payload < 8.5)
															return 18.53;
														else
															return 13.54;
													}
												}
											}
										}
									}
									else
									{
										if(rsrp < -97.5)
										{
											if(payload < 5.5)
											{
												if(velocity < 13.875)
												{
													if(sinr < 5.5)
														return 9.9;
													else
														return 12.53;
												}
												else
													return 16.79;
											}
											else
											{
												if(velocity < 1.35)
													return 19.79;
												else
												{
													if(payload < 8.5)
													{
														if(payload < 6.5)
															return 15.55;
														else
															return 16.26;
													}
													else
													{
														if(sinr < 5)
														{
															if(velocity < 5.645)
																return 12.72;
															else
																return 11.24;
														}
														else
															return 16.78;
													}
												}
											}
										}
										else
										{
											if(velocity < 13.125)
											{
												if(velocity < 8.11)
												{
													if(rsrp < -93.5)
													{
														if(sinr < 3)
														{
															if(velocity < 1.045)
															{
																if(rsrq < -9.5)
																	return 16.86;
																else
																	return 13.25;
															}
															else
															{
																if(sinr < 0.5)
																	return 11.87;
																else
																	return 11.07;
															}
														}
														else
														{
															if(rsrp < -94.5)
															{
																if(rsrp < -95.5)
																	return 20.28;
																else
																	return 17.95;
															}
															else
															{
																if(velocity < 7)
																{
																	if(velocity < 2.96)
																		return 14.4;
																	else
																		return 12.73;
																}
																else
																	return 16.38;
															}
														}
													}
													else
													{
														if(payload < 5.5)
															return 7.68;
														else
														{
															if(sinr < 0)
																return 15.8;
															else
																return 10.47;
														}
													}
												}
												else
												{
													if(velocity < 13.02)
													{
														if(rsrp < -93.5)
														{
															if(sinr < 1.5)
															{
																if(velocity < 10.37)
																	return 9.47;
																else
																	return 8.81;
															}
															else
															{
																if(payload < 9.5)
																{
																	if(rsrq < -9)
																	{
																		if(rsrp < -95)
																		{
																			if(rsrq < -10.5)
																				return 10.36;
																			else
																			{
																				if(payload < 7)
																					return 11.83;
																				else
																					return 10.8;
																			}
																		}
																		else
																			return 10.36;
																	}
																	else
																	{
																		if(f < 2232.5)
																			return 12.78;
																		else
																			return 11.3;
																	}
																}
																else
																	return 15.1;
															}
														}
														else
															return 14.12;
													}
													else
														return 5.42;
												}
											}
											else
											{
												if(rsrp < -96.5)
													return 24.53;
												else
												{
													if(rsrq < -10.5)
													{
														if(rsrp < -95.5)
															return 22.2;
														else
															return 12.49;
													}
													else
													{
														if(rsrq < -8.5)
														{
															if(velocity < 13.785)
															{
																if(payload < 8.5)
																	return 14.21;
																else
																{
																	if(sinr < 0)
																		return 10.94;
																	else
																		return 11.77;
																}
															}
															else
															{
																if(rsrp < -95.5)
																	return 7.98;
																else
																	return 8.46;
															}
														}
														else
															return 16.04;
													}
												}
											}
										}
									}
								}
							}
							else
							{
								if(sinr < -5)
									return 8.7;
								else
								{
									if(velocity < 14.76)
										return 20.69;
									else
									{
										if(sinr < 0.5)
										{
											if(payload < 5.5)
												return 13.2;
											else
											{
												if(rsrq < -9.5)
												{
													if(velocity < 15.195)
														return 16.21;
													else
														return 17.5733333333;
												}
												else
													return 19.34;
											}
										}
										else
										{
											if(rsrq < -10.5)
												return 10.4;
											else
											{
												if(rsrp < -101.5)
													return 10.91;
												else
												{
													if(sinr < 4.5)
													{
														if(sinr < 1.5)
														{
															if(payload < 8)
																return 16.53;
															else
																return 14.79;
														}
														else
														{
															if(velocity < 33.495)
															{
																if(velocity < 25.835)
																{
																	if(rsrp < -100)
																		return 16.56;
																	else
																		return 14.08;
																}
																else
																	return 6.89;
															}
															else
															{
																if(payload < 6.5)
																	return 16.79;
																else
																	return 14.43;
															}
														}
													}
													else
													{
														if(rsrq < -9.5)
															return 17.09;
														else
														{
															if(sinr < 5.5)
															{
																if(rsrp < -95.5)
																	return 19.36;
																else
																	return 19.84;
															}
															else
																return 19.93;
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
							if(velocity < 24.64)
							{
								if(payload < 9.5)
								{
									if(f < 2232.5)
									{
										if(velocity < 11.865)
										{
											if(velocity < 3.61)
											{
												if(rsrp < -99)
												{
													if(payload < 7.5)
														return 18.33;
													else
														return 20.13;
												}
												else
												{
													if(payload < 8)
													{
														if(rsrp < -93.5)
															return 14.31;
														else
														{
															if(sinr < 18.5)
																return 15.05;
															else
															{
																if(sinr < 19.5)
																	return 8.76;
																else
																	return 13.67;
															}
														}
													}
													else
														return 6.04;
												}
											}
											else
											{
												if(velocity < 7.195)
												{
													if(payload < 6)
														return 22.14;
													else
														return 20.6;
												}
												else
												{
													if(rsrp < -99.5)
														return 20.54;
													else
													{
														if(rsrq < -9.5)
															return 18.33;
														else
														{
															if(payload < 6)
															{
																if(rsrq < -8.5)
																	return 14.06;
																else
																	return 14.91;
															}
															else
																return 15.89;
														}
													}
												}
											}
										}
										else
										{
											if(velocity < 14.695)
											{
												if(rsrp < -100.5)
												{
													if(payload < 6)
														return 5.43;
													else
														return 11.34;
												}
												else
												{
													if(rsrp < -94.5)
													{
														if(rsrq < -10)
															return 12.91;
														else
														{
															if(sinr < 10)
																return 15.1866666667;
															else
																return 17.29;
														}
													}
													else
														return 9.7;
												}
											}
											else
											{
												if(rsrq < -8.5)
												{
													if(rsrp < -98.5)
														return 5.36;
													else
														return 7.74;
												}
												else
													return 10.14;
											}
										}
									}
									else
									{
										if(velocity < 6.345)
											return 22.06;
										else
										{
											if(velocity < 14.765)
											{
												if(rsrp < -96.5)
													return 18.28;
												else
													return 17.67;
											}
											else
												return 19.61;
										}
									}
								}
								else
								{
									if(sinr < 10)
									{
										if(rsrp < -98.5)
											return 19.98;
										else
										{
											if(sinr < 8.5)
												return 22.19;
											else
												return 23.44;
										}
									}
									else
										return 14.7833333333;
								}
							}
							else
								return 19.764;
						}
					}
				}
			}
		}
		else
		{
			if(payload < 2.5)
			{
				if(payload < 1.5)
				{
					if(sinr < -6.5)
						return 0.47;
					else
					{
						if(rsrp < -79.5)
						{
							if(f < 1384.5)
								return 0.72;
							else
							{
								if(velocity < 0.325)
								{
									if(rsrq < -8.5)
									{
										if(rsrp < -89.5)
										{
											if(sinr < 8.5)
												return 5.18;
											else
												return 4.356;
										}
										else
											return 2.96;
									}
									else
									{
										if(rsrp < -88)
											return 5.4675;
										else
											return 5;
									}
								}
								else
								{
									if(velocity < 27.635)
									{
										if(velocity < 6.67)
										{
											if(rsrp < -83.5)
												return 8.58;
											else
												return 9.39;
										}
										else
										{
											if(velocity < 8.19)
											{
												if(sinr < 13)
													return 5.44;
												else
													return 2.76;
											}
											else
											{
												if(sinr < 2.5)
												{
													if(velocity < 16.56)
													{
														if(rsrp < -83)
														{
															if(sinr < -2)
																return 9.62;
															else
															{
																if(sinr < -0.5)
																	return 6.3;
																else
																{
																	if(sinr < 0.5)
																		return 9.2;
																	else
																	{
																		if(rsrq < -10.5)
																			return 7.89;
																		else
																			return 7.25;
																	}
																}
															}
														}
														else
															return 9.89;
													}
													else
														return 4;
												}
												else
												{
													if(payload < 0.3)
													{
														if(velocity < 13.745)
														{
															if(rsrp < -88.5)
																return 5.67;
															else
															{
																if(sinr < 16)
																{
																	if(rsrp < -83.5)
																		return 3.52;
																	else
																		return 2.48;
																}
																else
																	return 4.73;
															}
														}
														else
														{
															if(rsrp < -84)
															{
																if(rsrq < -9.5)
																	return 6.61;
																else
																{
																	if(rsrp < -88)
																		return 8.42;
																	else
																		return 7.62;
																}
															}
															else
																return 5.13;
														}
													}
													else
													{
														if(sinr < 21)
														{
															if(velocity < 13.645)
															{
																if(rsrq < -8.5)
																	return 6;
																else
																{
																	if(sinr < 13.5)
																	{
																		if(rsrp < -89)
																			return 7.2566666667;
																		else
																			return 6.475;
																	}
																	else
																		return 8.264;
																}
															}
															else
															{
																if(rsrq < -8.5)
																{
																	if(rsrp < -88)
																		return 4.6;
																	else
																		return 3.15;
																}
																else
																{
																	if(rsrp < -84.5)
																		return 7.62;
																	else
																		return 7.12;
																}
															}
														}
														else
															return 3.39;
													}
												}
											}
										}
									}
									else
									{
										if(rsrp < -82.5)
										{
											if(rsrq < -11.5)
												return 8.7;
											else
											{
												if(payload < 0.75)
													return 11.36;
												else
													return 10.04;
											}
										}
										else
											return 8.6;
									}
								}
							}
						}
						else
						{
							if(velocity < 4.14)
							{
								if(rsrp < -69.5)
								{
									if(rsrp < -73.5)
										return 9.72;
									else
										return 11.63;
								}
								else
									return 22.86;
							}
							else
							{
								if(payload < 0.75)
								{
									if(velocity < 19.98)
									{
										if(velocity < 10.455)
											return 3.32;
										else
										{
											if(rsrq < -8.5)
												return 3.73;
											else
												return 6.72;
										}
									}
									else
										return 11.43;
								}
								else
									return 18.74;
							}
						}
					}
				}
				else
				{
					if(f < 1384.5)
						return 1.24;
					else
					{
						if(sinr < 10)
						{
							if(velocity < 25.755)
							{
								if(rsrq < -8.5)
								{
									if(sinr < 4)
										return 9.69;
									else
									{
										if(rsrq < -10.5)
											return 7.36;
										else
											return 8.5733333333;
									}
								}
								else
								{
									if(rsrp < -89)
									{
										if(velocity < 9.405)
											return 9.07;
										else
											return 8.525;
									}
									else
										return 9.63;
								}
							}
							else
								return 16.91;
						}
						else
						{
							if(f < 2232.5)
							{
								if(rsrq < -9)
									return 13.9025;
								else
									return 14.9666666667;
							}
							else
								return 10.32;
						}
					}
				}
			}
			else
			{
				if(rsrq < -10.5)
				{
					if(sinr < -4)
					{
						if(rsrq < -13)
							return 1.69;
						else
						{
							if(rsrp < -87.5)
								return 2.46;
							else
								return 4.97;
						}
					}
					else
					{
						if(payload < 6)
						{
							if(rsrq < -11.5)
							{
								if(sinr < 5.5)
									return 10.71;
								else
									return 11.98;
							}
							else
							{
								if(velocity < 1.79)
									return 2.73;
								else
								{
									if(sinr < 6)
										return 7.62;
									else
										return 6.78;
								}
							}
						}
						else
						{
							if(rsrp < -90.5)
							{
								if(rsrp < -91.5)
									return 18;
								else
									return 20.39;
							}
							else
							{
								if(velocity < 15.68)
								{
									if(payload < 8.5)
									{
										if(velocity < 6.555)
										{
											if(sinr < 5)
												return 13.52;
											else
												return 10.39;
										}
										else
											return 11.85;
									}
									else
										return 12.49;
								}
								else
									return 15.92;
							}
						}
					}
				}
				else
				{
					if(f < 1384.5)
					{
						if(rsrp < -63)
						{
							if(payload < 9.5)
							{
								if(rsrp < -71)
									return 8.09;
								else
									return 7.28;
							}
							else
								return 4.55;
						}
						else
						{
							if(payload < 5.5)
								return 13.74;
							else
								return 17.17;
						}
					}
					else
					{
						if(payload < 5.5)
						{
							if(velocity < 15.005)
							{
								if(rsrq < -8.5)
								{
									if(velocity < 12.385)
									{
										if(sinr < 21)
										{
											if(velocity < 10.45)
											{
												if(rsrp < -81.5)
												{
													if(f < 2232.5)
													{
														if(sinr < 3.5)
															return 15.93;
														else
														{
															if(velocity < 5.1)
																return 11.2433333333;
															else
																return 13.34;
														}
													}
													else
													{
														if(sinr < 18)
															return 19.39;
														else
															return 12.76;
													}
												}
												else
													return 10.57;
											}
											else
												return 8.87;
										}
										else
										{
											if(sinr < 23.5)
												return 6.39;
											else
												return 11.24;
										}
									}
									else
									{
										if(payload < 4.5)
										{
											if(velocity < 12.77)
											{
												if(rsrp < -90.5)
													return 9.35;
												else
													return 10.49;
											}
											else
											{
												if(rsrp < -82.5)
												{
													if(rsrp < -84.5)
													{
														if(velocity < 14.91)
														{
															if(sinr < 3)
																return 13.49;
															else
															{
																if(rsrq < -9.5)
																	return 15.79;
																else
																	return 14.8233333333;
															}
														}
														else
															return 18.05;
													}
													else
														return 13.58;
												}
												else
													return 11;
											}
										}
										else
										{
											if(f < 2232.5)
											{
												if(velocity < 12.84)
													return 17.06;
												else
												{
													if(rsrp < -88.5)
														return 16.8;
													else
													{
														if(velocity < 14.04)
														{
															if(sinr < 8)
																return 14.49;
															else
																return 12.78;
														}
														else
															return 11.68;
													}
												}
											}
											else
												return 18.89;
										}
									}
								}
								else
								{
									if(rsrp < -83.5)
									{
										if(sinr < 14.5)
										{
											if(velocity < 9.56)
											{
												if(sinr < 10.5)
												{
													if(rsrp < -88.5)
														return 11.13;
													else
													{
														if(f < 2232.5)
															return 13.415;
														else
															return 12.77;
													}
												}
												else
													return 15.64;
											}
											else
											{
												if(rsrp < -91.5)
												{
													if(payload < 4.5)
														return 13.14;
													else
														return 10.39;
												}
												else
												{
													if(payload < 3.5)
														return 9.13;
													else
														return 10.02;
												}
											}
										}
										else
										{
											if(velocity < 10.99)
											{
												if(velocity < 6.77)
												{
													if(sinr < 19.5)
														return 14.7866666667;
													else
														return 15.58;
												}
												else
													return 6.3;
											}
											else
												return 23.84;
										}
									}
									else
									{
										if(sinr < 31.5)
										{
											if(rsrp < -73.5)
											{
												if(rsrp < -82.5)
													return 17.29;
												else
												{
													if(rsrp < -79.5)
													{
														if(payload < 4.5)
															return 20.55;
														else
															return 22.98;
													}
													else
													{
														if(payload < 4.5)
															return 20.65;
														else
															return 18.76;
													}
												}
											}
											else
												return 14.79;
										}
										else
											return 25.86;
									}
								}
							}
							else
							{
								if(rsrp < -86)
								{
									if(rsrq < -8.5)
									{
										if(payload < 4.5)
											return 11.98;
										else
											return 12.82;
									}
									else
									{
										if(velocity < 16.565)
											return 17.03;
										else
											return 14.04;
									}
								}
								else
								{
									if(sinr < 9.5)
									{
										if(rsrp < -83)
										{
											if(rsrq < -8.5)
												return 7.01;
											else
												return 10.05;
										}
										else
										{
											if(sinr < 4.5)
												return 13.66;
											else
												return 16.11;
										}
									}
									else
									{
										if(rsrp < -82)
											return 9.61;
										else
											return 8.04;
									}
								}
							}
						}
						else
						{
							if(velocity < 8.43)
							{
								if(f < 2232.5)
								{
									if(sinr < 26.5)
									{
										if(sinr < 5.5)
										{
											if(payload < 7.5)
												return 19.74;
											else
											{
												if(velocity < 3.75)
													return 17.21;
												else
													return 15.31;
											}
										}
										else
										{
											if(rsrp < -89.5)
											{
												if(sinr < 13.5)
												{
													if(rsrq < -9.5)
														return 11.97;
													else
													{
														if(sinr < 7.5)
															return 14.248;
														else
														{
															if(payload < 7.5)
																return 10.62;
															else
																return 11.9033333333;
														}
													}
												}
												else
												{
													if(rsrp < -91)
														return 15.58;
													else
														return 16.27;
												}
											}
											else
											{
												if(velocity < 2.54)
												{
													if(rsrq < -9)
													{
														if(payload < 6.5)
															return 18.2;
														else
														{
															if(rsrp < -84.5)
																return 15.09;
															else
																return 14.11;
														}
													}
													else
														return 13.56;
												}
												else
												{
													if(rsrq < -9.5)
														return 23.07;
													else
													{
														if(rsrp < -87.5)
															return 14.79;
														else
															return 18.39;
													}
												}
											}
										}
									}
									else
										return 24.48;
								}
								else
								{
									if(rsrp < -89.5)
									{
										if(payload < 8.5)
										{
											if(velocity < 1.665)
												return 18.74;
											else
												return 17.51;
										}
										else
										{
											if(payload < 9.5)
												return 21.11;
											else
												return 24.3;
										}
									}
									else
									{
										if(payload < 9.5)
										{
											if(rsrp < -87.5)
											{
												if(sinr < 11.5)
													return 12.11;
												else
												{
													if(rsrq < -8.5)
														return 19.07;
													else
														return 16.56;
												}
											}
											else
											{
												if(rsrp < -70.5)
												{
													if(payload < 7.5)
														return 13.71;
													else
													{
														if(payload < 8.5)
															return 15.08;
														else
															return 13.84;
													}
												}
												else
													return 15.95;
											}
										}
										else
											return 17.95;
									}
								}
							}
							else
							{
								if(sinr < 3.5)
								{
									if(velocity < 13.92)
									{
										if(rsrp < -90.5)
											return 14.67;
										else
										{
											if(velocity < 10.35)
												return 22.27;
											else
											{
												if(sinr < 1.5)
												{
													if(payload < 7.5)
														return 18.87;
													else
														return 20.74;
												}
												else
												{
													if(velocity < 12.59)
														return 16.88;
													else
														return 19.04;
												}
											}
										}
									}
									else
									{
										if(velocity < 14.35)
											return 10.58;
										else
										{
											if(rsrq < -8.5)
											{
												if(rsrp < -88.5)
												{
													if(payload < 7.5)
														return 15.57;
													else
														return 14.39;
												}
												else
												{
													if(rsrp < -87.5)
														return 13.86;
													else
														return 13.13;
												}
											}
											else
												return 18.39;
										}
									}
								}
								else
								{
									if(rsrq < -9.5)
									{
										if(velocity < 11.82)
										{
											if(payload < 7.5)
												return 17.69;
											else
												return 23.69;
										}
										else
										{
											if(f < 2232.5)
											{
												if(sinr < 9.5)
													return 13.45;
												else
												{
													if(sinr < 18.5)
														return 33.26;
													else
														return 25.47;
												}
											}
											else
												return 38.54;
										}
									}
									else
									{
										if(payload < 9.5)
										{
											if(rsrp < -82.5)
											{
												if(sinr < 20.5)
												{
													if(velocity < 13.22)
													{
														if(payload < 8.5)
														{
															if(payload < 7.5)
															{
																if(sinr < 7.5)
																	return 22.76;
																else
																	return 19.35;
															}
															else
															{
																if(rsrp < -87.5)
																	return 24.56;
																else
																	return 25.46;
															}
														}
														else
														{
															if(rsrp < -91.5)
																return 14.58;
															else
															{
																if(rsrp < -90.5)
																	return 23.97;
																else
																{
																	if(sinr < 13)
																		return 16.95;
																	else
																		return 15.24;
																}
															}
														}
													}
													else
													{
														if(rsrq < -8.5)
														{
															if(sinr < 18)
															{
																if(payload < 7)
																	return 11.74;
																else
																{
																	if(payload < 8.5)
																		return 14.44;
																	else
																		return 15.08;
																}
															}
															else
																return 7.48;
														}
														else
														{
															if(payload < 6.5)
															{
																if(velocity < 32.395)
																	return 15.67;
																else
																	return 18.7;
															}
															else
															{
																if(rsrp < -89)
																	return 16.35;
																else
																	return 10.98;
															}
														}
													}
												}
												else
												{
													if(payload < 7)
													{
														if(sinr < 27)
														{
															if(rsrp < -90.5)
																return 24.43;
															else
															{
																if(rsrp < -86)
																	return 22.96;
																else
																	return 23.54;
															}
														}
														else
															return 19.38;
													}
													else
													{
														if(velocity < 12.34)
															return 16.03;
														else
															return 14.64;
													}
												}
											}
											else
											{
												if(velocity < 12.92)
												{
													if(rsrq < -8.5)
														return 15.94;
													else
														return 18.39;
												}
												else
												{
													if(rsrp < -81.5)
													{
														if(payload < 7.5)
															return 23.53;
														else
															return 22.46;
													}
													else
													{
														if(sinr < 23.5)
														{
															if(rsrp < -77.5)
																return 25.13;
															else
																return 23.23;
														}
														else
															return 28.2;
													}
												}
											}
										}
										else
										{
											if(sinr < 13)
											{
												if(velocity < 14.815)
												{
													if(rsrp < -89.5)
														return 26.49;
													else
														return 24.92;
												}
												else
													return 22.55;
											}
											else
											{
												if(rsrq < -8.5)
												{
													if(rsrp < -85)
														return 17.97;
													else
														return 17.47;
												}
												else
												{
													if(rsrp < -85)
													{
														if(velocity < 10.875)
															return 20.24;
														else
															return 19.21;
													}
													else
														return 22.81;
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
		if(payload < 3.5)
		{
			if(f < 1384.5)
			{
				if(velocity < 32.31)
				{
					if(velocity < 27.86)
					{
						if(f < 912)
							return 5.44;
						else
						{
							if(rsrp < -72)
								return 2.52;
							else
								return 4.82;
						}
					}
					else
						return 10.4;
				}
				else
				{
					if(rsrq < -6.5)
						return 0.85;
					else
						return 2.98;
				}
			}
			else
			{
				if(rsrp < -92.5)
				{
					if(rsrq < -6.5)
					{
						if(velocity < 7.95)
						{
							if(sinr < 7)
							{
								if(payload < 2.5)
								{
									if(payload < 1.25)
										return 6.71;
									else
										return 8.24;
								}
								else
									return 11.74;
							}
							else
							{
								if(payload < 0.75)
								{
									if(rsrp < -93.5)
									{
										if(sinr < 11.5)
											return 2.765;
										else
											return 3.27;
									}
									else
										return 4.19;
								}
								else
								{
									if(velocity < 3.545)
										return 8.66;
									else
										return 6.57;
								}
							}
						}
						else
						{
							if(sinr < 14.5)
							{
								if(rsrp < -99)
								{
									if(velocity < 20.665)
										return 8.25;
									else
									{
										if(sinr < 11.5)
										{
											if(velocity < 32.41)
												return 5.07;
											else
												return 4.31;
										}
										else
											return 2.86;
									}
								}
								else
								{
									if(velocity < 11.515)
									{
										if(sinr < 7.5)
											return 4.19;
										else
											return 5.67;
									}
									else
									{
										if(rsrp < -95.5)
										{
											if(velocity < 12.67)
												return 3.41;
											else
												return 2.32;
										}
										else
										{
											if(payload < 1.05)
												return 3.83;
											else
												return 2.84;
										}
									}
								}
							}
							else
							{
								if(velocity < 13.125)
									return 3.21;
								else
								{
									if(payload < 1.75)
										return 8.99;
									else
										return 5.36;
								}
							}
						}
					}
					else
					{
						if(rsrp < -95.5)
						{
							if(velocity < 7.655)
								return 9.64;
							else
							{
								if(rsrp < -99.5)
									return 4.3933333333;
								else
								{
									if(rsrp < -96.5)
									{
										if(velocity < 9.5)
											return 5.16;
										else
											return 6.184;
									}
									else
										return 4.04;
								}
							}
						}
						else
						{
							if(payload < 1.5)
							{
								if(sinr < 22.5)
								{
									if(payload < 0.75)
									{
										if(velocity < 0.94)
											return 6.67;
										else
											return 5.77;
									}
									else
										return 7.205;
								}
								else
									return 9.88;
							}
							else
							{
								if(rsrq < -5.5)
								{
									if(velocity < 9.88)
										return 15.07;
									else
										return 11.67;
								}
								else
									return 4.66;
							}
						}
					}
				}
				else
				{
					if(sinr < 27.5)
					{
						if(payload < 1.5)
						{
							if(rsrq < -4.5)
							{
								if(rsrq < -6.5)
								{
									if(payload < 0.3)
									{
										if(sinr < 17.5)
										{
											if(sinr < 4.5)
											{
												if(rsrp < -86.5)
													return 5.06;
												else
													return 8.08;
											}
											else
											{
												if(velocity < 12.68)
													return 4.58;
												else
												{
													if(sinr < 7)
														return 5.41;
													else
													{
														if(rsrp < -86.5)
														{
															if(sinr < 10.5)
																return 5.59;
															else
																return 6.67;
														}
														else
															return 4.4;
													}
												}
											}
										}
										else
										{
											if(f < 2232.5)
											{
												if(velocity < 12.025)
												{
													if(velocity < 5.385)
													{
														if(velocity < 1.94)
															return 4.85;
														else
															return 3.98;
													}
													else
														return 5.13;
												}
												else
													return 3.05;
											}
											else
												return 2.62;
										}
									}
									else
									{
										if(velocity < 8.81)
										{
											if(sinr < 7.5)
												return 4.62;
											else
											{
												if(velocity < 4.29)
												{
													if(rsrp < -84.5)
													{
														if(sinr < 10)
															return 8.78;
														else
														{
															if(f < 2232.5)
															{
																if(rsrp < -85.5)
																{
																	if(sinr < 13.5)
																		return 6.82;
																	else
																		return 6.265;
																}
																else
																	return 7.31;
															}
															else
															{
																if(velocity < 1.665)
																{
																	if(sinr < 19.5)
																		return 6.5;
																	else
																		return 5.94;
																}
																else
																	return 6.55;
															}
														}
													}
													else
													{
														if(f < 2232.5)
															return 8.21;
														else
														{
															if(payload < 0.75)
																return 14.71;
															else
															{
																if(sinr < 11)
																	return 5.23;
																else
																	return 7.37;
															}
														}
													}
												}
												else
												{
													if(sinr < 17.5)
													{
														if(rsrp < -91.5)
															return 4.09;
														else
														{
															if(payload < 0.75)
																return 5.08;
															else
																return 5.74;
														}
													}
													else
														return 7.41;
												}
											}
										}
										else
										{
											if(velocity < 13.985)
											{
												if(sinr < 12)
												{
													if(rsrp < -90)
													{
														if(velocity < 11.01)
															return 8.26;
														else
														{
															if(f < 2232.5)
																return 6.28;
															else
																return 5.28;
														}
													}
													else
													{
														if(velocity < 10.9)
														{
															if(sinr < 1.5)
																return 8.62;
															else
															{
																if(velocity < 9.845)
																	return 6.6;
																else
																	return 4.74;
															}
														}
														else
														{
															if(rsrp < -86)
																return 10.46;
															else
																return 8.64;
														}
													}
												}
												else
												{
													if(sinr < 14.5)
													{
														if(velocity < 11.905)
															return 7.17;
														else
															return 11.53;
													}
													else
													{
														if(rsrp < -77.5)
														{
															if(sinr < 16.5)
																return 6.11;
															else
															{
																if(rsrp < -88.5)
																	return 8.58;
																else
																	return 7.7866666667;
															}
														}
														else
															return 9.39;
													}
												}
											}
											else
											{
												if(velocity < 14)
													return 4.63;
												else
												{
													if(sinr < 9.5)
													{
														if(rsrp < -83.5)
															return 9.41;
														else
															return 10.2;
													}
													else
													{
														if(rsrp < -91.5)
															return 3.93;
														else
														{
															if(velocity < 25.335)
																return 6.06;
															else
																return 5.5533333333;
														}
													}
												}
											}
										}
									}
								}
								else
								{
									if(payload < 0.3)
									{
										if(rsrp < -72)
										{
											if(sinr < -0.5)
												return 0.07;
											else
											{
												if(velocity < 23.32)
												{
													if(sinr < 13.5)
													{
														if(velocity < 14.53)
														{
															if(velocity < 8.86)
																return 4.62;
															else
															{
																if(velocity < 10.67)
																	return 7.69;
																else
																	return 6.164;
															}
														}
														else
														{
															if(rsrp < -85.5)
																return 4.23;
															else
																return 4.97;
														}
													}
													else
													{
														if(sinr < 22.5)
														{
															if(rsrp < -84)
															{
																if(velocity < 4.38)
																	return 5.2825;
																else
																{
																	if(sinr < 20)
																		return 5.3975;
																	else
																		return 6.84;
																}
															}
															else
															{
																if(rsrp < -79.5)
																	return 4.4414285714;
																else
																{
																	if(rsrp < -73.5)
																	{
																		if(rsrq < -5.5)
																			return 7.55;
																		else
																		{
																			if(sinr < 20.5)
																				return 5.93;
																			else
																			{
																				if(velocity < 5.075)
																					return 5.8;
																				else
																					return 4.71;
																			}
																		}
																	}
																	else
																		return 4.62;
																}
															}
														}
														else
														{
															if(sinr < 23.5)
																return 4.06;
															else
															{
																if(rsrp < -82.5)
																{
																	if(velocity < 18.99)
																		return 4.235;
																	else
																		return 5.06;
																}
																else
																	return 5.3;
															}
														}
													}
												}
												else
												{
													if(rsrp < -80.5)
													{
														if(rsrp < -85)
															return 6.61;
														else
															return 10.26;
													}
													else
														return 4.19;
												}
											}
										}
										else
											return 13.33;
									}
									else
									{
										if(sinr < 5.5)
										{
											if(velocity < 21.96)
												return 6.2325;
											else
												return 7.07;
										}
										else
										{
											if(velocity < 29.715)
											{
												if(rsrp < -87.5)
												{
													if(rsrp < -88.5)
													{
														if(payload < 0.75)
														{
															if(rsrq < -5.5)
															{
																if(rsrp < -89.5)
																{
																	if(velocity < 11.91)
																		return 8.7;
																	else
																		return 7.78;
																}
																else
																	return 4.6;
															}
															else
															{
																if(f < 2232.5)
																	return 10.39;
																else
																	return 8.93;
															}
														}
														else
														{
															if(velocity < 13.665)
															{
																if(f < 2232.5)
																{
																	if(velocity < 9.31)
																		return 9.51;
																	else
																		return 2.92;
																}
																else
																	return 9.474;
															}
															else
															{
																if(velocity < 15.535)
																	return 14.44;
																else
																	return 9.45;
															}
														}
													}
													else
													{
														if(f < 2232.5)
														{
															if(payload < 0.75)
																return 10.72;
															else
															{
																if(sinr < 22.5)
																{
																	if(rsrq < -5.5)
																		return 3.83;
																	else
																		return 4.37;
																}
																else
																	return 7.37;
															}
														}
														else
															return 6.55;
													}
												}
												else
												{
													if(rsrp < -86.5)
													{
														if(sinr < 15.5)
															return 12.29;
														else
															return 14.13;
													}
													else
													{
														if(velocity < 16.805)
														{
															if(velocity < 8.75)
															{
																if(sinr < 16.5)
																	return 21.16;
																else
																{
																	if(sinr < 20.5)
																	{
																		if(payload < 0.75)
																			return 5.87;
																		else
																			return 10.54;
																	}
																	else
																	{
																		if(payload < 0.75)
																		{
																			if(sinr < 22.5)
																				return 7.48;
																			else
																			{
																				if(rsrp < -75)
																					return 8.64;
																				else
																					return 12.46;
																			}
																		}
																		else
																		{
																			if(sinr < 21.5)
																				return 13.45;
																			else
																				return 10.48;
																		}
																	}
																}
															}
															else
															{
																if(sinr < 16.5)
																{
																	if(rsrq < -5.5)
																	{
																		if(sinr < 10)
																		{
																			if(payload < 0.75)
																				return 8.89;
																			else
																			{
																				if(rsrp < -85.5)
																					return 7.51;
																				else
																					return 5.65;
																			}
																		}
																		else
																		{
																			if(velocity < 14.11)
																			{
																				if(rsrp < -82.5)
																					return 9.17;
																				else
																					return 8.49;
																			}
																			else
																			{
																				if(velocity < 14.545)
																					return 12.97;
																				else
																					return 9.64;
																			}
																		}
																	}
																	else
																	{
																		if(sinr < 12.5)
																			return 10.5;
																		else
																		{
																			if(rsrp < -84.5)
																			{
																				if(rsrp < -85.5)
																					return 6.36;
																				else
																					return 5.49;
																			}
																			else
																				return 7.7;
																		}
																	}
																}
																else
																{
																	if(payload < 0.75)
																	{
																		if(rsrp < -84)
																		{
																			if(rsrq < -5.5)
																				return 4.33;
																			else
																				return 7.6;
																		}
																		else
																		{
																			if(sinr < 17.5)
																				return 6.42;
																			else
																			{
																				if(velocity < 14.62)
																				{
																					if(velocity < 14.43)
																					{
																						if(rsrp < -79.5)
																						{
																							if(velocity < 10.38)
																								return 8.53;
																							else
																								return 8.0433333333;
																						}
																						else
																						{
																							if(rsrp < -76)
																								return 9.0866666667;
																							else
																							{
																								if(rsrp < -73.5)
																									return 10.78;
																								else
																								{
																									if(velocity < 9.89)
																										return 9.73;
																									else
																										return 9.24;
																								}
																							}
																						}
																					}
																					else
																						return 9.8;
																				}
																				else
																					return 8.0733333333;
																			}
																		}
																	}
																	else
																	{
																		if(velocity < 13.355)
																		{
																			if(rsrq < -5.5)
																				return 13.91;
																			else
																				return 10.9633333333;
																		}
																		else
																		{
																			if(rsrp < -75)
																			{
																				if(sinr < 20)
																					return 7.58;
																				else
																					return 8.6275;
																			}
																			else
																				return 7.46;
																		}
																	}
																}
															}
														}
														else
														{
															if(sinr < 21)
															{
																if(sinr < 14.5)
																{
																	if(velocity < 18.805)
																		return 10.62;
																	else
																	{
																		if(payload < 0.75)
																			return 8.57;
																		else
																			return 9.28;
																	}
																}
																else
																	return 12.33;
															}
															else
															{
																if(rsrp < -83.5)
																	return 18.26;
																else
																	return 13.91;
															}
														}
													}
												}
											}
											else
											{
												if(rsrp < -85.5)
													return 6.48;
												else
													return 7.332;
											}
										}
									}
								}
							}
							else
							{
								if(rsrp < -68.5)
									return 19.8;
								else
									return 8.03;
							}
						}
						else
						{
							if(rsrp < -82.5)
							{
								if(payload < 2.5)
								{
									if(rsrp < -86.5)
									{
										if(sinr < 11.5)
										{
											if(velocity < 13.39)
												return 15.95;
											else
											{
												if(velocity < 20.845)
													return 13.2925;
												else
													return 16.18;
											}
										}
										else
										{
											if(velocity < 19.53)
											{
												if(f < 2232.5)
												{
													if(rsrp < -91)
														return 12.3;
													else
													{
														if(velocity < 6.44)
															return 8.27;
														else
														{
															if(rsrp < -89)
																return 10.96;
															else
															{
																if(velocity < 11.7)
																	return 9.98;
																else
																	return 10.7;
															}
														}
													}
												}
												else
												{
													if(velocity < 5.505)
													{
														if(rsrq < -6.5)
															return 9;
														else
															return 13.11;
													}
													else
													{
														if(sinr < 21)
														{
															if(rsrp < -90.5)
															{
																if(sinr < 19.5)
																{
																	if(rsrp < -91.5)
																		return 6.54;
																	else
																		return 7.33;
																}
																else
																	return 8.95;
															}
															else
																return 9.19;
														}
														else
															return 11.01;
													}
												}
											}
											else
											{
												if(velocity < 29.575)
													return 14.0775;
												else
													return 11.42;
											}
										}
									}
									else
									{
										if(sinr < 15)
										{
											if(velocity < 11.745)
											{
												if(f < 2232.5)
													return 9.71;
												else
													return 7.17;
											}
											else
												return 6.6533333333;
										}
										else
										{
											if(rsrp < -85.5)
												return 8.1;
											else
											{
												if(rsrq < -6.5)
												{
													if(velocity < 7.82)
														return 10.39;
													else
														return 14.49;
												}
												else
												{
													if(velocity < 13.6)
														return 11.68;
													else
													{
														if(rsrq < -5.5)
															return 10.91;
														else
														{
															if(sinr < 20)
																return 10.6;
															else
																return 10.14;
														}
													}
												}
											}
										}
									}
								}
								else
								{
									if(sinr < 11.5)
									{
										if(velocity < 11.515)
										{
											if(rsrp < -89)
											{
												if(f < 2232.5)
													return 12.41;
												else
													return 13.26;
											}
											else
											{
												if(rsrq < -6.5)
													return 11.088;
												else
													return 11.71;
											}
										}
										else
										{
											if(rsrp < -89)
											{
												if(f < 2232.5)
													return 11.33;
												else
												{
													if(sinr < 9.5)
														return 10.91;
													else
														return 9.1;
												}
											}
											else
												return 8.65;
										}
									}
									else
									{
										if(velocity < 12.73)
										{
											if(velocity < 12.34)
											{
												if(sinr < 21.5)
												{
													if(rsrp < -88.5)
														return 11.02;
													else
													{
														if(sinr < 16.5)
														{
															if(sinr < 14)
															{
																if(velocity < 4.32)
																	return 16.33;
																else
																	return 15.3;
															}
															else
															{
																if(rsrq < -6.5)
																	return 15.58;
																else
																	return 12.42;
															}
														}
														else
														{
															if(rsrp < -85.5)
															{
																if(rsrq < -6.5)
																	return 12.9;
																else
																	return 11.53;
															}
															else
															{
																if(rsrq < -6)
																	return 15.32;
																else
																	return 13.78;
															}
														}
													}
												}
												else
												{
													if(f < 2232.5)
													{
														if(rsrq < -6.5)
															return 9.9;
														else
															return 10.66;
													}
													else
														return 11.06;
												}
											}
											else
											{
												if(rsrp < -86.5)
													return 4.84;
												else
													return 10.15;
											}
										}
										else
										{
											if(rsrp < -86.5)
											{
												if(sinr < 17)
												{
													if(rsrp < -88.5)
														return 23.98;
													else
														return 21.78;
												}
												else
												{
													if(rsrp < -87.5)
													{
														if(rsrp < -88.5)
															return 12.7;
														else
															return 14.41;
													}
													else
														return 16.51;
												}
											}
											else
											{
												if(velocity < 24.73)
												{
													if(rsrp < -85.5)
														return 13.48;
													else
														return 14.74;
												}
												else
													return 10.65;
											}
										}
									}
								}
							}
							else
							{
								if(rsrq < -5.5)
								{
									if(rsrp < -76)
									{
										if(sinr < 25.5)
										{
											if(velocity < 8.76)
											{
												if(velocity < 5.425)
													return 9.68;
												else
													return 8.63;
											}
											else
											{
												if(rsrp < -78.5)
												{
													if(sinr < 21)
													{
														if(rsrp < -81.5)
														{
															if(velocity < 10.645)
																return 13.99;
															else
															{
																if(velocity < 12.035)
																	return 17.78;
																else
																	return 15.92;
															}
														}
														else
														{
															if(velocity < 12.605)
																return 10.54;
															else
															{
																if(sinr < 8.5)
																	return 11.04;
																else
																{
																	if(velocity < 31.465)
																	{
																		if(payload < 2.5)
																		{
																			if(velocity < 13.69)
																				return 13.58;
																			else
																			{
																				if(sinr < 16)
																					return 13.45;
																				else
																					return 12.71;
																			}
																		}
																		else
																		{
																			if(f < 2232.5)
																			{
																				if(rsrp < -79.5)
																					return 13.36;
																				else
																					return 14.34;
																			}
																			else
																				return 16.18;
																		}
																	}
																	else
																		return 17.72;
																}
															}
														}
													}
													else
													{
														if(payload < 2.5)
															return 8.97;
														else
															return 12.54;
													}
												}
												else
												{
													if(rsrq < -6.5)
														return 8.64;
													else
													{
														if(payload < 2.5)
															return 11.51;
														else
															return 10.15;
													}
												}
											}
										}
										else
											return 21.51;
									}
									else
									{
										if(velocity < 12.965)
										{
											if(f < 2232.5)
											{
												if(rsrq < -6.5)
												{
													if(sinr < 22)
													{
														if(sinr < 13.5)
															return 25.52;
														else
															return 20.43;
													}
													else
														return 15.83;
												}
												else
												{
													if(sinr < 17.5)
														return 22.54;
													else
														return 13.63;
												}
											}
											else
											{
												if(payload < 2.5)
													return 9;
												else
													return 15.24;
											}
										}
										else
										{
											if(rsrp < -71)
												return 10.66;
											else
												return 13.03;
										}
									}
								}
								else
								{
									if(payload < 2.5)
									{
										if(velocity < 23.725)
										{
											if(rsrp < -80)
												return 11.59;
											else
											{
												if(rsrp < -78)
													return 13.68;
												else
													return 14.685;
											}
										}
										else
										{
											if(rsrp < -78)
												return 13.46;
											else
												return 18.22;
										}
									}
									else
									{
										if(velocity < 36.595)
										{
											if(velocity < 12.37)
											{
												if(sinr < 23)
													return 10.62;
												else
													return 16.3;
											}
											else
											{
												if(sinr < 13.5)
													return 17.48;
												else
												{
													if(velocity < 15.38)
														return 15.854;
													else
														return 14.86;
												}
											}
										}
										else
											return 19.83;
									}
								}
							}
						}
					}
					else
					{
						if(rsrp < -66.5)
						{
							if(f < 2232.5)
							{
								if(payload < 0.75)
								{
									if(rsrp < -81.5)
									{
										if(sinr < 31.5)
										{
											if(payload < 0.3)
												return 5.59;
											else
												return 8.15;
										}
										else
											return 11.8;
									}
									else
									{
										if(sinr < 32.5)
										{
											if(velocity < 4.63)
											{
												if(rsrq < -5.5)
													return 5.13;
												else
													return 6.35;
											}
											else
											{
												if(rsrp < -70.5)
												{
													if(velocity < 14.725)
														return 4.844;
													else
														return 5.35;
												}
												else
													return 4.5;
											}
										}
										else
										{
											if(velocity < 13.47)
											{
												if(payload < 0.3)
													return 4.21;
												else
												{
													if(velocity < 12.675)
													{
														if(sinr < 36)
															return 6.34;
														else
															return 7.255;
													}
													else
														return 7.78;
												}
											}
											else
											{
												if(sinr < 34.5)
												{
													if(rsrq < -4.5)
														return 6.25;
													else
														return 5.59;
												}
												else
													return 5.08;
											}
										}
									}
								}
								else
								{
									if(sinr < 31.5)
									{
										if(rsrq < -6.5)
											return 7.0366666667;
										else
										{
											if(sinr < 30.5)
											{
												if(rsrp < -81)
												{
													if(rsrp < -84)
													{
														if(rsrp < -89)
														{
															if(velocity < 9.37)
																return 11.55;
															else
															{
																if(payload < 2.5)
																	return 9.74;
																else
																	return 11.4;
															}
														}
														else
														{
															if(rsrp < -86.5)
																return 9.85;
															else
																return 9.01;
														}
													}
													else
													{
														if(sinr < 29)
															return 7.09;
														else
															return 6.27;
													}
												}
												else
												{
													if(payload < 1.5)
													{
														if(sinr < 29)
															return 10.77;
														else
														{
															if(rsrp < -74.5)
																return 10.36;
															else
																return 6.58;
														}
													}
													else
													{
														if(sinr < 29.5)
															return 9.674;
														else
														{
															if(payload < 2.5)
																return 12.41;
															else
																return 13.5;
														}
													}
												}
											}
											else
											{
												if(velocity < 12.055)
												{
													if(rsrp < -78.5)
														return 8.03;
													else
														return 9.4;
												}
												else
													return 6.62;
											}
										}
									}
									else
									{
										if(velocity < 3.755)
											return 6.62;
										else
										{
											if(rsrp < -83.5)
												return 6.29;
											else
											{
												if(sinr < 38.5)
												{
													if(rsrp < -73)
													{
														if(sinr < 35)
														{
															if(sinr < 32.5)
															{
																if(rsrp < -76)
																	return 14.9;
																else
																	return 14.06;
															}
															else
															{
																if(payload < 2.5)
																	return 12.49;
																else
																	return 13.07;
															}
														}
														else
															return 14.97;
													}
													else
														return 8.43;
												}
												else
												{
													if(payload < 2.5)
														return 9.35;
													else
														return 11.7;
												}
											}
										}
									}
								}
							}
							else
							{
								if(payload < 0.55)
									return 3.03;
								else
									return 5.54;
							}
						}
						else
						{
							if(payload < 2.5)
							{
								if(velocity < 15.53)
									return 10.686;
								else
									return 11.97;
							}
							else
								return 13.79;
						}
					}
				}
			}
		}
		else
		{
			if(payload < 6.5)
			{
				if(velocity < 33.49)
				{
					if(velocity < 29.75)
					{
						if(rsrp < -89.5)
						{
							if(velocity < 11.745)
							{
								if(sinr < 5)
									return 6.8;
								else
								{
									if(velocity < 7.31)
									{
										if(rsrq < -5.5)
										{
											if(sinr < 13.5)
											{
												if(rsrp < -91.5)
												{
													if(rsrp < -94.5)
														return 8.68;
													else
														return 13.38;
												}
												else
												{
													if(rsrp < -90.5)
														return 16.41;
													else
														return 17.21;
												}
											}
											else
											{
												if(rsrp < -90.5)
												{
													if(payload < 5.5)
														return 16.5125;
													else
													{
														if(rsrq < -6.5)
															return 18.98;
														else
														{
															if(sinr < 20.5)
															{
																if(velocity < 6.435)
																	return 22.91;
																else
																	return 21.09;
															}
															else
																return 21.19;
														}
													}
												}
												else
												{
													if(velocity < 3.15)
													{
														if(rsrq < -6.5)
															return 13.36;
														else
															return 18.82;
													}
													else
														return 12.03;
												}
											}
										}
										else
										{
											if(payload < 5.5)
												return 10.17;
											else
											{
												if(sinr < 17)
													return 12.04;
												else
												{
													if(sinr < 24)
														return 13.97;
													else
														return 12.39;
												}
											}
										}
									}
									else
									{
										if(rsrq < -6.5)
										{
											if(velocity < 10.785)
											{
												if(rsrp < -95.5)
												{
													if(rsrp < -97.5)
														return 19.34;
													else
														return 20.36;
												}
												else
												{
													if(sinr < 12)
														return 14.65;
													else
													{
														if(velocity < 10.49)
															return 17.3566666667;
														else
															return 15.9;
													}
												}
											}
											else
											{
												if(rsrp < -91.5)
												{
													if(sinr < 12.5)
														return 21.74;
													else
													{
														if(rsrp < -92.5)
															return 21.5;
														else
															return 16.34;
													}
												}
												else
												{
													if(payload < 4.5)
														return 17.37;
													else
														return 15.73;
												}
											}
										}
										else
										{
											if(sinr < 14.5)
											{
												if(rsrp < -93.5)
													return 15.97;
												else
												{
													if(velocity < 10.55)
														return 10.76;
													else
														return 12.87;
												}
											}
											else
											{
												if(velocity < 9.7)
												{
													if(velocity < 8.285)
														return 15.28;
													else
														return 14.71;
												}
												else
													return 17.74;
											}
										}
									}
								}
							}
							else
							{
								if(velocity < 16.01)
								{
									if(velocity < 12.535)
									{
										if(f < 2232.5)
										{
											if(rsrp < -94.5)
											{
												if(velocity < 12.025)
													return 7.73;
												else
													return 6.23;
											}
											else
											{
												if(rsrq < -6.5)
													return 11.21;
												else
												{
													if(sinr < 15)
														return 10.53;
													else
														return 8.55;
												}
											}
										}
										else
											return 12.37;
									}
									else
									{
										if(rsrp < -93)
										{
											if(sinr < 12)
											{
												if(f < 2232.5)
												{
													if(rsrp < -101)
														return 6.74;
													else
													{
														if(payload < 5.5)
															return 12.51;
														else
															return 16.6;
													}
												}
												else
												{
													if(rsrq < -6.5)
														return 7.13;
													else
													{
														if(payload < 5.5)
															return 10.31;
														else
															return 9.71;
													}
												}
											}
											else
											{
												if(rsrq < -5.5)
													return 5.7;
												else
													return 6.86;
											}
										}
										else
										{
											if(sinr < 14)
											{
												if(f < 2232.5)
												{
													if(rsrq < -6.5)
														return 18.88;
													else
														return 14.8;
												}
												else
												{
													if(sinr < 12.5)
													{
														if(rsrp < -91)
															return 12.66;
														else
															return 11.76;
													}
													else
														return 10.09;
												}
											}
											else
											{
												if(sinr < 22.5)
												{
													if(sinr < 17)
														return 21.4;
													else
													{
														if(payload < 4.5)
															return 18.93;
														else
															return 17.17;
													}
												}
												else
												{
													if(payload < 5.5)
														return 13.25;
													else
														return 15.91;
												}
											}
										}
									}
								}
								else
								{
									if(rsrp < -95.5)
									{
										if(velocity < 23.08)
											return 13.33;
										else
											return 14.98;
									}
									else
									{
										if(payload < 5.5)
										{
											if(sinr < 18)
												return 18.38;
											else
												return 19.06;
										}
										else
											return 17.65;
									}
								}
							}
						}
						else
						{
							if(payload < 5.5)
							{
								if(sinr < 12.5)
								{
									if(payload < 4.5)
									{
										if(rsrp < -85.5)
										{
											if(rsrq < -5)
											{
												if(rsrp < -88.5)
													return 15.7325;
												else
												{
													if(velocity < 10.745)
													{
														if(rsrp < -87.5)
															return 9.7;
														else
															return 10.79;
													}
													else
													{
														if(sinr < 10.5)
														{
															if(velocity < 14.85)
															{
																if(f < 2232.5)
																	return 14.42;
																else
																	return 15.535;
															}
															else
																return 12.85;
														}
														else
															return 12.39;
													}
												}
											}
											else
												return 11.6;
										}
										else
										{
											if(sinr < 11.5)
											{
												if(velocity < 17.51)
													return 14.49;
												else
													return 8.95;
											}
											else
												return 6.19;
										}
									}
									else
									{
										if(sinr < 4)
											return 10.44;
										else
										{
											if(sinr < 6)
												return 19.92;
											else
											{
												if(sinr < 11.5)
												{
													if(sinr < 10.5)
													{
														if(rsrp < -75.5)
														{
															if(sinr < 7.5)
																return 14.23;
															else
															{
																if(rsrp < -87.5)
																	return 14.3;
																else
																{
																	if(rsrp < -85)
																		return 17.41;
																	else
																		return 16.13;
																}
															}
														}
														else
															return 13.78;
													}
													else
													{
														if(f < 2232.5)
														{
															if(rsrq < -6)
																return 15.17;
															else
																return 26.35;
														}
														else
															return 18.9;
													}
												}
												else
												{
													if(rsrq < -5.5)
														return 13.79;
													else
														return 10.67;
												}
											}
										}
									}
								}
								else
								{
									if(rsrp < -87.5)
									{
										if(velocity < 16.16)
										{
											if(payload < 4.5)
											{
												if(velocity < 10.21)
												{
													if(sinr < 21)
													{
														if(rsrp < -88.5)
															return 18.45;
														else
															return 23.88;
													}
													else
														return 26.34;
												}
												else
												{
													if(velocity < 11.235)
														return 9.07;
													else
													{
														if(rsrq < -6.5)
															return 14.77;
														else
														{
															if(rsrp < -88.5)
																return 18.6;
															else
																return 19.38;
														}
													}
												}
											}
											else
											{
												if(f < 2232.5)
												{
													if(sinr < 22)
														return 12.9;
													else
														return 14.96;
												}
												else
												{
													if(velocity < 10.435)
														return 20.43;
													else
													{
														if(sinr < 22.5)
															return 17.26;
														else
															return 15.27;
													}
												}
											}
										}
										else
											return 30.77;
									}
									else
									{
										if(sinr < 17.5)
										{
											if(rsrq < -5.5)
											{
												if(velocity < 23.845)
												{
													if(f < 2232.5)
													{
														if(velocity < 15.255)
														{
															if(rsrp < -73.5)
															{
																if(velocity < 13.29)
																	return 18.0816666667;
																else
																{
																	if(sinr < 16.5)
																		return 22.11;
																	else
																		return 19.26;
																}
															}
															else
																return 13.14;
														}
														else
														{
															if(payload < 4.5)
															{
																if(velocity < 21.385)
																	return 16.72;
																else
																	return 15.79;
															}
															else
																return 9.79;
														}
													}
													else
													{
														if(velocity < 4.49)
														{
															if(sinr < 14.5)
															{
																if(velocity < 1.925)
																	return 14.38;
																else
																	return 15.95;
															}
															else
																return 15.74;
														}
														else
														{
															if(velocity < 7.575)
																return 11.92;
															else
																return 8.13;
														}
													}
												}
												else
													return 9.4;
											}
											else
											{
												if(rsrp < -83.5)
												{
													if(payload < 4.5)
														return 16.01;
													else
														return 14.74;
												}
												else
													return 19.366;
											}
										}
										else
										{
											if(velocity < 23.7)
											{
												if(velocity < 0.415)
												{
													if(rsrq < -5.5)
													{
														if(sinr < 22)
														{
															if(rsrp < -86.5)
																return 14.54;
															else
																return 15.81;
														}
														else
														{
															if(rsrp < -84)
																return 11.79;
															else
																return 14.4966666667;
														}
													}
													else
													{
														if(sinr < 21.5)
															return 20.3;
														else
														{
															if(rsrq < -4.5)
																return 17.72;
															else
																return 16.89;
														}
													}
												}
												else
												{
													if(velocity < 14.375)
													{
														if(sinr < 23.5)
														{
															if(sinr < 22.5)
															{
																if(velocity < 9.08)
																	return 20.92;
																else
																{
																	if(payload < 4.5)
																	{
																		if(sinr < 21)
																		{
																			if(rsrp < -79)
																			{
																				if(sinr < 18.5)
																					return 17.49;
																				else
																					return 16.35;
																			}
																			else
																				return 13.86;
																		}
																		else
																			return 18.31;
																	}
																	else
																	{
																		if(rsrp < -84)
																		{
																			if(sinr < 21.5)
																			{
																				if(f < 2232.5)
																					return 19.2433333333;
																				else
																					return 18.4;
																			}
																			else
																				return 16.66;
																		}
																		else
																			return 18.53;
																	}
																}
															}
															else
															{
																if(rsrq < -6.5)
																	return 19.14;
																else
																{
																	if(payload < 4.5)
																		return 24.67;
																	else
																		return 23.3;
																}
															}
														}
														else
														{
															if(payload < 4.5)
															{
																if(rsrp < -76)
																{
																	if(rsrp < -81)
																	{
																		if(rsrp < -84.5)
																			return 16.32;
																		else
																			return 17.33;
																	}
																	else
																		return 18.39;
																}
																else
																	return 16.16;
															}
															else
															{
																if(rsrp < -73)
																	return 14.61;
																else
																	return 15.89;
															}
														}
													}
													else
													{
														if(sinr < 28.5)
														{
															if(rsrp < -82)
															{
																if(velocity < 20.355)
																{
																	if(sinr < 26.5)
																		return 9.3;
																	else
																		return 7.92;
																}
																else
																	return 14.96;
															}
															else
															{
																if(velocity < 14.66)
																	return 11.23;
																else
																{
																	if(velocity < 16.505)
																	{
																		if(payload < 4.5)
																			return 17.155;
																		else
																			return 13.9;
																	}
																	else
																		return 12.32;
																}
															}
														}
														else
														{
															if(rsrp < -73.5)
															{
																if(rsrp < -76.5)
																	return 20.38;
																else
																	return 21.81;
															}
															else
																return 18.26;
														}
													}
												}
											}
											else
											{
												if(velocity < 23.815)
													return 30.4;
												else
													return 19.54;
											}
										}
									}
								}
							}
							else
							{
								if(rsrp < -80.5)
								{
									if(rsrp < -86.5)
									{
										if(sinr < 14.5)
											return 16.4;
										else
										{
											if(sinr < 21.5)
											{
												if(sinr < 18.5)
												{
													if(velocity < 19.195)
														return 25.75;
													else
														return 15.74;
												}
												else
													return 23.82;
											}
											else
											{
												if(velocity < 19.355)
													return 19.89;
												else
													return 20.61;
											}
										}
									}
									else
									{
										if(rsrp < -84.5)
										{
											if(sinr < 1.5)
												return 6.14;
											else
											{
												if(f < 2232.5)
												{
													if(rsrp < -85.5)
													{
														if(velocity < 6.01)
															return 15.73;
														else
														{
															if(rsrq < -6.5)
																return 16.86;
															else
																return 17.61;
														}
													}
													else
														return 18.99;
												}
												else
													return 12.4;
											}
										}
										else
										{
											if(sinr < 8.5)
												return 12.53;
											else
											{
												if(f < 2232.5)
												{
													if(rsrp < -81.5)
													{
														if(sinr < 15)
														{
															if(sinr < 13)
																return 22.74;
															else
																return 21.88;
														}
														else
														{
															if(rsrq < -5.5)
															{
																if(velocity < 14.685)
																{
																	if(rsrq < -6.5)
																		return 24.95;
																	else
																	{
																		if(sinr < 29.5)
																		{
																			if(velocity < 9.955)
																				return 17.93;
																			else
																				return 20.59;
																		}
																		else
																			return 24.1;
																	}
																}
																else
																	return 13.64;
															}
															else
															{
																if(sinr < 19)
																	return 13.67;
																else
																	return 19.02;
															}
														}
													}
													else
													{
														if(rsrq < -6)
														{
															if(sinr < 22)
																return 16.21;
															else
																return 17.0433333333;
														}
														else
															return 17.67;
													}
												}
												else
												{
													if(rsrp < -83)
														return 16.37;
													else
														return 13.22;
												}
											}
										}
									}
								}
								else
								{
									if(sinr < 23.5)
									{
										if(sinr < 15.5)
										{
											if(sinr < 11.5)
												return 18.19;
											else
												return 20.86;
										}
										else
										{
											if(rsrp < -77)
											{
												if(rsrq < -6)
													return 29.74;
												else
													return 27.38;
											}
											else
											{
												if(rsrp < -74)
													return 18.22;
												else
													return 21.12;
											}
										}
									}
									else
									{
										if(velocity < 6.265)
										{
											if(rsrp < -72.5)
											{
												if(rsrp < -78)
													return 15.89;
												else
													return 18.27;
											}
											else
												return 13.81;
										}
										else
										{
											if(rsrp < -78.5)
											{
												if(rsrp < -79.5)
													return 20.06;
												else
												{
													if(rsrq < -5.5)
													{
														if(velocity < 13.48)
															return 16.13;
														else
															return 17.48;
													}
													else
														return 17.73;
												}
											}
											else
											{
												if(sinr < 26)
													return 18.065;
												else
												{
													if(f < 1384.5)
														return 23.05;
													else
														return 25.01;
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
						if(sinr < 9)
						{
							if(payload < 4.5)
							{
								if(sinr < 7.5)
									return 3.95;
								else
									return 9.21;
							}
							else
								return 9.08;
						}
						else
						{
							if(rsrp < -91)
							{
								if(rsrp < -100.5)
									return 14.81;
								else
									return 8.41;
							}
							else
							{
								if(rsrp < -81.5)
									return 16.86;
								else
								{
									if(velocity < 31.835)
										return 9.2;
									else
									{
										if(payload < 5)
											return 15.79;
										else
											return 17.24;
									}
								}
							}
						}
					}
				}
				else
				{
					if(velocity < 34.16)
						return 33.83;
					else
					{
						if(sinr < 25.5)
						{
							if(sinr < 4)
								return 12.06;
							else
							{
								if(payload < 4.5)
								{
									if(sinr < 15.5)
										return 13.36;
									else
										return 17.2;
								}
								else
								{
									if(velocity < 36.69)
										return 18.89;
									else
										return 19.59;
								}
							}
						}
						else
						{
							if(payload < 4.5)
								return 16.75;
							else
							{
								if(velocity < 35.685)
								{
									if(payload < 5.5)
										return 29.24;
									else
									{
										if(rsrp < -73.5)
											return 22.46;
										else
											return 23.98;
									}
								}
								else
									return 21.51;
							}
						}
					}
				}
			}
			else
			{
				if(f < 2232.5)
				{
					if(sinr < 24.5)
					{
						if(f < 1384.5)
						{
							if(rsrp < -66)
								return 4.46;
							else
								return 11.25;
						}
						else
						{
							if(rsrp < -84.5)
							{
								if(payload < 9.5)
								{
									if(rsrp < -98.5)
									{
										if(velocity < 14.86)
										{
											if(sinr < 13)
												return 13.38;
											else
												return 10.23;
										}
										else
										{
											if(rsrp < -101)
												return 18.48;
											else
												return 22.6;
										}
									}
									else
									{
										if(rsrq < -6.5)
										{
											if(velocity < 10.315)
											{
												if(velocity < 1.11)
												{
													if(payload < 8.5)
														return 10.03;
													else
														return 17.79;
												}
												else
												{
													if(sinr < 11.5)
													{
														if(velocity < 8.06)
														{
															if(sinr < 9.5)
															{
																if(payload < 8.5)
																	return 16.66;
																else
																	return 14.05;
															}
															else
																return 11.72;
														}
														else
															return 16.46;
													}
													else
														return 21.3133333333;
												}
											}
											else
											{
												if(velocity < 12.485)
												{
													if(payload < 8)
													{
														if(rsrp < -95)
															return 23.42;
														else
															return 21.64;
													}
													else
														return 31.14;
												}
												else
												{
													if(payload < 7.5)
													{
														if(sinr < 9.5)
															return 13.155;
														else
														{
															if(sinr < 10.5)
																return 18.92;
															else
																return 13.86;
														}
													}
													else
													{
														if(rsrp < -93)
														{
															if(payload < 8.5)
																return 23.69;
															else
																return 21.47;
														}
														else
														{
															if(velocity < 13.48)
															{
																if(sinr < 10)
																	return 13.5;
																else
																{
																	if(sinr < 15)
																		return 16.31;
																	else
																		return 15.56;
																}
															}
															else
															{
																if(velocity < 13.71)
																	return 28.21;
																else
																{
																	if(rsrp < -89)
																		return 10;
																	else
																	{
																		if(payload < 8.5)
																		{
																			if(rsrp < -86.5)
																				return 24.36;
																			else
																			{
																				if(sinr < 10.5)
																				{
																					if(rsrp < -85.5)
																						return 16.71;
																					else
																						return 20.81;
																				}
																				else
																					return 20.59;
																			}
																		}
																		else
																		{
																			if(velocity < 22.26)
																				return 19.14;
																			else
																				return 20.45;
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
												if(velocity < 14.555)
												{
													if(sinr < 19)
													{
														if(payload < 8.5)
														{
															if(rsrp < -89.5)
															{
																if(rsrp < -93.5)
																	return 20.03;
																else
																{
																	if(velocity < 9.85)
																		return 19.41;
																	else
																	{
																		if(payload < 7.5)
																			return 23.52;
																		else
																			return 26.2;
																	}
																}
															}
															else
															{
																if(velocity < 11.06)
																	return 22.21;
																else
																{
																	if(velocity < 12.155)
																	{
																		if(payload < 7.5)
																			return 19.14;
																		else
																			return 20.14;
																	}
																	else
																	{
																		if(sinr < 13)
																			return 16.27;
																		else
																			return 18.58;
																	}
																}
															}
														}
														else
														{
															if(velocity < 9.95)
																return 22.19;
															else
															{
																if(rsrp < -89.5)
																	return 25.59;
																else
																	return 26.26;
															}
														}
													}
													else
													{
														if(rsrp < -87.5)
														{
															if(rsrp < -88.5)
																return 19.43;
															else
																return 17.89;
														}
														else
															return 14.62;
													}
												}
												else
												{
													if(velocity < 15.695)
													{
														if(rsrp < -87.5)
															return 27.3;
														else
															return 28.01;
													}
													else
													{
														if(rsrp < -88.5)
														{
															if(payload < 8.5)
																return 21.23;
															else
																return 19.39;
														}
														else
														{
															if(payload < 8)
																return 21.41;
															else
																return 28.26;
														}
													}
												}
											}
											else
											{
												if(rsrq < -5.5)
												{
													if(sinr < 15.5)
													{
														if(payload < 8)
															return 18.14;
														else
															return 19.41;
													}
													else
														return 16.12;
												}
												else
													return 14.18;
											}
										}
									}
								}
								else
								{
									if(rsrq < -6.5)
									{
										if(velocity < 29.125)
										{
											if(sinr < 9.5)
											{
												if(velocity < 9.665)
													return 21;
												else
												{
													if(rsrp < -95)
														return 26.352;
													else
													{
														if(rsrp < -89)
														{
															if(rsrp < -92)
																return 23.76;
															else
																return 27.43;
														}
														else
															return 23.13;
													}
												}
											}
											else
											{
												if(sinr < 11.5)
													return 10.51;
												else
												{
													if(rsrp < -96)
														return 16.63;
													else
													{
														if(velocity < 15.56)
															return 23.8;
														else
															return 22.25;
													}
												}
											}
										}
										else
										{
											if(velocity < 34.69)
												return 10.76;
											else
												return 6.05;
										}
									}
									else
									{
										if(velocity < 12.245)
										{
											if(rsrq < -5.5)
											{
												if(rsrp < -87)
													return 25.92;
												else
													return 20.26;
											}
											else
											{
												if(sinr < 15)
													return 23.27;
												else
												{
													if(sinr < 16.5)
														return 24.95;
													else
														return 24.38;
												}
											}
										}
										else
										{
											if(sinr < 11)
											{
												if(velocity < 24.07)
													return 31.92;
												else
													return 25.37;
											}
											else
												return 24.71;
										}
									}
								}
							}
							else
							{
								if(sinr < 5)
								{
									if(velocity < 34.515)
									{
										if(sinr < 3)
										{
											if(rsrp < -82.5)
											{
												if(payload < 8.5)
													return 24.46;
												else
													return 20.84;
											}
											else
												return 22.08;
										}
										else
											return 15.36;
									}
									else
										return 28.43;
								}
								else
								{
									if(velocity < 10)
									{
										if(payload < 8.5)
										{
											if(rsrq < -5.5)
											{
												if(sinr < 20)
													return 16.01;
												else
												{
													if(rsrp < -81.5)
														return 23.19;
													else
														return 18.49;
												}
											}
											else
											{
												if(sinr < 22.5)
												{
													if(velocity < 7.3)
													{
														if(payload < 7.5)
														{
															if(sinr < 20.5)
																return 21.4;
															else
																return 22.82;
														}
														else
															return 22.91;
													}
													else
													{
														if(rsrq < -4.5)
															return 19.13;
														else
															return 21.24;
													}
												}
												else
													return 18.6;
											}
										}
										else
										{
											if(sinr < 19)
												return 24;
											else
											{
												if(sinr < 23)
													return 30.1;
												else
													return 26.84;
											}
										}
									}
									else
									{
										if(sinr < 22.5)
										{
											if(velocity < 14.695)
											{
												if(rsrq < -5.5)
												{
													if(velocity < 14.155)
													{
														if(sinr < 16)
														{
															if(payload < 8)
															{
																if(rsrp < -79.5)
																	return 25.3;
																else
																	return 23.43;
															}
															else
															{
																if(payload < 9.5)
																{
																	if(rsrp < -79.5)
																		return 25.18;
																	else
																		return 26.06;
																}
																else
																	return 26.93;
															}
														}
														else
														{
															if(sinr < 18.5)
															{
																if(payload < 7.5)
																	return 38.15;
																else
																{
																	if(sinr < 17.5)
																		return 29.08;
																	else
																		return 25.09;
																}
															}
															else
															{
																if(rsrq < -6.5)
																	return 34.72;
																else
																	return 22.32;
															}
														}
													}
													else
														return 38.39;
												}
												else
												{
													if(payload < 9.5)
													{
														if(velocity < 14.285)
														{
															if(sinr < 20)
															{
																if(payload < 8)
																{
																	if(rsrp < -79.5)
																		return 20.06;
																	else
																		return 17.12;
																}
																else
																	return 23.98;
															}
															else
															{
																if(payload < 7.5)
																	return 31.15;
																else
																{
																	if(payload < 8.5)
																		return 18.74;
																	else
																		return 25.54;
																}
															}
														}
														else
														{
															if(velocity < 14.525)
																return 28.69;
															else
																return 27.28;
														}
													}
													else
														return 39.04;
												}
											}
											else
											{
												if(rsrp < -82)
												{
													if(velocity < 17.92)
													{
														if(payload < 7.5)
															return 26.19;
														else
														{
															if(velocity < 15.035)
																return 22.08;
															else
																return 25.5775;
														}
													}
													else
													{
														if(rsrp < -83.5)
														{
															if(rsrq < -6.5)
																return 20.93;
															else
																return 17.5;
														}
														else
															return 20.96;
													}
												}
												else
												{
													if(velocity < 23.64)
													{
														if(rsrp < -80.5)
															return 29.37;
														else
															return 37.23;
													}
													else
													{
														if(payload < 9)
															return 28.34;
														else
															return 26.65;
													}
												}
											}
										}
										else
										{
											if(velocity < 13.105)
												return 17.23;
											else
											{
												if(rsrq < -4.5)
												{
													if(payload < 8.5)
														return 23.59;
													else
														return 23.0275;
												}
												else
													return 20.59;
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
							if(rsrp < -85)
							{
								if(rsrq < -6.5)
								{
									if(velocity < 6.405)
									{
										if(payload < 8)
											return 19.99;
										else
											return 16.45;
									}
									else
										return 11.35;
								}
								else
								{
									if(sinr < 25.5)
										return 18.14;
									else
										return 26.18;
								}
							}
							else
							{
								if(velocity < 12.74)
								{
									if(sinr < 26)
									{
										if(rsrq < -5.5)
										{
											if(velocity < 4.425)
												return 34.74;
											else
											{
												if(velocity < 8.445)
													return 28.82;
												else
													return 32.33;
											}
										}
										else
											return 33.78;
									}
									else
									{
										if(rsrq < -5.5)
										{
											if(rsrp < -77.5)
												return 23.21;
											else
											{
												if(velocity < 8.275)
												{
													if(rsrp < -75.5)
													{
														if(payload < 8.5)
														{
															if(sinr < 27.5)
																return 17.12;
															else
																return 20.56;
														}
														else
															return 16.99;
													}
													else
													{
														if(payload < 8.5)
															return 22.11;
														else
															return 20.298;
													}
												}
												else
												{
													if(rsrp < -74)
														return 17.76;
													else
														return 19.255;
												}
											}
										}
										else
										{
											if(sinr < 29)
												return 14.8;
											else
											{
												if(rsrp < -77.5)
												{
													if(rsrp < -78.5)
													{
														if(payload < 8)
															return 26.6;
														else
															return 23.39;
													}
													else
														return 20.4;
												}
												else
												{
													if(rsrp < -74.5)
														return 33.15;
													else
														return 22.9;
												}
											}
										}
									}
								}
								else
								{
									if(payload < 8.5)
									{
										if(payload < 7.5)
										{
											if(velocity < 22.43)
											{
												if(rsrq < -5.5)
													return 27.55;
												else
												{
													if(rsrp < -78.5)
														return 19.77;
													else
														return 21.94;
												}
											}
											else
											{
												if(sinr < 29)
													return 26.67;
												else
													return 23.58;
											}
										}
										else
										{
											if(rsrp < -82)
												return 32.02;
											else
											{
												if(rsrp < -76.5)
												{
													if(rsrq < -5.5)
														return 24.71;
													else
														return 26.38;
												}
												else
												{
													if(sinr < 27.5)
														return 18.47;
													else
														return 25.84;
												}
											}
										}
									}
									else
									{
										if(velocity < 16.335)
										{
											if(rsrp < -73)
											{
												if(sinr < 28)
													return 28.54;
												else
													return 24.9;
											}
											else
											{
												if(velocity < 15.725)
													return 27.97;
												else
													return 29.15;
											}
										}
										else
											return 34.25;
									}
								}
							}
						}
						else
						{
							if(velocity < 14.51)
							{
								if(sinr < 34)
								{
									if(rsrq < -5.5)
									{
										if(rsrp < -77.5)
										{
											if(rsrp < -80)
												return 22.5;
											else
												return 24.18;
										}
										else
											return 27.22;
									}
									else
									{
										if(velocity < 10.01)
										{
											if(sinr < 26)
												return 29.35;
											else
												return 32.92;
										}
										else
											return 25.89;
									}
								}
								else
									return 19.76;
							}
							else
							{
								if(velocity < 16.945)
								{
									if(velocity < 15.18)
										return 30.38;
									else
									{
										if(sinr < 30)
											return 32.48;
										else
											return 31.91;
									}
								}
								else
								{
									if(sinr < 31.5)
									{
										if(sinr < 29.5)
										{
											if(rsrq < -5.5)
												return 30.48;
											else
												return 31.5;
										}
										else
											return 28.57;
									}
									else
									{
										if(rsrp < -76)
											return 23.41;
										else
											return 24.44;
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
						if(payload < 7.5)
						{
							if(velocity < 14.6)
							{
								if(rsrq < -6.5)
								{
									if(rsrp < -88)
									{
										if(rsrp < -90)
										{
											if(velocity < 7.12)
												return 13.45;
											else
												return 12.45;
										}
										else
											return 10.48;
									}
									else
									{
										if(sinr < 8.5)
											return 23.69;
										else
										{
											if(rsrp < -86)
												return 16.28;
											else
												return 14.82;
										}
									}
								}
								else
								{
									if(velocity < 8.115)
									{
										if(velocity < 5.4)
										{
											if(sinr < 16)
											{
												if(rsrp < -89.5)
													return 24.12;
												else
													return 17.47;
											}
											else
											{
												if(sinr < 26.5)
												{
													if(rsrq < -5.5)
														return 10.62;
													else
													{
														if(velocity < 2.23)
															return 15.54;
														else
															return 13.53;
													}
												}
												else
													return 18.45;
											}
										}
										else
											return 21.05;
									}
									else
									{
										if(rsrp < -86.5)
											return 11.79;
										else
											return 8.88;
									}
								}
							}
							else
							{
								if(sinr < 14.5)
									return 18.08;
								else
									return 23.17;
							}
						}
						else
						{
							if(rsrp < -89.5)
							{
								if(velocity < 8.37)
								{
									if(velocity < 6.65)
									{
										if(sinr < 21.5)
										{
											if(payload < 8.5)
												return 20.83;
											else
												return 22.2025;
										}
										else
										{
											if(rsrp < -90.5)
												return 23.34;
											else
												return 24.02;
										}
									}
									else
										return 25.44;
								}
								else
								{
									if(sinr < 12.5)
									{
										if(velocity < 13.125)
										{
											if(payload < 8.5)
												return 16.22;
											else
												return 17.94;
										}
										else
											return 21.09;
									}
									else
									{
										if(sinr < 14)
											return 16.79;
										else
										{
											if(rsrp < -92)
												return 15.23;
											else
												return 16.46;
										}
									}
								}
							}
							else
							{
								if(rsrp < -83)
								{
									if(velocity < 14.79)
									{
										if(sinr < 22)
										{
											if(rsrp < -88.5)
												return 17.96;
											else
											{
												if(velocity < 8.555)
													return 18.31;
												else
													return 18.9166666667;
											}
										}
										else
											return 16.29;
									}
									else
										return 12.4;
								}
								else
								{
									if(rsrq < -6.5)
										return 16.3;
									else
										return 15.03;
								}
							}
						}
					}
					else
					{
						if(rsrq < -6.5)
						{
							if(rsrp < -86.5)
							{
								if(sinr < 4.5)
									return 14.72;
								else
								{
									if(sinr < 12.5)
									{
										if(sinr < 8)
											return 30.4;
										else
										{
											if(rsrp < -89)
												return 19.92;
											else
												return 30.41;
										}
									}
									else
										return 34.14;
								}
							}
							else
							{
								if(velocity < 13.27)
								{
									if(velocity < 12.035)
									{
										if(velocity < 7.66)
											return 20.3233333333;
										else
											return 19.73;
									}
									else
										return 20.71;
								}
								else
									return 29.04;
							}
						}
						else
						{
							if(sinr < 12.5)
								return 15.27;
							else
							{
								if(rsrq < -5.5)
								{
									if(rsrp < -83.5)
									{
										if(rsrp < -88)
											return 27.88;
										else
											return 26.6;
									}
									else
										return 15.27;
								}
								else
								{
									if(velocity < 8.19)
									{
										if(sinr < 24.5)
											return 20.02;
										else
											return 19.33;
									}
									else
										return 14.22;
								}
							}
						}
					}
				}
			}
		}
	}
}

float tmobile_dl_ns3_tree_3(float payload, float rsrp, float rsrq, float sinr, float velocity, float f)
{
	if(rsrp < -88.5)
	{
		if(payload < 3.5)
		{
			if(rsrp < -99.5)
			{
				if(payload < 2.5)
				{
					if(sinr < 1.5)
					{
						if(rsrq < -12.5)
						{
							if(rsrp < -102)
							{
								if(rsrp < -107.5)
								{
									if(rsrq < -14)
										return 2.04;
									else
										return 1.43;
								}
								else
								{
									if(payload < 0.55)
										return 2.87;
									else
										return 1.72;
								}
							}
							else
							{
								if(payload < 1.25)
								{
									if(rsrp < -100.5)
										return 6.66;
									else
										return 4.53;
								}
								else
									return 1.98;
							}
						}
						else
						{
							if(velocity < 5.795)
								return 0.66;
							else
							{
								if(velocity < 15.21)
								{
									if(rsrp < -101)
									{
										if(rsrp < -107.5)
										{
											if(rsrp < -109.5)
												return 6.22;
											else
												return 12.46;
										}
										else
										{
											if(rsrq < -11)
											{
												if(payload < 1.5)
													return 5.39;
												else
													return 3.99;
											}
											else
											{
												if(velocity < 13.945)
												{
													if(sinr < -2)
														return 8.95;
													else
														return 3.51;
												}
												else
													return 11.59;
											}
										}
									}
									else
									{
										if(velocity < 12.065)
											return 6.95;
										else
										{
											if(velocity < 13.75)
											{
												if(velocity < 13.08)
													return 3.35;
												else
													return 1.92;
											}
											else
												return 4.08;
										}
									}
								}
								else
								{
									if(rsrq < -10.5)
									{
										if(rsrp < -104.5)
											return 4.63;
										else
										{
											if(rsrq < -11.5)
											{
												if(velocity < 17.45)
													return 3.03;
												else
													return 4.6;
											}
											else
											{
												if(rsrp < -101.5)
													return 1.75;
												else
													return 3.57;
											}
										}
									}
									else
									{
										if(rsrq < -9)
											return 7.74;
										else
											return 5.56;
									}
								}
							}
						}
					}
					else
					{
						if(sinr < 5.5)
						{
							if(velocity < 9.415)
							{
								if(rsrq < -9.5)
								{
									if(rsrp < -107.5)
										return 3.49;
									else
										return 1.035;
								}
								else
									return 2.78;
							}
							else
							{
								if(sinr < 3.5)
								{
									if(rsrp < -101.5)
									{
										if(sinr < 2.5)
										{
											if(rsrq < -10)
											{
												if(velocity < 13.325)
													return 4.42;
												else
													return 2.93;
											}
											else
												return 4;
										}
										else
											return 5.07;
									}
									else
									{
										if(sinr < 2.5)
											return 4.86;
										else
											return 4.19;
									}
								}
								else
								{
									if(sinr < 4.5)
									{
										if(payload < 1.5)
										{
											if(rsrq < -9.5)
												return 3.2;
											else
											{
												if(rsrp < -105.5)
													return 1.31;
												else
													return 2.48;
											}
										}
										else
										{
											if(rsrp < -105.5)
												return 3.72;
											else
												return 4.44;
										}
									}
									else
									{
										if(payload < 0.75)
											return 3.22;
										else
											return 7.63;
									}
								}
							}
						}
						else
						{
							if(sinr < 8)
							{
								if(rsrq < -7.5)
								{
									if(velocity < 13.09)
									{
										if(payload < 1.5)
											return 1.38;
										else
											return 9.55;
									}
									else
									{
										if(rsrp < -101.5)
											return 7.56;
										else
											return 9.03;
									}
								}
								else
								{
									if(velocity < 22.525)
										return 8.25;
									else
										return 3.27;
								}
							}
							else
							{
								if(sinr < 18)
								{
									if(rsrq < -7.5)
									{
										if(velocity < 20.325)
										{
											if(rsrp < -100.5)
											{
												if(payload < 1.5)
													return 2.64;
												else
													return 1.81;
											}
											else
												return 3.13;
										}
										else
										{
											if(rsrp < -103)
												return 6.02;
											else
												return 6.72;
										}
									}
									else
									{
										if(payload < 1.5)
										{
											if(velocity < 14.635)
											{
												if(velocity < 12.985)
													return 3.67;
												else
													return 1.45;
											}
											else
											{
												if(sinr < 12.5)
												{
													if(rsrp < -102.5)
														return 7.65;
													else
													{
														if(rsrq < -6.5)
															return 7.72;
														else
															return 4.18;
													}
												}
												else
													return 2.86;
											}
										}
										else
										{
											if(velocity < 30.52)
												return 6.92;
											else
												return 3.9;
										}
									}
								}
								else
									return 6.13;
							}
						}
					}
				}
				else
				{
					if(rsrq < -9.5)
					{
						if(sinr < -1.5)
						{
							if(velocity < 13.77)
							{
								if(sinr < -3.5)
									return 4.06;
								else
									return 2.78;
							}
							else
								return 6.62;
						}
						else
						{
							if(sinr < 1.5)
							{
								if(rsrp < -104)
									return 11.28;
								else
								{
									if(velocity < 14.905)
										return 12.07;
									else
										return 2.6;
								}
							}
							else
							{
								if(rsrq < -11.5)
									return 5.3;
								else
									return 4.53;
							}
						}
					}
					else
					{
						if(rsrq < -8.5)
						{
							if(sinr < 4.5)
							{
								if(sinr < -0.5)
									return 15.26;
								else
								{
									if(sinr < 2)
										return 10.98;
									else
										return 13.04;
								}
							}
							else
							{
								if(velocity < 9.885)
									return 9.85;
								else
									return 4.87;
							}
						}
						else
						{
							if(rsrq < -7)
							{
								if(velocity < 12.865)
									return 5.67;
								else
									return 12.69;
							}
							else
							{
								if(velocity < 33.54)
									return 9.51;
								else
									return 13.58;
							}
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
						if(sinr < -0.5)
						{
							if(payload < 0.55)
							{
								if(rsrp < -95.5)
									return 38.1;
								else
									return 3.14;
							}
							else
							{
								if(rsrq < -11.5)
									return 9.22;
								else
								{
									if(rsrp < -95.5)
										return 10.81;
									else
										return 4.54;
								}
							}
						}
						else
						{
							if(rsrp < -93.5)
							{
								if(sinr < 4)
								{
									if(rsrp < -97)
										return 3.345;
									else
									{
										if(velocity < 9.105)
											return 3.03;
										else
											return 8.04;
									}
								}
								else
								{
									if(velocity < 1.18)
										return 4.4533333333;
									else
									{
										if(f < 2232.5)
											return 7.26;
										else
											return 5.67;
									}
								}
							}
							else
							{
								if(velocity < 6.77)
									return 4.15;
								else
									return 2.89;
							}
						}
					}
					else
					{
						if(rsrp < -97.5)
						{
							if(velocity < 10.825)
							{
								if(rsrq < -8.5)
									return 10.42;
								else
									return 13.65;
							}
							else
							{
								if(sinr < 1)
								{
									if(payload < 0.75)
										return 9.64;
									else
										return 8.47;
								}
								else
								{
									if(payload < 0.75)
										return 4.05;
									else
									{
										if(rsrq < -9.5)
											return 4.15;
										else
										{
											if(sinr < 10)
											{
												if(velocity < 15.495)
													return 7.05;
												else
													return 7.6866666667;
											}
											else
												return 6.26;
										}
									}
								}
							}
						}
						else
						{
							if(sinr < 26.5)
							{
								if(payload < 0.3)
								{
									if(f < 2232.5)
									{
										if(sinr < 0.5)
										{
											if(velocity < 10.935)
												return 6.3;
											else
												return 9.2;
										}
										else
										{
											if(rsrp < -96.5)
											{
												if(rsrq < -7.5)
													return 5.23;
												else
													return 2.32;
											}
											else
											{
												if(velocity < 13.23)
												{
													if(rsrp < -94.5)
													{
														if(rsrq < -7)
														{
															if(rsrp < -95.5)
																return 5.67;
															else
																return 8.6;
														}
														else
															return 5.44;
													}
													else
													{
														if(rsrq < -6.5)
														{
															if(rsrp < -93.5)
															{
																if(rsrq < -9)
																	return 3.25;
																else
																{
																	if(sinr < 14.5)
																		return 3.43;
																	else
																		return 4.28;
																}
															}
															else
															{
																if(sinr < 10)
																{
																	if(velocity < 12.055)
																	{
																		if(rsrq < -9.5)
																		{
																			if(sinr < 5)
																				return 5.52;
																			else
																				return 4.23;
																		}
																		else
																		{
																			if(velocity < 4.81)
																				return 4.98;
																			else
																				return 5.67;
																		}
																	}
																	else
																		return 4.6;
																}
																else
																{
																	if(sinr < 25.5)
																	{
																		if(sinr < 16.5)
																			return 4.476;
																		else
																			return 4.82;
																	}
																	else
																		return 3.98;
																}
															}
														}
														else
														{
															if(rsrp < -92.5)
																return 6.67;
															else
																return 5.972;
														}
													}
												}
												else
												{
													if(rsrp < -90.5)
														return 6.64;
													else
														return 5.52;
												}
											}
										}
									}
									else
									{
										if(velocity < 12.495)
										{
											if(sinr < 7)
											{
												if(velocity < 2.51)
													return 5.56;
												else
													return 4.49;
											}
											else
											{
												if(sinr < 23.5)
												{
													if(velocity < 2.83)
													{
														if(rsrp < -90.5)
														{
															if(sinr < 20)
																return 2.74;
															else
																return 7.02;
														}
														else
															return 3.6;
													}
													else
													{
														if(rsrp < -91)
														{
															if(velocity < 7.245)
																return 2.93;
															else
															{
																if(sinr < 18)
																	return 3.21;
																else
																	return 3.94;
															}
														}
														else
															return 2.62;
													}
												}
												else
													return 5.56;
											}
										}
										else
										{
											if(rsrq < -6.5)
												return 6.06;
											else
												return 5.03;
										}
									}
								}
								else
								{
									if(velocity < 32.98)
									{
										if(rsrp < -94.5)
										{
											if(rsrq < -6.5)
											{
												if(sinr < 4.5)
												{
													if(velocity < 12.68)
													{
														if(velocity < 9.295)
															return 5.73;
														else
															return 3.7533333333;
													}
													else
													{
														if(rsrq < -9.5)
															return 3.15;
														else
															return 2.0866666667;
													}
												}
												else
												{
													if(sinr < 15.5)
													{
														if(rsrq < -7.5)
														{
															if(sinr < 8.5)
															{
																if(payload < 0.75)
																{
																	if(rsrq < -8.5)
																		return 8.6;
																	else
																		return 8.11;
																}
																else
																	return 6.28;
															}
															else
															{
																if(rsrq < -8.5)
																{
																	if(sinr < 12)
																		return 5.8;
																	else
																		return 7.13;
																}
																else
																	return 5.81;
															}
														}
														else
														{
															if(sinr < 10.5)
																return 4.45;
															else
																return 3.41;
														}
													}
													else
														return 8.99;
												}
											}
											else
												return 9.65;
										}
										else
										{
											if(velocity < 28.685)
											{
												if(payload < 0.75)
												{
													if(rsrq < -5.5)
													{
														if(rsrp < -89.5)
														{
															if(sinr < 15)
															{
																if(sinr < 13.5)
																{
																	if(f < 2232.5)
																	{
																		if(rsrq < -6.5)
																		{
																			if(velocity < 1.865)
																				return 6.96;
																			else
																			{
																				if(sinr < 12.5)
																				{
																					if(velocity < 13.46)
																						return 6.19;
																					else
																					{
																						if(velocity < 14.815)
																							return 4.33;
																						else
																							return 6.27;
																					}
																				}
																				else
																				{
																					if(velocity < 4.685)
																						return 3.27;
																					else
																						return 5.08;
																				}
																			}
																		}
																		else
																			return 8.7;
																	}
																	else
																	{
																		if(velocity < 11.26)
																		{
																			if(sinr < 8)
																				return 8.26;
																			else
																			{
																				if(rsrq < -7)
																					return 7.16;
																				else
																					return 6.35;
																			}
																		}
																		else
																		{
																			if(sinr < 11.5)
																				return 5.28;
																			else
																				return 7.87;
																		}
																	}
																}
																else
																{
																	if(f < 2232.5)
																	{
																		if(rsrp < -91.5)
																			return 4.09;
																		else
																		{
																			if(rsrq < -6.5)
																			{
																				if(rsrq < -7.5)
																					return 8.1;
																				else
																					return 11.53;
																			}
																			else
																				return 7.78;
																		}
																	}
																	else
																		return 6.55;
																}
															}
															else
																return 3.3066666667;
														}
														else
														{
															if(sinr < 3.5)
																return 8.62;
															else
															{
																if(rsrq < -8)
																	return 2.96;
																else
																	return 4.604;
															}
														}
													}
													else
													{
														if(rsrp < -91)
														{
															if(sinr < 14)
																return 8.66;
															else
																return 10.39;
														}
														else
															return 8.93;
													}
												}
												else
												{
													if(rsrq < -8.5)
													{
														if(rsrp < -92.5)
															return 20.73;
														else
														{
															if(sinr < 14.5)
																return 4.6;
															else
																return 12.88;
														}
													}
													else
													{
														if(rsrp < -90.5)
														{
															if(rsrp < -91.5)
															{
																if(rsrq < -6.5)
																{
																	if(sinr < 11)
																		return 12.08;
																	else
																	{
																		if(velocity < 8.125)
																			return 6.38;
																		else
																			return 7.45;
																	}
																}
																else
																{
																	if(velocity < 7.465)
																	{
																		if(rsrq < -5.5)
																			return 9.51;
																		else
																			return 7.41;
																	}
																	else
																	{
																		if(velocity < 21.06)
																		{
																			if(sinr < 7.5)
																				return 6.39;
																			else
																				return 6.9025;
																		}
																		else
																			return 7.87;
																	}
																}
															}
															else
															{
																if(rsrq < -6.5)
																{
																	if(velocity < 13.37)
																		return 5.674;
																	else
																		return 6.28;
																}
																else
																{
																	if(velocity < 14.075)
																		return 2.92;
																	else
																		return 10.27;
																}
															}
														}
														else
														{
															if(sinr < 13)
															{
																if(rsrq < -7)
																	return 15.53;
																else
																	return 14.44;
															}
															else
															{
																if(rsrp < -89.5)
																	return 8.58;
																else
																	return 9.45;
															}
														}
													}
												}
											}
											else
												return 13.63;
										}
									}
									else
									{
										if(rsrp < -93.5)
											return 0.22;
										else
											return 0.72;
									}
								}
							}
							else
								return 12.82;
						}
					}
				}
				else
				{
					if(rsrq < -8.5)
					{
						if(sinr < 8.5)
						{
							if(rsrq < -11.5)
							{
								if(sinr < 2)
								{
									if(sinr < -6.5)
										return 11.58;
									else
									{
										if(velocity < 11.645)
											return 7.85;
										else
											return 4.58;
									}
								}
								else
									return 11.98;
							}
							else
							{
								if(rsrp < -95.5)
								{
									if(velocity < 16.36)
									{
										if(sinr < 0.5)
										{
											if(rsrq < -10.5)
												return 2.91;
											else
												return 10.08;
										}
										else
										{
											if(rsrp < -96.5)
											{
												if(velocity < 5.025)
													return 3.058;
												else
												{
													if(rsrp < -97.5)
													{
														if(rsrq < -10.5)
															return 6.24;
														else
															return 4.4;
													}
													else
														return 5.64;
												}
											}
											else
											{
												if(velocity < 9.105)
												{
													if(sinr < 3)
														return 8.13;
													else
														return 6.92;
												}
												else
												{
													if(payload < 2.5)
														return 8.22;
													else
														return 3.3;
												}
											}
										}
									}
									else
									{
										if(sinr < -2)
											return 7.76;
										else
											return 7.07;
									}
								}
								else
								{
									if(rsrp < -93.5)
									{
										if(payload < 2.5)
										{
											if(sinr < 7.5)
											{
												if(rsrp < -94.5)
													return 3.04;
												else
													return 7.08;
											}
											else
												return 8.02;
										}
										else
										{
											if(f < 2232.5)
											{
												if(rsrq < -9.5)
												{
													if(sinr < 3)
														return 10.38;
													else
													{
														if(sinr < 7.5)
														{
															if(velocity < 10.095)
																return 4.89;
															else
															{
																if(sinr < 5.5)
																	return 10.51;
																else
																	return 7.29;
															}
														}
														else
															return 8.5;
													}
												}
												else
													return 10.88;
											}
											else
												return 6.82;
										}
									}
									else
									{
										if(rsrp < -91.5)
										{
											if(payload < 2.5)
											{
												if(rsrp < -92.5)
													return 12.44;
												else
													return 9.39;
											}
											else
												return 15;
										}
										else
										{
											if(rsrp < -90.5)
												return 6.78;
											else
											{
												if(payload < 2.5)
													return 9.69;
												else
													return 7.76;
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
								if(sinr < 12)
								{
									if(sinr < 10.5)
									{
										if(rsrp < -94.5)
											return 11.03;
										else
											return 10.11;
									}
									else
										return 13.59;
								}
								else
								{
									if(rsrp < -96.5)
										return 8.18;
									else
										return 6.3425;
								}
							}
							else
								return 14.69;
						}
					}
					else
					{
						if(rsrp < -94.5)
						{
							if(velocity < 13.98)
							{
								if(velocity < 9.845)
								{
									if(sinr < 5.5)
									{
										if(rsrq < -7.5)
											return 4.29;
										else
										{
											if(payload < 2.5)
												return 8.24;
											else
												return 11.74;
										}
									}
									else
									{
										if(rsrp < -97.5)
											return 5.8775;
										else
											return 4.06;
									}
								}
								else
								{
									if(sinr < 10.5)
									{
										if(rsrq < -7.5)
										{
											if(rsrp < -98.5)
												return 11.64;
											else
												return 11.05;
										}
										else
										{
											if(rsrq < -6.5)
												return 12.51;
											else
												return 13.1;
										}
									}
									else
									{
										if(rsrq < -6.5)
											return 10.38;
										else
										{
											if(sinr < 14)
												return 4.04;
											else
												return 5.88;
										}
									}
								}
							}
							else
							{
								if(sinr < 4)
								{
									if(velocity < 22.715)
										return 6.28;
									else
										return 4.98;
								}
								else
								{
									if(rsrq < -7.5)
										return 2.56;
									else
										return 3.87;
								}
							}
						}
						else
						{
							if(velocity < 14.57)
							{
								if(sinr < 15)
								{
									if(rsrp < -91.5)
									{
										if(velocity < 12.35)
										{
											if(velocity < 4.49)
												return 12.47;
											else
											{
												if(sinr < 11.5)
												{
													if(velocity < 10.37)
													{
														if(rsrp < -93)
															return 9.48;
														else
															return 12.55;
													}
													else
														return 8.944;
												}
												else
													return 5.88;
											}
										}
										else
										{
											if(sinr < 9.5)
												return 7.46;
											else
											{
												if(rsrp < -93)
													return 11.67;
												else
													return 15.95;
											}
										}
									}
									else
									{
										if(velocity < 11.77)
										{
											if(sinr < 9)
											{
												if(sinr < 6)
													return 9.07;
												else
													return 5.99;
											}
											else
											{
												if(rsrq < -6.5)
													return 8.27;
												else
												{
													if(rsrp < -90)
														return 12.41;
													else
														return 11.02;
												}
											}
										}
										else
										{
											if(rsrq < -6.5)
											{
												if(rsrp < -89.5)
													return 8.34;
												else
													return 9.51;
											}
											else
											{
												if(velocity < 13.005)
												{
													if(f < 2232.5)
														return 4.84;
													else
														return 6.98;
												}
												else
													return 7.11;
											}
										}
									}
								}
								else
								{
									if(f < 2232.5)
									{
										if(sinr < 24.5)
										{
											if(payload < 2.5)
												return 14.76;
											else
												return 13.39;
										}
										else
											return 11.55;
									}
									else
									{
										if(rsrq < -6.5)
										{
											if(sinr < 26)
												return 7.46;
											else
												return 8.66;
										}
										else
										{
											if(rsrp < -90)
												return 11.01;
											else
												return 9.1;
										}
									}
								}
							}
							else
							{
								if(velocity < 14.72)
								{
									if(sinr < 12)
										return 15.36;
									else
										return 23.98;
								}
								else
								{
									if(velocity < 25.1)
									{
										if(rsrq < -7.5)
										{
											if(payload < 2.5)
												return 10.11;
											else
												return 3.58;
										}
										else
										{
											if(velocity < 16.18)
											{
												if(f < 2232.5)
												{
													if(velocity < 15.105)
														return 11.4;
													else
													{
														if(rsrq < -6.5)
															return 12.3;
														else
															return 12.95;
													}
												}
												else
												{
													if(rsrp < -90.5)
														return 8.95;
													else
														return 12.7;
												}
											}
											else
												return 10.54;
										}
									}
									else
									{
										if(rsrp < -91)
											return 16.91;
										else
											return 11.42;
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
			if(sinr < 8.5)
			{
				if(rsrp < -103.5)
				{
					if(payload < 5.5)
					{
						if(velocity < 6.935)
						{
							if(rsrq < -9.5)
							{
								if(sinr < -7)
									return 4.19;
								else
									return 2.66;
							}
							else
							{
								if(rsrp < -106.5)
								{
									if(sinr < -2)
										return 2.21;
									else
									{
										if(payload < 4.5)
											return 8.76;
										else
											return 11.97;
									}
								}
								else
									return 2.8433333333;
							}
						}
						else
						{
							if(rsrp < -107)
								return 13.71;
							else
							{
								if(rsrq < -7.5)
								{
									if(rsrq < -9.5)
										return 4.8;
									else
									{
										if(velocity < 11.46)
											return 10.5;
										else
										{
											if(rsrq < -8.5)
												return 6.79;
											else
											{
												if(payload < 4.5)
													return 5.09;
												else
													return 5.96;
											}
										}
									}
								}
								else
									return 9.08;
							}
						}
					}
					else
					{
						if(payload < 9.5)
						{
							if(payload < 8.5)
							{
								if(sinr < 1.5)
								{
									if(payload < 6.5)
										return 2.91;
									else
									{
										if(sinr < -2.5)
											return 13.35;
										else
										{
											if(rsrq < -10.5)
												return 10.38;
											else
											{
												if(payload < 7.5)
													return 9.62;
												else
												{
													if(velocity < 5.995)
														return 8.11;
													else
														return 9.51;
												}
											}
										}
									}
								}
								else
								{
									if(velocity < 9.65)
									{
										if(rsrq < -8.5)
											return 10.6166666667;
										else
											return 8.73;
									}
									else
									{
										if(rsrq < -10.5)
										{
											if(payload < 7)
												return 10.68;
											else
												return 11.91;
										}
										else
										{
											if(rsrp < -107)
												return 14.22;
											else
												return 14.7;
										}
									}
								}
							}
							else
							{
								if(rsrp < -106.5)
									return 5.9533333333;
								else
								{
									if(rsrq < -9.5)
									{
										if(sinr < 2.5)
											return 9.7;
										else
											return 8.74;
									}
									else
										return 11.79;
								}
							}
						}
						else
						{
							if(rsrq < -10)
								return 18.13;
							else
							{
								if(rsrp < -107)
									return 8.55;
								else
									return 14.98;
							}
						}
					}
				}
				else
				{
					if(f < 1384.5)
					{
						if(rsrp < -96.5)
							return 1.8;
						else
							return 2.575;
					}
					else
					{
						if(payload < 6.5)
						{
							if(rsrq < -10.5)
							{
								if(rsrp < -95.5)
								{
									if(rsrp < -97.5)
									{
										if(rsrp < -100.5)
										{
											if(velocity < 12.605)
												return 9.08;
											else
											{
												if(payload < 4.5)
													return 8.97;
												else
												{
													if(sinr < -0.5)
														return 4.75;
													else
														return 5.39;
												}
											}
										}
										else
										{
											if(payload < 5.5)
											{
												if(sinr < 5.5)
													return 9.9;
												else
													return 8.93;
											}
											else
												return 8.7366666667;
										}
									}
									else
										return 6.01;
								}
								else
								{
									if(velocity < 13.925)
									{
										if(sinr < 0)
										{
											if(rsrp < -94.5)
												return 15.39;
											else
											{
												if(rsrp < -91.5)
													return 12.35;
												else
													return 12.95;
											}
										}
										else
										{
											if(velocity < 5.185)
											{
												if(rsrq < -11.5)
													return 10.4166666667;
												else
												{
													if(payload < 5.5)
														return 9.32;
													else
													{
														if(rsrp < -92)
															return 10.47;
														else
															return 9.89;
													}
												}
											}
											else
												return 12.31;
										}
									}
									else
										return 9.28;
								}
							}
							else
							{
								if(sinr < 6.5)
								{
									if(rsrp < -98.5)
									{
										if(rsrp < -99.5)
										{
											if(velocity < 12.56)
											{
												if(payload < 5.5)
													return 12.77;
												else
													return 21.92;
											}
											else
											{
												if(velocity < 14.985)
												{
													if(rsrp < -101)
													{
														if(rsrp < -102.5)
															return 11.56;
														else
															return 10.47;
													}
													else
														return 9.19;
												}
												else
												{
													if(payload < 5.5)
													{
														if(sinr < -0.5)
															return 13.2;
														else
															return 10.23;
													}
													else
														return 17.59;
												}
											}
										}
										else
										{
											if(velocity < 13.365)
												return 2.98;
											else
												return 9.86;
										}
									}
									else
									{
										if(velocity < 15.9)
										{
											if(rsrq < -5.5)
											{
												if(payload < 5.5)
												{
													if(rsrq < -6.5)
													{
														if(velocity < 13.135)
														{
															if(rsrp < -97.5)
																return 6.23;
															else
															{
																if(rsrq < -7.5)
																{
																	if(velocity < 8.25)
																	{
																		if(f < 2232.5)
																			return 11.41;
																		else
																		{
																			if(payload < 4.5)
																				return 9.28;
																			else
																				return 11.3;
																		}
																	}
																	else
																	{
																		if(velocity < 8.785)
																			return 17.34;
																		else
																		{
																			if(sinr < 0)
																				return 10.03;
																			else
																			{
																				if(sinr < 3)
																					return 15.93;
																				else
																				{
																					if(sinr < 5.5)
																						return 12.9;
																					else
																						return 12.2;
																				}
																			}
																		}
																	}
																}
																else
																	return 19.92;
															}
														}
														else
														{
															if(rsrq < -9)
																return 16.79;
															else
																return 15.67;
														}
													}
													else
													{
														if(rsrp < -90.5)
														{
															if(velocity < 7.24)
																return 13.17;
															else
																return 12.66;
														}
														else
															return 20.85;
													}
												}
												else
												{
													if(rsrp < -92.5)
													{
														if(velocity < 3.865)
															return 11.07;
														else
														{
															if(sinr < 2)
															{
																if(rsrq < -9.5)
																	return 15.93;
																else
																{
																	if(rsrp < -96)
																		return 15.55;
																	else
																		return 10.23;
																}
															}
															else
																return 16.68;
														}
													}
													else
														return 18.88;
												}
											}
											else
												return 6.8;
										}
										else
										{
											if(sinr < 4)
											{
												if(rsrp < -93.5)
												{
													if(sinr < 2.5)
														return 6.89;
													else
														return 16.06;
												}
												else
												{
													if(sinr < 0.5)
														return 10.59;
													else
														return 11.98;
												}
											}
											else
												return 8.25;
										}
									}
								}
								else
								{
									if(velocity < 16.625)
									{
										if(rsrq < -8.5)
										{
											if(payload < 5.5)
											{
												if(payload < 4.5)
													return 13.34;
												else
													return 11.83;
											}
											else
											{
												if(rsrp < -96)
													return 20.07;
												else
													return 9.96;
											}
										}
										else
										{
											if(velocity < 12.885)
											{
												if(rsrp < -96)
													return 4.32;
												else
													return 7.68;
											}
											else
											{
												if(f < 2232.5)
												{
													if(rsrp < -98.5)
														return 15.34;
													else
													{
														if(rsrp < -92.5)
														{
															if(velocity < 15.015)
																return 12.53;
															else
																return 11.83;
														}
														else
															return 15.08;
													}
												}
												else
													return 7.13;
											}
										}
									}
									else
									{
										if(sinr < 7.5)
										{
											if(velocity < 31.795)
											{
												if(payload < 5.5)
													return 6.69;
												else
													return 5.8;
											}
											else
												return 3.95;
										}
										else
											return 9.23;
									}
								}
							}
						}
						else
						{
							if(rsrp < -98.5)
							{
								if(sinr < 4.5)
								{
									if(velocity < 13.845)
									{
										if(f < 2232.5)
										{
											if(payload < 9.5)
											{
												if(sinr < -3.5)
													return 12.49;
												else
												{
													if(sinr < 2.5)
													{
														if(velocity < 11.775)
														{
															if(sinr < -2.5)
																return 6.59;
															else
															{
																if(rsrp < -100.5)
																	return 10.23;
																else
																	return 8.57;
															}
														}
														else
														{
															if(sinr < 0.5)
																return 4.9866666667;
															else
																return 5.58;
														}
													}
													else
													{
														if(rsrq < -10)
															return 9.19;
														else
															return 7.02;
													}
												}
											}
											else
											{
												if(rsrq < -11.5)
												{
													if(sinr < -2.5)
														return 14.63;
													else
														return 13.82;
												}
												else
												{
													if(rsrp < -100.5)
													{
														if(rsrp < -102)
															return 11.53;
														else
															return 15.59;
													}
													else
														return 8.93;
												}
											}
										}
										else
											return 12.41;
									}
									else
									{
										if(velocity < 18.405)
											return 14.40875;
										else
										{
											if(payload < 8.5)
												return 19.34;
											else
											{
												if(rsrp < -102)
													return 14.37;
												else
													return 16.56;
											}
										}
									}
								}
								else
								{
									if(velocity < 3.235)
									{
										if(rsrp < -100)
											return 11.14;
										else
											return 4.54;
									}
									else
									{
										if(rsrp < -100.5)
										{
											if(sinr < 5.5)
												return 18.9;
											else
											{
												if(payload < 9.5)
												{
													if(payload < 8)
														return 18.48;
													else
														return 19.93;
												}
												else
													return 21.8;
											}
										}
										else
										{
											if(payload < 9.5)
											{
												if(velocity < 12.175)
													return 20.5666666667;
												else
												{
													if(payload < 8)
													{
														if(sinr < 7)
															return 14.04;
														else
															return 5.36;
													}
													else
														return 18.35;
												}
											}
											else
											{
												if(sinr < 7)
												{
													if(velocity < 13.715)
														return 13.73;
													else
														return 10.62;
												}
												else
													return 19.98;
											}
										}
									}
								}
							}
							else
							{
								if(velocity < 35.19)
								{
									if(f < 2232.5)
									{
										if(rsrq < -7.5)
										{
											if(payload < 7.5)
											{
												if(rsrp < -91.5)
												{
													if(rsrp < -94.5)
													{
														if(velocity < 13.55)
														{
															if(rsrp < -97.5)
															{
																if(rsrq < -9)
																	return 21.16;
																else
																	return 16.26;
															}
															else
															{
																if(velocity < 10.305)
																{
																	if(velocity < 6.935)
																	{
																		if(rsrq < -10)
																			return 17.95;
																		else
																			return 13.39;
																	}
																	else
																		return 17.91;
																}
																else
																{
																	if(rsrq < -10.5)
																		return 10.36;
																	else
																		return 12.17;
																}
															}
														}
														else
														{
															if(rsrq < -10)
																return 14.63;
															else
																return 24.53;
														}
													}
													else
													{
														if(rsrp < -93)
															return 9.87;
														else
														{
															if(rsrq < -9)
																return 9.16;
															else
																return 9.74;
														}
													}
												}
												else
												{
													if(rsrp < -90.5)
													{
														if(rsrq < -9.5)
														{
															if(sinr < 4)
																return 20.39;
															else
																return 17.86;
														}
														else
															return 19.74;
													}
													else
													{
														if(sinr < 6)
															return 13.12;
														else
															return 19.35;
													}
												}
											}
											else
											{
												if(velocity < 1.045)
												{
													if(rsrp < -95)
														return 19.8716666667;
													else
													{
														if(rsrp < -91)
														{
															if(rsrp < -92.5)
															{
																if(rsrq < -9.5)
																{
																	if(payload < 8.5)
																		return 15.67;
																	else
																		return 16.86;
																}
																else
																	return 13.25;
															}
															else
																return 17.51;
														}
														else
														{
															if(rsrq < -8.5)
																return 14.115;
															else
																return 12.74;
														}
													}
												}
												else
												{
													if(sinr < 4.5)
													{
														if(rsrp < -95.5)
														{
															if(sinr < 3.5)
															{
																if(sinr < 0.5)
																	return 13.23;
																else
																{
																	if(rsrp < -97.5)
																	{
																		if(velocity < 14.1)
																			return 11.24;
																		else
																			return 12.35;
																	}
																	else
																	{
																		if(payload < 8.5)
																			return 7.92;
																		else
																		{
																			if(velocity < 22.27)
																				return 9.335;
																			else
																				return 10.53;
																		}
																	}
																}
															}
															else
																return 12.72;
														}
														else
														{
															if(velocity < 14.655)
															{
																if(velocity < 14.295)
																{
																	if(rsrp < -91.5)
																	{
																		if(sinr < 1.5)
																		{
																			if(sinr < 0)
																			{
																				if(rsrp < -94.5)
																					return 10.94;
																				else
																					return 11.87;
																			}
																			else
																				return 11.77;
																		}
																		else
																			return 14.72;
																	}
																	else
																		return 10.58;
																}
																else
																	return 8.46;
															}
															else
															{
																if(rsrp < -94.5)
																	return 20.69;
																else
																{
																	if(sinr < -0.5)
																		return 16.21;
																	else
																		return 14.225;
																}
															}
														}
													}
													else
													{
														if(rsrq < -9.5)
														{
															if(sinr < 6.5)
															{
																if(rsrp < -93.5)
																	return 10.49;
																else
																	return 14.12;
															}
															else
																return 17.09;
														}
														else
														{
															if(payload < 9)
															{
																if(rsrp < -92)
																{
																	if(rsrq < -8.5)
																		return 19.84;
																	else
																		return 19.05;
																}
																else
																	return 11.65;
															}
															else
															{
																if(rsrq < -8.5)
																{
																	if(velocity < 17.315)
																	{
																		if(sinr < 5.5)
																			return 19.36;
																		else
																			return 17.58;
																	}
																	else
																		return 22.55;
																}
																else
																	return 16.78;
															}
														}
													}
												}
											}
										}
										else
										{
											if(velocity < 14.01)
											{
												if(rsrp < -96.5)
													return 14.05;
												else
												{
													if(velocity < 11.28)
													{
														if(sinr < 5.5)
															return 19.19;
														else
															return 21;
													}
													else
														return 21.54;
												}
											}
											else
											{
												if(velocity < 14.455)
													return 15.5;
												else
													return 9.63;
											}
										}
									}
									else
									{
										if(rsrp < -90.5)
										{
											if(rsrp < -91.5)
											{
												if(payload < 8.5)
												{
													if(sinr < 4)
														return 21.07;
													else
														return 18.08;
												}
												else
												{
													if(sinr < 4.5)
														return 15.1;
													else
														return 16.64;
												}
											}
											else
											{
												if(payload < 9)
													return 16.22;
												else
													return 14.67;
											}
										}
										else
										{
											if(velocity < 8.59)
												return 24.3;
											else
											{
												if(velocity < 12.455)
												{
													if(payload < 8.5)
														return 16.88;
													else
														return 15.39;
												}
												else
												{
													if(payload < 8.5)
													{
														if(velocity < 14.53)
															return 19.04;
														else
															return 18.39;
													}
													else
														return 20.74;
												}
											}
										}
									}
								}
								else
									return 7.38;
							}
						}
					}
				}
			}
			else
			{
				if(rsrq < -10.5)
				{
					if(rsrq < -12)
						return 1.43;
					else
					{
						if(sinr < 10.5)
						{
							if(sinr < 9.5)
								return 10.39;
							else
							{
								if(payload < 4.5)
									return 11.96;
								else
									return 12.91;
							}
						}
						else
							return 8.8;
					}
				}
				else
				{
					if(payload < 7.5)
					{
						if(velocity < 13.13)
						{
							if(velocity < 11.745)
							{
								if(payload < 4.5)
								{
									if(sinr < 26.5)
									{
										if(sinr < 18.5)
										{
											if(sinr < 16)
											{
												if(rsrp < -91.5)
												{
													if(rsrp < -92.5)
														return 17.25;
													else
														return 15.64;
												}
												else
												{
													if(sinr < 13)
														return 17.37;
													else
														return 18.45;
												}
											}
											else
											{
												if(rsrq < -8)
													return 14.19;
												else
												{
													if(sinr < 17.5)
														return 16.54;
													else
														return 15.28;
												}
											}
										}
										else
										{
											if(velocity < 9.51)
											{
												if(rsrp < -91.5)
												{
													if(rsrq < -6)
														return 10.208;
													else
														return 9.28;
												}
												else
												{
													if(velocity < 3.21)
													{
														if(rsrp < -90)
															return 16.63;
														else
															return 10.56;
													}
													else
													{
														if(rsrp < -90)
															return 15.54;
														else
															return 13.32;
													}
												}
											}
											else
												return 6.3;
										}
									}
									else
										return 26.34;
								}
								else
								{
									if(velocity < 4.585)
									{
										if(f < 2232.5)
										{
											if(payload < 6.5)
											{
												if(rsrq < -8.5)
												{
													if(sinr < 11)
													{
														if(sinr < 9.5)
															return 12.29;
														else
															return 19.27;
													}
													else
														return 11.29;
												}
												else
												{
													if(rsrq < -7.5)
													{
														if(payload < 5.5)
															return 9.74;
														else
														{
															if(sinr < 15)
																return 9.9;
															else
																return 8.76;
														}
													}
													else
													{
														if(rsrp < -93)
															return 8.68;
														else
															return 16.41;
													}
												}
											}
											else
											{
												if(sinr < 9.5)
													return 11.05;
												else
												{
													if(sinr < 12.5)
														return 21.66;
													else
													{
														if(rsrq < -8.5)
															return 13.67;
														else
														{
															if(sinr < 20)
																return 15.77;
															else
																return 16.53;
														}
													}
												}
											}
										}
										else
										{
											if(rsrp < -93.5)
											{
												if(payload < 6)
													return 22.06;
												else
													return 24.12;
											}
											else
											{
												if(sinr < 24.5)
												{
													if(rsrq < -5.5)
													{
														if(rsrq < -7)
														{
															if(sinr < 11.5)
																return 12.11;
															else
															{
																if(rsrq < -8.5)
																	return 19.07;
																else
																	return 16.56;
															}
														}
														else
														{
															if(velocity < 0.91)
															{
																if(payload < 5.5)
																{
																	if(sinr < 20.5)
																		return 16.14;
																	else
																		return 18.82;
																}
																else
																{
																	if(rsrp < -90.5)
																		return 21.19;
																	else
																		return 19.24;
																}
															}
															else
																return 16.65;
														}
													}
													else
													{
														if(rsrp < -91.5)
														{
															if(rsrp < -92.5)
																return 12.04;
															else
																return 10.17;
														}
														else
															return 15.54;
													}
												}
												else
												{
													if(payload < 6.5)
														return 13.36;
													else
														return 10.62;
												}
											}
										}
									}
									else
									{
										if(velocity < 6.955)
										{
											if(sinr < 12.5)
												return 13.18;
											else
											{
												if(rsrp < -90)
												{
													if(velocity < 6.435)
													{
														if(sinr < 17.5)
															return 22.91;
														else
															return 22.14;
													}
													else
														return 21.09;
												}
												else
												{
													if(payload < 6.5)
														return 14.79;
													else
														return 19.99;
												}
											}
										}
										else
										{
											if(rsrq < -6.5)
											{
												if(rsrq < -7.5)
												{
													if(rsrp < -91.5)
													{
														if(sinr < 11.5)
														{
															if(rsrp < -100)
																return 17.4;
															else
															{
																if(payload < 6)
																	return 15.44;
																else
																	return 15.89;
															}
														}
														else
														{
															if(rsrp < -95.5)
																return 14.91;
															else
																return 14.06;
														}
													}
													else
														return 19.41;
												}
												else
												{
													if(sinr < 9.5)
														return 23.42;
													else
													{
														if(rsrp < -92.5)
														{
															if(rsrp < -96)
																return 19.34;
															else
																return 21.5;
														}
														else
														{
															if(payload < 5.5)
																return 15.73;
															else
																return 16.34;
														}
													}
												}
											}
											else
											{
												if(rsrp < -90.5)
												{
													if(velocity < 10.32)
													{
														if(rsrp < -93.5)
															return 15.97;
														else
														{
															if(rsrp < -91.5)
																return 12.39;
															else
																return 13.85;
														}
													}
													else
														return 17.74;
												}
												else
												{
													if(payload < 6.5)
														return 12.65;
													else
														return 11.79;
												}
											}
										}
									}
								}
							}
							else
							{
								if(rsrp < -95.5)
									return 18.28;
								else
								{
									if(sinr < 24.5)
									{
										if(rsrp < -93)
										{
											if(velocity < 12.5)
												return 9.7;
											else
												return 8.67;
										}
										else
										{
											if(payload < 4.5)
												return 12.86;
											else
											{
												if(sinr < 17.5)
												{
													if(rsrq < -6.5)
													{
														if(sinr < 11)
															return 10.48;
														else
														{
															if(rsrp < -90.5)
																return 11.21;
															else
																return 11.76;
														}
													}
													else
														return 8.55;
												}
												else
													return 12.5166666667;
											}
										}
									}
									else
										return 7.58;
								}
							}
						}
						else
						{
							if(rsrp < -99.5)
							{
								if(rsrq < -8.5)
									return 5.43;
								else
								{
									if(sinr < 10.5)
									{
										if(rsrp < -102.5)
											return 12.62;
										else
											return 8.41;
									}
									else
										return 14.8666666667;
								}
							}
							else
							{
								if(velocity < 13.515)
								{
									if(rsrp < -91.5)
									{
										if(payload < 4.5)
											return 14.79;
										else
											return 16.31;
									}
									else
									{
										if(sinr < 16)
											return 21.4;
										else
											return 24.93;
									}
								}
								else
								{
									if(rsrp < -98.5)
										return 22.64;
									else
									{
										if(velocity < 16.08)
										{
											if(rsrq < -6.5)
											{
												if(f < 2232.5)
												{
													if(velocity < 15.02)
													{
														if(rsrp < -94)
															return 16.6;
														else
														{
															if(rsrp < -89.5)
															{
																if(payload < 6.5)
																{
																	if(sinr < 21)
																		return 16.47;
																	else
																		return 15.91;
																}
																else
																	return 13.35;
															}
															else
																return 16.8;
														}
													}
													else
													{
														if(sinr < 19.5)
														{
															if(sinr < 10)
																return 12.51;
															else
															{
																if(payload < 6)
																	return 12.72;
																else
																	return 13.86;
															}
														}
														else
															return 14.96;
													}
												}
												else
												{
													if(rsrp < -92.5)
													{
														if(velocity < 15.04)
															return 17.5833333333;
														else
															return 19.61;
													}
													else
													{
														if(payload < 6)
															return 15.27;
														else
															return 12.45;
													}
												}
											}
											else
											{
												if(rsrp < -91.5)
													return 25.07;
												else
												{
													if(rsrp < -89.5)
													{
														if(sinr < 14)
															return 14.745;
														else
															return 12.87;
													}
													else
													{
														if(payload < 6)
														{
															if(rsrq < -5.5)
																return 18.6;
															else
																return 17.26;
														}
														else
															return 14.73;
													}
												}
											}
										}
										else
										{
											if(payload < 6.5)
											{
												if(rsrp < -92.5)
													return 17.68;
												else
													return 18.38;
											}
											else
												return 21.37;
										}
									}
								}
							}
						}
					}
					else
					{
						if(rsrp < -96.5)
						{
							if(velocity < 12.97)
							{
								if(velocity < 8.645)
									return 10.51;
								else
								{
									if(sinr < 17)
									{
										if(rsrp < -103)
											return 16.63;
										else
										{
											if(rsrp < -101)
												return 22.61;
											else
											{
												if(sinr < 11.5)
													return 16.56;
												else
												{
													if(payload < 9)
														return 20.54;
													else
														return 19.56;
												}
											}
										}
									}
									else
										return 30.03;
								}
							}
							else
							{
								if(rsrq < -6.5)
								{
									if(payload < 8.5)
										return 8.45;
									else
									{
										if(rsrp < -101)
											return 10.76;
										else
											return 9.45;
									}
								}
								else
								{
									if(velocity < 25.165)
									{
										if(rsrq < -5.5)
											return 13.97;
										else
											return 10.23;
									}
									else
										return 22.6;
								}
							}
						}
						else
						{
							if(velocity < 31.29)
							{
								if(payload < 9.5)
								{
									if(rsrq < -9.5)
										return 11.41;
									else
									{
										if(velocity < 17.02)
										{
											if(rsrp < -91.5)
											{
												if(rsrp < -92.5)
												{
													if(velocity < 15.13)
													{
														if(rsrp < -94.5)
														{
															if(rsrq < -8)
																return 17.29;
															else
															{
																if(velocity < 6.985)
																	return 20.11;
																else
																	return 19.33;
															}
														}
														else
														{
															if(sinr < 14)
															{
																if(payload < 8.5)
																	return 17.31;
																else
																	return 16.7533333333;
															}
															else
																return 15.23;
														}
													}
													else
													{
														if(sinr < 15)
															return 23.69;
														else
															return 21.47;
													}
												}
												else
												{
													if(sinr < 23)
													{
														if(sinr < 16)
														{
															if(rsrq < -7.5)
																return 15.58;
															else
																return 19.39;
														}
														else
															return 10.03;
													}
													else
														return 23.47;
												}
											}
											else
											{
												if(payload < 8.5)
												{
													if(f < 2232.5)
													{
														if(sinr < 13.5)
														{
															if(velocity < 6.125)
																return 12.03;
															else
															{
																if(rsrp < -90)
																	return 14.44;
																else
																	return 16.27;
															}
														}
														else
														{
															if(velocity < 14.735)
															{
																if(rsrq < -7)
																	return 17.98;
																else
																	return 18.58;
															}
															else
																return 21.23;
														}
													}
													else
													{
														if(velocity < 3.63)
														{
															if(rsrq < -6.5)
															{
																if(rsrq < -7.5)
																	return 18.74;
																else
																	return 20.83;
															}
															else
																return 23.34;
														}
														else
															return 25.44;
													}
												}
												else
												{
													if(rsrp < -90.5)
													{
														if(sinr < 24)
														{
															if(velocity < 13.725)
															{
																if(velocity < 7.195)
																{
																	if(sinr < 15.5)
																		return 21.11;
																	else
																		return 22.29;
																}
																else
																	return 23.97;
															}
															else
																return 30.48;
														}
														else
															return 14.64;
													}
													else
													{
														if(velocity < 13.275)
														{
															if(velocity < 11.945)
															{
																if(velocity < 7.87)
																	return 21.76;
																else
																{
																	if(velocity < 9.87)
																		return 16.95;
																	else
																	{
																		if(rsrp < -89.5)
																			return 18.24;
																		else
																			return 19.43;
																	}
																}
															}
															else
																return 13.5;
														}
														else
														{
															if(rsrp < -89.5)
																return 28.21;
															else
															{
																if(sinr < 17.5)
																	return 19.39;
																else
																	return 25.78;
															}
														}
													}
												}
											}
										}
										else
											return 13.65;
									}
								}
								else
								{
									if(sinr < 11.5)
									{
										if(sinr < 9.5)
										{
											if(rsrp < -93)
												return 26.2;
											else
												return 27.43;
										}
										else
										{
											if(rsrq < -7.5)
												return 26.49;
											else
											{
												if(rsrp < -92)
													return 21.75;
												else
													return 19.92;
											}
										}
									}
									else
									{
										if(sinr < 12.5)
										{
											if(rsrq < -7.5)
												return 16.35;
											else
												return 15.27;
										}
										else
										{
											if(velocity < 4.45)
											{
												if(rsrp < -90.5)
												{
													if(rsrp < -92)
														return 17.06;
													else
														return 20.02;
												}
												else
												{
													if(velocity < 0.47)
													{
														if(rsrp < -89.5)
															return 27.88;
														else
														{
															if(sinr < 18)
																return 25.92;
															else
																return 17.69;
														}
													}
													else
														return 25.84;
												}
											}
											else
											{
												if(sinr < 23)
												{
													if(sinr < 18.5)
														return 18.054;
													else
														return 14.77;
												}
												else
													return 20.24;
											}
										}
									}
								}
							}
							else
								return 6.05;
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
			if(velocity < 38.99)
			{
				if(f < 1384.5)
				{
					if(rsrp < -63)
					{
						if(sinr < 15.5)
						{
							if(sinr < 10.5)
								return 7.3333333333;
							else
							{
								if(sinr < 14.5)
								{
									if(velocity < 31.85)
										return 4.7525;
									else
										return 2.98;
								}
								else
									return 7.28;
							}
						}
						else
							return 2.52;
					}
					else
						return 17.17;
				}
				else
				{
					if(rsrq < -10.5)
					{
						if(payload < 7.5)
						{
							if(velocity < 33.195)
							{
								if(velocity < 14.305)
									return 2.73;
								else
								{
									if(rsrp < -87.5)
										return 0.47;
									else
										return 1.69;
								}
							}
							else
								return 8.7;
						}
						else
						{
							if(rsrp < -87)
								return 20.07;
							else
								return 12.49;
						}
					}
					else
					{
						if(f < 2232.5)
						{
							if(payload < 4.5)
							{
								if(payload < 1.5)
								{
									if(payload < 0.3)
									{
										if(sinr < 15.5)
										{
											if(velocity < 10.16)
											{
												if(rsrp < -86)
													return 4.74;
												else
													return 7.69;
											}
											else
											{
												if(rsrq < -7.5)
													return 2.48;
												else
												{
													if(velocity < 35.775)
													{
														if(velocity < 23.675)
														{
															if(rsrp < -86.5)
																return 6.25;
															else
															{
																if(rsrp < -82.5)
																{
																	if(rsrq < -5.5)
																		return 3.92;
																	else
																		return 3.29;
																}
																else
																	return 5.0525;
															}
														}
														else
															return 8.42;
													}
													else
														return 3.86;
												}
											}
										}
										else
											return 9.52;
									}
									else
									{
										if(rsrq < -5.5)
										{
											if(velocity < 11.385)
											{
												if(rsrp < -81.5)
												{
													if(payload < 0.75)
													{
														if(rsrq < -8.5)
															return 2.76;
														else
															return 4.74;
													}
													else
													{
														if(rsrp < -84.5)
															return 6.11;
														else
															return 5.44;
													}
												}
												else
												{
													if(rsrp < -78)
														return 9.39;
													else
														return 7.17;
												}
											}
											else
											{
												if(sinr < 3)
													return 4;
												else
												{
													if(velocity < 34.71)
													{
														if(rsrp < -84.5)
														{
															if(sinr < 14.5)
															{
																if(velocity < 12.96)
																	return 12.455;
																else
																{
																	if(velocity < 14.18)
																		return 7.21;
																	else
																	{
																		if(sinr < 12.5)
																		{
																			if(rsrq < -8.5)
																				return 10.04;
																			else
																			{
																				if(sinr < 11)
																				{
																					if(sinr < 9.5)
																						return 8.6766666667;
																					else
																						return 10.62;
																				}
																				else
																					return 7.62;
																			}
																		}
																		else
																			return 10.72;
																	}
																}
															}
															else
																return 15.53;
														}
														else
														{
															if(rsrp < -83.5)
															{
																if(velocity < 16.65)
																{
																	if(payload < 0.75)
																		return 6.38;
																	else
																		return 5.76;
																}
																else
																	return 7.12;
															}
															else
															{
																if(rsrp < -82.5)
																	return 12.97;
																else
																{
																	if(velocity < 14.58)
																	{
																		if(payload < 0.75)
																			return 8.64;
																		else
																			return 6.09;
																	}
																	else
																	{
																		if(payload < 0.75)
																			return 10.2;
																		else
																			return 9.24;
																	}
																}
															}
														}
													}
													else
														return 5.815;
												}
											}
										}
										else
										{
											if(rsrp < -80.5)
											{
												if(rsrp < -85)
													return 6.36;
												else
												{
													if(payload < 0.75)
														return 6.23;
													else
														return 7.625;
												}
											}
											else
											{
												if(payload < 0.75)
												{
													if(sinr < 11.5)
														return 8.6;
													else
														return 21.16;
												}
												else
													return 7.35;
											}
										}
									}
								}
								else
								{
									if(rsrq < -8.5)
									{
										if(rsrp < -86)
										{
											if(velocity < 15.145)
												return 7.18;
											else
												return 8.76;
										}
										else
										{
											if(rsrp < -82.5)
												return 14.25;
											else
												return 10.7133333333;
										}
									}
									else
									{
										if(rsrp < -79.5)
										{
											if(rsrp < -87.5)
												return 9.85;
											else
											{
												if(velocity < 17.69)
												{
													if(rsrp < -86.5)
													{
														if(sinr < 11.5)
														{
															if(payload < 3.5)
																return 13.45;
															else
															{
																if(sinr < 10.5)
																{
																	if(rsrq < -6.5)
																		return 14.42;
																	else
																		return 11.61;
																}
																else
																	return 11.6;
															}
														}
														else
														{
															if(sinr < 12.5)
																return 21.78;
															else
															{
																if(rsrq < -5.5)
																	return 14.1;
																else
																	return 10.7;
															}
														}
													}
													else
													{
														if(sinr < 12.5)
														{
															if(rsrq < -7.5)
															{
																if(rsrp < -84.5)
																	return 11.99;
																else
																{
																	if(velocity < 10.34)
																	{
																		if(payload < 3.5)
																			return 13.34;
																		else
																			return 14.86;
																	}
																	else
																		return 16.455;
																}
															}
															else
															{
																if(sinr < 11.5)
																{
																	if(sinr < 5.5)
																		return 12.85;
																	else
																	{
																		if(rsrq < -5.5)
																		{
																			if(rsrq < -6.5)
																				return 8.93;
																			else
																			{
																				if(payload < 2.5)
																					return 9.71;
																				else
																				{
																					if(payload < 3.5)
																						return 11.71;
																					else
																					{
																						if(velocity < 13.515)
																							return 12.39;
																						else
																							return 10.06;
																					}
																				}
																			}
																		}
																		else
																		{
																			if(velocity < 14.16)
																				return 11.59;
																			else
																				return 17.48;
																		}
																	}
																}
																else
																{
																	if(payload < 3)
																		return 6.92;
																	else
																		return 6.19;
																}
															}
														}
														else
														{
															if(rsrp < -84.5)
																return 17.72;
															else
															{
																if(rsrq < -7.5)
																	return 10.02;
																else
																{
																	if(velocity < 11.4)
																		return 9.7;
																	else
																	{
																		if(payload < 2.5)
																		{
																			if(sinr < 14)
																				return 15.53;
																			else
																				return 13.84;
																		}
																		else
																		{
																			if(sinr < 14)
																			{
																				if(rsrp < -82)
																					return 12.12;
																				else
																					return 12.82;
																			}
																			else
																				return 11.63;
																		}
																	}
																}
															}
														}
													}
												}
												else
												{
													if(sinr < 12.5)
													{
														if(rsrp < -82.5)
														{
															if(velocity < 31.715)
															{
																if(sinr < 7)
																	return 10.05;
																else
																	return 12.49;
															}
															else
																return 13.59;
														}
														else
														{
															if(payload < 2.5)
																return 11.04;
															else
																return 13.56;
														}
													}
													else
													{
														if(payload < 3)
															return 12.23;
														else
															return 8.04;
													}
												}
											}
										}
										else
										{
											if(velocity < 7.78)
												return 22.225;
											else
											{
												if(rsrq < -6)
													return 13.45;
												else
												{
													if(payload < 2.5)
														return 14.39;
													else
														return 15.71;
												}
											}
										}
									}
								}
							}
							else
							{
								if(sinr < 5.5)
								{
									if(rsrq < -5.5)
									{
										if(velocity < 33.19)
										{
											if(sinr < 2.5)
											{
												if(rsrq < -7.5)
												{
													if(velocity < 15.42)
													{
														if(payload < 9)
														{
															if(rsrp < -87)
																return 13.86;
															else
																return 15.31;
														}
														else
															return 16.89;
													}
													else
													{
														if(rsrq < -9)
															return 18.29;
														else
															return 17.03;
													}
												}
												else
												{
													if(velocity < 10.96)
													{
														if(rsrp < -86)
															return 16.28;
														else
															return 16.82;
													}
													else
													{
														if(rsrp < -85)
															return 23.13;
														else
															return 22.08;
													}
												}
											}
											else
											{
												if(velocity < 13.43)
												{
													if(payload < 5.5)
														return 10.44;
													else
														return 12.23;
												}
												else
												{
													if(rsrq < -9.5)
														return 13.45;
													else
													{
														if(sinr < 3.5)
														{
															if(rsrp < -85)
																return 17.61;
															else
																return 20.82;
														}
														else
														{
															if(velocity < 14.355)
																return 14.49;
															else
																return 15.22;
														}
													}
												}
											}
										}
										else
										{
											if(rsrp < -87.5)
												return 12.96;
											else
											{
												if(payload < 8)
												{
													if(velocity < 33.85)
														return 18.7;
													else
														return 33.83;
												}
												else
													return 20.84;
											}
										}
									}
									else
										return 6.14;
								}
								else
								{
									if(rsrq < -6.5)
									{
										if(sinr < 15)
										{
											if(payload < 6.5)
											{
												if(sinr < 11)
												{
													if(sinr < 8.5)
													{
														if(rsrp < -86)
															return 17.69;
														else
															return 13.82;
													}
													else
													{
														if(payload < 5.5)
														{
															if(rsrq < -9)
																return 22.42;
															else
																return 20.94;
														}
														else
														{
															if(velocity < 23.825)
															{
																if(rsrp < -80.5)
																	return 19.73;
																else
																	return 18.11;
															}
															else
																return 17.24;
														}
													}
												}
												else
												{
													if(rsrq < -8.5)
														return 12.78;
													else
													{
														if(rsrp < -84.5)
															return 16.4;
														else
															return 18.04;
													}
												}
											}
											else
											{
												if(rsrp < -83.5)
												{
													if(velocity < 5.915)
													{
														if(rsrp < -85.5)
														{
															if(rsrq < -8.5)
																return 18.4;
															else
																return 17.79;
														}
														else
															return 13.56;
													}
													else
													{
														if(rsrq < -8)
														{
															if(payload < 7.5)
															{
																if(rsrp < -87.5)
																	return 23.22;
																else
																	return 21.17;
															}
															else
																return 25.46;
														}
														else
														{
															if(velocity < 14.865)
															{
																if(payload < 7.5)
																	return 20.5;
																else
																	return 16.51;
															}
															else
															{
																if(velocity < 32.46)
																{
																	if(payload < 9.5)
																	{
																		if(sinr < 10.5)
																		{
																			if(rsrp < -86.5)
																				return 19.97;
																			else
																				return 20.69;
																		}
																		else
																			return 19.14;
																	}
																	else
																		return 22.25;
																}
																else
																	return 18.92;
															}
														}
													}
												}
												else
												{
													if(velocity < 13.42)
														return 21.8066666667;
													else
													{
														if(payload < 9)
														{
															if(sinr < 11)
																return 23.58;
															else
																return 24.19;
														}
														else
															return 25.91;
													}
												}
											}
										}
										else
										{
											if(velocity < 12.4)
											{
												if(rsrq < -7.5)
													return 15.152;
												else
													return 12.9;
											}
											else
											{
												if(velocity < 23.385)
												{
													if(rsrp < -84.5)
														return 12.38;
													else
														return 11.74;
												}
												else
													return 14.23;
											}
										}
									}
									else
									{
										if(velocity < 12.64)
										{
											if(velocity < 11.25)
											{
												if(payload < 8)
												{
													if(rsrp < -86.5)
														return 24.73;
													else
													{
														if(sinr < 14)
															return 16.74;
														else
															return 14.74;
													}
												}
												else
												{
													if(rsrp < -84.5)
													{
														if(rsrq < -5.5)
														{
															if(velocity < 3.27)
																return 22.8;
															else
																return 19.41;
														}
														else
														{
															if(payload < 9.5)
																return 27.71;
															else
															{
																if(sinr < 15)
																	return 23.27;
																else
																	return 24.95;
															}
														}
													}
													else
													{
														if(rsrp < -82)
															return 29.98;
														else
															return 23.85;
													}
												}
											}
											else
											{
												if(velocity < 11.76)
													return 35.18;
												else
												{
													if(payload < 8)
														return 19.14;
													else
													{
														if(rsrp < -79.5)
															return 25.18;
														else
															return 26.93;
													}
												}
											}
										}
										else
										{
											if(velocity < 15.535)
											{
												if(velocity < 15.405)
												{
													if(payload < 7.5)
													{
														if(rsrp < -86.5)
															return 14.3;
														else
														{
															if(velocity < 14.605)
															{
																if(velocity < 14.46)
																{
																	if(velocity < 13.97)
																	{
																		if(rsrp < -80.5)
																		{
																			if(sinr < 10)
																				return 17.88;
																			else
																				return 16.06;
																		}
																		else
																		{
																			if(payload < 5.5)
																				return 18.07;
																			else
																			{
																				if(rsrp < -76)
																					return 20.86;
																				else
																					return 18.16;
																			}
																		}
																	}
																	else
																		return 23.02;
																}
																else
																	return 16.59;
															}
															else
																return 22.11;
														}
													}
													else
													{
														if(rsrp < -85.5)
															return 20.98;
														else
														{
															if(velocity < 13.19)
																return 26.06;
															else
															{
																if(rsrq < -5.5)
																	return 24.88;
																else
																	return 25.59;
															}
														}
													}
												}
												else
													return 10.67;
											}
											else
											{
												if(velocity < 27.385)
												{
													if(rsrq < -5.5)
													{
														if(rsrp < -86)
															return 30.77;
														else
															return 25.7;
													}
													else
													{
														if(rsrp < -80.5)
														{
															if(sinr < 13)
																return 22.79;
															else
																return 21.88;
														}
														else
															return 26.65;
													}
												}
												else
												{
													if(velocity < 33.29)
													{
														if(payload < 5.5)
															return 16.13;
														else
														{
															if(sinr < 11.5)
																return 18.99;
															else
																return 18.14;
														}
													}
													else
													{
														if(rsrp < -85)
															return 24.71;
														else
															return 20.96;
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
								if(velocity < 14.125)
								{
									if(velocity < 11.585)
									{
										if(velocity < 5.365)
										{
											if(velocity < 2.09)
											{
												if(payload < 2.5)
												{
													if(payload < 1.5)
													{
														if(rsrq < -6.5)
														{
															if(sinr < 10.5)
																return 5.23;
															else
															{
																if(rsrp < -78.5)
																{
																	if(velocity < 0.495)
																	{
																		if(payload < 0.3)
																			return 5;
																		else
																			return 6.5;
																	}
																	else
																		return 8.08;
																}
																else
																{
																	if(rsrq < -7.5)
																		return 11.63;
																	else
																	{
																		if(sinr < 13.5)
																			return 7.37;
																		else
																			return 8.8;
																	}
																}
															}
														}
														else
														{
															if(rsrq < -5.5)
																return 5.19;
															else
																return 6.02;
														}
													}
													else
													{
														if(rsrq < -6.5)
															return 9;
														else
															return 9.85;
													}
												}
												else
												{
													if(payload < 3.5)
														return 11.04;
													else
													{
														if(rsrp < -85.5)
															return 14.38;
														else
															return 13.24;
													}
												}
											}
											else
											{
												if(rsrp < -78.5)
													return 6.55;
												else
													return 4.26;
											}
										}
										else
										{
											if(payload < 0.75)
											{
												if(sinr < 9.5)
												{
													if(sinr < 5)
														return 6.18;
													else
														return 7.5;
												}
												else
													return 4.73;
											}
											else
											{
												if(sinr < 13)
												{
													if(rsrq < -6.5)
													{
														if(payload < 2.5)
														{
															if(payload < 1.5)
																return 8.64;
															else
																return 7.17;
														}
														else
														{
															if(velocity < 9.8)
															{
																if(rsrq < -7.5)
																	return 12.77;
																else
																	return 11.1;
															}
															else
																return 8.87;
														}
													}
													else
														return 13.99;
												}
												else
												{
													if(payload < 3)
														return 8.63;
													else
														return 8.13;
												}
											}
										}
									}
									else
									{
										if(payload < 1.5)
										{
											if(rsrp < -86)
												return 5.59;
											else
												return 9.3333333333;
										}
										else
										{
											if(sinr < 8)
												return 15.535;
											else
											{
												if(rsrp < -78.5)
												{
													if(velocity < 12.895)
														return 14.78;
													else
														return 16.18;
												}
												else
													return 12.7166666667;
											}
										}
									}
								}
								else
								{
									if(rsrp < -86.5)
										return 8.25;
									else
									{
										if(velocity < 14.565)
										{
											if(rsrp < -84.5)
												return 5.65;
											else
												return 4.23;
										}
										else
											return 7.25;
									}
								}
							}
							else
							{
								if(payload < 9.5)
								{
									if(sinr < 0.5)
									{
										if(rsrq < -8.5)
											return 18.87;
										else
											return 22.27;
									}
									else
									{
										if(velocity < 11.87)
										{
											if(sinr < 5)
											{
												if(rsrq < -7.5)
													return 13.83;
												else
													return 12.4;
											}
											else
											{
												if(rsrq < -7.5)
												{
													if(rsrq < -8.5)
														return 15.95;
													else
													{
														if(velocity < 4.665)
														{
															if(payload < 8.5)
																return 14.935;
															else
																return 13.84;
														}
														else
															return 13.1;
													}
												}
												else
												{
													if(velocity < 3.56)
													{
														if(payload < 6)
															return 18.9;
														else
														{
															if(rsrq < -6.5)
																return 16.3;
															else
																return 17.47;
														}
													}
													else
													{
														if(velocity < 9.785)
														{
															if(sinr < 15)
															{
																if(velocity < 9.075)
																{
																	if(rsrq < -6.5)
																	{
																		if(rsrp < -83.5)
																			return 14.6133333333;
																		else
																			return 13.22;
																	}
																	else
																		return 15.26;
																}
																else
																	return 16.37;
															}
															else
																return 18.32;
														}
														else
															return 18.84;
													}
												}
											}
										}
										else
										{
											if(velocity < 14.955)
											{
												if(sinr < 8.5)
												{
													if(payload < 5.5)
														return 18.89;
													else
														return 18.19;
												}
												else
												{
													if(sinr < 10.5)
														return 22.98;
													else
													{
														if(payload < 8.5)
															return 20.65;
														else
															return 21.47;
													}
												}
											}
											else
												return 12.4;
										}
									}
								}
								else
								{
									if(rsrp < -85.5)
									{
										if(rsrp < -87.5)
											return 18.56;
										else
										{
											if(velocity < 5.68)
												return 20.42;
											else
											{
												if(rsrq < -7.5)
													return 24.92;
												else
												{
													if(rsrq < -6.5)
													{
														if(rsrp < -86.5)
															return 30.41;
														else
															return 29.04;
													}
													else
														return 26.6;
												}
											}
										}
									}
									else
									{
										if(rsrq < -7.5)
											return 14.4;
										else
											return 19.88;
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
					return 23.53;
				else
					return 31.13;
			}
		}
		else
		{
			if(rsrp < -81.5)
			{
				if(payload < 3.5)
				{
					if(sinr < 26.5)
					{
						if(rsrp < -82.5)
						{
							if(velocity < 12.245)
							{
								if(rsrq < -8.5)
								{
									if(sinr < 22)
										return 12.76;
									else
										return 14;
								}
								else
								{
									if(velocity < 0.17)
									{
										if(payload < 0.75)
										{
											if(rsrp < -84.5)
											{
												if(sinr < 21)
													return 6.24;
												else
													return 7.31;
											}
											else
												return 4.48;
										}
										else
										{
											if(payload < 2.5)
											{
												if(payload < 1.5)
												{
													if(rsrp < -84.5)
														return 10.54;
													else
													{
														if(sinr < 21.5)
															return 13.45;
														else
															return 10.48;
													}
												}
												else
												{
													if(sinr < 21.5)
														return 8.9;
													else
													{
														if(rsrp < -86.5)
															return 9;
														else
															return 7.88;
													}
												}
											}
											else
											{
												if(rsrp < -85.5)
													return 11.53;
												else
													return 15.32;
											}
										}
									}
									else
									{
										if(velocity < 10.865)
										{
											if(rsrq < -5.5)
											{
												if(payload < 0.3)
												{
													if(velocity < 3.18)
														return 5.56;
													else
													{
														if(rsrp < -86.5)
														{
															if(rsrq < -6.5)
																return 6.15;
															else
																return 6.84;
														}
														else
															return 5.13;
													}
												}
												else
												{
													if(rsrq < -6.5)
														return 8.4433333333;
													else
													{
														if(velocity < 9.305)
														{
															if(rsrp < -85.5)
																return 8.23;
															else
																return 7.63;
														}
														else
															return 6.39;
													}
												}
											}
											else
											{
												if(payload < 0.75)
													return 5.1;
												else
													return 4.37;
											}
										}
										else
										{
											if(rsrq < -5.5)
												return 4.33;
											else
											{
												if(sinr < 20)
													return 4.23;
												else
													return 6.84;
											}
										}
									}
								}
							}
							else
							{
								if(sinr < 21.5)
								{
									if(rsrp < -84.5)
									{
										if(payload < 0.3)
										{
											if(rsrp < -85.5)
												return 8.08;
											else
											{
												if(sinr < 18.5)
													return 4.76;
												else
													return 7.62;
											}
										}
										else
										{
											if(sinr < 19.5)
											{
												if(rsrp < -86.5)
												{
													if(velocity < 20.87)
														return 9.3;
													else
														return 10.02;
												}
												else
												{
													if(velocity < 17.33)
													{
														if(payload < 1.75)
															return 14.13;
														else
															return 13.48;
													}
													else
														return 12.33;
												}
											}
											else
											{
												if(rsrq < -6)
													return 12.85;
												else
													return 14.74;
											}
										}
									}
									else
									{
										if(velocity < 17.63)
										{
											if(velocity < 14.475)
											{
												if(rsrp < -83.5)
													return 6.98;
												else
													return 4.47;
											}
											else
												return 10.6;
										}
										else
											return 3.33;
									}
								}
								else
								{
									if(payload < 0.3)
									{
										if(rsrp < -83.5)
										{
											if(velocity < 19.67)
												return 4.15;
											else
												return 6.61;
										}
										else
											return 7.275;
									}
									else
									{
										if(sinr < 23.5)
										{
											if(sinr < 22.5)
											{
												if(payload < 2.5)
												{
													if(rsrq < -5.5)
														return 14.13;
													else
														return 10.14;
												}
												else
												{
													if(rsrq < -6)
														return 22.41;
													else
														return 14.41;
												}
											}
											else
												return 18.26;
										}
										else
										{
											if(rsrp < -84.5)
											{
												if(rsrp < -87)
													return 15.83;
												else
													return 14.71;
											}
											else
											{
												if(rsrq < -5.5)
													return 10.5325;
												else
													return 11.68;
											}
										}
									}
								}
							}
						}
						else
						{
							if(payload < 1.25)
							{
								if(payload < 0.3)
									return 5.06;
								else
								{
									if(velocity < 23.25)
										return 8.53;
									else
										return 6.61;
								}
							}
							else
							{
								if(velocity < 6.67)
									return 7.31;
								else
								{
									if(velocity < 18.12)
									{
										if(payload < 2.5)
											return 17.78;
										else
										{
											if(rsrq < -5.5)
												return 13.96;
											else
											{
												if(velocity < 10.87)
													return 16.3;
												else
													return 10.62;
											}
										}
									}
									else
										return 21.41;
								}
							}
						}
					}
					else
					{
						if(velocity < 18.665)
						{
							if(rsrp < -82.5)
							{
								if(payload < 0.55)
								{
									if(rsrp < -85)
										return 5.06;
									else
										return 4.57;
								}
								else
								{
									if(velocity < 17.03)
									{
										if(sinr < 27.5)
										{
											if(rsrp < -84)
												return 10.39;
											else
												return 9.59;
										}
										else
										{
											if(sinr < 28.5)
												return 6.19;
											else
											{
												if(velocity < 13.16)
													return 8.03;
												else
												{
													if(sinr < 29.5)
														return 9.85;
													else
														return 9.01;
												}
											}
										}
									}
									else
										return 12.99;
								}
							}
							else
							{
								if(velocity < 3.755)
									return 6.62;
								else
								{
									if(sinr < 35)
									{
										if(payload < 1.75)
											return 11.8;
										else
											return 12.96;
									}
									else
										return 14.97;
								}
							}
						}
						else
						{
							if(payload < 1.25)
							{
								if(velocity < 23.085)
									return 5.5322222222;
								else
								{
									if(rsrp < -85)
										return 7.84;
									else
										return 7.27;
								}
							}
							else
								return 13.99;
						}
					}
				}
				else
				{
					if(payload < 5.5)
					{
						if(rsrq < -9.5)
							return 9.61;
						else
						{
							if(velocity < 23.7)
							{
								if(velocity < 14.375)
								{
									if(rsrq < -8.5)
									{
										if(rsrp < -86)
											return 19.39;
										else
											return 22.94;
									}
									else
									{
										if(velocity < 13.88)
										{
											if(f < 2232.5)
											{
												if(velocity < 0.415)
												{
													if(rsrp < -83.5)
														return 15.915;
													else
													{
														if(sinr < 26)
															return 15.53;
														else
															return 17.29;
													}
												}
												else
												{
													if(payload < 4.5)
													{
														if(rsrp < -87.5)
															return 16.89;
														else
														{
															if(velocity < 12.8)
																return 16.335;
															else
																return 13.47;
														}
													}
													else
													{
														if(sinr < 20)
															return 22.12;
														else
														{
															if(sinr < 22.5)
															{
																if(velocity < 12.175)
																{
																	if(rsrp < -84)
																		return 19.13;
																	else
																		return 18.53;
																}
																else
																	return 16.66;
															}
															else
																return 19.14;
														}
													}
												}
											}
											else
											{
												if(rsrq < -5.5)
												{
													if(rsrp < -84.5)
													{
														if(rsrp < -86.5)
														{
															if(sinr < 18)
																return 14;
															else
																return 14.54;
														}
														else
															return 15.22;
													}
													else
														return 9.63;
												}
												else
													return 16.33;
											}
										}
										else
										{
											if(payload < 4.5)
											{
												if(rsrp < -85.5)
													return 19.38;
												else
													return 17.41;
											}
											else
												return 23.3;
										}
									}
								}
								else
								{
									if(rsrp < -85)
									{
										if(velocity < 14.775)
											return 9.23;
										else
										{
											if(velocity < 15.98)
												return 11.74;
											else
												return 14.04;
										}
									}
									else
									{
										if(velocity < 15.885)
											return 9.37;
										else
										{
											if(payload < 4.5)
												return 19.1;
											else
												return 14.96;
										}
									}
								}
							}
							else
							{
								if(velocity < 23.815)
									return 30.4;
								else
								{
									if(sinr < 21)
										return 12.15;
									else
									{
										if(rsrp < -83)
											return 19.6066666667;
										else
											return 16.86;
									}
								}
							}
						}
					}
					else
					{
						if(rsrq < -5.5)
						{
							if(sinr < 26.5)
							{
								if(velocity < 31.925)
								{
									if(velocity < 23.285)
									{
										if(velocity < 10.855)
										{
											if(rsrp < -86.5)
											{
												if(f < 2232.5)
												{
													if(rsrp < -87.5)
														return 15.09;
													else
														return 16.45;
												}
												else
												{
													if(payload < 7.5)
														return 16.61;
													else
														return 17.24;
												}
											}
											else
											{
												if(sinr < 21.5)
												{
													if(f < 2232.5)
													{
														if(rsrp < -84.5)
														{
															if(payload < 6.5)
															{
																if(velocity < 1.79)
																	return 19.87;
																else
																{
																	if(rsrq < -6.5)
																	{
																		if(rsrq < -8)
																			return 18;
																		else
																			return 16.86;
																	}
																	else
																		return 15.73;
																}
															}
															else
															{
																if(rsrp < -85.5)
																{
																	if(rsrq < -6.5)
																		return 21.18;
																	else
																		return 16.68;
																}
																else
																{
																	if(sinr < 20)
																		return 26.56;
																	else
																		return 20.26;
																}
															}
														}
														else
															return 8.34;
													}
													else
														return 8.88;
												}
												else
												{
													if(payload < 7.5)
													{
														if(rsrp < -82.5)
															return 34.74;
														else
															return 21.05;
													}
													else
													{
														if(rsrp < -83.5)
														{
															if(payload < 9)
																return 21.05;
															else
																return 20.13;
														}
														else
															return 18.31;
													}
												}
											}
										}
										else
										{
											if(payload < 8.5)
											{
												if(velocity < 11.7)
												{
													if(sinr < 19.5)
														return 16.12;
													else
														return 18.37;
												}
												else
												{
													if(sinr < 21.5)
													{
														if(velocity < 14.675)
														{
															if(rsrp < -86.5)
															{
																if(velocity < 13.545)
																	return 21.07;
																else
																{
																	if(payload < 7.5)
																		return 17.89;
																	else
																		return 19.07;
																}
															}
															else
																return 22.35;
														}
														else
														{
															if(payload < 7.5)
																return 21.41;
															else
																return 27.67;
														}
													}
													else
													{
														if(rsrq < -9.5)
															return 25.47;
														else
														{
															if(rsrq < -8.5)
																return 20.32;
															else
															{
																if(rsrp < -84.5)
																	return 22.91;
																else
																	return 23.54;
															}
														}
													}
												}
											}
											else
											{
												if(payload < 9.5)
												{
													if(rsrp < -85.5)
														return 26.26;
													else
														return 28.03;
												}
												else
												{
													if(velocity < 15.92)
													{
														if(rsrp < -85.5)
															return 21.91;
														else
															return 22.81;
													}
													else
														return 25.43;
												}
											}
										}
									}
									else
									{
										if(rsrp < -83.5)
										{
											if(payload < 8.5)
											{
												if(payload < 7.5)
													return 13.72;
												else
													return 15.65;
											}
											else
											{
												if(sinr < 18.5)
													return 16.75;
												else
													return 17.5;
											}
										}
										else
										{
											if(payload < 8.5)
												return 16.06;
											else
												return 12.58;
										}
									}
								}
								else
									return 29.21;
							}
							else
							{
								if(velocity < 10.905)
								{
									if(velocity < 9.205)
									{
										if(velocity < 9.185)
										{
											if(sinr < 27.5)
												return 16.29;
											else
												return 18.45;
										}
										else
											return 13.82;
									}
									else
										return 19.76;
								}
								else
								{
									if(rsrp < -87.5)
									{
										if(payload < 8.5)
										{
											if(rsrq < -6.5)
												return 31.75;
											else
												return 29.98;
										}
										else
											return 26.21;
									}
									else
									{
										if(sinr < 28)
											return 11.02;
										else
										{
											if(velocity < 14.37)
											{
												if(payload < 7)
												{
													if(sinr < 30.5)
														return 19.38;
													else
														return 19.89;
												}
												else
												{
													if(payload < 9)
														return 16.71;
													else
														return 19.21;
												}
											}
											else
												return 24.1;
										}
									}
								}
							}
						}
						else
						{
							if(payload < 9.5)
							{
								if(payload < 6.5)
								{
									if(velocity < 16.89)
									{
										if(velocity < 6.365)
											return 19.02;
										else
											return 25.09;
									}
									else
									{
										if(velocity < 22.92)
											return 12.95;
										else
											return 20.61;
									}
								}
								else
								{
									if(velocity < 13.34)
									{
										if(sinr < 24)
										{
											if(payload < 8.5)
											{
												if(rsrp < -86)
												{
													if(rsrp < -87.5)
														return 20.14;
													else
														return 21.71;
												}
												else
												{
													if(payload < 7.5)
														return 14.18;
													else
														return 18.31;
												}
											}
											else
												return 23.955;
										}
										else
											return 33.78;
									}
									else
									{
										if(velocity < 16.235)
											return 35.13;
										else
										{
											if(payload < 8)
												return 25.18;
											else
												return 21.92;
										}
									}
								}
							}
							else
							{
								if(velocity < 19.4)
									return 41.78;
								else
								{
									if(rsrp < -82.5)
										return 31.5;
									else
										return 23.41;
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
					if(payload < 1.5)
					{
						if(payload < 0.3)
						{
							if(sinr < 37)
							{
								if(rsrq < -4.5)
								{
									if(rsrp < -76.5)
									{
										if(sinr < 20.5)
											return 5.93;
										else
										{
											if(velocity < 3.795)
												return 5.8;
											else
											{
												if(rsrp < -78.5)
												{
													if(sinr < 33)
													{
														if(sinr < 29.5)
															return 4.78;
														else
															return 5.44;
													}
													else
														return 4.21;
												}
												else
													return 4.2233333333;
											}
										}
									}
									else
									{
										if(sinr < 18.5)
											return 6.72;
										else
										{
											if(rsrp < -73.5)
											{
												if(velocity < 13.185)
													return 7.14;
												else
													return 5.368;
											}
											else
											{
												if(rsrp < -68)
												{
													if(rsrp < -71.5)
													{
														if(velocity < 13.355)
														{
															if(rsrq < -7)
																return 4.6;
															else
																return 5.67;
														}
														else
															return 4.62;
													}
													else
														return 4.4;
												}
												else
													return 6.25;
											}
										}
									}
								}
								else
								{
									if(velocity < 18.16)
										return 9.09;
									else
									{
										if(sinr < 27)
											return 4.76;
										else
											return 5.44;
									}
								}
							}
							else
							{
								if(rsrp < -74.5)
									return 22.22;
								else
									return 4.97;
							}
						}
						else
						{
							if(sinr < 24.5)
							{
								if(rsrp < -72.5)
								{
									if(rsrp < -73.5)
									{
										if(rsrq < -6.5)
										{
											if(velocity < 19.42)
											{
												if(rsrp < -77.5)
													return 18.74;
												else
													return 15.62;
											}
											else
												return 11.43;
										}
										else
										{
											if(sinr < 18.5)
												return 10.78;
											else
											{
												if(payload < 0.75)
												{
													if(rsrp < -80.5)
														return 7.48;
													else
														return 6.895;
												}
												else
												{
													if(sinr < 20)
														return 7.58;
													else
														return 10.83;
												}
											}
										}
									}
									else
									{
										if(rsrq < -6.5)
											return 5.46;
										else
										{
											if(sinr < 21.5)
											{
												if(rsrq < -5.5)
													return 9.73;
												else
													return 9.24;
											}
											else
												return 7.46;
										}
									}
								}
								else
								{
									if(rsrp < -68.5)
									{
										if(velocity < 10.42)
											return 12.46;
										else
										{
											if(rsrq < -5)
												return 17.94;
											else
												return 19.8;
										}
									}
									else
									{
										if(sinr < 21)
											return 9.39;
										else
											return 10.4;
									}
								}
							}
							else
							{
								if(sinr < 39.5)
								{
									if(sinr < 28.5)
									{
										if(sinr < 27.5)
										{
											if(rsrp < -74.5)
											{
												if(velocity < 5.895)
													return 8.52;
												else
												{
													if(rsrq < -5.5)
													{
														if(rsrp < -78.5)
															return 7.04;
														else
															return 5.93;
													}
													else
														return 8.89;
												}
											}
											else
											{
												if(rsrq < -4.5)
												{
													if(f < 1384.5)
														return 10.47;
													else
														return 11.49;
												}
												else
													return 8.03;
											}
										}
										else
										{
											if(velocity < 4.53)
												return 10.77;
											else
												return 21.11;
										}
									}
									else
									{
										if(f < 1342.5)
											return 5.44;
										else
										{
											if(velocity < 6.08)
											{
												if(rsrp < -72)
												{
													if(rsrp < -76.5)
													{
														if(sinr < 29.5)
															return 8.37;
														else
															return 9.72;
													}
													else
														return 9.46;
												}
												else
												{
													if(rsrp < -69)
														return 6.58;
													else
														return 7.41;
												}
											}
											else
											{
												if(velocity < 18.64)
												{
													if(rsrq < -5.5)
													{
														if(sinr < 35.5)
															return 6.07;
														else
														{
															if(rsrp < -70.5)
																return 7.04;
															else
																return 7.78;
														}
													}
													else
														return 6.62;
												}
												else
													return 10.36;
											}
										}
									}
								}
								else
								{
									if(rsrp < -65.5)
										return 14.29;
									else
										return 10.75;
								}
							}
						}
					}
					else
					{
						if(sinr < 17.5)
						{
							if(rsrq < -6)
								return 20.43;
							else
								return 21.47;
						}
						else
						{
							if(sinr < 35)
							{
								if(rsrq < -6.5)
								{
									if(sinr < 26.5)
									{
										if(velocity < 14.535)
										{
											if(rsrp < -75.5)
												return 12.13;
											else
												return 13.38;
										}
										else
										{
											if(velocity < 22.9)
												return 7.12;
											else
												return 9.2;
										}
									}
									else
									{
										if(rsrp < -70.5)
										{
											if(rsrp < -74)
											{
												if(rsrq < -7.5)
													return 20.65;
												else
													return 14.71;
											}
											else
												return 16.01;
										}
										else
										{
											if(payload < 2.5)
												return 6.98;
											else
												return 11.64;
										}
									}
								}
								else
								{
									if(payload < 3.5)
									{
										if(f < 2232.5)
										{
											if(rsrp < -76.5)
											{
												if(velocity < 14.315)
												{
													if(payload < 2.5)
														return 13.68;
													else
													{
														if(rsrq < -5.5)
														{
															if(rsrp < -77.5)
																return 9.62;
															else
																return 10.15;
														}
														else
														{
															if(sinr < 31)
																return 9.86;
															else
																return 13.07;
														}
													}
												}
												else
												{
													if(sinr < 32.5)
													{
														if(velocity < 35.575)
														{
															if(velocity < 15.34)
															{
																if(sinr < 25.5)
																	return 15.95;
																else
																	return 17.92;
															}
															else
															{
																if(rsrq < -5.5)
																	return 11.84;
																else
																{
																	if(rsrp < -78.5)
																		return 13.36;
																	else
																	{
																		if(sinr < 31.5)
																			return 14.45;
																		else
																			return 14.9;
																	}
																}
															}
														}
														else
															return 19.83;
													}
													else
														return 22.84;
												}
											}
											else
											{
												if(rsrq < -5.5)
												{
													if(rsrp < -75.5)
														return 24.42;
													else
													{
														if(sinr < 22)
															return 16.11;
														else
															return 13.47;
													}
												}
												else
												{
													if(sinr < 29.5)
													{
														if(rsrp < -72.5)
															return 15.08;
														else
															return 14.31;
													}
													else
													{
														if(rsrq < -4.5)
															return 13.6875;
														else
															return 11.97;
													}
												}
											}
										}
										else
											return 8.97;
									}
									else
									{
										if(velocity < 14.66)
										{
											if(rsrp < -79)
												return 20.3;
											else
											{
												if(rsrp < -76.5)
												{
													if(rsrp < -77.5)
														return 12;
													else
														return 11.5;
												}
												else
												{
													if(sinr < 30)
													{
														if(sinr < 23.5)
														{
															if(sinr < 19.5)
																return 11.23;
															else
																return 13.86;
														}
														else
														{
															if(rsrp < -71.5)
															{
																if(rsrp < -74)
																	return 17.45;
																else
																	return 16.16;
															}
															else
																return 17.69;
														}
													}
													else
														return 10.91;
												}
											}
										}
										else
										{
											if(sinr < 29)
												return 17.15;
											else
												return 18.42;
										}
									}
								}
							}
							else
							{
								if(payload < 3.5)
								{
									if(rsrp < -73)
									{
										if(payload < 2.5)
											return 10.38;
										else
											return 8.67;
									}
									else
										return 11.7;
								}
								else
									return 19.54;
							}
						}
					}
				}
				else
				{
					if(velocity < 5.375)
					{
						if(rsrp < -79.5)
						{
							if(rsrq < -6.5)
							{
								if(payload < 9)
								{
									if(rsrp < -80.5)
									{
										if(sinr < 21.5)
											return 16.21;
										else
										{
											if(sinr < 22.5)
												return 22.54;
											else
												return 17.19;
										}
									}
									else
										return 17.99;
								}
								else
									return 14.11;
							}
							else
							{
								if(payload < 5.5)
									return 14.58;
								else
								{
									if(rsrq < -5.5)
									{
										if(rsrp < -80.5)
											return 15.27;
										else
											return 15.89;
									}
									else
										return 19.33;
								}
							}
						}
						else
						{
							if(rsrq < -5.5)
							{
								if(sinr < 31.5)
								{
									if(payload < 9.5)
									{
										if(rsrp < -74)
										{
											if(rsrp < -78.5)
												return 15.83;
											else
											{
												if(rsrp < -77.5)
												{
													if(payload < 8)
														return 19.05;
													else
														return 23.21;
												}
												else
												{
													if(sinr < 30)
													{
														if(sinr < 28.5)
														{
															if(payload < 7)
																return 18.56;
															else
																return 17.12;
														}
														else
															return 20.49;
													}
													else
														return 16.99;
												}
											}
										}
										else
											return 16.0566666667;
									}
									else
									{
										if(rsrp < -77)
											return 24.18;
										else
											return 21.8433333333;
									}
								}
								else
								{
									if(rsrq < -6.5)
									{
										if(payload < 6.5)
											return 25.86;
										else
											return 24.42;
									}
									else
										return 27.22;
								}
							}
							else
							{
								if(payload < 8.5)
								{
									if(rsrp < -68.5)
									{
										if(payload < 7.5)
											return 20.4;
										else
											return 18.73;
									}
									else
										return 25.16;
								}
								else
								{
									if(rsrp < -75.5)
										return 33.15;
									else
										return 29.35;
								}
							}
						}
					}
					else
					{
						if(payload < 9.5)
						{
							if(payload < 6.5)
							{
								if(sinr < 18.5)
								{
									if(velocity < 15.255)
									{
										if(rsrp < -79)
										{
											if(rsrp < -80.5)
												return 19.26;
											else
												return 13.5;
										}
										else
											return 20.92;
									}
									else
									{
										if(velocity < 28.565)
										{
											if(sinr < 17.5)
												return 9.79;
											else
												return 13.535;
										}
										else
											return 19.39;
									}
								}
								else
								{
									if(sinr < 33)
									{
										if(sinr < 28.5)
										{
											if(payload < 5.5)
											{
												if(sinr < 23.5)
													return 11.59;
												else
													return 15.33;
											}
											else
											{
												if(sinr < 24.5)
												{
													if(rsrp < -80.5)
														return 20.11;
													else
													{
														if(sinr < 20)
															return 27.91;
														else
														{
															if(sinr < 22)
																return 18.42;
															else
															{
																if(velocity < 13.57)
																{
																	if(rsrq < -5.5)
																		return 21.12;
																	else
																		return 18.22;
																}
																else
																{
																	if(sinr < 23.5)
																		return 27.38;
																	else
																	{
																		if(velocity < 14.825)
																			return 22.93;
																		else
																			return 20.06;
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
														if(rsrp < -78.5)
														{
															if(sinr < 26.5)
																return 17.67;
															else
															{
																if(rsrp < -80)
																	return 16.75;
																else
																	return 16.13;
															}
														}
														else
															return 18.23;
													}
													else
														return 11.39;
												}
											}
										}
										else
										{
											if(velocity < 24.235)
											{
												if(sinr < 31.5)
												{
													if(velocity < 15.98)
													{
														if(payload < 5.5)
															return 22.16;
														else
														{
															if(sinr < 29.5)
																return 29.18;
															else
																return 24.98;
														}
													}
													else
													{
														if(rsrq < -4.5)
															return 18.26;
														else
															return 20.38;
													}
												}
												else
												{
													if(rsrp < -78)
														return 38.17;
													else
													{
														if(rsrp < -74.5)
															return 18.06;
														else
														{
															if(rsrp < -71)
																return 25.45;
															else
																return 19.43;
														}
													}
												}
											}
											else
											{
												if(velocity < 35.465)
													return 22.3333333333;
												else
												{
													if(sinr < 29.5)
														return 21.51;
													else
														return 20.67;
												}
											}
										}
									}
									else
									{
										if(sinr < 35)
											return 15.89;
										else
											return 10.89;
									}
								}
							}
							else
							{
								if(sinr < 37)
								{
									if(sinr < 29.5)
									{
										if(velocity < 9.755)
										{
											if(rsrp < -74.5)
												return 32.33;
											else
											{
												if(sinr < 23.5)
													return 30.1;
												else
													return 28.82;
											}
										}
										else
										{
											if(velocity < 26.49)
											{
												if(velocity < 11.825)
												{
													if(rsrp < -71.5)
													{
														if(velocity < 10.54)
															return 21.24;
														else
														{
															if(rsrq < -5.5)
																return 29.08;
															else
																return 31.15;
														}
													}
													else
													{
														if(payload < 8)
															return 22.32;
														else
															return 18.39;
													}
												}
												else
												{
													if(payload < 8.5)
													{
														if(sinr < 26.5)
														{
															if(rsrq < -7)
																return 23.23;
															else
															{
																if(sinr < 24.5)
																{
																	if(velocity < 12.61)
																		return 18.8466666667;
																	else
																	{
																		if(sinr < 21.5)
																		{
																			if(velocity < 13.8)
																				return 19.34;
																			else
																				return 20.06;
																		}
																		else
																			return 23.59;
																	}
																}
																else
																	return 18.47;
															}
														}
														else
														{
															if(payload < 7.5)
															{
																if(rsrp < -70)
																	return 22.21;
																else
																	return 23.42;
															}
															else
															{
																if(velocity < 13.26)
																	return 24.71;
																else
																	return 19.08;
															}
														}
													}
													else
													{
														if(velocity < 18.995)
														{
															if(velocity < 12.895)
															{
																if(velocity < 12.145)
																	return 24.44;
																else
																	return 20.6;
															}
															else
															{
																if(velocity < 14.65)
																{
																	if(sinr < 28)
																	{
																		if(rsrp < -75.5)
																			return 25.54;
																		else
																			return 28.54;
																	}
																	else
																		return 24.9;
																}
																else
																{
																	if(velocity < 14.9)
																		return 20.51;
																	else
																		return 22.97;
																}
															}
														}
														else
														{
															if(velocity < 24.15)
																return 37.23;
															else
																return 25.13;
														}
													}
												}
											}
											else
											{
												if(payload < 7.5)
												{
													if(rsrq < -6.5)
														return 28.2;
													else
														return 21.82;
												}
												else
												{
													if(sinr < 27)
													{
														if(rsrp < -76)
														{
															if(rsrp < -79.5)
															{
																if(payload < 8.5)
																	return 28.34;
																else
																	return 27.51;
															}
															else
																return 26.6;
														}
														else
															return 22.88;
													}
													else
														return 29.13;
												}
											}
										}
									}
									else
									{
										if(velocity < 16.445)
										{
											if(velocity < 14.625)
											{
												if(rsrp < -76.5)
													return 26.4866666667;
												else
													return 27.55;
											}
											else
												return 34.25;
										}
										else
											return 21.93;
									}
								}
								else
								{
									if(velocity < 8.095)
										return 20.25;
									else
										return 19.09;
								}
							}
						}
						else
						{
							if(rsrp < -75)
							{
								if(velocity < 15.225)
								{
									if(velocity < 12.135)
										return 22.392;
									else
									{
										if(rsrp < -80)
											return 25.15;
										else
											return 25.89;
									}
								}
								else
								{
									if(sinr < 26.5)
										return 33.68;
									else
										return 31.91;
								}
							}
							else
							{
								if(rsrp < -71)
									return 34.8366666667;
								else
								{
									if(sinr < 27.5)
										return 32.92;
									else
									{
										if(rsrp < -69.5)
											return 24.44;
										else
										{
											if(rsrq < -5)
												return 30.48;
											else
												return 34.74;
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

float tmobile_dl_ns3_tree_4(float payload, float rsrp, float rsrq, float sinr, float velocity, float f)
{
	if(payload < 3.5)
	{
		if(payload < 1.5)
		{
			if(sinr < 22.5)
			{
				if(payload < 0.3)
				{
					if(sinr < -1.5)
					{
						if(velocity < 22.165)
						{
							if(rsrq < -14)
								return 2.17;
							else
							{
								if(rsrp < -103.5)
									return 2.87;
								else
								{
									if(rsrq < -12)
										return 4.68;
									else
									{
										if(velocity < 14.965)
											return 4.08;
										else
											return 3.14;
									}
								}
							}
						}
						else
							return 0.07;
					}
					else
					{
						if(rsrp < -91.5)
						{
							if(rsrq < -11.5)
							{
								if(sinr < 4)
								{
									if(rsrp < -105)
										return 10;
									else
									{
										if(rsrq < -12.5)
											return 6.78;
										else
											return 4.6;
									}
								}
								else
									return 4.3;
							}
							else
							{
								if(sinr < 10.5)
								{
									if(sinr < 9.5)
									{
										if(sinr < 8)
										{
											if(rsrp < -103)
											{
												if(rsrp < -105)
													return 3.39;
												else
													return 2.57;
											}
											else
											{
												if(rsrq < -7.5)
												{
													if(sinr < 6)
													{
														if(f < 2232.5)
														{
															if(rsrp < -99.5)
															{
																if(sinr < 2.5)
																{
																	if(velocity < 13.325)
																		return 4.42;
																	else
																		return 2.93;
																}
																else
																	return 4.19;
															}
															else
																return 3.295;
														}
														else
														{
															if(rsrp < -94.5)
																return 4.49;
															else
																return 5.13;
														}
													}
													else
													{
														if(rsrp < -99)
															return 4.26;
														else
															return 7.21;
													}
												}
												else
												{
													if(velocity < 12.085)
														return 8.25;
													else
														return 4.49;
												}
											}
										}
										else
										{
											if(velocity < 5.68)
												return 2.6;
											else
												return 3.67;
										}
									}
									else
									{
										if(rsrq < -8.5)
											return 6.02;
										else
										{
											if(rsrp < -95.5)
												return 4.68;
											else
												return 5.84;
										}
									}
								}
								else
								{
									if(velocity < 13.21)
									{
										if(velocity < 12.495)
										{
											if(rsrp < -98)
												return 5.16;
											else
											{
												if(rsrp < -96.5)
													return 3.05;
												else
												{
													if(f < 2232.5)
														return 4.09625;
													else
														return 3.21;
												}
											}
										}
										else
											return 5.03;
									}
									else
									{
										if(velocity < 14.535)
											return 3.13;
										else
											return 4.03;
									}
								}
							}
						}
						else
						{
							if(sinr < 0.5)
								return 9.2;
							else
							{
								if(rsrp < -82.5)
								{
									if(sinr < 17.5)
									{
										if(rsrp < -85.5)
										{
											if(sinr < 9.5)
											{
												if(velocity < 12.185)
												{
													if(rsrp < -87.5)
													{
														if(velocity < 4.81)
														{
															if(sinr < 8.5)
															{
																if(rsrp < -90.5)
																{
																	if(rsrq < -8)
																		return 4.94;
																	else
																		return 3.88;
																}
																else
																	return 5.2933333333;
															}
															else
																return 4.23;
														}
														else
															return 5.67;
													}
													else
														return 3.52;
												}
												else
													return 5.52;
											}
											else
											{
												if(velocity < 12.655)
												{
													if(f < 2232.5)
													{
														if(sinr < 10.5)
															return 5.2666666667;
														else
															return 4.44;
													}
													else
													{
														if(sinr < 13.5)
															return 8.08;
														else
															return 5.95;
													}
												}
												else
												{
													if(rsrp < -90.5)
														return 8.42;
													else
														return 6.116;
												}
											}
										}
										else
										{
											if(f < 2232.5)
											{
												if(rsrq < -5.5)
												{
													if(velocity < 4.77)
														return 8.33;
													else
													{
														if(rsrp < -83.5)
															return 8.002;
														else
															return 4.47;
													}
												}
												else
													return 9.52;
											}
											else
												return 4.23;
										}
									}
									else
									{
										if(rsrq < -6.5)
										{
											if(rsrp < -88)
											{
												if(velocity < 10.125)
												{
													if(f < 2232.5)
														return 3.59;
													else
														return 2.62;
												}
												else
													return 4.79;
											}
											else
											{
												if(rsrp < -84.5)
												{
													if(rsrp < -85.5)
													{
														if(rsrp < -86.5)
															return 6.15;
														else
															return 5.13;
													}
													else
														return 7.62;
												}
												else
													return 3.33;
											}
										}
										else
										{
											if(sinr < 20.5)
											{
												if(velocity < 4.65)
													return 2.74;
												else
												{
													if(velocity < 16.66)
													{
														if(rsrp < -86.5)
															return 5.44;
														else
															return 4.245;
													}
													else
													{
														if(rsrp < -84)
															return 4.76;
														else
															return 6.2;
													}
												}
											}
											else
											{
												if(velocity < 10.245)
												{
													if(velocity < 0.41)
														return 7.02;
													else
													{
														if(velocity < 4.38)
															return 5.56;
														else
															return 6.84;
													}
												}
												else
													return 7.41;
											}
										}
									}
								}
								else
								{
									if(rsrq < -5.5)
									{
										if(velocity < 9.175)
										{
											if(rsrq < -8.5)
												return 3.32;
											else
												return 4.34;
										}
										else
										{
											if(sinr < 15.5)
											{
												if(sinr < 12)
												{
													if(velocity < 11.785)
														return 4.73;
													else
													{
														if(rsrp < -70)
															return 5.3;
														else
															return 4.82;
													}
												}
												else
													return 3.86;
											}
											else
											{
												if(velocity < 14.955)
												{
													if(velocity < 13.32)
													{
														if(sinr < 18.5)
															return 6.72;
														else
															return 4.665;
													}
													else
														return 4.62;
												}
												else
													return 6.78;
											}
										}
									}
									else
									{
										if(rsrp < -78.5)
										{
											if(velocity < 1.315)
												return 5.8;
											else
											{
												if(rsrp < -81.5)
													return 5.06;
												else
													return 4.49;
											}
										}
										else
											return 8.42;
									}
								}
							}
						}
					}
				}
				else
				{
					if(rsrp < -99.5)
					{
						if(velocity < 18.685)
						{
							if(velocity < 14.71)
							{
								if(payload < 0.75)
								{
									if(sinr < 10)
									{
										if(velocity < 14.05)
										{
											if(sinr < 4.5)
											{
												if(rsrp < -103.5)
													return 1.035;
												else
													return 1.85;
											}
											else
												return 3.085;
										}
										else
										{
											if(sinr < 7.5)
											{
												if(rsrp < -102)
													return 6;
												else
													return 9.03;
											}
											else
											{
												if(rsrq < -8.5)
													return 2.44;
												else
													return 1.45;
											}
										}
									}
									else
										return 7.72;
								}
								else
								{
									if(velocity < 14.245)
									{
										if(rsrq < -8.5)
										{
											if(sinr < 5.5)
											{
												if(rsrq < -11.5)
												{
													if(velocity < 13.625)
														return 4.795;
													else
														return 5.39;
												}
												else
												{
													if(rsrp < -101.5)
													{
														if(velocity < 6.97)
															return 5.03;
														else
														{
															if(rsrp < -104)
																return 7.63;
															else
																return 8.95;
														}
													}
													else
													{
														if(sinr < 3)
															return 7.12;
														else
															return 5.35;
													}
												}
											}
											else
											{
												if(rsrp < -100.5)
													return 6.13;
												else
													return 1.38;
											}
										}
										else
											return 8.37;
									}
									else
										return 1.31;
								}
							}
							else
							{
								if(velocity < 16.46)
								{
									if(sinr < -2.5)
									{
										if(rsrp < -100.5)
											return 3.57;
										else
											return 4.53;
									}
									else
									{
										if(rsrp < -106.5)
											return 1.43;
										else
											return 2.885;
									}
								}
								else
								{
									if(payload < 0.75)
										return 0.54;
									else
										return 1.72;
								}
							}
						}
						else
						{
							if(rsrq < -7.5)
							{
								if(rsrp < -101.5)
									return 7.7175;
								else
									return 6.69;
							}
							else
							{
								if(velocity < 31.37)
									return 5.07;
								else
								{
									if(rsrq < -6.5)
										return 3.065;
									else
										return 4.5;
								}
							}
						}
					}
					else
					{
						if(rsrp < -86.5)
						{
							if(rsrq < -16)
								return 0.47;
							else
							{
								if(velocity < 18.03)
								{
									if(sinr < 12.5)
									{
										if(rsrq < -6.5)
										{
											if(sinr < 4.5)
											{
												if(rsrp < -91)
												{
													if(sinr < 2.5)
													{
														if(rsrp < -97.5)
														{
															if(rsrq < -9.5)
																return 9.64;
															else
															{
																if(payload < 0.75)
																	return 10.61;
																else
																{
																	if(sinr < 1)
																		return 8.47;
																	else
																		return 7.05;
																}
															}
														}
														else
														{
															if(rsrq < -10.5)
															{
																if(sinr < 0.5)
																{
																	if(velocity < 9.105)
																		return 3.03;
																	else
																	{
																		if(velocity < 10.96)
																		{
																			if(payload < 0.75)
																				return 3.61;
																			else
																				return 8.04;
																		}
																		else
																			return 7.29;
																	}
																}
																else
																	return 7.89;
															}
															else
															{
																if(velocity < 11.07)
																{
																	if(sinr < 1.5)
																		return 5.73;
																	else
																		return 3.56;
																}
																else
																	return 3.105;
															}
														}
													}
													else
													{
														if(sinr < 3.5)
															return 20.73;
														else
														{
															if(payload < 0.75)
																return 8.26;
															else
																return 7.5825;
														}
													}
												}
												else
													return 4.805;
											}
											else
											{
												if(rsrq < -8.5)
												{
													if(rsrp < -97)
													{
														if(velocity < 5.99)
															return 10.42;
														else
														{
															if(payload < 0.75)
																return 7.31;
															else
																return 2.78;
														}
													}
													else
													{
														if(sinr < 8)
														{
															if(f < 2232.5)
															{
																if(payload < 0.75)
																	return 8.6;
																else
																	return 7.77;
															}
															else
																return 5.67;
														}
														else
														{
															if(rsrp < -91.5)
																return 4.76;
															else
																return 7.17;
														}
													}
												}
												else
												{
													if(payload < 0.75)
													{
														if(sinr < 8.5)
														{
															if(rsrq < -7.5)
															{
																if(rsrp < -96)
																	return 7.75;
																else
																	return 6.99;
															}
															else
															{
																if(rsrp < -95)
																	return 6.71;
																else
																{
																	if(rsrp < -91.5)
																		return 2.03;
																	else
																		return 4.475;
																}
															}
														}
														else
														{
															if(rsrp < -94.5)
																return 11.59;
															else
															{
																if(sinr < 9.5)
																{
																	if(rsrq < -7.5)
																		return 6.2;
																	else
																		return 8.64;
																}
																else
																{
																	if(sinr < 11)
																		return 5.28;
																	else
																	{
																		if(velocity < 13.89)
																			return 6.4933333333;
																		else
																			return 8.25;
																	}
																}
															}
														}
													}
													else
													{
														if(velocity < 9.665)
														{
															if(velocity < 3.545)
																return 8.78;
															else
															{
																if(velocity < 8.125)
																	return 6.57;
																else
																{
																	if(rsrp < -90.5)
																		return 7.45;
																	else
																		return 6.6;
																}
															}
														}
														else
														{
															if(rsrq < -7.5)
															{
																if(rsrp < -89)
																	return 15.53;
																else
																	return 6.57;
															}
															else
																return 10.46;
														}
													}
												}
											}
										}
										else
										{
											if(rsrp < -87.5)
											{
												if(sinr < 11)
												{
													if(velocity < 10.455)
													{
														if(rsrq < -5.5)
															return 9.51;
														else
														{
															if(rsrp < -93)
																return 7.41;
															else
																return 8.66;
														}
													}
													else
														return 14.44;
												}
												else
												{
													if(velocity < 12.485)
														return 8.81;
													else
														return 7.1433333333;
												}
											}
											else
												return 12.29;
										}
									}
									else
									{
										if(rsrq < -6.5)
										{
											if(payload < 0.75)
											{
												if(sinr < 14.5)
												{
													if(rsrq < -7.5)
													{
														if(rsrp < -93.5)
															return 7.13;
														else
															return 8.1;
													}
													else
													{
														if(f < 2232.5)
														{
															if(rsrp < -91)
															{
																if(rsrp < -93)
																	return 3.27;
																else
																	return 4.09;
															}
															else
																return 5.08;
														}
														else
														{
															if(rsrp < -95.5)
																return 3.41;
															else
															{
																if(sinr < 13.5)
																	return 7.87;
																else
																	return 6.55;
															}
														}
													}
												}
												else
												{
													if(rsrp < -90.5)
													{
														if(f < 2232.5)
														{
															if(rsrp < -93.5)
															{
																if(rsrp < -96.5)
																	return 3.65;
																else
																	return 3.15;
															}
															else
																return 2.46;
														}
														else
															return 5.19;
													}
													else
														return 2.8266666667;
												}
											}
											else
											{
												if(velocity < 9.34)
													return 10.24;
												else
												{
													if(rsrp < -88.5)
														return 5.22;
													else
														return 6.11;
												}
											}
										}
										else
										{
											if(velocity < 0.94)
												return 9.182;
											else
											{
												if(velocity < 14.685)
												{
													if(payload < 0.75)
													{
														if(velocity < 7.22)
															return 5.77;
														else
															return 8.08;
													}
													else
													{
														if(sinr < 20.5)
														{
															if(f < 2232.5)
															{
																if(rsrp < -93.5)
																	return 6.26;
																else
																	return 3.83;
															}
															else
																return 4.45;
														}
														else
															return 7;
													}
												}
												else
													return 10.72;
											}
										}
									}
								}
								else
								{
									if(sinr < 12.5)
									{
										if(rsrp < -92.5)
										{
											if(rsrp < -98.5)
												return 9.22;
											else
											{
												if(velocity < 24.54)
													return 9.45;
												else
													return 10.79;
											}
										}
										else
											return 13.63;
									}
									else
									{
										if(rsrp < -90.5)
											return 7.87;
										else
											return 6.37;
									}
								}
							}
						}
						else
						{
							if(sinr < 18.5)
							{
								if(velocity < 26.18)
								{
									if(sinr < 1.5)
									{
										if(rsrp < -82.5)
											return 7.25;
										else
											return 6.18;
									}
									else
									{
										if(velocity < 7.935)
										{
											if(rsrp < -76)
											{
												if(sinr < 12.5)
													return 5.44;
												else
													return 6.3166666667;
											}
											else
											{
												if(rsrq < -7.5)
													return 11.63;
												else
												{
													if(sinr < 13.5)
														return 7.37;
													else
														return 8.8;
												}
											}
										}
										else
										{
											if(velocity < 8.955)
												return 21.16;
											else
											{
												if(velocity < 25.86)
												{
													if(rsrq < -6.5)
													{
														if(velocity < 13.985)
														{
															if(rsrp < -85.5)
																return 12.62;
															else
															{
																if(payload < 0.75)
																{
																	if(f < 2232.5)
																	{
																		if(rsrq < -7.5)
																			return 6.38;
																		else
																			return 7.17;
																	}
																	else
																		return 10.36;
																}
																else
																{
																	if(velocity < 10.98)
																		return 9.89;
																	else
																		return 9.2633333333;
																}
															}
														}
														else
														{
															if(sinr < 8)
																return 9.41;
															else
															{
																if(rsrq < -8.5)
																	return 3.15;
																else
																{
																	if(velocity < 14)
																		return 4.63;
																	else
																		return 6.09;
																}
															}
														}
													}
													else
													{
														if(rsrp < -82.5)
														{
															if(velocity < 14.545)
															{
																if(sinr < 15)
																{
																	if(sinr < 11.5)
																		return 12.97;
																	else
																	{
																		if(rsrp < -85.5)
																			return 10.5;
																		else
																			return 9.17;
																	}
																}
																else
																	return 14.02;
															}
															else
															{
																if(sinr < 10.5)
																	return 8.57;
																else
																	return 9.64;
															}
														}
														else
														{
															if(sinr < 17)
															{
																if(rsrq < -5.5)
																{
																	if(payload < 0.75)
																		return 8.58;
																	else
																		return 9.3066666667;
																}
																else
																	return 6.23;
															}
															else
																return 10.9675;
														}
													}
												}
												else
													return 15.53;
											}
										}
									}
								}
								else
								{
									if(sinr < 10.5)
									{
										if(rsrp < -82.5)
										{
											if(payload < 0.75)
												return 11.36;
											else
											{
												if(sinr < 3.5)
													return 8.7;
												else
													return 10.04;
											}
										}
										else
										{
											if(sinr < 5.5)
												return 7.07;
											else
												return 8.6;
										}
									}
									else
									{
										if(f < 1384.5)
											return 2.98;
										else
										{
											if(velocity < 35.365)
												return 7.6025;
											else
												return 5.6;
										}
									}
								}
							}
							else
							{
								if(rsrp < -72.5)
								{
									if(sinr < 19.5)
									{
										if(velocity < 16.795)
										{
											if(rsrp < -83.5)
												return 6.98;
											else
												return 5.1;
										}
										else
										{
											if(rsrp < -80.5)
												return 12.33;
											else
												return 11.43;
										}
									}
									else
									{
										if(f < 2232.5)
										{
											if(velocity < 0.865)
												return 10.48;
											else
											{
												if(rsrp < -83)
												{
													if(rsrq < -6.5)
													{
														if(velocity < 4.675)
															return 8.31;
														else
															return 7.41;
													}
													else
													{
														if(rsrp < -85.5)
															return 7.6;
														else
														{
															if(velocity < 10.94)
																return 6.3833333333;
															else
															{
																if(rsrp < -84.5)
																	return 4.33;
																else
																	return 6.23;
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
															if(rsrp < -75.5)
																return 6.7;
															else
															{
																if(rsrp < -74)
																	return 8.32;
																else
																	return 9.24;
															}
														}
														else
														{
															if(velocity < 9.305)
																return 9.73;
															else
																return 8.535;
														}
													}
													else
														return 7.46;
												}
											}
										}
										else
											return 5.87;
									}
								}
								else
								{
									if(rsrq < -4.5)
										return 5.4;
									else
										return 6.02;
								}
							}
						}
					}
				}
			}
			else
			{
				if(payload < 0.3)
				{
					if(rsrp < -93.5)
						return 9.88;
					else
					{
						if(sinr < 24.5)
						{
							if(f < 2232.5)
							{
								if(rsrp < -81.5)
									return 5.03;
								else
								{
									if(rsrp < -79.5)
										return 4.54;
									else
										return 4.19;
								}
							}
							else
								return 4.06;
						}
						else
						{
							if(rsrq < -5.5)
							{
								if(velocity < 22.835)
								{
									if(f < 2232.5)
									{
										if(velocity < 16.815)
										{
											if(velocity < 14.57)
											{
												if(sinr < 26.5)
												{
													if(rsrp < -82.5)
														return 4.85;
													else
														return 5.67;
												}
												else
												{
													if(sinr < 34.5)
													{
														if(velocity < 2.32)
															return 5.13;
														else
															return 4.4685714286;
													}
													else
														return 4.21;
												}
											}
											else
												return 3.05;
										}
										else
											return 5.2333333333;
									}
									else
										return 5.56;
								}
								else
								{
									if(rsrp < -85)
										return 6.61;
									else
										return 7.14;
								}
							}
							else
							{
								if(velocity < 28.215)
								{
									if(velocity < 16.14)
									{
										if(velocity < 6.93)
											return 6.35;
										else
										{
											if(sinr < 32)
												return 5.005;
											else
											{
												if(rsrp < -68)
													return 4.97;
												else
												{
													if(rsrq < -4.5)
														return 6.25;
													else
														return 5.59;
												}
											}
										}
									}
									else
									{
										if(rsrp < -82.5)
										{
											if(rsrp < -87)
												return 5.52;
											else
												return 5.06;
										}
										else
										{
											if(sinr < 29.5)
												return 9.09;
											else
												return 5.44;
										}
									}
								}
								else
									return 7.27;
							}
						}
					}
				}
				else
				{
					if(velocity < 6.91)
					{
						if(rsrp < -67)
						{
							if(rsrp < -91.5)
								return 12.82;
							else
							{
								if(sinr < 29.5)
								{
									if(rsrp < -87)
									{
										if(f < 2232.5)
											return 6.5;
										else
											return 5.94;
									}
									else
									{
										if(sinr < 27)
											return 8.41;
										else
										{
											if(sinr < 28.5)
												return 10.77;
											else
											{
												if(rsrq < -5.5)
													return 8.335;
												else
													return 9.48;
											}
										}
									}
								}
								else
								{
									if(rsrq < -7)
										return 9.72;
									else
									{
										if(rsrp < -69)
											return 6.44;
										else
											return 7.41;
									}
								}
							}
						}
						else
							return 14.29;
					}
					else
					{
						if(velocity < 9.16)
						{
							if(sinr < 26.5)
							{
								if(payload < 0.75)
									return 12.46;
								else
									return 10.6;
							}
							else
								return 21.11;
						}
						else
						{
							if(rsrp < -91.5)
								return 3.93;
							else
							{
								if(sinr < 24.5)
								{
									if(payload < 0.75)
									{
										if(rsrq < -6.5)
										{
											if(rsrp < -81.5)
												return 7.71;
											else
												return 15.62;
										}
										else
										{
											if(velocity < 21.83)
												return 7.95;
											else
												return 7.124;
										}
									}
									else
									{
										if(rsrq < -5.5)
										{
											if(rsrp < -87.5)
												return 12.88;
											else
												return 18.26;
										}
										else
										{
											if(velocity < 15.26)
												return 7.37;
											else
											{
												if(velocity < 16.16)
													return 12.18;
												else
													return 13.91;
											}
										}
									}
								}
								else
								{
									if(payload < 0.75)
									{
										if(rsrp < -80)
											return 11.8;
										else
										{
											if(rsrp < -76.5)
											{
												if(rsrq < -5.5)
													return 9.28;
												else
													return 7.95;
											}
											else
											{
												if(sinr < 32)
												{
													if(rsrp < -74)
														return 9.8;
													else
													{
														if(rsrq < -5.5)
															return 10.47;
														else
															return 11.49;
													}
												}
												else
													return 7.1;
											}
										}
									}
									else
									{
										if(rsrp < -86.5)
										{
											if(rsrq < -6.5)
												return 8.58;
											else
												return 9.85;
										}
										else
										{
											if(velocity < 13.975)
											{
												if(velocity < 12.95)
													return 6.935;
												else
													return 6.05;
											}
											else
											{
												if(velocity < 15.24)
													return 8.89;
												else
												{
													if(velocity < 18.73)
														return 9.89;
													else
														return 10.36;
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
			if(sinr < 10.5)
			{
				if(rsrp < -92.5)
				{
					if(rsrq < -12.5)
						return 1.9333333333;
					else
					{
						if(payload < 2.5)
						{
							if(rsrq < -6.5)
							{
								if(rsrq < -11.5)
								{
									if(sinr < -6.5)
										return 11.58;
									else
									{
										if(sinr < -0.5)
										{
											if(rsrp < -97)
											{
												if(velocity < 24.12)
													return 6.95;
												else
													return 9.25;
											}
											else
												return 4.58;
										}
										else
											return 3.99;
									}
								}
								else
								{
									if(rsrp < -97.5)
									{
										if(rsrq < -7.5)
										{
											if(rsrp < -104)
											{
												if(rsrq < -9.5)
												{
													if(rsrp < -107)
														return 3.49;
													else
														return 4.63;
												}
												else
													return 9.55;
											}
											else
											{
												if(velocity < 16.31)
												{
													if(sinr < 0.5)
														return 4.41;
													else
													{
														if(velocity < 6.41)
														{
															if(sinr < 6)
																return 3.17;
															else
																return 4.79;
														}
														else
														{
															if(rsrp < -100.5)
																return 1.81;
															else
																return 2.56;
														}
													}
												}
												else
													return 4.686;
											}
										}
										else
										{
											if(sinr < 9.5)
											{
												if(velocity < 21.56)
													return 5.24;
												else
													return 3.9;
											}
											else
												return 6.92;
										}
									}
									else
									{
										if(velocity < 13.105)
										{
											if(velocity < 12.19)
											{
												if(velocity < 7.88)
												{
													if(rsrq < -8)
														return 7.43;
													else
														return 8.24;
												}
												else
												{
													if(rsrp < -96.5)
														return 4.06;
													else
														return 8.22;
												}
											}
											else
												return 17.32;
										}
										else
										{
											if(rsrq < -8)
											{
												if(sinr < -1)
													return 2.87;
												else
												{
													if(rsrp < -94)
														return 3.04;
													else
														return 6.02;
												}
											}
											else
												return 7.46;
										}
									}
								}
							}
							else
								return 13.1;
						}
						else
						{
							if(rsrq < -7.5)
							{
								if(rsrp < -94.5)
								{
									if(velocity < 28.165)
									{
										if(velocity < 12.945)
										{
											if(rsrq < -9.5)
											{
												if(rsrq < -10.5)
												{
													if(rsrq < -11.5)
													{
														if(rsrp < -100)
															return 2.87;
														else
															return 7.82;
													}
													else
														return 2.935;
												}
												else
												{
													if(velocity < 9.105)
													{
														if(rsrp < -95.5)
														{
															if(rsrp < -101.5)
																return 4.06;
															else
															{
																if(velocity < 4.51)
																	return 10.08;
																else
																	return 8.13;
															}
														}
														else
															return 4.89;
													}
													else
														return 3.3;
												}
											}
											else
											{
												if(rsrp < -95.5)
												{
													if(rsrp < -100)
														return 9.85;
													else
													{
														if(sinr < 6)
															return 6.92;
														else
															return 5.09;
													}
												}
												else
													return 11.03;
											}
										}
										else
										{
											if(rsrq < -8.5)
											{
												if(rsrq < -10.5)
												{
													if(velocity < 17.09)
													{
														if(rsrq < -11.5)
														{
															if(sinr < 1)
																return 2.6;
															else
																return 5.3;
														}
														else
														{
															if(rsrp < -101)
																return 4.53;
															else
															{
																if(rsrp < -96)
																	return 7.81;
																else
																	return 7.29;
															}
														}
													}
													else
														return 11.28;
												}
												else
												{
													if(rsrp < -99)
													{
														if(velocity < 13.62)
															return 6.31;
														else
														{
															if(rsrp < -105)
																return 6.62;
															else
															{
																if(velocity < 16.525)
																	return 11.9633333333;
																else
																	return 8.35;
															}
														}
													}
													else
													{
														if(sinr < 5)
															return 10.88;
														else
														{
															if(rsrp < -96.5)
																return 4.4;
															else
															{
																if(velocity < 15.245)
																	return 5.01;
																else
																	return 8.5;
															}
														}
													}
												}
											}
											else
											{
												if(sinr < 7.5)
													return 12.69;
												else
													return 11.05;
											}
										}
									}
									else
									{
										if(rsrp < -96)
											return 0.33;
										else
											return 4.98;
									}
								}
								else
								{
									if(velocity < 4.885)
									{
										if(sinr < 9.5)
											return 15.41;
										else
											return 10.11;
									}
									else
									{
										if(sinr < 5.5)
										{
											if(sinr < 1)
												return 6.64;
											else
												return 10.38;
										}
										else
											return 3.95;
									}
								}
							}
							else
							{
								if(rsrq < -6.5)
								{
									if(sinr < 3)
										return 12.51;
									else
										return 11.74;
								}
								else
									return 10.28;
							}
						}
					}
				}
				else
				{
					if(rsrp < -77)
					{
						if(rsrp < -84.5)
						{
							if(rsrp < -91.5)
							{
								if(sinr < 4.5)
								{
									if(sinr < 2)
										return 9.39;
									else
										return 8.71;
								}
								else
								{
									if(velocity < 24.89)
									{
										if(rsrq < -8.5)
											return 15;
										else
										{
											if(velocity < 9.39)
											{
												if(sinr < 8)
													return 12.47;
												else
													return 11.13;
											}
											else
												return 12.75;
										}
									}
									else
										return 16.91;
								}
							}
							else
							{
								if(velocity < 8.35)
								{
									if(payload < 2.5)
									{
										if(rsrp < -86.5)
										{
											if(sinr < 6)
												return 9.7233333333;
											else
											{
												if(f < 2232.5)
													return 6.95;
												else
												{
													if(rsrq < -8.5)
														return 8.48;
													else
														return 9.63;
												}
											}
										}
										else
											return 7.21;
									}
									else
									{
										if(rsrp < -86.5)
										{
											if(rsrp < -89)
												return 11.98;
											else
												return 11.16;
										}
										else
											return 12.77;
									}
								}
								else
								{
									if(velocity < 14.785)
									{
										if(velocity < 13.945)
										{
											if(payload < 2.5)
											{
												if(rsrp < -89)
												{
													if(velocity < 11.12)
														return 9.07;
													else
														return 8.34;
												}
												else
													return 7.1725;
											}
											else
											{
												if(sinr < 5)
												{
													if(rsrq < -6.5)
														return 11.99;
													else
														return 7.05;
												}
												else
													return 9.13;
											}
										}
										else
											return 13.4;
									}
									else
									{
										if(payload < 2.5)
											return 8.76;
										else
											return 3.58;
									}
								}
							}
						}
						else
						{
							if(velocity < 35.02)
							{
								if(velocity < 6.68)
									return 11.1;
								else
								{
									if(rsrq < -7)
									{
										if(rsrp < -83)
											return 13.34;
										else
											return 16.11;
									}
									else
										return 13.69;
								}
							}
							else
								return 11.04;
						}
					}
					else
					{
						if(payload < 2.5)
							return 25.52;
						else
							return 15.24;
					}
				}
			}
			else
			{
				if(payload < 2.5)
				{
					if(velocity < 34.755)
					{
						if(rsrq < -6.5)
						{
							if(rsrp < -93.5)
							{
								if(rsrq < -7.5)
								{
									if(velocity < 6.22)
										return 5.53;
									else
										return 6.9;
								}
								else
									return 2.84;
							}
							else
							{
								if(sinr < 27.5)
								{
									if(rsrq < -9.5)
										return 13.926;
									else
									{
										if(velocity < 11.39)
										{
											if(velocity < 9.65)
											{
												if(sinr < 12.5)
													return 8.27;
												else
												{
													if(rsrp < -87.5)
													{
														if(f < 2232.5)
															return 9.9433333333;
														else
															return 9;
													}
													else
														return 10.355;
												}
											}
											else
												return 6.54;
										}
										else
										{
											if(velocity < 16.14)
											{
												if(rsrp < -85)
												{
													if(rsrq < -7.5)
													{
														if(sinr < 11.5)
															return 15.3;
														else
															return 11.85;
													}
													else
													{
														if(rsrp < -87)
														{
															if(rsrp < -91)
															{
																if(velocity < 15.4)
																	return 12.3;
																else
																	return 8.95;
															}
															else
																return 9.43;
														}
														else
															return 6.86;
													}
												}
												else
												{
													if(rsrp < -81)
													{
														if(sinr < 16)
															return 15.53;
														else
															return 14.49;
													}
													else
														return 10.54;
												}
											}
											else
												return 13.84;
										}
									}
								}
								else
								{
									if(sinr < 33)
										return 7.0933333333;
									else
										return 10.38;
								}
							}
						}
						else
						{
							if(rsrp < -77.5)
							{
								if(velocity < 21.155)
								{
									if(sinr < 26.5)
									{
										if(rsrp < -89)
										{
											if(rsrp < -94)
												return 5.88;
											else
												return 7.33;
										}
										else
										{
											if(rsrp < -86.5)
											{
												if(velocity < 15.175)
													return 10.51;
												else
													return 14.1;
											}
											else
											{
												if(rsrp < -83)
												{
													if(sinr < 15)
													{
														if(sinr < 11.5)
															return 9.71;
														else
															return 6.72;
													}
													else
													{
														if(rsrq < -5.5)
														{
															if(sinr < 20)
																return 11.1366666667;
															else
																return 7.77;
														}
														else
														{
															if(sinr < 20)
																return 10.6;
															else
																return 10.14;
														}
													}
												}
												else
												{
													if(rsrq < -5.5)
													{
														if(rsrp < -81.5)
															return 8.63;
														else
														{
															if(sinr < 17.5)
																return 12.71;
															else
																return 11.51;
														}
													}
													else
													{
														if(velocity < 12.415)
														{
															if(rsrp < -80.5)
																return 14.8;
															else
																return 13.68;
														}
														else
															return 11.59;
													}
												}
											}
										}
									}
									else
									{
										if(sinr < 29)
										{
											if(rsrp < -87)
											{
												if(velocity < 9.37)
													return 11.55;
												else
													return 9.74;
											}
											else
												return 7.09;
										}
										else
											return 6.27;
									}
								}
								else
								{
									if(sinr < 20.5)
									{
										if(rsrp < -84)
											return 16.18;
										else
											return 17.72;
									}
									else
									{
										if(sinr < 23.5)
											return 13.385;
										else
											return 14.34;
									}
								}
							}
							else
							{
								if(rsrq < -5.5)
								{
									if(rsrp < -73)
										return 21.51;
									else
										return 22.54;
								}
								else
								{
									if(velocity < 5.8)
										return 12.41;
									else
									{
										if(velocity < 14.025)
										{
											if(velocity < 12.855)
												return 14.7966666667;
											else
												return 13.75;
										}
										else
										{
											if(rsrp < -74)
												return 17.92;
											else
												return 14.31;
										}
									}
								}
							}
						}
					}
					else
						return 2.99;
				}
				else
				{
					if(rsrp < -93.5)
					{
						if(f < 2232.5)
						{
							if(rsrq < -7)
								return 6.21;
							else
							{
								if(velocity < 33.54)
									return 9.51;
								else
									return 13.58;
							}
						}
						else
							return 11.67;
					}
					else
					{
						if(sinr < 18)
						{
							if(rsrp < -79.5)
							{
								if(velocity < 14.59)
								{
									if(rsrp < -91.5)
										return 9.1;
									else
									{
										if(sinr < 13.5)
										{
											if(velocity < 9.96)
												return 15.3;
											else
											{
												if(sinr < 12)
												{
													if(rsrp < -85.5)
														return 12.41;
													else
														return 13.36;
												}
												else
												{
													if(rsrp < -87)
														return 6.98;
													else
													{
														if(rsrp < -82)
															return 12.12;
														else
															return 12.82;
													}
												}
											}
										}
										else
										{
											if(sinr < 16.5)
											{
												if(velocity < 12.81)
													return 14.616;
												else
													return 15.92;
											}
											else
												return 11.53;
										}
									}
								}
								else
								{
									if(rsrp < -86.5)
									{
										if(rsrq < -6.5)
										{
											if(rsrp < -88.5)
												return 14.69;
											else
												return 15.36;
										}
										else
										{
											if(sinr < 11.5)
												return 15.36;
											else
											{
												if(sinr < 12.5)
													return 21.78;
												else
													return 23.98;
											}
										}
									}
									else
										return 12.49;
								}
							}
							else
							{
								if(sinr < 16)
									return 15.46;
								else
								{
									if(rsrp < -77)
										return 21.47;
									else
										return 20.43;
								}
							}
						}
						else
						{
							if(velocity < 14.89)
							{
								if(velocity < 14.61)
								{
									if(rsrp < -69.5)
									{
										if(sinr < 21.5)
										{
											if(velocity < 5.1)
											{
												if(rsrp < -76)
													return 9.62;
												else
													return 13.4633333333;
											}
											else
											{
												if(velocity < 14.145)
												{
													if(sinr < 20)
													{
														if(velocity < 11.67)
															return 13.78;
														else
															return 15.09;
													}
													else
													{
														if(rsrp < -84.5)
															return 16.51;
														else
															return 13.96;
													}
												}
												else
												{
													if(rsrp < -84)
														return 12.85;
													else
														return 12.13;
												}
											}
										}
										else
										{
											if(f < 2232.5)
											{
												if(velocity < 10.275)
												{
													if(rsrp < -83.5)
														return 9.9;
													else
													{
														if(velocity < 7.86)
															return 11.682;
														else
															return 12.54;
													}
												}
												else
												{
													if(velocity < 11.775)
														return 8.67;
													else
														return 10.2228571429;
												}
											}
											else
												return 7.46;
										}
									}
									else
									{
										if(sinr < 28.5)
											return 15.83;
										else
											return 13.645;
									}
								}
								else
									return 7.12;
							}
							else
							{
								if(velocity < 36.595)
								{
									if(velocity < 26.435)
									{
										if(sinr < 32.5)
										{
											if(sinr < 19.5)
												return 21.41;
											else
											{
												if(sinr < 27.5)
												{
													if(sinr < 22.5)
														return 14.6933333333;
													else
														return 15.95;
												}
												else
												{
													if(rsrp < -80)
														return 12.96;
													else
														return 14.9;
												}
											}
										}
										else
											return 22.84;
									}
									else
									{
										if(rsrp < -83.5)
										{
											if(rsrp < -86)
												return 10.02;
											else
												return 10.65;
										}
										else
											return 14.6775;
									}
								}
								else
									return 19.83;
							}
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
			if(rsrp < -90.5)
			{
				if(payload < 6.5)
				{
					if(sinr < -2.5)
					{
						if(payload < 5.5)
						{
							if(velocity < 16.095)
							{
								if(rsrq < -8.5)
								{
									if(rsrq < -10.5)
									{
										if(rsrp < -105)
											return 4.19;
										else
											return 3.54;
									}
									else
										return 2.21;
								}
								else
									return 5.39;
							}
							else
								return 1.8;
						}
						else
							return 8.7;
					}
					else
					{
						if(rsrp < -103.5)
						{
							if(velocity < 8.055)
							{
								if(sinr < 0.5)
								{
									if(rsrp < -106.5)
										return 4.65;
									else
										return 2.61;
								}
								else
								{
									if(rsrp < -108)
										return 8.76;
									else
										return 9.28;
								}
							}
							else
							{
								if(payload < 4.5)
								{
									if(sinr < 2)
										return 7.88;
									else
									{
										if(rsrp < -104.5)
										{
											if(rsrp < -106.5)
												return 5.47;
											else
												return 6.72;
										}
										else
											return 4.945;
									}
								}
								else
								{
									if(payload < 5.5)
									{
										if(sinr < -1)
											return 13.71;
										else
										{
											if(rsrq < -9.5)
											{
												if(rsrp < -107)
													return 8.98;
												else
													return 9.86;
											}
											else
											{
												if(sinr < 2)
													return 9.08;
												else
												{
													if(sinr < 5.5)
													{
														if(rsrq < -8.5)
															return 6.93;
														else
															return 5.96;
													}
													else
														return 8;
												}
											}
										}
									}
									else
										return 6.74;
								}
							}
						}
						else
						{
							if(velocity < 26.42)
							{
								if(rsrp < -98.5)
								{
									if(velocity < 12.71)
									{
										if(sinr < 3)
										{
											if(rsrp < -101.5)
												return 2.22;
											else
											{
												if(velocity < 10.81)
												{
													if(velocity < 5.645)
														return 5.17;
													else
														return 5.78;
												}
												else
												{
													if(sinr < -0.5)
														return 6.54;
													else
														return 9.08;
												}
											}
										}
										else
										{
											if(rsrp < -99.5)
												return 12.77;
											else
												return 7.27;
										}
									}
									else
									{
										if(velocity < 15.015)
										{
											if(rsrq < -11.5)
												return 5.39;
											else
											{
												if(rsrp < -101.5)
												{
													if(payload < 4.5)
													{
														if(rsrp < -102.5)
															return 6.01;
														else
															return 8.97;
													}
													else
													{
														if(rsrq < -8.5)
															return 10.47;
														else
															return 11.56;
													}
												}
												else
												{
													if(sinr < 2.5)
													{
														if(sinr < 0)
															return 9.86;
														else
														{
															if(payload < 5.5)
																return 12.57;
															else
																return 10.61;
														}
													}
													else
														return 18.33;
												}
											}
										}
										else
										{
											if(payload < 5.5)
											{
												if(payload < 4.5)
													return 8.93;
												else
												{
													if(sinr < 2)
														return 13.2;
													else
														return 11.42;
												}
											}
											else
											{
												if(velocity < 18.15)
													return 17.59;
												else
													return 16.53;
											}
										}
									}
								}
								else
								{
									if(velocity < 6.24)
									{
										if(rsrq < -8.5)
										{
											if(rsrp < -92.5)
											{
												if(sinr < 1)
													return 12.35;
												else
													return 13.26;
											}
											else
											{
												if(velocity < 1.25)
													return 10.27;
												else
													return 9.32;
											}
										}
										else
										{
											if(sinr < 3.5)
												return 5.55;
											else
											{
												if(velocity < 3.07)
												{
													if(payload < 5.5)
														return 7.68;
													else
														return 10.57;
												}
												else
													return 8.85;
											}
										}
									}
									else
									{
										if(sinr < 3.5)
										{
											if(velocity < 8.675)
											{
												if(velocity < 7.24)
													return 12.31;
												else
													return 11.3;
											}
											else
											{
												if(rsrq < -9)
												{
													if(rsrp < -96)
													{
														if(rsrq < -10.5)
															return 5.75;
														else
															return 14.21;
													}
													else
														return 15.39;
												}
												else
												{
													if(velocity < 12.94)
														return 18.88;
													else
														return 15.7625;
												}
											}
										}
										else
										{
											if(velocity < 13.315)
											{
												if(f < 2232.5)
												{
													if(sinr < 4.5)
													{
														if(payload < 4.5)
															return 6.23;
														else
															return 9.9;
													}
													else
													{
														if(rsrp < -91.5)
														{
															if(sinr < 6.5)
															{
																if(sinr < 5.5)
																	return 12.96;
																else
																	return 12.2;
															}
															else
															{
																if(rsrp < -94.5)
																	return 11.83;
																else
																	return 10.39;
															}
														}
														else
														{
															if(payload < 4.5)
																return 13.34;
															else
																return 15.08;
														}
													}
												}
												else
												{
													if(sinr < 6)
														return 17.34;
													else
														return 11.81;
												}
											}
											else
											{
												if(payload < 4.5)
												{
													if(rsrp < -95.5)
														return 5.77;
													else
														return 7.13;
												}
												else
												{
													if(rsrp < -97.5)
														return 16.79;
													else
													{
														if(velocity < 13.815)
															return 16.68;
														else
														{
															if(f < 2232.5)
															{
																if(rsrq < -7.5)
																	return 7.98;
																else
																	return 5.8;
															}
															else
															{
																if(rsrp < -94.5)
																	return 11.06;
																else
																	return 12.66;
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
								if(velocity < 33.765)
								{
									if(sinr < 3.5)
										return 6.89;
									else
									{
										if(rsrp < -94)
											return 3.95;
										else
											return 2.31;
									}
								}
								else
								{
									if(velocity < 34.845)
										return 16.79;
									else
									{
										if(sinr < 3)
										{
											if(velocity < 35.49)
												return 12.06;
											else
												return 10.23;
										}
										else
											return 8.25;
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
						if(sinr < -2.5)
						{
							if(rsrq < -10.5)
							{
								if(velocity < 9.775)
									return 9.46;
								else
									return 14.37;
							}
							else
								return 21.99;
						}
						else
						{
							if(velocity < 1.75)
							{
								if(rsrp < -108.5)
									return 8.11;
								else
									return 5.74;
							}
							else
							{
								if(rsrp < -106.5)
								{
									if(rsrq < -10.5)
										return 10.28;
									else
									{
										if(rsrp < -107.5)
										{
											if(velocity < 17.935)
												return 10.65;
											else
												return 8.82;
										}
										else
											return 19.02;
									}
								}
								else
								{
									if(velocity < 15.1)
									{
										if(velocity < 12.3)
										{
											if(velocity < 11.2)
											{
												if(rsrp < -103.5)
												{
													if(payload < 9.5)
														return 8.815;
													else
														return 8.15;
												}
												else
												{
													if(rsrq < -9.5)
													{
														if(payload < 8.5)
															return 10.23;
														else
															return 11.53;
													}
													else
														return 14.95;
												}
											}
											else
												return 13.82;
										}
										else
										{
											if(payload < 7.5)
											{
												if(velocity < 13.325)
													return 4.8;
												else
												{
													if(rsrp < -105)
														return 7.62;
													else
														return 9.62;
												}
											}
											else
											{
												if(rsrp < -103.5)
												{
													if(rsrq < -12)
														return 11.91;
													else
														return 8.93;
												}
												else
													return 7.02;
											}
										}
									}
									else
									{
										if(payload < 9)
											return 14.7;
										else
											return 10.91;
									}
								}
							}
						}
					}
					else
					{
						if(f < 2232.5)
						{
							if(velocity < 34.465)
							{
								if(rsrq < -7.5)
								{
									if(sinr < 3.5)
									{
										if(rsrq < -9.5)
										{
											if(payload < 8.5)
											{
												if(rsrp < -99.5)
												{
													if(rsrq < -11)
														return 6.93;
													else
														return 5.58;
												}
												else
												{
													if(rsrp < -98)
														return 22.21;
													else
													{
														if(rsrp < -93.5)
														{
															if(rsrp < -94.5)
															{
																if(payload < 7.5)
																{
																	if(rsrq < -11.5)
																		return 12.68;
																	else
																	{
																		if(sinr < 2.5)
																			return 14.63;
																		else
																		{
																			if(rsrp < -95.5)
																				return 14.21;
																			else
																				return 17.91;
																		}
																	}
																}
																else
																	return 8.46;
															}
															else
															{
																if(payload < 7.5)
																	return 9.87;
																else
																	return 11.87;
															}
														}
														else
														{
															if(rsrq < -12.5)
																return 18;
															else
															{
																if(rsrq < -11)
																	return 15.67;
																else
																	return 14.72;
															}
														}
													}
												}
											}
											else
											{
												if(payload < 9.5)
												{
													if(rsrp < -96.5)
													{
														if(velocity < 18.07)
															return 11.89;
														else
															return 16.56;
													}
													else
													{
														if(sinr < 0)
															return 16.21;
														else
														{
															if(rsrp < -95)
																return 22.2;
															else
																return 16.86;
														}
													}
												}
												else
												{
													if(velocity < 14.645)
													{
														if(velocity < 13.135)
														{
															if(rsrq < -11.5)
																return 14.63;
															else
																return 15.59;
														}
														else
														{
															if(velocity < 14.045)
																return 11.77;
															else
																return 12.49;
														}
													}
													else
													{
														if(velocity < 25.325)
														{
															if(sinr < -1)
																return 17.54;
															else
																return 20.69;
														}
														else
															return 10.53;
													}
												}
											}
										}
										else
										{
											if(f < 1384.5)
												return 2.67;
											else
											{
												if(payload < 7.5)
													return 20.64;
												else
												{
													if(rsrp < -100)
														return 14.79;
													else
													{
														if(sinr < 0.5)
															return 13.23;
														else
														{
															if(velocity < 17.675)
															{
																if(rsrq < -8.5)
																{
																	if(payload < 8.5)
																	{
																		if(rsrp < -97.5)
																			return 8.57;
																		else
																			return 7.92;
																	}
																	else
																		return 9.2;
																}
																else
																	return 10.58;
															}
															else
																return 12.35;
														}
													}
												}
											}
										}
									}
									else
									{
										if(velocity < 10.945)
										{
											if(velocity < 10.28)
											{
												if(rsrp < -100.5)
												{
													if(velocity < 3.195)
														return 11.095;
													else
														return 9.47;
												}
												else
												{
													if(sinr < 4.5)
													{
														if(rsrp < -97)
															return 12.72;
														else
														{
															if(rsrq < -8.5)
																return 17.21;
															else
															{
																if(rsrp < -93.5)
																	return 20.28;
																else
																	return 19.74;
															}
														}
													}
													else
													{
														if(velocity < 9.45)
														{
															if(rsrp < -94.5)
															{
																if(rsrp < -97)
																	return 13.54;
																else
																	return 17.95;
															}
															else
															{
																if(rsrq < -9.5)
																	return 9.16;
																else
																{
																	if(payload < 7.5)
																		return 12.73;
																	else
																	{
																		if(rsrq < -8.5)
																		{
																			if(payload < 8.5)
																				return 14.4;
																			else
																				return 17.66;
																		}
																		else
																			return 14.31;
																	}
																}
															}
														}
														else
														{
															if(sinr < 6.5)
																return 20.5;
															else
																return 19.05;
														}
													}
												}
											}
											else
												return 10.8;
										}
										else
										{
											if(velocity < 11.46)
												return 23.05;
											else
											{
												if(velocity < 18.43)
												{
													if(velocity < 16.655)
													{
														if(rsrp < -99)
															return 10.62;
														else
														{
															if(payload < 9)
															{
																if(payload < 7.5)
																	return 12.17;
																else
																	return 14.12;
															}
															else
																return 16.78;
														}
													}
													else
													{
														if(sinr < 4.5)
															return 14.08;
														else
															return 18.35;
													}
												}
												else
													return 19.858;
											}
										}
									}
								}
								else
								{
									if(sinr < 3.5)
										return 26.39;
									else
									{
										if(velocity < 13.98)
											return 21.6133333333;
										else
											return 14.04;
									}
								}
							}
							else
								return 7.38;
						}
						else
						{
							if(payload < 9.5)
							{
								if(velocity < 14.06)
									return 16.5;
								else
									return 21.07;
							}
							else
								return 30.4;
						}
					}
				}
			}
			else
			{
				if(rsrq < -10.5)
				{
					if(rsrp < -83.5)
					{
						if(velocity < 15.115)
						{
							if(velocity < 2.815)
							{
								if(sinr < 4)
									return 13.52;
								else
									return 10.4;
							}
							else
							{
								if(sinr < -1.5)
									return 11.85;
								else
								{
									if(f < 2232.5)
										return 12.7966666667;
									else
										return 13.63;
								}
							}
						}
						else
							return 16;
					}
					else
						return 7.62;
				}
				else
				{
					if(payload < 5.5)
					{
						if(rsrp < -83.5)
						{
							if(sinr < -1.5)
								return 10.59;
							else
							{
								if(velocity < 9.675)
								{
									if(sinr < 2.5)
										return 9.28;
									else
									{
										if(f < 2232.5)
											return 10.44;
										else
											return 11.07;
									}
								}
								else
								{
									if(velocity < 14.095)
									{
										if(rsrp < -87.5)
										{
											if(sinr < 2)
												return 15.93;
											else
											{
												if(rsrq < -9.5)
													return 15.79;
												else
												{
													if(rsrp < -88.5)
														return 20.85;
													else
														return 18.89;
												}
											}
										}
										else
										{
											if(payload < 4.5)
												return 15.5425;
											else
												return 14.49;
										}
									}
									else
									{
										if(velocity < 16.35)
										{
											if(rsrp < -86.5)
												return 17.03;
											else
											{
												if(payload < 4.5)
													return 12.85;
												else
													return 14.23;
											}
										}
										else
											return 11.98;
									}
								}
							}
						}
						else
						{
							if(sinr < 4.5)
							{
								if(f < 2232.5)
								{
									if(rsrp < -79)
										return 18.29;
									else
										return 19.93;
								}
								else
									return 20.55;
							}
							else
								return 14.86;
						}
					}
					else
					{
						if(sinr < 1.5)
						{
							if(f < 1384.5)
								return 7.47;
							else
							{
								if(payload < 6.5)
									return 6.14;
								else
								{
									if(payload < 9.5)
									{
										if(rsrq < -8.5)
										{
											if(rsrp < -86.5)
											{
												if(sinr < 0)
													return 13.86;
												else
													return 13.13;
											}
											else
												return 15.31;
										}
										else
										{
											if(payload < 8.5)
												return 18.39;
											else
												return 16.28;
										}
									}
									else
									{
										if(rsrq < -8.5)
											return 16.89;
										else
										{
											if(rsrp < -85.5)
												return 23.13;
											else
												return 20.84;
										}
									}
								}
							}
						}
						else
						{
							if(sinr < 4.5)
							{
								if(velocity < 32.555)
								{
									if(payload < 9)
									{
										if(rsrq < -7.5)
										{
											if(sinr < 3)
												return 16.88;
											else
											{
												if(rsrq < -8.5)
												{
													if(payload < 7.5)
														return 13.71;
													else
														return 14.46;
												}
												else
													return 15.67;
											}
										}
										else
										{
											if(velocity < 14.02)
											{
												if(sinr < 3.5)
													return 24.25;
												else
													return 23.52;
											}
											else
												return 17.61;
										}
									}
									else
									{
										if(sinr < 3)
											return 16.82;
										else
											return 38.54;
									}
								}
								else
								{
									if(payload < 7)
										return 33.83;
									else
										return 28.43;
								}
							}
							else
							{
								if(payload < 6.5)
								{
									if(rsrp < -84)
										return 22.76;
									else
										return 14.54;
								}
								else
								{
									if(payload < 7.5)
										return 12.96;
									else
									{
										if(rsrq < -7.5)
										{
											if(f < 2232.5)
											{
												if(payload < 8.5)
													return 12.74;
												else
												{
													if(rsrq < -9.5)
														return 13.45;
													else
														return 15.08;
												}
											}
											else
											{
												if(rsrp < -87.5)
													return 17.51;
												else
													return 15.08;
											}
										}
										else
										{
											if(rsrp < -89.5)
												return 15.39;
											else
											{
												if(velocity < 14.035)
												{
													if(payload < 8.5)
														return 17.52;
													else
													{
														if(payload < 9.5)
															return 18.84;
														else
															return 19.32;
													}
												}
												else
													return 20.81;
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
			if(rsrp < -88.5)
			{
				if(payload < 6.5)
				{
					if(sinr < 10.5)
					{
						if(rsrp < -96)
						{
							if(rsrq < -6.5)
							{
								if(rsrp < -98.5)
								{
									if(sinr < 8.5)
									{
										if(payload < 4.5)
											return 4.32;
										else
										{
											if(payload < 5.5)
												return 15.1866666667;
											else
												return 12.12;
										}
									}
									else
									{
										if(payload < 5.5)
											return 14.8766666667;
										else
											return 19.34;
									}
								}
								else
								{
									if(velocity < 15.835)
									{
										if(velocity < 13.74)
											return 18.28;
										else
											return 16.6;
									}
									else
										return 13.33;
								}
							}
							else
							{
								if(rsrp < -98.5)
								{
									if(sinr < 9)
										return 9.21;
									else
										return 8.41;
								}
								else
									return 10.31;
							}
						}
						else
						{
							if(velocity < 15.36)
							{
								if(velocity < 4.97)
								{
									if(velocity < 2.2)
									{
										if(f < 2232.5)
										{
											if(rsrq < -9.5)
											{
												if(payload < 5.5)
													return 14.31;
												else
													return 9.89;
											}
											else
												return 9.872;
										}
										else
											return 12.11;
									}
									else
										return 8.68;
								}
								else
								{
									if(rsrp < -93.5)
									{
										if(f < 2232.5)
										{
											if(payload < 5.5)
												return 12.61;
											else
												return 15.97;
										}
										else
										{
											if(payload < 5)
												return 8.67;
											else
												return 9.71;
										}
									}
									else
									{
										if(velocity < 14.98)
										{
											if(rsrp < -89.5)
											{
												if(velocity < 11.135)
												{
													if(rsrq < -6.5)
														return 17.21;
													else
														return 18.05;
												}
												else
													return 15.44;
											}
											else
											{
												if(velocity < 10.585)
													return 11.58;
												else
													return 16.04;
											}
										}
										else
											return 8.87;
									}
								}
							}
							else
							{
								if(sinr < 8.5)
									return 11.83;
								else
								{
									if(payload < 5)
										return 6.79;
									else
										return 7.5;
								}
							}
						}
					}
					else
					{
						if(payload < 5.5)
						{
							if(velocity < 13.86)
							{
								if(rsrp < -89.5)
								{
									if(rsrp < -92.5)
									{
										if(payload < 4.5)
										{
											if(velocity < 3.785)
												return 13.16;
											else
											{
												if(sinr < 14.5)
													return 17.25;
												else
												{
													if(sinr < 16.5)
														return 14.15;
													else
													{
														if(rsrp < -95.5)
															return 14.19;
														else
														{
															if(rsrq < -5.5)
															{
																if(sinr < 23.5)
																	return 15.28;
																else
																	return 15.75;
															}
															else
																return 16.54;
														}
													}
												}
											}
										}
										else
										{
											if(rsrq < -9.5)
												return 22.14;
											else
											{
												if(rsrp < -94)
													return 17.57;
												else
													return 15.05;
											}
										}
									}
									else
									{
										if(sinr < 25)
										{
											if(rsrp < -91.5)
											{
												if(rsrq < -7)
												{
													if(sinr < 17.5)
														return 15.64;
													else
														return 11.24;
												}
												else
												{
													if(sinr < 16)
													{
														if(payload < 4.5)
															return 10.09;
														else
															return 13.59;
													}
													else
													{
														if(rsrq < -5.5)
															return 9.28;
														else
														{
															if(payload < 4.5)
																return 9.28;
															else
																return 10.17;
														}
													}
												}
											}
											else
											{
												if(rsrq < -8.5)
												{
													if(rsrp < -90.5)
														return 9.35;
													else
													{
														if(velocity < 6.205)
															return 11.34;
														else
															return 10.49;
													}
												}
												else
												{
													if(sinr < 17.5)
													{
														if(sinr < 12)
														{
															if(payload < 4.5)
															{
																if(velocity < 10.31)
																	return 14.65;
																else
																	return 17.37;
															}
															else
																return 14.63;
														}
														else
														{
															if(rsrq < -6.5)
																return 11.21;
															else
															{
																if(payload < 4.5)
																	return 6.45;
																else
																	return 8.55;
															}
														}
													}
													else
													{
														if(sinr < 21.5)
														{
															if(velocity < 0.91)
																return 18.82;
															else
															{
																if(velocity < 7.36)
																	return 16.65;
																else
																	return 17.17;
															}
														}
														else
														{
															if(rsrp < -90.5)
															{
																if(sinr < 22.5)
																{
																	if(rsrq < -7)
																		return 15.54;
																	else
																		return 12.37;
																}
																else
																	return 16.63;
															}
															else
																return 18.93;
														}
													}
												}
											}
										}
										else
										{
											if(sinr < 26.5)
												return 6.3;
											else
												return 7.58;
										}
									}
								}
								else
								{
									if(sinr < 24)
									{
										if(sinr < 20)
										{
											if(sinr < 13.5)
												return 15.63;
											else
											{
												if(payload < 4.5)
													return 18.45;
												else
													return 20.43;
											}
										}
										else
										{
											if(f < 2232.5)
												return 13.32;
											else
												return 10.56;
										}
									}
									else
										return 26.34;
								}
							}
							else
							{
								if(velocity < 18.185)
								{
									if(payload < 4.5)
									{
										if(sinr < 15)
											return 15.29;
										else
										{
											if(rsrp < -90)
												return 21.68;
											else
												return 18.6;
										}
									}
									else
									{
										if(velocity < 15.43)
										{
											if(velocity < 14.755)
											{
												if(sinr < 15)
													return 16.8;
												else
													return 17.26;
											}
											else
												return 15.1666666667;
										}
										else
											return 13.06;
									}
								}
								else
								{
									if(velocity < 29.355)
									{
										if(rsrp < -90.5)
											return 18.38;
										else
											return 19.06;
									}
									else
										return 20.04;
								}
							}
						}
						else
						{
							if(velocity < 34.09)
							{
								if(sinr < 18)
								{
									if(rsrp < -90.5)
									{
										if(velocity < 3.005)
										{
											if(rsrp < -94.5)
												return 9.9;
											else
												return 12.04;
										}
										else
										{
											if(rsrq < -6.5)
											{
												if(velocity < 11.15)
												{
													if(rsrp < -94)
													{
														if(rsrp < -95.5)
															return 20.36;
														else
															return 15.9;
													}
													else
														return 21.5;
												}
												else
												{
													if(sinr < 12)
														return 16.42;
													else
													{
														if(sinr < 13.5)
															return 17.65;
														else
															return 16.34;
													}
												}
											}
											else
											{
												if(velocity < 10.395)
													return 22.91;
												else
													return 25.07;
											}
										}
									}
									else
									{
										if(velocity < 1.31)
											return 19.07;
										else
										{
											if(velocity < 4.215)
												return 11.08;
											else
											{
												if(rsrq < -7)
													return 14.79;
												else
													return 13.09;
											}
										}
									}
								}
								else
								{
									if(velocity < 14.91)
									{
										if(rsrp < -92.5)
											return 8.76;
										else
										{
											if(rsrq < -5.5)
											{
												if(rsrq < -6.5)
												{
													if(velocity < 0.535)
														return 18.98;
													else
													{
														if(sinr < 20)
															return 16.47;
														else
															return 15.855;
													}
												}
												else
												{
													if(rsrp < -89.5)
													{
														if(rsrp < -90.5)
															return 21.19;
														else
															return 19.24;
													}
													else
														return 14.84;
												}
											}
											else
											{
												if(rsrp < -91)
													return 12.39;
												else
													return 13.97;
											}
										}
									}
									else
									{
										if(sinr < 24.5)
										{
											if(sinr < 22.5)
												return 6.86;
											else
												return 10.14;
										}
										else
											return 14.81;
									}
								}
							}
							else
								return 24.43;
						}
					}
				}
				else
				{
					if(velocity < 35.885)
					{
						if(payload < 9.5)
						{
							if(rsrq < -6.5)
							{
								if(payload < 8.5)
								{
									if(sinr < 22)
									{
										if(rsrp < -100.5)
										{
											if(sinr < 8.5)
												return 18.48;
											else
											{
												if(sinr < 9.5)
												{
													if(velocity < 4.52)
														return 11.05;
													else
														return 17.4;
												}
												else
												{
													if(rsrq < -7.5)
													{
														if(velocity < 14.22)
															return 11.46;
														else
															return 12.62;
													}
													else
														return 8.45;
												}
											}
										}
										else
										{
											if(rsrp < -93.5)
											{
												if(rsrq < -7.5)
												{
													if(rsrp < -94.5)
													{
														if(sinr < 8.5)
															return 20.6;
														else
														{
															if(velocity < 9.885)
																return 15.89;
															else
															{
																if(sinr < 12.5)
																	return 17.29;
																else
																{
																	if(rsrp < -98)
																		return 20.54;
																	else
																		return 19.61;
																}
															}
														}
													}
													else
														return 9.7;
												}
												else
												{
													if(sinr < 9.5)
													{
														if(velocity < 17.135)
															return 23.555;
														else
															return 21.37;
													}
													else
														return 19.33;
												}
											}
											else
											{
												if(rsrp < -90.5)
												{
													if(velocity < 13.875)
													{
														if(sinr < 8.5)
															return 11.65;
														else
														{
															if(velocity < 13.42)
															{
																if(rsrp < -92.5)
																	return 17.31;
																else
																{
																	if(sinr < 10.5)
																		return 21.66;
																	else
																	{
																		if(rsrq < -7.5)
																		{
																			if(payload < 7.5)
																				return 16.23;
																			else
																				return 12.03;
																		}
																		else
																		{
																			if(payload < 7.5)
																				return 13.45;
																			else
																			{
																				if(velocity < 6.665)
																					return 20.83;
																				else
																					return 15.56;
																			}
																		}
																	}
																}
															}
															else
																return 24.93;
														}
													}
													else
													{
														if(velocity < 15.535)
														{
															if(payload < 7.5)
																return 12.45;
															else
																return 10;
														}
														else
														{
															if(payload < 7.5)
																return 13.86;
															else
																return 14.44;
														}
													}
												}
												else
												{
													if(velocity < 11.06)
													{
														if(rsrq < -7.5)
															return 19.3875;
														else
														{
															if(sinr < 10.5)
																return 17.96;
															else
																return 18.75;
														}
													}
													else
													{
														if(sinr < 11.5)
															return 10.48;
														else
														{
															if(rsrp < -89.5)
																return 17.98;
															else
																return 16.64;
														}
													}
												}
											}
										}
									}
									else
									{
										if(payload < 7.5)
											return 19.99;
										else
											return 23.47;
									}
								}
								else
								{
									if(rsrp < -101.5)
										return 22.61;
									else
									{
										if(rsrp < -95.5)
										{
											if(velocity < 1.045)
												return 20.13;
											else
											{
												if(rsrq < -8.5)
													return 6.04;
												else
												{
													if(sinr < 12.5)
													{
														if(sinr < 9)
														{
															if(rsrp < -99.5)
																return 13.38;
															else
																return 14.05;
														}
														else
															return 16.56;
													}
													else
													{
														if(rsrp < -98)
															return 9.45;
														else
															return 12.25;
													}
												}
											}
										}
										else
										{
											if(sinr < 11.5)
											{
												if(velocity < 13.275)
												{
													if(sinr < 10.5)
													{
														if(velocity < 11.48)
														{
															if(rsrp < -90.5)
															{
																if(rsrq < -7.5)
																	return 21.11;
																else
																	return 19.39;
															}
															else
															{
																if(sinr < 9.5)
																	return 18.24;
																else
																	return 16.95;
															}
														}
														else
															return 13.5;
													}
													else
														return 11.72;
												}
												else
												{
													if(rsrp < -90.5)
														return 16.35;
													else
														return 28.21;
												}
											}
											else
											{
												if(rsrp < -92.5)
												{
													if(velocity < 14.675)
													{
														if(rsrq < -8)
															return 16.68;
														else
															return 15.09;
													}
													else
														return 21.47;
												}
												else
												{
													if(velocity < 14.29)
														return 11.15;
													else
														return 14.64;
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
									if(sinr < 16.5)
										return 11.79;
									else
										return 15.58;
								}
								else
								{
									if(velocity < 10.76)
									{
										if(sinr < 12)
											return 25.49;
										else
										{
											if(rsrp < -90.5)
											{
												if(f < 2232.5)
												{
													if(payload < 8.5)
														return 20.11;
													else
														return 19.5466666667;
												}
												else
												{
													if(sinr < 21.5)
														return 22.29;
													else
														return 23.34;
												}
											}
											else
											{
												if(velocity < 7.54)
												{
													if(velocity < 3.02)
														return 23.925;
													else
														return 21.94;
												}
												else
													return 19.41;
											}
										}
									}
									else
									{
										if(rsrp < -93.5)
										{
											if(velocity < 25.165)
											{
												if(velocity < 13.275)
													return 17.94;
												else
												{
													if(rsrp < -99.5)
														return 13.97;
													else
														return 10.23;
												}
											}
											else
												return 22.6;
										}
										else
										{
											if(payload < 8.5)
											{
												if(velocity < 12.845)
													return 16.365;
												else
													return 18.58;
											}
											else
											{
												if(rsrq < -5.5)
												{
													if(f < 2232.5)
														return 19.4166666667;
													else
														return 21.0175;
												}
												else
													return 30.06;
											}
										}
									}
								}
							}
						}
						else
						{
							if(rsrp < -96.5)
							{
								if(rsrq < -9.5)
									return 9.13;
								else
								{
									if(rsrp < -102)
										return 14.98;
									else
									{
										if(sinr < 9.5)
										{
											if(velocity < 12.39)
												return 19.98;
											else
												return 23.44;
										}
										else
										{
											if(velocity < 9.94)
												return 10.51;
											else
											{
												if(rsrp < -97.5)
													return 14.81;
												else
													return 19.56;
											}
										}
									}
								}
							}
							else
							{
								if(velocity < 11.595)
								{
									if(rsrp < -89.5)
									{
										if(rsrp < -94)
											return 32.39;
										else
										{
											if(velocity < 0.47)
												return 27.88;
											else
											{
												if(f < 2232.5)
												{
													if(velocity < 6)
														return 25.84;
													else
														return 26.325;
												}
												else
													return 24.3;
											}
										}
									}
									else
									{
										if(sinr < 18)
											return 25.92;
										else
										{
											if(velocity < 4.865)
												return 17.69;
											else
												return 20.24;
										}
									}
								}
								else
								{
									if(f < 2232.5)
									{
										if(velocity < 22.03)
										{
											if(rsrp < -94.5)
												return 22.19;
											else
											{
												if(sinr < 12.5)
													return 23.76;
												else
													return 24.39;
											}
										}
										else
											return 17.97;
									}
									else
									{
										if(rsrq < -6.5)
											return 19.92;
										else
										{
											if(rsrp < -94)
												return 15.27;
											else
												return 21.75;
										}
									}
								}
							}
						}
					}
					else
						return 7.48;
				}
			}
			else
			{
				if(payload < 5.5)
				{
					if(sinr < 28.5)
					{
						if(f < 1384.5)
						{
							if(rsrq < -6.5)
								return 11.59;
							else
								return 7.06;
						}
						else
						{
							if(velocity < 19.625)
							{
								if(payload < 4.5)
								{
									if(rsrp < -87.5)
									{
										if(rsrq < -6.5)
										{
											if(sinr < 15.5)
											{
												if(sinr < 12)
													return 9.7;
												else
													return 14.77;
											}
											else
												return 19.39;
										}
										else
											return 23.88;
									}
									else
									{
										if(rsrp < -80.5)
										{
											if(rsrp < -81.5)
											{
												if(rsrq < -5.5)
												{
													if(velocity < 12.92)
													{
														if(velocity < 11.785)
														{
															if(velocity < 10.87)
															{
																if(rsrp < -82.5)
																{
																	if(f < 2232.5)
																	{
																		if(sinr < 22)
																			return 15.81;
																		else
																		{
																			if(rsrp < -85)
																				return 15.09;
																			else
																				return 14.39;
																		}
																	}
																	else
																	{
																		if(rsrp < -84.5)
																		{
																			if(velocity < 2.105)
																			{
																				if(sinr < 18.5)
																					return 13.24;
																				else
																					return 11.79;
																			}
																			else
																				return 14.42;
																		}
																		else
																			return 15.74;
																	}
																}
																else
																	return 8.13;
															}
															else
																return 16.57;
														}
														else
															return 6.19;
													}
													else
													{
														if(rsrp < -86)
														{
															if(velocity < 14.435)
															{
																if(velocity < 14.205)
																	return 16.61;
																else
																	return 14.42;
															}
															else
																return 11.61;
														}
														else
														{
															if(rsrq < -7.5)
																return 18.05;
															else
															{
																if(velocity < 16.86)
																	return 17.49;
																else
																	return 16.72;
															}
														}
													}
												}
												else
												{
													if(velocity < 17.01)
													{
														if(velocity < 14.665)
														{
															if(sinr < 13.5)
																return 11.6;
															else
															{
																if(rsrq < -4.5)
																	return 16.226;
																else
																	return 15.53;
															}
														}
														else
															return 19.1;
													}
													else
														return 7.92;
												}
											}
											else
											{
												if(velocity < 16.81)
												{
													if(velocity < 13.76)
														return 12.3;
													else
													{
														if(rsrq < -8)
															return 11;
														else
															return 10.06;
													}
												}
												else
													return 8.04;
											}
										}
										else
										{
											if(velocity < 13.85)
											{
												if(rsrp < -78.5)
												{
													if(rsrp < -79.5)
													{
														if(rsrq < -4.5)
														{
															if(sinr < 23.5)
																return 20.3;
															else
																return 17.72;
														}
														else
															return 16.89;
													}
													else
														return 18.39;
												}
												else
												{
													if(rsrp < -77.5)
														return 12;
													else
													{
														if(rsrp < -76.5)
															return 14.71;
														else
														{
															if(velocity < 10.645)
															{
																if(velocity < 9.18)
																	return 16.085;
																else
																	return 13.86;
															}
															else
															{
																if(rsrp < -73)
																	return 18.31;
																else
																	return 17.69;
															}
														}
													}
												}
											}
											else
											{
												if(velocity < 14.66)
												{
													if(sinr < 14.5)
														return 12.56;
													else
														return 11.41;
												}
												else
												{
													if(sinr < 22)
														return 15.62;
													else
														return 17.17;
												}
											}
										}
									}
								}
								else
								{
									if(f < 2232.5)
									{
										if(velocity < 16.27)
										{
											if(rsrp < -87.5)
											{
												if(rsrq < -8.5)
													return 11.68;
												else
												{
													if(sinr < 19.5)
													{
														if(rsrq < -6.5)
															return 12.9;
														else
															return 14.3;
													}
													else
														return 15.58;
												}
											}
											else
											{
												if(sinr < 11.5)
												{
													if(velocity < 13.99)
													{
														if(rsrp < -83.5)
															return 20.94;
														else
															return 22.42;
													}
													else
														return 20.28;
												}
												else
												{
													if(velocity < 14.69)
													{
														if(sinr < 23.5)
														{
															if(rsrq < -7.5)
															{
																if(rsrp < -83.5)
																	return 12.78;
																else
																{
																	if(rsrp < -78.5)
																		return 13.86;
																	else
																		return 15.13;
																}
															}
															else
															{
																if(rsrq < -5.5)
																{
																	if(velocity < 13.805)
																	{
																		if(rsrp < -86)
																			return 22.12;
																		else
																		{
																			if(sinr < 16)
																				return 18.055;
																			else
																			{
																				if(rsrp < -80.5)
																				{
																					if(velocity < 13.265)
																					{
																						if(rsrp < -84)
																							return 19.175;
																						else
																							return 18.53;
																					}
																					else
																						return 16.66;
																				}
																				else
																					return 20.92;
																			}
																		}
																	}
																	else
																	{
																		if(rsrp < -82.5)
																			return 22.11;
																		else
																			return 23.3;
																	}
																}
																else
																	return 14.74;
															}
														}
														else
														{
															if(rsrp < -83.5)
																return 9.23;
															else
															{
																if(rsrp < -78)
																{
																	if(rsrq < -5.5)
																		return 15.83;
																	else
																		return 14.46;
																}
																else
																	return 18.76;
															}
														}
													}
													else
													{
														if(sinr < 19)
															return 19.26;
														else
														{
															if(rsrp < -84.5)
																return 11.74;
															else
																return 9.49;
														}
													}
												}
											}
										}
										else
											return 30.77;
									}
									else
									{
										if(velocity < 13.08)
										{
											if(sinr < 15.5)
											{
												if(sinr < 12.5)
												{
													if(rsrp < -78)
													{
														if(velocity < 4.14)
															return 16.37;
														else
															return 13.79;
													}
													else
													{
														if(velocity < 4.665)
															return 14.79;
														else
														{
															if(rsrq < -7)
																return 13.1;
															else
																return 13.78;
														}
													}
												}
												else
												{
													if(rsrp < -86.5)
														return 14.05;
													else
														return 15.95;
												}
											}
											else
											{
												if(rsrp < -76)
												{
													if(rsrp < -85)
														return 14;
													else
													{
														if(rsrp < -82)
															return 9.63;
														else
															return 11.92;
													}
												}
												else
													return 16.08;
											}
										}
										else
											return 22.98;
									}
								}
							}
							else
							{
								if(rsrp < -83.5)
								{
									if(velocity < 24.18)
									{
										if(sinr < 21)
										{
											if(payload < 4.5)
												return 15.79;
											else
												return 14.96;
										}
										else
											return 19.34;
									}
									else
									{
										if(sinr < 18.5)
										{
											if(payload < 4.5)
												return 14.25;
											else
												return 9.4;
										}
										else
											return 19.74;
									}
								}
								else
								{
									if(velocity < 27.385)
									{
										if(rsrp < -82.5)
										{
											if(sinr < 17)
												return 26.35;
											else
												return 30.4;
										}
										else
										{
											if(rsrp < -77.5)
											{
												if(sinr < 12.5)
													return 22.79;
												else
													return 19.27;
											}
											else
												return 21.36;
										}
									}
									else
									{
										if(sinr < 24.5)
										{
											if(rsrp < -80.5)
											{
												if(sinr < 9)
													return 16.13;
												else
												{
													if(velocity < 33.64)
													{
														if(payload < 4.5)
															return 15.79;
														else
															return 15.17;
													}
													else
														return 13.36;
												}
											}
											else
											{
												if(payload < 4.5)
													return 17.2;
												else
												{
													if(rsrq < -5.5)
														return 19.39;
													else
														return 18.89;
												}
											}
										}
										else
											return 9.2;
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
								if(rsrp < -86.5)
									return 14.04;
								else
								{
									if(velocity < 6.34)
									{
										if(rsrp < -83.5)
											return 16.02;
										else
											return 17.29;
									}
									else
										return 20.25;
								}
							}
							else
							{
								if(payload < 4.5)
									return 16.86;
								else
								{
									if(sinr < 30.5)
										return 12.36;
									else
										return 10.94;
								}
							}
						}
						else
						{
							if(velocity < 22.4)
							{
								if(rsrp < -66.5)
								{
									if(rsrp < -80)
									{
										if(sinr < 34)
											return 14.76;
										else
											return 10.89;
									}
									else
									{
										if(sinr < 29.5)
										{
											if(payload < 4.5)
												return 17.45;
											else
											{
												if(rsrp < -73.5)
													return 21.81;
												else
													return 18.26;
											}
										}
										else
										{
											if(rsrp < -75)
												return 20.38;
											else
											{
												if(payload < 4.5)
													return 21.33;
												else
													return 20.7;
											}
										}
									}
								}
								else
									return 25.86;
							}
							else
							{
								if(rsrp < -78.5)
									return 38.17;
								else
								{
									if(payload < 4.5)
										return 18.42;
									else
									{
										if(sinr < 29.5)
										{
											if(rsrp < -72)
												return 21.51;
											else
												return 22.08;
										}
										else
											return 20.67;
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
						if(f < 1384.5)
						{
							if(velocity < 20.485)
								return 17.17;
							else
							{
								if(velocity < 27.425)
									return 11.2;
								else
									return 10.53;
							}
						}
						else
						{
							if(payload < 6.5)
							{
								if(rsrq < -8.5)
								{
									if(velocity < 10.485)
									{
										if(rsrp < -87)
											return 16.61;
										else
											return 18;
									}
									else
										return 11.74;
								}
								else
								{
									if(rsrp < -87)
										return 31.75;
									else
									{
										if(rsrp < -81.5)
										{
											if(rsrp < -82.5)
											{
												if(rsrq < -7.5)
													return 19.52;
												else
												{
													if(rsrp < -83.5)
													{
														if(velocity < 9.64)
															return 16.86;
														else
															return 16.37;
													}
													else
														return 13.64;
												}
											}
											else
											{
												if(sinr < 23)
													return 23.53;
												else
													return 24.48;
											}
										}
										else
										{
											if(rsrq < -7.5)
												return 18.11;
											else
											{
												if(velocity < 14.405)
												{
													if(rsrp < -75)
													{
														if(sinr < 22)
															return 16.21;
														else
															return 17.19;
													}
													else
														return 15.66;
												}
												else
												{
													if(rsrp < -80.5)
														return 16.75;
													else
														return 17.24;
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
									if(f < 2232.5)
									{
										if(payload < 8.5)
											return 15.09;
										else
											return 14.11;
									}
									else
									{
										if(rsrp < -86)
											return 20.07;
										else
											return 21.47;
									}
								}
								else
								{
									if(velocity < 5.39)
									{
										if(payload < 9.5)
										{
											if(f < 2232.5)
											{
												if(sinr < 21.5)
												{
													if(rsrq < -7.5)
														return 18.52;
													else
														return 17.79;
												}
												else
													return 16.45;
											}
											else
											{
												if(rsrp < -70.5)
													return 13.84;
												else
													return 16.3;
											}
										}
										else
										{
											if(sinr < 20.5)
											{
												if(rsrq < -8.5)
													return 17.95;
												else
													return 13.56;
											}
											else
												return 24.18;
										}
									}
									else
									{
										if(f < 2232.5)
										{
											if(velocity < 12.335)
											{
												if(rsrp < -76)
												{
													if(velocity < 12.045)
													{
														if(sinr < 28)
														{
															if(velocity < 8.515)
															{
																if(rsrq < -8)
																	return 21.94;
																else
																	return 21.18;
															}
															else
															{
																if(payload < 8.5)
																	return 23.22;
																else
																	return 23.8;
															}
														}
														else
															return 26.43;
													}
													else
														return 31.14;
												}
												else
													return 34.72;
											}
											else
											{
												if(rsrp < -81.5)
												{
													if(rsrp < -82.5)
													{
														if(sinr < 8.5)
															return 25.91;
														else
														{
															if(rsrp < -86.5)
															{
																if(payload < 7.5)
																	return 21.17;
																else
																	return 24.36;
															}
															else
															{
																if(sinr < 24)
																{
																	if(sinr < 12.5)
																	{
																		if(sinr < 10.5)
																			return 20.5825;
																		else
																		{
																			if(rsrp < -85.5)
																				return 19.14;
																			else
																				return 20.59;
																		}
																	}
																	else
																	{
																		if(rsrp < -85)
																			return 21.35;
																		else
																			return 22.81;
																	}
																}
																else
																	return 19.21;
															}
														}
													}
													else
													{
														if(rsrq < -8.5)
															return 22.46;
														else
															return 16.06;
													}
												}
												else
												{
													if(sinr < 20.5)
														return 23.3466666667;
													else
													{
														if(rsrq < -8.5)
															return 25.13;
														else
														{
															if(payload < 7.5)
																return 28.2;
															else
																return 26.89;
														}
													}
												}
											}
										}
										else
										{
											if(sinr < 12)
											{
												if(sinr < 10.5)
												{
													if(rsrp < -85)
													{
														if(velocity < 12.635)
														{
															if(rsrp < -86.5)
																return 24.92;
															else
															{
																if(payload < 8.5)
																	return 23.69;
																else
																	return 19.73;
															}
														}
														else
															return 10.98;
													}
													else
														return 18.31;
												}
												else
												{
													if(velocity < 11.565)
														return 30.41;
													else
														return 29.04;
												}
											}
											else
											{
												if(velocity < 12.985)
												{
													if(payload < 8.5)
														return 16.29;
													else
													{
														if(velocity < 11.905)
															return 18.39;
														else
															return 20.495;
													}
												}
												else
												{
													if(velocity < 13.57)
														return 14.4;
													else
														return 16.77;
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
							if(f < 2232.5)
							{
								if(velocity < 15.52)
								{
									if(velocity < 14.61)
									{
										if(rsrp < -84.5)
										{
											if(sinr < 24.5)
											{
												if(velocity < 0.565)
												{
													if(payload < 6.5)
														return 20.52;
													else
													{
														if(payload < 7.5)
															return 24.73;
														else
															return 27.36;
													}
												}
												else
												{
													if(rsrq < -5.5)
													{
														if(rsrp < -87.5)
														{
															if(sinr < 12)
																return 15.49;
															else
															{
																if(sinr < 15)
																	return 22.21;
																else
																{
																	if(velocity < 8.75)
																		return 23.82;
																	else
																		return 25.75;
																}
															}
														}
														else
														{
															if(velocity < 12.45)
															{
																if(velocity < 6.3)
																	return 19.87;
																else
																{
																	if(velocity < 11.685)
																	{
																		if(rsrp < -86.5)
																			return 18.37;
																		else
																			return 16.12;
																	}
																	else
																		return 19.14;
																}
															}
															else
															{
																if(payload < 7.5)
																	return 23.02;
																else
																	return 21.07;
															}
														}
													}
													else
														return 14.18;
												}
											}
											else
											{
												if(rsrp < -86)
													return 16.71;
												else
												{
													if(payload < 7)
														return 13.82;
													else
														return 12.52;
												}
											}
										}
										else
										{
											if(sinr < 26.5)
											{
												if(rsrp < -83.5)
												{
													if(sinr < 21.5)
														return 38.15;
													else
														return 20.59;
												}
												else
												{
													if(sinr < 24.5)
													{
														if(rsrp < -82.5)
														{
															if(payload < 7.5)
															{
																if(rsrq < -5.5)
																	return 17.93;
																else
																	return 16.59;
															}
															else
																return 18.31;
														}
														else
														{
															if(velocity < 9.46)
															{
																if(rsrp < -74)
																{
																	if(sinr < 20.5)
																		return 22.91;
																	else
																		return 18.5633333333;
																}
																else
																	return 16.01;
															}
															else
															{
																if(sinr < 21.5)
																{
																	if(rsrp < -76.5)
																	{
																		if(payload < 6.5)
																		{
																			if(velocity < 12.285)
																				return 18.42;
																			else
																			{
																				if(rsrp < -81.5)
																					return 22.74;
																				else
																					return 20.64;
																			}
																		}
																		else
																		{
																			if(rsrp < -81)
																				return 28.69;
																			else
																				return 23.5233333333;
																		}
																	}
																	else
																	{
																		if(rsrq < -5.5)
																		{
																			if(payload < 7)
																				return 27.91;
																			else
																				return 29.08;
																		}
																		else
																			return 31.15;
																	}
																}
																else
																{
																	if(rsrp < -78)
																		return 27.38;
																	else
																	{
																		if(sinr < 23.5)
																		{
																			if(rsrp < -72)
																				return 20.7514285714;
																			else
																				return 23.38;
																		}
																		else
																			return 22.93;
																	}
																}
															}
														}
													}
													else
													{
														if(rsrq < -5.5)
														{
															if(rsrp < -75.5)
																return 34.74;
															else
																return 28.82;
														}
														else
														{
															if(velocity < 14.445)
															{
																if(velocity < 7.035)
																	return 22.06;
																else
																	return 20.0366666667;
															}
															else
																return 24.11;
														}
													}
												}
											}
											else
											{
												if(velocity < 6.195)
												{
													if(payload < 6.5)
													{
														if(rsrp < -72.5)
															return 18.06;
														else
															return 13.81;
													}
													else
													{
														if(sinr < 28)
															return 17.12;
														else
														{
															if(sinr < 34.5)
																return 18.89;
															else
																return 20.4;
														}
													}
												}
												else
												{
													if(velocity < 13.635)
													{
														if(payload < 7.5)
														{
															if(sinr < 29)
															{
																if(payload < 6.5)
																{
																	if(rsrq < -5.5)
																		return 16.13;
																	else
																		return 20.01;
																}
																else
																{
																	if(rsrp < -70)
																		return 22.34;
																	else
																		return 23.42;
																}
															}
															else
															{
																if(rsrp < -73)
																{
																	if(payload < 6.5)
																		return 25.16;
																	else
																	{
																		if(rsrq < -5.5)
																			return 27.55;
																		else
																			return 26.6;
																	}
																}
																else
																{
																	if(sinr < 31)
																		return 24.86;
																	else
																		return 22.9;
																}
															}
														}
														else
														{
															if(velocity < 9.205)
																return 22.11;
															else
																return 17.76;
														}
													}
													else
													{
														if(velocity < 14.27)
														{
															if(sinr < 28.5)
																return 19.08;
															else
															{
																if(sinr < 30.5)
																	return 17.48;
																else
																	return 19.43;
															}
														}
														else
															return 24.1;
													}
												}
											}
										}
									}
									else
									{
										if(rsrp < -83.5)
										{
											if(payload < 7.5)
												return 27.3;
											else
												return 22.08;
										}
										else
										{
											if(rsrp < -80.5)
											{
												if(velocity < 14.93)
													return 35.13;
												else
												{
													if(sinr < 17.5)
														return 25.59;
													else
														return 27.67;
												}
											}
											else
											{
												if(sinr < 29.5)
												{
													if(rsrp < -74)
														return 26.42;
													else
														return 29.18;
												}
												else
												{
													if(velocity < 15.115)
														return 25.84;
													else
														return 22.36;
												}
											}
										}
									}
								}
								else
								{
									if(velocity < 23.915)
									{
										if(rsrp < -83.5)
										{
											if(sinr < 22.5)
											{
												if(velocity < 15.93)
													return 16.58;
												else
												{
													if(velocity < 22.11)
														return 13.178;
													else
														return 13.67;
												}
											}
											else
											{
												if(sinr < 25)
													return 22.91;
												else
													return 11.02;
											}
										}
										else
										{
											if(rsrp < -82)
											{
												if(sinr < 19.5)
													return 21.88;
												else
													return 25.18;
											}
											else
												return 17.785;
										}
									}
									else
									{
										if(sinr < 25)
										{
											if(rsrp < -87.5)
												return 15.74;
											else
											{
												if(velocity < 37.09)
												{
													if(payload < 7.5)
													{
														if(rsrq < -5.5)
														{
															if(sinr < 11.5)
																return 18.99;
															else
																return 18.14;
														}
														else
														{
															if(sinr < 17)
																return 19.43;
															else
																return 20.61;
														}
													}
													else
														return 15.65;
												}
												else
													return 20.96;
											}
										}
										else
										{
											if(rsrp < -85.5)
												return 29.98;
											else
											{
												if(sinr < 27.5)
													return 23.98;
												else
												{
													if(velocity < 29.68)
														return 23.58;
													else
													{
														if(rsrp < -73)
															return 22.46;
														else
															return 21.82;
													}
												}
											}
										}
									}
								}
							}
							else
							{
								if(rsrp < -84)
								{
									if(velocity < 14.79)
									{
										if(sinr < 10)
											return 24.44;
										else
										{
											if(rsrp < -86.5)
											{
												if(payload < 6.5)
													return 19.89;
												else
												{
													if(sinr < 22.5)
														return 19.07;
													else
														return 18.45;
												}
											}
											else
											{
												if(sinr < 14)
													return 19.66;
												else
												{
													if(velocity < 11.335)
														return 21.29;
													else
														return 22.35;
												}
											}
										}
									}
									else
										return 12.4;
								}
								else
								{
									if(payload < 7.5)
									{
										if(velocity < 8.115)
										{
											if(rsrq < -5.5)
											{
												if(payload < 6.5)
													return 14.54;
												else
													return 21.05;
											}
											else
												return 13.53;
										}
										else
											return 8.88;
									}
									else
										return 20.65;
								}
							}
						}
						else
						{
							if(rsrp < -64)
							{
								if(velocity < 12.315)
								{
									if(f < 2232.5)
									{
										if(velocity < 9.63)
										{
											if(rsrp < -77.5)
											{
												if(velocity < 9.485)
												{
													if(sinr < 20)
													{
														if(velocity < 0.865)
														{
															if(rsrp < -84.5)
															{
																if(rsrq < -5.5)
																{
																	if(sinr < 16.5)
																		return 22.8;
																	else
																		return 26.56;
																}
																else
																{
																	if(sinr < 16.5)
																		return 24.95;
																	else
																		return 24.38;
																}
															}
															else
																return 29.98;
														}
														else
														{
															if(velocity < 4.245)
																return 18.59;
															else
															{
																if(velocity < 7.605)
																	return 27.71;
																else
																{
																	if(sinr < 14)
																		return 22.19;
																	else
																		return 24.15;
																}
															}
														}
													}
													else
													{
														if(payload < 9.5)
														{
															if(rsrq < -5.5)
															{
																if(sinr < 27.5)
																	return 22.29;
																else
																	return 23.21;
															}
															else
																return 24.03;
														}
														else
														{
															if(rsrp < -83.5)
																return 20.26;
															else
																return 19.76;
														}
													}
												}
												else
													return 32.33;
											}
											else
											{
												if(rsrp < -69)
												{
													if(sinr < 26)
													{
														if(payload < 9.5)
															return 30.1;
														else
															return 29.35;
													}
													else
														return 33.035;
												}
												else
												{
													if(rsrp < -66.5)
														return 20.25;
													else
														return 21.91;
												}
											}
										}
										else
										{
											if(sinr < 26.5)
											{
												if(payload < 9.5)
													return 24.44;
												else
													return 22.5;
											}
											else
											{
												if(rsrp < -77)
													return 14.8;
												else
												{
													if(velocity < 10.2)
														return 19.09;
													else
													{
														if(velocity < 11.535)
															return 21.96;
														else
															return 20.68;
													}
												}
											}
										}
									}
									else
									{
										if(payload < 9.5)
										{
											if(velocity < 3.71)
												return 17.24;
											else
												return 18.32;
										}
										else
										{
											if(velocity < 3.96)
												return 20.01;
											else
												return 18.56;
										}
									}
								}
								else
								{
									if(sinr < 24.5)
									{
										if(f < 1384.5)
											return 4.46;
										else
										{
											if(velocity < 12.365)
												return 39.04;
											else
											{
												if(rsrq < -5.5)
												{
													if(sinr < 9)
													{
														if(rsrp < -86)
														{
															if(velocity < 26.06)
																return 20.98;
															else
																return 28.26;
														}
														else
															return 20.63;
													}
													else
													{
														if(payload < 9.5)
														{
															if(rsrp < -81.5)
																return 28.03;
															else
																return 37.23;
														}
														else
														{
															if(sinr < 11.5)
															{
																if(velocity < 24.07)
																	return 31.92;
																else
																	return 25.37;
															}
															else
															{
																if(rsrp < -80.5)
																{
																	if(sinr < 18.5)
																		return 29.37;
																	else
																		return 25.15;
																}
																else
																{
																	if(velocity < 12.855)
																		return 26.93;
																	else
																		return 24.7666666667;
																}
															}
														}
													}
												}
												else
												{
													if(sinr < 22)
														return 33.68;
													else
														return 22.925;
												}
											}
										}
									}
									else
									{
										if(sinr < 25.5)
											return 41.78;
										else
										{
											if(rsrp < -71)
											{
												if(payload < 9.5)
												{
													if(rsrp < -80.5)
													{
														if(rsrq < -5.5)
															return 26.1875;
														else
															return 21.92;
													}
													else
													{
														if(rsrp < -75.5)
															return 34.25;
														else
														{
															if(rsrp < -73)
																return 24.9;
															else
															{
																if(velocity < 22.51)
																	return 27.97;
																else
																	return 29.13;
															}
														}
													}
												}
												else
												{
													if(velocity < 21.085)
													{
														if(sinr < 31.5)
														{
															if(rsrp < -81.5)
																return 30.38;
															else
																return 28.57;
														}
														else
															return 25.89;
													}
													else
													{
														if(rsrp < -85)
															return 34.38;
														else
															return 31.5;
													}
												}
											}
											else
											{
												if(payload < 9.5)
													return 43.01;
												else
												{
													if(rsrp < -69)
														return 32.48;
													else
														return 30.48;
												}
											}
										}
									}
								}
							}
							else
								return 11.25;
						}
					}
				}
			}
		}
	}
}

float tmobile_dl_ns3_tree_5(float payload, float rsrp, float rsrq, float sinr, float velocity, float f)
{
	if(payload < 3.5)
	{
		if(rsrp < -88.5)
		{
			if(payload < 1.5)
			{
				if(rsrp < -95.5)
				{
					if(velocity < 34.425)
					{
						if(rsrq < -13.5)
						{
							if(payload < 0.55)
							{
								if(velocity < 14.355)
									return 0.72;
								else
									return 2.17;
							}
							else
								return 4.72;
						}
						else
						{
							if(rsrp < -108.5)
							{
								if(sinr < 0.5)
									return 6.22;
								else
									return 10;
							}
							else
							{
								if(sinr < -2.5)
								{
									if(rsrq < -12.5)
									{
										if(sinr < -6.5)
											return 7.29;
										else
										{
											if(sinr < -3.5)
												return 4.736;
											else
												return 6.66;
										}
									}
									else
									{
										if(velocity < 14.415)
										{
											if(payload < 0.55)
												return 11.59;
											else
												return 8.95;
										}
										else
										{
											if(rsrp < -97.5)
											{
												if(rsrp < -101)
													return 6;
												else
													return 9.43;
											}
											else
												return 3.15;
										}
									}
								}
								else
								{
									if(rsrq < -6.5)
									{
										if(rsrp < -105.5)
										{
											if(rsrq < -11)
												return 5.39;
											else
											{
												if(velocity < 23.835)
												{
													if(payload < 0.75)
													{
														if(rsrq < -9.5)
															return 1.19;
														else
															return 0.66;
													}
													else
													{
														if(rsrp < -107)
															return 2.61;
														else
															return 1.31;
													}
												}
												else
													return 3.27;
											}
										}
										else
										{
											if(velocity < 10.025)
											{
												if(velocity < 8.47)
												{
													if(rsrq < -11.5)
														return 3.03;
													else
													{
														if(rsrp < -99.5)
														{
															if(payload < 0.75)
																return 2.95;
															else
															{
																if(velocity < 0.455)
																	return 6.13;
																else
																	return 5.03;
															}
														}
														else
														{
															if(velocity < 4.115)
															{
																if(rsrp < -98.5)
																{
																	if(rsrq < -8.5)
																		return 10.42;
																	else
																		return 7.75;
																}
																else
																{
																	if(rsrq < -8.5)
																	{
																		if(payload < 0.3)
																			return 7.21;
																		else
																			return 7.71;
																	}
																	else
																		return 6.71;
																}
															}
															else
															{
																if(rsrq < -9.5)
																	return 7.1;
																else
																{
																	if(payload < 0.3)
																		return 3.05;
																	else
																		return 3.65;
																}
															}
														}
													}
												}
												else
												{
													if(velocity < 8.98)
														return 13.65;
													else
														return 8.075;
												}
											}
											else
											{
												if(velocity < 13.26)
												{
													if(velocity < 11.11)
													{
														if(rsrp < -100.5)
															return 3.2;
														else
														{
															if(sinr < 3.5)
																return 5;
															else
																return 4.18;
														}
													}
													else
													{
														if(rsrp < -102.5)
															return 2.5;
														else
														{
															if(rsrp < -100.5)
															{
																if(payload < 0.75)
																{
																	if(rsrp < -101.5)
																		return 4.42;
																	else
																		return 3.22;
																}
																else
																	return 5.35;
															}
															else
															{
																if(payload < 0.55)
																{
																	if(rsrq < -9)
																		return 3.16;
																	else
																		return 3.67;
																}
																else
																{
																	if(rsrq < -8)
																		return 1.38;
																	else
																		return 3.02;
																}
															}
														}
													}
												}
												else
												{
													if(payload < 0.3)
													{
														if(velocity < 28.37)
														{
															if(rsrp < -103.5)
																return 6.02;
															else
															{
																if(rsrp < -101.5)
																	return 1.75;
																else
																{
																	if(sinr < 7)
																	{
																		if(velocity < 18.1)
																			return 5.23;
																		else
																			return 4.6;
																	}
																	else
																	{
																		if(rsrq < -7.5)
																			return 4.68;
																		else
																			return 2.32;
																	}
																}
															}
														}
														else
															return 2.48;
													}
													else
													{
														if(velocity < 14.64)
														{
															if(velocity < 14.395)
															{
																if(rsrp < -98.5)
																{
																	if(rsrq < -9.5)
																	{
																		if(velocity < 13.635)
																			return 4.46;
																		else
																			return 1.71;
																	}
																	else
																	{
																		if(rsrp < -100)
																			return 9.03;
																		else
																		{
																			if(velocity < 13.41)
																				return 7.05;
																			else
																			{
																				if(payload < 0.75)
																					return 4.05;
																				else
																					return 2.77;
																			}
																		}
																	}
																}
																else
																{
																	if(velocity < 14.24)
																		return 8.6575;
																	else
																		return 5.67;
																}
															}
															else
															{
																if(rsrq < -8)
																	return 2.28;
																else
																	return 1.45;
															}
														}
														else
														{
															if(sinr < 7)
															{
																if(rsrp < -99.5)
																	return 7.632;
																else
																	return 11.75;
															}
															else
															{
																if(rsrq < -7.5)
																	return 2.74;
																else
																{
																	if(sinr < 9)
																		return 3.16;
																	else
																		return 7.67;
																}
															}
														}
													}
												}
											}
										}
									}
									else
										return 10.75;
								}
							}
						}
					}
					else
					{
						if(rsrq < -8)
							return 0.255;
						else
						{
							if(rsrq < -6.5)
								return 2.86;
							else
								return 4.5;
						}
					}
				}
				else
				{
					if(payload < 0.75)
					{
						if(velocity < 31.34)
						{
							if(rsrq < -5.5)
							{
								if(sinr < 18)
								{
									if(rsrq < -7.5)
									{
										if(rsrp < -93.5)
										{
											if(velocity < 8.74)
											{
												if(rsrq < -9.5)
													return 4.76;
												else
												{
													if(payload < 0.3)
														return 8.6;
													else
														return 5.73;
												}
											}
											else
											{
												if(velocity < 12.96)
												{
													if(rsrp < -94.5)
														return 5.84;
													else
													{
														if(rsrq < -9)
															return 3.25;
														else
															return 4.11;
													}
												}
												else
												{
													if(rsrp < -94.5)
														return 2.02;
													else
														return 3.14;
												}
											}
										}
										else
										{
											if(sinr < 10.5)
											{
												if(sinr < 9.5)
												{
													if(velocity < 11.955)
													{
														if(payload < 0.3)
														{
															if(velocity < 4.835)
															{
																if(rsrp < -90.5)
																	return 4.94;
																else
																{
																	if(rsrq < -10.5)
																		return 5.3;
																	else
																	{
																		if(sinr < 5)
																			return 5.52;
																		else
																			return 4.23;
																	}
																}
															}
															else
															{
																if(rsrp < -91.5)
																	return 5.13;
																else
																	return 6.3;
															}
														}
														else
															return 6.99;
													}
													else
													{
														if(rsrp < -90.5)
															return 6.405;
														else
															return 9.2;
													}
												}
												else
													return 8.42;
											}
											else
											{
												if(rsrq < -8.5)
												{
													if(velocity < 5.745)
													{
														if(f < 2232.5)
															return 4.44;
														else
															return 3.6;
													}
													else
														return 2.89;
												}
												else
												{
													if(velocity < 5.495)
													{
														if(payload < 0.3)
															return 4.82;
														else
															return 6.93;
													}
													else
														return 7.16;
												}
											}
										}
									}
									else
									{
										if(sinr < 4.5)
											return 8.26;
										else
										{
											if(payload < 0.3)
											{
												if(rsrp < -92.5)
												{
													if(rsrq < -6.5)
													{
														if(sinr < 15.5)
															return 4.01;
														else
															return 3.21;
													}
													else
														return 5.44;
												}
												else
												{
													if(sinr < 11.5)
													{
														if(rsrp < -90.5)
															return 3.88;
														else
														{
															if(rsrp < -89.5)
																return 5.47;
															else
																return 4.6;
														}
													}
													else
													{
														if(rsrq < -6.5)
														{
															if(rsrp < -91)
																return 6.67;
															else
																return 6.06;
														}
														else
															return 5.03;
													}
												}
											}
											else
											{
												if(f < 2232.5)
												{
													if(velocity < 13.195)
													{
														if(rsrq < -6.5)
														{
															if(velocity < 11.99)
															{
																if(rsrp < -91)
																{
																	if(rsrp < -92.5)
																		return 3.3433333333;
																	else
																		return 4.09;
																}
																else
																	return 5.08;
															}
															else
															{
																if(rsrp < -92)
																	return 6.49;
																else
																	return 4.57;
															}
														}
														else
															return 8.81;
													}
													else
													{
														if(sinr < 8.5)
															return 4.33;
														else
														{
															if(rsrq < -6.5)
															{
																if(sinr < 11.5)
																{
																	if(rsrp < -91.5)
																		return 8.64;
																	else
																		return 6.27;
																}
																else
																{
																	if(rsrp < -93)
																		return 8.99;
																	else
																	{
																		if(rsrp < -90)
																			return 11.53;
																		else
																			return 9.37;
																	}
																}
															}
															else
															{
																if(sinr < 14.5)
																	return 7.78;
																else
																	return 4.6;
															}
														}
													}
												}
												else
												{
													if(rsrq < -6.5)
													{
														if(velocity < 11.1)
														{
															if(rsrp < -92.5)
																return 11.59;
															else
																return 6.55;
														}
														else
															return 5.28;
													}
													else
													{
														if(velocity < 8.38)
														{
															if(sinr < 13)
																return 6.35;
															else
																return 5.77;
														}
														else
															return 9.66;
													}
												}
											}
										}
									}
								}
								else
								{
									if(velocity < 10.59)
									{
										if(rsrp < -89.5)
										{
											if(sinr < 20)
											{
												if(payload < 0.3)
													return 2.74;
												else
													return 5.19;
											}
											else
											{
												if(rsrq < -6.5)
												{
													if(rsrp < -91)
														return 4.85;
													else
														return 5.56;
												}
												else
													return 7.02;
											}
										}
										else
										{
											if(velocity < 10.125)
											{
												if(f < 2232.5)
												{
													if(rsrq < -8)
														return 2.96;
													else
														return 3.59;
												}
												else
													return 2.62;
											}
											else
												return 4.79;
										}
									}
									else
									{
										if(payload < 0.3)
											return 9.88;
										else
											return 3.39;
									}
								}
							}
							else
							{
								if(payload < 0.3)
									return 5.84;
								else
								{
									if(sinr < 18)
										return 8.93;
									else
										return 10.39;
								}
							}
						}
						else
							return 0.8066666667;
					}
					else
					{
						if(rsrp < -93.5)
						{
							if(sinr < 0)
								return 4.54;
							else
							{
								if(sinr < 4)
									return 20.73;
								else
								{
									if(velocity < 4.095)
									{
										if(rsrp < -94.5)
											return 7.77;
										else
											return 6.19;
									}
									else
									{
										if(velocity < 13.25)
											return 10.24;
										else
											return 9.45;
									}
								}
							}
						}
						else
						{
							if(rsrq < -7.5)
							{
								if(sinr < 8)
								{
									if(sinr < 0)
										return 9.62;
									else
									{
										if(rsrp < -91.5)
											return 7.65;
										else
											return 4.78;
									}
								}
								else
								{
									if(sinr < 12.5)
										return 15.53;
									else
										return 5.92;
								}
							}
							else
							{
								if(f < 2232.5)
								{
									if(rsrp < -90.5)
									{
										if(velocity < 8.615)
										{
											if(sinr < 6.5)
												return 12.05;
											else
											{
												if(sinr < 9)
													return 8.78;
												else
													return 9.51;
											}
										}
										else
										{
											if(velocity < 11.905)
											{
												if(sinr < 9.5)
													return 6.39;
												else
													return 6.9333333333;
											}
											else
											{
												if(velocity < 12.755)
													return 2.92;
												else
												{
													if(rsrq < -6.5)
													{
														if(rsrp < -91.5)
															return 3.93;
														else
														{
															if(sinr < 8.5)
																return 5.63;
															else
																return 6.28;
														}
													}
													else
														return 7.01;
												}
											}
										}
									}
									else
									{
										if(sinr < 14)
											return 13.63;
										else
											return 9.45;
									}
								}
								else
								{
									if(sinr < 20.5)
									{
										if(sinr < 10.5)
											return 6.6;
										else
										{
											if(rsrp < -90.5)
												return 4.424;
											else
												return 5.22;
										}
									}
									else
									{
										if(rsrp < -89.5)
										{
											if(sinr < 30.5)
												return 8.58;
											else
												return 5.54;
										}
										else
											return 9.35;
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
					if(payload < 2.5)
					{
						if(sinr < 12)
						{
							if(rsrp < -97.5)
							{
								if(rsrq < -12.5)
									return 1.945;
								else
								{
									if(velocity < 5.87)
									{
										if(sinr < 9)
										{
											if(rsrp < -99.5)
											{
												if(rsrp < -105)
													return 3.49;
												else
													return 4.46;
											}
											else
												return 3.198;
										}
										else
											return 4.79;
									}
									else
									{
										if(velocity < 12.785)
										{
											if(rsrq < -7.5)
											{
												if(sinr < -1)
													return 11.58;
												else
													return 9.55;
											}
											else
												return 5.24;
										}
										else
										{
											if(sinr < 1.5)
											{
												if(rsrp < -107)
													return 12.46;
												else
												{
													if(rsrp < -104.5)
														return 4.63;
													else
													{
														if(velocity < 24.99)
															return 6.88;
														else
															return 5.56;
													}
												}
											}
											else
											{
												if(rsrq < -7.5)
												{
													if(rsrq < -8.5)
													{
														if(rsrp < -100)
														{
															if(rsrq < -9.5)
																return 4.85;
															else
															{
																if(rsrp < -105.5)
																	return 3.72;
																else
																	return 4.44;
															}
														}
														else
															return 1.69;
													}
													else
														return 1.81;
												}
												else
												{
													if(velocity < 30.52)
														return 6.92;
													else
														return 4.105;
												}
											}
										}
									}
								}
							}
							else
							{
								if(velocity < 14.305)
								{
									if(f < 2232.5)
									{
										if(sinr < 6.5)
											return 7.43;
										else
											return 8.0866666667;
									}
									else
										return 6.47;
								}
								else
									return 3.04;
							}
						}
						else
						{
							if(rsrq < -7.5)
							{
								if(rsrq < -8.5)
									return 11.63;
								else
								{
									if(sinr < 19.5)
										return 5.53;
									else
										return 7.46;
								}
							}
							else
							{
								if(sinr < 16.5)
									return 10.38;
								else
									return 11;
							}
						}
					}
					else
					{
						if(velocity < 17.09)
						{
							if(velocity < 10.565)
							{
								if(rsrp < -97.5)
								{
									if(velocity < 2.485)
									{
										if(rsrp < -98.5)
										{
											if(sinr < 11.5)
											{
												if(rsrq < -8.5)
													return 5.09;
												else
													return 5.76;
											}
											else
												return 8.18;
										}
										else
											return 4.29;
									}
									else
									{
										if(rsrq < -7.5)
										{
											if(rsrp < -99.5)
												return 9.85;
											else
											{
												if(velocity < 10.155)
													return 6.2333333333;
												else
													return 8.36;
											}
										}
										else
										{
											if(velocity < 8.6)
												return 11.74;
											else
												return 12.51;
										}
									}
								}
								else
								{
									if(rsrq < -10.5)
										return 2.96;
									else
									{
										if(rsrp < -95.5)
										{
											if(rsrq < -9.5)
											{
												if(sinr < 4)
												{
													if(sinr < 0.5)
														return 10.08;
													else
														return 8.13;
												}
												else
													return 3.3;
											}
											else
												return 6.92;
										}
										else
										{
											if(rsrq < -9.5)
												return 4.89;
											else
												return 11.03;
										}
									}
								}
							}
							else
							{
								if(rsrp < -106.5)
									return 12.69;
								else
								{
									if(rsrp < -102)
									{
										if(rsrq < -11.5)
										{
											if(velocity < 13.99)
												return 2.87;
											else
												return 5.3;
										}
										else
										{
											if(rsrp < -103.5)
												return 4.734;
											else
												return 5.67;
										}
									}
									else
									{
										if(rsrp < -98.5)
										{
											if(rsrp < -100.5)
												return 10.98;
											else
												return 11.855;
										}
										else
										{
											if(sinr < 6.5)
											{
												if(rsrq < -9)
												{
													if(velocity < 12.43)
														return 5.64;
													else
														return 4.4;
												}
												else
													return 6.28;
											}
											else
											{
												if(sinr < 8.5)
												{
													if(rsrq < -10)
														return 7.29;
													else
														return 5.01;
												}
												else
													return 7.81;
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
								if(velocity < 33.54)
								{
									if(rsrq < -9.5)
									{
										if(rsrq < -11)
											return 11.28;
										else
										{
											if(rsrp < -103)
												return 6.62;
											else
												return 8.35;
										}
									}
									else
									{
										if(sinr < 4.5)
											return 15.26;
										else
										{
											if(sinr < 10.5)
												return 10.28;
											else
												return 9.51;
										}
									}
								}
								else
									return 13.58;
							}
							else
							{
								if(rsrq < -9)
									return 7.07;
								else
									return 4.98;
							}
						}
					}
				}
				else
				{
					if(velocity < 14.695)
					{
						if(sinr < 1.5)
						{
							if(f < 1342.5)
								return 6.02;
							else
							{
								if(rsrp < -93.5)
									return 9.48;
								else
								{
									if(rsrp < -92.5)
										return 7.2;
									else
									{
										if(rsrq < -10)
											return 9.54;
										else
										{
											if(rsrq < -7)
												return 7.76;
											else
												return 7.05;
										}
									}
								}
							}
						}
						else
						{
							if(payload < 2.5)
							{
								if(velocity < 8.885)
								{
									if(rsrp < -90.5)
									{
										if(f < 2232.5)
										{
											if(sinr < 24.5)
											{
												if(sinr < 10.5)
													return 12.47;
												else
													return 14.915;
											}
											else
												return 11.55;
										}
										else
											return 8.66;
									}
									else
									{
										if(rsrp < -89.5)
											return 9.07;
										else
										{
											if(velocity < 2.295)
												return 7.2233333333;
											else
												return 8.27;
										}
									}
								}
								else
								{
									if(rsrq < -8.5)
										return 7.08;
									else
									{
										if(sinr < 11.5)
										{
											if(sinr < 9.5)
											{
												if(rsrq < -7.5)
													return 8.488;
												else
													return 7.46;
											}
											else
											{
												if(sinr < 10.5)
													return 13.4;
												else
													return 9.51;
											}
										}
										else
										{
											if(rsrp < -91.5)
											{
												if(velocity < 9.995)
													return 5.88;
												else
													return 6.54;
											}
											else
											{
												if(sinr < 12.5)
													return 10.96;
												else
												{
													if(velocity < 12.6)
													{
														if(sinr < 22)
															return 10.83;
														else
															return 9.74;
													}
													else
														return 7.238;
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
									if(velocity < 2.59)
									{
										if(rsrp < -89.5)
										{
											if(rsrq < -10.5)
												return 11.98;
											else
											{
												if(rsrp < -92)
												{
													if(sinr < 9.5)
														return 15.41;
													else
														return 10.11;
												}
												else
													return 13.26;
											}
										}
										else
											return 11.02;
									}
									else
									{
										if(rsrp < -90.5)
										{
											if(rsrq < -7.5)
											{
												if(velocity < 3.125)
													return 9.34;
												else
												{
													if(velocity < 9.26)
													{
														if(rsrq < -9.5)
															return 6.78;
														else
															return 5.99;
													}
													else
													{
														if(rsrp < -91.5)
															return 6.605;
														else
															return 9.13;
													}
												}
											}
											else
											{
												if(velocity < 10.72)
													return 11.06;
												else
													return 9.1;
											}
										}
										else
											return 4.84;
									}
								}
								else
								{
									if(velocity < 12.785)
										return 15;
									else
									{
										if(rsrq < -7.5)
											return 13.49;
										else
											return 11.67;
									}
								}
							}
						}
					}
					else
					{
						if(velocity < 14.72)
						{
							if(sinr < 12)
								return 15.36;
							else
								return 23.98;
						}
						else
						{
							if(payload < 2.5)
							{
								if(sinr < 3)
									return 10.11;
								else
								{
									if(sinr < 7)
										return 16.91;
									else
									{
										if(velocity < 25.475)
											return 12.95;
										else
											return 11.42;
									}
								}
							}
							else
							{
								if(velocity < 15.47)
								{
									if(sinr < 11.5)
										return 11.33;
									else
									{
										if(rsrq < -7.5)
											return 14.69;
										else
											return 11.4;
									}
								}
								else
								{
									if(rsrp < -91.5)
									{
										if(velocity < 17.48)
											return 10.91;
										else
											return 6.64;
									}
									else
										return 3.58;
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
				if(sinr < 37)
				{
					if(payload < 0.3)
					{
						if(velocity < 1.315)
						{
							if(rsrq < -7.5)
							{
								if(rsrp < -78)
									return 5.05;
								else
									return 22.86;
							}
							else
							{
								if(sinr < 27)
								{
									if(rsrq < -5.5)
									{
										if(sinr < 24)
										{
											if(rsrp < -86.5)
											{
												if(f < 2232.5)
													return 4.62;
												else
													return 5.19;
											}
											else
											{
												if(rsrp < -83)
													return 3.33;
												else
													return 4.42;
											}
										}
										else
											return 5.8;
									}
									else
									{
										if(sinr < 22.5)
											return 5.91;
										else
											return 4.32;
									}
								}
								else
								{
									if(rsrp < -79)
										return 3.03;
									else
										return 3.57;
								}
							}
						}
						else
						{
							if(sinr < -2)
								return 0.07;
							else
							{
								if(rsrq < -7.5)
								{
									if(rsrq < -8.5)
										return 3.42;
									else
									{
										if(rsrp < -84.5)
											return 7.62;
										else
										{
											if(velocity < 13.585)
											{
												if(sinr < 13.5)
													return 4.235;
												else
													return 4.7166666667;
											}
											else
											{
												if(sinr < 17)
													return 2.48;
												else
													return 3.33;
											}
										}
									}
								}
								else
								{
									if(sinr < 5)
										return 8.08;
									else
									{
										if(sinr < 28.5)
										{
											if(rsrp < -71.5)
											{
												if(rsrp < -72.5)
												{
													if(velocity < 13.11)
													{
														if(rsrq < -5.5)
														{
															if(f < 2232.5)
															{
																if(sinr < 15)
																	return 7.69;
																else
																{
																	if(rsrp < -78)
																	{
																		if(rsrp < -84.5)
																			return 5.285;
																		else
																			return 4.32;
																	}
																	else
																		return 5.67;
																}
															}
															else
															{
																if(rsrp < -84.5)
																{
																	if(sinr < 12)
																		return 5.59;
																	else
																		return 6.015;
																}
																else
																	return 4.73;
															}
														}
														else
														{
															if(velocity < 12.53)
															{
																if(sinr < 19)
																	return 5.56;
																else
																	return 4.655;
															}
															else
															{
																if(rsrp < -84.5)
																	return 8.08;
																else
																	return 7.41;
															}
														}
													}
													else
													{
														if(f < 2232.5)
														{
															if(sinr < 11.5)
															{
																if(rsrp < -81.5)
																	return 10.26;
																else
																	return 5.3;
															}
															else
															{
																if(velocity < 13.295)
																	return 3.29;
																else
																{
																	if(velocity < 33.79)
																	{
																		if(sinr < 15.5)
																		{
																			if(rsrp < -82)
																				return 4.4;
																			else
																				return 8.42;
																		}
																		else
																		{
																			if(sinr < 23)
																			{
																				if(rsrp < -82.5)
																					return 4.26;
																				else
																					return 4.84;
																			}
																			else
																			{
																				if(velocity < 25.955)
																					return 5.185;
																				else
																					return 4.76;
																			}
																		}
																	}
																	else
																	{
																		if(rsrp < -81.5)
																			return 4.76;
																		else
																			return 4.08;
																	}
																}
															}
														}
														else
															return 4.1025;
													}
												}
												else
													return 3.05;
											}
											else
											{
												if(velocity < 12.485)
													return 2.56;
												else
												{
													if(rsrq < -5.5)
														return 13.33;
													else
														return 4.82;
												}
											}
										}
										else
										{
											if(sinr < 34.5)
											{
												if(rsrq < -4.5)
												{
													if(velocity < 27.545)
													{
														if(rsrp < -75)
														{
															if(velocity < 14.53)
																return 4.85;
															else
																return 5.435;
														}
														else
														{
															if(rsrq < -5.5)
																return 4.26;
															else
															{
																if(rsrp < -70.5)
																	return 7.14;
																else
																	return 6.25;
															}
														}
													}
													else
														return 7.27;
												}
												else
													return 9.09;
											}
											else
												return 4.21;
										}
									}
								}
							}
						}
					}
					else
					{
						if(rsrp < -80.5)
						{
							if(f < 1384.5)
								return 2.98;
							else
							{
								if(velocity < 13.975)
								{
									if(sinr < 20.5)
									{
										if(sinr < 10)
										{
											if(f < 2232.5)
												return 12.29;
											else
											{
												if(payload < 0.75)
												{
													if(rsrp < -84)
														return 7.5;
													else
														return 6.18;
												}
												else
												{
													if(rsrq < -8)
														return 9.89;
													else
													{
														if(rsrq < -6.5)
															return 8.64;
														else
															return 7.51;
													}
												}
											}
										}
										else
										{
											if(velocity < 12.625)
											{
												if(velocity < 12.215)
												{
													if(velocity < 9.065)
													{
														if(rsrq < -9)
															return 2.76;
														else
														{
															if(velocity < 0.17)
																return 6.3755555556;
															else
															{
																if(rsrq < -5.5)
																{
																	if(rsrq < -7)
																		return 5.44;
																	else
																		return 6.49;
																}
																else
																{
																	if(velocity < 2.635)
																		return 5.1;
																	else
																		return 5.87;
																}
															}
														}
													}
													else
													{
														if(velocity < 11.645)
														{
															if(velocity < 11.12)
															{
																if(rsrq < -7.5)
																	return 8.51;
																else
																	return 7.94;
															}
															else
															{
																if(rsrq < -6)
																	return 6.11;
																else
																	return 7.7;
															}
														}
														else
														{
															if(rsrq < -6.5)
																return 6.38;
															else
																return 5.49;
														}
													}
												}
												else
													return 4.33;
											}
											else
											{
												if(sinr < 18)
												{
													if(rsrp < -84)
														return 13.91;
													else
														return 6.23;
												}
												else
												{
													if(rsrq < -5.5)
														return 6.98;
													else
														return 7.6;
												}
											}
										}
									}
									else
									{
										if(rsrp < -86.5)
										{
											if(sinr < 23)
												return 14.13;
											else
												return 7.71;
										}
										else
										{
											if(rsrq < -5.5)
											{
												if(sinr < 33.5)
												{
													if(velocity < 11.6)
													{
														if(sinr < 31.5)
														{
															if(velocity < 6.725)
																return 8.402;
															else
															{
																if(payload < 0.75)
																{
																	if(velocity < 10.2)
																	{
																		if(rsrq < -6.5)
																			return 8.15;
																		else
																			return 7.63;
																	}
																	else
																		return 8.23;
																}
																else
																	return 7.225;
															}
														}
														else
															return 9.77;
													}
													else
														return 11.8;
												}
												else
													return 6.455;
											}
											else
											{
												if(rsrp < -83.5)
													return 4.48;
												else
												{
													if(rsrp < -82.5)
													{
														if(sinr < 26)
															return 13.45;
														else
															return 8.03;
													}
													else
													{
														if(rsrp < -81.5)
															return 8.53;
														else
															return 7.95;
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
										if(rsrq < -5.5)
										{
											if(velocity < 14.545)
											{
												if(rsrp < -84.5)
													return 9.41;
												else
													return 12.97;
											}
											else
											{
												if(rsrp < -86.5)
												{
													if(rsrq < -8)
														return 4;
													else
													{
														if(payload < 0.75)
															return 8.25;
														else
															return 6.26;
													}
												}
												else
												{
													if(velocity < 35.39)
													{
														if(rsrq < -9.5)
															return 7.25;
														else
														{
															if(velocity < 34.61)
															{
																if(rsrp < -85.5)
																	return 9.84;
																else
																	return 8.59;
															}
															else
																return 11.36;
														}
													}
													else
													{
														if(payload < 0.75)
															return 5.8066666667;
														else
															return 8.7;
													}
												}
											}
										}
										else
										{
											if(rsrp < -81.5)
												return 7.07;
											else
												return 7.55;
										}
									}
									else
									{
										if(rsrp < -82.5)
										{
											if(sinr < 26)
											{
												if(sinr < 22.5)
												{
													if(sinr < 19.5)
													{
														if(rsrq < -5.5)
														{
															if(payload < 0.75)
																return 14.13;
															else
																return 15.53;
														}
														else
															return 12.33;
													}
													else
													{
														if(f < 2232.5)
															return 6.23;
														else
															return 8.71;
													}
												}
												else
												{
													if(rsrp < -83.5)
														return 18.26;
													else
														return 13.91;
												}
											}
											else
												return 7.84;
										}
										else
										{
											if(velocity < 26.87)
											{
												if(rsrp < -81.5)
													return 9.24;
												else
													return 8.54;
											}
											else
												return 6.61;
										}
									}
								}
							}
						}
						else
						{
							if(rsrq < -10)
								return 18.74;
							else
							{
								if(rsrq < -8.5)
									return 3.73;
								else
								{
									if(sinr < 20.5)
									{
										if(velocity < 14.16)
										{
											if(rsrp < -79)
											{
												if(sinr < 13.5)
													return 21.16;
												else
													return 8.4;
											}
											else
											{
												if(velocity < 10.325)
												{
													if(rsrq < -7.5)
														return 11.63;
													else
													{
														if(payload < 0.75)
															return 5.4;
														else
														{
															if(sinr < 13.5)
																return 7.37;
															else
																return 8.8;
														}
													}
												}
												else
												{
													if(velocity < 12.975)
													{
														if(velocity < 11.3)
															return 9.24;
														else
														{
															if(rsrp < -74.5)
																return 9.36;
															else
																return 10.8633333333;
														}
													}
													else
														return 9.51;
												}
											}
										}
										else
										{
											if(f < 1384.5)
												return 2.52;
											else
											{
												if(rsrq < -7)
													return 11.43;
												else
												{
													if(velocity < 17.555)
													{
														if(payload < 0.75)
															return 6.02;
														else
															return 7.58;
													}
													else
													{
														if(payload < 0.75)
															return 8.6;
														else
															return 9.28;
													}
												}
											}
										}
									}
									else
									{
										if(velocity < 6.91)
										{
											if(rsrp < -75.5)
											{
												if(velocity < 0.67)
												{
													if(rsrp < -78)
														return 10.77;
													else
													{
														if(rsrq < -7)
															return 9.72;
														else
															return 8.37;
													}
												}
												else
													return 8.544;
											}
											else
											{
												if(rsrp < -71)
												{
													if(sinr < 30.5)
													{
														if(rsrp < -73)
															return 6.51;
														else
															return 8.3;
													}
													else
														return 9.4;
												}
												else
													return 6.07;
											}
										}
										else
										{
											if(velocity < 9.175)
											{
												if(sinr < 25.5)
													return 12.46;
												else
													return 21.11;
											}
											else
											{
												if(payload < 0.75)
												{
													if(sinr < 25.5)
													{
														if(rsrp < -70.5)
															return 9.73;
														else
															return 8.03;
													}
													else
													{
														if(rsrq < -5.5)
															return 10.47;
														else
														{
															if(velocity < 13.815)
																return 11.49;
															else
																return 9.8;
														}
													}
												}
												else
												{
													if(sinr < 27)
													{
														if(velocity < 15.645)
														{
															if(rsrp < -72.5)
															{
																if(sinr < 23)
																{
																	if(rsrp < -76.5)
																		return 10.83;
																	else
																		return 7.46;
																}
																else
																	return 12.18;
															}
															else
																return 17.94;
														}
														else
															return 19.8;
													}
													else
														return 10.36;
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
					return 22.22;
			}
			else
			{
				if(rsrp < -80.5)
				{
					if(payload < 2.5)
					{
						if(velocity < 8.205)
						{
							if(rsrp < -83.5)
							{
								if(rsrp < -84.5)
								{
									if(f < 2232.5)
									{
										if(rsrp < -85.5)
											return 7.21;
										else
											return 7.88;
									}
									else
									{
										if(rsrp < -87.5)
											return 9;
										else
										{
											if(rsrq < -8)
												return 10.32;
											else
												return 9.79;
										}
									}
								}
								else
									return 11.25;
							}
							else
								return 7.1633333333;
						}
						else
						{
							if(velocity < 13.725)
							{
								if(velocity < 12.42)
								{
									if(rsrp < -84)
									{
										if(rsrp < -86.5)
											return 14;
										else
											return 15.3;
									}
									else
									{
										if(f < 2232.5)
											return 17.78;
										else
											return 13.99;
									}
								}
								else
								{
									if(rsrq < -6)
									{
										if(velocity < 13.085)
											return 14.02;
										else
										{
											if(rsrp < -85.5)
												return 13.41;
											else
												return 15.53;
										}
									}
									else
										return 11.635;
								}
							}
							else
							{
								if(velocity < 21.735)
								{
									if(velocity < 13.88)
										return 6.86;
									else
									{
										if(velocity < 17.5)
										{
											if(sinr < 18)
											{
												if(sinr < 13.5)
												{
													if(f < 2232.5)
														return 10.7;
													else
														return 11.85;
												}
												else
												{
													if(rsrp < -81.5)
														return 13.9266666667;
													else
														return 12.71;
												}
											}
											else
											{
												if(sinr < 28.5)
												{
													if(rsrq < -5.5)
														return 8.21;
													else
														return 6.19;
												}
												else
												{
													if(rsrq < -5.5)
														return 12.49;
													else
														return 12.99;
												}
											}
										}
										else
										{
											if(rsrq < -5.5)
											{
												if(rsrp < -85)
													return 8.76;
												else
													return 9.35;
											}
											else
												return 10.14;
										}
									}
								}
								else
								{
									if(rsrq < -6.5)
										return 12.23;
									else
									{
										if(velocity < 24.66)
											return 13.99;
										else
											return 16.18;
									}
								}
							}
						}
					}
					else
					{
						if(sinr < 26.5)
						{
							if(velocity < 12.73)
							{
								if(sinr < 11.5)
								{
									if(rsrp < -85.5)
									{
										if(velocity < 8.29)
											return 11.13;
										else
											return 8.79;
									}
									else
										return 11.78;
								}
								else
								{
									if(sinr < 14)
										return 16.33;
									else
									{
										if(rsrp < -83.5)
										{
											if(rsrp < -86)
											{
												if(sinr < 19)
													return 11.53;
												else
													return 12.9;
											}
											else
											{
												if(velocity < 10.56)
												{
													if(sinr < 17.5)
														return 14.92;
													else
													{
														if(rsrp < -84.5)
															return 12.76;
														else
														{
															if(rsrq < -6)
																return 15.32;
															else
																return 13.78;
														}
													}
												}
												else
													return 12.42;
											}
										}
										else
										{
											if(rsrp < -82.5)
											{
												if(sinr < 25)
													return 10.15;
												else
													return 10.66;
											}
											else
											{
												if(rsrq < -5.5)
												{
													if(velocity < 8.435)
														return 13.96;
													else
														return 12.54;
												}
												else
													return 10.62;
											}
										}
									}
								}
							}
							else
							{
								if(velocity < 14.13)
								{
									if(rsrp < -86.5)
										return 16.51;
									else
									{
										if(sinr < 20)
											return 13.48;
										else
											return 22.41;
									}
								}
								else
								{
									if(rsrq < -5.5)
									{
										if(sinr < 2.5)
										{
											if(sinr < 1.5)
												return 7.01;
											else
												return 10.05;
										}
										else
										{
											if(sinr < 22.5)
											{
												if(velocity < 14.54)
												{
													if(sinr < 16)
														return 12.82;
													else
													{
														if(sinr < 20)
															return 13.58;
														else
															return 12.85;
													}
												}
												else
												{
													if(rsrp < -82.5)
													{
														if(sinr < 17)
															return 11.63;
														else
															return 10.02;
													}
													else
														return 13.66;
												}
											}
											else
											{
												if(sinr < 24.5)
													return 14.71;
												else
													return 15.83;
											}
										}
									}
									else
									{
										if(rsrp < -83)
											return 13.59;
										else
										{
											if(sinr < 15.5)
												return 17.48;
											else
												return 14.846;
										}
									}
								}
							}
						}
						else
							return 25;
					}
				}
				else
				{
					if(velocity < 9.815)
					{
						if(rsrp < -75.5)
						{
							if(sinr < 25)
							{
								if(sinr < 19)
								{
									if(velocity < 4.4)
										return 22.12;
									else
										return 21.47;
								}
								else
								{
									if(sinr < 21.5)
										return 9.62;
									else
										return 13.68;
								}
							}
							else
								return 24.42;
						}
						else
						{
							if(rsrp < -69.5)
							{
								if(rsrp < -70.5)
								{
									if(sinr < 17.5)
										return 15.09;
									else
									{
										if(rsrq < -5.5)
											return 13.505;
										else
											return 12.41;
									}
								}
								else
								{
									if(f < 2232.5)
										return 6.98;
									else
										return 9;
								}
							}
							else
							{
								if(velocity < 1.255)
									return 11.19;
								else
									return 22.54;
							}
						}
					}
					else
					{
						if(velocity < 15.6)
						{
							if(sinr < 10.5)
								return 25.52;
							else
							{
								if(sinr < 17.5)
								{
									if(velocity < 12.45)
										return 8.64;
									else
									{
										if(sinr < 16.5)
										{
											if(sinr < 13.5)
												return 13.2775;
											else
											{
												if(payload < 2.5)
												{
													if(rsrq < -6)
														return 13.45;
													else
														return 14.39;
												}
												else
													return 15.5433333333;
											}
										}
										else
											return 20.43;
									}
								}
								else
								{
									if(velocity < 13.82)
									{
										if(velocity < 11.975)
										{
											if(rsrp < -76.5)
											{
												if(payload < 2.5)
												{
													if(sinr < 20.5)
														return 10.54;
													else
														return 8.97;
												}
												else
													return 13.07;
											}
											else
												return 8.67;
										}
										else
										{
											if(rsrq < -5.5)
												return 11.51;
											else
											{
												if(rsrp < -74.5)
													return 14.72;
												else
													return 13.75;
											}
										}
									}
									else
									{
										if(rsrp < -76)
											return 10.15;
										else
										{
											if(payload < 2.5)
												return 8.43;
											else
												return 7.12;
										}
									}
								}
							}
						}
						else
						{
							if(sinr < 32.5)
							{
								if(velocity < 15.655)
									return 21.51;
								else
								{
									if(sinr < 20.5)
									{
										if(rsrp < -78.5)
											return 17.72;
										else
											return 18.22;
									}
									else
									{
										if(velocity < 28.31)
										{
											if(rsrp < -76.5)
												return 14.75;
											else
											{
												if(rsrp < -74.5)
													return 13.47;
												else
													return 14.185;
											}
										}
										else
											return 13.46;
									}
								}
							}
							else
								return 22.84;
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
			if(rsrq < -10.5)
			{
				if(f < 1384.5)
				{
					if(payload < 4.5)
					{
						if(velocity < 7.47)
							return 2.46;
						else
							return 1.6766666667;
					}
					else
					{
						if(payload < 6)
							return 7.62;
						else
							return 4.97;
					}
				}
				else
				{
					if(velocity < 15.01)
					{
						if(payload < 7.5)
						{
							if(rsrq < -12.5)
							{
								if(payload < 5.5)
									return 8.98;
								else
								{
									if(velocity < 2.18)
									{
										if(sinr < -1)
											return 3.63;
										else
											return 5.17;
									}
									else
									{
										if(velocity < 11.405)
										{
											if(rsrp < -96.5)
											{
												if(payload < 6.5)
													return 9.32;
												else
													return 6.59;
											}
											else
												return 18;
										}
										else
											return 4.8;
									}
								}
							}
							else
							{
								if(sinr < 3.5)
								{
									if(rsrp < -95.5)
									{
										if(velocity < 12.155)
										{
											if(rsrp < -98)
												return 9.0875;
											else
											{
												if(payload < 5.5)
													return 11.51;
												else
													return 8.81;
											}
										}
										else
										{
											if(payload < 5.5)
											{
												if(rsrp < -102)
													return 6.01;
												else
												{
													if(velocity < 13.805)
														return 4.75;
													else
														return 5.39;
												}
											}
											else
											{
												if(rsrq < -11.5)
													return 8.7;
												else
												{
													if(rsrp < -99)
														return 6.54;
													else
														return 5.945;
												}
											}
										}
									}
									else
									{
										if(rsrp < -94.5)
											return 15.39;
										else
										{
											if(payload < 5.5)
												return 9.32;
											else
											{
												if(sinr < -3)
													return 9.87;
												else
												{
													if(payload < 6.5)
													{
														if(sinr < 1.5)
															return 10.47;
														else
															return 12.31;
													}
													else
													{
														if(rsrp < -89)
															return 13.52;
														else
															return 11.85;
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
										{
											if(velocity < 4.905)
												return 10.5033333333;
											else
												return 10.2066666667;
										}
										else
										{
											if(payload < 6.5)
												return 9.89;
											else
												return 10.39;
										}
									}
									else
									{
										if(payload < 4.5)
											return 11.96;
										else
											return 12.91;
									}
								}
							}
						}
						else
						{
							if(rsrp < -96.5)
							{
								if(rsrq < -11.5)
								{
									if(sinr < -2.5)
									{
										if(velocity < 3.32)
											return 21.81;
										else
											return 14.515;
									}
									else
									{
										if(sinr < -1)
											return 13.82;
										else
											return 10.28;
									}
								}
								else
								{
									if(velocity < 12.32)
									{
										if(payload < 8.5)
											return 13.35;
										else
										{
											if(velocity < 0.955)
											{
												if(rsrp < -110)
													return 9.46;
												else
													return 6.06;
											}
											else
											{
												if(velocity < 11.19)
												{
													if(sinr < 3.5)
													{
														if(rsrp < -97.5)
															return 11.385;
														else
															return 9.47;
													}
													else
													{
														if(sinr < 4.5)
															return 12.72;
														else
															return 13.5;
													}
												}
												else
													return 9.19;
											}
										}
									}
									else
									{
										if(sinr < -0.5)
										{
											if(velocity < 12.985)
												return 15.59;
											else
												return 18.13;
										}
										else
										{
											if(rsrp < -105)
												return 8.93;
											else
												return 10.38;
										}
									}
								}
							}
							else
							{
								if(rsrp < -95.5)
									return 22.2;
								else
								{
									if(velocity < 9.28)
									{
										if(rsrq < -12)
											return 10.58;
										else
										{
											if(payload < 9.5)
												return 10.89;
											else
												return 12.49;
										}
									}
									else
									{
										if(rsrp < -93.5)
											return 16.21;
										else
											return 14.12;
									}
								}
							}
						}
					}
					else
					{
						if(velocity < 15.775)
							return 20.84;
						else
						{
							if(velocity < 16.765)
								return 6.93;
							else
							{
								if(payload < 7.5)
								{
									if(sinr < 8.5)
										return 16.16;
									else
										return 19.58;
								}
								else
								{
									if(velocity < 17.28)
									{
										if(rsrp < -97.5)
											return 10.4;
										else
											return 11.89;
									}
									else
									{
										if(sinr < -1.5)
										{
											if(rsrp < -100.5)
												return 14.37;
											else
												return 17.54;
										}
										else
										{
											if(rsrp < -91)
												return 14.02;
											else
												return 15.92;
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
					if(rsrp < -96.5)
					{
						if(velocity < 6.89)
						{
							if(rsrp < -106.5)
							{
								if(sinr < -1.5)
								{
									if(rsrq < -9.5)
										return 4.65;
									else
										return 2.21;
								}
								else
									return 11.97;
							}
							else
								return 2.8725;
						}
						else
						{
							if(sinr < 6.5)
							{
								if(velocity < 21.51)
								{
									if(velocity < 14.65)
									{
										if(payload < 4.5)
										{
											if(sinr < 5.5)
											{
												if(rsrp < -98)
												{
													if(rsrq < -9.5)
														return 4.8;
													else
														return 2.98;
												}
												else
													return 5.77;
											}
											else
												return 10.5;
										}
										else
										{
											if(velocity < 12.925)
											{
												if(f < 2232.5)
												{
													if(rsrq < -8.5)
													{
														if(rsrq < -9.5)
															return 9.86;
														else
															return 10.47;
													}
													else
														return 7.28;
												}
												else
													return 11.3;
											}
											else
											{
												if(rsrq < -9.5)
													return 5.42;
												else
													return 6.93;
											}
										}
									}
									else
									{
										if(rsrp < -104)
											return 10.22;
										else
										{
											if(rsrp < -101)
												return 11.42;
											else
												return 12.57;
										}
									}
								}
								else
								{
									if(velocity < 31.395)
									{
										if(rsrp < -105)
										{
											if(payload < 4.5)
												return 5.47;
											else
												return 5.96;
										}
										else
											return 5.09;
									}
									else
										return 6.89;
								}
							}
							else
							{
								if(rsrp < -97.5)
								{
									if(payload < 4.5)
									{
										if(rsrq < -8.5)
										{
											if(velocity < 13.615)
												return 14.38;
											else
												return 8.8;
										}
										else
										{
											if(velocity < 13.035)
												return 4.32;
											else
												return 14.79;
										}
									}
									else
									{
										if(sinr < 10)
										{
											if(sinr < 7.5)
												return 12.53;
											else
												return 15.0466666667;
										}
										else
											return 5.43;
									}
								}
								else
								{
									if(sinr < 11.5)
										return 18.28;
									else
									{
										if(rsrq < -9)
											return 14.19;
										else
											return 14.91;
									}
								}
							}
						}
					}
					else
					{
						if(rsrp < -87.5)
						{
							if(velocity < 25.64)
							{
								if(rsrp < -92.5)
								{
									if(f < 2232.5)
									{
										if(sinr < 20)
										{
											if(sinr < 14.5)
											{
												if(velocity < 6.73)
												{
													if(rsrq < -8.5)
													{
														if(rsrp < -95)
															return 13.26;
														else
															return 14.31;
													}
													else
													{
														if(payload < 4.5)
															return 8.85;
														else
															return 9.74;
													}
												}
												else
												{
													if(sinr < 7.5)
														return 16.1675;
													else
													{
														if(sinr < 10.5)
														{
															if(rsrp < -93.5)
																return 11.83;
															else
																return 15.44;
														}
														else
															return 12.72;
													}
												}
											}
											else
												return 22.14;
										}
										else
										{
											if(rsrp < -93.5)
											{
												if(velocity < 5.56)
													return 13.16;
												else
													return 15.75;
											}
											else
												return 10.36;
										}
									}
									else
									{
										if(payload < 4.5)
											return 17.34;
										else
											return 22.06;
									}
								}
								else
								{
									if(payload < 4.5)
									{
										if(sinr < 0)
											return 10.03;
										else
										{
											if(rsrp < -89.5)
											{
												if(sinr < 4.5)
													return 15.86;
												else
												{
													if(rsrq < -8.5)
													{
														if(velocity < 11.305)
															return 13.34;
														else
														{
															if(velocity < 12.565)
																return 10.49;
															else
																return 9.35;
														}
													}
													else
													{
														if(sinr < 8)
															return 13.14;
														else
															return 15.59;
													}
												}
											}
											else
											{
												if(sinr < 2.5)
													return 9.28;
												else
												{
													if(velocity < 8.265)
														return 11.41;
													else
														return 11.98;
												}
											}
										}
									}
									else
									{
										if(rsrp < -91)
										{
											if(sinr < 3.5)
												return 17.06;
											else
											{
												if(rsrq < -8.5)
													return 11.24;
												else
													return 10.39;
											}
										}
										else
										{
											if(velocity < 13.695)
											{
												if(sinr < 19.5)
													return 11.34;
												else
													return 7.58;
											}
											else
												return 11.68;
										}
									}
								}
							}
							else
								return 20.04;
						}
						else
						{
							if(sinr < 16.5)
							{
								if(payload < 4.5)
								{
									if(velocity < 13.46)
									{
										if(sinr < 3.5)
											return 20.55;
										else
										{
											if(velocity < 10.34)
												return 14.53;
											else
												return 16.57;
										}
									}
									else
									{
										if(velocity < 21.98)
										{
											if(rsrp < -82.5)
												return 10.02;
											else
												return 8.04;
										}
										else
											return 14.25;
									}
								}
								else
								{
									if(velocity < 14.065)
									{
										if(velocity < 10.095)
										{
											if(velocity < 4.335)
												return 14.79;
											else
												return 20.94;
										}
										else
										{
											if(rsrq < -8.5)
												return 14.49;
											else
												return 15.13;
										}
									}
									else
									{
										if(velocity < 23.095)
											return 22.98;
										else
										{
											if(rsrq < -9)
												return 18.29;
											else
												return 13.82;
										}
									}
								}
							}
							else
							{
								if(f < 1342.5)
									return 13.74;
								else
								{
									if(velocity < 13.35)
									{
										if(sinr < 31.5)
										{
											if(sinr < 17.5)
												return 23.84;
											else
											{
												if(rsrp < -80)
													return 17.29;
												else
												{
													if(payload < 4.5)
													{
														if(rsrq < -8.5)
															return 19.83;
														else
															return 20.65;
													}
													else
														return 18.76;
												}
											}
										}
										else
											return 25.86;
									}
									else
										return 22.94;
								}
							}
						}
					}
				}
				else
				{
					if(rsrp < -103)
					{
						if(payload < 6.5)
						{
							if(rsrp < -107.5)
							{
								if(velocity < 5.47)
									return 2.91;
								else
									return 14.22;
							}
							else
							{
								if(rsrp < -105)
									return 8.73;
								else
									return 10.55;
							}
						}
						else
						{
							if(rsrq < -8.5)
							{
								if(velocity < 3.35)
									return 4.79;
								else
								{
									if(rsrp < -108)
										return 21.99;
									else
									{
										if(velocity < 9.005)
											return 19.02;
										else
										{
											if(payload < 9.5)
											{
												if(payload < 8.5)
												{
													if(velocity < 15.01)
													{
														if(rsrp < -105.5)
															return 12.06;
														else
															return 9.62;
													}
													else
														return 14.7;
												}
												else
												{
													if(rsrq < -9.5)
													{
														if(rsrp < -105.5)
															return 9.7;
														else
															return 8.74;
													}
													else
														return 11.79;
												}
											}
											else
												return 14.98;
										}
									}
								}
							}
							else
							{
								if(rsrp < -106)
								{
									if(rsrp < -108)
										return 8.82;
									else
									{
										if(sinr < 3)
											return 5.74;
										else
											return 6.42;
									}
								}
								else
								{
									if(sinr < 8.5)
										return 8.15;
									else
										return 12.62;
								}
							}
						}
					}
					else
					{
						if(rsrp < -89.5)
						{
							if(rsrq < -8.5)
							{
								if(rsrp < -90.5)
								{
									if(velocity < 16.765)
									{
										if(velocity < 9.55)
										{
											if(rsrq < -9.5)
											{
												if(rsrp < -91.5)
												{
													if(payload < 7.5)
													{
														if(sinr < 3.5)
															return 17.91;
														else
														{
															if(sinr < 6.5)
																return 16.38;
															else
																return 17.4;
														}
													}
													else
													{
														if(velocity < 0.515)
														{
															if(payload < 8.5)
																return 11.05;
															else
																return 12.49;
														}
														else
														{
															if(payload < 8.5)
																return 14.72;
															else
																return 16.86;
														}
													}
												}
												else
													return 11.97;
											}
											else
											{
												if(velocity < 1.875)
												{
													if(sinr < 3)
														return 13.25;
													else
													{
														if(payload < 8.5)
														{
															if(sinr < 13)
															{
																if(rsrp < -97)
																	return 15.79;
																else
																	return 14.4;
															}
															else
																return 14.16;
														}
														else
														{
															if(sinr < 10)
																return 17.435;
															else
																return 16.68;
														}
													}
												}
												else
												{
													if(payload < 6.5)
														return 10.23;
													else
													{
														if(velocity < 5.17)
															return 13.03;
														else
														{
															if(payload < 8.5)
																return 11.65;
															else
																return 13.54;
														}
													}
												}
											}
										}
										else
										{
											if(velocity < 12.075)
											{
												if(payload < 9.5)
												{
													if(payload < 7.5)
														return 12.2225;
													else
													{
														if(velocity < 11.625)
														{
															if(rsrp < -96.5)
															{
																if(rsrp < -98)
																	return 8.57;
																else
																	return 9.2;
															}
															else
																return 10.8;
														}
														else
															return 11.3;
													}
												}
												else
													return 15.5;
											}
											else
											{
												if(sinr < 5.5)
												{
													if(velocity < 14.735)
													{
														if(velocity < 13.46)
														{
															if(payload < 9)
																return 10.36;
															else
																return 10.94;
														}
														else
														{
															if(rsrp < -98.5)
																return 10.61;
															else
																return 14.21;
														}
													}
													else
													{
														if(velocity < 16.065)
														{
															if(payload < 8)
																return 17.59;
															else
																return 20.69;
														}
														else
														{
															if(rsrp < -97.5)
																return 12.24;
															else
																return 7.92;
														}
													}
												}
												else
												{
													if(payload < 8.5)
													{
														if(velocity < 15.3)
														{
															if(payload < 7.5)
																return 21.16;
															else
															{
																if(rsrp < -97)
																	return 18.53;
																else
																	return 17.29;
															}
														}
														else
															return 14.44;
													}
													else
													{
														if(velocity < 14.145)
															return 11.05;
														else
															return 7.74;
													}
												}
											}
										}
									}
									else
									{
										if(rsrq < -9.5)
										{
											if(sinr < -0.5)
												return 14.39;
											else
											{
												if(sinr < 3)
													return 16.53;
												else
												{
													if(rsrp < -97)
														return 18.35;
													else
														return 16.98;
												}
											}
										}
										else
										{
											if(rsrp < -92.5)
												return 19.444;
											else
												return 22.55;
										}
									}
								}
								else
								{
									if(f < 1384.5)
										return 3.12;
									else
										return 14;
								}
							}
							else
							{
								if(sinr < 6.5)
								{
									if(sinr < 0)
									{
										if(payload < 7.5)
										{
											if(rsrp < -97)
												return 16.26;
											else
												return 20.64;
										}
										else
											return 18.39;
									}
									else
									{
										if(payload < 7.5)
										{
											if(payload < 6.5)
											{
												if(sinr < 4.5)
												{
													if(sinr < 3.5)
													{
														if(velocity < 10.105)
															return 11.07;
														else
															return 10.57;
													}
													else
														return 16.68;
												}
												else
													return 7.27;
											}
											else
											{
												if(velocity < 7.105)
												{
													if(rsrp < -94.5)
														return 4.54;
													else
														return 13.12;
												}
												else
												{
													if(velocity < 24.89)
														return 9.74;
													else
														return 7.38;
												}
											}
										}
										else
										{
											if(rsrp < -101.5)
												return 10.91;
											else
											{
												if(velocity < 11.39)
												{
													if(payload < 8.5)
														return 23.05;
													else
														return 20.28;
												}
												else
												{
													if(sinr < 5.5)
													{
														if(sinr < 1.5)
															return 14.79;
														else
														{
															if(velocity < 13.215)
															{
																if(sinr < 3.5)
																	return 14.67;
																else
																	return 16.64;
															}
															else
																return 10.6066666667;
														}
													}
													else
													{
														if(f < 2232.5)
														{
															if(velocity < 15.28)
															{
																if(rsrp < -98.5)
																	return 13.73;
																else
																	return 16.78;
															}
															else
																return 19.93;
														}
														else
															return 14.58;
													}
												}
											}
										}
									}
								}
								else
								{
									if(velocity < 3.77)
									{
										if(rsrp < -98.5)
											return 18.33;
										else
										{
											if(sinr < 9)
												return 10.6033333333;
											else
											{
												if(payload < 6.5)
												{
													if(rsrp < -92.5)
													{
														if(sinr < 15)
															return 9.9;
														else
															return 8.76;
													}
													else
														return 15.58;
												}
												else
													return 21.66;
											}
										}
									}
									else
									{
										if(velocity < 7.32)
										{
											if(velocity < 6.575)
												return 20.6;
											else
												return 24.3;
										}
										else
										{
											if(sinr < 21.5)
											{
												if(rsrp < -100.5)
													return 11.46;
												else
												{
													if(sinr < 15)
													{
														if(rsrp < -97)
														{
															if(payload < 9.5)
															{
																if(velocity < 12.78)
																	return 16.56;
																else
																	return 21.25;
															}
															else
															{
																if(rsrp < -98.5)
																	return 19.98;
																else
																	return 23.44;
															}
														}
														else
														{
															if(rsrp < -90.5)
															{
																if(sinr < 11)
																{
																	if(sinr < 7.5)
																		return 14.31;
																	else
																	{
																		if(rsrp < -91.5)
																			return 15.58;
																		else
																			return 16.35;
																	}
																}
																else
																{
																	if(sinr < 13.5)
																		return 17.8166666667;
																	else
																		return 19.61;
																}
															}
															else
															{
																if(velocity < 10.43)
																	return 19.398;
																else
																	return 22.76;
															}
														}
													}
													else
													{
														if(rsrp < -90.5)
															return 24.1233333333;
														else
															return 17.98;
													}
												}
											}
											else
											{
												if(payload < 8.5)
													return 10.4;
												else
													return 14.64;
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
								if(f < 1342.5)
								{
									if(payload < 9)
									{
										if(payload < 7)
											return 17.17;
										else
											return 10.53;
									}
									else
										return 4.55;
								}
								else
								{
									if(sinr < 5.5)
									{
										if(rsrq < -9.5)
											return 13.6733333333;
										else
										{
											if(payload < 8.5)
											{
												if(sinr < -0.5)
													return 18.87;
												else
												{
													if(sinr < 3.5)
														return 15.44;
													else
														return 14.5;
												}
											}
											else
												return 20.82;
										}
									}
									else
									{
										if(rsrp < -74.5)
										{
											if(rsrp < -88.5)
											{
												if(sinr < 10.5)
													return 18.2;
												else
													return 16.64;
											}
											else
											{
												if(velocity < 11.585)
												{
													if(velocity < 3.66)
													{
														if(sinr < 16)
															return 18.4;
														else
														{
															if(rsrp < -84.5)
																return 15.09;
															else
																return 14.11;
														}
													}
													else
													{
														if(velocity < 8.875)
														{
															if(payload < 7.5)
																return 18;
															else
															{
																if(velocity < 8.065)
																	return 21.94;
																else
																	return 23.69;
															}
														}
														else
														{
															if(rsrp < -81.5)
															{
																if(payload < 7)
																	return 17.69;
																else
																	return 18.31;
															}
															else
																return 17.47;
														}
													}
												}
												else
												{
													if(rsrp < -83.5)
													{
														if(velocity < 13.225)
														{
															if(payload < 7.5)
																return 23.22;
															else
																return 25.46;
														}
														else
														{
															if(sinr < 19.5)
															{
																if(sinr < 14)
																	return 21.47;
																else
																	return 12.38;
															}
															else
															{
																if(payload < 7)
																	return 20.32;
																else
																	return 25.47;
															}
														}
													}
													else
													{
														if(payload < 9.5)
														{
															if(rsrp < -81.5)
																return 22.46;
															else
																return 24.19;
														}
														else
															return 25.91;
													}
												}
											}
										}
										else
										{
											if(payload < 8.5)
												return 15.95;
											else
												return 17.95;
										}
									}
								}
							}
							else
							{
								if(payload < 9.5)
								{
									if(velocity < 15.11)
									{
										if(rsrp < -72.5)
										{
											if(velocity < 7.425)
											{
												if(sinr < 24.5)
												{
													if(rsrp < -84.5)
													{
														if(sinr < 15)
														{
															if(rsrp < -87)
																return 16.56;
															else
																return 15.08;
														}
														else
															return 14.79;
													}
													else
														return 18.52;
												}
												else
													return 24.48;
											}
											else
											{
												if(f < 2232.5)
												{
													if(payload < 7)
													{
														if(rsrp < -79.5)
															return 19.38;
														else
															return 18.11;
													}
													else
														return 23.23;
												}
												else
												{
													if(rsrp < -87)
													{
														if(payload < 7.5)
														{
															if(rsrp < -88.5)
																return 16.88;
															else
																return 22.27;
														}
														else
															return 24.56;
													}
													else
													{
														if(rsrp < -84.5)
															return 16.77;
														else
															return 16.03;
													}
												}
											}
										}
										else
											return 14.0733333333;
									}
									else
									{
										if(payload < 7.5)
										{
											if(sinr < 10)
												return 18.7;
											else
											{
												if(payload < 6.5)
													return 23.53;
												else
													return 28.2;
											}
										}
										else
										{
											if(velocity < 21.72)
												return 26.89;
											else
												return 16.06;
										}
									}
								}
								else
								{
									if(sinr < 10.5)
										return 24.92;
									else
									{
										if(sinr < 19)
											return 14.4;
										else
											return 20.24;
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
			if(rsrp < -84.5)
			{
				if(payload < 6.5)
				{
					if(velocity < 33.085)
					{
						if(sinr < 7.5)
						{
							if(rsrp < -91.5)
							{
								if(f < 2232.5)
								{
									if(rsrp < -104.5)
										return 9.08;
									else
									{
										if(payload < 5)
										{
											if(rsrp < -96.5)
												return 6.23;
											else
												return 3.95;
										}
										else
										{
											if(rsrp < -92.5)
												return 6.76;
											else
												return 5.8;
										}
									}
								}
								else
								{
									if(velocity < 15.05)
									{
										if(rsrp < -93)
											return 13.17;
										else
											return 12.66;
									}
									else
										return 11.06;
								}
							}
							else
							{
								if(velocity < 16.24)
								{
									if(velocity < 10.595)
										return 10.68;
									else
									{
										if(payload < 4.5)
										{
											if(rsrp < -88)
												return 20.85;
											else
												return 15.53;
										}
										else
										{
											if(rsrq < -6.5)
												return 12.4;
											else
											{
												if(velocity < 13.69)
													return 15.08;
												else
													return 14.23;
											}
										}
									}
								}
								else
									return 8.95;
							}
						}
						else
						{
							if(sinr < 13.5)
							{
								if(sinr < 9.5)
								{
									if(payload < 5.5)
									{
										if(rsrq < -6.5)
										{
											if(rsrp < -91.5)
												return 12.51;
											else
												return 16.04;
										}
										else
										{
											if(rsrp < -92.5)
												return 10.31;
											else
											{
												if(rsrp < -87.5)
													return 14.3;
												else
													return 17.41;
											}
										}
									}
									else
									{
										if(rsrp < -87.5)
										{
											if(rsrp < -94)
												return 16.6;
											else
												return 17.21;
										}
										else
											return 18.99;
									}
								}
								else
								{
									if(rsrp < -85.5)
									{
										if(rsrp < -96)
										{
											if(rsrp < -98)
											{
												if(payload < 5.5)
												{
													if(sinr < 10.5)
														return 12.55;
													else
														return 14.98;
												}
												else
													return 19.34;
											}
											else
												return 16.42;
										}
										else
										{
											if(f < 2232.5)
											{
												if(velocity < 15.285)
												{
													if(payload < 4.5)
													{
														if(rsrp < -88)
														{
															if(velocity < 8.425)
																return 17.25;
															else
															{
																if(rsrq < -6.5)
																{
																	if(velocity < 10.31)
																		return 14.65;
																	else
																		return 17.37;
																}
																else
																{
																	if(rsrp < -89.5)
																		return 14.86;
																	else
																		return 15.63;
																}
															}
														}
														else
														{
															if(rsrq < -6.5)
																return 14.42;
															else
															{
																if(rsrp < -86.5)
																	return 11.61;
																else
																	return 12.39;
															}
														}
													}
													else
													{
														if(velocity < 2.2)
														{
															if(payload < 5.5)
																return 13.59;
															else
																return 16.41;
														}
														else
														{
															if(velocity < 10.035)
															{
																if(sinr < 10.5)
																	return 8.68;
																else
																	return 10.76;
															}
															else
															{
																if(payload < 5.5)
																{
																	if(rsrq < -6.5)
																		return 11.21;
																	else
																		return 14.63;
																}
																else
																	return 15.935;
															}
														}
													}
												}
												else
												{
													if(sinr < 12.5)
														return 16.4;
													else
														return 17.65;
												}
											}
											else
											{
												if(velocity < 12.345)
												{
													if(sinr < 11)
													{
														if(velocity < 5.475)
															return 9.7;
														else
														{
															if(rsrq < -6.5)
																return 15.73;
															else
																return 18.05;
														}
													}
													else
													{
														if(rsrp < -88)
														{
															if(payload < 5.5)
																return 13.85;
															else
																return 12.9433333333;
														}
														else
															return 14.38;
													}
												}
												else
												{
													if(velocity < 13.02)
														return 11.76;
													else
													{
														if(rsrq < -6.5)
															return 8.67;
														else
															return 9.8366666667;
													}
												}
											}
										}
									}
									else
									{
										if(f < 2232.5)
											return 17.72;
										else
										{
											if(rsrq < -6.5)
												return 18.9;
											else
											{
												if(velocity < 4.14)
												{
													if(payload < 4.5)
														return 13.24;
													else
														return 16.37;
												}
												else
													return 13.79;
											}
										}
									}
								}
							}
							else
							{
								if(rsrq < -5.5)
								{
									if(rsrp < -96)
									{
										if(sinr < 17.5)
											return 5.7;
										else
											return 10.17;
									}
									else
									{
										if(sinr < 18.5)
										{
											if(sinr < 16.5)
											{
												if(rsrp < -88.5)
												{
													if(rsrp < -92.5)
													{
														if(f < 2232.5)
															return 21.5;
														else
															return 17.57;
													}
													else
													{
														if(rsrq < -6.5)
															return 16.34;
														else
														{
															if(sinr < 15.5)
															{
																if(velocity < 18.6)
																	return 21.245;
																else
																	return 18.38;
															}
															else
															{
																if(velocity < 12.44)
																	return 17.74;
																else
																	return 18.6;
															}
														}
													}
												}
												else
												{
													if(f < 2232.5)
													{
														if(velocity < 2.59)
															return 20.52;
														else
														{
															if(rsrq < -6.5)
																return 12.9;
															else
																return 9.07;
														}
													}
													else
													{
														if(velocity < 2)
															return 14.05;
														else
														{
															if(sinr < 14.5)
																return 14.77;
															else
																return 23.88;
														}
													}
												}
											}
											else
											{
												if(f < 2232.5)
												{
													if(sinr < 17.5)
													{
														if(rsrp < -90)
															return 25.07;
														else
															return 25.75;
													}
													else
														return 19.3;
												}
												else
												{
													if(velocity < 9.59)
														return 22.91;
													else
														return 16.31;
												}
											}
										}
										else
										{
											if(velocity < 9.32)
											{
												if(velocity < 4.375)
												{
													if(sinr < 24.5)
													{
														if(rsrq < -6.5)
															return 19.06;
														else
														{
															if(rsrp < -89)
															{
																if(sinr < 22)
																{
																	if(sinr < 19.5)
																		return 16.65;
																	else
																		return 16.14;
																}
																else
																	return 21.19;
															}
															else
															{
																if(f < 2232.5)
																	return 15.75;
																else
																	return 14.54;
															}
														}
													}
													else
													{
														if(rsrp < -86)
														{
															if(rsrp < -88.5)
																return 13.36;
															else
																return 15.09;
														}
														else
															return 11.8166666667;
													}
												}
												else
												{
													if(sinr < 20)
														return 20.43;
													else
													{
														if(payload < 4.5)
															return 13.32;
														else
															return 12.03;
													}
												}
											}
											else
											{
												if(velocity < 10.465)
												{
													if(rsrp < -87.5)
														return 26.34;
													else
														return 16.86;
												}
												else
												{
													if(velocity < 14.925)
													{
														if(rsrp < -85.5)
														{
															if(velocity < 12.51)
															{
																if(velocity < 11.795)
																	return 16.35;
																else
																{
																	if(sinr < 20.5)
																		return 9.28;
																	else
																		return 12.37;
																}
															}
															else
															{
																if(velocity < 13.65)
																{
																	if(rsrp < -88)
																	{
																		if(rsrq < -6.5)
																			return 16.47;
																		else
																			return 18.93;
																	}
																	else
																		return 20.25;
																}
																else
																{
																	if(sinr < 27)
																	{
																		if(payload < 4.5)
																		{
																			if(rsrp < -86.5)
																				return 16.81;
																			else
																				return 15.22;
																		}
																		else
																			return 9.23;
																	}
																	else
																		return 17.54;
																}
															}
														}
														else
														{
															if(sinr < 21.5)
																return 19.13;
															else
															{
																if(velocity < 13.41)
																	return 20;
																else
																	return 16.66;
															}
														}
													}
													else
													{
														if(payload < 4.5)
															return 19.06;
														else
														{
															if(rsrq < -6.5)
																return 14.96;
															else
															{
																if(sinr < 22.5)
																	return 11.74;
																else
																{
																	if(rsrp < -90)
																		return 13.25;
																	else
																		return 12.36;
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
									if(f < 2232.5)
									{
										if(payload < 5.5)
										{
											if(sinr < 16.5)
											{
												if(payload < 4.5)
													return 15.85;
												else
													return 14.74;
											}
											else
												return 16.54;
										}
										else
											return 12.39;
									}
									else
									{
										if(rsrp < -90.5)
										{
											if(sinr < 16.5)
												return 12.04;
											else
											{
												if(payload < 4.5)
													return 9.28;
												else
													return 10.17;
											}
										}
										else
										{
											if(rsrp < -88)
												return 17.26;
											else
												return 16.33;
										}
									}
								}
							}
						}
					}
					else
					{
						if(velocity < 34.62)
							return 33.83;
						else
						{
							if(rsrq < -6.5)
							{
								if(rsrp < -91)
									return 17.69;
								else
									return 19.59;
							}
							else
							{
								if(rsrp < -97.5)
									return 16.06;
								else
									return 12.06;
							}
						}
					}
				}
				else
				{
					if(rsrp < -88.5)
					{
						if(sinr < 15.5)
						{
							if(sinr < 3.5)
								return 26.39;
							else
							{
								if(payload < 9.5)
								{
									if(sinr < 10.5)
									{
										if(sinr < 9.5)
										{
											if(sinr < 8.5)
											{
												if(payload < 8.5)
												{
													if(sinr < 4.5)
														return 16.22;
													else
													{
														if(velocity < 12.87)
														{
															if(velocity < 11.28)
															{
																if(velocity < 8.74)
																{
																	if(velocity < 5.715)
																		return 17.96;
																	else
																		return 16.64;
																}
																else
																	return 19.045;
															}
															else
																return 21.64;
														}
														else
														{
															if(velocity < 14.77)
																return 14.04;
															else
																return 18.28;
														}
													}
												}
												else
												{
													if(velocity < 5.61)
														return 10.06;
													else
														return 14.05;
												}
											}
											else
											{
												if(rsrp < -93.5)
												{
													if(rsrp < -95)
														return 23.42;
													else
														return 21.37;
												}
												else
												{
													if(payload < 7.5)
														return 13.35;
													else
													{
														if(rsrp < -92.5)
															return 17.31;
														else
														{
															if(rsrp < -91)
																return 19.39;
															else
																return 18.24;
														}
													}
												}
											}
										}
										else
										{
											if(velocity < 9.595)
												return 25.44;
											else
											{
												if(velocity < 13.285)
												{
													if(payload < 7.5)
														return 10.48;
													else
														return 8.11;
												}
												else
												{
													if(rsrp < -94)
														return 19.99;
													else
														return 13.65;
												}
											}
										}
									}
									else
									{
										if(rsrp < -97.5)
											return 22.64;
										else
										{
											if(velocity < 12.53)
											{
												if(velocity < 4.32)
												{
													if(rsrq < -6.5)
													{
														if(payload < 7.5)
														{
															if(f < 2232.5)
																return 15.77;
															else
																return 13.45;
														}
														else
														{
															if(rsrp < -90.5)
																return 20.83;
															else
																return 21.58;
														}
													}
													else
														return 24.12;
												}
												else
												{
													if(rsrq < -6.5)
													{
														if(payload < 8)
															return 13.18;
														else
															return 11.72;
													}
													else
													{
														if(f < 2232.5)
														{
															if(velocity < 10.645)
																return 19.41;
															else
																return 16.27;
														}
														else
														{
															if(rsrp < -92)
															{
																if(rsrp < -95)
																	return 18.14;
																else
																	return 15.23;
															}
															else
																return 11.79;
														}
													}
												}
											}
											else
											{
												if(f < 2232.5)
												{
													if(sinr < 12)
														return 28.21;
													else
													{
														if(payload < 8.5)
														{
															if(rsrp < -91)
																return 26.2;
															else
															{
																if(rsrp < -89.5)
																	return 20.59;
																else
																	return 18.58;
															}
														}
														else
															return 19.39;
													}
												}
												else
												{
													if(sinr < 12.5)
														return 20.99;
													else
														return 12.45;
												}
											}
										}
									}
								}
								else
								{
									if(velocity < 25.43)
									{
										if(sinr < 5.5)
										{
											if(sinr < 4.5)
												return 21.77;
											else
												return 30.4;
										}
										else
										{
											if(velocity < 12.595)
											{
												if(velocity < 4.485)
													return 25.84;
												else
												{
													if(velocity < 8.655)
														return 10.51;
													else
													{
														if(velocity < 9.89)
															return 21;
														else
														{
															if(sinr < 9)
																return 15.39;
															else
															{
																if(rsrp < -96.5)
																	return 19.56;
																else
																	return 18.01;
															}
														}
													}
												}
											}
											else
											{
												if(rsrp < -92)
												{
													if(sinr < 8)
														return 21.43;
													else
													{
														if(rsrq < -6.5)
															return 23.76;
														else
															return 21.75;
													}
												}
												else
													return 19.92;
											}
										}
									}
									else
										return 10.76;
								}
							}
						}
						else
						{
							if(payload < 8.5)
							{
								if(velocity < 2.88)
								{
									if(sinr < 29)
									{
										if(payload < 7.5)
										{
											if(rsrp < -90.5)
											{
												if(rsrp < -92)
													return 16.53;
												else
													return 15.6;
											}
											else
												return 10.62;
										}
										else
											return 10.03;
									}
									else
										return 24.02;
								}
								else
								{
									if(rsrp < -90.5)
									{
										if(rsrp < -91.5)
											return 23.47;
										else
											return 21.23;
									}
									else
									{
										if(velocity < 8.5)
											return 19.99;
										else
										{
											if(sinr < 17.5)
												return 16.46;
											else
												return 14.73;
										}
									}
								}
							}
							else
							{
								if(velocity < 11.015)
								{
									if(payload < 9.5)
									{
										if(f < 2232.5)
										{
											if(sinr < 24.5)
												return 19.43;
											else
												return 18.14;
										}
										else
										{
											if(rsrp < -90.5)
												return 22.29;
											else
												return 23.83;
										}
									}
									else
									{
										if(velocity < 4.985)
										{
											if(sinr < 21.5)
												return 20.02;
											else
												return 17.69;
										}
										else
											return 32.39;
									}
								}
								else
								{
									if(rsrp < -90.5)
										return 26.16;
									else
										return 30.06;
								}
							}
						}
					}
					else
					{
						if(payload < 8.5)
						{
							if(velocity < 23.345)
							{
								if(velocity < 9.695)
								{
									if(rsrq < -6.5)
									{
										if(payload < 7.5)
										{
											if(rsrp < -86)
												return 16.28;
											else
												return 14.82;
										}
										else
										{
											if(velocity < 6.395)
												return 18.13;
											else
												return 16.29;
										}
									}
									else
									{
										if(payload < 7.5)
										{
											if(sinr < 12.5)
												return 15.49;
											else
											{
												if(rsrp < -86)
												{
													if(sinr < 24)
													{
														if(rsrp < -87.5)
															return 24.73;
														else
															return 21.71;
													}
													else
														return 18.45;
												}
												else
												{
													if(sinr < 15.5)
														return 17.47;
													else
														return 18.29;
												}
											}
										}
										else
										{
											if(sinr < 21)
											{
												if(f < 2232.5)
													return 27.36;
												else
													return 24.44;
											}
											else
												return 21.05;
										}
									}
								}
								else
								{
									if(payload < 7.5)
									{
										if(f < 2232.5)
										{
											if(sinr < 9.5)
												return 16.58;
											else
											{
												if(velocity < 11.06)
													return 22.21;
												else
												{
													if(velocity < 18.84)
													{
														if(sinr < 12.5)
														{
															if(velocity < 13.67)
																return 20.5;
															else
																return 19.97;
														}
														else
															return 19.14;
													}
													else
														return 21.41;
												}
											}
										}
										else
											return 23.465;
									}
									else
									{
										if(sinr < 16)
										{
											if(sinr < 13.5)
											{
												if(f < 2232.5)
												{
													if(rsrp < -87.5)
														return 36.38;
													else
													{
														if(sinr < 9)
															return 20.81;
														else
															return 24.36;
													}
												}
												else
													return 12.4;
											}
											else
												return 28.01;
										}
										else
										{
											if(velocity < 13.645)
												return 16.71;
											else
												return 19.07;
										}
									}
								}
							}
							else
							{
								if(payload < 7.5)
								{
									if(rsrp < -87)
										return 12.96;
									else
									{
										if(velocity < 31.12)
											return 18.14;
										else
											return 13.72;
									}
								}
								else
									return 11.02;
							}
						}
						else
						{
							if(velocity < 11.135)
							{
								if(rsrp < -86.5)
								{
									if(sinr < 18.5)
									{
										if(velocity < 3.56)
										{
											if(payload < 9.5)
											{
												if(f < 2232.5)
													return 17.79;
												else
													return 23.14;
											}
											else
											{
												if(rsrp < -87.5)
													return 22.79;
												else
													return 24.38;
											}
										}
										else
										{
											if(rsrq < -6.5)
												return 23.8;
											else
											{
												if(rsrp < -87.5)
													return 18.7;
												else
													return 15.26;
											}
										}
									}
									else
									{
										if(sinr < 22.5)
											return 14.62;
										else
										{
											if(rsrq < -6.5)
												return 16.45;
											else
												return 17.24;
										}
									}
								}
								else
								{
									if(rsrq < -5.5)
									{
										if(rsrq < -6.5)
											return 20.13;
										else
										{
											if(velocity < 2.7)
											{
												if(payload < 9.5)
													return 22.8;
												else
													return 26.56;
											}
											else
											{
												if(velocity < 7.225)
												{
													if(velocity < 6.05)
														return 16.75;
													else
														return 19.41;
												}
												else
													return 26.6;
											}
										}
									}
									else
										return 27.71;
								}
							}
							else
							{
								if(velocity < 14.41)
								{
									if(rsrq < -5.5)
									{
										if(rsrp < -87.5)
											return 26.26;
										else
										{
											if(sinr < 11.5)
												return 29.04;
											else
												return 31.14;
										}
									}
									else
										return 41.78;
								}
								else
								{
									if(velocity < 30.485)
									{
										if(sinr < 22.5)
										{
											if(velocity < 22.64)
											{
												if(payload < 9.5)
													return 20.98;
												else
													return 22.25;
											}
											else
											{
												if(velocity < 26.33)
													return 16.75;
												else
													return 20.45;
											}
										}
										else
											return 26.21;
									}
									else
									{
										if(sinr < 13.5)
											return 28.26;
										else
											return 29.21;
									}
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
					if(payload < 4.5)
					{
						if(velocity < 5.01)
						{
							if(rsrp < -77)
								return 15.74;
							else
								return 13.68;
						}
						else
						{
							if(f < 1384.5)
								return 7.19;
							else
							{
								if(sinr < 15)
								{
									if(rsrp < -83.5)
										return 6.19;
									else
									{
										if(rsrp < -82.5)
											return 14.49;
										else
										{
											if(sinr < 12.5)
												return 10.06;
											else
												return 10.74;
										}
									}
								}
								else
								{
									if(f < 2232.5)
									{
										if(rsrp < -78)
										{
											if(velocity < 15.355)
												return 9.7;
											else
												return 16.72;
										}
										else
											return 13.14;
									}
									else
										return 8.13;
								}
							}
						}
					}
					else
					{
						if(payload < 6.5)
						{
							if(velocity < 15.815)
							{
								if(velocity < 15.215)
								{
									if(velocity < 11.885)
									{
										if(sinr < 13.5)
										{
											if(rsrp < -81.5)
												return 13.22;
											else
												return 12.53;
										}
										else
											return 18.04;
									}
									else
									{
										if(rsrp < -82)
											return 20.28;
										else
											return 18.0671428571;
									}
								}
								else
									return 10.67;
							}
							else
							{
								if(velocity < 25.715)
								{
									if(sinr < 15)
									{
										if(payload < 5.5)
											return 26.35;
										else
											return 21.88;
									}
									else
										return 29.74;
								}
								else
								{
									if(velocity < 34.71)
									{
										if(rsrp < -81.5)
											return 16.13;
										else
											return 17.24;
									}
									else
									{
										if(payload < 5.5)
											return 19.93;
										else
											return 19.43;
									}
								}
							}
						}
						else
						{
							if(rsrp < -74)
							{
								if(payload < 8.5)
								{
									if(velocity < 12.645)
									{
										if(sinr < 12.5)
										{
											if(payload < 7.5)
												return 16.74;
											else
												return 18.31;
										}
										else
											return 20.65;
									}
									else
									{
										if(velocity < 14.61)
										{
											if(sinr < 5)
											{
												if(velocity < 12.905)
													return 22.08;
												else
													return 24.46;
											}
											else
											{
												if(rsrq < -5.5)
													return 23.49;
												else
													return 16.59;
											}
										}
										else
										{
											if(payload < 7.5)
												return 27.28;
											else
											{
												if(velocity < 36.425)
													return 28.43;
												else
													return 20.96;
											}
										}
									}
								}
								else
								{
									if(rsrq < -6.5)
										return 20.84;
									else
									{
										if(velocity < 0.23)
											return 29.98;
										else
										{
											if(sinr < 13.5)
											{
												if(sinr < 10.5)
												{
													if(sinr < 8.5)
														return 25.7;
													else
														return 25.18;
												}
												else
												{
													if(payload < 9.5)
														return 26.06;
													else
														return 26.65;
												}
											}
											else
											{
												if(rsrp < -80.5)
												{
													if(rsrp < -81.5)
														return 24.15;
													else
														return 29.37;
												}
												else
													return 23.72;
											}
										}
									}
								}
							}
							else
							{
								if(payload < 8.5)
									return 16.3;
								else
									return 18.32;
							}
						}
					}
				}
				else
				{
					if(payload < 6.5)
					{
						if(f < 1384.5)
							return 11.59;
						else
						{
							if(payload < 4.5)
							{
								if(velocity < 17.01)
								{
									if(rsrq < -5.5)
									{
										if(rsrp < -69.5)
										{
											if(velocity < 11.205)
											{
												if(rsrp < -79)
													return 14.39;
												else
												{
													if(rsrp < -73)
														return 17.45;
													else
														return 16.01;
												}
											}
											else
												return 17.41;
										}
										else
											return 10.91;
									}
									else
									{
										if(rsrp < -72.5)
										{
											if(sinr < 26)
											{
												if(sinr < 20.5)
												{
													if(rsrp < -79)
														return 20.3;
													else
													{
														if(rsrp < -77)
															return 17.09;
														else
															return 15.62;
													}
												}
												else
												{
													if(rsrp < -81.5)
														return 19.1;
													else
														return 18.35;
												}
											}
											else
											{
												if(sinr < 27.5)
												{
													if(velocity < 14.425)
														return 12;
													else
														return 17.12;
												}
												else
													return 17.72;
											}
										}
										else
											return 21.33;
									}
								}
								else
								{
									if(rsrq < -6.5)
										return 9.2;
									else
									{
										if(sinr < 34.5)
										{
											if(sinr < 29)
											{
												if(velocity < 20.57)
												{
													if(rsrp < -77)
														return 7.92;
													else
														return 12.32;
												}
												else
												{
													if(rsrq < -4.5)
													{
														if(sinr < 21.5)
														{
															if(rsrp < -80.5)
																return 15.79;
															else
																return 17.2;
														}
														else
															return 19.34;
													}
													else
														return 14.26;
												}
											}
											else
												return 16.75;
										}
										else
											return 19.54;
									}
								}
							}
							else
							{
								if(sinr < 35)
								{
									if(sinr < 31.5)
									{
										if(f < 2232.5)
										{
											if(velocity < 35.23)
											{
												if(sinr < 23.5)
												{
													if(rsrp < -76.5)
													{
														if(sinr < 20.5)
														{
															if(payload < 5.5)
															{
																if(sinr < 17.5)
																	return 13.5;
																else
																{
																	if(sinr < 19)
																		return 20.92;
																	else
																		return 14.96;
																}
															}
															else
																return 13.33;
														}
														else
														{
															if(rsrp < -80.5)
															{
																if(sinr < 21.5)
																	return 24.95;
																else
																{
																	if(velocity < 14.535)
																	{
																		if(velocity < 10.845)
																		{
																			if(rsrp < -83.5)
																				return 19.02;
																			else
																			{
																				if(rsrp < -82)
																					return 17.93;
																				else
																					return 17.19;
																			}
																		}
																		else
																			return 23.3;
																	}
																	else
																	{
																		if(rsrq < -5.5)
																			return 13.9;
																		else
																			return 20.11;
																	}
																}
															}
															else
															{
																if(rsrq < -5.5)
																	return 18.42;
																else
																	return 27.38;
															}
														}
													}
													else
													{
														if(sinr < 21)
															return 27.91;
														else
														{
															if(velocity < 12.64)
																return 18.22;
															else
																return 21.12;
														}
													}
												}
												else
												{
													if(rsrp < -78)
													{
														if(velocity < 16.12)
														{
															if(sinr < 28.5)
															{
																if(velocity < 14.075)
																{
																	if(sinr < 24.5)
																		return 14.46;
																	else
																		return 15.95;
																}
																else
																	return 13.64;
															}
															else
																return 17.48;
														}
														else
														{
															if(sinr < 27)
																return 15.33;
															else
															{
																if(rsrq < -4.5)
																	return 17.73;
																else
																	return 20.38;
															}
														}
													}
													else
													{
														if(velocity < 3.805)
														{
															if(rsrp < -73)
															{
																if(rsrp < -76.5)
																{
																	if(payload < 5.5)
																		return 18.54;
																	else
																		return 26.91;
																}
																else
																	return 18.48;
															}
															else
																return 13.81;
														}
														else
														{
															if(rsrq < -4.5)
															{
																if(payload < 5.5)
																{
																	if(sinr < 26.5)
																		return 18.89;
																	else
																	{
																		if(rsrp < -70.5)
																			return 18.26;
																		else
																			return 22.1;
																	}
																}
																else
																{
																	if(velocity < 14.655)
																	{
																		if(rsrp < -73)
																			return 20.17;
																		else
																			return 22.93;
																	}
																	else
																	{
																		if(rsrp < -72)
																			return 22.46;
																		else
																			return 29.18;
																	}
																}
															}
															else
																return 17.9;
														}
													}
												}
											}
											else
												return 29.24;
										}
										else
										{
											if(velocity < 13.345)
											{
												if(rsrp < -82.5)
													return 9.63;
												else
												{
													if(velocity < 8.23)
														return 14.54;
													else
														return 11.39;
												}
											}
											else
												return 15.66;
										}
									}
									else
									{
										if(rsrp < -74.5)
										{
											if(rsrq < -4.5)
											{
												if(payload < 5.5)
													return 14.76;
												else
													return 24.1;
											}
											else
												return 38.17;
										}
										else
											return 20.7;
									}
								}
								else
								{
									if(velocity < 10.765)
										return 15.89;
									else
										return 10.89;
								}
							}
						}
					}
					else
					{
						if(f < 2232.5)
						{
							if(velocity < 1.38)
							{
								if(sinr < 20)
								{
									if(rsrq < -5.5)
										return 16.01;
									else
										return 23.93;
								}
								else
								{
									if(payload < 8.5)
									{
										if(rsrp < -72.5)
										{
											if(rsrp < -82)
												return 18.31;
											else
											{
												if(rsrp < -78.5)
												{
													if(rsrp < -80)
														return 22.54;
													else
														return 24.37;
												}
												else
												{
													if(rsrq < -5.5)
													{
														if(rsrp < -77.5)
															return 19.05;
														else
															return 20.56;
													}
													else
													{
														if(rsrp < -77.5)
															return 20.4;
														else
															return 22.06;
													}
												}
											}
										}
										else
										{
											if(rsrq < -6)
												return 24.42;
											else
												return 25.16;
										}
									}
									else
									{
										if(rsrq < -5.5)
										{
											if(sinr < 31.5)
											{
												if(rsrp < -77)
													return 23.21;
												else
												{
													if(sinr < 30)
														return 21.81;
													else
														return 16.99;
												}
											}
											else
												return 27.22;
										}
										else
										{
											if(payload < 9.5)
												return 33.15;
											else
												return 29.35;
										}
									}
								}
							}
							else
							{
								if(velocity < 2.755)
									return 34.74;
								else
								{
									if(payload < 9.5)
									{
										if(sinr < 26)
										{
											if(sinr < 24.5)
											{
												if(velocity < 14.285)
												{
													if(velocity < 12.5)
													{
														if(velocity < 11.93)
														{
															if(rsrp < -74)
															{
																if(velocity < 4.875)
																	return 18.6;
																else
																{
																	if(velocity < 7.3)
																		return 22.82;
																	else
																	{
																		if(sinr < 19)
																			return 21.24;
																		else
																			return 19.1066666667;
																	}
																}
															}
															else
															{
																if(sinr < 20)
																{
																	if(sinr < 18)
																		return 29.08;
																	else
																		return 22.32;
																}
																else
																{
																	if(rsrq < -5.5)
																		return 30.1;
																	else
																		return 31.15;
																}
															}
														}
														else
															return 38.15;
													}
													else
													{
														if(payload < 8.5)
														{
															if(rsrq < -4.5)
															{
																if(rsrp < -78.5)
																{
																	if(velocity < 13.68)
																		return 23.59;
																	else
																		return 20.06;
																}
																else
																{
																	if(payload < 7.5)
																		return 17.1933333333;
																	else
																		return 19.34;
																}
															}
															else
																return 23.38;
														}
														else
															return 25.54;
													}
												}
												else
												{
													if(sinr < 19.5)
													{
														if(payload < 8.5)
														{
															if(velocity < 14.705)
																return 38.39;
															else
															{
																if(rsrp < -83.5)
																	return 22.08;
																else
																{
																	if(rsrq < -5.5)
																		return 27.67;
																	else
																		return 28.34;
																}
															}
														}
														else
															return 37.23;
													}
													else
													{
														if(payload < 8)
														{
															if(rsrq < -5.5)
																return 26.19;
															else
																return 28.69;
														}
														else
														{
															if(velocity < 28.15)
																return 12.58;
															else
															{
																if(velocity < 32.75)
																	return 22.88;
																else
																	return 27.51;
															}
														}
													}
												}
											}
											else
											{
												if(rsrp < -77.5)
												{
													if(rsrq < -5.5)
													{
														if(rsrp < -80.5)
															return 32.02;
														else
														{
															if(velocity < 8.675)
																return 22.29;
															else
															{
																if(velocity < 12.55)
																	return 32.33;
																else
																	return 26.42;
															}
														}
													}
													else
													{
														if(rsrp < -80)
															return 33.78;
														else
															return 26.6;
													}
												}
												else
													return 20.51;
											}
										}
										else
										{
											if(sinr < 29.5)
											{
												if(rsrp < -78.5)
													return 26.27;
												else
												{
													if(rsrp < -76.5)
														return 14.8;
													else
													{
														if(payload < 8.5)
														{
															if(payload < 7.5)
																return 22.0583333333;
															else
															{
																if(rsrp < -74)
																	return 22.11;
																else
																	return 19.195;
															}
														}
														else
														{
															if(velocity < 12.825)
																return 20.68;
															else
															{
																if(velocity < 22.23)
																{
																	if(velocity < 13.985)
																		return 28.54;
																	else
																		return 24.9;
																}
																else
																	return 29.13;
															}
														}
													}
												}
											}
											else
											{
												if(velocity < 31.01)
												{
													if(velocity < 11.61)
													{
														if(rsrq < -5.5)
														{
															if(sinr < 35.5)
																return 17.76;
															else
																return 20.25;
														}
														else
															return 23.39;
													}
													else
													{
														if(rsrp < -79.5)
														{
															if(payload < 8.5)
																return 19.78;
															else
																return 21.92;
														}
														else
														{
															if(payload < 8.5)
															{
																if(rsrp < -73)
																{
																	if(rsrp < -74.5)
																	{
																		if(rsrp < -77)
																			return 26.6;
																		else
																			return 25.84;
																	}
																	else
																		return 27.55;
																}
																else
																	return 22.9;
															}
															else
															{
																if(sinr < 31.5)
																	return 27.97;
																else
																	return 29.15;
															}
														}
													}
												}
												else
													return 43.01;
											}
										}
									}
									else
									{
										if(sinr < 18)
											return 39.04;
										else
										{
											if(f < 1384.5)
												return 4.46;
											else
											{
												if(rsrp < -75.5)
												{
													if(velocity < 12.5)
													{
														if(sinr < 30.5)
															return 22.5;
														else
															return 19.76;
													}
													else
													{
														if(velocity < 24.575)
														{
															if(velocity < 20.44)
															{
																if(rsrq < -5.5)
																{
																	if(sinr < 30.5)
																		return 30.38;
																	else
																		return 31.91;
																}
																else
																{
																	if(velocity < 16.14)
																		return 25.89;
																	else
																		return 28.57;
																}
															}
															else
																return 33.68;
														}
														else
														{
															if(rsrq < -5.5)
																return 24.54;
															else
																return 23.41;
														}
													}
												}
												else
												{
													if(rsrq < -6.5)
														return 34.72;
													else
													{
														if(sinr < 27.5)
															return 32.92;
														else
														{
															if(rsrp < -69.5)
																return 24.44;
															else
															{
																if(sinr < 30)
																	return 30.48;
																else
																	return 34.74;
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
							if(rsrp < -82.5)
								return 8.88;
							else
							{
								if(payload < 8)
									return 13.53;
								else
								{
									if(sinr < 20.5)
										return 15.19;
									else
									{
										if(payload < 9.5)
											return 20.28;
										else
											return 19.33;
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

float tmobile_dl_ns3_tree_6(float payload, float rsrp, float rsrq, float sinr, float velocity, float f)
{
	if(rsrp < -88.5)
	{
		if(payload < 3.5)
		{
			if(rsrp < -93.5)
			{
				if(rsrp < -99.5)
				{
					if(rsrq < -8.5)
					{
						if(velocity < 17.675)
						{
							if(velocity < 12.9)
							{
								if(rsrq < -13.5)
								{
									if(rsrp < -106.5)
										return 1.91;
									else
										return 0.72;
								}
								else
								{
									if(rsrp < -102.5)
									{
										if(payload < 0.75)
										{
											if(sinr < -3)
												return 2.87;
											else
												return 0.9025;
										}
										else
										{
											if(payload < 1.5)
												return 2.5;
											else
											{
												if(sinr < -2.5)
													return 2.78;
												else
													return 3.265;
											}
										}
									}
									else
									{
										if(payload < 0.75)
										{
											if(sinr < 0.5)
												return 6.78;
											else
											{
												if(velocity < 5.43)
												{
													if(rsrp < -100.5)
														return 4.1;
													else
														return 2.95;
												}
												else
												{
													if(velocity < 11.815)
														return 5;
													else
														return 4.26;
												}
											}
										}
										else
										{
											if(rsrp < -101.5)
											{
												if(velocity < 0.455)
													return 4.56;
												else
													return 5.03;
											}
											else
												return 6.13;
										}
									}
								}
							}
							else
							{
								if(f < 1384.5)
									return 0.54;
								else
								{
									if(velocity < 14.34)
									{
										if(velocity < 14.255)
										{
											if(payload < 0.75)
											{
												if(rsrp < -103)
												{
													if(rsrp < -105)
														return 3.51;
													else
														return 2.57;
												}
												else
												{
													if(sinr < -4)
														return 4.68;
													else
													{
														if(velocity < 13.125)
															return 3.22;
														else
														{
															if(rsrp < -101.5)
															{
																if(velocity < 13.325)
																	return 4.42;
																else
																	return 2.93;
															}
															else
																return 4.27;
														}
													}
												}
											}
											else
											{
												if(rsrq < -9.5)
												{
													if(rsrp < -109)
														return 6.22;
													else
													{
														if(rsrq < -10.5)
														{
															if(payload < 2)
															{
																if(sinr < -3)
																	return 4.82;
																else
																	return 5.39;
															}
															else
																return 4.53;
														}
														else
															return 6.31;
													}
												}
												else
												{
													if(rsrp < -104)
														return 7.63;
													else
														return 8.95;
												}
											}
										}
										else
										{
											if(sinr < 1)
												return 11.59;
											else
												return 9.03;
										}
									}
									else
									{
										if(sinr < 3.5)
										{
											if(rsrq < -10.5)
											{
												if(sinr < 1)
												{
													if(sinr < -3.5)
														return 4.605;
													else
													{
														if(velocity < 16.39)
														{
															if(payload < 2.5)
															{
																if(payload < 1.5)
																{
																	if(rsrp < -102)
																		return 3.03;
																	else
																		return 3.57;
																}
																else
																	return 3.99;
															}
															else
																return 2.6;
														}
														else
															return 1.735;
													}
												}
												else
												{
													if(rsrp < -103)
														return 5.3;
													else
														return 4.19;
												}
											}
											else
											{
												if(payload < 2)
												{
													if(sinr < 1)
													{
														if(payload < 0.75)
															return 6;
														else
															return 5.1;
													}
													else
														return 4;
												}
												else
													return 10.98;
											}
										}
										else
										{
											if(rsrp < -105)
												return 1.31;
											else
											{
												if(payload < 1.25)
													return 2.44;
												else
													return 4.655;
											}
										}
									}
								}
							}
						}
						else
						{
							if(rsrq < -15.5)
								return 0.84;
							else
							{
								if(rsrq < -9.5)
								{
									if(rsrq < -10.5)
									{
										if(rsrp < -102)
										{
											if(rsrp < -107.5)
												return 8.01;
											else
												return 6.88;
										}
										else
											return 4.6;
									}
									else
									{
										if(rsrp < -104.5)
											return 6.62;
										else
										{
											if(sinr < 3)
												return 7.74;
											else
												return 8.35;
										}
									}
								}
								else
								{
									if(sinr < 7)
										return 3.72;
									else
										return 6.02;
								}
							}
						}
					}
					else
					{
						if(rsrp < -106.5)
						{
							if(sinr < 6.5)
								return 3.27;
							else
							{
								if(velocity < 10.86)
									return 7.46;
								else
									return 12.69;
							}
						}
						else
						{
							if(velocity < 35.78)
							{
								if(velocity < 13.525)
								{
									if(sinr < 8)
									{
										if(rsrp < -103.5)
											return 9.55;
										else
											return 8.25;
									}
									else
									{
										if(rsrq < -7.5)
										{
											if(payload < 2)
												return 8.37;
											else
												return 5.67;
										}
										else
											return 2.6;
									}
								}
								else
								{
									if(rsrq < -6.5)
									{
										if(payload < 0.75)
										{
											if(sinr < 10)
											{
												if(rsrp < -104.5)
													return 2.48;
												else
													return 1.45;
											}
											else
												return 2.95;
										}
										else
										{
											if(rsrp < -100.5)
											{
												if(rsrq < -7.5)
													return 5.56;
												else
												{
													if(rsrp < -104)
														return 5.36;
													else
													{
														if(sinr < 6)
															return 5.07;
														else
															return 4.31;
													}
												}
											}
											else
												return 6.92;
										}
									}
									else
									{
										if(velocity < 22.67)
											return 4.18;
										else
										{
											if(rsrp < -102)
												return 10.28;
											else
												return 9.51;
										}
									}
								}
							}
							else
								return 13.58;
						}
					}
				}
				else
				{
					if(sinr < -7.5)
						return 11.58;
					else
					{
						if(rsrq < -13.5)
							return 13.48;
						else
						{
							if(f < 2232.5)
							{
								if(velocity < 34.025)
								{
									if(velocity < 9.635)
									{
										if(sinr < -1.5)
											return 38.1;
										else
										{
											if(sinr < 18.5)
											{
												if(rsrq < -10.5)
												{
													if(rsrq < -11.5)
													{
														if(sinr < 3)
															return 7.82;
														else
															return 4.3;
													}
													else
													{
														if(sinr < 5)
															return 2.935;
														else
															return 4.76;
													}
												}
												else
												{
													if(payload < 0.3)
													{
														if(rsrp < -95.5)
														{
															if(sinr < 15.5)
																return 3.05;
															else
																return 5.16;
														}
														else
															return 6.67;
													}
													else
													{
														if(rsrp < -98.5)
														{
															if(payload < 0.75)
															{
																if(velocity < 4.34)
																{
																	if(rsrq < -8.5)
																		return 10.42;
																	else
																		return 7.75;
																}
																else
																	return 13.65;
															}
															else
															{
																if(velocity < 7.15)
																{
																	if(sinr < 3)
																		return 7.1;
																	else
																		return 5.76;
																}
																else
																	return 9.69;
															}
														}
														else
														{
															if(velocity < 8.21)
															{
																if(rsrp < -97.5)
																{
																	if(rsrq < -7.5)
																	{
																		if(sinr < 3.5)
																			return 3.17;
																		else
																			return 4.29;
																	}
																	else
																	{
																		if(payload < 1.75)
																			return 6.71;
																		else
																			return 11.74;
																	}
																}
																else
																{
																	if(sinr < 12)
																	{
																		if(sinr < 8.5)
																		{
																			if(sinr < 3.5)
																			{
																				if(payload < 1.25)
																					return 7.71;
																				else
																					return 8.24;
																			}
																			else
																			{
																				if(rsrq < -8.5)
																				{
																					if(payload < 2)
																						return 6.28;
																					else
																						return 6.92;
																				}
																				else
																					return 6.72;
																			}
																		}
																		else
																		{
																			if(rsrq < -7.5)
																			{
																				if(rsrp < -94.5)
																					return 11.03;
																				else
																					return 15.41;
																			}
																			else
																				return 9.64;
																		}
																	}
																	else
																	{
																		if(rsrq < -7.5)
																		{
																			if(sinr < 13.5)
																				return 10.24;
																			else
																				return 6.19;
																		}
																		else
																			return 3.27;
																	}
																}
															}
															else
															{
																if(velocity < 9.22)
																{
																	if(velocity < 8.4)
																		return 4.89;
																	else
																	{
																		if(rsrq < -7.5)
																			return 3.23;
																		else
																			return 4.06;
																	}
																}
																else
																{
																	if(sinr < 4.5)
																		return 7.08;
																	else
																		return 8.065;
																}
															}
														}
													}
												}
											}
											else
												return 10.8;
										}
									}
									else
									{
										if(velocity < 31.175)
										{
											if(velocity < 23.94)
											{
												if(payload < 1.5)
												{
													if(rsrq < -11.5)
													{
														if(payload < 0.75)
															return 7.29;
														else
															return 9.22;
													}
													else
													{
														if(rsrq < -8.5)
														{
															if(rsrp < -97.5)
															{
																if(sinr < 5.5)
																{
																	if(velocity < 14.975)
																	{
																		if(rsrq < -9.5)
																		{
																			if(rsrp < -98.5)
																				return 4.15;
																			else
																				return 3.53;
																		}
																		else
																		{
																			if(rsrp < -98.5)
																				return 7.05;
																			else
																				return 8.47;
																		}
																	}
																	else
																		return 7.4766666667;
																}
																else
																{
																	if(velocity < 13.795)
																		return 4.05;
																	else
																		return 2.71;
																}
															}
															else
															{
																if(payload < 0.75)
																{
																	if(payload < 0.3)
																	{
																		if(rsrq < -10.5)
																		{
																			if(velocity < 14.505)
																				return 4.47;
																			else
																				return 3.14;
																		}
																		else
																			return 3.25;
																	}
																	else
																	{
																		if(sinr < 1.5)
																			return 3.92;
																		else
																			return 8.6;
																	}
																}
																else
																{
																	if(velocity < 14.5)
																	{
																		if(rsrq < -10)
																			return 4.54;
																		else
																			return 3.67;
																	}
																	else
																	{
																		if(velocity < 16.185)
																		{
																			if(sinr < 1.5)
																				return 3.06;
																			else
																				return 2.12;
																		}
																		else
																			return 3.15;
																	}
																}
															}
														}
														else
														{
															if(sinr < 7.5)
																return 11.75;
															else
															{
																if(velocity < 14.795)
																{
																	if(velocity < 13.73)
																	{
																		if(payload < 0.3)
																		{
																			if(velocity < 12.865)
																				return 4.1725;
																			else
																				return 2.32;
																		}
																		else
																		{
																			if(rsrq < -7.5)
																				return 5.81;
																			else
																				return 6.49;
																		}
																	}
																	else
																	{
																		if(rsrp < -97)
																			return 6.26;
																		else
																			return 8.99;
																	}
																}
																else
																	return 3.14;
															}
														}
													}
												}
												else
												{
													if(sinr < 4.5)
													{
														if(velocity < 13.4)
														{
															if(rsrq < -9.5)
																return 10.51;
															else
																return 17.32;
														}
														else
														{
															if(rsrp < -98.5)
																return 14.74;
															else
															{
																if(rsrp < -96.5)
																{
																	if(rsrq < -10.5)
																		return 7.76;
																	else
																		return 4.4;
																}
																else
																	return 10.88;
															}
														}
													}
													else
													{
														if(velocity < 12.775)
														{
															if(velocity < 11.29)
																return 5.784;
															else
																return 5.24;
														}
														else
														{
															if(payload < 2.5)
																return 2.56;
															else
															{
																if(velocity < 14.685)
																	return 3.87;
																else
																	return 4.8933333333;
															}
														}
													}
												}
											}
											else
												return 0.33;
										}
										else
											return 10.81;
									}
								}
								else
									return 0.29;
							}
							else
							{
								if(rsrq < -7.5)
								{
									if(sinr < 4)
									{
										if(rsrq < -10.5)
											return 6.82;
										else
											return 8.96;
									}
									else
									{
										if(payload < 0.75)
											return 4.11;
										else
											return 5.67;
									}
								}
								else
								{
									if(payload < 2.5)
									{
										if(sinr < 9.5)
											return 7.46;
										else
											return 9.7333333333;
									}
									else
									{
										if(sinr < 7.5)
											return 9.48;
										else
										{
											if(sinr < 20.5)
												return 11.67;
											else
												return 10.54;
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
				if(velocity < 12.705)
				{
					if(payload < 1.5)
					{
						if(payload < 0.3)
						{
							if(sinr < 18)
							{
								if(rsrq < -9.5)
								{
									if(sinr < 1.5)
										return 5.52;
									else
									{
										if(rsrq < -10.5)
											return 5.3;
										else
										{
											if(rsrp < -89.5)
												return 4.23;
											else
												return 3.7;
										}
									}
								}
								else
								{
									if(velocity < 1.6)
									{
										if(rsrp < -89.5)
										{
											if(rsrp < -90.5)
											{
												if(rsrp < -92)
													return 4.82;
												else
												{
													if(rsrq < -8)
														return 4.94;
													else
														return 3.88;
												}
											}
											else
												return 3.6;
										}
										else
										{
											if(f < 2232.5)
												return 5.06;
											else
												return 5.56;
										}
									}
									else
									{
										if(rsrp < -91.5)
										{
											if(rsrp < -92.5)
												return 5.67;
											else
											{
												if(rsrq < -6.5)
													return 4.49;
												else
													return 5.03;
											}
										}
										else
										{
											if(rsrp < -90.5)
											{
												if(sinr < 8)
													return 7.08;
												else
													return 5.7266666667;
											}
											else
											{
												if(sinr < 4.5)
													return 6.3;
												else
												{
													if(velocity < 11.605)
														return 5.37;
													else
														return 6.06;
												}
											}
										}
									}
								}
							}
							else
							{
								if(sinr < 20)
								{
									if(rsrq < -7)
									{
										if(f < 2232.5)
											return 4.79;
										else
											return 3.94;
									}
									else
										return 2.74;
								}
								else
								{
									if(velocity < 5.72)
									{
										if(sinr < 23)
											return 7.02;
										else
											return 4.85;
									}
									else
										return 2.62;
								}
							}
						}
						else
						{
							if(rsrq < -5.5)
							{
								if(velocity < 1.37)
								{
									if(rsrq < -7.5)
									{
										if(payload < 0.75)
										{
											if(sinr < 16)
												return 7.03;
											else
												return 5.19;
										}
										else
											return 4.87;
									}
									else
									{
										if(sinr < 20)
										{
											if(rsrp < -91.5)
												return 12.08;
											else
											{
												if(sinr < 12)
													return 8.78;
												else
													return 9.66;
											}
										}
										else
											return 6.5;
									}
								}
								else
								{
									if(velocity < 6.17)
									{
										if(rsrp < -91)
										{
											if(rsrp < -92.5)
												return 5.77;
											else
												return 4.205;
										}
										else
										{
											if(rsrp < -89.5)
												return 6.55;
											else
												return 4.62;
										}
									}
									else
									{
										if(velocity < 11.365)
										{
											if(sinr < 30.5)
											{
												if(rsrq < -8.5)
													return 6;
												else
												{
													if(rsrp < -92.5)
														return 6.57;
													else
													{
														if(rsrp < -89.5)
														{
															if(velocity < 8.275)
																return 6.35;
															else
															{
																if(sinr < 12.5)
																{
																	if(velocity < 9.825)
																		return 7.45;
																	else
																	{
																		if(rsrq < -6.5)
																			return 8.26;
																		else
																			return 8.81;
																	}
																}
																else
																{
																	if(velocity < 10.125)
																		return 8.58;
																	else
																		return 7.16;
																}
															}
														}
														else
															return 6.6;
													}
												}
											}
											else
												return 5.54;
										}
										else
										{
											if(rsrq < -6.5)
											{
												if(rsrp < -91)
													return 5.28;
												else
													return 4.6766666667;
											}
											else
												return 8.08;
										}
									}
								}
							}
							else
							{
								if(f < 2232.5)
									return 6.9;
								else
									return 8.84;
							}
						}
					}
					else
					{
						if(rsrq < -5.5)
						{
							if(sinr < 13.5)
							{
								if(f < 2232.5)
								{
									if(rsrq < -9)
									{
										if(rsrp < -89.5)
										{
											if(velocity < 3.99)
											{
												if(payload < 2.5)
													return 12.44;
												else
													return 11.98;
											}
											else
												return 13.59;
										}
										else
											return 7.36;
									}
									else
									{
										if(velocity < 9.56)
										{
											if(velocity < 8.705)
											{
												if(rsrq < -7.5)
												{
													if(rsrp < -89.5)
														return 9.205;
													else
														return 6.95;
												}
												else
												{
													if(sinr < 10.5)
													{
														if(sinr < 8)
															return 12.47;
														else
															return 11.13;
													}
													else
														return 8.27;
												}
											}
											else
												return 5.99;
										}
										else
										{
											if(rsrp < -90.5)
												return 12.5033333333;
											else
												return 10.96;
										}
									}
								}
								else
								{
									if(velocity < 4.49)
										return 11.02;
									else
									{
										if(sinr < 11.5)
											return 8.905;
										else
										{
											if(payload < 2.5)
												return 5.88;
											else
												return 6.98;
										}
									}
								}
							}
							else
							{
								if(sinr < 15.5)
								{
									if(rsrq < -6.5)
										return 14.56;
									else
										return 15.07;
								}
								else
								{
									if(rsrq < -8)
										return 6.39;
									else
									{
										if(rsrp < -92.5)
											return 8.66;
										else
										{
											if(velocity < 9.57)
											{
												if(payload < 2.5)
												{
													if(velocity < 4.395)
														return 13.11;
													else
														return 11.55;
												}
												else
													return 13.39;
											}
											else
											{
												if(sinr < 25)
													return 10.945;
												else
													return 9.74;
											}
										}
									}
								}
							}
						}
						else
						{
							if(velocity < 11.15)
								return 7.05;
							else
								return 4.84;
						}
					}
				}
				else
				{
					if(payload < 1.5)
					{
						if(f < 1384.5)
							return 0.85;
						else
						{
							if(payload < 0.75)
							{
								if(sinr < 14.5)
								{
									if(sinr < 9)
									{
										if(payload < 0.3)
										{
											if(velocity < 14.715)
												return 5.52;
											else
												return 6.61;
										}
										else
										{
											if(rsrp < -91.5)
												return 2.03;
											else
												return 4.33;
										}
									}
									else
									{
										if(rsrp < -89.5)
										{
											if(rsrp < -90.5)
											{
												if(payload < 0.3)
												{
													if(rsrq < -8)
														return 8.42;
													else
														return 6.67;
												}
												else
													return 6.27;
											}
											else
												return 7.78;
										}
										else
											return 9.37;
									}
								}
								else
								{
									if(rsrp < -89.5)
									{
										if(rsrp < -91.5)
											return 2.46;
										else
											return 3.39;
									}
									else
										return 4.6;
								}
							}
							else
							{
								if(velocity < 12.89)
									return 12.88;
								else
								{
									if(velocity < 28.685)
									{
										if(sinr < 13)
										{
											if(sinr < 5)
											{
												if(sinr < 0.5)
													return 9.62;
												else
													return 7.65;
											}
											else
											{
												if(sinr < 8)
													return 4.6;
												else
												{
													if(rsrq < -6.5)
														return 6.28;
													else
														return 7.01;
												}
											}
										}
										else
										{
											if(sinr < 15)
												return 7.87;
											else
												return 9.45;
										}
									}
									else
										return 13.63;
								}
							}
						}
					}
					else
					{
						if(rsrq < -10)
						{
							if(rsrq < -11.5)
								return 6.64;
							else
								return 1.24;
						}
						else
						{
							if(velocity < 13.37)
							{
								if(sinr < 1.5)
									return 7.76;
								else
								{
									if(sinr < 4.5)
										return 13.49;
									else
									{
										if(sinr < 8.5)
											return 15;
										else
											return 15.95;
									}
								}
							}
							else
							{
								if(velocity < 13.81)
									return 6.89;
								else
								{
									if(velocity < 15.34)
									{
										if(payload < 2.5)
										{
											if(velocity < 14.195)
												return 13.4;
											else
											{
												if(velocity < 14.545)
													return 9.51;
												else
													return 10.11;
											}
										}
										else
										{
											if(rsrp < -91.5)
												return 15.36;
											else
											{
												if(rsrq < -7.5)
													return 14.69;
												else
												{
													if(f < 2232.5)
														return 11.4;
													else
														return 12.7;
												}
											}
										}
									}
									else
									{
										if(payload < 2.5)
										{
											if(velocity < 15.715)
												return 9.13;
											else
											{
												if(rsrp < -91)
													return 12.95;
												else
													return 11.42;
											}
										}
										else
										{
											if(velocity < 15.47)
												return 11.33;
											else
												return 3.58;
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
				if(f < 1384.5)
				{
					if(sinr < 7)
					{
						if(sinr < 0)
							return 1.8;
						else
							return 2.49;
					}
					else
						return 3.12;
				}
				else
				{
					if(rsrp < -100.5)
					{
						if(payload < 5.5)
						{
							if(velocity < 13.675)
							{
								if(sinr < -1.5)
								{
									if(velocity < 7.55)
									{
										if(rsrq < -11)
											return 4.19;
										else
											return 4.65;
									}
									else
										return 3.54;
								}
								else
								{
									if(payload < 4.5)
									{
										if(rsrq < -10.5)
										{
											if(sinr < 2)
												return 15.79;
											else
												return 18.33;
										}
										else
										{
											if(velocity < 10.86)
												return 10.5;
											else
												return 4.8;
										}
									}
									else
									{
										if(rsrp < -104.5)
										{
											if(sinr < 7)
											{
												if(sinr < 2)
													return 11.97;
												else
													return 9.86;
											}
											else
												return 14.92;
										}
										else
										{
											if(rsrq < -10)
												return 5.78;
											else
											{
												if(rsrp < -103)
													return 2.96;
												else
													return 10.47;
											}
										}
									}
								}
							}
							else
							{
								if(rsrp < -102)
								{
									if(sinr < -0.5)
										return 13.71;
									else
									{
										if(velocity < 19.67)
										{
											if(payload < 4.5)
											{
												if(rsrq < -11.5)
													return 7.88;
												else
												{
													if(rsrq < -10)
														return 6.01;
													else
														return 6.72;
												}
											}
											else
											{
												if(rsrp < -104)
													return 6.93;
												else
													return 11.56;
											}
										}
										else
											return 5.74;
									}
								}
								else
									return 5.39;
							}
						}
						else
						{
							if(velocity < 2.5)
							{
								if(payload < 8.5)
								{
									if(payload < 6.5)
									{
										if(sinr < 13.5)
											return 12.12;
										else
											return 18.33;
									}
									else
									{
										if(rsrp < -110.5)
											return 13.35;
										else
										{
											if(rsrp < -105.5)
												return 8.11;
											else
												return 11.095;
										}
									}
								}
								else
								{
									if(rsrq < -11.5)
										return 9.29;
									else
									{
										if(rsrp < -106)
										{
											if(sinr < 3)
												return 5.74;
											else
												return 6.24;
										}
										else
											return 4.79;
									}
								}
							}
							else
							{
								if(sinr < -2.5)
								{
									if(payload < 7)
										return 9.32;
									else
									{
										if(payload < 9.5)
											return 21.93;
										else
											return 18.13;
									}
								}
								else
								{
									if(rsrp < -101.5)
									{
										if(velocity < 12.455)
										{
											if(sinr < 1)
											{
												if(payload < 9)
													return 19.02;
												else
													return 13.82;
											}
											else
											{
												if(velocity < 10.37)
												{
													if(velocity < 7.455)
														return 10.6;
													else
														return 8.735;
												}
												else
												{
													if(rsrq < -10)
														return 13.5;
													else
														return 14.22;
												}
											}
										}
										else
										{
											if(rsrp < -108)
												return 8.82;
											else
											{
												if(rsrq < -9)
												{
													if(velocity < 14.325)
													{
														if(rsrq < -12.5)
															return 11.91;
														else
														{
															if(payload < 9.5)
															{
																if(velocity < 14.28)
																	return 9.6885714286;
																else
																	return 7.62;
															}
															else
																return 10.28;
														}
													}
													else
													{
														if(rsrq < -11.5)
															return 13.44;
														else
														{
															if(velocity < 25.735)
															{
																if(payload < 7.5)
																{
																	if(payload < 6.5)
																		return 10.68;
																	else
																		return 12.06;
																}
																else
																	return 10.38;
															}
															else
																return 9.23;
														}
													}
												}
												else
													return 12.62;
											}
										}
									}
									else
									{
										if(payload < 6.5)
											return 6.54;
										else
										{
											if(sinr < 9.5)
											{
												if(payload < 7.5)
													return 17.4;
												else
												{
													if(velocity < 10.58)
														return 9.47;
													else
													{
														if(payload < 9.5)
															return 16.56;
														else
															return 14.79;
													}
												}
											}
											else
												return 11.46;
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
							if(sinr < -1.5)
							{
								if(rsrq < -10.5)
								{
									if(velocity < 12.05)
									{
										if(velocity < 10.805)
										{
											if(rsrp < -96.5)
												return 8.89;
											else
												return 9.87;
										}
										else
											return 10.6;
									}
									else
									{
										if(rsrq < -11.5)
											return 9.28;
										else
											return 5.08;
									}
								}
								else
								{
									if(payload < 4.5)
										return 5.39;
									else
									{
										if(payload < 6.5)
										{
											if(rsrq < -9)
												return 10.59;
											else
												return 13.2;
										}
										else
											return 14.39;
									}
								}
							}
							else
							{
								if(velocity < 1.765)
								{
									if(velocity < 0.395)
										return 22.21;
									else
									{
										if(payload < 8.5)
											return 19.79;
										else
											return 16.86;
									}
								}
								else
								{
									if(rsrq < -8.5)
									{
										if(payload < 8.5)
										{
											if(rsrp < -99.5)
												return 5.58;
											else
											{
												if(velocity < 13.575)
												{
													if(velocity < 10.65)
													{
														if(velocity < 8.685)
														{
															if(payload < 5.5)
															{
																if(payload < 4.5)
																	return 9.28;
																else
																{
																	if(velocity < 3.315)
																		return 9.32;
																	else
																		return 11.51;
																}
															}
															else
															{
																if(sinr < -0.5)
																	return 15.93;
																else
																{
																	if(rsrq < -10)
																	{
																		if(sinr < 1.5)
																			return 10.58;
																		else
																			return 12.31;
																	}
																	else
																		return 10.23;
																}
															}
														}
														else
														{
															if(velocity < 10.45)
																return 15.93;
															else
																return 10.03;
														}
													}
													else
													{
														if(rsrp < -92.5)
														{
															if(sinr < 0.5)
																return 5.984;
															else
																return 8.65;
														}
														else
															return 12.95;
													}
												}
												else
												{
													if(velocity < 15.885)
													{
														if(rsrp < -95.5)
														{
															if(rsrp < -97.5)
																return 15.55;
															else
															{
																if(rsrq < -9.5)
																	return 14.315;
																else
																	return 13.23;
															}
														}
														else
															return 8.46;
													}
													else
													{
														if(sinr < 1.5)
															return 16.53;
														else
														{
															if(rsrq < -9.5)
																return 12.084;
															else
															{
																if(rsrp < -93)
																{
																	if(payload < 6.5)
																		return 6.89;
																	else
																		return 7.92;
																}
																else
																	return 12.82;
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
												if(sinr < 1.5)
												{
													if(rsrp < -95)
														return 22.2;
													else
														return 16.21;
												}
												else
													return 11.89;
											}
											else
											{
												if(velocity < 13.87)
													return 11.14;
												else
												{
													if(rsrq < -11.5)
														return 14.02;
													else
														return 12.49;
												}
											}
										}
									}
									else
									{
										if(f < 2232.5)
										{
											if(velocity < 15.22)
											{
												if(rsrp < -97)
													return 16.26;
												else
												{
													if(rsrp < -95)
														return 11.07;
													else
														return 16.04;
												}
											}
											else
											{
												if(sinr < 2.5)
													return 7.38;
												else
													return 10.57;
											}
										}
										else
										{
											if(sinr < 2.5)
											{
												if(payload < 9)
													return 18.39;
												else
													return 14.67;
											}
											else
												return 19.04;
										}
									}
								}
							}
						}
						else
						{
							if(payload < 4.5)
							{
								if(velocity < 13.465)
								{
									if(velocity < 12.745)
									{
										if(rsrp < -98)
											return 4.32;
										else
										{
											if(rsrp < -92.5)
											{
												if(velocity < 3.66)
												{
													if(rsrp < -93.5)
														return 13.16;
													else
														return 10.36;
												}
												else
												{
													if(rsrp < -95.5)
														return 11.81;
													else
													{
														if(rsrp < -93.5)
															return 14.15;
														else
															return 16.22;
													}
												}
											}
											else
											{
												if(rsrq < -9.5)
												{
													if(rsrp < -91.5)
														return 11.96;
													else
														return 13.34;
												}
												else
												{
													if(rsrq < -8.5)
													{
														if(rsrp < -90.5)
															return 9.35;
														else
															return 10.49;
													}
													else
													{
														if(sinr < 18.5)
														{
															if(velocity < 6.72)
																return 11.58;
															else
																return 15.64;
														}
														else
															return 6.3;
													}
												}
											}
										}
									}
									else
									{
										if(sinr < 6)
											return 15.79;
										else
											return 14.585;
									}
								}
								else
								{
									if(velocity < 13.98)
										return 5.77;
									else
										return 8.8;
								}
							}
							else
							{
								if(sinr < 9.5)
								{
									if(payload < 7.5)
									{
										if(sinr < 4.5)
										{
											if(payload < 5.5)
											{
												if(rsrp < -97.5)
												{
													if(velocity < 10.51)
														return 9.9;
													else
														return 16.79;
												}
												else
												{
													if(velocity < 23.785)
													{
														if(rsrp < -96.5)
															return 5.42;
														else
															return 13.26;
													}
													else
														return 16.79;
												}
											}
											else
											{
												if(rsrp < -92.5)
													return 16.53;
												else
													return 19.74;
											}
										}
										else
										{
											if(velocity < 15.42)
											{
												if(rsrq < -8.5)
												{
													if(payload < 5.5)
													{
														if(sinr < 6)
															return 9.18;
														else
														{
															if(rsrp < -90.5)
																return 10.27;
															else
																return 11.16;
														}
													}
													else
													{
														if(velocity < 11.99)
														{
															if(rsrp < -94.5)
															{
																if(velocity < 2.485)
																{
																	if(rsrp < -96)
																	{
																		if(rsrp < -98.5)
																			return 15.79;
																		else
																			return 20.07;
																	}
																	else
																	{
																		if(rsrq < -10)
																			return 17.95;
																		else
																			return 9.96;
																	}
																}
																else
																{
																	if(sinr < 7)
																	{
																		if(rsrp < -96)
																			return 12.17;
																		else
																			return 13.39;
																	}
																	else
																		return 15.89;
																}
															}
															else
															{
																if(velocity < 1.875)
																{
																	if(rsrp < -89.5)
																	{
																		if(rsrp < -90.5)
																			return 9.89;
																		else
																			return 10.395;
																	}
																	else
																	{
																		if(rsrq < -9.5)
																			return 18.2;
																		else
																			return 11.06;
																	}
																}
																else
																	return 12.88;
															}
														}
														else
															return 21.16;
													}
												}
												else
												{
													if(rsrp < -99.5)
														return 20.6;
													else
													{
														if(rsrp < -91.5)
														{
															if(payload < 6.5)
															{
																if(sinr < 7.5)
																{
																	if(rsrp < -96)
																		return 7.27;
																	else
																	{
																		if(payload < 5.5)
																			return 7.68;
																		else
																			return 10.57;
																	}
																}
																else
																	return 15.34;
															}
															else
																return 4.54;
														}
														else
															return 19.35;
													}
												}
											}
											else
												return 5.36;
										}
									}
									else
									{
										if(velocity < 10.66)
										{
											if(velocity < 9.45)
											{
												if(rsrp < -91.5)
												{
													if(rsrp < -99.5)
													{
														if(sinr < 6.5)
															return 19.33;
														else
															return 22.53;
													}
													else
													{
														if(rsrq < -10.5)
															return 12.72;
														else
														{
															if(rsrp < -98.5)
																return 13.54;
															else
															{
																if(payload < 8.5)
																	return 14.4;
																else
																{
																	if(payload < 9.5)
																	{
																		if(rsrq < -8.5)
																			return 17.66;
																		else
																			return 20.28;
																	}
																	else
																	{
																		if(velocity < 6.965)
																			return 17.432;
																		else
																			return 18.47;
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
														if(sinr < 7.5)
														{
															if(rsrq < -9.5)
																return 11.97;
															else
															{
																if(velocity < 4.025)
																{
																	if(rsrq < -8.5)
																		return 14;
																	else
																		return 12.74;
																}
																else
																	return 14.31;
															}
														}
														else
															return 11.65;
													}
													else
														return 18.74;
												}
											}
											else
											{
												if(rsrp < -98.5)
												{
													if(sinr < 7)
														return 20.5;
													else
														return 19.98;
												}
												else
													return 19.05;
											}
										}
										else
										{
											if(velocity < 13.485)
											{
												if(rsrp < -99.5)
													return 9.19;
												else
												{
													if(payload < 8.5)
													{
														if(velocity < 12.645)
															return 10.36;
														else
															return 14.12;
													}
													else
													{
														if(rsrp < -98.5)
															return 13.73;
														else
														{
															if(rsrp < -96.5)
																return 16.6866666667;
															else
															{
																if(payload < 9.5)
																	return 14.58;
																else
																	return 15.5;
															}
														}
													}
												}
											}
											else
											{
												if(rsrq < -10.5)
												{
													if(velocity < 17.665)
														return 10.4;
													else
														return 15.92;
												}
												else
												{
													if(rsrq < -9.5)
														return 17.0166666667;
													else
													{
														if(payload < 8.5)
														{
															if(velocity < 23.7)
																return 18.53;
															else
																return 19.84;
														}
														else
															return 21.25;
													}
												}
											}
										}
									}
								}
								else
								{
									if(velocity < 19.5)
									{
										if(velocity < 12.72)
										{
											if(velocity < 10.615)
											{
												if(sinr < 12.5)
												{
													if(rsrp < -99)
														return 20.13;
													else
													{
														if(payload < 7.5)
														{
															if(payload < 6.5)
															{
																if(payload < 5.5)
																	return 19.27;
																else
																	return 9.9;
															}
															else
																return 21.66;
														}
														else
														{
															if(velocity < 4.25)
															{
																if(rsrq < -8.5)
																{
																	if(rsrq < -9.5)
																		return 11.41;
																	else
																		return 6.04;
																}
																else
																	return 12.03;
															}
															else
																return 16.35;
														}
													}
												}
												else
												{
													if(rsrp < -94.5)
													{
														if(sinr < 17.5)
															return 14.91;
														else
														{
															if(payload < 7.5)
																return 9.74;
															else
																return 14.77;
														}
													}
													else
													{
														if(payload < 6.5)
														{
															if(velocity < 5.47)
															{
																if(rsrq < -9.5)
																	return 22.14;
																else
																{
																	if(sinr < 15.5)
																		return 19.07;
																	else
																	{
																		if(payload < 5.5)
																			return 15.05;
																		else
																			return 15.58;
																	}
																}
															}
															else
															{
																if(payload < 5.5)
																	return 14.06;
																else
																	return 14.79;
															}
														}
														else
														{
															if(payload < 8.5)
															{
																if(rsrp < -93)
																	return 22.48;
																else
																	return 19.545;
															}
															else
																return 16.68;
														}
													}
												}
											}
											else
											{
												if(rsrp < -93)
												{
													if(payload < 6)
														return 18.28;
													else
														return 9.7;
												}
												else
												{
													if(sinr < 13.5)
														return 26.49;
													else
														return 23.97;
												}
											}
										}
										else
										{
											if(velocity < 15.07)
											{
												if(payload < 5.5)
													return 16.8;
												else
												{
													if(velocity < 13.015)
														return 12.59;
													else
													{
														if(velocity < 14.26)
														{
															if(rsrq < -8.5)
																return 11.05;
															else
																return 10.4;
														}
														else
															return 8.87;
													}
												}
											}
											else
											{
												if(f < 2232.5)
												{
													if(velocity < 15.79)
													{
														if(rsrp < -90)
														{
															if(velocity < 15.32)
																return 14.64;
															else
																return 15.58;
														}
														else
															return 16.64;
													}
													else
														return 12.4066666667;
												}
												else
													return 19.61;
											}
										}
									}
									else
									{
										if(velocity < 35.62)
										{
											if(rsrp < -92)
											{
												if(rsrp < -96)
													return 19.58;
												else
													return 20.04;
											}
											else
												return 22.96;
										}
										else
											return 24.43;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				if(sinr < 12.5)
				{
					if(rsrp < -99.5)
					{
						if(velocity < 11.615)
							return 18.9;
						else
						{
							if(sinr < 10.5)
							{
								if(velocity < 21.885)
									return 6.74;
								else
								{
									if(payload < 5.5)
										return 9.145;
									else
										return 8.41;
								}
							}
							else
							{
								if(rsrp < -105)
									return 14.98;
								else
								{
									if(rsrq < -6.5)
										return 10.76;
									else
										return 13.97;
								}
							}
						}
					}
					else
					{
						if(velocity < 30.745)
						{
							if(velocity < 15.88)
							{
								if(velocity < 11.51)
								{
									if(rsrp < -98.5)
									{
										if(velocity < 9.885)
										{
											if(payload < 5.5)
												return 12.55;
											else
												return 19.34;
										}
										else
											return 26.39;
									}
									else
									{
										if(velocity < 8.46)
										{
											if(rsrp < -90.5)
											{
												if(payload < 9.5)
												{
													if(velocity < 7.615)
													{
														if(velocity < 3.21)
														{
															if(f < 2232.5)
																return 16.41;
															else
																return 13.17;
														}
														else
														{
															if(velocity < 6.985)
																return 13.18;
															else
																return 14.05;
														}
													}
													else
														return 16.6533333333;
												}
												else
												{
													if(rsrp < -96.5)
														return 10.51;
													else
														return 11.55;
												}
											}
											else
											{
												if(payload < 7.5)
												{
													if(sinr < 6.5)
														return 19.92;
													else
														return 17.21;
												}
												else
													return 21.58;
											}
										}
										else
										{
											if(rsrq < -6.5)
											{
												if(sinr < 6.5)
												{
													if(rsrp < -91.5)
														return 21.64;
													else
														return 21;
												}
												else
												{
													if(sinr < 8)
														return 15.39;
													else
													{
														if(rsrp < -91)
														{
															if(payload < 7.5)
																return 20.36;
															else
																return 19.39;
														}
														else
															return 18.24;
													}
												}
											}
											else
											{
												if(velocity < 11.295)
												{
													if(rsrp < -94)
														return 15.97;
													else
													{
														if(sinr < 7.5)
															return 19.19;
														else
															return 18.05;
													}
												}
												else
													return 16.22;
											}
										}
									}
								}
								else
								{
									if(velocity < 14.45)
									{
										if(payload < 7.5)
										{
											if(sinr < 2.5)
												return 18.88;
											else
											{
												if(rsrp < -92.5)
												{
													if(rsrq < -6.5)
													{
														if(sinr < 5.5)
															return 6.23;
														else
															return 7.13;
													}
													else
														return 9.71;
												}
												else
												{
													if(sinr < 10.5)
													{
														if(payload < 6)
														{
															if(velocity < 12.435)
																return 15.73;
															else
																return 15.0066666667;
														}
														else
														{
															if(rsrp < -89.5)
																return 13.35;
															else
																return 10.48;
														}
													}
													else
													{
														if(velocity < 12.42)
															return 12.755;
														else
															return 11.76;
													}
												}
											}
										}
										else
										{
											if(rsrq < -6.5)
											{
												if(payload < 9.5)
												{
													if(rsrp < -92)
													{
														if(sinr < 10.5)
															return 17.31;
														else
															return 15.09;
													}
													else
													{
														if(payload < 8.5)
															return 11.18;
														else
															return 13.5;
													}
												}
												else
												{
													if(rsrp < -95)
														return 18.01;
													else
														return 21.43;
												}
											}
											else
											{
												if(velocity < 12.645)
												{
													if(sinr < 9.5)
														return 17.84;
													else
													{
														if(payload < 9)
															return 16.27;
														else
															return 15.27;
													}
												}
												else
												{
													if(velocity < 14.105)
													{
														if(payload < 9.5)
															return 21.1;
														else
															return 21.75;
													}
													else
														return 19.99;
												}
											}
										}
									}
									else
									{
										if(rsrp < -97.5)
											return 16.6;
										else
										{
											if(velocity < 14.815)
											{
												if(payload < 7.5)
												{
													if(rsrp < -94.5)
														return 10.31;
													else
														return 12.66;
												}
												else
													return 9.63;
											}
											else
											{
												if(rsrp < -90)
												{
													if(payload < 7.5)
													{
														if(sinr < 10)
														{
															if(sinr < 6.5)
																return 11.06;
															else
																return 12.51;
														}
														else
														{
															if(rsrp < -94)
																return 16.42;
															else
																return 13.86;
														}
													}
													else
														return 10;
												}
												else
													return 16.04;
											}
										}
									}
								}
							}
							else
							{
								if(payload < 9)
								{
									if(velocity < 17.505)
										return 13.49;
									else
									{
										if(payload < 7.5)
											return 21.37;
										else
											return 23.25;
									}
								}
								else
								{
									if(velocity < 16.65)
										return 26.2;
									else
										return 23.76;
								}
							}
						}
						else
						{
							if(sinr < 9.5)
							{
								if(rsrp < -96.5)
								{
									if(payload < 5.5)
										return 16.06;
									else
										return 12.06;
								}
								else
								{
									if(rsrp < -94.5)
										return 6.69;
									else
									{
										if(payload < 5)
											return 8.25;
										else
											return 7.5;
									}
								}
							}
							else
								return 17.69;
						}
					}
				}
				else
				{
					if(velocity < 11.855)
					{
						if(payload < 7.5)
						{
							if(rsrq < -5.5)
							{
								if(rsrp < -95)
									return 10.17;
								else
								{
									if(rsrq < -6.5)
									{
										if(payload < 4.5)
										{
											if(velocity < 8.32)
												return 17.25;
											else
												return 13.32;
										}
										else
										{
											if(velocity < 11.15)
											{
												if(sinr < 21.5)
												{
													if(rsrp < -91)
														return 21.5;
													else
														return 20.43;
												}
												else
													return 18.98;
											}
											else
												return 16.34;
										}
									}
									else
									{
										if(payload < 6.5)
										{
											if(f < 2232.5)
											{
												if(sinr < 16.5)
													return 13.59;
												else
													return 14.71;
											}
											else
											{
												if(sinr < 25.5)
												{
													if(rsrp < -89.5)
													{
														if(velocity < 8.63)
														{
															if(sinr < 16.5)
																return 21.09;
															else
															{
																if(sinr < 20)
																	return 16.65;
																else
																	return 19.03;
															}
														}
														else
															return 17.74;
													}
													else
														return 14.84;
												}
												else
													return 12.03;
											}
										}
										else
										{
											if(rsrp < -90.5)
												return 15.66;
											else
											{
												if(sinr < 20)
													return 11.79;
												else
													return 10.62;
											}
										}
									}
								}
							}
							else
							{
								if(payload < 5.5)
								{
									if(payload < 4.5)
										return 9.28;
									else
										return 10.17;
								}
								else
								{
									if(payload < 6.5)
										return 13.97;
									else
										return 15.54;
								}
							}
						}
						else
						{
							if(rsrp < -95.5)
							{
								if(velocity < 10.91)
								{
									if(rsrp < -102)
										return 16.63;
									else
									{
										if(rsrp < -98)
											return 30.03;
										else
											return 32.39;
									}
								}
								else
									return 19.56;
							}
							else
							{
								if(rsrp < -91.5)
								{
									if(rsrp < -93.5)
										return 20.11;
									else
										return 10.03;
								}
								else
								{
									if(velocity < 6.75)
									{
										if(rsrq < -6.5)
										{
											if(velocity < 0.47)
											{
												if(payload < 9)
													return 20.83;
												else
													return 34.14;
											}
											else
												return 25.84;
										}
										else
										{
											if(sinr < 18.5)
											{
												if(payload < 9.5)
												{
													if(velocity < 3.02)
														return 23.83;
													else
														return 21.94;
												}
												else
													return 25.92;
											}
											else
											{
												if(sinr < 29)
												{
													if(sinr < 22.5)
													{
														if(rsrq < -5.5)
														{
															if(payload < 8.5)
																return 23.34;
															else
																return 22.29;
														}
														else
															return 20.02;
													}
													else
													{
														if(rsrp < -90)
															return 20.25;
														else
															return 17.69;
													}
												}
												else
													return 24.02;
											}
										}
									}
									else
									{
										if(rsrp < -89.5)
											return 11.35;
										else
										{
											if(rsrq < -6.5)
												return 18.75;
											else
											{
												if(velocity < 10.35)
													return 20.24;
												else
													return 19.43;
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if(velocity < 13.085)
						{
							if(sinr < 15)
							{
								if(payload < 5)
									return 7.73;
								else
									return 5.7;
							}
							else
							{
								if(rsrp < -91.5)
									return 9.28;
								else
								{
									if(payload < 7.5)
									{
										if(velocity < 12.615)
										{
											if(velocity < 12.16)
												return 12.37;
											else
												return 8.55;
										}
										else
											return 17.17;
									}
									else
										return 24.39;
								}
							}
						}
						else
						{
							if(velocity < 35.505)
							{
								if(payload < 6.5)
								{
									if(velocity < 13.265)
										return 21.4;
									else
									{
										if(f < 2232.5)
										{
											if(sinr < 23.5)
											{
												if(rsrp < -90.5)
												{
													if(rsrp < -92.5)
														return 17.65;
													else
													{
														if(velocity < 19.58)
															return 15.29;
														else
															return 18.38;
													}
												}
												else
												{
													if(rsrq < -6.5)
														return 16.47;
													else
														return 18.8633333333;
												}
											}
											else
												return 14.885;
										}
										else
										{
											if(sinr < 17.5)
											{
												if(sinr < 14.5)
													return 10.09;
												else
													return 6.45;
											}
											else
											{
												if(payload < 4.5)
													return 21.68;
												else
												{
													if(rsrp < -92.5)
														return 17.54;
													else
													{
														if(rsrp < -90.5)
															return 13.25;
														else
														{
															if(sinr < 22.5)
																return 17.26;
															else
																return 15.27;
														}
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
										if(sinr < 17)
										{
											if(f < 2232.5)
											{
												if(payload < 8.5)
												{
													if(rsrp < -95)
														return 22.6;
													else
													{
														if(payload < 7.5)
															return 20.59;
														else
															return 21.23;
													}
												}
												else
													return 19.39;
											}
											else
											{
												if(rsrp < -93)
													return 16.79;
												else
													return 12.45;
											}
										}
										else
										{
											if(payload < 8)
												return 14.73;
											else
												return 10.23;
										}
									}
									else
									{
										if(velocity < 15.075)
										{
											if(payload < 8)
												return 23.17;
											else
												return 25.78;
										}
										else
											return 30.48;
									}
								}
							}
							else
								return 6.05;
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
			if(payload < 1.5)
			{
				if(rsrp < -80.5)
				{
					if(payload < 0.3)
					{
						if(rsrp < -81.5)
						{
							if(rsrq < -5.5)
							{
								if(rsrp < -87.5)
								{
									if(sinr < 13)
										return 8.08;
									else
										return 5.27;
								}
								else
								{
									if(velocity < 15.495)
									{
										if(velocity < 9.69)
										{
											if(rsrp < -85.5)
											{
												if(rsrp < -86.5)
												{
													if(rsrq < -6.5)
													{
														if(sinr < 18.5)
															return 4.7733333333;
														else
															return 3.03;
													}
													else
													{
														if(sinr < 19)
															return 5.88;
														else
															return 6.84;
													}
												}
												else
												{
													if(sinr < 20)
														return 3.33;
													else
														return 5.56;
												}
											}
											else
											{
												if(sinr < 22)
												{
													if(velocity < 4.77)
														return 8.33;
													else
														return 7.69;
												}
												else
													return 4.32;
											}
										}
										else
										{
											if(velocity < 10.885)
											{
												if(rsrp < -84.5)
													return 3.7866666667;
												else
													return 4.57;
											}
											else
											{
												if(sinr < 26)
												{
													if(rsrp < -83.5)
														return 4.1766666667;
													else
													{
														if(sinr < 20.5)
															return 4.535;
														else
															return 5.03;
													}
												}
												else
													return 5.06;
											}
										}
									}
									else
									{
										if(sinr < 12)
											return 10.26;
										else
										{
											if(velocity < 15.93)
											{
												if(rsrp < -83.5)
													return 7.62;
												else
													return 6.78;
											}
											else
											{
												if(sinr < 23)
												{
													if(rsrq < -7.5)
														return 3.33;
													else
														return 4.64;
												}
												else
												{
													if(sinr < 26)
													{
														if(velocity < 24.45)
															return 6.61;
														else
															return 7.14;
													}
													else
														return 5.44;
												}
											}
										}
									}
								}
							}
							else
							{
								if(velocity < 11.79)
								{
									if(velocity < 5.875)
										return 6.02;
									else
										return 4.23;
								}
								else
								{
									if(velocity < 12.805)
									{
										if(rsrp < -84.5)
										{
											if(rsrp < -85.5)
												return 5.56;
											else
												return 6.84;
										}
										else
										{
											if(rsrp < -83.5)
												return 9.52;
											else
												return 7.41;
										}
									}
									else
									{
										if(sinr < 30.5)
										{
											if(velocity < 17.18)
												return 6.3;
											else
												return 5.405;
										}
										else
											return 7.27;
									}
								}
							}
						}
						else
						{
							if(rsrq < -7)
								return 2.48;
							else
							{
								if(sinr < 27)
									return 4.4766666667;
								else
									return 5.44;
							}
						}
					}
					else
					{
						if(rsrq < -16.5)
							return 0.47;
						else
						{
							if(rsrp < -83.5)
							{
								if(sinr < 28.5)
								{
									if(velocity < 12.335)
									{
										if(sinr < 9.5)
										{
											if(sinr < 4)
												return 8.64;
											else
												return 12.455;
										}
										else
										{
											if(velocity < 12.02)
											{
												if(rsrq < -9)
													return 2.76;
												else
												{
													if(sinr < 15.5)
													{
														if(velocity < 10.11)
														{
															if(rsrp < -85)
																return 6.29;
															else
																return 8.61;
														}
														else
															return 6.235;
													}
													else
													{
														if(payload < 0.75)
														{
															if(sinr < 20.5)
															{
																if(rsrp < -86.5)
																	return 7.94;
																else
																	return 6.315;
															}
															else
															{
																if(rsrp < -87.5)
																	return 5.94;
																else
																{
																	if(rsrp < -86.5)
																		return 7.71;
																	else
																	{
																		if(sinr < 22)
																			return 7.63;
																		else
																			return 8.31;
																	}
																}
															}
														}
														else
														{
															if(velocity < 6.59)
																return 8.31;
															else
																return 7.7;
														}
													}
												}
											}
											else
											{
												if(sinr < 18)
													return 5.49;
												else
													return 4.33;
											}
										}
									}
									else
									{
										if(rsrq < -8.5)
										{
											if(velocity < 26.155)
											{
												if(rsrp < -84.5)
												{
													if(rsrp < -86)
														return 4;
													else
														return 3.15;
												}
												else
													return 7.25;
											}
											else
											{
												if(sinr < 3.5)
													return 8.7;
												else
													return 10.04;
											}
										}
										else
										{
											if(sinr < 14.5)
											{
												if(f < 1384.5)
													return 2.98;
												else
												{
													if(payload < 0.75)
													{
														if(sinr < 12.5)
														{
															if(velocity < 31.775)
															{
																if(rsrp < -86.5)
																{
																	if(rsrq < -6.5)
																		return 8.25;
																	else
																		return 7.21;
																}
																else
																	return 8.73;
															}
															else
																return 5.84;
														}
														else
															return 10.72;
													}
													else
													{
														if(velocity < 12.61)
															return 9.2;
														else
														{
															if(rsrp < -87)
																return 3.83;
															else
															{
																if(velocity < 13.92)
																{
																	if(sinr < 12.5)
																	{
																		if(f < 2232.5)
																			return 10.5;
																		else
																			return 7.51;
																	}
																	else
																	{
																		if(velocity < 13.285)
																			return 6.36;
																		else
																			return 9.17;
																	}
																}
																else
																{
																	if(velocity < 16.69)
																		return 5.705;
																	else
																		return 7.12;
																}
															}
														}
													}
												}
											}
											else
											{
												if(sinr < 19)
												{
													if(velocity < 20.135)
														return 14.02;
													else
														return 15.53;
												}
												else
													return 7.744;
											}
										}
									}
								}
								else
								{
									if(rsrp < -86.5)
										return 9.85;
									else
										return 9.01;
								}
							}
							else
							{
								if(payload < 0.75)
								{
									if(rsrp < -81.5)
									{
										if(velocity < 6.6)
											return 5.87;
										else
										{
											if(rsrq < -6)
												return 8.33;
											else
												return 6.23;
										}
									}
									else
									{
										if(sinr < 10)
											return 10.2;
										else
											return 9.39;
									}
								}
								else
								{
									if(sinr < 29)
									{
										if(sinr < 18.5)
										{
											if(sinr < 1.5)
												return 7.07;
											else
											{
												if(velocity < 8.5)
													return 5.44;
												else
												{
													if(sinr < 13.5)
													{
														if(f < 2232.5)
															return 12.97;
														else
															return 9.89;
													}
													else
														return 9.24;
												}
											}
										}
										else
										{
											if(sinr < 21.5)
												return 13.45;
											else
											{
												if(sinr < 23)
													return 10.48;
												else
													return 8.81;
											}
										}
									}
									else
										return 6.62;
								}
							}
						}
					}
				}
				else
				{
					if(velocity < 9.16)
					{
						if(rsrq < -7.5)
						{
							if(velocity < 1.595)
								return 22.86;
							else
							{
								if(payload < 0.55)
									return 4.26;
								else
									return 8.3;
							}
						}
						else
						{
							if(rsrq < -5.5)
							{
								if(rsrp < -76)
									return 8.265;
								else
								{
									if(payload < 0.3)
										return 5.13;
									else
									{
										if(sinr < 11)
											return 5.23;
										else
										{
											if(sinr < 22.5)
												return 7.37;
											else
												return 6.19;
										}
									}
								}
							}
							else
							{
								if(velocity < 8.825)
								{
									if(payload < 0.3)
									{
										if(rsrp < -73)
											return 5.8;
										else
											return 6.35;
									}
									else
									{
										if(sinr < 24.5)
											return 12.46;
										else
										{
											if(sinr < 39.5)
											{
												if(payload < 0.75)
												{
													if(velocity < 3.5)
														return 8.64;
													else
														return 9.48;
												}
												else
												{
													if(sinr < 34.5)
														return 6.58;
													else
														return 7.73;
												}
											}
											else
												return 10.75;
										}
									}
								}
								else
									return 21.11;
							}
						}
					}
					else
					{
						if(payload < 0.3)
						{
							if(sinr < 35.5)
							{
								if(rsrp < -72)
								{
									if(velocity < 33.79)
									{
										if(velocity < 16.14)
										{
											if(velocity < 12.565)
												return 4.62;
											else
											{
												if(rsrq < -5.5)
												{
													if(sinr < 16)
														return 5.3;
													else
													{
														if(velocity < 13.185)
															return 5.67;
														else
															return 7.55;
													}
												}
												else
												{
													if(sinr < 28)
													{
														if(velocity < 13.695)
															return 5.8433333333;
														else
															return 5.0175;
													}
													else
													{
														if(sinr < 30)
															return 7.14;
														else
															return 5.26;
													}
												}
											}
										}
										else
										{
											if(sinr < 29.5)
											{
												if(rsrp < -78.5)
													return 9.09;
												else
													return 8.42;
											}
											else
												return 5.44;
										}
									}
									else
										return 4.025;
								}
								else
								{
									if(rsrp < -68)
									{
										if(velocity < 12.4)
										{
											if(rsrp < -69.5)
												return 2.56;
											else
												return 4.26;
										}
										else
											return 4.48;
									}
									else
										return 6.25;
								}
							}
							else
								return 22.22;
						}
						else
						{
							if(f < 1384.5)
							{
								if(velocity < 14.83)
								{
									if(rsrq < -5.5)
									{
										if(rsrp < -70)
											return 2.52;
										else
											return 3.73;
									}
									else
										return 5.44;
								}
								else
									return 10.47;
							}
							else
							{
								if(velocity < 13.635)
								{
									if(velocity < 13.485)
									{
										if(velocity < 13.3)
										{
											if(rsrp < -75.5)
											{
												if(rsrp < -77)
												{
													if(rsrq < -5.5)
													{
														if(sinr < 12)
															return 9.63;
														else
															return 8.815;
													}
													else
														return 10.83;
												}
												else
													return 15.62;
											}
											else
											{
												if(sinr < 28.5)
												{
													if(rsrq < -6.5)
														return 7.17;
													else
													{
														if(velocity < 12.615)
														{
															if(sinr < 19)
															{
																if(payload < 0.75)
																	return 10.78;
																else
																	return 9.36;
															}
															else
																return 9.24;
														}
														else
															return 11.3366666667;
													}
												}
												else
													return 6.62;
											}
										}
										else
										{
											if(payload < 0.75)
												return 8.46;
											else
												return 5.93;
										}
									}
									else
									{
										if(velocity < 13.55)
											return 17.94;
										else
											return 18.74;
									}
								}
								else
								{
									if(rsrp < -79)
									{
										if(rsrq < -5.5)
											return 5.03;
										else
											return 8.6;
									}
									else
									{
										if(rsrq < -7.5)
											return 11.43;
										else
										{
											if(sinr < 23)
											{
												if(sinr < 19.5)
												{
													if(velocity < 26.58)
														return 6.0433333333;
													else
														return 5.46;
												}
												else
												{
													if(velocity < 14.77)
													{
														if(rsrp < -74.5)
															return 6.7;
														else
															return 7.46;
													}
													else
														return 8.32;
												}
											}
											else
											{
												if(sinr < 24.5)
													return 12.18;
												else
												{
													if(sinr < 34.5)
													{
														if(sinr < 25.5)
														{
															if(rsrq < -5.5)
																return 9.28;
															else
																return 7.99;
														}
														else
														{
															if(payload < 0.75)
																return 9.8;
															else
															{
																if(rsrp < -68.5)
																	return 9.89;
																else
																	return 10.43;
															}
														}
													}
													else
														return 7.01;
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
				if(f < 1384.5)
					return 7.235;
				else
				{
					if(payload < 2.5)
					{
						if(velocity < 2.235)
						{
							if(velocity < 1.47)
							{
								if(sinr < 29)
								{
									if(sinr < 27.5)
									{
										if(velocity < 0.49)
										{
											if(rsrp < -84.5)
												return 7.8066666667;
											else
												return 8.9666666667;
										}
										else
											return 9.59;
									}
									else
										return 6.98;
								}
								else
									return 12.41;
							}
							else
								return 7.09;
						}
						else
						{
							if(rsrp < -77.5)
							{
								if(sinr < 16.5)
								{
									if(velocity < 13.24)
									{
										if(velocity < 12.625)
										{
											if(velocity < 12.2)
											{
												if(rsrp < -83)
													return 9.845;
												else
													return 8.6333333333;
											}
											else
											{
												if(f < 2232.5)
													return 11.59;
												else
													return 14.8;
											}
										}
										else
										{
											if(sinr < 13)
												return 6.92;
											else
												return 9.41;
										}
									}
									else
									{
										if(sinr < 15.5)
										{
											if(sinr < 9)
											{
												if(sinr < 6.5)
													return 11.04;
												else
													return 8.76;
											}
											else
											{
												if(velocity < 13.93)
												{
													if(velocity < 13.48)
														return 13.58;
													else
														return 15.53;
												}
												else
												{
													if(velocity < 15.965)
													{
														if(sinr < 12.5)
															return 6.52;
														else
														{
															if(rsrp < -83)
															{
																if(rsrp < -87.5)
																	return 9.59;
																else
																	return 10.7;
															}
															else
																return 13.45;
														}
													}
													else
													{
														if(velocity < 21.27)
															return 13.84;
														else
															return 16.18;
													}
												}
											}
										}
										else
											return 6.86;
									}
								}
								else
								{
									if(sinr < 17.5)
										return 17.78;
									else
									{
										if(velocity < 21.735)
										{
											if(velocity < 14.805)
											{
												if(velocity < 13.41)
												{
													if(velocity < 12.99)
													{
														if(rsrq < -8.5)
															return 14.02;
														else
														{
															if(rsrq < -6.5)
																return 10.54;
															else
																return 11.5666666667;
														}
													}
													else
														return 6;
												}
												else
													return 15.07;
											}
											else
											{
												if(rsrq < -5.5)
												{
													if(rsrp < -84)
														return 8.21;
													else
														return 9.35;
												}
												else
													return 6.19;
											}
										}
										else
										{
											if(sinr < 24.5)
												return 13.36;
											else
												return 13.99;
										}
									}
								}
							}
							else
							{
								if(rsrp < -76)
								{
									if(velocity < 13.35)
										return 14.72;
									else
									{
										if(sinr < 22)
											return 18.22;
										else
										{
											if(rsrq < -5.5)
												return 21.51;
											else
												return 17.92;
										}
									}
								}
								else
								{
									if(rsrq < -5.5)
										return 22.54;
									else
									{
										if(velocity < 16.11)
										{
											if(sinr < 31.5)
											{
												if(rsrp < -70.5)
													return 14.95;
												else
													return 11.97;
											}
											else
												return 8.43;
										}
										else
										{
											if(sinr < 28)
												return 15.34;
											else
												return 14.31;
										}
									}
								}
							}
						}
					}
					else
					{
						if(velocity < 17.47)
						{
							if(sinr < 10.5)
							{
								if(velocity < 12.41)
								{
									if(rsrp < -82.5)
									{
										if(velocity < 11.4)
										{
											if(velocity < 3.08)
												return 9.7;
											else
											{
												if(rsrq < -7.5)
												{
													if(velocity < 9.615)
													{
														if(rsrp < -85)
															return 12.77;
														else
															return 13.34;
													}
													else
														return 11.99;
												}
												else
												{
													if(sinr < 7)
														return 11.055;
													else
													{
														if(velocity < 8.29)
															return 11.22;
														else
															return 8.93;
													}
												}
											}
										}
										else
											return 8.65;
									}
									else
									{
										if(rsrq < -8.5)
											return 10.57;
										else
										{
											if(rsrp < -70.5)
												return 14.9866666667;
											else
												return 13.68;
										}
									}
								}
								else
								{
									if(sinr < 4)
										return 20.55;
									else
									{
										if(payload < 3.5)
											return 16.11;
										else
										{
											if(rsrq < -6.5)
												return 14.42;
											else
											{
												if(rsrp < -82)
													return 11.61;
												else
													return 12.56;
											}
										}
									}
								}
							}
							else
							{
								if(velocity < 14.66)
								{
									if(sinr < 12.5)
									{
										if(rsrq < -7)
											return 16.57;
										else
										{
											if(sinr < 11.5)
											{
												if(velocity < 13.04)
													return 12.39;
												else
													return 13.36;
											}
											else
											{
												if(rsrp < -84.5)
													return 13.24;
												else
													return 6.19;
											}
										}
									}
									else
									{
										if(payload < 3.5)
										{
											if(velocity < 12.815)
											{
												if(rsrp < -81.5)
												{
													if(velocity < 12.5)
													{
														if(rsrp < -85.5)
														{
															if(rsrq < -6.5)
																return 9.9;
															else
																return 11.53;
														}
														else
														{
															if(sinr < 25)
															{
																if(velocity < 10.87)
																{
																	if(rsrp < -84.5)
																		return 12.76;
																	else
																	{
																		if(velocity < 9.7)
																		{
																			if(rsrq < -5.5)
																			{
																				if(rsrp < -83)
																				{
																					if(sinr < 14.5)
																						return 16.33;
																					else
																						return 15.45;
																				}
																				else
																					return 13.96;
																			}
																			else
																				return 13.78;
																		}
																		else
																			return 16.3;
																	}
																}
																else
																{
																	if(rsrq < -5.5)
																		return 12.42;
																	else
																		return 10.62;
																}
															}
															else
																return 10.66;
														}
													}
													else
														return 16.51;
												}
												else
												{
													if(sinr < 17.5)
													{
														if(rsrp < -77)
															return 22.12;
														else
															return 20.43;
													}
													else
													{
														if(sinr < 30)
														{
															if(rsrq < -5.5)
															{
																if(rsrq < -6.5)
																	return 11.64;
																else
																{
																	if(rsrp < -78.5)
																		return 12.54;
																	else
																	{
																		if(rsrp < -75)
																			return 24.42;
																		else
																		{
																			if(velocity < 6.505)
																				return 13.63;
																			else
																				return 16.11;
																		}
																	}
																}
															}
															else
																return 22.14;
														}
														else
														{
															if(rsrq < -4.5)
															{
																if(velocity < 5.495)
																	return 11.19;
																else
																	return 13.07;
															}
															else
																return 13.79;
														}
													}
												}
											}
											else
											{
												if(rsrq < -6.5)
												{
													if(velocity < 13.9)
														return 22.41;
													else
													{
														if(sinr < 20)
															return 15.09;
														else
														{
															if(velocity < 14.375)
																return 12.13;
															else
																return 12.85;
														}
													}
												}
												else
												{
													if(rsrp < -85)
														return 14.71;
													else
													{
														if(velocity < 13.02)
														{
															if(sinr < 35)
																return 13.5;
															else
																return 11.7;
														}
														else
														{
															if(rsrp < -80.5)
																return 11.63;
															else
															{
																if(rsrp < -74.5)
																	return 10.0775;
																else
																	return 10.66;
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
												if(f < 2232.5)
												{
													if(rsrp < -86.5)
														return 9.07;
													else
													{
														if(rsrp < -84.5)
															return 17.72;
														else
															return 10.02;
													}
												}
												else
												{
													if(sinr < 14.5)
														return 14.575;
													else
														return 23.88;
												}
											}
											else
											{
												if(sinr < 27.5)
												{
													if(rsrq < -9.5)
														return 11;
													else
													{
														if(velocity < 14.425)
														{
															if(velocity < 14.11)
															{
																if(rsrq < -5.5)
																{
																	if(sinr < 16.5)
																	{
																		if(f < 2232.5)
																		{
																			if(rsrp < -78)
																				return 9.7;
																			else
																				return 13.14;
																		}
																		else
																			return 15.74;
																	}
																	else
																	{
																		if(rsrp < -87.5)
																			return 19.39;
																		else
																		{
																			if(velocity < 1.355)
																			{
																				if(f < 2232.5)
																				{
																					if(sinr < 22)
																						return 15.81;
																					else
																					{
																						if(rsrp < -85)
																							return 15.09;
																						else
																							return 14.39;
																					}
																				}
																				else
																					return 11.79;
																			}
																			else
																			{
																				if(velocity < 13.63)
																				{
																					if(velocity < 12.435)
																						return 16.2233333333;
																					else
																						return 13.47;
																				}
																				else
																					return 16.61;
																			}
																		}
																	}
																}
																else
																{
																	if(velocity < 13.24)
																	{
																		if(rsrp < -82.5)
																		{
																			if(sinr < 16.5)
																				return 15.85;
																			else
																				return 16.325;
																		}
																		else
																		{
																			if(velocity < 8.095)
																				return 18.39;
																			else
																				return 19.75;
																		}
																	}
																	else
																		return 11.5;
																}
															}
															else
															{
																if(sinr < 20)
																	return 17.49;
																else
																	return 22.94;
															}
														}
														else
															return 11.23;
													}
												}
												else
												{
													if(velocity < 10.805)
													{
														if(rsrq < -7.5)
														{
															if(rsrp < -80)
																return 17.29;
															else
																return 20.65;
														}
														else
														{
															if(rsrp < -69.5)
															{
																if(rsrq < -6.5)
																{
																	if(rsrp < -74)
																		return 14.71;
																	else
																		return 16.01;
																}
																else
																	return 17.63;
															}
															else
																return 10.91;
														}
													}
													else
													{
														if(rsrp < -78.5)
															return 20.25;
														else
															return 21.33;
													}
												}
											}
										}
									}
								}
								else
								{
									if(velocity < 17.035)
									{
										if(sinr < 32.5)
										{
											if(velocity < 17.01)
											{
												if(sinr < 29.5)
												{
													if(velocity < 15.67)
													{
														if(rsrp < -72.5)
														{
															if(payload < 3.5)
															{
																if(rsrq < -5.5)
																	return 15.5514285714;
																else
																	return 15.95;
															}
															else
															{
																if(velocity < 15.33)
																{
																	if(rsrq < -7)
																		return 18.05;
																	else
																		return 17.09;
																}
																else
																	return 15.62;
															}
														}
														else
															return 17.22;
													}
													else
													{
														if(rsrp < -83)
															return 19.1;
														else
															return 17.336;
													}
												}
												else
												{
													if(rsrp < -84.5)
														return 14.04;
													else
														return 12.96;
												}
											}
											else
												return 7.92;
										}
										else
											return 22.84;
									}
									else
										return 21.78;
								}
							}
						}
						else
						{
							if(rsrq < -6.5)
							{
								if(rsrq < -8.5)
									return 14.25;
								else
								{
									if(velocity < 32.015)
									{
										if(velocity < 22.48)
										{
											if(rsrp < -83)
												return 8.95;
											else
												return 8.04;
										}
										else
										{
											if(rsrp < -84.5)
												return 12.15;
											else
											{
												if(rsrp < -82.5)
													return 10.05;
												else
													return 9.2;
											}
										}
									}
									else
										return 13.66;
								}
							}
							else
							{
								if(velocity < 33.995)
								{
									if(velocity < 32.63)
									{
										if(rsrp < -74.5)
										{
											if(velocity < 20.165)
												return 16.72;
											else
											{
												if(rsrp < -80.5)
												{
													if(rsrp < -82.5)
													{
														if(velocity < 23.62)
															return 15.79;
														else
														{
															if(rsrp < -86)
																return 14.41;
															else
																return 13.59;
														}
													}
													else
														return 11.84;
												}
												else
												{
													if(rsrp < -78.5)
														return 14.3;
													else
														return 14.9;
												}
											}
										}
										else
											return 12.32;
									}
									else
										return 10.65;
								}
								else
									return 16.975;
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
				if(sinr < 19.5)
				{
					if(velocity < 12.235)
					{
						if(rsrp < -87.5)
						{
							if(payload < 6)
								return 14.51;
							else
							{
								if(payload < 7.5)
								{
									if(sinr < 12)
									{
										if(rsrq < -7)
											return 22.27;
										else
											return 15.49;
									}
									else
									{
										if(velocity < 5.14)
											return 24.73;
										else
											return 22.21;
									}
								}
								else
								{
									if(rsrq < -9)
										return 20.07;
									else
										return 18.13;
								}
							}
						}
						else
						{
							if(rsrp < -83.5)
							{
								if(velocity < 12.16)
								{
									if(velocity < 8.395)
									{
										if(rsrq < -8.5)
										{
											if(velocity < 3.75)
												return 13.71;
											else
												return 15.31;
										}
										else
										{
											if(payload < 5.5)
											{
												if(rsrq < -6.5)
												{
													if(sinr < 12)
														return 18.9;
													else
														return 15.95;
												}
												else
												{
													if(rsrp < -86)
														return 14.54;
													else
														return 13.79;
												}
											}
											else
											{
												if(velocity < 1.175)
												{
													if(rsrp < -85.5)
														return 24.44;
													else
													{
														if(payload < 6.5)
															return 20.52;
														else
														{
															if(payload < 7.5)
															{
																if(sinr < 15.5)
																	return 17.47;
																else
																	return 18.29;
															}
															else
																return 17.52;
														}
													}
												}
												else
												{
													if(sinr < 9)
														return 18.31;
													else
													{
														if(velocity < 7.735)
														{
															if(rsrq < -7.5)
																return 18.52;
															else
															{
																if(rsrp < -85.5)
																{
																	if(velocity < 2.875)
																		return 15.5425;
																	else
																		return 16.28;
																}
																else
																	return 14.18;
															}
														}
														else
															return 19.66;
													}
												}
											}
										}
									}
									else
									{
										if(rsrp < -84.5)
										{
											if(payload < 6.5)
											{
												if(payload < 5.5)
													return 22.12;
												else
													return 24.04;
											}
											else
											{
												if(velocity < 11.235)
													return 23.69;
												else
													return 16.12;
											}
										}
										else
											return 16.37;
									}
								}
								else
									return 6.14;
							}
							else
							{
								if(rsrp < -82.5)
								{
									if(sinr < 18.5)
										return 9.63;
									else
										return 8.88;
								}
								else
								{
									if(f < 2232.5)
									{
										if(rsrp < -72.5)
										{
											if(rsrq < -7.5)
											{
												if(rsrp < -78.5)
													return 13.86;
												else
													return 15.13;
											}
											else
											{
												if(rsrp < -79.5)
												{
													if(payload < 5.5)
														return 18.04;
													else
														return 12.53;
												}
												else
												{
													if(sinr < 18.5)
														return 20.92;
													else
														return 16.01;
												}
											}
										}
										else
											return 29.08;
									}
									else
									{
										if(sinr < 13.5)
										{
											if(rsrq < -8.5)
												return 15.95;
											else
											{
												if(velocity < 4.665)
												{
													if(payload < 6.5)
														return 14.79;
													else
														return 14.19;
												}
												else
												{
													if(sinr < 10.5)
														return 13.78;
													else
														return 13.1;
												}
											}
										}
										else
											return 16.19;
									}
								}
							}
						}
					}
					else
					{
						if(rsrq < -8.5)
						{
							if(velocity < 13.215)
							{
								if(rsrq < -9.5)
									return 33.26;
								else
									return 25.46;
							}
							else
							{
								if(velocity < 13.78)
								{
									if(payload < 5.5)
									{
										if(sinr < 8)
											return 14.49;
										else
											return 12.78;
									}
									else
										return 11.8533333333;
								}
								else
								{
									if(velocity < 14.05)
										return 24.19;
									else
									{
										if(rsrp < -81.5)
										{
											if(rsrp < -87.5)
											{
												if(sinr < 4.5)
													return 13.86;
												else
													return 11.68;
											}
											else
											{
												if(sinr < 2.5)
												{
													if(rsrp < -84.5)
														return 13.13;
													else
														return 18.29;
												}
												else
													return 20.95;
											}
										}
										else
										{
											if(payload < 7)
											{
												if(rsrp < -69)
													return 14.54;
												else
													return 13.74;
											}
											else
												return 10.53;
										}
									}
								}
							}
						}
						else
						{
							if(payload < 5.5)
							{
								if(velocity < 23.91)
								{
									if(rsrp < -80.5)
									{
										if(velocity < 16.59)
										{
											if(rsrq < -5.5)
											{
												if(rsrp < -84)
												{
													if(velocity < 15.21)
														return 14.2766666667;
													else
														return 17.03;
												}
												else
												{
													if(f < 2232.5)
													{
														if(rsrp < -82)
															return 20.28;
														else
															return 19.26;
													}
													else
														return 22.98;
												}
											}
											else
												return 10.67;
										}
										else
										{
											if(rsrq < -5.5)
												return 30.77;
											else
											{
												if(rsrp < -82.5)
													return 26.35;
												else
													return 19.27;
											}
										}
									}
									else
									{
										if(rsrp < -75.5)
										{
											if(rsrp < -79)
												return 13.5;
											else
												return 9.79;
										}
										else
										{
											if(rsrq < -5.5)
												return 18.07;
											else
												return 21.36;
										}
									}
								}
								else
								{
									if(velocity < 25.58)
										return 9.4;
									else
									{
										if(rsrp < -82.5)
										{
											if(rsrq < -6.5)
												return 15.17;
											else
												return 16.13;
										}
										else
										{
											if(rsrp < -80.5)
												return 22.79;
											else
											{
												if(rsrp < -77.5)
													return 19.39;
												else
													return 19.93;
											}
										}
									}
								}
							}
							else
							{
								if(velocity < 33.325)
								{
									if(f < 2232.5)
									{
										if(velocity < 20.13)
										{
											if(rsrp < -87.5)
											{
												if(sinr < 13.5)
													return 27.3;
												else
													return 25.75;
											}
											else
											{
												if(rsrp < -86)
												{
													if(rsrq < -6.5)
													{
														if(velocity < 13.82)
															return 16.31;
														else
															return 19.97;
													}
													else
													{
														if(sinr < 13.5)
															return 16.58;
														else
															return 21.07;
													}
												}
												else
												{
													if(sinr < 11.5)
													{
														if(rsrq < -5.5)
														{
															if(rsrp < -82)
															{
																if(velocity < 13.455)
																{
																	if(rsrp < -84)
																		return 20.5;
																	else
																		return 24.46;
																}
																else
																{
																	if(payload < 7)
																		return 19.73;
																	else
																		return 20.7;
																}
															}
															else
															{
																if(payload < 7)
																{
																	if(sinr < 10)
																		return 17.88;
																	else
																		return 20.53;
																}
																else
																{
																	if(sinr < 6)
																		return 15.36;
																	else
																		return 23.58;
																}
															}
														}
														else
														{
															if(velocity < 14.61)
																return 16.59;
															else
																return 27.28;
														}
													}
													else
													{
														if(rsrp < -78.5)
														{
															if(sinr < 15.5)
															{
																if(velocity < 13.395)
																{
																	if(payload < 6.5)
																		return 22.74;
																	else
																		return 25.3;
																}
																else
																{
																	if(payload < 6.5)
																	{
																		if(velocity < 14.84)
																			return 20.86;
																		else
																			return 21.88;
																	}
																	else
																		return 23.02;
																}
															}
															else
															{
																if(payload < 7)
																	return 29.74;
																else
																{
																	if(rsrp < -83.5)
																		return 22.08;
																	else
																	{
																		if(rsrp < -81.5)
																			return 27.67;
																		else
																			return 23.71;
																	}
																}
															}
														}
														else
														{
															if(rsrp < -76)
															{
																if(sinr < 17)
																	return 23.43;
																else
																{
																	if(rsrq < -5.5)
																		return 19.34;
																	else
																		return 17.12;
																}
															}
															else
																return 27.91;
														}
													}
												}
											}
										}
										else
										{
											if(rsrq < -5.5)
											{
												if(velocity < 30.835)
												{
													if(rsrq < -6.5)
														return 16.4;
													else
														return 18.14;
												}
												else
												{
													if(payload < 6.5)
													{
														if(rsrq < -7.5)
															return 15.67;
														else
															return 17.24;
													}
													else
														return 13.72;
												}
											}
											else
											{
												if(payload < 7)
													return 13.67;
												else
													return 28.34;
											}
										}
									}
									else
									{
										if(sinr < 11.5)
										{
											if(rsrp < -87.5)
												return 12.4;
											else
												return 10.98;
										}
										else
										{
											if(sinr < 15)
												return 16.77;
											else
												return 19.07;
										}
									}
								}
								else
								{
									if(sinr < 7)
									{
										if(rsrp < -83)
											return 33.83;
										else
											return 28.43;
									}
									else
									{
										if(sinr < 13)
										{
											if(rsrq < -6.5)
												return 18.92;
											else
											{
												if(rsrp < -81.5)
													return 20.96;
												else
													return 19.43;
											}
										}
										else
											return 23.53;
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
						if(rsrq < -5.5)
						{
							if(payload < 6.5)
							{
								if(payload < 5.5)
								{
									if(rsrq < -6.5)
									{
										if(velocity < 2.21)
										{
											if(rsrp < -82.5)
												return 19.14;
											else
											{
												if(rsrp < -78.5)
													return 17.99;
												else
													return 18.76;
											}
										}
										else
											return 15.58;
									}
									else
									{
										if(velocity < 14.12)
										{
											if(rsrp < -82)
											{
												if(sinr < 21.5)
													return 19.13;
												else
													return 16.66;
											}
											else
											{
												if(rsrp < -78)
													return 15.83;
												else
													return 18.54;
											}
										}
										else
										{
											if(sinr < 22.5)
												return 9.37;
											else
											{
												if(velocity < 18.23)
													return 13.9;
												else
												{
													if(sinr < 32.5)
														return 12.36;
													else
														return 10.89;
												}
											}
										}
									}
								}
								else
								{
									if(f < 2232.5)
									{
										if(sinr < 30)
										{
											if(velocity < 6.02)
											{
												if(sinr < 25.5)
												{
													if(rsrq < -6.5)
													{
														if(sinr < 22)
															return 16.21;
														else
															return 17.19;
													}
													else
														return 23.82;
												}
												else
													return 26.91;
											}
											else
											{
												if(sinr < 26)
												{
													if(sinr < 21.5)
														return 16.86;
													else
													{
														if(velocity < 13.68)
														{
															if(rsrp < -83.5)
															{
																if(sinr < 23.5)
																	return 20;
																else
																	return 20.59;
															}
															else
																return 17.93;
														}
														else
														{
															if(rsrp < -87)
																return 20.32;
															else
															{
																if(sinr < 24)
																	return 22.91;
																else
																	return 23.54;
															}
														}
													}
												}
												else
												{
													if(sinr < 28.5)
													{
														if(rsrq < -6.5)
														{
															if(sinr < 27.5)
																return 16.75;
															else
																return 13.64;
														}
														else
														{
															if(rsrp < -82)
																return 13.82;
															else
																return 16.13;
														}
													}
													else
													{
														if(rsrp < -81)
															return 19.38;
														else
															return 17.48;
													}
												}
											}
										}
										else
											return 24.3533333333;
									}
									else
									{
										if(rsrq < -6.5)
										{
											if(rsrp < -86.5)
												return 31.75;
											else
												return 11.83;
										}
										else
										{
											if(sinr < 30)
												return 14.54;
											else
												return 11.42;
										}
									}
								}
							}
							else
							{
								if(payload < 7.5)
								{
									if(rsrp < -85)
									{
										if(f < 2232.5)
											return 15.09;
										else
										{
											if(velocity < 6.75)
												return 18.45;
											else
											{
												if(velocity < 11.84)
													return 21.29;
												else
													return 23.39;
											}
										}
									}
									else
									{
										if(rsrp < -82.5)
										{
											if(sinr < 22.5)
												return 26.19;
											else
												return 34.74;
										}
										else
										{
											if(sinr < 28)
											{
												if(rsrp < -81.5)
													return 21.05;
												else
												{
													if(velocity < 26.04)
													{
														if(sinr < 24)
															return 24.37;
														else
															return 26.5033333333;
													}
													else
														return 28.2;
												}
											}
											else
												return 19.05;
										}
									}
								}
								else
								{
									if(rsrp < -87.5)
									{
										if(rsrq < -6.5)
											return 16.29;
										else
											return 29.98;
									}
									else
									{
										if(rsrp < -80)
										{
											if(velocity < 5.735)
											{
												if(velocity < 1.815)
												{
													if(rsrp < -86.5)
														return 27.36;
													else
														return 21.05;
												}
												else
													return 23.19;
											}
											else
											{
												if(sinr < 26.5)
												{
													if(velocity < 19.455)
													{
														if(rsrp < -85.5)
															return 25.47;
														else
														{
															if(sinr < 25.5)
															{
																if(rsrp < -81.5)
																	return 18.465;
																else
																	return 19.06;
															}
															else
																return 16.03;
														}
													}
													else
														return 15.9428571429;
												}
												else
													return 11.02;
											}
										}
										else
										{
											if(rsrp < -78)
												return 26.89;
											else
											{
												if(velocity < 5.75)
													return 20.56;
												else
												{
													if(velocity < 18.48)
														return 17.76;
													else
														return 18.47;
												}
											}
										}
									}
								}
							}
						}
						else
						{
							if(velocity < 34.985)
							{
								if(sinr < 31)
								{
									if(velocity < 14.51)
									{
										if(velocity < 12.665)
										{
											if(velocity < 1.965)
											{
												if(f < 2232.5)
												{
													if(rsrp < -78.5)
														return 22.91;
													else
														return 22.06;
												}
												else
													return 21.71;
											}
											else
											{
												if(velocity < 5.69)
												{
													if(sinr < 23.5)
														return 18.6;
													else
														return 14.46;
												}
												else
												{
													if(payload < 6.5)
													{
														if(sinr < 25)
															return 18.22;
														else
															return 20.01;
													}
													else
														return 20.79;
												}
											}
										}
										else
										{
											if(velocity < 14.06)
											{
												if(rsrp < -79.5)
													return 27.38;
												else
												{
													if(payload < 7)
														return 25.16;
													else
														return 23.59;
												}
											}
											else
											{
												if(sinr < 25.5)
													return 20.38;
												else
													return 24.11;
											}
										}
									}
									else
									{
										if(payload < 7.5)
										{
											if(payload < 6.5)
											{
												if(sinr < 23.5)
												{
													if(velocity < 20.76)
														return 20.11;
													else
														return 20.61;
												}
												else
												{
													if(velocity < 19.39)
														return 20.38;
													else
													{
														if(rsrq < -4.5)
														{
															if(payload < 5.5)
															{
																if(rsrp < -81)
																	return 19.74;
																else
																	return 18.89;
															}
															else
																return 17.73;
														}
														else
														{
															if(sinr < 24.5)
																return 15.33;
															else
																return 18.23;
														}
													}
												}
											}
											else
											{
												if(rsrp < -79)
													return 25.18;
												else
													return 21.95;
											}
										}
										else
										{
											if(sinr < 29.5)
												return 12.52;
											else
												return 19.78;
										}
									}
								}
								else
								{
									if(rsrq < -4.5)
									{
										if(payload < 6.5)
										{
											if(rsrp < -78)
												return 14.76;
											else
												return 18.06;
										}
										else
										{
											if(sinr < 38)
											{
												if(sinr < 34.5)
													return 21.93;
												else
													return 26.6;
											}
											else
												return 20.4;
										}
									}
									else
										return 38.17;
								}
							}
							else
							{
								if(rsrp < -77)
									return 26.435;
								else
									return 29.24;
							}
						}
					}
					else
					{
						if(payload < 6.5)
						{
							if(rsrp < -71.5)
							{
								if(payload < 5.5)
								{
									if(rsrp < -73.5)
										return 21.81;
									else
										return 20.67;
								}
								else
								{
									if(velocity < 26.005)
										return 25.45;
									else
									{
										if(velocity < 35.1)
											return 22.46;
										else
											return 23.98;
									}
								}
							}
							else
							{
								if(sinr < 28)
									return 22.954;
								else
								{
									if(rsrp < -69)
										return 13.81;
									else
									{
										if(rsrp < -66.5)
										{
											if(payload < 5.5)
											{
												if(velocity < 7.465)
													return 20.7;
												else
													return 22.12;
											}
											else
												return 19.43;
										}
										else
											return 25.86;
									}
								}
							}
						}
						else
						{
							if(velocity < 12.265)
							{
								if(velocity < 3.635)
								{
									if(sinr < 30.5)
										return 25.16;
									else
										return 24.42;
								}
								else
								{
									if(rsrq < -5.5)
										return 28.82;
									else
										return 31.15;
								}
							}
							else
							{
								if(rsrp < -67.5)
								{
									if(velocity < 13.75)
									{
										if(rsrp < -71.5)
											return 22.9;
										else
											return 23.4;
									}
									else
									{
										if(rsrq < -5.5)
											return 19.08;
										else
											return 21.82;
									}
								}
								else
									return 26.48;
							}
						}
					}
				}
			}
			else
			{
				if(sinr < 20.5)
				{
					if(f < 1384.5)
					{
						if(sinr < 11.5)
						{
							if(payload < 9.5)
								return 8.09;
							else
								return 7.47;
						}
						else
							return 4.505;
					}
					else
					{
						if(sinr < 2.5)
						{
							if(velocity < 21.405)
							{
								if(sinr < -2.5)
									return 16.28;
								else
									return 16.8433333333;
							}
							else
								return 20.84;
						}
						else
						{
							if(rsrq < -6.5)
							{
								if(velocity < 5.975)
								{
									if(payload < 9.5)
									{
										if(velocity < 2.63)
										{
											if(rsrp < -79)
												return 17.79;
											else
												return 13.84;
										}
										else
											return 23.07;
									}
									else
									{
										if(f < 2232.5)
										{
											if(rsrq < -10.5)
												return 12.49;
											else
											{
												if(rsrq < -9)
													return 14.11;
												else
													return 13.56;
											}
										}
										else
											return 20.42;
									}
								}
								else
								{
									if(velocity < 36.26)
									{
										if(rsrp < -87.5)
										{
											if(sinr < 5)
												return 38.54;
											else
											{
												if(rsrq < -7.5)
												{
													if(sinr < 11)
														return 23.69;
													else
														return 15.24;
												}
												else
													return 23.8;
											}
										}
										else
										{
											if(rsrp < -73.5)
											{
												if(rsrq < -9.5)
												{
													if(sinr < 8.5)
														return 13.45;
													else
														return 21.47;
												}
												else
												{
													if(sinr < 15)
													{
														if(sinr < 6)
														{
															if(rsrp < -85.5)
																return 14.72;
															else
																return 20.82;
														}
														else
														{
															if(sinr < 8.5)
															{
																if(rsrp < -85)
																	return 24.92;
																else
																	return 25.91;
															}
															else
															{
																if(payload < 9.5)
																{
																	if(sinr < 11.5)
																	{
																		if(velocity < 17.15)
																			return 19.14;
																		else
																		{
																			if(sinr < 9.5)
																				return 20.93;
																			else
																				return 20.45;
																		}
																	}
																	else
																		return 21.94;
																}
																else
																{
																	if(rsrp < -86.5)
																		return 30.41;
																	else
																	{
																		if(velocity < 13.27)
																		{
																			if(rsrp < -84)
																				return 19.78;
																			else
																				return 20.71;
																		}
																		else
																		{
																			if(velocity < 17.875)
																				return 29.04;
																			else
																			{
																				if(rsrp < -85.5)
																					return 21.35;
																				else
																					return 22.25;
																			}
																		}
																	}
																}
															}
														}
													}
													else
													{
														if(velocity < 13.375)
														{
															if(rsrp < -83.5)
																return 12.53;
															else
																return 17.47;
														}
														else
														{
															if(rsrq < -7.5)
																return 22.6933333333;
															else
																return 14.23;
														}
													}
												}
											}
											else
												return 14.4;
										}
									}
									else
										return 31.13;
								}
							}
							else
							{
								if(velocity < 12.355)
								{
									if(sinr < 18)
									{
										if(f < 2232.5)
										{
											if(velocity < 6.65)
											{
												if(rsrq < -5.5)
												{
													if(rsrp < -85.5)
														return 19.41;
													else
														return 22.8;
												}
												else
													return 24.95;
											}
											else
											{
												if(rsrp < -85.5)
												{
													if(sinr < 15.5)
														return 27.71;
													else
														return 26.26;
												}
												else
												{
													if(sinr < 15)
														return 23.27;
													else
														return 24.065;
												}
											}
										}
										else
										{
											if(sinr < 12.5)
											{
												if(payload < 9.5)
													return 18.84;
												else
													return 20.01;
											}
											else
											{
												if(rsrq < -5.5)
													return 15.26;
												else
													return 18.32;
											}
										}
									}
									else
									{
										if(rsrp < -85)
											return 16.68;
										else
											return 14.22;
									}
								}
								else
								{
									if(rsrp < -84.5)
									{
										if(payload < 9.5)
										{
											if(rsrp < -87)
												return 28.26;
											else
												return 29.21;
										}
										else
										{
											if(velocity < 24.07)
												return 31.92;
											else
												return 25.37;
										}
									}
									else
									{
										if(rsrp < -82)
										{
											if(velocity < 19.315)
											{
												if(payload < 9.5)
													return 28.03;
												else
													return 20.63;
											}
											else
											{
												if(rsrp < -83.5)
													return 17.5;
												else
													return 12.58;
											}
										}
										else
										{
											if(rsrp < -79.5)
											{
												if(velocity < 28.885)
													return 37.23;
												else
													return 27.51;
											}
											else
											{
												if(sinr < 16.5)
												{
													if(velocity < 13.245)
													{
														if(velocity < 12.745)
															return 26.93;
														else
															return 26.06;
													}
													else
													{
														if(rsrq < -5.5)
															return 23.59;
														else
															return 26.65;
													}
												}
												else
													return 24.54;
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
					if(f < 2232.5)
					{
						if(rsrq < -6.5)
						{
							if(rsrq < -8.5)
								return 25.13;
							else
							{
								if(rsrp < -86.5)
								{
									if(payload < 9.5)
										return 16.45;
									else
										return 17.93;
								}
								else
									return 19.21;
							}
						}
						else
						{
							if(payload < 9.5)
							{
								if(velocity < 15.695)
								{
									if(sinr < 27.5)
									{
										if(rsrq < -5.5)
										{
											if(sinr < 23.5)
											{
												if(sinr < 22.5)
												{
													if(rsrp < -71.5)
														return 24.44;
													else
														return 30.1;
												}
												else
													return 38.34;
											}
											else
											{
												if(rsrp < -77.5)
												{
													if(sinr < 25.5)
													{
														if(velocity < 8.675)
															return 22.29;
														else
															return 32.33;
													}
													else
														return 26.18;
												}
												else
													return 23.13;
											}
										}
										else
										{
											if(sinr < 26)
											{
												if(rsrp < -76)
													return 20.51;
												else
													return 22.97;
											}
											else
												return 28.54;
										}
									}
									else
									{
										if(velocity < 13.47)
										{
											if(sinr < 28.5)
												return 14.8;
											else
											{
												if(sinr < 30.5)
												{
													if(rsrp < -74)
														return 23.21;
													else
														return 20.68;
												}
												else
												{
													if(rsrp < -73.5)
														return 16.99;
													else
													{
														if(rsrp < -69.5)
															return 19.09;
														else
															return 20.25;
													}
												}
											}
										}
										else
											return 24.9;
									}
								}
								else
								{
									if(rsrp < -80.5)
									{
										if(rsrq < -5.5)
											return 26.21;
										else
											return 21.92;
									}
									else
									{
										if(velocity < 30.21)
										{
											if(velocity < 16.335)
												return 29.15;
											else
											{
												if(sinr < 29.5)
													return 29.13;
												else
													return 34.25;
											}
										}
										else
											return 22.88;
									}
								}
							}
							else
							{
								if(rsrp < -85.5)
								{
									if(velocity < 18.49)
										return 41.78;
									else
										return 34.38;
								}
								else
								{
									if(velocity < 21.995)
									{
										if(rsrp < -73)
										{
											if(velocity < 14.51)
											{
												if(sinr < 27)
													return 29.35;
												else
												{
													if(velocity < 5.38)
														return 27.22;
													else
													{
														if(velocity < 12.59)
															return 21.96;
														else
															return 25.89;
													}
												}
											}
											else
											{
												if(rsrp < -79.5)
												{
													if(velocity < 15.315)
														return 30.38;
													else
														return 31.91;
												}
												else
													return 28.57;
											}
										}
										else
										{
											if(rsrp < -67)
											{
												if(velocity < 14.85)
												{
													if(rsrq < -5.5)
														return 35.07;
													else
													{
														if(rsrq < -4.5)
															return 32.92;
														else
															return 34.74;
													}
												}
												else
													return 32.48;
											}
											else
												return 21.91;
										}
									}
									else
									{
										if(velocity < 30.845)
											return 23.41;
										else
										{
											if(rsrp < -76.5)
												return 31.5;
											else
											{
												if(rsrq < -5)
													return 30.48;
												else
													return 24.44;
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
							return 20.22;
						else
							return 17.24;
					}
				}
			}
		}
	}
}

float tmobile_dl_ns3_tree_7(float payload, float rsrp, float rsrq, float sinr, float velocity, float f)
{
	if(rsrp < -89.5)
	{
		if(payload < 3.5)
		{
			if(rsrp < -99.5)
			{
				if(velocity < 22.295)
				{
					if(sinr < 8)
					{
						if(rsrq < -9.5)
						{
							if(sinr < 1.5)
							{
								if(sinr < 0.5)
								{
									if(sinr < -3.5)
									{
										if(rsrq < -11.5)
										{
											if(rsrq < -13.5)
											{
												if(rsrp < -106.5)
													return 1.91;
												else
													return 0.72;
											}
											else
											{
												if(payload < 1.05)
												{
													if(rsrp < -103.5)
														return 2.87;
													else
														return 4.68;
												}
												else
													return 1.98;
											}
										}
										else
										{
											if(rsrp < -106.5)
												return 4.06;
											else
												return 11.59;
										}
									}
									else
									{
										if(rsrp < -100.5)
										{
											if(velocity < 14.77)
											{
												if(rsrp < -109)
													return 6.22;
												else
												{
													if(payload < 0.3)
														return 3.51;
													else
													{
														if(velocity < 6.87)
															return 2.78;
														else
														{
															if(sinr < -2.5)
																return 6;
															else
																return 5.39;
														}
													}
												}
											}
											else
											{
												if(rsrp < -101.5)
												{
													if(velocity < 16.345)
														return 2.8866666667;
													else
														return 1.75;
												}
												else
												{
													if(velocity < 15.79)
														return 5.1;
													else
													{
														if(payload < 0.55)
															return 4.6;
														else
															return 3.57;
													}
												}
											}
										}
										else
										{
											if(velocity < 13.46)
											{
												if(velocity < 11.75)
													return 6.95;
												else
												{
													if(sinr < -1.5)
														return 6.31;
													else
													{
														if(payload < 0.55)
															return 6.78;
														else
														{
															if(velocity < 12.225)
																return 4.72;
															else
																return 3.35;
														}
													}
												}
											}
											else
												return 1.92;
										}
									}
								}
								else
								{
									if(rsrq < -10.5)
									{
										if(velocity < 13.32)
											return 3.07;
										else
											return 10;
									}
									else
										return 12.07;
								}
							}
							else
							{
								if(velocity < 9.415)
									return 0.88;
								else
								{
									if(rsrp < -100.5)
									{
										if(sinr < 3)
										{
											if(rsrp < -101.5)
												return 2.93;
											else
												return 1.71;
										}
										else
										{
											if(velocity < 12.26)
												return 3.2;
											else
												return 3.82;
										}
									}
									else
									{
										if(sinr < 2.5)
											return 5;
										else
											return 4.2366666667;
									}
								}
							}
						}
						else
						{
							if(payload < 2.5)
							{
								if(rsrp < -107)
									return 0.66;
								else
								{
									if(rsrp < -100.5)
									{
										if(rsrq < -8.5)
										{
											if(payload < 0.3)
											{
												if(sinr < 4.5)
													return 4;
												else
													return 2.57;
											}
											else
											{
												if(rsrp < -102.5)
												{
													if(sinr < 4.5)
													{
														if(sinr < 3.5)
															return 2.5;
														else
															return 1.31;
													}
													else
														return 7.63;
												}
												else
												{
													if(payload < 1.5)
													{
														if(velocity < 12.65)
															return 5.35;
														else
															return 8.9766666667;
													}
													else
														return 4.44;
												}
											}
										}
										else
											return 9.55;
									}
									else
									{
										if(sinr < 5.5)
										{
											if(payload < 0.75)
												return 2.95;
											else
											{
												if(sinr < 3.5)
												{
													if(sinr < 0.5)
														return 4.41;
													else
														return 5.15;
												}
												else
													return 4.15;
											}
										}
										else
											return 1.38;
									}
								}
							}
							else
							{
								if(velocity < 14.435)
								{
									if(velocity < 9.455)
										return 9.85;
									else
									{
										if(sinr < 5.5)
											return 13.04;
										else
											return 11.75;
									}
								}
								else
								{
									if(rsrp < -102.5)
										return 4.87;
									else
										return 10.98;
								}
							}
						}
					}
					else
					{
						if(velocity < 12.565)
						{
							if(payload < 1.05)
							{
								if(rsrq < -8)
									return 4.1;
								else
								{
									if(velocity < 5.68)
										return 2.6;
									else
										return 3.67;
								}
							}
							else
							{
								if(rsrp < -105)
									return 7.46;
								else
									return 5.6;
							}
						}
						else
						{
							if(velocity < 14.635)
							{
								if(rsrq < -7.5)
								{
									if(rsrp < -100.5)
									{
										if(rsrp < -101.5)
											return 1.81;
										else
											return 2.44;
									}
									else
										return 3.13;
								}
								else
									return 1.45;
							}
							else
							{
								if(payload < 0.75)
									return 7.72;
								else
								{
									if(velocity < 15.155)
										return 4.18;
									else
										return 2.74;
								}
							}
						}
					}
				}
				else
				{
					if(rsrp < -100.5)
					{
						if(velocity < 31.63)
						{
							if(payload < 2)
							{
								if(rsrq < -7.5)
								{
									if(sinr < -9)
										return 8.01;
									else
									{
										if(sinr < 9.5)
											return 6.69;
										else
											return 6.02;
									}
								}
								else
									return 5.07;
							}
							else
							{
								if(rsrq < -8)
									return 6.62;
								else
									return 10.28;
							}
						}
						else
						{
							if(rsrq < -8.5)
								return 4.85;
							else
							{
								if(rsrp < -101.5)
								{
									if(sinr < 11.5)
										return 3.9;
									else
										return 2.86;
								}
								else
									return 4.5;
							}
						}
					}
					else
					{
						if(payload < 2.5)
							return 6.92;
						else
						{
							if(velocity < 33.54)
								return 9.51;
							else
								return 13.58;
						}
					}
				}
			}
			else
			{
				if(rsrq < -13.5)
					return 13.48;
				else
				{
					if(payload < 0.75)
					{
						if(sinr < -0.5)
						{
							if(rsrp < -95.5)
							{
								if(velocity < 9.03)
									return 38.1;
								else
								{
									if(payload < 0.3)
										return 0.36;
									else
									{
										if(velocity < 14.95)
											return 10.61;
										else
											return 9.64;
									}
								}
							}
							else
							{
								if(rsrp < -92.5)
								{
									if(velocity < 14.505)
									{
										if(rsrq < -10)
											return 4.47;
										else
											return 3.92;
									}
									else
										return 3.14;
								}
								else
									return 6.3;
							}
						}
						else
						{
							if(payload < 0.3)
							{
								if(rsrp < -91.5)
								{
									if(velocity < 3.69)
									{
										if(rsrp < -94)
										{
											if(rsrq < -7)
											{
												if(rsrp < -96.5)
													return 7.21;
												else
													return 8.6;
											}
											else
												return 5.44;
										}
										else
										{
											if(sinr < 19.5)
											{
												if(rsrq < -7.5)
													return 4.82;
												else
													return 4.19;
											}
											else
												return 4.85;
										}
									}
									else
									{
										if(velocity < 11.375)
										{
											if(sinr < 5.5)
											{
												if(rsrp < -95)
													return 4.49;
												else
													return 3.25;
											}
											else
											{
												if(sinr < 11)
													return 5.755;
												else
												{
													if(rsrp < -97.5)
														return 5.16;
													else
														return 4.35;
												}
											}
										}
										else
										{
											if(f < 2232.5)
											{
												if(velocity < 12.11)
													return 2.98;
												else
												{
													if(velocity < 13.01)
														return 3.8383333333;
													else
													{
														if(sinr < 10.5)
															return 4.68;
														else
															return 3.99;
													}
												}
											}
											else
												return 5.0633333333;
										}
									}
								}
								else
								{
									if(rsrq < -7.5)
									{
										if(rsrp < -90.5)
										{
											if(sinr < 9.5)
											{
												if(sinr < 8.5)
												{
													if(velocity < 1.6)
														return 4.94;
													else
													{
														if(rsrq < -9)
															return 6.61;
														else
															return 7.08;
													}
												}
												else
													return 5.67;
											}
											else
												return 8.42;
										}
										else
										{
											if(sinr < 8.5)
												return 5.4466666667;
											else
												return 4.3875;
										}
									}
									else
									{
										if(velocity < 5.435)
										{
											if(rsrp < -90.5)
											{
												if(rsrq < -6.5)
													return 3.88;
												else
													return 2.74;
											}
											else
											{
												if(sinr < 25.5)
													return 5.56;
												else
													return 3.98;
											}
										}
										else
										{
											if(sinr < 11.5)
												return 5.42;
											else
												return 5.9133333333;
										}
									}
								}
							}
							else
							{
								if(velocity < 11.25)
								{
									if(sinr < 11.5)
									{
										if(sinr < 0.5)
											return 3.61;
										else
										{
											if(velocity < 8.515)
											{
												if(rsrq < -7)
												{
													if(velocity < 5.78)
													{
														if(rsrp < -95.5)
														{
															if(rsrq < -8.5)
															{
																if(velocity < 1.665)
																	return 10.42;
																else
																	return 7.71;
															}
															else
																return 7.75;
														}
														else
															return 6.9225;
													}
													else
													{
														if(rsrp < -91)
															return 7.89;
														else
															return 6.04;
													}
												}
												else
													return 9.64;
											}
											else
											{
												if(rsrp < -97)
													return 13.65;
												else
												{
													if(rsrq < -6.5)
													{
														if(velocity < 10.58)
															return 8.26;
														else
															return 11.59;
													}
													else
														return 9.66;
												}
											}
										}
									}
									else
									{
										if(rsrq < -7.5)
										{
											if(sinr < 15.5)
												return 7.0863636364;
											else
											{
												if(rsrp < -93)
													return 3.16;
												else
													return 5.19;
											}
										}
										else
										{
											if(f < 2232.5)
												return 3.27;
											else
												return 6.4166666667;
										}
									}
								}
								else
								{
									if(rsrq < -6)
									{
										if(f < 1384.5)
											return 0.85;
										else
										{
											if(rsrp < -97.5)
											{
												if(velocity < 13.93)
													return 4.05;
												else
													return 2.65;
											}
											else
											{
												if(sinr < 6)
													return 8.6;
												else
												{
													if(sinr < 16)
													{
														if(rsrp < -93.5)
														{
															if(sinr < 13.5)
															{
																if(rsrq < -8.5)
																	return 8.66;
																else
																{
																	if(rsrq < -7.5)
																	{
																		if(f < 2232.5)
																			return 5.81;
																		else
																			return 4.11;
																	}
																	else
																	{
																		if(sinr < 12.5)
																			return 6.49;
																		else
																			return 7.87;
																	}
																}
															}
															else
																return 3.41;
														}
														else
														{
															if(velocity < 15.85)
															{
																if(sinr < 12.5)
																{
																	if(sinr < 10.5)
																	{
																		if(rsrq < -7.5)
																			return 6.2;
																		else
																		{
																			if(f < 2232.5)
																			{
																				if(velocity < 14.505)
																					return 4.45;
																				else
																				{
																					if(rsrp < -91.5)
																						return 8.64;
																					else
																						return 6.27;
																				}
																			}
																			else
																				return 5.28;
																		}
																	}
																	else
																		return 3.38;
																}
																else
																	return 8.1;
															}
															else
																return 2.03;
														}
													}
													else
													{
														if(rsrp < -91.5)
															return 2.46;
														else
															return 3.39;
													}
												}
											}
										}
									}
									else
										return 10.39;
								}
							}
						}
					}
					else
					{
						if(payload < 1.5)
						{
							if(sinr < 22.5)
							{
								if(rsrq < -9.5)
								{
									if(velocity < 25.655)
									{
										if(sinr < 11)
										{
											if(rsrp < -93)
											{
												if(rsrq < -10.5)
												{
													if(f < 2232.5)
													{
														if(rsrp < -95)
														{
															if(rsrp < -97)
																return 3.53;
															else
																return 3.03;
														}
														else
															return 4.54;
													}
													else
														return 5.67;
												}
												else
												{
													if(sinr < -2.5)
														return 3.15;
													else
													{
														if(sinr < 1)
														{
															if(rsrp < -98)
																return 7.1;
															else
																return 8.96;
														}
														else
														{
															if(rsrp < -98)
																return 4.15;
															else
																return 5.8;
														}
													}
												}
											}
											else
												return 9.62;
										}
										else
											return 2.81;
									}
									else
										return 10.81;
								}
								else
								{
									if(velocity < 14.63)
									{
										if(rsrp < -93.5)
										{
											if(f < 2232.5)
											{
												if(sinr < 1)
													return 8.47;
												else
												{
													if(sinr < 5)
													{
														if(rsrp < -97.5)
															return 7.05;
														else
															return 3.67;
													}
													else
													{
														if(sinr < 13.5)
														{
															if(rsrp < -94.5)
															{
																if(rsrp < -97)
																	return 6.26;
																else
																	return 7.77;
															}
															else
																return 10.24;
														}
														else
															return 6.19;
													}
												}
											}
											else
											{
												if(rsrq < -7)
													return 20.73;
												else
													return 7.41;
											}
										}
										else
										{
											if(rsrp < -91.5)
											{
												if(f < 2232.5)
												{
													if(sinr < 3.5)
														return 6.39;
													else
													{
														if(rsrp < -92.5)
															return 7;
														else
														{
															if(sinr < 14)
																return 7.55;
															else
																return 6.8;
														}
													}
												}
												else
												{
													if(rsrp < -92.5)
														return 6.57;
													else
														return 4.32;
												}
											}
											else
											{
												if(sinr < 15.5)
												{
													if(sinr < 11.5)
													{
														if(rsrq < -7.5)
															return 4.6;
														else
															return 2.92;
													}
													else
													{
														if(velocity < 4.18)
															return 6.82;
														else
														{
															if(rsrp < -90.5)
																return 5.86;
															else
																return 5.22;
														}
													}
												}
												else
													return 9.66;
											}
										}
									}
									else
									{
										if(sinr < 2)
											return 0.22;
										else
										{
											if(velocity < 15.515)
											{
												if(rsrq < -7)
													return 11.75;
												else
													return 14.44;
											}
											else
											{
												if(velocity < 28.335)
												{
													if(rsrq < -7)
													{
														if(rsrp < -96.5)
															return 7.56;
														else
															return 9.45;
													}
													else
													{
														if(sinr < 13)
															return 7.01;
														else
															return 7.87;
													}
												}
												else
												{
													if(sinr < 8)
														return 10.75;
													else
														return 13.63;
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
									if(rsrp < -93.5)
										return 10.6;
									else
										return 12.85;
								}
								else
								{
									if(sinr < 30.5)
										return 8.58;
									else
										return 5.54;
								}
							}
						}
						else
						{
							if(rsrq < -7.5)
							{
								if(rsrp < -94.5)
								{
									if(velocity < 13.915)
									{
										if(rsrp < -97.5)
										{
											if(rsrq < -9.5)
											{
												if(velocity < 11.505)
													return 8.27;
												else
													return 11.58;
											}
											else
											{
												if(velocity < 6.87)
												{
													if(payload < 2.5)
													{
														if(rsrq < -8.5)
															return 3.205;
														else
															return 4.79;
													}
													else
													{
														if(rsrp < -98.5)
															return 5.09;
														else
															return 4.29;
													}
												}
												else
													return 11.64;
											}
										}
										else
										{
											if(rsrq < -9.5)
											{
												if(velocity < 10.575)
												{
													if(velocity < 9.105)
													{
														if(rsrp < -96.5)
															return 2.96;
														else
														{
															if(sinr < 2.5)
															{
																if(velocity < 4.51)
																	return 10.08;
																else
																	return 8.13;
															}
															else
																return 4.89;
														}
													}
													else
														return 3.3;
												}
												else
												{
													if(sinr < 7)
														return 10.51;
													else
														return 7.81;
												}
											}
											else
											{
												if(sinr < 3.5)
													return 17.32;
												else
												{
													if(velocity < 5.78)
													{
														if(sinr < 7)
															return 7.43;
														else
														{
															if(payload < 2.5)
																return 11.63;
															else
																return 11.03;
														}
													}
													else
														return 8.22;
												}
											}
										}
									}
									else
									{
										if(velocity < 33.525)
										{
											if(sinr < 7.5)
											{
												if(payload < 2.5)
												{
													if(sinr < 4.5)
													{
														if(velocity < 14.025)
															return 2.87;
														else
														{
															if(f < 2232.5)
																return 4.5285714286;
															else
																return 6.47;
														}
													}
													else
													{
														if(sinr < 6)
															return 2.56;
														else
															return 3.04;
													}
												}
												else
												{
													if(rsrq < -10.5)
													{
														if(rsrp < -96.5)
															return 7.76;
														else
															return 7.29;
													}
													else
													{
														if(f < 2232.5)
														{
															if(sinr < 1.5)
																return 4.98;
															else
																return 4.4;
														}
														else
															return 6.28;
													}
												}
											}
											else
												return 8.5;
										}
										else
											return 9.25;
									}
								}
								else
								{
									if(velocity < 12.555)
									{
										if(sinr < 20.5)
										{
											if(velocity < 5.48)
											{
												if(f < 2232.5)
												{
													if(rsrp < -93.5)
														return 15.41;
													else
													{
														if(rsrp < -92)
														{
															if(rsrq < -9.5)
																return 12.44;
															else
																return 9.87;
														}
														else
															return 9.5733333333;
													}
												}
												else
													return 8.48;
											}
											else
											{
												if(payload < 2.5)
												{
													if(rsrq < -8.5)
														return 7.08;
													else
														return 8.83;
												}
												else
												{
													if(rsrq < -8.5)
													{
														if(velocity < 10.635)
															return 3.95;
														else
															return 6.82;
													}
													else
													{
														if(rsrp < -92)
															return 7.2;
														else
															return 9.13;
													}
												}
											}
										}
										else
											return 6.39;
									}
									else
									{
										if(sinr < 4.5)
											return 13.49;
										else
											return 15;
									}
								}
							}
							else
							{
								if(rsrp < -94.5)
								{
									if(sinr < 5.5)
										return 11.74;
									else
									{
										if(sinr < 13.5)
										{
											if(payload < 2.5)
											{
												if(sinr < 6.5)
													return 5.24;
												else
													return 4.06;
											}
											else
												return 3.9125;
										}
										else
										{
											if(payload < 2.5)
											{
												if(rsrq < -6.5)
													return 10.38;
												else
													return 11;
											}
											else
												return 4.66;
										}
									}
								}
								else
								{
									if(rsrp < -93.5)
									{
										if(payload < 2.5)
											return 7.46;
										else
										{
											if(sinr < 7.5)
												return 9.48;
											else
												return 11.67;
										}
									}
									else
									{
										if(f < 2232.5)
										{
											if(sinr < 23.5)
											{
												if(rsrq < -6.5)
												{
													if(sinr < 11.5)
													{
														if(velocity < 4.235)
															return 12.47;
														else
															return 11.23;
													}
													else
													{
														if(sinr < 15)
															return 14.6;
														else
														{
															if(rsrp < -91.5)
																return 12.3;
															else
																return 13.39;
														}
													}
												}
												else
												{
													if(velocity < 12.995)
													{
														if(payload < 2.5)
															return 15.07;
														else
															return 12.41;
													}
													else
													{
														if(rsrp < -91)
															return 12.95;
														else
															return 23.98;
													}
												}
											}
											else
											{
												if(sinr < 28.5)
												{
													if(payload < 2.5)
														return 9.74;
													else
														return 11.4;
												}
												else
													return 7.32;
											}
										}
										else
										{
											if(sinr < 10.5)
											{
												if(sinr < 9)
													return 10.91;
												else
												{
													if(velocity < 13.59)
														return 15.95;
													else
														return 13.4;
												}
											}
											else
											{
												if(sinr < 20)
												{
													if(rsrp < -90.5)
													{
														if(payload < 2.5)
														{
															if(rsrq < -6.5)
																return 6.54;
															else
																return 7.33;
														}
														else
														{
															if(rsrp < -91.5)
																return 9.1;
															else
																return 6.98;
														}
													}
													else
														return 9.19;
												}
												else
												{
													if(velocity < 4.945)
														return 13.11;
													else
														return 11.035;
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
			if(rsrq < -8.5)
			{
				if(rsrq < -12.5)
				{
					if(sinr < -2.5)
						return 3.612;
					else
					{
						if(sinr < -1)
						{
							if(rsrp < -97)
								return 10.23;
							else
								return 18;
						}
						else
						{
							if(rsrp < -106)
								return 8.98;
							else
								return 4.8;
						}
					}
				}
				else
				{
					if(rsrp < -98.5)
					{
						if(velocity < 16.74)
						{
							if(rsrq < -10.5)
							{
								if(payload < 7)
								{
									if(rsrp < -100)
									{
										if(sinr < 0)
										{
											if(velocity < 4.995)
												return 4.19;
											else
											{
												if(velocity < 11.785)
													return 5.78;
												else
													return 4.75;
											}
										}
										else
										{
											if(velocity < 13.99)
											{
												if(rsrq < -11.5)
													return 7.88;
												else
													return 9.098;
											}
											else
											{
												if(payload < 4.5)
													return 6.01;
												else
													return 5.39;
											}
										}
									}
									else
										return 8.755;
								}
								else
								{
									if(rsrq < -11.5)
									{
										if(sinr < -1.5)
										{
											if(payload < 8.5)
												return 21.81;
											else
											{
												if(payload < 9.5)
													return 14.4;
												else
													return 13.82;
											}
										}
										else
										{
											if(payload < 9)
												return 6.93;
											else
												return 9.29;
										}
									}
									else
									{
										if(rsrp < -100.5)
										{
											if(payload < 9.5)
											{
												if(sinr < 2)
												{
													if(sinr < -2.5)
														return 13.35;
													else
														return 10.38;
												}
												else
													return 6.06;
											}
											else
											{
												if(rsrp < -107)
													return 9.46;
												else
												{
													if(velocity < 11.59)
														return 13.5;
													else
														return 15.59;
												}
											}
										}
										else
										{
											if(sinr < 1)
											{
												if(velocity < 11.525)
													return 8.93;
												else
													return 5.08;
											}
											else
												return 9.19;
										}
									}
								}
							}
							else
							{
								if(payload < 5.5)
								{
									if(velocity < 12.61)
									{
										if(sinr < -0.5)
											return 11.97;
										else
										{
											if(sinr < 4.5)
											{
												if(rsrp < -102)
												{
													if(rsrq < -9.5)
													{
														if(payload < 4.5)
															return 4.8;
														else
															return 2.66;
													}
													else
														return 2.96;
												}
												else
												{
													if(rsrp < -99.5)
														return 12.77;
													else
														return 2.98;
												}
											}
											else
												return 9.86;
										}
									}
									else
									{
										if(payload < 4.5)
										{
											if(sinr < 6)
												return 9.98;
											else
											{
												if(velocity < 13.615)
													return 14.38;
												else
													return 8.8;
											}
										}
										else
										{
											if(sinr < 9.5)
											{
												if(rsrp < -101)
												{
													if(velocity < 14.33)
													{
														if(velocity < 13.41)
															return 10.47;
														else
															return 13.71;
													}
													else
														return 6.93;
												}
												else
													return 14.88;
											}
											else
												return 5.43;
										}
									}
								}
								else
								{
									if(sinr < 0.5)
									{
										if(sinr < -4.5)
											return 2.91;
										else
										{
											if(rsrp < -106.5)
											{
												if(payload < 8.5)
													return 19.02;
												else
													return 21.99;
											}
											else
											{
												if(payload < 8)
												{
													if(rsrp < -100.5)
														return 17.59;
													else
														return 22.21;
												}
												else
												{
													if(rsrp < -104)
														return 9.7;
													else
														return 12.49;
												}
											}
										}
									}
									else
									{
										if(sinr < 8.5)
										{
											if(velocity < 15.73)
											{
												if(sinr < 1.5)
												{
													if(velocity < 12.315)
														return 8.4166666667;
													else
													{
														if(rsrp < -102.5)
															return 9.62;
														else
															return 10.61;
													}
												}
												else
												{
													if(rsrq < -9.5)
													{
														if(sinr < 5.5)
														{
															if(rsrp < -104.5)
																return 14.7;
															else
															{
																if(payload < 7)
																	return 10.55;
																else
																	return 11.05;
															}
														}
														else
														{
															if(rsrp < -103)
																return 4.79;
															else
																return 9.13;
														}
													}
													else
													{
														if(payload < 8.5)
														{
															if(sinr < 3)
																return 12.41;
															else
															{
																if(rsrp < -104.5)
																	return 10.65;
																else
																	return 11.14;
															}
														}
														else
														{
															if(sinr < 7.5)
																return 13.54;
															else
																return 14.98;
														}
													}
												}
											}
											else
												return 5.36;
										}
										else
										{
											if(rsrp < -100.5)
											{
												if(payload < 7.5)
													return 17.4;
												else
													return 11.3;
											}
											else
											{
												if(sinr < 11)
													return 15.79;
												else
													return 20.54;
											}
										}
									}
								}
							}
						}
						else
						{
							if(rsrp < -105.5)
							{
								if(payload < 5)
									return 5.47;
								else
									return 10.68;
							}
							else
							{
								if(rsrp < -102.5)
									return 14.3825;
								else
								{
									if(rsrp < -101.5)
										return 19.34;
									else
									{
										if(sinr < 3.5)
											return 16.545;
										else
											return 18.35;
									}
								}
							}
						}
					}
					else
					{
						if(f < 1384.5)
						{
							if(sinr < 3)
								return 1.8;
							else
								return 3.12;
						}
						else
						{
							if(payload < 6.5)
							{
								if(rsrq < -10.5)
								{
									if(velocity < 10.29)
									{
										if(rsrp < -91.5)
										{
											if(sinr < 0)
												return 15.39;
											else
												return 12.17;
										}
										else
										{
											if(rsrq < -11.5)
												return 10.49;
											else
											{
												if(payload < 5.5)
													return 9.19;
												else
												{
													if(sinr < 7.5)
														return 10.4;
													else
														return 9.89;
												}
											}
										}
									}
									else
									{
										if(sinr < 0.5)
										{
											if(velocity < 14.035)
												return 5.945;
											else
												return 9.28;
										}
										else
										{
											if(payload < 5.5)
												return 12.91;
											else
												return 8.834;
										}
									}
								}
								else
								{
									if(rsrp < -95.5)
									{
										if(f < 2232.5)
										{
											if(sinr < 8.5)
											{
												if(sinr < 3)
												{
													if(rsrq < -9.5)
														return 14.21;
													else
														return 15.55;
												}
												else
												{
													if(velocity < 12.8)
														return 16.16;
													else
														return 16.79;
												}
											}
											else
											{
												if(payload < 4.5)
													return 14.19;
												else
													return 12.72;
											}
										}
										else
											return 11.81;
									}
									else
									{
										if(velocity < 12.02)
										{
											if(rsrp < -94.5)
												return 9.96;
											else
											{
												if(sinr < 9.5)
												{
													if(rsrp < -91.5)
														return 10.1633333333;
													else
													{
														if(sinr < 7.5)
															return 13.34;
														else
														{
															if(payload < 5.5)
																return 11.16;
															else
																return 12.29;
														}
													}
												}
												else
												{
													if(rsrp < -91.5)
													{
														if(payload < 5.5)
														{
															if(rsrp < -93.5)
																return 14.31;
															else
																return 15.245;
														}
														else
															return 18.33;
													}
													else
														return 11.34;
												}
											}
										}
										else
										{
											if(sinr < 7)
												return 12.82;
											else
											{
												if(rsrp < -90.5)
													return 9.35;
												else
													return 7.58;
											}
										}
									}
								}
							}
							else
							{
								if(rsrq < -9.5)
								{
									if(rsrp < -95.5)
									{
										if(velocity < 11.99)
										{
											if(rsrq < -11.5)
											{
												if(rsrp < -97.5)
													return 19.79;
												else
												{
													if(velocity < 3.745)
														return 12.68;
													else
													{
														if(velocity < 9.445)
															return 16.54;
														else
															return 15.1;
													}
												}
											}
											else
											{
												if(rsrp < -96.5)
												{
													if(rsrp < -97.5)
														return 12.72;
													else
														return 12.17;
												}
												else
													return 10.7333333333;
											}
										}
										else
										{
											if(velocity < 13.465)
											{
												if(payload < 8)
													return 21.16;
												else
													return 22.2;
											}
											else
											{
												if(velocity < 17.28)
												{
													if(rsrp < -97.5)
														return 10.4;
													else
														return 14.546;
												}
												else
												{
													if(rsrp < -97.5)
														return 17.54;
													else
														return 19.58;
												}
											}
										}
									}
									else
									{
										if(velocity < 14.655)
										{
											if(rsrq < -10.5)
											{
												if(velocity < 6.01)
												{
													if(sinr < -2.5)
														return 9.87;
													else
													{
														if(sinr < 7)
														{
															if(velocity < 0.53)
															{
																if(rsrp < -94)
																	return 17.95;
																else
																{
																	if(payload < 7.5)
																		return 13.52;
																	else
																		return 15.67;
																}
															}
															else
																return 11.87;
														}
														else
														{
															if(payload < 8)
																return 10.39;
															else
																return 10.89;
														}
													}
												}
												else
												{
													if(payload < 8.5)
													{
														if(sinr < 6)
															return 20.39;
														else
															return 16.23;
													}
													else
														return 12.49;
												}
											}
											else
											{
												if(payload < 7.5)
												{
													if(rsrp < -93.5)
														return 16.38;
													else
													{
														if(sinr < 12.5)
															return 9.16;
														else
														{
															if(sinr < 19.5)
																return 12.59;
															else
																return 13.67;
														}
													}
												}
												else
												{
													if(sinr < 1.5)
													{
														if(sinr < 0)
															return 10.94;
														else
														{
															if(velocity < 14.055)
																return 11.77;
															else
																return 8.46;
														}
													}
													else
													{
														if(sinr < 3.5)
														{
															if(payload < 8.5)
																return 14.72;
															else
																return 16.86;
														}
														else
														{
															if(rsrp < -92.5)
																return 10.36;
															else
															{
																if(sinr < 8.5)
																	return 11.97;
																else
																	return 11.41;
															}
														}
													}
												}
											}
										}
										else
										{
											if(velocity < 24.78)
												return 20.69;
											else
											{
												if(rsrp < -92.5)
													return 14.43;
												else
													return 16.87;
											}
										}
									}
								}
								else
								{
									if(sinr < 7)
									{
										if(velocity < 14.055)
										{
											if(payload < 9.5)
											{
												if(velocity < 5.445)
													return 13.285;
												else
												{
													if(payload < 7.5)
														return 12.73;
													else
														return 13.23;
												}
											}
											else
											{
												if(velocity < 8.115)
													return 17.395;
												else
													return 15.5;
											}
										}
										else
										{
											if(sinr < 1.5)
												return 12.35;
											else
											{
												if(sinr < 3.5)
													return 24.53;
												else
												{
													if(sinr < 5.5)
													{
														if(payload < 9)
															return 19.84;
														else
															return 19.36;
													}
													else
														return 22.55;
												}
											}
										}
									}
									else
									{
										if(velocity < 1.875)
											return 16.68;
										else
										{
											if(payload < 7.5)
											{
												if(velocity < 6.905)
													return 13.03;
												else
													return 12.38;
											}
											else
											{
												if(sinr < 15.5)
												{
													if(sinr < 9.5)
														return 11.65;
													else
														return 14.44;
												}
												else
													return 7.48;
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
				if(rsrp < -103.5)
				{
					if(payload < 4.5)
						return 5.09;
					else
					{
						if(sinr < 8)
						{
							if(velocity < 5.3)
							{
								if(payload < 9.5)
									return 5.74;
								else
									return 6.42;
							}
							else
							{
								if(sinr < 3)
									return 8.82;
								else
								{
									if(velocity < 12.25)
										return 8.15;
									else
									{
										if(velocity < 19.29)
											return 6.74;
										else
											return 5.96;
									}
								}
							}
						}
						else
							return 14.92;
					}
				}
				else
				{
					if(rsrp < -91.5)
					{
						if(f < 1384.5)
							return 2.67;
						else
						{
							if(rsrq < -5.5)
							{
								if(payload < 6.5)
								{
									if(sinr < 10.5)
									{
										if(velocity < 16.905)
										{
											if(sinr < 3.5)
											{
												if(payload < 5.5)
												{
													if(payload < 4.5)
														return 15.67;
													else
													{
														if(velocity < 14.985)
															return 11.4733333333;
														else
															return 13.2;
													}
												}
												else
													return 18.88;
											}
											else
											{
												if(velocity < 13.745)
												{
													if(velocity < 11.13)
													{
														if(rsrq < -6.5)
														{
															if(velocity < 7.25)
															{
																if(rsrp < -97)
																	return 12.335;
																else
																{
																	if(rsrp < -93.5)
																		return 8.765;
																	else
																	{
																		if(payload < 5.5)
																			return 9.74;
																		else
																			return 10.57;
																	}
																}
															}
															else
															{
																if(f < 2232.5)
																{
																	if(rsrp < -92.5)
																		return 12.2;
																	else
																		return 10.39;
																}
																else
																	return 17.34;
															}
														}
														else
														{
															if(sinr < 8)
																return 13.17;
															else
																return 15.97;
														}
													}
													else
													{
														if(velocity < 12.665)
														{
															if(velocity < 12.47)
															{
																if(payload < 5)
																	return 6.23;
																else
																	return 7.27;
															}
															else
																return 4.32;
														}
														else
														{
															if(f < 2232.5)
															{
																if(payload < 4.5)
																	return 14.79;
																else
																	return 12.53;
															}
															else
															{
																if(velocity < 12.89)
																	return 18.28;
																else
																{
																	if(velocity < 13.365)
																		return 8.67;
																	else
																		return 9.71;
																}
															}
														}
													}
												}
												else
												{
													if(velocity < 14.915)
													{
														if(rsrp < -94)
														{
															if(payload < 5.5)
																return 15.34;
															else
																return 16.68;
														}
														else
															return 12.66;
													}
													else
													{
														if(sinr < 8.5)
														{
															if(payload < 4.5)
																return 11.83;
															else
																return 11.06;
														}
														else
														{
															if(payload < 4.5)
																return 13.33;
															else
																return 12.51;
														}
													}
												}
											}
										}
										else
										{
											if(velocity < 33.525)
											{
												if(velocity < 23.845)
													return 5.8;
												else
												{
													if(rsrq < -6.5)
														return 7.5;
													else
													{
														if(velocity < 31.255)
															return 8.41;
														else
															return 9.21;
													}
												}
											}
											else
											{
												if(velocity < 35.31)
													return 12.06;
												else
													return 16.06;
											}
										}
									}
									else
									{
										if(sinr < 20)
										{
											if(sinr < 13.5)
											{
												if(rsrq < -7.5)
													return 9.9;
												else
												{
													if(payload < 5.5)
													{
														if(velocity < 6.84)
															return 13.59;
														else
															return 10.09;
													}
													else
													{
														if(rsrp < -93)
														{
															if(sinr < 12)
																return 16.42;
															else
																return 17.65;
														}
														else
															return 21.74;
													}
												}
											}
											else
											{
												if(rsrp < -96)
												{
													if(rsrp < -99)
														return 18.33;
													else
														return 5.7;
												}
												else
												{
													if(sinr < 15.5)
													{
														if(payload < 5.5)
															return 22.06;
														else
														{
															if(velocity < 11.15)
																return 21.3975;
															else
																return 16.34;
														}
													}
													else
														return 25.07;
												}
											}
										}
										else
										{
											if(sinr < 27.5)
											{
												if(sinr < 25.5)
												{
													if(velocity < 24.145)
													{
														if(rsrp < -94.5)
															return 10.15;
														else
														{
															if(rsrq < -7)
																return 15.58;
															else
																return 13.25;
														}
													}
													else
														return 14.81;
												}
												else
													return 6.3;
											}
											else
												return 17.54;
										}
									}
								}
								else
								{
									if(sinr < 9.5)
									{
										if(rsrp < -92.5)
										{
											if(rsrp < -100.5)
											{
												if(rsrp < -102.5)
												{
													if(rsrq < -7.5)
														return 21.8;
													else
														return 18.48;
												}
												else
												{
													if(velocity < 7.86)
														return 9.47;
													else
													{
														if(velocity < 20.85)
														{
															if(payload < 8.5)
																return 18.9;
															else
																return 14.95;
														}
														else
															return 10.91;
													}
												}
											}
											else
											{
												if(sinr < 8.5)
												{
													if(sinr < 5.5)
													{
														if(f < 2232.5)
														{
															if(payload < 9)
															{
																if(velocity < 11.25)
																	return 19.19;
																else
																{
																	if(velocity < 11.37)
																		return 23.05;
																	else
																	{
																		if(rsrq < -7.5)
																			return 20.64;
																		else
																			return 21.64;
																	}
																}
															}
															else
																return 26.39;
														}
														else
															return 30.4;
													}
													else
													{
														if(rsrp < -99.5)
														{
															if(payload < 8.5)
																return 22.53;
															else
																return 21.25;
														}
														else
														{
															if(sinr < 6.5)
															{
																if(velocity < 11.51)
																	return 13.73;
																else
																{
																	if(velocity < 12.96)
																		return 16.78;
																	else
																		return 14.04;
																}
															}
															else
															{
																if(rsrp < -98.5)
																	return 23.25;
																else
																{
																	if(rsrq < -7.5)
																		return 19.05;
																	else
																	{
																		if(rsrq < -6.5)
																		{
																			if(rsrp < -97)
																				return 14.05;
																			else
																				return 16.66;
																		}
																		else
																			return 17.84;
																	}
																}
															}
														}
													}
												}
												else
												{
													if(rsrq < -7.5)
														return 23.44;
													else
													{
														if(rsrp < -95)
															return 26.2;
														else
														{
															if(payload < 8.5)
																return 21.37;
															else
																return 23.76;
														}
													}
												}
											}
										}
										else
										{
											if(f < 2232.5)
												return 9.685;
											else
											{
												if(rsrq < -7)
													return 14.58;
												else
													return 18.08;
											}
										}
									}
									else
									{
										if(rsrp < -100.5)
										{
											if(payload < 8.5)
											{
												if(rsrp < -101.5)
													return 8.45;
												else
													return 11.46;
											}
											else
												return 22.61;
										}
										else
										{
											if(sinr < 10.5)
											{
												if(rsrp < -94)
												{
													if(rsrq < -6.5)
													{
														if(payload < 9.5)
														{
															if(rsrp < -97.5)
																return 16.56;
															else
																return 19.33;
														}
														else
															return 10.51;
													}
													else
														return 8.11;
												}
												else
													return 21.75;
											}
											else
											{
												if(sinr < 14.5)
												{
													if(velocity < 25.24)
													{
														if(rsrq < -6.5)
														{
															if(payload < 9.5)
															{
																if(rsrp < -94.5)
																{
																	if(sinr < 13)
																		return 15.09;
																	else
																		return 19.61;
																}
																else
																{
																	if(rsrq < -7.5)
																		return 9.7;
																	else
																		return 12.45;
																}
															}
															else
																return 26.49;
														}
														else
														{
															if(payload < 7.5)
																return 24.12;
															else
															{
																if(sinr < 11.5)
																	return 20.77;
																else
																{
																	if(f < 2232.5)
																	{
																		if(rsrp < -96)
																			return 19.56;
																		else
																			return 20.11;
																	}
																	else
																	{
																		if(rsrp < -95.5)
																			return 18.14;
																		else
																		{
																			if(rsrp < -94)
																				return 15.27;
																			else
																				return 17.06;
																		}
																	}
																}
															}
														}
													}
													else
														return 22.6;
												}
												else
												{
													if(rsrp < -99.5)
													{
														if(payload < 8.5)
															return 30.03;
														else
															return 9.45;
													}
													else
													{
														if(rsrq < -6.5)
														{
															if(velocity < 26.045)
															{
																if(rsrp < -95)
																{
																	if(payload < 8.5)
																		return 10.4;
																	else
																		return 12.25;
																}
																else
																{
																	if(velocity < 4.955)
																	{
																		if(sinr < 23.5)
																			return 10.03;
																		else
																			return 16.53;
																	}
																	else
																	{
																		if(velocity < 11.62)
																			return 23.47;
																		else
																		{
																			if(payload < 8.5)
																				return 15.56;
																			else
																				return 21.47;
																		}
																	}
																}
															}
															else
																return 6.05;
														}
														else
															return 32.39;
													}
												}
											}
										}
									}
								}
							}
							else
							{
								if(velocity < 12.665)
								{
									if(rsrp < -92.5)
									{
										if(velocity < 5.62)
										{
											if(payload < 5)
												return 14.97;
											else
												return 12.04;
										}
										else
											return 16.54;
									}
									else
									{
										if(f < 2232.5)
											return 12.39;
										else
										{
											if(payload < 4.5)
												return 9.28;
											else
												return 10.17;
										}
									}
								}
								else
									return 10.23;
							}
						}
					}
					else
					{
						if(sinr < 16.5)
						{
							if(payload < 7.5)
							{
								if(sinr < 15.5)
								{
									if(velocity < 15.335)
									{
										if(rsrq < -7.5)
										{
											if(sinr < 5.5)
											{
												if(f < 2232.5)
												{
													if(rsrp < -90.5)
														return 19.74;
													else
														return 13.12;
												}
												else
													return 11.13;
											}
											else
											{
												if(velocity < 9.79)
												{
													if(velocity < 4.455)
														return 21.66;
													else
														return 19.41;
												}
												else
													return 22.76;
											}
										}
										else
										{
											if(sinr < 14.5)
											{
												if(rsrp < -90.5)
												{
													if(sinr < 11.5)
													{
														if(payload < 5)
															return 14.65;
														else
															return 16.41;
													}
													else
													{
														if(payload < 4.5)
															return 15.29;
														else
														{
															if(velocity < 10.995)
																return 13.65;
															else
															{
																if(rsrq < -6.5)
																	return 11.21;
																else
																	return 10.53;
															}
														}
													}
												}
												else
												{
													if(velocity < 14.46)
													{
														if(velocity < 8.32)
															return 17.21;
														else
														{
															if(payload < 5.5)
															{
																if(f < 2232.5)
																	return 14.86;
																else
																	return 15.73;
															}
															else
															{
																if(payload < 6.5)
																	return 12.87;
																else
																	return 13.35;
															}
														}
													}
													else
														return 20.59;
												}
											}
											else
											{
												if(rsrq < -6.5)
													return 15.77;
												else
												{
													if(payload < 6)
														return 21.4;
													else
														return 11.79;
												}
											}
										}
									}
									else
									{
										if(sinr < 10.5)
											return 6.79;
										else
											return 13.86;
									}
								}
								else
								{
									if(velocity < 12.81)
										return 8.55;
									else
										return 6.45;
								}
							}
							else
							{
								if(rsrp < -90.5)
								{
									if(rsrq < -6.5)
									{
										if(f < 2232.5)
										{
											if(sinr < 11)
											{
												if(velocity < 23.645)
												{
													if(rsrq < -7.5)
														return 10.58;
													else
														return 11.18;
												}
												else
													return 16.35;
											}
											else
											{
												if(payload < 9.5)
													return 23.97;
												else
													return 18.11;
											}
										}
										else
										{
											if(payload < 9)
											{
												if(rsrq < -7.5)
													return 18.74;
												else
													return 20.83;
											}
											else
											{
												if(rsrq < -7.5)
													return 14.67;
												else
													return 19.92;
											}
										}
									}
									else
									{
										if(velocity < 10.525)
											return 25.44;
										else
											return 21.1;
									}
								}
								else
								{
									if(rsrq < -7.5)
									{
										if(velocity < 4.85)
											return 12.74;
										else
										{
											if(payload < 8.5)
											{
												if(velocity < 14.53)
													return 19.04;
												else
													return 18.39;
											}
											else
												return 16.95;
										}
									}
									else
									{
										if(f < 2232.5)
										{
											if(payload < 8.5)
												return 19.41;
											else
											{
												if(sinr < 14.5)
												{
													if(payload < 9.5)
														return 28.21;
													else
													{
														if(sinr < 11)
															return 27.43;
														else
															return 25.84;
													}
												}
												else
													return 30.06;
											}
										}
										else
										{
											if(sinr < 11.5)
											{
												if(sinr < 8)
													return 15.39;
												else
													return 18.24;
											}
											else
												return 21.94;
										}
									}
								}
							}
						}
						else
						{
							if(payload < 8.5)
							{
								if(rsrp < -90.5)
								{
									if(f < 2232.5)
										return 24.93;
									else
									{
										if(sinr < 17.5)
											return 22.91;
										else
										{
											if(velocity < 13.605)
											{
												if(sinr < 22.5)
												{
													if(velocity < 9.205)
													{
														if(payload < 6)
														{
															if(payload < 4.5)
																return 15.54;
															else
																return 16.14;
														}
														else
															return 15.54;
													}
													else
														return 12.37;
												}
												else
													return 16.63;
											}
											else
												return 21.68;
										}
									}
								}
								else
								{
									if(payload < 7.5)
									{
										if(velocity < 10.11)
										{
											if(payload < 6.5)
											{
												if(rsrq < -6.5)
													return 13.36;
												else
													return 12.03;
											}
											else
												return 10.62;
										}
										else
										{
											if(velocity < 17.355)
												return 15.91;
											else
												return 19.06;
										}
									}
									else
									{
										if(rsrq < -6.5)
											return 17.98;
										else
											return 20.61;
									}
								}
							}
							else
							{
								if(velocity < 5.53)
								{
									if(sinr < 23)
									{
										if(sinr < 19)
											return 23.83;
										else
										{
											if(payload < 9.5)
												return 22.29;
											else
												return 27.88;
										}
									}
									else
										return 18.8433333333;
								}
								else
								{
									if(rsrq < -6.5)
										return 26.16;
									else
										return 30.48;
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
			if(payload < 1.5)
			{
				if(sinr < 39.5)
				{
					if(payload < 0.3)
					{
						if(rsrp < -69.5)
						{
							if(rsrq < -4.5)
							{
								if(velocity < 12.26)
								{
									if(velocity < 11.905)
									{
										if(sinr < 18.5)
										{
											if(velocity < 1.66)
											{
												if(rsrp < -87.5)
													return 8.08;
												else
												{
													if(f < 2232.5)
														return 8.33;
													else
													{
														if(rsrp < -86.5)
															return 5.1266666667;
														else
															return 6.02;
													}
												}
											}
											else
											{
												if(velocity < 11.395)
												{
													if(rsrp < -86.5)
													{
														if(f < 2232.5)
															return 5.3133333333;
														else
															return 4.85;
													}
													else
													{
														if(rsrq < -9)
															return 3.52;
														else
															return 4.76;
													}
												}
												else
													return 6.06;
											}
										}
										else
										{
											if(rsrq < -6.5)
											{
												if(sinr < 20.5)
												{
													if(velocity < 7.26)
														return 6.15;
													else
													{
														if(rsrq < -7.5)
															return 4.79;
														else
															return 3.59;
													}
												}
												else
												{
													if(rsrp < -80)
														return 2.825;
													else
														return 4.6;
												}
											}
											else
											{
												if(rsrp < -86.5)
													return 6.84;
												else
												{
													if(sinr < 20)
														return 3.33;
													else
													{
														if(rsrp < -84.5)
															return 5.56;
														else
														{
															if(sinr < 28.5)
															{
																if(rsrp < -79.5)
																	return 4.365;
																else
																{
																	if(rsrp < -77)
																		return 5.8;
																	else
																		return 5.13;
																}
															}
															else
															{
																if(sinr < 31)
																	return 3.57;
																else
																	return 4.48;
															}
														}
													}
												}
											}
										}
									}
									else
										return 2.56;
								}
								else
								{
									if(rsrp < -72.5)
									{
										if(rsrq < -7.5)
										{
											if(rsrp < -84.5)
												return 7.62;
											else
											{
												if(rsrp < -81.5)
												{
													if(sinr < 12.5)
														return 4.21;
													else
														return 3.33;
												}
												else
													return 2.48;
											}
										}
										else
										{
											if(velocity < 12.65)
											{
												if(sinr < 16.5)
													return 9.52;
												else
												{
													if(sinr < 19.5)
														return 5.56;
													else
														return 7.41;
												}
											}
											else
											{
												if(rsrq < -5.5)
												{
													if(velocity < 22.465)
													{
														if(velocity < 12.98)
															return 4.5025;
														else
														{
															if(rsrp < -76.5)
															{
																if(rsrp < -86.5)
																{
																	if(rsrp < -87.5)
																		return 6.2;
																	else
																		return 5.59;
																}
																else
																{
																	if(velocity < 18.02)
																	{
																		if(sinr < 23)
																			return 4.4266666667;
																		else
																			return 4.94;
																	}
																	else
																		return 5.59;
																}
															}
															else
																return 7.55;
														}
													}
													else
													{
														if(velocity < 34.74)
														{
															if(velocity < 32.455)
															{
																if(rsrq < -6.5)
																	return 8.08;
																else
																	return 7.14;
															}
															else
																return 10.26;
														}
														else
														{
															if(rsrq < -6.5)
																return 3.86;
															else
																return 4.76;
														}
													}
												}
												else
												{
													if(velocity < 15.25)
													{
														if(rsrp < -86)
															return 6.3;
														else
														{
															if(rsrp < -84)
																return 3.29;
															else
															{
																if(velocity < 14.745)
																	return 4.97;
																else
																	return 4.44;
															}
														}
													}
													else
													{
														if(rsrp < -80.5)
														{
															if(sinr < 30.5)
																return 5.29;
															else
																return 7.27;
														}
														else
														{
															if(sinr < 18.5)
																return 8.42;
															else
															{
																if(velocity < 25.36)
																	return 5.26;
																else
																	return 4.19;
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
											return 4.62;
										else
											return 13.33;
									}
								}
							}
							else
							{
								if(sinr < 34)
									return 5.44;
								else
									return 22.22;
							}
						}
						else
						{
							if(rsrq < -6.5)
								return 22.86;
							else
							{
								if(rsrp < -68)
									return 4.88;
								else
								{
									if(rsrq < -4.5)
										return 6.3;
									else
										return 5.59;
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
								if(sinr < 8.5)
									return 12.62;
								else
									return 7.17;
							}
							else
								return 18.74;
						}
						else
						{
							if(rsrp < -77.5)
							{
								if(rsrq < -7.5)
								{
									if(rsrp < -86.5)
									{
										if(rsrp < -87.5)
											return 6.57;
										else
											return 4;
									}
									else
									{
										if(velocity < 22.645)
										{
											if(rsrq < -8.5)
												return 9.39;
											else
											{
												if(velocity < 10.91)
													return 8.5333333333;
												else
												{
													if(payload < 0.75)
														return 6.38;
													else
														return 7.12;
												}
											}
										}
										else
										{
											if(sinr < 14)
											{
												if(rsrp < -85.5)
													return 10.04;
												else
												{
													if(payload < 0.75)
														return 8.6;
													else
														return 7.62;
												}
											}
											else
												return 15.53;
										}
									}
								}
								else
								{
									if(payload < 0.75)
									{
										if(velocity < 13.62)
										{
											if(velocity < 12.5)
											{
												if(velocity < 11.82)
												{
													if(sinr < 21.5)
													{
														if(rsrq < -5.5)
														{
															if(f < 2232.5)
															{
																if(sinr < 20.5)
																	return 6.322;
																else
																	return 7.63;
															}
															else
																return 6.308;
														}
														else
														{
															if(sinr < 20.5)
																return 5.87;
															else
																return 4.48;
														}
													}
													else
													{
														if(velocity < 0.67)
															return 7.4233333333;
														else
														{
															if(velocity < 3.585)
																return 8.64;
															else
																return 8.094;
														}
													}
												}
												else
												{
													if(rsrq < -5.5)
														return 4.33;
													else
														return 5.49;
												}
											}
											else
											{
												if(rsrp < -86.5)
													return 14.13;
												else
												{
													if(rsrp < -80.5)
														return 7.6875;
													else
														return 8.64;
												}
											}
										}
										else
										{
											if(f < 1384.5)
												return 2.98;
											else
											{
												if(velocity < 14.605)
												{
													if(rsrp < -88.5)
														return 4.6;
													else
													{
														if(sinr < 19)
														{
															if(rsrp < -85)
																return 7.21;
															else
																return 6.23;
														}
														else
															return 5.138;
													}
												}
												else
												{
													if(sinr < 12.5)
													{
														if(rsrp < -87)
															return 8.25;
														else
															return 5.79;
													}
													else
													{
														if(sinr < 17.5)
															return 9.64;
														else
														{
															if(velocity < 27.37)
																return 7.895;
															else
																return 6.93;
														}
													}
												}
											}
										}
									}
									else
									{
										if(velocity < 14.5)
										{
											if(rsrp < -86.5)
											{
												if(f < 2232.5)
												{
													if(rsrp < -87.5)
														return 4.37;
													else
														return 6.11;
												}
												else
													return 6.5833333333;
											}
											else
											{
												if(velocity < 14.185)
												{
													if(sinr < 33.5)
													{
														if(rsrq < -5.5)
														{
															if(velocity < 13.135)
															{
																if(velocity < 11.345)
																{
																	if(velocity < 6.565)
																	{
																		if(rsrp < -82.5)
																			return 9.77;
																		else
																			return 10.77;
																	}
																	else
																		return 7.225;
																}
																else
																{
																	if(f < 2232.5)
																		return 13.91;
																	else
																		return 9.63;
																}
															}
															else
															{
																if(rsrp < -82)
																{
																	if(velocity < 13.62)
																	{
																		if(velocity < 13.305)
																			return 6.98;
																		else
																			return 7.51;
																	}
																	else
																		return 9.25;
																}
																else
																	return 4.63;
															}
														}
														else
															return 6.3683333333;
													}
													else
														return 6.51;
												}
												else
													return 2.52;
											}
										}
										else
										{
											if(rsrp < -84.5)
											{
												if(rsrq < -5.5)
												{
													if(sinr < 15.5)
														return 6.26;
													else
													{
														if(rsrp < -86.5)
															return 9.5833333333;
														else
															return 9.01;
													}
												}
												else
												{
													if(velocity < 17.945)
														return 8.71;
													else
														return 12.33;
												}
											}
											else
											{
												if(rsrp < -81.5)
												{
													if(rsrp < -83)
														return 6.23;
													else
														return 7.07;
												}
												else
												{
													if(sinr < 16.5)
														return 7.55;
													else
														return 8.54;
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
									if(rsrp < -75.5)
									{
										if(sinr < 27)
										{
											if(payload < 0.75)
												return 15.62;
											else
												return 8.89;
										}
										else
											return 21.11;
									}
									else
									{
										if(rsrq < -6.5)
										{
											if(payload < 0.75)
											{
												if(sinr < 13)
												{
													if(rsrq < -7.5)
														return 11.63;
													else
														return 14.71;
												}
												else
												{
													if(sinr < 15.5)
														return 7.17;
													else
														return 5.46;
												}
											}
											else
												return 5.23;
										}
										else
										{
											if(payload < 0.75)
											{
												if(sinr < 20.5)
												{
													if(rsrq < -5.5)
														return 6.42;
													else
													{
														if(rsrp < -70)
														{
															if(velocity < 12.635)
																return 9.24;
															else
																return 8.32;
														}
														else
															return 5.4;
													}
												}
												else
												{
													if(velocity < 8.305)
														return 12.46;
													else
													{
														if(sinr < 23.5)
															return 9.73;
														else
														{
															if(velocity < 13.815)
																return 11.49;
															else
															{
																if(rsrq < -5.5)
																	return 10.47;
																else
																	return 9.8;
															}
														}
													}
												}
											}
											else
											{
												if(velocity < 13.605)
												{
													if(rsrq < -5.5)
														return 17.94;
													else
														return 11.03;
												}
												else
												{
													if(sinr < 23)
														return 7.46;
													else
													{
														if(rsrp < -69.5)
															return 12.18;
														else
															return 10.43;
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
										if(sinr < 30.5)
										{
											if(rsrp < -72.5)
												return 9.89;
											else
												return 8.3;
										}
										else
										{
											if(velocity < 10.35)
												return 7.5166666667;
											else
											{
												if(payload < 0.75)
												{
													if(sinr < 36.5)
														return 7.78;
													else
														return 7.1;
												}
												else
													return 6.75;
											}
										}
									}
									else
										return 9.4;
								}
							}
						}
					}
				}
				else
				{
					if(rsrp < -65.5)
						return 14.29;
					else
						return 10.75;
				}
			}
			else
			{
				if(payload < 2.5)
				{
					if(rsrp < -82.5)
					{
						if(sinr < 26)
						{
							if(rsrp < -87.5)
							{
								if(rsrq < -9.5)
								{
									if(velocity < 15.175)
										return 14.02;
									else
										return 8.76;
								}
								else
								{
									if(velocity < 2.295)
									{
										if(rsrq < -7.5)
											return 9.63;
										else
											return 9;
									}
									else
									{
										if(sinr < 11)
											return 7.18;
										else
											return 8.27;
									}
								}
							}
							else
							{
								if(sinr < 15)
								{
									if(rsrp < -84.5)
									{
										if(rsrp < -85.5)
										{
											if(rsrp < -86.5)
											{
												if(sinr < 13)
												{
													if(sinr < 11.5)
														return 13.41;
													else
														return 11.85;
												}
												else
													return 14.1;
											}
											else
												return 15.3;
										}
										else
											return 6.92;
									}
									else
										return 15.53;
								}
								else
								{
									if(velocity < 21.155)
									{
										if(sinr < 17)
											return 6.86;
										else
										{