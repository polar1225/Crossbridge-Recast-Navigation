#include <stdlib.h>
#include <AS3\AS3.h>
#include <AS3\AS3++.h>
#include <DetourAlloc.h>
#include <DetourAssert.h>
#include <DetourCommon.h>
#include <DetourMath.h>
#include <DetourNavMesh.h>
#include <DetourNavMeshBuilder.h>
#include <DetourNavMeshQuery.h>
#include <DetourNode.h>
#include <DetourStatus.h>

void _dtFree() __attribute__((used,
	annotate("as3sig:public function internal_dtFree(ptr:int):void"),
	annotate("as3package:recastnavigation.internal_api")));

void _dtFree()
{
	void * ptr;
	AS3_GetScalarFromVar(ptr, ptr);

	dtFree(ptr);
}

// ////
// DetourNavMeshBuilder
// ////

void _dtAlloc_dtNavMeshCreateParams() __attribute__((used,
	annotate("as3sig:public function internal_dtAlloc_dtNavMeshCreateParams():int"),
	annotate("as3package:recastnavigation.internal_api")));

void _dtAlloc_dtNavMeshCreateParams()
{
	AS3_Return((dtNavMeshCreateParams *)dtAlloc(sizeof(dtNavMeshCreateParams), DT_ALLOC_PERM));
}

void _dtCreateNavMeshData() __attribute__((used,
	annotate("as3sig:public function internal_dtCreateNavMeshData(params_ptr:int, outData_ptr_ptr:int, outDataSize_ptr:int):Boolean"),
	annotate("as3package:recastnavigation.internal_api")));

void _dtCreateNavMeshData()
{
	dtNavMeshCreateParams * params;
	AS3_GetScalarFromVar(params, params_ptr);

	unsigned char * * outData;
	AS3_GetScalarFromVar(outData, outData_ptr_ptr);

	int * outDataSize;
	AS3_GetScalarFromVar(outDataSize, outDataSize_ptr);

	AS3_Return(dtCreateNavMeshData(params, outData, outDataSize));
}

void _dtNavMeshHeaderSwapEndian() __attribute__((used,
	annotate("as3sig:public function internal_dtNavMeshHeaderSwapEndian(data_ptr:int, dataSize:int):Boolean"),
	annotate("as3package:recastnavigation.internal_api")));

void _dtNavMeshHeaderSwapEndian()
{
	unsigned char * data;
	AS3_GetScalarFromVar(data, data_ptr);

	int dataSize;
	AS3_GetScalarFromVar(dataSize, dataSize);

	AS3_Return(dtNavMeshHeaderSwapEndian(data, dataSize));
}

void _dtNavMeshDataSwapEndian() __attribute__((used,
	annotate("as3sig:public function internal_dtNavMeshDataSwapEndian(data_ptr:int, dataSize:int):Boolean"),
	annotate("as3package:recastnavigation.internal_api")));

void _dtNavMeshDataSwapEndian()
{
	unsigned char * data;
	AS3_GetScalarFromVar(data, data_ptr);

	int dataSize;
	AS3_GetScalarFromVar(dataSize, dataSize);

	AS3_Return(dtNavMeshDataSwapEndian(data, dataSize));
}

// ////
// DetourNavMesh
// ////

void _dtPoly_setArea() __attribute__((used,
	annotate("as3sig:public function internal_dtPoly_setArea(poly_ptr:int, a:int):void"),
	annotate("as3package:recastnavigation.internal_api")));

void _dtPoly_setArea()
{
	dtPoly * poly;
	AS3_GetScalarFromVar(poly, poly_ptr);

	unsigned char a;
	AS3_GetScalarFromVar(a, a);
	
	poly->setArea(a);
}

void _dtPoly_setType() __attribute__((used,
	annotate("as3sig:public function internal_dtPoly_setType(poly_ptr:int, t:int):void"),
	annotate("as3package:recastnavigation.internal_api")));

void _dtPoly_setType()
{
	dtPoly * poly;
	AS3_GetScalarFromVar(poly, poly_ptr);

	unsigned char t;
	AS3_GetScalarFromVar(t, t);

	poly->setType(t);
}

void _dtPoly_getArea() __attribute__((used,
	annotate("as3sig:public function internal_dtPoly_getArea(poly_ptr:int):int"),
	annotate("as3package:recastnavigation.internal_api")));

void _dtPoly_getArea()
{
	dtPoly * poly;
	AS3_GetScalarFromVar(poly, poly_ptr);

	AS3_Return(poly->getArea());
}

void _dtPoly_getType() __attribute__((used,
	annotate("as3sig:public function internal_dtPoly_getType(poly_ptr:int):int"),
	annotate("as3package:recastnavigation.internal_api")));

void _dtPoly_getType()
{
	dtPoly * poly;
	AS3_GetScalarFromVar(poly, poly_ptr);

	AS3_Return(poly->getType());
}

