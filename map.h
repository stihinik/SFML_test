#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace sf;

float offsetX = 0, offsetY = 0;


const int H = 38; //���������� ����� � ������� ����� 
const int W = 249*3; //���������� ��������� � ����� �������(�� ��� ������, ��� ������ ������)


String TileMap_1[H] = {
	"0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000",
	"0                                                                                                                                                                                                                                                         ",
	"0                                                                                                                                                                                                                                                         ",
	"0                                                                                                                                                                                                                                                         ",
	"0                                                                                                                                                                                                                                                         ",
	"0                                                                                                                                                                                                                                                         ",
	"0                                                                                                                                                                                                                                                         ",
	"0                                                                                                                                                                                                                                                         ",
	"0                                                                                                                                                                                                                                                         ",
	"0                                                                                                                                                                                                                                                         ",
	"0                                                                                                                                                                                                                                                         ",
	"0                                                                                                                                                                                                                                               PP        ",
	"0                                                                                                                                                                                                                                              P P        ",
	"0                                                                                                                                                                                                                                                P        ",
	"0                                                                                                                                                                                                                                                P        ",
	"0                                                                                                                                                                                                                                                P        ",
	"0                                                                                                                                                                                                                                              PPPPP      ",
	"0                                                                                                                                                                                                                                                         ",
	"0                                                                                                                   www                   www                       www                www                                                                ",
	"0                                                                                                                                                                                                                                                         ",
	"0                                                                                                                                                                                                                                                         ",
	"0                                                                                                                                                                                                                                                         ",
	"0                                                                                                                                                                                                                                                         ",
	"0                                                                                                                                                                                                                                                         ",
	"0                                                                                                                                                                                                                                                         ",
	"0                                                                                                                    ddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd                                                            ",
	"0                                                                                                                                                                                                                                                         ",
	"0                                                                                             ddddddddddddddddd                                                                                                                                           ",
	"0                                                                  kkkkkkkk                                                                                                                                                                               ",
	"0                                                                                                                                                                                                                                                       kk",
	"0                                                                                kkkkkkkk                                                                                                                                                             kkkk",
	"0                                 c                     kkkkkk                                                                                                                                                                                      kkkkkk",
	"0                   t                                                                                                          t                                        t                                                                         kkkkkkkk",
	"0                                                                                                                                                                                                                                               kkkkkkkkkk",
	"0                                                        G                           G                                                                                                                                                        kkkkkkkkkkkk",
	"PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP      PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP    PPPPP    PPPPP    PPPPPPccccPPPPPPPPPPPPPPPPPPPPPP",
	"PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP      PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP    PPPPP    PPPPP    PPPPPPccccPPPPPPPPPPPPPPPPPPPPPP",
	"PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP      PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP    PPPPP    PPPPP    PPPPPPccccPPPPPPPPPPPPPPPPPPPPPP"
};

