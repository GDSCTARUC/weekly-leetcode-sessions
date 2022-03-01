// https://leetcode.com/problems/number-of-islands/

var numIslands = function(grid) {
    let count = 0;
    
    //traverse whole grid
    for(let row = 0; row<grid.length; row++){
        for(let col = 0; col<grid[0].length; col++){
            if( grid[row][col] == '1'){
                sink(grid, row, col);
                count++;
            }
        }
    }
    
    return count;
};

var sink = function(grid, row, col) {
    if( row>=0 && row<grid.length && col>=0 && col<grid[0].length && grid[row][col] == '1'){
        grid[row][col] = '0';
        sink(grid, row-1, col);
        sink(grid, row+1, col);
        sink(grid, row, col+1);
        sink(grid, row, col-1);
    }
    return;
}

// Flood Fill