void _dtAllocNavMesh() __attribute__((used,
	annotate("as3sig:public function internal_dtAllocNavMesh():int"),
	annotate("as3package:recastnavigation.internal_api")));

void _dtAllocNavMesh()
{
	AS3_Return(dtAllocNavMesh());
}

void _dtFreeNavMesh() __attribute__((used,
	annotate("as3sig:public function internal_dtFreeNavMesh(ptr:int):void"),
	annotate("as3package:recastnavigation.internal_api")));

void _dtFreeNavMesh()
{
	dtNavMesh * ptr;
	AS3_GetScalarFromVar(ptr, ptr);

	dtFreeNavMesh(ptr);
}

void _dtNavMesh_init() __attribute__((used,
	annotate("as3sig:public function internal_dtNavMesh_init(nav_ptr:int, data_ptr:int, dataSize:int, flags:int):int"),
	annotate("as3package:recastnavigation.internal_api")));

void _dtNavMesh_init()
{
	dtNavMesh * nav;
	AS3_GetScalarFromVar(nav, nav_ptr);

	unsigned char * data;
	AS3_GetScalarFromVar(data, data_ptr);

	int dataSize;
	AS3_GetScalarFromVar(dataSize, dataSize);

	int flags;
	AS3_GetScalarFromVar(flags, flags);

	AS3_Return(nav->init(data, dataSize, flags));
}

void _dtNavMesh_getTileAt() __attribute__((used,
	annotate("as3sig:public function internal_dtNavMesh_getTileAt(nav_ptr:int, x:int, y:int, layer:int):int"),
	annotate("as3package:recastnavigation.internal_api")));

void _dtNavMesh_getTileAt()
{
	dtNavMesh * nav;
	AS3_GetScalarFromVar(nav, nav_ptr);

	int x;
	AS3_GetScalarFromVar(x, x);

	int y;
	AS3_GetScalarFromVar(y, y);

	int layer;
	AS3_GetScalarFromVar(layer, layer);

	AS3_Return(nav->getTileAt(x, y, layer));
}

// ////
// DetourNavMeshQuery
// ////

void _dtQueryFilter_alloc() __attribute__((used,
	annotate("as3sig:public function internal_dtQueryFilter_alloc():int"),
	annotate("as3package:recastnavigation.internal_api")));

void _dtQueryFilter_alloc()
{
	AS3_Return(new dtQueryFilter());
}

void _dtQueryFilter_passFilter() __attribute__((used,
	annotate("as3sig:public function internal_dtQueryFilter_passFilter(filter_ptr:int, ref:int, tile_ptr:int, poly_ptr:int):Boolean"),
	annotate("as3package:recastnavigation.internal_api")));

void _dtQueryFilter_passFilter()
{
	dtQueryFilter * filter;
	AS3_GetScalarFromVar(filter, filter_ptr);

	dtPolyRef ref;
	AS3_GetScalarFromVar(ref, ref);

	dtMeshTile * tile;
	AS3_GetScalarFromVar(tile, tile_ptr);

	dtPoly * poly;
	AS3_GetScalarFromVar(poly, poly_ptr);

	filter->passFilter(ref, tile, poly);
	AS3_Return(true);
}

void _dtQueryFilter_getCost() __attribute__((used,
	annotate("as3sig:public function internal_dtQueryFilter_getCost(filter_ptr:int, pa_ptr:int, pb_ptr:int, prevRef:int, prevTile_ptr:int, prevPoly_ptr:int, curRef:int, curTile_ptr:int, curPoly_ptr:int, nextRef:int, nextTile_ptr:int, nextPoly_ptr:int):Number"),
	annotate("as3package:recastnavigation.internal_api")));

void _dtQueryFilter_getCost()
{
	dtQueryFilter * filter;
	AS3_GetScalarFromVar(filter, filter_ptr);

	float * pa;
	AS3_GetScalarFromVar(pa, pa_ptr);

	float * pb;
	AS3_GetScalarFromVar(pb, pb_ptr);

	dtPolyRef prevRef;
	AS3_GetScalarFromVar(prevRef, prevRef);

	dtMeshTile * prevTile;
	AS3_GetScalarFromVar(prevTile, prevTile_ptr);

	dtPoly * prevPoly;
	AS3_GetScalarFromVar(prevPoly, prevPoly_ptr);

	dtPolyRef curRef;
	AS3_GetScalarFromVar(curRef, curRef);

	dtMeshTile * curTile;
	AS3_GetScalarFromVar(curTile, curTile_ptr);

	dtPoly * curPoly;
	AS3_GetScalarFromVar(curPoly, curPoly_ptr);

	dtPolyRef nextRef;
	AS3_GetScalarFromVar(nextRef, nextRef);

	dtMeshTile * nextTile;
	AS3_GetScalarFromVar(nextTile, nextTile_ptr);

	dtPoly * nextPoly;
	AS3_GetScalarFromVar(nextPoly, nextPoly_ptr);

	AS3_Return(filter->getCost(pa, pb, prevRef, prevTile, prevPoly, curRef, curTile, curPoly, nextRef, nextTile, nextPoly));
}

