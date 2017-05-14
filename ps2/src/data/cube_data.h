int points_count_cube = 402;

int vertex_count_cube = 102;

int points_cube[402] = {
	0, 1, 2, 
	3, 4, 5, 
	6, 7, 1, 
	5, 8, 9, 
	5, 10, 8, 
	1, 11, 12, 
	1, 12, 13, 
	12, 14, 15, 
	16, 17, 18, 
	18, 17, 14, 
	19, 16, 7, 
	10, 20, 21, 
	21, 22, 23, 
	24, 25, 26, 
	26, 25, 22, 
	27, 24, 28, 
	4, 28, 10, 
	28, 26, 20, 
	8, 21, 9, 
	29, 18, 11, 
	21, 23, 9, 
	10, 21, 8, 
	19, 7, 6, 
	6, 1, 0, 
	5, 9, 30, 
	3, 5, 30, 
	7, 11, 1, 
	1, 13, 2, 
	11, 14, 12, 
	16, 18, 29, 
	18, 14, 11, 
	16, 29, 7, 
	29, 11, 7, 
	20, 22, 21, 
	24, 26, 28, 
	26, 22, 20, 
	27, 28, 4, 
	4, 10, 5, 
	27, 4, 3, 
	28, 20, 10, 
	12, 15, 13, 
	31, 32, 33, 
	34, 35, 36, 
	37, 38, 39, 
	32, 40, 41, 
	42, 43, 44, 
	45, 46, 42, 
	47, 48, 49, 
	49, 50, 40, 
	51, 52, 37, 
	37, 53, 38, 
	36, 54, 55, 
	56, 37, 39, 
	57, 42, 44, 
	58, 59, 57, 
	59, 45, 42, 
	60, 47, 32, 
	61, 51, 56, 
	62, 63, 54, 
	64, 65, 66, 
	67, 68, 69, 
	69, 70, 65, 
	71, 72, 35, 
	72, 67, 62, 
	53, 73, 74, 
	38, 74, 75, 
	76, 77, 78, 
	78, 79, 73, 
	80, 76, 52, 
	50, 81, 82, 
	83, 84, 85, 
	84, 86, 85, 
	85, 86, 81, 
	87, 83, 47, 
	46, 88, 89, 
	90, 91, 92, 
	92, 91, 88, 
	93, 94, 95, 
	94, 90, 96, 
	95, 96, 59, 
	93, 95, 59, 
	45, 92, 46, 
	42, 46, 43, 
	52, 78, 53, 
	62, 69, 63, 
	54, 64, 97, 
	52, 53, 37, 
	32, 41, 98, 
	48, 50, 49, 
	49, 40, 32, 
	38, 75, 39, 
	35, 62, 36, 
	64, 66, 97, 
	56, 39, 99, 
	32, 98, 33, 
	59, 42, 57, 
	60, 32, 31, 
	47, 49, 32, 
	51, 37, 56, 
	62, 54, 36, 
	54, 97, 55, 
	63, 64, 54, 
	63, 65, 64, 
	67, 69, 62, 
	68, 70, 69, 
	69, 65, 63, 
	72, 62, 35, 
	53, 74, 38, 
	76, 78, 52, 
	77, 79, 78, 
	78, 73, 53, 
	80, 52, 51, 
	50, 82, 40, 
	40, 82, 41, 
	83, 85, 48, 
	85, 81, 50, 
	83, 48, 47, 
	46, 89, 43, 
	90, 92, 96, 
	92, 88, 46, 
	94, 96, 95, 
	96, 45, 59, 
	93, 59, 58, 
	96, 92, 45, 
	43, 89, 44, 
	87, 47, 60, 
	85, 50, 48, 
	80, 51, 61, 
	71, 35, 34, 
	36, 55, 100, 
	34, 36, 100, 
	61, 56, 99, 
	57, 44, 101, 
	58, 57, 101
};

