public class Dtype {
    public static void main(String[] args) {
        boolean found=true;
        System.out.println(found);

        char ch = 'k';
        System.out.println("My character is  " +(char)(ch+1));

        byte marks= 110;
        System.out.println("MY marks: "+ marks);

        short weight =70;
        System.out.println("My weight :"+ weight);

        int height= 1000;
        System.out.println("My height: "+height);

        long lenght= 10000000000L;
        System.out.println("My lenght: "+ lenght);

        float number= 3.1422f;
        System.out.println("My number: "+ number);

        double percentage= 99.99;
        System.out.println("My percentage: "+ percentage);

        byte num1=10;
        short num2=num1;
        System.out.println(num2);
        
        int num3=num2;
        System.out.println(num3);

        long num4=num3;
        System.err.println("last num: "+ num4);

        int num=100;
        char myCh = (char)num;
        System.out.println(myCh);

        int num7=107;
        char myCh2=(char)num7;
        System.out.println(myCh2);

    }
}