void _dtQueryFilter_getAreaCost() __attribute__((used,
	annotate("as3sig:public function internal_dtQueryFilter_getAreaCost(filter_ptr:int, i:int):Number"),
	annotate("as3package:recastnavigation.internal_api")));

void _dtQueryFilter_getAreaCost()
{
	dtQueryFilter * filter;
	AS3_GetScalarFromVar(filter, filter_ptr);

	int i;
	AS3_GetScalarFromVar(i, i);

	AS3_Return(filter->getAreaCost(i));
}

void _dtQueryFilter_setAreaCost() __attribute__((used,
	annotate("as3sig:public function internal_dtQueryFilter_setAreaCost(filter_ptr:int, i:int, cost:Number):void"),
	annotate("as3package:recastnavigation.internal_api")));

void _dtQueryFilter_setAreaCost()
{
	dtQueryFilter * filter;
	AS3_GetScalarFromVar(filter, filter_ptr);

	int i;
	AS3_GetScalarFromVar(i, i);

	float cost;
	AS3_GetScalarFromVar(cost, cost);

	filter->setAreaCost(i, cost);
}

void _dtQueryFilter_getIncludeFlags() __attribute__((used,
	annotate("as3sig:public function internal_dtQueryFilter_getIncludeFlags(filter_ptr:int):int"),
	annotate("as3package:recastnavigation.internal_api")));

void _dtQueryFilter_getIncludeFlags()
{
	dtQueryFilter * filter;
	AS3_GetScalarFromVar(filter, filter_ptr);

	AS3_Return(filter->getIncludeFlags());
}

void _dtQueryFilter_setIncludeFlags() __attribute__((used,
	annotate("as3sig:public function internal_dtQueryFilter_setIncludeFlags(filter_ptr:int, flags:int):void"),
	annotate("as3package:recastnavigation.internal_api")));

void _dtQueryFilter_setIncludeFlags()
{
	dtQueryFilter * filter;
	AS3_GetScalarFromVar(filter, filter_ptr);

	unsigned short flags;
	AS3_GetScalarFromVar(flags, flags);

	filter->setIncludeFlags(flags);
}

void _dtQueryFilter_getExcludeFlags() __attribute__((used,
	annotate("as3sig:public function internal_dtQueryFilter_getExcludeFlags(filter_ptr:int):int"),
	annotate("as3package:recastnavigation.internal_api")));

void _dtQueryFilter_getExcludeFlags()
{
	dtQueryFilter * filter;
	AS3_GetScalarFromVar(filter, filter_ptr);

	AS3_Return(filter->getExcludeFlags());
}

void _dtQueryFilter_setExcludeFlags() __attribute__((used,
	annotate("as3sig:public function internal_dtQueryFilter_setExcludeFlags(filter_ptr:int, flags:int):void"),
	annotate("as3package:recastnavigation.internal_api")));

void _dtQueryFilter_setExcludeFlags()
{
	dtQueryFilter * filter;
	AS3_GetScalarFromVar(filter, filter_ptr);

	unsigned short flags;
	AS3_GetScalarFromVar(flags, flags);

	filter->setExcludeFlags(flags);
}

void _dtAllocNavMeshQuery() __attribute__((used,
	annotate("as3sig:public function internal_dtAllocNavMeshQuery():int"),
	annotate("as3package:recastnavigation.internal_api")));

void _dtAllocNavMeshQuery()
{
	AS3_Return(dtAllocNavMeshQuery());
}

void _dtFreeNavMeshQuery() __attribute__((used,
	annotate("as3sig:public function internal_dtFreeNavMeshQuery(ptr:int):void"),
	annotate("as3package:recastnavigation.internal_api")));

void _dtFreeNavMeshQuery()
{
	dtNavMeshQuery * ptr;
	AS3_GetScalarFromVar(ptr, ptr);

	dtFreeNavMeshQuery(ptr);
}

void _dtNavMeshQuery_init() __attribute__((used,
	annotate("as3sig:public function internal_dtNavMeshQuery_init(query_ptr:int, nav_ptr:int, maxNodes:int):int"),
	annotate("as3package:recastnavigation.internal_api")));

void _dtNavMeshQuery_init()
{
	dtNavMeshQuery * query;
	AS3_GetScalarFromVar(query, query_ptr);
	
	dtNavMesh * nav;
	AS3_GetScalarFromVar(nav, nav_ptr);

	int maxNodes;
	AS3_GetScalarFromVar(maxNodes, maxNodes);

	AS3_Return(query->init(nav, maxNodes));
}