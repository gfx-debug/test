find_package(OpenSceneGraph REQUIRED osg osgViewer osgGA osgDB)

include_directories(${OSG_INCLUDE_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/gltf)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_definitions(-D)
set(
	SRC
	main.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/gltf/ReaderWriterGLTF.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/gltf/JsonUtils.cpp
)

add_executable(b3dm-demos ${SRC})
target_link_libraries(b3dm-demos ${OPENSCENEGRAPH_LIBRARIES})