VECTOR vertices_cube[102] = {
	{ 150.0000, -150.0000, -150.0000, 1.00 },
	{ 89.0625, -150.0000, -84.3750, 1.00 },
	{ 150.0000, -150.0000, -65.6250, 1.00 },
	{ 150.0000, 9.3750, -150.0000, 1.00 },
	{ 89.0625, 84.3750, -150.0000, 1.00 },
	{ 84.3750, -56.2500, -150.0000, 1.00 },
	{ -18.7500, -150.0000, -150.0000, 1.00 },
	{ -37.5000, -150.0000, -91.4062, 1.00 },
	{ 4.6875, -103.1250, -150.0000, 1.00 },
	{ -18.7500, -150.0000, -150.0000, 1.00 },
	{ -18.7500, -18.7500, -150.0000, 1.00 },
	{ -4.6875, -150.0000, 56.2500, 1.00 },
	{ 93.7500, -150.0000, 56.2500, 1.00 },
	{ 150.0000, -150.0000, 18.7500, 1.00 },
	{ 18.7500, -150.0000, 150.0000, 1.00 },
	{ 150.0000, -150.0000, 150.0000, 1.00 },
	{ -150.0000, -150.0000, -18.7500, 1.00 },
	{ -150.0000, -150.0000, 150.0000, 1.00 },
	{ -93.7500, -150.0000, 84.3750, 1.00 },
	{ -150.0000, -150.0000, -150.0000, 1.00 },
	{ -93.7500, 18.7500, -150.0000, 1.00 },
	{ -86.7188, -60.9375, -150.0000, 1.00 },
	{ -150.0000, -18.7500, -150.0000, 1.00 },
	{ -150.0000, -150.0000, -150.0000, 1.00 },
	{ -18.7500, 150.0000, -150.0000, 1.00 },
	{ -150.0000, 150.0000, -150.0000, 1.00 },
	{ -79.6875, 103.1250, -150.0000, 1.00 },
	{ 150.0000, 150.0000, -150.0000, 1.00 },
	{ 0.0000, 84.3750, -150.0000, 1.00 },
	{ -93.7500, -150.0000, -18.7500, 1.00 },
	{ 150.0000, -150.0000, -150.0000, 1.00 },
	{ 150.0000, -65.6250, 150.0000, 1.00 },
	{ 150.0000, -86.7188, 67.9688, 1.00 },
	{ 150.0000, -150.0000, 150.0000, 1.00 },
	{ -18.7500, 150.0000, -150.0000, 1.00 },
	{ 84.3750, 150.0000, -93.7500, 1.00 },
	{ -60.9375, 150.0000, -86.7188, 1.00 },
	{ -21.0938, -56.2500, 150.0000, 1.00 },
	{ 84.3750, -93.7500, 150.0000, 1.00 },
	{ 18.7500, -150.0000, 150.0000, 1.00 },
	{ 150.0000, -93.7500, -75.0000, 1.00 },
	{ 150.0000, -150.0000, -65.6250, 1.00 },
	{ -150.0000, -93.7500, 0.0000, 1.00 },
	{ -150.0000, -112.5000, 84.3750, 1.00 },
	{ -150.0000, -150.0000, -18.7500, 1.00 },
	{ -150.0000, 4.6875, 9.3750, 1.00 },
	{ -150.0000, -23.4375, 86.7188, 1.00 },
	{ 150.0000, 56.2500, 93.7500, 1.00 },
	{ 150.0000, 65.6250, 14.0625, 1.00 },
	{ 150.0000, -18.7500, 18.7500, 1.00 },
	{ 150.0000, 9.3750, -89.0625, 1.00 },
	{ -93.7500, 56.2500, 150.0000, 1.00 },
	{ -11.7188, 60.9375, 150.0000, 1.00 },
	{ 84.3750, 0.0000, 150.0000, 1.00 },
	{ -79.6875, 150.0000, 11.7188, 1.00 },
	{ -150.0000, 150.0000, -56.2500, 1.00 },
	{ -93.7500, -89.0625, 150.0000, 1.00 },
	{ -150.0000, -84.3750, -79.6875, 1.00 },
	{ -150.0000, -18.7500, -150.0000, 1.00 },
	{ -150.0000, 9.3750, -84.3750, 1.00 },
	{ 150.0000, 18.7500, 150.0000, 1.00 },
	{ -150.0000, -18.7500, 150.0000, 1.00 },
	{ 56.2500, 150.0000, -9.3750, 1.00 },
	{ 9.3750, 150.0000, 70.3125, 1.00 },
	{ -84.3750, 150.0000, 93.7500, 1.00 },
	{ -18.7500, 150.0000, 150.0000, 1.00 },
	{ -150.0000, 150.0000, 150.0000, 1.00 },
	{ 150.0000, 150.0000, 28.1250, 1.00 },
	{ 150.0000, 150.0000, 150.0000, 1.00 },
	{ 89.0625, 150.0000, 93.7500, 1.00 },
	{ 65.6250, 150.0000, 150.0000, 1.00 },
	{ 150.0000, 150.0000, -150.0000, 1.00 },
	{ 150.0000, 150.0000, -56.2500, 1.00 },
	{ 150.0000, 18.7500, 150.0000, 1.00 },
	{ 150.0000, -65.6250, 150.0000, 1.00 },
	{ 150.0000, -150.0000, 150.0000, 1.00 },
	{ -18.7500, 150.0000, 150.0000, 1.00 },
	{ 65.6250, 150.0000, 150.0000, 1.00 },
	{ 79.6875, 103.1250, 150.0000, 1.00 },
	{ 150.0000, 150.0000, 150.0000, 1.00 },
	{ -150.0000, 150.0000, 150.0000, 1.00 },
	{ 150.0000, 9.3750, -150.0000, 1.00 },
	{ 150.0000, -150.0000, -150.0000, 1.00 },
	{ 150.0000, 150.0000, 28.1250, 1.00 },
	{ 150.0000, 150.0000, -56.2500, 1.00 },
	{ 150.0000, 93.7500, -84.3750, 1.00 },
	{ 150.0000, 150.0000, -150.0000, 1.00 },
	{ 150.0000, 150.0000, 150.0000, 1.00 },
	{ -150.0000, -18.7500, 150.0000, 1.00 },
	{ -150.0000, -150.0000, 150.0000, 1.00 },
	{ -150.0000, 150.0000, 28.1250, 1.00 },
	{ -150.0000, 150.0000, 150.0000, 1.00 },
	{ -150.0000, 84.3750, 93.7500, 1.00 },
	{ -150.0000, 150.0000, -150.0000, 1.00 },
	{ -150.0000, 150.0000, -56.2500, 1.00 },
	{ -150.0000, 93.7500, -93.7500, 1.00 },
	{ -150.0000, 93.7500, 9.3750, 1.00 },
	{ -150.0000, 150.0000, 28.1250, 1.00 },
	{ 150.0000, -150.0000, 18.7500, 1.00 },
	{ -150.0000, -150.0000, 150.0000, 1.00 },
	{ -150.0000, 150.0000, -150.0000, 1.00 },
	{ -150.0000, -150.0000, -150.0000, 1.00 }
};

