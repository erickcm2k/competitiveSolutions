public class QuickFind {
    private int[] id;

    public void QuickFinder(int N) {
        id = new int[N];
        for(int i = 0; i < N; ++i) {
            id[i] = i;
        }
    }

    /* 
    Checks if p and q indices are connected 
    */    
    public boolean connected(int p, int q) {
        try {
            return id[p] == id[q]; 
        } catch (Exception e) {
            System.err.println("Index error");
            return false;
        }
        
    }

    /* 
    Connects a point p or a set of points previously connected
    with a new point q.
    */
    public void connect(int p, int q) {
        int pid = id[p];
        int qid = id[q];

        for(int i = 0; i < id.length; ++i) {
            if(id[i] == pid) id[i] = qid;
        }
    }

    public static void main(String[] args) {
      System.out.println("Hello world");
    }
}