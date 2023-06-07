import 'package:flutter/material.dart';
import '../screen/dog_page.dart';
import '../../core/texts/custom_text.dart';

class HomePage extends StatefulWidget {
  const HomePage({super.key});

  @override
  State<HomePage> createState() => _HomePageState();
}

class _HomePageState extends State<HomePage> {
  @override
  Widget build(BuildContext context) {
    final height = MediaQuery.of(context).size.height;
    //final width = MediaQuery.of(context).size.width;
    return Scaffold(
      backgroundColor: Colors.white,
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.spaceEvenly,
          children: [
            SizedBox(
              height: height / 100 * 60,
              child: Column(
                children: [
                  Align(
                    alignment: Alignment.centerRight,
                    child: TextButton(
                      onPressed: () {
                        Navigator.push(
                          context,
                          MaterialPageRoute(
                            builder: (context) => DogPage(),
                          ),
                        );
                      },
                      style: ButtonStyle(
                          overlayColor: MaterialStateColor.resolveWith(
                              (states) => Colors.black12)),
                      child: const Row(
                        mainAxisSize: MainAxisSize.min,
                        children: [
                          Text(
                            "Skip ",
                            style: TextStyle(
                                fontFamily: 'Gilroy',
                                color: Colors.black,
                                fontSize: 20,
                                fontWeight: FontWeight.w600),
                            textAlign: TextAlign.right,
                          ),
                          Icon(
                            Icons.arrow_forward_ios_sharp,
                            size: 18,
                            color: Colors.black,
                          )
                        ],
                      ),
                    ),
                  ),
                  Image.asset("assets/images/home_dog.png"),
                ],
              ),
            ),
            SizedBox(
              height: height / 100 * 30,
              child: Column(
                mainAxisAlignment: MainAxisAlignment.spaceBetween,
                children: [
                  const Text(
                    "Ready to make a\nnew friend?",
                    style: TextStyle(
                        fontSize: 32,
                        fontFamily: 'Gilroy',
                        fontWeight: FontWeight.bold),
                    textAlign: TextAlign.center,
                  ),
                  const Text(
                    "Select your location and simply search\nfor pets near you.",
                    style: TextStyle(
                        fontFamily: 'Gilroy',
                        fontWeight: FontWeight.w600,
                        fontSize: 18,
                        color: Colors.grey),
                    textAlign: TextAlign.center,
                  ),
                  FilledButton(
                    onPressed: () {
                      Navigator.push(
                        context,
                        MaterialPageRoute(
                          builder: (context) => DogPage(),
                        ),
                      );
                    },
                    style: FilledButton.styleFrom(
                      backgroundColor: Colors.black,
                      minimumSize: const Size(200, 70),
                    ),
                    child: const Row(
                      mainAxisSize: MainAxisSize.min,
                      children: [
                        CustomText(
                          "Get Started ",
                          color: Colors.white,
                          fontWeight: FontWeight.w500,
                        ),
                        Icon(
                          Icons.arrow_forward_ios_sharp,
                          size: 18,
                        )
                      ],
                    ),
                  ),
                ],
              ),
            ),
          ],
        ),
      ),
    );
  }
}
