import 'package:flutter/material.dart';

class CustomText extends StatelessWidget {
  final String text;
  final FontWeight fontWeight;
  final double fontSize;
  final Color color;
  final TextAlign textAlign;

  const CustomText(
    this.text,{
    this.fontWeight = FontWeight.bold,
    this.fontSize = 20,
    this.color = Colors.black,
    this.textAlign = TextAlign.left,
    super.key,
  });

  @override
  Widget build(BuildContext context) {
    var defaultStyle = const TextStyle(
      fontFamily: "Gilroy",
      fontWeight: FontWeight.bold,
      fontSize: 20,
      color: Colors.black,
    );

    final modifiedStyle = defaultStyle.copyWith(fontWeight: fontWeight, fontSize: fontSize, color: color);

    return Text(
      text,
      style: modifiedStyle,
      textAlign: textAlign,
    );
  }
}
