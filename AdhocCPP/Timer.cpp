struct Timer{

	std::chrono::time_point<std::chrono::steady_clock> m_start, m_end;	
	std::chrono::duration<float> duration;
	Timer()
	{
		m_start = std::chrono::high_resolution_clock::now();
		
	}

	~Timer()

	{
		m_end = std::chrono::high_resolution_clock::now();
		duration = (m_end - m_start)* 1000.0f;
		std::cout << "Piece of code took " << duration.count() << " milli seconds to finish" << std::endl;
		//std::endl if removed can also reduce your benchmarks
	
	}

};
void function()
{
	for (int i = 0; i < 100; i++)
	{
		std::cout << "Hello" << std::endl;
	
	}
}

int main()
{
	Timer b_timer;
	using namespace std::literals::chrono_literals;
	std::this_thread::sleep_for(3s);
	function();
	//std::cin.get();
	return 0;

}
