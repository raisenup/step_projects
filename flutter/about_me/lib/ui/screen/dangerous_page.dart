import 'package:flutter/material.dart';
import 'dart:async';
import 'dart:math';
import 'package:about_me/core/vertical_line.dart';

class DangerousPage extends StatefulWidget {

  final double speed;
  final double maxLength;

  const DangerousPage({
    this.speed = 12.0,
    this.maxLength = 10,
    super.key
  });

  @override
  State<DangerousPage> createState() => _DangerousPageState();
}

class _DangerousPageState extends State<DangerousPage> {
  List<Widget> _verticalLines = [];
  Timer ?timer;

  @override
  void initState() {
    _startTimer();
    super.initState();
  }

  @override
  Widget build(BuildContext context) {
    return Stack(
      children: _verticalLines
    );
  }
  
  void _startTimer() {
    timer = Timer.periodic(const Duration(milliseconds: 300), (timer) {
      setState(() {
        _verticalLines.add(
            _getVerticalTextLine(context)
        );
      });
    });
  }

  @override
  void dispose() {
    timer!.cancel();
    super.dispose();
  }

  Widget _getVerticalTextLine(BuildContext context) {
    Key key = GlobalKey();
    return Positioned(
      key: key,
      left: Random().nextDouble() * MediaQuery.of(context).size.width,
      child: VerticalTextLine(
        onFinished: () {
          setState(() {
            _verticalLines.removeWhere((element) {
              return element.key == key;
            });
          });
        },
        speed: 1 + Random().nextDouble() * 9,
        maxLength: Random().nextInt(10) + 5
      ),
    );
  }
}