String TileMap_2[H] = {
	"0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000",
	"                                                                                                                                                                                                                                                          ",
	"                                                                                                                                                                                                                                                          ",
	"                                                                                                                                                                                                                                                          ",
	"                                                                                                                                                                                                                                                          ",
	"                                                                                                                                                                                                                                                          ",
	"                                                                                                                                                                                                                                             PPP          ",
	"                                                                                                                                                                                                                                            P   P         ",
	"                                                                                                                                                                                                                                                P         ",
	"                                                                                                                                                                                                                                               P          ",
	"                                                                                                                                                                                                                                              P           ",
	"                                                                                                                                                                                                                                             P            ",
	"                                                                              dddddddddd                       dddddddddddd                        ddddddddddddd                                                                            PPPPP         ",
	"                                                                                                                                                                                                                                                          ",
	"                                                                         rr                                                                                                                                                                               ",
	"                                                                                                                    wwwww                                                                                                                                 ",
	"                                                                   rrr                      r              r                   r               r                                                                                                          ",
	"                                                  rrrrrrrrrrrrrrrr                                                                                                                                                                                        ",
	"                                                                                                                                                                                                                                                          ",
	"               rrrrrrr            rrrrrrrrrrrrrr                                                                                                                                                                                                          ",
	"                            rrrrrrr                                          dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd                                                                               ",
	"                                                                                                                                                                                                                                                          ",
	"                                                                                                                                                                               dddddddddddddddddddddddddddddddddddddddddddddddddddddddd                   ",
	"          rrr                                                                                                                                                                                                                                             ",
	"                                                                                                                                                                                                                                                          ",
	"     t                                rrrrrrrrrrrr                                                                                                                                                                                                        ",
	"                                                                                                                                                                                                                                                          ",
	"  kkkkk           rrrr                                                                                           t                                                                                                                                        ",
	"kkkkkkk                                              rr                                                                                                                                                                                                   ",
	"kkkkkkk                                                                                                        t t                                                                                                                                        ",
	"kkkkkkk  rrrrrr                                        rrrrrrrrrrrrrrrrr                                                                                                                                                                                  ",
	"kkkkkkk                                                                                                      t t t                                                                                                                                        ",
	"kkkkkkk                                      rrrrrr                                                                                                                                                                                                       ",
	"kkkkkkk                                                                                                    t t t t                                                                                                                                        ",
	"kkkkkkk       rrrrrrrrr    rrrrrrrrrrrrrrrrr                                                                                             G                                                                                                                ",
	"PPPPPPP                                                                     PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPccccPPPPPPPPPPPP      PPPPPPPPPPPPPccccPPPPPPPPPPPPPccccPPPPPPPPP      PPPPPPPPPPPPPPPPPPPPPPPPP",
	"PPPPPPP                                                                     PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPccccPPPPPPPPPPPP      PPPPPPPPPPPPPccccPPPPPPPPPPPPPccccPPPPPPPPP      PPPPPPPPPPPPPPPPPPPPPPPPP",
	"PPPPPPP                                                                     PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPccccPPPPPPPPPPPP      PPPPPPPPPPPPPccccPPPPPPPPPPPPPccccPPPPPPPPP      PPPPPPPPPPPPPPPPPPPPPPPPP"
};
String TileMap_3[H] = {
	"0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000",
	"                                                                                                                                                                                                                                                         0",
	"                                                                                                                                                                                                                                                         0",
	"                                                                                                                                                                                                                                                         0",
	"                                                                                                                                                                                                                                                         0",
	"                                                                                                                                                                                                                                                         0",
	"                                                                                                                                                                                                                                                         0",
	"                                                                                                                                                                                                                                                         0",
	"                                                                                                                                                                                                                                                         0",
	"                                                                                                                                                                                                                                            PPPP         0",
	"                                                                                                                                                                                                                                           P    P        0",
	"                                                                                                                                                                                                                                                P        0",
	"                                                                                                                                                                                                                                              PP         0",
	"                                                                                                                                                                                                                                                P        0",
	"                                                                                                                                                                                                                                           P    P        0",
	"                                                                                                                                                                                                                                            PPPP         0",
	"                                                                                                                                                                                                                                                         0",
	"                                                                                                                                                                                                                                                         0",
	"                                                                                                                                                               PPPP                                                                                      0",
	"                                                                                                                                                              PPPPP                                                                                      0",
	"                                                                                                                                                             PPPPPP                                                                                      0",
	"                                                                                                                                                            PPPPPPP                                                                                      0",
	"                                                                                                                                                           PPPPPPPP                                                                                      0",
	"                                                                                                                                                          PPPPPPPPP                                                                                      0",
	"                                                                                                                                                         PPPPPPPPPP                                                                                      0",
	"                                                                                                                                                        PPPPPPPPPPP                                           0                                          0",
	"                                                                                                                                                       PPPPPPPPPPPP                                           0                                          0",
	"                                                                                                                                                      PPPPPPPPPPPPP                                           0                                          0",
	"                                                                                                    rrrrrrrrrrrrrcccccrrrrrrrrrrrrr                  PPPPPPPPPPPPPP                                           0                                          0",
	"                                                          rrrrrrrcccrrrrrr                                                                          PPPPPPPPPPPPPPP                                           0                                          0",
	"                    rrrrcccrrrrr                                                                                                                   PPPPPPPPPPPPPPPP                                           0                                          0",
	"                                                                             rrrrrrrrr     rrrrrrr                                                PPPPPPPPPPPPPP                                              0                                          0",
	"                                  rrrrrrrrr     rrrrrrr                                                                                          PPPPPPPPPPPPPPP                 t                   t        0                                          0",
	"     rrrrrrrrrrrr                                                                                                                               PPPPPPPPPPPPPPPP                                              0                                          0",
	"                                                                                                                                               PPPPPPPPPPPPPPPPP                                              0                                          0",
	"P                                                                                                                                       PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP",
	"P                                                                                                                                       PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP",
	"P                                                                                                                                       PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP"
};
String TileMap[H]{};
