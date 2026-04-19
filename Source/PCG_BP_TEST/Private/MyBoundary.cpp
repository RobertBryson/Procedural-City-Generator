// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBoundary.h"

// The following code was found in a paper "CONCAVE HULL: A K-NEAREST NEIGHBOURS APPROACH FOR THE COMPUTATION OF THE REGION OCCUPIED BY A SET OF POINTS"
// Written by: Adriano Morerira and Maribel Yasmina Santos
// 
// I will convert it into functioning c++ as part of my project
// 
//1: kk ? Max[k, 3] ? make sure k >= 3
//2 : dataset ? CleanList[pointsList]  ? remove equal points
//3 : If Length[dataset] < 3
//4 : Return[null]  ? a minimum of 3 dissimilar points is required
//5 : If Length[dataset] = 3
//6 : Return[dataset]  ? for a 3 points dataset, the polygon is the dataset itself
//7 : kk ? Min[kk, Length[dataset] - 1]  ? make sure that k neighbours can be found
//8 : firstPoint ? FindMinYPoint[dataset]
//9 : hull ?{ firstPoint }  ? initialize the hull with the first point
//10 : currentPoint ? firstPoint
//11 : dataset ? RemovePoint[dataset, firstPoint]  ? remove the first point
//12 : previousAngle ? 0
//13 : step ? 2
//14 : While((currentPoint?firstPoint) or (step = 2)) and (Length[dataset] > 0)
//15 : If step = 5
//16 : dataset ? AddPoint[dataset, firstPoint]  ? add the firstPoint again
//17 : kNearestPoints ? NearestPoints[dataset, currentPoint, kk]  ? find the nearest neighbours
//18 : cPoints ? SortByAngle[kNearestPoints, currentPoint, prevAngle] ? sort the candidates (neighbours) in descending order of right - hand turn
//19 : its ? True
//20 : i ? 0
//21 : While(its = True) and (i < Length[cPoints])  ? select the first candidate that does not intersects any of the polygon edges
//22 : i++
//23 : If cPointsi = firstPoint
//24 : lastPoint ? 1
//25 : else
//26 : lastPoint ? 0
//27 : j ? 2
//28 : its ? False
//29 : While(its = False) and (j < Length[hull] - lastPoint)
//30 : its ? IntersectsQ[{hullstep - 1, cPointsi}, { hullstep - 1 - j,hullstep - j }]
//31 : j++	
//32 : If its = True  ? since all candidates intersect at least one edge, try again with a higher number of neighbours
//33 : Return[ConcaveHull[pointsList, kk + 1]]
//34 : currentPoint ? cPointsi
//35 : hull ? AddPoint[hull, currentPoint]  ? a valid candidate was found
//36 : prevAngle ? Angle[hullstep, hullstep - 1]
//37 : dataset ? RemovePoint[dataset, currentPoint]
//38 : step++
//39 : allInside ? True
//40 : i ? Length[dataset]
//41 : While(allInside = True) and (i > 0)  ? check if all the given points are inside the computed polygon
//42 : allInside ? PointInPolygonQ[dataseti, hull]
//43 : i--
//44 : If allInside = False
//45 : Return[ConcaveHull[pointsList, kk + 1]]  ? since at least one point is out of the computed polygon, try again with a higher number of neighbours
//46 : Return[hull]  ? a valid hull was found!