/*
 * delmesh.cpp
 *
 *  Created on: Mar 14, 2016
 *      Author: darryl
 */
#include "Delmesh.h"

int main(int argc, char** argv) {
    string input = "bunny.obj";
    string output = "output/ate-out.obj";

    //delmesh -i something -o seomtihgn -ds stack -score 0 -nomedian
    bool in = false, out = false, all = false, median = true;
    int ds = 2, score = 2;
    int i = 0;
    while (argc > i){
        //input file
        if (argv[i]=="-i"){
            in = true;
            input = argv[++i];
            i++;
        }
        //output file
        if (argv[i]=="-o"){
            out = true;
            output = argv[++i];
            i++;
        }
        //output all combinations of arguments for given input file
        if (argv[i]=="-all"){
            all = true;
        }
        // choose data structure
        if (argv[i]=="-ds"){
            i++;
            if(argv[i]=="queue"){
                ds = 0;}
            if(argv[i]=="priorityqueue"){
                ds = 1;
            }
            i++;
        }
        //choose scoring system
        if (argv[i]=="-score"){
            i++;
            score = atoi(argv[i]);
            i++;
        }

        if (argv[i]=="-nomedian"){
            median = false;
            i++;
        }
    }

    DelMesh* mesh;
}


//0 = priority queue
//1 = queue
//2 = stack
// 0 = score ++
// 1 = score +1.5
// 2 = score +5

//DelMesh mesh(DATA_STRUCTURE, score_type, input, "output/ate-out.obj");
//read the input mesh
//mesh.test_pq();
//mesh.test_face_colors();
//mesh.test_2D_flattening();
//mesh.test_samples();
//mesh.process_mesh();
//mesh.test_face_colors();


void mesh_all(DelMesh* mesh, string input, string output){

    int len = output.length();
    if (output.substr(len-5,4)==".obj"){
        output = output.substr(0,len-5);
    }


    mesh = new DelMesh(0, 0, input, output.append("-pq-0.obj"));
    mesh->process_mesh();
    delete(mesh);

    mesh = new DelMesh(1, 0, input, output.append("-q-0.obj"));
    mesh->process_mesh();
    delete(mesh);

    mesh = new DelMesh(2, 0, input, output.append("-s-0.obj"));
    mesh->process_mesh();
    delete(mesh);

    mesh = new DelMesh(0, 1, input, output.append("-pq-1.obj"));
    mesh->process_mesh();
    delete(mesh);

    mesh = new DelMesh(1, 1, input, output.append("-q-1.obj"));
    mesh->process_mesh();
    delete(mesh);

    mesh = new DelMesh(2, 1, input, output.append("-s-1.obj"));
    mesh->process_mesh();
    delete(mesh);

    mesh = new DelMesh(0, 2, input, output.append("-pq-2.obj"));
    mesh->process_mesh();
    delete(mesh);

    mesh = new DelMesh(1, 2, input, output.append("-q-2.obj"));
    mesh->process_mesh();
    delete(mesh);

    mesh = new DelMesh(2, 2, input, input.append("-s-2.obj"));
    mesh->process_mesh();
    delete(mesh);

}

/**********************************************

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

//


    return 0;
}
*/
