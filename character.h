class Character{
private:
	int x, y;
public:
	Character();
	int getX();
	int getY();
	class Controller{
	public:
		Controller();
		int exit;
		void move(int);
	};
};
