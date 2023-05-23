import 'package:flutter/material.dart';
import 'package:about_me/ui/screen/home_page.dart';
import 'package:about_me/ui/screen/dangerous_page.dart';

class App extends StatelessWidget {
  const App({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      title: 'Questionnare',
      theme: ThemeData.dark(),
      home: const RootPage(),
    );
  }
}

class RootPage extends StatefulWidget {
  const RootPage({super.key});

  @override
  State<RootPage> createState() => _RootPageState();
}

class _RootPageState extends State<RootPage> {
  int currentPage = 0;
  final pages = [
    const HomePage(),
    const DangerousPage(),
  ];
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text("Questionnaire"),
      ),
      body: pages[currentPage],
      bottomNavigationBar: NavigationBar(
        destinations: const [
          NavigationDestination(icon: Icon(Icons.home), label: 'Home'),
          NavigationDestination(icon: Icon(Icons.dangerous), label: 'Dangerous'),
        ],
        onDestinationSelected: (int i) {
          setState(() {
            currentPage = i;
          });
        },
        selectedIndex: currentPage,
      ),
    );
  }
}