VECTOR uvs_cube[102] = {
	{ 0.3300, 0.5048, 0.00, 0.00 },
	{ 0.2639, 0.6122, 0.00, 0.00 },
	{ 0.3300, 0.6429, 0.00, 0.00 },
	{ 0.6636, 0.2340, 0.00, 0.00 },
	{ 0.5972, 0.1106, 0.00, 0.00 },
	{ 0.5921, 0.3419, 0.00, 0.00 },
	{ 0.1470, 0.5048, 0.00, 0.00 },
	{ 0.1267, 0.6007, 0.00, 0.00 },
	{ 0.5053, 0.4190, 0.00, 0.00 },
	{ 0.4797, 0.4960, 0.00, 0.00 },
	{ 0.4797, 0.2802, 0.00, 0.00 },
	{ 0.1623, 0.8424, 0.00, 0.00 },
	{ 0.2690, 0.8424, 0.00, 0.00 },
	{ 0.3300, 0.7810, 0.00, 0.00 },
	{ 0.1877, 0.9958, 0.00, 0.00 },
	{ 0.3300, 0.9958, 0.00, 0.00 },
	{ 0.0047, 0.7196, 0.00, 0.00 },
	{ 0.0047, 0.9958, 0.00, 0.00 },
	{ 0.0657, 0.8884, 0.00, 0.00 },
	{ 0.0047, 0.5048, 0.00, 0.00 },
	{ 0.3980, 0.2185, 0.00, 0.00 },
	{ 0.4057, 0.3496, 0.00, 0.00 },
	{ 0.3367, 0.2802, 0.00, 0.00 },
	{ 0.3367, 0.4960, 0.00, 0.00 },
	{ 0.4797, 0.0027, 0.00, 0.00 },
	{ 0.3367, 0.0027, 0.00, 0.00 },
	{ 0.4133, 0.0798, 0.00, 0.00 },
	{ 0.6636, 0.0027, 0.00, 0.00 },
	{ 0.5001, 0.1106, 0.00, 0.00 },
	{ 0.0657, 0.7196, 0.00, 0.00 },
	{ 0.6636, 0.4960, 0.00, 0.00 },
	{ 0.6631, 0.8583, 0.00, 0.00 },
	{ 0.5739, 0.8929, 0.00, 0.00 },
	{ 0.6631, 0.9968, 0.00, 0.00 },
	{ 0.6698, 0.2188, 0.00, 0.00 },
	{ 0.7312, 0.3888, 0.00, 0.00 },
	{ 0.7388, 0.1493, 0.00, 0.00 },
	{ 0.1900, 0.3423, 0.00, 0.00 },
	{ 0.0750, 0.4041, 0.00, 0.00 },
	{ 0.1466, 0.4967, 0.00, 0.00 },
	{ 0.4185, 0.9045, 0.00, 0.00 },
	{ 0.4287, 0.9968, 0.00, 0.00 },
	{ 0.8338, 0.9036, 0.00, 0.00 },
	{ 0.7421, 0.9344, 0.00, 0.00 },
	{ 0.8542, 0.9959, 0.00, 0.00 },
	{ 0.8236, 0.7422, 0.00, 0.00 },
	{ 0.7396, 0.7883, 0.00, 0.00 },
	{ 0.6019, 0.6583, 0.00, 0.00 },
	{ 0.5153, 0.6429, 0.00, 0.00 },
	{ 0.5204, 0.7814, 0.00, 0.00 },
	{ 0.4032, 0.7352, 0.00, 0.00 },
	{ 0.2693, 0.1571, 0.00, 0.00 },
	{ 0.1798, 0.1494, 0.00, 0.00 },
	{ 0.0750, 0.2497, 0.00, 0.00 },
	{ 0.8463, 0.1184, 0.00, 0.00 },
	{ 0.7721, 0.0025, 0.00, 0.00 },
	{ 0.2693, 0.3963, 0.00, 0.00 },
	{ 0.9204, 0.8883, 0.00, 0.00 },
	{ 0.9967, 0.7806, 0.00, 0.00 },
	{ 0.9254, 0.7345, 0.00, 0.00 },
	{ 0.6631, 0.7198, 0.00, 0.00 },
	{ 0.3306, 0.2806, 0.00, 0.00 },
	{ 0.8233, 0.3424, 0.00, 0.00 },
	{ 0.9103, 0.2652, 0.00, 0.00 },
	{ 0.9359, 0.1107, 0.00, 0.00 },
	{ 0.9973, 0.2188, 0.00, 0.00 },
	{ 0.9973, 0.0025, 0.00, 0.00 },
	{ 0.8642, 0.4969, 0.00, 0.00 },
	{ 0.9973, 0.4969, 0.00, 0.00 },
	{ 0.9359, 0.3965, 0.00, 0.00 },
	{ 0.9973, 0.3579, 0.00, 0.00 },
	{ 0.6698, 0.4969, 0.00, 0.00 },
	{ 0.7721, 0.4969, 0.00, 0.00 },
	{ 0.0034, 0.2188, 0.00, 0.00 },
	{ 0.0034, 0.3578, 0.00, 0.00 },
	{ 0.0034, 0.4967, 0.00, 0.00 },
	{ 0.1875, 0.0027, 0.00, 0.00 },
	{ 0.0954, 0.0027, 0.00, 0.00 },
	{ 0.0801, 0.0799, 0.00, 0.00 },
	{ 0.0034, 0.0027, 0.00, 0.00 },
	{ 0.3306, 0.0027, 0.00, 0.00 },
	{ 0.3369, 0.7352, 0.00, 0.00 },
	{ 0.3369, 0.9968, 0.00, 0.00 },
	{ 0.5306, 0.5044, 0.00, 0.00 },
	{ 0.4388, 0.5044, 0.00, 0.00 },
	{ 0.4083, 0.5967, 0.00, 0.00 },
	{ 0.3369, 0.5044, 0.00, 0.00 },
	{ 0.6631, 0.5044, 0.00, 0.00 },
	{ 0.6708, 0.7806, 0.00, 0.00 },
	{ 0.6708, 0.9959, 0.00, 0.00 },
	{ 0.8032, 0.5039, 0.00, 0.00 },
	{ 0.6708, 0.5039, 0.00, 0.00 },
	{ 0.7319, 0.6115, 0.00, 0.00 },
	{ 0.9967, 0.5039, 0.00, 0.00 },
	{ 0.8949, 0.5039, 0.00, 0.00 },
	{ 0.9356, 0.5962, 0.00, 0.00 },
	{ 0.8236, 0.5962, 0.00, 0.00 },
	{ 0.8642, 0.0025, 0.00, 0.00 },
	{ 0.5204, 0.9968, 0.00, 0.00 },
	{ 0.3306, 0.4967, 0.00, 0.00 },
	{ 0.6698, 0.0025, 0.00, 0.00 },
	{ 0.9967, 0.9959, 0.00, 0.00 }
};