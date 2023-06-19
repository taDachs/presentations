class Position {
private:
  float x_;
  float y_;
  float z_;
public:
  Position(float x, float y, float z): x_(x), y_(y) {
    z_ = z;
  }
  float getX() const { return x_; }
};

int main() {
  Position pos(1, 2, 3);
  float x = pos.getX();
  return 0;
}
