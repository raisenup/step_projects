import 'package:flutter/material.dart';
import '../../core/texts/custom_text.dart';

class DogPage extends StatefulWidget {
  const DogPage({super.key});

  @override
  State<DogPage> createState() => _DogPageState();
}

class _DogPageState extends State<DogPage> {
  @override
  Widget build(BuildContext context) {
    final height = MediaQuery.of(context).size.height;
    return Scaffold(
      body: Stack(
        children: [
          Image.asset("assets/images/dogpage_dog.jpg"),
          Positioned(
            left: 10,
            top: 10,
            child: IconButton(
              icon: const Icon(Icons.arrow_back_ios_new_sharp),
              onPressed: () {
                Navigator.pop(context);
              },
            ),
          ),
          Align(
            alignment: Alignment.bottomCenter,
            child: SizedBox(
              width: MediaQuery.of(context).size.width,
              height: height / 1.7,
              child: Container(
                decoration: const BoxDecoration(
                  color: Colors.white,
                  borderRadius: BorderRadius.only(
                    topLeft: Radius.circular(30),
                    topRight: Radius.circular(30),
                  ),
                ),
                child: Padding(
                  padding: const EdgeInsets.only(top: 15),
                  child: Column(
                    crossAxisAlignment: CrossAxisAlignment.start,
                    children: [
                      const Align(
                        alignment: Alignment.center,
                        child: CustomText(
                          "Pluto",
                          fontSize: 36,
                        ),
                      ),
                      const Padding(
                        padding: EdgeInsets.only(top: 15),
                        child: Row(
                          mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                          children: [
                            InfoCard(info: "3 years", tag: "Age"),
                            InfoCard(info: "3.5 kg", tag: "Weight"),
                            InfoCard(info: "Female", tag: "Sex"),
                          ],
                        ),
                      ),
                      Padding(
                        padding: const EdgeInsets.all(25.0),
                        child: Column(
                          crossAxisAlignment: CrossAxisAlignment.start,
                          children: [
                            const CustomText(
                              "Summary",
                              fontWeight: FontWeight.bold,
                              fontSize: 20,
                            ),
                            Padding(
                              padding: const EdgeInsets.only(top: 10),
                              child: Text(
                                "Pluto are small to medium sized short haired dog breed. He meduim-length coat, seen in variety of striking colors and patterns, is silky to touch. They have a soft personality.",
                                style: TextStyle(
                                  height: 2,
                                  fontFamily: 'Gilroy',
                                  fontWeight: FontWeight.w600,
                                  fontSize: 16,
                                  color: Colors.grey.shade700,
                                ),
                              ),
                            ),
                            Padding(
                              padding: const EdgeInsets.only(top: 10),
                              child: Row(
                                mainAxisAlignment:
                                    MainAxisAlignment.spaceBetween,
                                children: [
                                  FilledButton(
                                    onPressed: () {},
                                    style: FilledButton.styleFrom(
                                      backgroundColor: Colors.black,
                                      minimumSize: const Size(270, 60),
                                    ),
                                    child: const CustomText(
                                      "Adoption",
                                      color: Colors.white,
                                      fontWeight: FontWeight.w500,
                                    ),
                                  ),
                                  const FavoriteButton()
                                ],
                              ),
                            ),
                          ],
                        ),
                      )
                    ],
                  ),
                ),
              ),
            ),
          ),
        ],
      ),
    );
  }
}

class InfoCard extends StatelessWidget {
  final String info;
  final String tag;

  const InfoCard({
    required this.info,
    required this.tag,
    super.key,
  });

  @override
  Widget build(BuildContext context) {
    return SizedBox(
      width: 100,
      height: 100,
      child: Container(
        decoration: const BoxDecoration(
            color: Color(0xffeef6fd),
            borderRadius: BorderRadius.all(Radius.circular(20))),
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            CustomText(info),
            CustomText(
              tag,
              fontSize: 15,
              color: Colors.grey.shade600,
            ),
          ],
        ),
      ),
    );
  }
}

class FavoriteButton extends StatefulWidget {
  const FavoriteButton({super.key});

  @override
  State<FavoriteButton> createState() => _FavoriteButtonState();
}

class _FavoriteButtonState extends State<FavoriteButton> {
  bool isFavorite = false;

  void toggleFavorite() {
    setState(() {
      isFavorite = !isFavorite;
    });
  }

  @override
  Widget build(BuildContext context) {
    return FilledButton(
      onPressed: toggleFavorite,
      style: FilledButton.styleFrom(
        backgroundColor: Colors.black,
        minimumSize: const Size(60, 60),
      ),
      child: Icon(!isFavorite ? Icons.favorite_border : Icons.favorite),
    );
  }
}
