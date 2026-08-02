import type { Metadata } from "next";
import { Geist, Geist_Mono } from "next/font/google";
import "../globals.css";

const geistSans = Geist({
  variable: "--font-geist-sans",
  subsets: ["latin"],
});

const geistMono = Geist_Mono({
  variable: "--font-geist-mono",
  subsets: ["latin"],
});

export const metadata: Metadata = {
  title: "NextRep",
  description: "Blog about fitness and health",
  icons: {
    icon: "/favicon.ico",
  },
};

export default function RootLayout({
  children,
}: Readonly<{
  children: React.ReactNode;
}>) {
  return (
    <html
      lang="en"
      className={`${geistSans.variable} ${geistMono.variable} h-full antialiased`}
    >
      <body className="min-h-full flex flex-col bg-black">
      <header className="fixed top-0 left-0 z-50 h-20 w-full bg-neutral-950 px-6">
        <img
          src="/NextRepLogo.png"
          alt="NextRep"
          className="w-25"
        />
      </header>

      <main className="pt-20">
        {children}
      </main>
    </body>
    </html>
  );
}
