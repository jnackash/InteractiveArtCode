#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    ofSetBackgroundColor(0);
    
    for (int i = 0; i < NUM_FIGURES; i++)
    {
        Figure tempFigure(std::to_string(i+1) + "img.png", 0, 0);
        
        figures.push_back(tempFigure);
    }
}

//--------------------------------------------------------------
void ofApp::update()
{
    
    for (int i=0; i < NUM_FIGURES; i++)
    {
        figures[i].update();
    }
    
    
}

//--------------------------------------------------------------
void ofApp::draw()
{
    
//    images[0].draw(0, 0, 200, 200);
    
    for (int i=0; i < figures.size(); i++)
    {
        figures[i].draw();
        figures[i].xPos+=100;
    }

    
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    


}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
