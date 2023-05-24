import 'package:flutter/material.dart';
import 'package:rick_and_morty/domain/character.dart';

class CardCharacter extends StatelessWidget {
  final Character character;
  const CardCharacter({super.key, required this.character});

  @override
  Widget build(BuildContext context) {
    final characterstats = [
      character.name.toString(),
      character.status.toString(),
      character.gender.toString(),
      character.location.toString(),
    ];
    final height = MediaQuery.of(context).size.height;
    return Card(
      elevation: 5,
      shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(20.0)),
      child: Container(
        decoration: BoxDecoration(
          color: const Color(0xff2b2b2b),
          borderRadius: BorderRadius.circular(20.0),
          boxShadow: [
            BoxShadow(
              color: Colors.black.withOpacity(0.5),
              spreadRadius: 2,
              blurRadius: 5,
              offset: const Offset(0, 3), // changes the position of the shadow
            ),
          ],
        ),
        child: Row(
          mainAxisAlignment: MainAxisAlignment.start,
          children: [
            Transform.scale(
              scale: 0.9,
              child: ClipRRect(
                borderRadius: BorderRadius.circular(20.0),
                child: Image.network(character.image.toString()),
              ),
            ),
            Padding(
              padding: EdgeInsets.all(height / 32),
              child: Column(
                crossAxisAlignment: CrossAxisAlignment.start,
                children: [
                  Expanded(
                    child: 
                      Text(characterstats[0], style: const TextStyle(fontSize: 23, fontWeight: FontWeight.w800)),
                  ),
                  Expanded(
                    child: 
                      Text("${characterstats[1]} - ${characterstats[2]}", style: const TextStyle(fontWeight: FontWeight.w600),),
                  ),
                  Expanded(
                    child: 
                     Column( 
                      children: [
                        const Text("Last known location:", style: TextStyle(color: Colors.grey, fontWeight: FontWeight.w600)),
                        Text(characterstats[3], style: const TextStyle(fontWeight: FontWeight.w500),)
                      ]
                    )
                  ),
                ],
              ),
            )
          ],
        ),
      ),
    );
    // child: Row(children: [
    //   Expanded(
    //       child:
    //           Image.network(character.image.toString(), fit: BoxFit.cover)),
    //   Column(
    //     children: [
    //       Text(character.name.toString()),
    //       Text(character.gender.toString()),
    //       Text(character.status.toString()),
    //       Text(character.location.toString()),
    //     ],
    //   )
    // ]),
  }
}
