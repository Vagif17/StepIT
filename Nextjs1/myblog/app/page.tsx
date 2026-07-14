
export default function Home() {

  const articles = [
    {
      user : "John Doe",
      title : "The Benefits of Regular Exercise",
      content : "Regular exercise has numerous benefits for both physical and mental health. It can help improve cardiovascular health, strengthen muscles and bones, boost mood, and reduce the risk of chronic diseases.",
      date : "2023-06-01"
    },
    {
      user : "Jane Smith",
      title : "Healthy Eating Habits",
      content : "Maintaining healthy eating habits is essential for overall well-being. It involves consuming a balanced diet that includes a variety of fruits, vegetables, whole grains, lean proteins, and healthy fats while limiting processed foods and sugary beverages.",
      date : "2023-06-02"
    },
    {
      user : "Mike Johnson",
      title : "The Importance of Sleep",
      content : "Getting enough quality sleep is crucial for optimal health. Sleep allows the body to repair and rejuvenate itself, supports cognitive function, and helps regulate mood. Adults should aim for 7-9 hours of sleep per night, while children and teenagers require more.",
      date : "2023-06-03"
    }
  ]


  return (
    <div className="flex flex-col flex-1 items-center justify-center bg-zinc-50 font-sans dark:bg-black">
    
        
      <main className="flex flex-1 w-full max-w-3xl flex-col py-32 px-16 bg-white dark:bg-black">

        {articles.map((articles, index) => (
          <div key={index} className="
          mb-6
          rounded-xl
          bg-zinc-900
          border
          border-zinc-800
          p-6
          shadow-md
          transition-all
          hover:border-lime-500
          hover:shadow-lg
        ">
            <h2 className="text-2xl font-bold text-gray-800 dark:text-white">{articles.title}</h2>
            <p className="text-gray-600 dark:text-gray-300">{articles.content}</p>
            <p className="text-sm text-gray-500 dark:text-gray-400">By {articles.user} on {articles.date}</p>
          </div>
        ))}        

      </main>
    
    </div>
  );
}
