import 'package:flutter/material.dart';

class DangerousPage extends StatefulWidget {
  const DangerousPage({super.key});

  @override
  State<DangerousPage> createState() => _DangerousPageState();
}

class _DangerousPageState extends State<DangerousPage> {
  @override
  Widget build(BuildContext context) {
    return const Center(
      child: Text(
        "DANGER!",
        style: TextStyle(color: Colors.red, fontSize: 50, fontWeight: FontWeight.w800),
      ),
    );
  }
}
