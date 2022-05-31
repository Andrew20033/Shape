public class Board {
    private Shape[] parts = new Shape[4];

    public Board() {
    }

    public Shape[] getParts() {
        return parts;
    }

    public void addShape(Shape shape, int part) { // ������� ������ � ��������� ����� �� 1 �� 4
        if (part > 0 && part < 5) {
            if (parts[part - 1] == null) {
                parts[part - 1] = shape;
                System.out.println("� ����� ����� � " + (part)+" ��������� ������: " + shape);
            }
            else System.out.println("������ �������� ������, ��������� ���� ����� ������.");
        }
        else System.out.println("������� ������ ����� ����� ����� �� 1 �� 4.");
    }

    public void addShape(Shape shape) { // ������� ������ �� ����� ��������� ����� (��� �������)
        boolean add = false;
        for (int i = 0; i < parts.length; i++) {
            if (parts[i] == null) {
                parts[i] = shape;
                add = true;
                System.out.println("�� ����� ��������� ������: " + shape);
                break;
            }
        }
        if (!add) System.out.println("���������� ����� ���, ������� ��� �� ����.");
    }

    public void delShape(int part) { // ������ ������ �� ��������� ����� �� 1 �� 4
        if (part > 0 && part < 5) {
            if (parts[part - 1] != null) {
                parts[part - 1] = null;
                System.out.println("����� ����� � " + (part)+" �������.");
            }
            else System.out.println("� ��������� ����� ������ �������.");
        }
        else System.out.println("������� ������ ����� ����� ����� �� 1 �� 4.");
    }


    public void info() {
        double p = 0;
        for (int i = 0; i < parts.length; i++) {
            if (parts[i] != null) {
                p += parts[i].getArea();
                System.out.println("� ����� ����� � " + (i + 1) + "����� ������: " + parts[i]);
            }
            else System.out.println("����� ����� � " + (i + 1) + "�����.");
        }
        System.out.println();
        System.out.println("��������� ������� ����� �� �����: " + p);
    }
}