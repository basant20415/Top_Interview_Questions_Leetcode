class Solution {
    private:
    bool valid_row(int row,vector<vector<char>>board){
        set<char>occurance;
        for(int col=0;col<9;col++){
            if(board[row][col]!='.'){
            if(occurance.find(board[row][col])!=occurance.end())return false;
             occurance.insert(board[row][col]);
        }
    }
        return true;
    }
    
    bool valid_col(int col,vector<vector<char>>board){
        map<char,int>freq;
        for(int row=0;row<9;row++){
            if(board[row][col]!='.'){
                freq[board[row][col]]++;
               if(freq[board[row][col]]>1)return false;
                 
            }
        }
     
        return true;
    }
    
    
    vector<vector<char>> get_all_boxes(vector<vector<char>>board){        
      
        vector<vector<char>>boxes;
        for(int box_row=0;box_row<3;box_row++){
            for(int box_col=0;box_col<3;box_col++){
                int start_row=box_row*3,start_col=box_col*3;
                  vector<char>box;
                for(int i=start_row;i<start_row+3;i++){
                    for(int j=start_col;j<start_col+3;j++){
                        box.push_back(board[i][j]);
                    }
                }
                boxes.push_back(box);
            }
        }
        return boxes;
    }
    
    bool valid_box(vector<char>box){
      map<char,int>freq;
        for(int row=0;row<9;row++){
            if(box[row]!='.'){
                freq[box[row]]++;
               if(freq[box[row]]>1)return false;
                 
            }
        }
     
        return true;
    }
    
    
    
    
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int row=0;row<9;row++){
            if(!valid_row(row,board))return false;
        }
        
        for(int col=0;col<9;col++){
            if(!valid_col(col,board))return false;
        }
        
        vector<vector<char>>boxes=get_all_boxes(board);
        for(int i=0;i<boxes.size();i++){
           if(!valid_box(boxes[i]))return false; 
        }
        
        return true;
        
    }
};