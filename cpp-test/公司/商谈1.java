
    void compare(List<Integer> a, List<Integer> b) {
        System.out.println("算法开始时间:" + sdf.format(new Date()));
        //获取a和b的长度
        int aLen = a.size();
        int bLen = b.size();
        //计算最佳的hash长度
        int aCapacity = 1;
        int bCapacity = 1;
        while (aCapacity < aLen) {
            aCapacity <<= 1;
        }
        while (bCapacity < bLen) {
            bCapacity <<= 1;
        }
        Map<Integer, Boolean> aMap = new HashMap(aCapacity);
        Map<Integer, Boolean> bMap = new HashMap(bCapacity);
        //将参数a和b存入哈希表，此处空间复杂度O(n),时间复杂度O(n)
        for (int i = 0; i < aLen; i++) {
            aMap.put(a.get(i), true);
        }
        for (int i = 0; i < bLen; i++) {
            bMap.put(b.get(i), true);
        }
        Set<Integer> add = new TreeSet();
        Set<Integer> remove = new TreeSet();

        //hash比较，得出结果，此处时间复杂度O(n)
        for (int i = 0; i < bLen; ++i) {
            int value = b.get(i);
            if (aMap.get(value) == null) {
                add.add(value);
            }
        }
        for (int i = 0; i < aLen; ++i) {
            int value = a.get(i);
            if (bMap.get(value) == null) {
                remove.add(value);
            }
        }
        System.out.println("算法结束时间:" + sdf.format(new Date()));
        System.out.println("增加：" + add.size());
        System.out.println("减少:" + remove.size());
//        Iterator<Integer> it = add.iterator();
//        System.out.println("增加：");
//        while (it.hasNext()) {
//            Integer str = it.next();
//            System.out.print(str + " ");
//        }
//        System.out.println();
//        it = remove.iterator();
//        System.out.println("减少：");
//        while (it.hasNext()) {
//            Integer str = it.next();
//            System.out.print(str + " ");
//        }
//        System.out.println("算法打印时间:" + sdf.format(new Date()));
    }


    public static void main(String[] args) {

        Random random = new Random();
        ST t = new ST();
        List a = new Ar
