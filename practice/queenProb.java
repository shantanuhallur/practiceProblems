public class queenProb {

public static int nqueenC1d(boolean[] boxes ,int tnq,int bno,int qpsf,String psf){
    if(qpsf==tnq){
        System.out.println(psf);
        return 1;
    }

    int count =0;


    for(int bidx = bno ; bidx< boxes.length; bidx++ ){
        
        count+= nqueenC1d(boxes,tnq,bidx+1,qpsf+1,psf+"q"+qpsf +"b" + bidx +" ");
        
    }

    return count;
}

public static int nqueenP1d(boolean[] boxes ,int tnq,int qpsf,String psf){
    if(qpsf==tnq){
        System.out.println(psf);
        return 1;
    }

    int count =0;


    for(int bidx = 0; bidx< boxes.length; bidx++ ){

        if(boxes[bidx]!=true){
        boxes[bidx]=true;
        count+= nqueenP1d(boxes,tnq,qpsf+1,psf+"q"+qpsf +"b" + bidx+" ");
        boxes[bidx]=false;
        }
    }

    return count;
}



  public static void main(String[] args) {
      boolean[] boxes = new boolean[6];
   System.out.println(nqueenP1d(boxes,3,0,"")); 
  }
}
