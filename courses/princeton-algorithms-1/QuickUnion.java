public class QuickUnion {
    private int[] id;

    public void QuickUnionUF(int n) {
        id = new int[n];
        for(int i = 0; i < n; ++i) id[i] = i;
    }

    public int root(int i) {
        while(i != id[i])  i = id[i];
        return i;
    }

    public boolean connected(int p, int q) {
        return root(p) == root(q);
    }

    public void union(int p, int q) {
        int i = root(p);
        int j = root(q);
        id[i] = j;
    }

    public static void main(String[] args) {
        QuickUnion example = new QuickUnion();
        example.QuickUnionUF(6);

        System.out.println("Root 2: " + example.root(2) + " Root 4: " + example.root(4));
        System.out.println("union(2,4)");
        example.union(2, 4);
        System.out.println("Root 2: " + example.root(2) + " Root 4: " + example.root(4));
        System.out.println(example.connected(2, 4));

        System.out.println("Root 2: " + example.root(2) + " Root 4: " + example.root(4));
        System.out.println("union(4,5)");
        example.union(4, 5);
        System.out.println("Root 4: " + example.root(2) + " Root 5: " + example.root(4));
        System.out.println(example.connected(4, 5)); 

        System.out.println(example.root(2));
    }

}