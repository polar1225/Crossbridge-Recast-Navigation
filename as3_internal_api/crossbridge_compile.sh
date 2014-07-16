#!/bin/sh

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
FLASCC="/cygdrive/c/Crossbridge_1.0.1/sdk"
CFLAGS="-Werror -Wno-write-strings -Wno-trigraphs -jvmopt=-Xmx1G -O4"
RECAST_SOURCE_PATH="${DIR}/../recastnavigation/Recast/Source"
RECAST_INCLUDE_PATH="${DIR}/../recastnavigation/Recast/Include"
DETOUR_SOURCE_PATH="${DIR}/../recastnavigation/Detour/Source"
DETOUR_INCLUDE_PATH="${DIR}/../recastnavigation/Detour/Include"
DETOUR_CROWD_SOURCE_PATH="${DIR}/../recastnavigation/DetourCrowd/Source"
DETOUR_CROWD_INCLUDE_PATH="${DIR}/../recastnavigation/DetourCrowd/Include"

echo Compiling...
"${FLASCC}/usr/bin/g++" ${CFLAGS} -I${RECAST_INCLUDE_PATH} ${RECAST_SOURCE_PATH}/*.cpp ${CFLAGS} -I${DETOUR_INCLUDE_PATH} ${DETOUR_SOURCE_PATH}/*.cpp -I${DETOUR_CROWD_INCLUDE_PATH} ${DETOUR_CROWD_SOURCE_PATH}/*.cpp "${DIR}/rc_context_adapter.cpp" "${DIR}/recast.cpp" "${DIR}/detour.cpp" "${DIR}/localvar.cpp" "${DIR}/sizeof.cpp" "${DIR}/detour_crowd.cpp" "${DIR}/main.cpp" -lAS3++ -emit-swc=recastnavigation.internal_api -o "${DIR}/as3_internal_api.swc"