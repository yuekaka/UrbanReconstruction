#pragma once

#include <vector>

#include "Geometry\Vector3D.h"
#include "Geometry\BoundingBox.h"
#include "Lidar\LidarCommon.h"

class CPointCloud
{
public:
	CPointCloud(void);
	~CPointCloud(void);

public:
	std::vector< CVector3D > m_vecPoint;
	std::vector< CVector3D > m_vecNormal;

	CBoundingBox m_cBoundingBox;
	double m_dbGroundZ;

public:
	void LoadFromBP( char filename[] );
	void LoadFromXYZN( char filename[] );
	void SaveToXYZN( char filename[] );
};
