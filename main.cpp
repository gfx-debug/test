
#include <osgViewer/Viewer>
#include <osgDB/ReadFile>
int main()
{
	osgViewer::Viewer viewer;

	osg::Node * node = osgDB::readNodeFile("D:/2CylinderEngine.glb");

	viewer.setSceneData(node);
	viewer.setUpViewInWindow(35, 35, 1024, 800);
	viewer.run();
}