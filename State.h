#pragma once


//template < typename type >

class Tetrimino;

class State //abstract
{
	public:
		virtual State * update( Tetrimino & actor , double time_delta ) = 0;
		// virtual void input() {};
		// virtual void update() {};
};

class Falling : public State//< Tetrimino >
{
	public:

		virtual State * update( Tetrimino & actor , double time_delta );

	private:

		double time = 0.0;
		const double fall_delay = 1.0;
};

class Next : public State
{
	public:
		virtual State * update( Tetrimino & actor , double time_delta );
};

//class Game_actor
//{
//	public:
//
//		virtual void rotate( Rotation in_rotation ) = 0;
//};
