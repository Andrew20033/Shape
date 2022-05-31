public class Main {

    public static void main(String[] args) {

        Shape triangelar = new Triangelar(new Point(0, 0), new Point(0, 4), new Point(3, 0));
        System.out.println(triangelar);
        System.out.println(triangelar.getArea());
        System.out.println(triangelar.getPerimetr());

        System.out.println();

        Shape circle = new Circle(new Point(0, 0), new Point(3, 0));
        System.out.println(circle);
        System.out.println(circle.getArea());
        System.out.println(circle.getPerimetr());

        System.out.println();

        Shape quadrangle = new Quadrangle(new Point(0, 0), new Point(2, 0), new Point(2, 2), new Point(2, 0));
        System.out.println(quadrangle);
        System.out.println(quadrangle.getArea());
        System.out.println(quadrangle.getPerimetr());

        System.out.println();

        Board board = new Board();
        board.addShape(triangelar, 1);
        board.addShape(triangelar, 1); //�� ��������� ��� ��� ����� ���������
        board.addShape(triangelar, 5); //�� ��������� ��� ��� ��� ����� �����
        board.addShape(circle, 2);
        board.addShape(quadrangle, 3);
        board.addShape(quadrangle);
        board.addShape(quadrangle); //�� ��������� ��� ��� ��� �����
        board.delShape(5); //�� �������� ��� ��� ��� ����� �����
        board.delShape(3);
        board.addShape(triangelar, 3);

        System.out.println();

        board.info();
    }

}