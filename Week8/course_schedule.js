//https://leetcode.com/problems/course-schedule/

let visit; 
let adj;

var canFinish = function(numCourses, prerequisites) {
    visit = new Array(numCourses).fill(0); 
    adj = new Map();
    
    // set up adj list
    for(let [v,e] of prerequisites){
        let edges = adj.get(e) || [];
        edges.push(v);
        adj.set(e,edges)
    }
    
    //DFS
    for(let [v,e] of adj){
        if(DFS(v)){
            return false;
        }
    }
    
    return true;
};

// search through neighbours
var DFS = function(node) {

    visit[node]=1; // mark as visiting

    let nbs = adj.get(node);

    if(nbs){
        for(let nb of nbs){
            if(visit[nb]==2){
                continue;
            }
            if(visit[nb]==1){
                return true; //cycle
            }
            if(DFS(nb)){
                return true;
            }
        }
    }

    visit[node]=2; // mark as visited
    return false;
}
