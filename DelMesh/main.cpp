/*
 * delmesh.cpp
 *
 *  Created on: Mar 14, 2016
 *      Author: darryl
 */
#include "Delmesh.h"

int main(int argc, char** argv) {
    string input = "elephant.obj";
    string output = "output/ate-out.obj";

    //0 = priority queue
    //1 = queue
    //2 = stack
    int DATA_STRUCTURE = 0;
    // 0 = score ++
    // 1 = score +1.5
    // 2 = score +5
    int score_type = 2;

    //DelMesh mesh(DATA_STRUCTURE, score_type, input, "output/ate-out.obj");
    //read the input mesh
    //mesh.test_pq();
    //mesh.test_face_colors();
    //mesh.test_2D_flattening();
    //mesh.test_samples();
    //mesh.process_mesh();
    //mesh.test_face_colors();
    DelMesh* mesh;


    mesh = new DelMesh(0, 0, "elephant.obj", "output2/elephant-pq-0.obj");
    mesh->process_mesh();
    delete(mesh);

    mesh = new DelMesh(1, 0, "elephant.obj", "output2/elephant-q-0.obj");
    mesh->process_mesh();
    delete(mesh);

    mesh = new DelMesh(2, 0, "elephant.obj", "output2/elephant-s-0.obj");
    mesh->process_mesh();
    delete(mesh);

    mesh = new DelMesh(0, 1, "elephant.obj", "output2/elephant-pq-1.obj");
    mesh->process_mesh();
    delete(mesh);

    mesh = new DelMesh(1, 1, "elephant.obj", "output2/elephant-q-1.obj");
    mesh->process_mesh();
    delete(mesh);

    mesh = new DelMesh(2, 1, "elephant.obj", "output2/elephant-s-1.obj");
    mesh->process_mesh();
    delete(mesh);

    mesh = new DelMesh(0, 2, "elephant.obj", "output2/elephant-pq-2.obj");
    mesh->process_mesh();
    delete(mesh);

    mesh = new DelMesh(1, 2, "elephant.obj", "output2/elephant-q-2.obj");
    mesh->process_mesh();
    delete(mesh);

    mesh = new DelMesh(2, 2, "elephant.obj", "output2/elephant-s-2.obj");
    mesh->process_mesh();
    delete(mesh);

    /**********************************************/

    mesh = new DelMesh(0, 0, "nde-cube.obj", "output2/cube-pq-0.obj");
    mesh->process_mesh();
    delete(mesh);

    mesh = new DelMesh(1, 0, "nde-cube.obj", "output2/cube-q-0.obj");
    mesh->process_mesh();
    delete(mesh);

    mesh = new DelMesh(2, 0, "nde-cube.obj", "output2/cube-s-0.obj");
    mesh->process_mesh();
    delete(mesh);

    mesh = new DelMesh(0, 1, "nde-cube.obj", "output2/cube-pq-1.obj");
    mesh->process_mesh();
    delete(mesh);

    mesh = new DelMesh(1, 1, "nde-cube.obj", "output2/cube-q-1.obj");
    mesh->process_mesh();
    delete(mesh);

    mesh = new DelMesh(2, 1, "nde-cube.obj", "output2/cube-s-1.obj");
    mesh->process_mesh();
    delete(mesh);

    mesh = new DelMesh(0, 2, "nde-cube.obj", "output2/cube-pq-2.obj");
    mesh->process_mesh();
    delete(mesh);

    mesh = new DelMesh(1, 2, "nde-cube.obj", "output2/cube-q-2.obj");
    mesh->process_mesh();
    delete(mesh);

    mesh = new DelMesh(2, 2, "nde-cube.obj", "output2/cube-s-2.obj");
    mesh->process_mesh();
    delete(mesh);




    return 0;
}

