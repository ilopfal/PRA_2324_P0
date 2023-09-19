class BrazoRobotico {
private:
    double x;
    double y;
    double z;
    bool sujecion;

public:
    BrazoRobotico(double x, double y, double z,bool sujecion);
    double getx();
    double gety();
    double getz();
    bool haysujecion();
    void coger();
    void soltar();
    void mover(double x_nueva, double y_nueva, double z_nueva);
}
;
