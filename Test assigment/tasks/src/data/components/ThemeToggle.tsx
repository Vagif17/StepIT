"use client";

import { useEffect, useState } from "react";

const ThemeToggle = () => {
  const [isDark, setIsDark] = useState(false);

  useEffect(() => {
    const savedTheme = localStorage.getItem("theme");

    if (savedTheme === "dark") {
      document.documentElement.classList.add("dark");
      setIsDark(true);
    }
  }, []);

  const toggleTheme = () => {
    const html = document.documentElement;

    html.classList.toggle("dark");

    const dark = html.classList.contains("dark");

    setIsDark(dark);
    localStorage.setItem("theme", dark ? "dark" : "light");
  };

  return (
    <button
      onClick={toggleTheme}
      className="rounded-lg border border-gray-200 bg-white px-3 py-2 text-sm font-medium text-gray-700 transition hover:bg-gray-100 dark:border-gray-700 dark:bg-gray-800 dark:text-gray-200 dark:hover:bg-gray-700"
    >
      {isDark ? "☀️ Light" : "🌙 Dark"}
    </button>
  );
};

export default ThemeToggle;