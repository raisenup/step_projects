import 'package:flutter/material.dart';

class HomePage extends StatefulWidget {
  const HomePage({super.key});

  @override
  State<HomePage> createState() => _HomePageState();
}

class _HomePageState extends State<HomePage> {
  final data = const <String>[
    "Name: Illia",
    "Surname: Onufriychuk",
    "Gender: Male",
    "Job: Software Developer",
  ];
  @override
  Widget build(BuildContext context) {
    return Center(
      child: Padding(
        padding: const EdgeInsets.only(top: 20),
        child: Card(
          child: Padding(
            padding: const EdgeInsets.all(10),
            child: SizedBox(
              width: 900,
              height: 400,
              child: Row(
                children: <Widget>[
                  Image.asset('assets/images/me.jpg', height: 400, width: 400),
                  Padding(
                    padding: const EdgeInsets.only(left: 10, top: 90),
                    child: Column(
                    crossAxisAlignment: CrossAxisAlignment.start,
                    children: [
                      ...data
                          .map((e) => Text(
                                e,
                                style: const TextStyle(fontSize: 24)),
                              )
                          .toList()
                    ],
                  ),
                  )
                ],
              ),
            ),
          ),
        ),
      ),
    );
  }
}
